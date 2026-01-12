/*
** Automatically generated from `hlds_call_tree.m'
** by the Mercury compiler,
** version rotd-2026-01-12
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


// :- module hlds.hlds_call_tree.
// :- implementation.

/*
INIT mercury__hlds__hlds_call_tree__init
ENDINIT
*/

#include "hlds.hlds_call_tree.mih"


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
#include "edit_seq.mih"
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
#include "hlds.hlds_desc.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__cord__pti_cord_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_call_tree__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_call_tree__type_ctor_info_pred_callees_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_call_tree__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_name_arity_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_call_tree__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_call_tree__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_call_tree__list__ti_list_1hlds__hlds_call_tree__type_ctor_info_pred_callees_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_call_tree__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_call_tree__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_call_tree__type_ctor_info_pred_callees_0;

static const MR_PseudoTypeInfo hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_call_tree_info_0_0[6];

static const MR_ConstString hlds__hlds_call_tree__hlds__hlds_call_tree__field_names_call_tree_info_0_0[6];

static const MR_DuFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_call_tree_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_stag_ordered_call_tree_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_call_tree__hlds__hlds_call_tree__du_ptag_ordered_call_tree_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_name_ordered_call_tree_info_0[1];

static const MR_Integer hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_call_tree_info_0[1];

static const MR_PseudoTypeInfo hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_callee_0_0[2];

static const MR_DuArgLocn hlds__hlds_call_tree__hlds__hlds_call_tree__field_locns_callee_0_0[2];

static const MR_DuFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_callee_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_stag_ordered_callee_0_0[1];

static const MR_DuPtagLayout hlds__hlds_call_tree__hlds__hlds_call_tree__du_ptag_ordered_callee_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_name_ordered_callee_0[1];

static const MR_Integer hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_callee_0[1];

static const MR_PseudoTypeInfo hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_line_number_and_desc_0_0[2];

static const MR_DuFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_line_number_and_desc_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_stag_ordered_line_number_and_desc_0_0[1];

static const MR_DuPtagLayout hlds__hlds_call_tree__hlds__hlds_call_tree__du_ptag_ordered_line_number_and_desc_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_name_ordered_line_number_and_desc_0[1];

static const MR_Integer hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_line_number_and_desc_0[1];

static const MR_EnumFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_maybe_local_0_0;

static const MR_EnumFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_maybe_local_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__enum_ordinal_ordered_maybe_local_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__enum_name_ordered_maybe_local_0[2];

static const MR_Integer hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_maybe_local_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_call_tree__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_name_arity_0;

static const MR_PseudoTypeInfo hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_movability_report_0_0[7];

static const MR_ConstString hlds__hlds_call_tree__hlds__hlds_call_tree__field_names_movability_report_0_0[7];

static const MR_DuFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_movability_report_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_stag_ordered_movability_report_0_0[1];

static const MR_DuPtagLayout hlds__hlds_call_tree__hlds__hlds_call_tree__du_ptag_ordered_movability_report_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_name_ordered_movability_report_0[1];

static const MR_Integer hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_movability_report_0[1];

static const MR_EnumFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_num_digits_0_0;

static const MR_EnumFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_num_digits_0_1;

static const MR_EnumFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_num_digits_0_2;

static const MR_EnumFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_num_digits_0_3;

static const MR_EnumFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__enum_ordinal_ordered_num_digits_0[4];

static const MR_EnumFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__enum_name_ordered_num_digits_0[4];

static const MR_Integer hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_num_digits_0[4];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_call_tree__list__ti_list_1hlds__hlds_call_tree__type_ctor_info_callee_0;

static const MR_PseudoTypeInfo hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_pred_callees_0_0[3];

static const MR_DuFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_pred_callees_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_stag_ordered_pred_callees_0_0[1];

static const MR_DuPtagLayout hlds__hlds_call_tree__hlds__hlds_call_tree__du_ptag_ordered_pred_callees_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_name_ordered_pred_callees_0[1];

static const MR_Integer hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_pred_callees_0[1];

static MR_Word MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__func__line_list_to_line_pieces__1431__1_1_f_0(
  MR_String LambdaHeadVar__1_11);

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__find_staying_pred_ids__1111__1_2_p_0(
  MR_Word STATE_VARIABLE_StayingPredIdSet_1_25,
  MR_Word HeadVar__2_36);

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__find_moving_pred_ids__1078__1_2_p_0(
  MR_Word STATE_VARIABLE_ReachablePredIdSet_1_25,
  MR_Word HeadVar__2_36);

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__construct_depth_first_left_right_order__714__1_3_p_0(
  MR_Word PredCalleeMap_1,
  MR_Word HeadVar__2_33,
  MR_Word * HeadVar__3_34);

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__complete_and_add_indirect_map_pred__661__1_2_p_0(
  MR_Word PredId_6,
  MR_Word PredCalleesPredId_9);

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__build_incomplete_indirect_map_pred__605__1_2_p_0(
  MR_Word PredId_10,
  MR_Word PredCalleesPredId_13);

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__build_incomplete_indirect_map_pred__602__1_2_p_0(
  MR_Word SccSet_8,
  MR_Word PredId_10);

static MR_Word MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__func__acc_pred_ids_in_goal__465__1_1_f_0(
  MR_Word LambdaHeadVar__1_96);

static void MR_CALL 
hlds__hlds_call_tree____Compare____pred_callees_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____pred_callees_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_call_tree____Compare____pred_callees_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____pred_callees_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_call_tree____Compare____num_digits_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____num_digits_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_call_tree____Compare____movability_report_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____movability_report_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_call_tree____Compare____maybe_local_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____maybe_local_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_call_tree____Compare____line_number_and_desc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____line_number_and_desc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_call_tree____Compare____callee_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____callee_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
hlds__hlds_call_tree__name_arity_to_string_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__hlds_call_tree__line_number_and_desc_to_string_3_p_0(
  MR_Word NumDigits_4,
  MR_Word LineNumberDesc_5,
  MR_String * LineNumberDescStr_6);

static MR_Word MR_CALL 
hlds__hlds_call_tree__make_line_number_and_desc_for_type_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word NameArity_5);

static MR_Word MR_CALL 
hlds__hlds_call_tree__make_line_number_and_desc_for_pred_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5);

static void MR_CALL 
hlds__hlds_call_tree__acc_local_type_ctors_in_var_table_entry_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VarTableEntry_6,
  MR_Word STATE_VARIABLE_TypeCtorNameArities_0_11,
  MR_Word * STATE_VARIABLE_TypeCtorNameArities_12);

static void MR_CALL 
hlds__hlds_call_tree__acc_local_type_ctors_in_type_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_TypeCtorNameArities_0_25,
  MR_Word * STATE_VARIABLE_TypeCtorNameArities_26);

static void MR_CALL 
hlds__hlds_call_tree__acc_local_type_ctors_in_types_4_p_0(
  MR_Word ModuleName_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_TypeCtorNameArities_0_3,
  MR_Word * STATE_VARIABLE_TypeCtorNameArities_4);

static void MR_CALL 
hlds__hlds_call_tree__acc_local_type_ctors_in_proc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__acc_local_type_ctors_in_proc_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ProcInfo_6,
  MR_Word STATE_VARIABLE_TypeCtorNameArities_0_10,
  MR_Word * STATE_VARIABLE_TypeCtorNameArities_11);

static void MR_CALL 
hlds__hlds_call_tree__acc_local_type_ctors_in_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__acc_local_type_ctors_in_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_TypeCtorNameArities_0_12,
  MR_Word * STATE_VARIABLE_TypeCtorNameArities_13);

static void MR_CALL 
hlds__hlds_call_tree__acc_local_type_ctors_in_pred_arg_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__acc_local_type_ctors_in_pred_arg_list_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_TypeCtorNameArities_0_11,
  MR_Word * STATE_VARIABLE_TypeCtorNameArities_12);

static void MR_CALL 
hlds__hlds_call_tree__acc_moving_pred_name_8_p_0(
  MR_Word ModuleInfo_9,
  MR_String PredName_10,
  MR_Word STATE_VARIABLE_MovingPredIdSet_0_22,
  MR_Word * STATE_VARIABLE_MovingPredIdSet_23,
  MR_Word STATE_VARIABLE_UnknownNameSet_0_24,
  MR_Word * STATE_VARIABLE_UnknownNameSet_25,
  MR_Word STATE_VARIABLE_AmbigNameSet_0_26,
  MR_Word * STATE_VARIABLE_AmbigNameSet_27);

static void MR_CALL 
hlds__hlds_call_tree__construct_pred_order_entry_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_State_0_9,
  MR_Word * STATE_VARIABLE_State_10);

static void MR_CALL 
hlds__hlds_call_tree__lookup_callee_and_construct_indirect_entry_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Callee_5,
  MR_String * PredDescEntry_6);

static void MR_CALL 
hlds__hlds_call_tree__construct_indirect_pred_callees_entry_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_call_tree__construct_indirect_pred_callees_entry_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredCallees_8,
  MR_String STATE_VARIABLE_MaybeNl_0_19,
  MR_String * STATE_VARIABLE_MaybeNl_20,
  MR_Word STATE_VARIABLE_State_0_21,
  MR_Word * STATE_VARIABLE_State_22);

static void MR_CALL 
hlds__hlds_call_tree__lookup_callee_and_construct_direct_entry_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5,
  MR_String * PredDescEntry_6);

static MR_bool MR_CALL 
hlds__hlds_call_tree__callee_get_local_pred_id_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * PredId_3);

static void MR_CALL 
hlds__hlds_call_tree__construct_direct_pred_callees_entry_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__hlds_call_tree__construct_direct_pred_callees_entry_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_call_tree__construct_direct_pred_callees_entry_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredCallees_8,
  MR_String STATE_VARIABLE_MaybeNl_0_17,
  MR_String * STATE_VARIABLE_MaybeNl_18,
  MR_Word STATE_VARIABLE_State_0_19,
  MR_Word * STATE_VARIABLE_State_20);

static void MR_CALL 
hlds__hlds_call_tree__compare_pred_callees_by_order_4_p_0(
  MR_Word PredOrderMap_5,
  MR_Word PredCalleesA_6,
  MR_Word PredCalleesB_7,
  MR_Word * Result_8);

static MR_bool MR_CALL 
hlds__hlds_call_tree__complete_and_add_indirect_map_pred_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__hlds_call_tree__complete_and_add_indirect_map_pred_4_p_0(
  MR_Word IncompleteSccIndirectPredCalleeMap_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_IndirectPredCalleeMap_0_16,
  MR_Word * STATE_VARIABLE_IndirectPredCalleeMap_17);

static void MR_CALL 
hlds__hlds_call_tree__complete_callees_4_p_0(
  MR_Word IncompleteSccIndirectPredCalleeMap_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CompleteCalleesCord_0_3,
  MR_Word * STATE_VARIABLE_CompleteCalleesCord_4);

static MR_bool MR_CALL 
hlds__hlds_call_tree__build_incomplete_indirect_map_pred_6_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__hlds_call_tree__build_incomplete_indirect_map_pred_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__hlds_call_tree__build_incomplete_indirect_map_pred_6_p_0(
  MR_Word DirectCalleeMap_7,
  MR_Word SccSet_8,
  MR_Word LowerSccIndirectCalleeMap_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_IncompleteSccIndirectCalleeMap_0_18,
  MR_Word * STATE_VARIABLE_IncompleteSccIndirectCalleeMap_19);

static void MR_CALL 
hlds__hlds_call_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_99_111_109_112_108_101_116_101_95_105_110_100_105_114_101_99_116_95_109_97_112_95_99_97_108_108_101_101_115_95_95_91_50_93_95_48_5_p_0(
  MR_Word LowerSccIndirectCalleeMap_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_IncompleteIndirectCallees_0_4,
  MR_Word * STATE_VARIABLE_IncompleteIndirectCallees_5);

static void MR_CALL 
hlds__hlds_call_tree__add_pred_and_callees_to_digraph_3_p_0(
  MR_Word PredCallee_4,
  MR_Word STATE_VARIABLE_Graph_0_10,
  MR_Word * STATE_VARIABLE_Graph_11);

static void MR_CALL 
hlds__hlds_call_tree__add_caller_callees_to_digraph_4_p_0(
  MR_Word CallerKey_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Graph_0_3,
  MR_Word * STATE_VARIABLE_Graph_4);

static MR_bool MR_CALL 
hlds__hlds_call_tree__callee_is_local_has_not_been_handled_3_p_0(
  MR_Word HandledPredIds_4,
  MR_Word Callee_5,
  MR_Word * PredId_6);

static void MR_CALL 
hlds__hlds_call_tree__pred_id_to_callee_3_p_0(
  MR_Word LocalPredIds_4,
  MR_Word PredId_5,
  MR_Word * Callee_6);

static void MR_CALL 
hlds__hlds_call_tree__generate_movability_report_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__generate_movability_report_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__generate_movability_report_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_Box MR_CALL 
hlds__hlds_call_tree__construct_movability_report_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_call_tree__construct_movability_report_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
hlds__hlds_call_tree__construct_movability_report_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_call_tree__construct_movability_report_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_call_tree__construct_movability_report_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_call_tree__construct_movability_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_call_tree__construct_movability_report_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Report_5,
  MR_Word * InfoSpec_6);

static MR_Box MR_CALL 
hlds__hlds_call_tree__type_name_set_to_line_pieces_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_call_tree__type_name_set_to_line_pieces_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
hlds__hlds_call_tree__type_name_set_to_line_pieces_1_f_0(
  MR_Word NameAritySet_3);

static MR_Box MR_CALL 
hlds__hlds_call_tree__pred_name_set_to_line_pieces_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_call_tree__pred_name_set_to_line_pieces_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
hlds__hlds_call_tree__pred_name_set_to_line_pieces_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredIdSet_5);

static MR_bool MR_CALL 
hlds__hlds_call_tree__find_staying_pred_ids_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__hlds_call_tree__find_staying_pred_ids_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_call_tree__find_staying_pred_ids_5_p_0(
  MR_Word PredCalleeMap_1,
  MR_Word WantToMovePredIdSet_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_StayingPredIdSet_0_4,
  MR_Word * STATE_VARIABLE_StayingPredIdSet_5);

static MR_bool MR_CALL 
hlds__hlds_call_tree__find_moving_pred_ids_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__hlds_call_tree__find_moving_pred_ids_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_call_tree__find_moving_pred_ids_5_p_0(
  MR_Word PredCalleeMap_1,
  MR_Word NonMovingExportPredIdSet_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ReachablePredIdSet_0_4,
  MR_Word * STATE_VARIABLE_ReachablePredIdSet_5);

static void MR_CALL 
hlds__hlds_call_tree__construct_local_call_tree_file_contents_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__construct_local_call_tree_file_contents_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__hlds_call_tree__construct_local_call_tree_file_contents_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__construct_local_call_tree_file_contents_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0(
  MR_Word PredCalleeMap_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_HandledPredIds_0_3,
  MR_Word STATE_VARIABLE_PredIdCord_0_4,
  MR_Word * STATE_VARIABLE_PredIdCord_5);

static void MR_CALL 
hlds__hlds_call_tree__keep_only_new_local_callees_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_NewLocalPredIdCord_0_3,
  MR_Word * STATE_VARIABLE_NewLocalPredIdCord_4);

static void MR_CALL 
hlds__hlds_call_tree__compute_local_call_tree_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_100_105_114_101_99_116_95_109_97_112_95_115_99_99_115_95_95_91_50_93_95_48_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_100_105_114_101_99_116_95_109_97_112_95_115_99_99_115_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_100_105_114_101_99_116_95_109_97_112_95_115_99_99_115_95_95_91_50_93_95_48_5_p_0(
  MR_Word DirectCalleeMap_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_IndirectCalleeMap_0_4,
  MR_Word * STATE_VARIABLE_IndirectCalleeMap_5);

static void MR_CALL 
hlds__hlds_call_tree__record_pred_order_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CurNum_2,
  MR_Word STATE_VARIABLE_PredOrderMap_0_3,
  MR_Word * STATE_VARIABLE_PredOrderMap_4);

static MR_bool MR_CALL 
hlds__hlds_call_tree__build_direct_pred_callee_map_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_call_tree__build_direct_pred_callee_map_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_call_tree__build_direct_pred_callee_map_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredCalleesCord_0_5,
  MR_Word * STATE_VARIABLE_PredCalleesCord_6,
  MR_Word STATE_VARIABLE_DirectPredCalleeMap_0_7,
  MR_Word * STATE_VARIABLE_DirectPredCalleeMap_8);

static void MR_CALL 
hlds__hlds_call_tree__keep_only_first_calls_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SeenCallees_0_2,
  MR_Word STATE_VARIABLE_CalleeCordWithoutDuplicates_0_3,
  MR_Word * STATE_VARIABLE_CalleeCordWithoutDuplicates_4);

static void MR_CALL 
hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_CalleeCord_0_84,
  MR_Word * STATE_VARIABLE_CalleeCord_85);

static void MR_CALL 
hlds__hlds_call_tree__acc_pred_ids_in_cons_id_3_p_0(
  MR_Word ConsId_4,
  MR_Word STATE_VARIABLE_CalleeCord_0_11,
  MR_Word * STATE_VARIABLE_CalleeCord_12);

static void MR_CALL 
hlds__hlds_call_tree__find_local_preds_exports_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_LocalPredIds_0_2,
  MR_Word * STATE_VARIABLE_LocalPredIds_3,
  MR_Word STATE_VARIABLE_ExportMap_0_4,
  MR_Word * STATE_VARIABLE_ExportMap_5);

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____call_tree_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_call_tree____Compare____call_tree_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____callee_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_call_tree____Compare____callee_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____line_number_and_desc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_call_tree____Compare____line_number_and_desc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____maybe_local_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_call_tree____Compare____maybe_local_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____movability_report_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_call_tree____Compare____movability_report_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____num_digits_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_call_tree____Compare____num_digits_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____pred_callees_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_call_tree____Compare____pred_callees_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____pred_callees_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_call_tree____Compare____pred_callees_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_1[71][2];

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_2[16][3];

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_3[2][1];

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_4[10][6];

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_5[7][5];

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_6[2][9];

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_7[8][7];

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_8[1][11];




static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_1[71][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error in the arguments"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the --show-movability option: the"))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "name any predicate or function in this module."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Report for the proposed move of"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Unsigned) 16U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to a new module:"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "would be"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which should therefore be moved to the new module,"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[22])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the proposed-to-be-moved predicates and/or functions,"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The set of predicates, functions and/or types reachable from"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to get access to"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "would require the new module to import the current module"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Moving these predicates and/or functions to a new module"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the new module."))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[18])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "All of the moved types can be private"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[36])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "from the new module:"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and would therefore need to be exported"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[40])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "that is staying in the current module,"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[42])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The following moved types are used by code"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[44])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "current module to import the new module in its interface"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[30])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Moving these types to a new module would require"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[48])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Neither option is usually a good idea."))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to be accessible from the other module."))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[52])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "need to be exported from the module they end up in"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[54])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "one of the two modules, old and new, they would"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[56])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "need to be either duplicated, or, if included in only"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[58])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "code that is staying, which means that they would"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[60])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are reachable both from code being moved and"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[62])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "However, the following local predicates and/or functions"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[64])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[17])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[17])))
  },
};

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_2[16][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[0])),
    ((MR_Box) (hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[3])),
    ((MR_Box) (hlds__hlds_call_tree__compute_local_call_tree_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_call_tree__find_moving_pred_ids_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_call_tree__find_staying_pred_ids_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[3])),
    ((MR_Box) (hlds__hlds_call_tree__pred_name_set_to_line_pieces_2_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[4])),
    ((MR_Box) (hlds__hlds_call_tree__type_name_set_to_line_pieces_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[3])),
    ((MR_Box) (hlds__hlds_call_tree__type_name_set_to_line_pieces_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[3])),
    ((MR_Box) (hlds__hlds_call_tree__construct_movability_report_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[3])),
    ((MR_Box) (hlds__hlds_call_tree__construct_movability_report_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[1])),
    ((MR_Box) (hlds__hlds_call_tree__construct_direct_pred_callees_entry_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_3[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 260U) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_4[10][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_call_tree__cord__pti_cord_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_call_tree__cord__pti_cord_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0)),
    ((MR_Box) (&hlds__hlds_call_tree__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_call_tree__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_call_tree__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_call_tree__type_ctor_info_pred_callees_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_line_number_and_desc_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_line_number_and_desc_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_num_digits_0)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_line_number_and_desc_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_5[7][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_call_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_call_tree__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_6[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_call_tree__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_call_tree__type_ctor_info_pred_callees_0)),
    ((MR_Box) (&hlds__hlds_call_tree__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_call_tree__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_call_tree__type_ctor_info_pred_callees_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_call_tree__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_call_tree__type_ctor_info_pred_callees_0)),
    ((MR_Box) (&hlds__hlds_call_tree__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_call_tree__type_ctor_info_pred_callees_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_7[8][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_call_tree__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_call_tree__type_ctor_info_pred_callees_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_call_tree__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_call_tree__type_ctor_info_pred_callees_0)),
    ((MR_Box) (&hlds__hlds_call_tree__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_call_tree__type_ctor_info_pred_callees_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_call_tree__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_desc__hlds__hlds_desc__type_ctor_info_include_module_name_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_name_arity_0)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_name_arity_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_name_arity_0)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_name_arity_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_name_arity_0)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_name_arity_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_name_arity_0)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_name_arity_0))
  },
};

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_8[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__cord__pti_cord_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_call_tree__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_call_tree__type_ctor_info_pred_callees_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__digraph__pti_digraph_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_call_tree__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_name_arity_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_call_tree__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_call_tree__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_call_tree__list__ti_list_1hlds__hlds_call_tree__type_ctor_info_pred_callees_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_call_tree__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_call_tree__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_call_tree__type_ctor_info_pred_callees_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_call_tree_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__list__ti_list_1hlds__hlds_call_tree__type_ctor_info_pred_callees_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_call_tree__type_ctor_info_pred_callees_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_call_tree__type_ctor_info_pred_callees_0)
};

static const MR_ConstString hlds__hlds_call_tree__hlds__hlds_call_tree__field_names_call_tree_info_0_0[6] = {
  (MR_String) "cti_local_pred_set",
  (MR_String) "cti_exported_preds",
  (MR_String) "cti_pred_callee_list",
  (MR_String) "cti_pred_order_map",
  (MR_String) "cti_direct_callee_map",
  (MR_String) "cti_indirect_callee_map"
};

static const MR_DuFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_call_tree_info_0_0 = {
  (MR_String) "call_tree_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_call_tree_info_0_0,
  hlds__hlds_call_tree__hlds__hlds_call_tree__field_names_call_tree_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_stag_ordered_call_tree_info_0_0[1] = { &hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_call_tree_info_0_0 };

static const MR_DuPtagLayout hlds__hlds_call_tree__hlds__hlds_call_tree__du_ptag_ordered_call_tree_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_call_tree__hlds__hlds_call_tree__du_stag_ordered_call_tree_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_name_ordered_call_tree_info_0[1] = { &hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_call_tree_info_0_0 };

static const MR_Integer hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_call_tree_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_call_tree_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_call_tree____Unify____call_tree_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_call_tree____Compare____call_tree_info_0_0_10001)),
  (MR_String) "hlds.hlds_call_tree",
  (MR_String) "call_tree_info",
  { hlds__hlds_call_tree__hlds__hlds_call_tree__du_name_ordered_call_tree_info_0 },
  { hlds__hlds_call_tree__hlds__hlds_call_tree__du_ptag_ordered_call_tree_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_call_tree_info_0,

};

static const MR_PseudoTypeInfo hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_callee_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_maybe_local_0)
};

static const MR_DuArgLocn hlds__hlds_call_tree__hlds__hlds_call_tree__field_locns_callee_0_0[2] = {
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

static const MR_DuFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_callee_0_0 = {
  (MR_String) "callee",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_callee_0_0,
  NULL,
  hlds__hlds_call_tree__hlds__hlds_call_tree__field_locns_callee_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_stag_ordered_callee_0_0[1] = { &hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_callee_0_0 };

static const MR_DuPtagLayout hlds__hlds_call_tree__hlds__hlds_call_tree__du_ptag_ordered_callee_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_call_tree__hlds__hlds_call_tree__du_stag_ordered_callee_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_name_ordered_callee_0[1] = { &hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_callee_0_0 };

static const MR_Integer hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_callee_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_call_tree____Unify____callee_0_0_10001)),
  ((MR_Box) (hlds__hlds_call_tree____Compare____callee_0_0_10001)),
  (MR_String) "hlds.hlds_call_tree",
  (MR_String) "callee",
  { hlds__hlds_call_tree__hlds__hlds_call_tree__du_name_ordered_callee_0 },
  { hlds__hlds_call_tree__hlds__hlds_call_tree__du_ptag_ordered_callee_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_callee_0,

};

static const MR_PseudoTypeInfo hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_line_number_and_desc_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_line_number_and_desc_0_0 = {
  (MR_String) "line_number_and_desc",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_line_number_and_desc_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_stag_ordered_line_number_and_desc_0_0[1] = { &hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_line_number_and_desc_0_0 };

static const MR_DuPtagLayout hlds__hlds_call_tree__hlds__hlds_call_tree__du_ptag_ordered_line_number_and_desc_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_call_tree__hlds__hlds_call_tree__du_stag_ordered_line_number_and_desc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_name_ordered_line_number_and_desc_0[1] = { &hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_line_number_and_desc_0_0 };

static const MR_Integer hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_line_number_and_desc_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_line_number_and_desc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_call_tree____Unify____line_number_and_desc_0_0_10001)),
  ((MR_Box) (hlds__hlds_call_tree____Compare____line_number_and_desc_0_0_10001)),
  (MR_String) "hlds.hlds_call_tree",
  (MR_String) "line_number_and_desc",
  { hlds__hlds_call_tree__hlds__hlds_call_tree__du_name_ordered_line_number_and_desc_0 },
  { hlds__hlds_call_tree__hlds__hlds_call_tree__du_ptag_ordered_line_number_and_desc_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_line_number_and_desc_0,

};

static const MR_EnumFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_maybe_local_0_0 = {
  (MR_String) "is_not_local",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_maybe_local_0_1 = {
  (MR_String) "is_local",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__enum_ordinal_ordered_maybe_local_0[2] = {
  &hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_maybe_local_0_0,
  &hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_maybe_local_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__enum_name_ordered_maybe_local_0[2] = {
  &hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_maybe_local_0_1,
  &hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_maybe_local_0_0
};

static const MR_Integer hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_maybe_local_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_maybe_local_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_call_tree____Unify____maybe_local_0_0_10001)),
  ((MR_Box) (hlds__hlds_call_tree____Compare____maybe_local_0_0_10001)),
  (MR_String) "hlds.hlds_call_tree",
  (MR_String) "maybe_local",
  { hlds__hlds_call_tree__hlds__hlds_call_tree__enum_name_ordered_maybe_local_0 },
  { hlds__hlds_call_tree__hlds__hlds_call_tree__enum_ordinal_ordered_maybe_local_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_maybe_local_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_call_tree__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_name_arity_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0) }
};

static const MR_PseudoTypeInfo hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_movability_report_0_0[7] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_name_arity_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_name_arity_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_name_arity_0)
};

static const MR_ConstString hlds__hlds_call_tree__hlds__hlds_call_tree__field_names_movability_report_0_0[7] = {
  (MR_String) "mr_want_to_move",
  (MR_String) "mr_new_coupling",
  (MR_String) "mr_all_to_move",
  (MR_String) "mr_moving_staying",
  (MR_String) "mr_ltcs_in_interface",
  (MR_String) "mr_ltcs_moving_pred",
  (MR_String) "mr_ltcs_staying_pred"
};

static const MR_DuFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_movability_report_0_0 = {
  (MR_String) "movability_report",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_movability_report_0_0,
  hlds__hlds_call_tree__hlds__hlds_call_tree__field_names_movability_report_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_stag_ordered_movability_report_0_0[1] = { &hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_movability_report_0_0 };

static const MR_DuPtagLayout hlds__hlds_call_tree__hlds__hlds_call_tree__du_ptag_ordered_movability_report_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_call_tree__hlds__hlds_call_tree__du_stag_ordered_movability_report_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_name_ordered_movability_report_0[1] = { &hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_movability_report_0_0 };

static const MR_Integer hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_movability_report_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_movability_report_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_call_tree____Unify____movability_report_0_0_10001)),
  ((MR_Box) (hlds__hlds_call_tree____Compare____movability_report_0_0_10001)),
  (MR_String) "hlds.hlds_call_tree",
  (MR_String) "movability_report",
  { hlds__hlds_call_tree__hlds__hlds_call_tree__du_name_ordered_movability_report_0 },
  { hlds__hlds_call_tree__hlds__hlds_call_tree__du_ptag_ordered_movability_report_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_movability_report_0,

};

static const MR_EnumFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_num_digits_0_0 = {
  (MR_String) "digits_3",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_num_digits_0_1 = {
  (MR_String) "digits_4",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_num_digits_0_2 = {
  (MR_String) "digits_5",
  INT32_C(2)
};

static const MR_EnumFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_num_digits_0_3 = {
  (MR_String) "digits_6",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__enum_ordinal_ordered_num_digits_0[4] = {
  &hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_num_digits_0_0,
  &hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_num_digits_0_1,
  &hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_num_digits_0_2,
  &hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_num_digits_0_3
};

static const MR_EnumFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__enum_name_ordered_num_digits_0[4] = {
  &hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_num_digits_0_0,
  &hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_num_digits_0_1,
  &hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_num_digits_0_2,
  &hlds__hlds_call_tree__hlds__hlds_call_tree__enum_functor_desc_num_digits_0_3
};

static const MR_Integer hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_num_digits_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_num_digits_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_call_tree____Unify____num_digits_0_0_10001)),
  ((MR_Box) (hlds__hlds_call_tree____Compare____num_digits_0_0_10001)),
  (MR_String) "hlds.hlds_call_tree",
  (MR_String) "num_digits",
  { hlds__hlds_call_tree__hlds__hlds_call_tree__enum_name_ordered_num_digits_0 },
  { hlds__hlds_call_tree__hlds__hlds_call_tree__enum_ordinal_ordered_num_digits_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_num_digits_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_call_tree__list__ti_list_1hlds__hlds_call_tree__type_ctor_info_callee_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0) }
};

static const MR_PseudoTypeInfo hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_pred_callees_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__list__ti_list_1hlds__hlds_call_tree__type_ctor_info_callee_0)
};

static const MR_DuFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_pred_callees_0_0 = {
  (MR_String) "pred_callees",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_pred_callees_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_stag_ordered_pred_callees_0_0[1] = { &hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_pred_callees_0_0 };

static const MR_DuPtagLayout hlds__hlds_call_tree__hlds__hlds_call_tree__du_ptag_ordered_pred_callees_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_call_tree__hlds__hlds_call_tree__du_stag_ordered_pred_callees_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_name_ordered_pred_callees_0[1] = { &hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_pred_callees_0_0 };

static const MR_Integer hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_pred_callees_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_call_tree____Unify____pred_callees_0_0_10001)),
  ((MR_Box) (hlds__hlds_call_tree____Compare____pred_callees_0_0_10001)),
  (MR_String) "hlds.hlds_call_tree",
  (MR_String) "pred_callees",
  { hlds__hlds_call_tree__hlds__hlds_call_tree__du_name_ordered_pred_callees_0 },
  { hlds__hlds_call_tree__hlds__hlds_call_tree__du_ptag_ordered_pred_callees_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_pred_callees_0,

};

const MR_TypeCtorInfo_Struct hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_call_tree____Unify____pred_callees_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_call_tree____Compare____pred_callees_map_0_0_10001)),
  (MR_String) "hlds.hlds_call_tree",
  (MR_String) "pred_callees_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_call_tree__type_ctor_info_pred_callees_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_Word MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__func__line_list_to_line_pieces__1431__1_1_f_0(
  MR_String LambdaHeadVar__1_11)
{
  MR_Word LambdaHeadVar__2_12;
  MR_Word Var_13;

  {
    Var_13 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_13, 0) = ((MR_Box) (LambdaHeadVar__1_11));
  }
  {
    LambdaHeadVar__2_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_12, 0) = ((MR_Box) (Var_13));
    MR_hl_field(1, LambdaHeadVar__2_12, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[11])));
  }
  return LambdaHeadVar__2_12;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__find_staying_pred_ids__1111__1_2_p_0(
  MR_Word STATE_VARIABLE_StayingPredIdSet_1_25,
  MR_Word HeadVar__2_36)
{
  MR_bool succeeded;

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), STATE_VARIABLE_StayingPredIdSet_1_25, ((MR_Box) (HeadVar__2_36)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__find_moving_pred_ids__1078__1_2_p_0(
  MR_Word STATE_VARIABLE_ReachablePredIdSet_1_25,
  MR_Word HeadVar__2_36)
{
  MR_bool succeeded;

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), STATE_VARIABLE_ReachablePredIdSet_1_25, ((MR_Box) (HeadVar__2_36)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__construct_depth_first_left_right_order__714__1_3_p_0(
  MR_Word PredCalleeMap_1,
  MR_Word HeadVar__2_33,
  MR_Word * HeadVar__3_34)
{
  MR_bool succeeded;
  MR_Box conv0_HeadVar__3_34;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), PredCalleeMap_1, ((MR_Box) (HeadVar__2_33)), &conv0_HeadVar__3_34);
  if (succeeded)
  {
    *HeadVar__3_34 = ((MR_Word) (conv0_HeadVar__3_34));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__complete_and_add_indirect_map_pred__661__1_2_p_0(
  MR_Word PredId_6,
  MR_Word PredCalleesPredId_9)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_6, PredCalleesPredId_9);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__build_incomplete_indirect_map_pred__605__1_2_p_0(
  MR_Word PredId_10,
  MR_Word PredCalleesPredId_13)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_10, PredCalleesPredId_13);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__build_incomplete_indirect_map_pred__602__1_2_p_0(
  MR_Word SccSet_8,
  MR_Word PredId_10)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), SccSet_8, ((MR_Box) (PredId_10)));
  return succeeded;
}

static MR_Word MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__func__acc_pred_ids_in_goal__465__1_1_f_0(
  MR_Word LambdaHeadVar__1_96)
{
  MR_Word LambdaHeadVar__2_97 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_96, 2))));

  return LambdaHeadVar__2_97;
}

static void MR_CALL 
hlds__hlds_call_tree____Compare____pred_callees_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____pred_callees_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree____Compare____pred_callees_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____pred_callees_0_0(
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
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[8]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree____Compare____num_digits_0_0(
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
hlds__hlds_call_tree____Unify____num_digits_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree____Compare____movability_report_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[3]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[3]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____movability_report_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word TypeInfo_22_22;
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_25_25;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_20_20 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_21_21 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_22_22 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_23_23 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_24_24 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_25_25 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
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
hlds__hlds_call_tree____Compare____maybe_local_0_0(
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
hlds__hlds_call_tree____Unify____maybe_local_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree____Compare____line_number_and_desc_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
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
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____line_number_and_desc_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
  }
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree____Compare____callee_0_0(
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
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
hlds__hlds_call_tree____Unify____callee_0_0(
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
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);

    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_call_tree____Compare____call_tree_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[6]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[7]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_2[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_2[0]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____call_tree_info_0_0(
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
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_22_22;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_18_18 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_19_19 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_20_20 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_21_21 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_22_22 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_String MR_CALL 
hlds__hlds_call_tree__name_arity_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String Str_5;
  MR_String Name_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_String Var_12;
  MR_String Var_20;

  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_3[1]), Arity_4, &Var_12);
  Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_12);
  Str_5 = mercury__string__f_43_43_2_f_0(Name_3, Var_20);
  return Str_5;
}

static void MR_CALL 
hlds__hlds_call_tree__line_number_and_desc_to_string_3_p_0(
  MR_Word NumDigits_4,
  MR_Word LineNumberDesc_5,
  MR_String * LineNumberDescStr_6)
{
  MR_Integer LineNumber_7 = ((MR_Integer) ((MR_hl_field(0, LineNumberDesc_5, 0))));
  MR_String Desc_8 = ((MR_String) ((MR_hl_field(0, LineNumberDesc_5, 1))));

  switch (NumDigits_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Var_70;
        MR_String Var_71;
        MR_String Var_79;

        Var_70 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Desc_8);
        mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_3[1]), (MR_Integer) 3, LineNumber_7, &Var_71);
        Var_79 = mercury__string__f_43_43_2_f_0(Var_71, Var_70);
        *LineNumberDescStr_6 = mercury__string__f_43_43_2_f_0((MR_String) "line ", Var_79);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_58;
        MR_String Var_59;
        MR_String Var_67;

        Var_58 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Desc_8);
        mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_3[1]), (MR_Integer) 4, LineNumber_7, &Var_59);
        Var_67 = mercury__string__f_43_43_2_f_0(Var_59, Var_58);
        *LineNumberDescStr_6 = mercury__string__f_43_43_2_f_0((MR_String) "line ", Var_67);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Var_46;
        MR_String Var_47;
        MR_String Var_55;

        Var_46 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Desc_8);
        mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_3[1]), (MR_Integer) 5, LineNumber_7, &Var_47);
        Var_55 = mercury__string__f_43_43_2_f_0(Var_47, Var_46);
        *LineNumberDescStr_6 = mercury__string__f_43_43_2_f_0((MR_String) "line ", Var_55);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_String Var_34;
        MR_String Var_35;
        MR_String Var_43;

        Var_34 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Desc_8);
        mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_3[1]), (MR_Integer) 6, LineNumber_7, &Var_35);
        Var_43 = mercury__string__f_43_43_2_f_0(Var_35, Var_34);
        *LineNumberDescStr_6 = mercury__string__f_43_43_2_f_0((MR_String) "line ", Var_43);
      }
      break;
  }
}

static MR_Word MR_CALL 
hlds__hlds_call_tree__make_line_number_and_desc_for_type_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word NameArity_5)
{
  MR_Word LineNumberDesc_6;
  MR_Word TypeTable_7;
  MR_Word ModuleName_8;
  MR_String Name_9;
  MR_Integer Arity_10;
  MR_Word TypeCtor_11;
  MR_Word TypeDefn_12;
  MR_Word Context_13;
  MR_Integer LineNumber_15;
  MR_String Desc_16;
  MR_Word Var_17;
  MR_String Var_24;
  MR_String Var_32;
  MR_String Var_33;

  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_7);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_4, &ModuleName_8);
  Name_9 = ((MR_String) ((MR_hl_field(0, NameArity_5, 0))));
  Arity_10 = ((MR_Integer) ((MR_hl_field(0, NameArity_5, 1))));
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (ModuleName_8));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Name_9));
  }
  {
    TypeCtor_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_11, 0) = ((MR_Box) (Var_17));
    MR_hl_field(0, TypeCtor_11, 1) = ((MR_Box) (Arity_10));
  }
  hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_7, TypeCtor_11, &TypeDefn_12);
  hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_12, &Context_13);
  LineNumber_15 = ((MR_Integer) ((MR_hl_field(0, Context_13, 1))));
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_3[1]), Arity_10, &Var_24);
  Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_24);
  Var_33 = mercury__string__f_43_43_2_f_0(Name_9, Var_32);
  Desc_16 = mercury__string__f_43_43_2_f_0((MR_String) "type constructor ", Var_33);
  {
    LineNumberDesc_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LineNumberDesc_6, 0) = ((MR_Box) (LineNumber_15));
    MR_hl_field(0, LineNumberDesc_6, 1) = ((MR_Box) (Desc_16));
  }
  return LineNumberDesc_6;
}

static MR_Word MR_CALL 
hlds__hlds_call_tree__make_line_number_and_desc_for_pred_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5)
{
  MR_Word LineNumberDesc_6;
  MR_Word PredInfo_7;
  MR_Word Context_8;
  MR_Integer LineNumber_10;
  MR_String Desc_11;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_5, &PredInfo_7);
  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, &Context_8);
  LineNumber_10 = ((MR_Integer) ((MR_hl_field(0, Context_8, 1))));
  Desc_11 = hlds__hlds_desc__describe_pred_from_id_3_f_0((MR_Integer) 0, ModuleInfo_4, PredId_5);
  {
    LineNumberDesc_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LineNumberDesc_6, 0) = ((MR_Box) (LineNumber_10));
    MR_hl_field(0, LineNumberDesc_6, 1) = ((MR_Box) (Desc_11));
  }
  return LineNumberDesc_6;
}

static void MR_CALL 
hlds__hlds_call_tree__acc_local_type_ctors_in_var_table_entry_4_p_0(
  MR_Word ModuleName_5,
  MR_Word VarTableEntry_6,
  MR_Word STATE_VARIABLE_TypeCtorNameArities_0_11,
  MR_Word * STATE_VARIABLE_TypeCtorNameArities_12)
{
  MR_Word Type_9 = ((MR_Word) ((MR_hl_field(0, VarTableEntry_6, 1))));

  hlds__hlds_call_tree__acc_local_type_ctors_in_type_4_p_0(ModuleName_5, Type_9, STATE_VARIABLE_TypeCtorNameArities_0_11, STATE_VARIABLE_TypeCtorNameArities_12);
}

static void MR_CALL 
hlds__hlds_call_tree__acc_local_type_ctors_in_type_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_TypeCtorNameArities_0_25,
  MR_Word * STATE_VARIABLE_TypeCtorNameArities_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_TypeCtorNameArities_26 = STATE_VARIABLE_TypeCtorNameArities_0_25;
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(1, Type_6, 0))));
          MR_Word ArgTypes_12 = ((MR_Word) ((MR_hl_field(1, Type_6, 1))));
          MR_Word STATE_VARIABLE_TypeCtorNameArities_1_27;
          MR_String Name_14;
          MR_Word Var_34;

          succeeded = ((MR_tag((MR_Word) SymName_11)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_34 = ((MR_Word) ((MR_hl_field(1, SymName_11, 0))));
            Name_14 = ((MR_String) ((MR_hl_field(1, SymName_11, 1))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_5, Var_34);
          }
          if (succeeded)
          {
            MR_Integer Arity_15;
            MR_Word NameArity_16;

            mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_12, &Arity_15);
            {
              NameArity_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, NameArity_16, 0) = ((MR_Box) (Name_14));
              MR_hl_field(0, NameArity_16, 1) = ((MR_Box) (Arity_15));
            }
            mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), ((MR_Box) (NameArity_16)), STATE_VARIABLE_TypeCtorNameArities_0_25, &STATE_VARIABLE_TypeCtorNameArities_1_27);
          }
          else
            STATE_VARIABLE_TypeCtorNameArities_1_27 = STATE_VARIABLE_TypeCtorNameArities_0_25;
          hlds__hlds_call_tree__acc_local_type_ctors_in_types_4_p_0(ModuleName_5, ArgTypes_12, STATE_VARIABLE_TypeCtorNameArities_1_27, STATE_VARIABLE_TypeCtorNameArities_26);
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_TypeCtorNameArities_26 = STATE_VARIABLE_TypeCtorNameArities_0_25;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type_6, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_37 = ((MR_Word) ((MR_hl_field(3, Type_6, 1))));

              hlds__hlds_call_tree__acc_local_type_ctors_in_types_4_p_0(ModuleName_5, ArgTypes_37, STATE_VARIABLE_TypeCtorNameArities_0_25, STATE_VARIABLE_TypeCtorNameArities_26);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypes_36 = ((MR_Word) ((MR_hl_field(3, Type_6, 2))));

              hlds__hlds_call_tree__acc_local_type_ctors_in_types_4_p_0(ModuleName_5, ArgTypes_36, STATE_VARIABLE_TypeCtorNameArities_0_25, STATE_VARIABLE_TypeCtorNameArities_26);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgTypes_31 = ((MR_Word) ((MR_hl_field(3, Type_6, 2))));

              hlds__hlds_call_tree__acc_local_type_ctors_in_types_4_p_0(ModuleName_5, ArgTypes_31, STATE_VARIABLE_TypeCtorNameArities_0_25, STATE_VARIABLE_TypeCtorNameArities_26);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubType_23 = ((MR_Word) ((MR_hl_field(3, Type_6, 1))));
              MR_Word next_value_of_Type_6 = SubType_23;

              // direct tailcall eliminated
              ;
              Type_6 = next_value_of_Type_6;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_call_tree__acc_local_type_ctors_in_types_4_p_0(
  MR_Word ModuleName_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_TypeCtorNameArities_0_3,
  MR_Word * STATE_VARIABLE_TypeCtorNameArities_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeCtorNameArities_4 = STATE_VARIABLE_TypeCtorNameArities_0_3;
    else
    {
      MR_Word Type_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Types_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_TypeCtorNameArities_1_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_TypeCtorNameArities_0_3;

      hlds__hlds_call_tree__acc_local_type_ctors_in_type_4_p_0(ModuleName_1, Type_10, STATE_VARIABLE_TypeCtorNameArities_0_3, &STATE_VARIABLE_TypeCtorNameArities_1_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Types_11;
      next_value_of_STATE_VARIABLE_TypeCtorNameArities_0_3 = STATE_VARIABLE_TypeCtorNameArities_1_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_TypeCtorNameArities_0_3 = next_value_of_STATE_VARIABLE_TypeCtorNameArities_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_call_tree__acc_local_type_ctors_in_proc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeCtorNameArities_12;

  hlds__hlds_call_tree__acc_local_type_ctors_in_var_table_entry_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeCtorNameArities_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeCtorNameArities_12));
}

static void MR_CALL 
hlds__hlds_call_tree__acc_local_type_ctors_in_proc_4_p_0(
  MR_Word ModuleName_5,
  MR_Word ProcInfo_6,
  MR_Word STATE_VARIABLE_TypeCtorNameArities_0_10,
  MR_Word * STATE_VARIABLE_TypeCtorNameArities_11)
{
  MR_Word VarTable_8;
  MR_Word VarTableEntries_9;
  MR_Word Var_12;
  MR_Box conv1_STATE_VARIABLE_TypeCtorNameArities_11;

  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_6, &VarTable_8);
  parse_tree__var_table__var_table_entries_2_p_0(VarTable_8, &VarTableEntries_9);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_7[7]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (hlds__hlds_call_tree__acc_local_type_ctors_in_proc_4_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (ModuleName_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[3]), Var_12, VarTableEntries_9, ((MR_Box) (STATE_VARIABLE_TypeCtorNameArities_0_10)), &conv1_STATE_VARIABLE_TypeCtorNameArities_11);
  *STATE_VARIABLE_TypeCtorNameArities_11 = ((MR_Word) (conv1_STATE_VARIABLE_TypeCtorNameArities_11));
}

static void MR_CALL 
hlds__hlds_call_tree__acc_local_type_ctors_in_pred_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeCtorNameArities_11;

  hlds__hlds_call_tree__acc_local_type_ctors_in_proc_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeCtorNameArities_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeCtorNameArities_11));
}

static void MR_CALL 
hlds__hlds_call_tree__acc_local_type_ctors_in_pred_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_TypeCtorNameArities_0_12,
  MR_Word * STATE_VARIABLE_TypeCtorNameArities_13)
{
  MR_Word ModuleName_8;
  MR_Word PredInfo_9;
  MR_Word ProcTable_10;
  MR_Word ProcInfos_11;
  MR_Word Var_14;
  MR_Box conv1_STATE_VARIABLE_TypeCtorNameArities_13;

  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_8);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_9);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_9, &ProcTable_10);
  mercury__map__values_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_10, &ProcInfos_11);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_7[6]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (hlds__hlds_call_tree__acc_local_type_ctors_in_pred_4_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (ModuleName_8));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[3]), Var_14, ProcInfos_11, ((MR_Box) (STATE_VARIABLE_TypeCtorNameArities_0_12)), &conv1_STATE_VARIABLE_TypeCtorNameArities_13);
  *STATE_VARIABLE_TypeCtorNameArities_13 = ((MR_Word) (conv1_STATE_VARIABLE_TypeCtorNameArities_13));
}

static void MR_CALL 
hlds__hlds_call_tree__acc_local_type_ctors_in_pred_arg_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_TypeCtorNameArities_26;

  hlds__hlds_call_tree__acc_local_type_ctors_in_type_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeCtorNameArities_26);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeCtorNameArities_26));
}

static void MR_CALL 
hlds__hlds_call_tree__acc_local_type_ctors_in_pred_arg_list_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_TypeCtorNameArities_0_11,
  MR_Word * STATE_VARIABLE_TypeCtorNameArities_12)
{
  MR_Word ModuleName_8;
  MR_Word PredInfo_9;
  MR_Word ArgTypes_10;
  MR_Word Var_13;
  MR_Box conv1_STATE_VARIABLE_TypeCtorNameArities_12;

  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_5, &ModuleName_8);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_6, &PredInfo_9);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_9, &ArgTypes_10);
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_7[5]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (hlds__hlds_call_tree__acc_local_type_ctors_in_pred_arg_list_4_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (ModuleName_8));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[3]), Var_13, ArgTypes_10, ((MR_Box) (STATE_VARIABLE_TypeCtorNameArities_0_11)), &conv1_STATE_VARIABLE_TypeCtorNameArities_12);
  *STATE_VARIABLE_TypeCtorNameArities_12 = ((MR_Word) (conv1_STATE_VARIABLE_TypeCtorNameArities_12));
}

static void MR_CALL 
hlds__hlds_call_tree__acc_moving_pred_name_8_p_0(
  MR_Word ModuleInfo_9,
  MR_String PredName_10,
  MR_Word STATE_VARIABLE_MovingPredIdSet_0_22,
  MR_Word * STATE_VARIABLE_MovingPredIdSet_23,
  MR_Word STATE_VARIABLE_UnknownNameSet_0_24,
  MR_Word * STATE_VARIABLE_UnknownNameSet_25,
  MR_Word STATE_VARIABLE_AmbigNameSet_0_26,
  MR_Word * STATE_VARIABLE_AmbigNameSet_27)
{
  MR_Word PredTable_14;
  MR_Word ModuleName_15;
  MR_Word SymName_16;
  MR_Word PredIds_17;

  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_9, &PredTable_14);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_9, &ModuleName_15);
  {
    SymName_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_16, 0) = ((MR_Box) (ModuleName_15));
    MR_hl_field(1, SymName_16, 1) = ((MR_Box) (PredName_10));
  }
  hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredTable_14, (MR_Integer) 0, SymName_16, &PredIds_17);
  if ((PredIds_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__set_tree234__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (PredName_10)), STATE_VARIABLE_UnknownNameSet_0_24, STATE_VARIABLE_UnknownNameSet_25);
    *STATE_VARIABLE_MovingPredIdSet_23 = STATE_VARIABLE_MovingPredIdSet_0_22;
    *STATE_VARIABLE_AmbigNameSet_27 = STATE_VARIABLE_AmbigNameSet_0_26;
  }
  else
  {
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, PredIds_17, 1))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, PredIds_17, 0))));

    if ((Var_36 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (Var_37)), STATE_VARIABLE_MovingPredIdSet_0_22, STATE_VARIABLE_MovingPredIdSet_23);
      *STATE_VARIABLE_UnknownNameSet_25 = STATE_VARIABLE_UnknownNameSet_0_24;
      *STATE_VARIABLE_AmbigNameSet_27 = STATE_VARIABLE_AmbigNameSet_0_26;
    }
    else
    {
      mercury__set_tree234__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (PredName_10)), STATE_VARIABLE_AmbigNameSet_0_26, STATE_VARIABLE_AmbigNameSet_27);
      *STATE_VARIABLE_MovingPredIdSet_23 = STATE_VARIABLE_MovingPredIdSet_0_22;
      *STATE_VARIABLE_UnknownNameSet_25 = STATE_VARIABLE_UnknownNameSet_0_24;
    }
  }
}

static void MR_CALL 
hlds__hlds_call_tree__construct_pred_order_entry_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_State_0_9,
  MR_Word * STATE_VARIABLE_State_10)
{
  MR_String PredDesc_8;
  MR_Word Var_17;

  PredDesc_8 = hlds__hlds_desc__describe_pred_from_id_3_f_0((MR_Integer) 0, ModuleInfo_5, PredId_6);
  mercury__string__builder__append_string_3_p_0(PredDesc_8, STATE_VARIABLE_State_0_9, &Var_17);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_17, STATE_VARIABLE_State_10);
}

static void MR_CALL 
hlds__hlds_call_tree__lookup_callee_and_construct_indirect_entry_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Callee_5,
  MR_String * PredDescEntry_6)
{
  MR_Word PredId_7 = ((MR_Word) ((MR_hl_field(0, Callee_5, 0))));
  MR_Word PredInfo_9;
  MR_String PredDesc_10;
  MR_String Var_17;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_7, &PredInfo_9);
  PredDesc_10 = hlds__hlds_desc__describe_pred_2_f_0((MR_Integer) 0, PredInfo_9);
  Var_17 = mercury__string__f_43_43_2_f_0(PredDesc_10, (MR_String) "\n");
  *PredDescEntry_6 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_17);
}

static void MR_CALL 
hlds__hlds_call_tree__construct_indirect_pred_callees_entry_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_PredDescEntry_6;

  hlds__hlds_call_tree__lookup_callee_and_construct_indirect_entry_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_PredDescEntry_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_PredDescEntry_6));
}

static void MR_CALL 
hlds__hlds_call_tree__construct_indirect_pred_callees_entry_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredCallees_8,
  MR_String STATE_VARIABLE_MaybeNl_0_19,
  MR_String * STATE_VARIABLE_MaybeNl_20,
  MR_Word STATE_VARIABLE_State_0_21,
  MR_Word * STATE_VARIABLE_State_22)
{
  MR_bool succeeded;
  MR_Word PredInfo_12 = ((MR_Word) ((MR_hl_field(0, PredCallees_8, 1))));
  MR_Word Callees_13 = ((MR_Word) ((MR_hl_field(0, PredCallees_8, 2))));
  MR_String PredDesc_14;
  MR_Word CalleeDescEntries_15;
  MR_Word SortedCalleeDescEntries_16;
  MR_Word Var_24;
  MR_Word STATE_VARIABLE_State_1_25;
  MR_Word STATE_VARIABLE_State_2_29;
  MR_Word Var_46;

  PredDesc_14 = hlds__hlds_desc__describe_pred_2_f_0((MR_Integer) 0, PredInfo_12);
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[9]));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (hlds__hlds_call_tree__construct_indirect_pred_callees_entry_6_p_0_1));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) (ModuleInfo_7));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_24, Callees_13, &CalleeDescEntries_15);
  mercury__string__builder__append_string_3_p_0(STATE_VARIABLE_MaybeNl_0_19, STATE_VARIABLE_State_0_21, &STATE_VARIABLE_State_1_25);
  *STATE_VARIABLE_MaybeNl_20 = (MR_String) "\n";
  mercury__string__builder__append_string_3_p_0(PredDesc_14, STATE_VARIABLE_State_1_25, &Var_46);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_46, &STATE_VARIABLE_State_2_29);
  mercury__list__sort_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CalleeDescEntries_15, &SortedCalleeDescEntries_16);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[14]), ((MR_Box) (CalleeDescEntries_15)), ((MR_Box) (SortedCalleeDescEntries_16)));
  if (succeeded)
    if ((CalleeDescEntries_15 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_22 = STATE_VARIABLE_State_2_29;
    else
    {
      MR_Word STATE_VARIABLE_State_3_33;

      mercury__string__builder__append_string_3_p_0((MR_String) "    <call and lexicographic order>\n", STATE_VARIABLE_State_2_29, &STATE_VARIABLE_State_3_33);
      mercury__string__builder__append_strings_3_p_0(CalleeDescEntries_15, STATE_VARIABLE_State_3_33, STATE_VARIABLE_State_22);
    }
  else
  {
    MR_Word STATE_VARIABLE_State_5_36;
    MR_Word STATE_VARIABLE_State_6_37;
    MR_Word STATE_VARIABLE_State_7_39;
    MR_Word STATE_VARIABLE_State_8_41;

    mercury__string__builder__append_string_3_p_0((MR_String) "    <call order>\n", STATE_VARIABLE_State_2_29, &STATE_VARIABLE_State_5_36);
    mercury__string__builder__append_strings_3_p_0(CalleeDescEntries_15, STATE_VARIABLE_State_5_36, &STATE_VARIABLE_State_6_37);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_6_37, &STATE_VARIABLE_State_7_39);
    mercury__string__builder__append_string_3_p_0((MR_String) "    <lexicographic order>\n", STATE_VARIABLE_State_7_39, &STATE_VARIABLE_State_8_41);
    mercury__string__builder__append_strings_3_p_0(SortedCalleeDescEntries_16, STATE_VARIABLE_State_8_41, STATE_VARIABLE_State_22);
  }
}

static void MR_CALL 
hlds__hlds_call_tree__lookup_callee_and_construct_direct_entry_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5,
  MR_String * PredDescEntry_6)
{
  MR_Word PredInfo_7;
  MR_String PredDesc_8;
  MR_String Var_15;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_5, &PredInfo_7);
  PredDesc_8 = hlds__hlds_desc__describe_pred_2_f_0((MR_Integer) 0, PredInfo_7);
  Var_15 = mercury__string__f_43_43_2_f_0(PredDesc_8, (MR_String) "\n");
  *PredDescEntry_6 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_15);
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__callee_get_local_pred_id_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * PredId_3)
{
  MR_bool succeeded;
  MR_Word Var_4;

  *PredId_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  Var_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
  succeeded = (Var_4 == (MR_Integer) 1);
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree__construct_direct_pred_callees_entry_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv1_PredDescEntry_6;

  hlds__hlds_call_tree__lookup_callee_and_construct_direct_entry_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_PredDescEntry_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_PredDescEntry_6));
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__construct_direct_pred_callees_entry_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_PredId_3;

  succeeded = hlds__hlds_call_tree__callee_get_local_pred_id_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_PredId_3);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_PredId_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree__construct_direct_pred_callees_entry_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredCallees_8,
  MR_String STATE_VARIABLE_MaybeNl_0_17,
  MR_String * STATE_VARIABLE_MaybeNl_18,
  MR_Word STATE_VARIABLE_State_0_19,
  MR_Word * STATE_VARIABLE_State_20)
{
  MR_bool succeeded;
  MR_Word PredInfo_12 = ((MR_Word) ((MR_hl_field(0, PredCallees_8, 1))));
  MR_Word Callees_13 = ((MR_Word) ((MR_hl_field(0, PredCallees_8, 2))));
  MR_String PredDesc_14;
  MR_Word LocalCalleePredIds_15;
  MR_Word LocalCalleeDescEntries_16;
  MR_Word Var_23;
  MR_Word STATE_VARIABLE_State_1_24;
  MR_Word STATE_VARIABLE_State_2_28;
  MR_Word Var_38;

  PredDesc_14 = hlds__hlds_desc__describe_pred_2_f_0((MR_Integer) 0, PredInfo_12);
  mercury__list__filter_map_3_p_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[15]), Callees_13, &LocalCalleePredIds_15);
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[8]));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (hlds__hlds_call_tree__construct_direct_pred_callees_entry_6_p_0_2));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (ModuleInfo_7));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_23, LocalCalleePredIds_15, &LocalCalleeDescEntries_16);
  mercury__string__builder__append_string_3_p_0(STATE_VARIABLE_MaybeNl_0_17, STATE_VARIABLE_State_0_19, &STATE_VARIABLE_State_1_24);
  *STATE_VARIABLE_MaybeNl_18 = (MR_String) "\n";
  mercury__string__builder__append_string_3_p_0(PredDesc_14, STATE_VARIABLE_State_1_24, &Var_38);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_38, &STATE_VARIABLE_State_2_28);
  mercury__string__builder__append_strings_3_p_0(LocalCalleeDescEntries_16, STATE_VARIABLE_State_2_28, STATE_VARIABLE_State_20);
}

static void MR_CALL 
hlds__hlds_call_tree__compare_pred_callees_by_order_4_p_0(
  MR_Word PredOrderMap_5,
  MR_Word PredCalleesA_6,
  MR_Word PredCalleesB_7,
  MR_Word * Result_8)
{
  MR_bool succeeded;
  MR_Word PredIdA_9 = ((MR_Word) ((MR_hl_field(0, PredCalleesA_6, 0))));
  MR_Word PredIdB_12 = ((MR_Word) ((MR_hl_field(0, PredCalleesB_7, 0))));
  MR_Integer OrderA_15;
  MR_Integer OrderB_16;
  MR_Box conv0_OrderA_15;
  MR_Box conv1_OrderB_16;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), PredOrderMap_5, ((MR_Box) (PredIdA_9)), &conv0_OrderA_15);
  OrderA_15 = ((MR_Integer) (conv0_OrderA_15));
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), PredOrderMap_5, ((MR_Box) (PredIdB_12)), &conv1_OrderB_16);
  OrderB_16 = ((MR_Integer) (conv1_OrderB_16));
  succeeded = (OrderA_15 < OrderB_16);
  if (succeeded)
    *Result_8 = (MR_Integer) 1;
  else
  {
    succeeded = (OrderA_15 > OrderB_16);
    if (succeeded)
      *Result_8 = (MR_Integer) 2;
    else
      *Result_8 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__complete_and_add_indirect_map_pred_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__hlds_call_tree__IntroducedFrom__pred__complete_and_add_indirect_map_pred__661__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree__complete_and_add_indirect_map_pred_4_p_0(
  MR_Word IncompleteSccIndirectPredCalleeMap_5,
  MR_Word PredId_6,
  MR_Word STATE_VARIABLE_IndirectPredCalleeMap_0_16,
  MR_Word * STATE_VARIABLE_IndirectPredCalleeMap_17)
{
  MR_bool succeeded;
  MR_Word IncompletePredCallees_8;
  MR_Box conv0_IncompletePredCallees_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), IncompleteSccIndirectPredCalleeMap_5, ((MR_Box) (PredId_6)), &conv0_IncompletePredCallees_8);
  if (succeeded)
  {
    IncompletePredCallees_8 = ((MR_Word) (conv0_IncompletePredCallees_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word PredCalleesPredId_9 = ((MR_Word) ((MR_hl_field(0, IncompletePredCallees_8, 0))));
    MR_Word PredInfo_10 = ((MR_Word) ((MR_hl_field(0, IncompletePredCallees_8, 1))));
    MR_Word IncompleteIndirectCallees_11 = ((MR_Word) ((MR_hl_field(0, IncompletePredCallees_8, 2))));
    MR_Word CompleteIndirectCalleesCord0_12;
    MR_Word CompleteIndirectCallees0_13;
    MR_Word CompleteIndirectCallees_14;
    MR_Word PredCallees_15;
    MR_Word Var_18;
    MR_Word Var_21;
    MR_Word SeenCalleess0_28;
    MR_Word CalleeCordWithoutDuplicates_29;
    MR_Word Var_30;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_18, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[6]));
      MR_hl_field(0, Var_18, 1) = ((MR_Box) (hlds__hlds_call_tree__complete_and_add_indirect_map_pred_4_p_0_1));
      MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_18, 3) = ((MR_Box) (PredId_6));
      MR_hl_field(0, Var_18, 4) = ((MR_Box) (PredCalleesPredId_9));
    }
    mercury__require__expect_3_p_0(Var_18, (MR_String) "predicate \140hlds.hlds_call_tree.complete_and_add_indirect_map_pred\'/4", (MR_String) "PredId != PredCalleesPredId");
    Var_21 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0));
    hlds__hlds_call_tree__complete_callees_4_p_0(IncompleteSccIndirectPredCalleeMap_5, IncompleteIndirectCallees_11, Var_21, &CompleteIndirectCalleesCord0_12);
    CompleteIndirectCallees0_13 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0), CompleteIndirectCalleesCord0_12);
    SeenCalleess0_28 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0));
    Var_30 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0));
    hlds__hlds_call_tree__keep_only_first_calls_loop_4_p_0(CompleteIndirectCallees0_13, SeenCalleess0_28, Var_30, &CalleeCordWithoutDuplicates_29);
    CompleteIndirectCallees_14 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0), CalleeCordWithoutDuplicates_29);
    {
      PredCallees_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PredCallees_15, 0) = ((MR_Box) (PredId_6));
      MR_hl_field(0, PredCallees_15, 1) = ((MR_Box) (PredInfo_10));
      MR_hl_field(0, PredCallees_15, 2) = ((MR_Box) (CompleteIndirectCallees_14));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), ((MR_Box) (PredId_6)), ((MR_Box) (PredCallees_15)), STATE_VARIABLE_IndirectPredCalleeMap_0_16, STATE_VARIABLE_IndirectPredCalleeMap_17);
  }
  else
    *STATE_VARIABLE_IndirectPredCalleeMap_17 = STATE_VARIABLE_IndirectPredCalleeMap_0_16;
}

static void MR_CALL 
hlds__hlds_call_tree__complete_callees_4_p_0(
  MR_Word IncompleteSccIndirectPredCalleeMap_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CompleteCalleesCord_0_3,
  MR_Word * STATE_VARIABLE_CompleteCalleesCord_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CompleteCalleesCord_4 = STATE_VARIABLE_CompleteCalleesCord_0_3;
    else
    {
      MR_Word Callee_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Callees_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word PredId_13;
      MR_Word STATE_VARIABLE_CompleteCalleesCord_1_21;
      MR_Word STATE_VARIABLE_CompleteCalleesCord_2_22;
      MR_Word PredCallees_15;
      MR_Box conv0_PredCallees_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_CompleteCalleesCord_0_3;

      mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0), ((MR_Box) (Callee_10)), STATE_VARIABLE_CompleteCalleesCord_0_3, &STATE_VARIABLE_CompleteCalleesCord_1_21);
      PredId_13 = ((MR_Word) ((MR_hl_field(0, Callee_10, 0))));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), IncompleteSccIndirectPredCalleeMap_1, ((MR_Box) (PredId_13)), &conv0_PredCallees_15);
      if (succeeded)
      {
        PredCallees_15 = ((MR_Word) (conv0_PredCallees_15));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word SccPredCallees_18 = ((MR_Word) ((MR_hl_field(0, PredCallees_15, 2))));
        MR_Word Var_23;
        MR_Word Var_24;

        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (Callee_10));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) (SccPredCallees_18));
        }
        Var_23 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0), Var_24);
        STATE_VARIABLE_CompleteCalleesCord_2_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0), STATE_VARIABLE_CompleteCalleesCord_1_21, Var_23);
      }
      else
        STATE_VARIABLE_CompleteCalleesCord_2_22 = STATE_VARIABLE_CompleteCalleesCord_1_21;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Callees_11;
      next_value_of_STATE_VARIABLE_CompleteCalleesCord_0_3 = STATE_VARIABLE_CompleteCalleesCord_2_22;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_CompleteCalleesCord_0_3 = next_value_of_STATE_VARIABLE_CompleteCalleesCord_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__build_incomplete_indirect_map_pred_6_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__hlds_call_tree__IntroducedFrom__pred__build_incomplete_indirect_map_pred__605__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__build_incomplete_indirect_map_pred_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__hlds_call_tree__IntroducedFrom__pred__build_incomplete_indirect_map_pred__602__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree__build_incomplete_indirect_map_pred_6_p_0(
  MR_Word DirectCalleeMap_7,
  MR_Word SccSet_8,
  MR_Word LowerSccIndirectCalleeMap_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_IncompleteSccIndirectCalleeMap_0_18,
  MR_Word * STATE_VARIABLE_IncompleteSccIndirectCalleeMap_19)
{
  MR_bool succeeded;
  MR_Word Var_20;
  MR_Word PredCallees_12;
  MR_Box conv0_PredCallees_12;

  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[5]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (hlds__hlds_call_tree__build_incomplete_indirect_map_pred_6_p_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (SccSet_8));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) (PredId_10));
  }
  mercury__require__expect_3_p_0(Var_20, (MR_String) "predicate \140hlds.hlds_call_tree.build_incomplete_indirect_map_pred\'/6", (MR_String) "PredId not in SccSet");
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), DirectCalleeMap_7, ((MR_Box) (PredId_10)), &conv0_PredCallees_12);
  if (succeeded)
  {
    PredCallees_12 = ((MR_Word) (conv0_PredCallees_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word PredCalleesPredId_13 = ((MR_Word) ((MR_hl_field(0, PredCallees_12, 0))));
    MR_Word PredInfo_14 = ((MR_Word) ((MR_hl_field(0, PredCallees_12, 1))));
    MR_Word DirectCallees_15 = ((MR_Word) ((MR_hl_field(0, PredCallees_12, 2))));
    MR_Word IncompleteIndirectCallees_16;
    MR_Word IncompleteIndirectPredCallees_17;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_27;

    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[6]));
      MR_hl_field(0, Var_23, 1) = ((MR_Box) (hlds__hlds_call_tree__build_incomplete_indirect_map_pred_6_p_0_2));
      MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_23, 3) = ((MR_Box) (PredId_10));
      MR_hl_field(0, Var_23, 4) = ((MR_Box) (PredCalleesPredId_13));
    }
    mercury__require__expect_3_p_0(Var_23, (MR_String) "predicate \140hlds.hlds_call_tree.build_incomplete_indirect_map_pred\'/6", (MR_String) "PredId != PredCalleesPredId");
    Var_26 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0));
    hlds__hlds_call_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_99_111_109_112_108_101_116_101_95_105_110_100_105_114_101_99_116_95_109_97_112_95_99_97_108_108_101_101_115_95_95_91_50_93_95_48_5_p_0(LowerSccIndirectCalleeMap_9, DirectCallees_15, Var_26, &IncompleteIndirectCallees_16);
    Var_27 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0), IncompleteIndirectCallees_16);
    {
      IncompleteIndirectPredCallees_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, IncompleteIndirectPredCallees_17, 0) = ((MR_Box) (PredId_10));
      MR_hl_field(0, IncompleteIndirectPredCallees_17, 1) = ((MR_Box) (PredInfo_14));
      MR_hl_field(0, IncompleteIndirectPredCallees_17, 2) = ((MR_Box) (Var_27));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), ((MR_Box) (PredId_10)), ((MR_Box) (IncompleteIndirectPredCallees_17)), STATE_VARIABLE_IncompleteSccIndirectCalleeMap_0_18, STATE_VARIABLE_IncompleteSccIndirectCalleeMap_19);
  }
  else
    *STATE_VARIABLE_IncompleteSccIndirectCalleeMap_19 = STATE_VARIABLE_IncompleteSccIndirectCalleeMap_0_18;
}

static void MR_CALL 
hlds__hlds_call_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_99_111_109_112_108_101_116_101_95_105_110_100_105_114_101_99_116_95_109_97_112_95_99_97_108_108_101_101_115_95_95_91_50_93_95_48_5_p_0(
  MR_Word LowerSccIndirectCalleeMap_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_IncompleteIndirectCallees_0_4,
  MR_Word * STATE_VARIABLE_IncompleteIndirectCallees_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_IncompleteIndirectCallees_5 = STATE_VARIABLE_IncompleteIndirectCallees_0_4;
    else
    {
      MR_Word Callee_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Callees_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word CalleePredId_16 = ((MR_Word) ((MR_hl_field(0, Callee_13, 0))));
      MR_Word STATE_VARIABLE_IncompleteIndirectCallees_1_24;
      MR_Word IndirectPredCallees_18;
      MR_Box conv0_IndirectPredCallees_18;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_IncompleteIndirectCallees_0_4;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), LowerSccIndirectCalleeMap_1, ((MR_Box) (CalleePredId_16)), &conv0_IndirectPredCallees_18);
      if (succeeded)
      {
        IndirectPredCallees_18 = ((MR_Word) (conv0_IndirectPredCallees_18));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word IndirectCallees_21 = ((MR_Word) ((MR_hl_field(0, IndirectPredCallees_18, 2))));
        MR_Word Var_25;
        MR_Word Var_26;

        {
          Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_26, 0) = ((MR_Box) (Callee_13));
          MR_hl_field(1, Var_26, 1) = ((MR_Box) (IndirectCallees_21));
        }
        Var_25 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0), Var_26);
        STATE_VARIABLE_IncompleteIndirectCallees_1_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0), STATE_VARIABLE_IncompleteIndirectCallees_0_4, Var_25);
      }
      else
        mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0), ((MR_Box) (Callee_13)), STATE_VARIABLE_IncompleteIndirectCallees_0_4, &STATE_VARIABLE_IncompleteIndirectCallees_1_24);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Callees_14;
      next_value_of_STATE_VARIABLE_IncompleteIndirectCallees_0_4 = STATE_VARIABLE_IncompleteIndirectCallees_1_24;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_IncompleteIndirectCallees_0_4 = next_value_of_STATE_VARIABLE_IncompleteIndirectCallees_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_call_tree__add_pred_and_callees_to_digraph_3_p_0(
  MR_Word PredCallee_4,
  MR_Word STATE_VARIABLE_Graph_0_10,
  MR_Word * STATE_VARIABLE_Graph_11)
{
  MR_Word CallerPredId_6 = ((MR_Word) ((MR_hl_field(0, PredCallee_4, 0))));
  MR_Word Callees_8 = ((MR_Word) ((MR_hl_field(0, PredCallee_4, 2))));
  MR_Word CallerKey_9;
  MR_Word STATE_VARIABLE_Graph_1_12;

  mercury__digraph__add_vertex_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (CallerPredId_6)), &CallerKey_9, STATE_VARIABLE_Graph_0_10, &STATE_VARIABLE_Graph_1_12);
  hlds__hlds_call_tree__add_caller_callees_to_digraph_4_p_0(CallerKey_9, Callees_8, STATE_VARIABLE_Graph_1_12, STATE_VARIABLE_Graph_11);
}

static void MR_CALL 
hlds__hlds_call_tree__add_caller_callees_to_digraph_4_p_0(
  MR_Word CallerKey_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Graph_0_3,
  MR_Word * STATE_VARIABLE_Graph_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Graph_4 = STATE_VARIABLE_Graph_0_3;
    else
    {
      MR_Word Callee_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Callees_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word CalleePredId_13 = ((MR_Word) ((MR_hl_field(0, Callee_10, 0))));
      MR_Word CalleeKey_15;
      MR_Word STATE_VARIABLE_Graph_1_18;
      MR_Word STATE_VARIABLE_Graph_2_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Graph_0_3;

      mercury__digraph__add_vertex_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (CalleePredId_13)), &CalleeKey_15, STATE_VARIABLE_Graph_0_3, &STATE_VARIABLE_Graph_1_18);
      mercury__digraph__add_edge_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CallerKey_1, CalleeKey_15, STATE_VARIABLE_Graph_1_18, &STATE_VARIABLE_Graph_2_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Callees_11;
      next_value_of_STATE_VARIABLE_Graph_0_3 = STATE_VARIABLE_Graph_2_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Graph_0_3 = next_value_of_STATE_VARIABLE_Graph_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__callee_is_local_has_not_been_handled_3_p_0(
  MR_Word HandledPredIds_4,
  MR_Word Callee_5,
  MR_Word * PredId_6)
{
  MR_bool succeeded;
  MR_Word MaybeLocal_7;

  *PredId_6 = ((MR_Word) ((MR_hl_field(0, Callee_5, 0))));
  MaybeLocal_7 = ((MR_Unsigned) ((MR_hl_field(0, Callee_5, 1))) & (MR_Integer) 1);
  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), HandledPredIds_4, ((MR_Box) (*PredId_6)));
  if (succeeded)
    succeeded = MR_FALSE;
  else
    succeeded = (MaybeLocal_7 == (MR_Integer) 1);
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree__pred_id_to_callee_3_p_0(
  MR_Word LocalPredIds_4,
  MR_Word PredId_5,
  MR_Word * Callee_6)
{
  MR_bool succeeded;
  MR_Word MaybeLocal_7;

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), LocalPredIds_4, ((MR_Box) (PredId_5)));
  if (succeeded)
    MaybeLocal_7 = (MR_Integer) 1;
  else
    MaybeLocal_7 = (MR_Integer) 0;
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Callee_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PredId_5));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (MaybeLocal_7));
  }
}

static void MR_CALL 
hlds__hlds_call_tree__generate_movability_report_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_TypeCtorNameArities_13;

  hlds__hlds_call_tree__acc_local_type_ctors_in_pred_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_TypeCtorNameArities_13);
  *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_TypeCtorNameArities_13));
}

static void MR_CALL 
hlds__hlds_call_tree__generate_movability_report_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_TypeCtorNameArities_12;

  hlds__hlds_call_tree__acc_local_type_ctors_in_pred_arg_list_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_TypeCtorNameArities_12);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_TypeCtorNameArities_12));
}

static void MR_CALL 
hlds__hlds_call_tree__generate_movability_report_4_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_MovingPredIdSet_23;
  MR_Word conv1_STATE_VARIABLE_UnknownNameSet_25;
  MR_Word conv0_STATE_VARIABLE_AmbigNameSet_27;

  hlds__hlds_call_tree__acc_moving_pred_name_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_MovingPredIdSet_23, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_UnknownNameSet_25, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_AmbigNameSet_27);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_MovingPredIdSet_23));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_UnknownNameSet_25));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_AmbigNameSet_27));
}

void MR_CALL 
hlds__hlds_call_tree__generate_movability_report_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word CallTreeInfo_6,
  MR_Word WantToMovePredNames_7,
  MR_Word * Specs_8)
{
  MR_bool succeeded;
  MR_Word WantToMovePredIdSet_9;
  MR_Word UnknownNameSet_10;
  MR_Word AmbigNameSet_11;
  MR_Word UnknownNames_12;
  MR_Word AmbigNames_13;
  MR_Word UnknownSpecs_14;
  MR_Word AmbigSpecs_19;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Box conv5_WantToMovePredIdSet_9;
  MR_Box conv4_UnknownNameSet_10;
  MR_Box conv3_AmbigNameSet_11;

  {
    Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_43, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_8[0]));
    MR_hl_field(0, Var_43, 1) = ((MR_Box) (hlds__hlds_call_tree__generate_movability_report_4_p_0_1));
    MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_43, 3) = ((MR_Box) (ModuleInfo_5));
  }
  Var_44 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  Var_45 = mercury__set_tree234__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  Var_46 = mercury__set_tree234__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  mercury__list__foldl3_8_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[1]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[2]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[2]), Var_43, WantToMovePredNames_7, ((MR_Box) (Var_44)), &conv5_WantToMovePredIdSet_9, ((MR_Box) (Var_45)), &conv4_UnknownNameSet_10, ((MR_Box) (Var_46)), &conv3_AmbigNameSet_11);
  WantToMovePredIdSet_9 = ((MR_Word) (conv5_WantToMovePredIdSet_9));
  UnknownNameSet_10 = ((MR_Word) (conv4_UnknownNameSet_10));
  AmbigNameSet_11 = ((MR_Word) (conv3_AmbigNameSet_11));
  mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnknownNameSet_10, &UnknownNames_12);
  mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AmbigNameSet_11, &AmbigNames_13);
  if ((UnknownNames_12 == (MR_Word) ((MR_Unsigned) 0U)))
    UnknownSpecs_14 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word UnknownPieces_17;
    MR_Word UnknownSpec_18;
    MR_Word Var_47;
    MR_Word Var_50;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_String Var_55;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_String Var_64;
    MR_Box conv6_Var_55;
    MR_Box conv7_Var_64;

    conv6_Var_55 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnknownNames_12, ((MR_Box) ((MR_String) "name")), ((MR_Box) ((MR_String) "names")));
    Var_55 = ((MR_String) (conv6_Var_55));
    {
      Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[10])));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[9])));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
    }
    Var_60 = parse_tree__error_spec__fixed_list_to_pieces_2_f_0((MR_String) "and", UnknownNames_12);
    conv7_Var_64 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnknownNames_12, ((MR_Box) ((MR_String) "does not")), ((MR_Box) ((MR_String) "do not")));
    Var_64 = ((MR_String) (conv7_Var_64));
    {
      Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_63, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
      MR_hl_field(1, Var_62, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[13])));
    }
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, Var_62);
    UnknownPieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, Var_59);
    {
      UnknownSpec_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, UnknownSpec_18, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.hlds_call_tree.generate_movability_report\'/4"));
      MR_hl_field(1, UnknownSpec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, UnknownSpec_18, 2) = ((MR_Box) ((MR_Unsigned) 84U));
      MR_hl_field(1, UnknownSpec_18, 3) = ((MR_Box) (UnknownPieces_17));
    }
    {
      UnknownSpecs_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, UnknownSpecs_14, 0) = ((MR_Box) (UnknownSpec_18));
      MR_hl_field(1, UnknownSpecs_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  if ((AmbigNames_13 == (MR_Word) ((MR_Unsigned) 0U)))
    AmbigSpecs_19 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word AmbigPieces_22;
    MR_Word AmbigSpec_23;
    MR_Word Var_77;
    MR_Word Var_80;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_String Var_85;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_String Var_94;
    MR_Box conv8_Var_85;
    MR_Box conv9_Var_94;

    conv8_Var_85 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AmbigNames_13, ((MR_Box) ((MR_String) "name")), ((MR_Box) ((MR_String) "names")));
    Var_85 = ((MR_String) (conv8_Var_85));
    {
      Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_84, 1) = ((MR_Box) (Var_85));
    }
    {
      Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
      MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_80, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[10])));
      MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_83));
    }
    {
      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_77, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[9])));
      MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_80));
    }
    Var_90 = parse_tree__error_spec__fixed_list_to_pieces_2_f_0((MR_String) "and", AmbigNames_13);
    conv9_Var_94 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AmbigNames_13, ((MR_Box) ((MR_String) "is ambiguous.")), ((MR_Box) ((MR_String) "are ambiguous.")));
    Var_94 = ((MR_String) (conv9_Var_94));
    {
      Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_93, 1) = ((MR_Box) (Var_94));
    }
    {
      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
      MR_hl_field(1, Var_92, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[11])));
    }
    Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_90, Var_92);
    AmbigPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, Var_89);
    {
      AmbigSpec_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, AmbigSpec_23, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.hlds_call_tree.generate_movability_report\'/4"));
      MR_hl_field(1, AmbigSpec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, AmbigSpec_23, 2) = ((MR_Box) ((MR_Unsigned) 84U));
      MR_hl_field(1, AmbigSpec_23, 3) = ((MR_Box) (AmbigPieces_22));
    }
    {
      AmbigSpecs_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, AmbigSpecs_19, 0) = ((MR_Box) (AmbigSpec_23));
      MR_hl_field(1, AmbigSpecs_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  succeeded = (UnknownSpecs_14 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (AmbigSpecs_19 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Word ExportPredIds_25 = ((MR_Word) ((MR_hl_field(0, CallTreeInfo_6, 1))));
    MR_Word PredCalleeMap_28 = ((MR_Word) ((MR_hl_field(0, CallTreeInfo_6, 4))));
    MR_Word ExportPredIdSet_30;
    MR_Word NonMovingExportPredIdSet_31;
    MR_Word WantToMovePredIds_32;
    MR_Word MovingPredIdSet_33;
    MR_Word ConflictExportedPredIdSet_34;
    MR_Word NonMovingExportPredIds_35;
    MR_Word StayingPredIdSet_36;
    MR_Word MovingStayingPredIdSet_37;
    MR_Word InInterfaceTypeCtorSet_38;
    MR_Word StayingPredTypeCtorSet_39;
    MR_Word MovingPredTypeCtorSet_40;
    MR_Word Report_41;
    MR_Word InfoSpec_42;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_111;
    MR_Box conv11_InInterfaceTypeCtorSet_38;
    MR_Box conv13_StayingPredTypeCtorSet_39;
    MR_Box conv14_MovingPredTypeCtorSet_40;

    mercury__set_tree234__list_to_set_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ExportPredIds_25, &ExportPredIdSet_30);
    mercury__set_tree234__difference_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ExportPredIdSet_30, WantToMovePredIdSet_9, &NonMovingExportPredIdSet_31);
    mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), WantToMovePredIdSet_9, &WantToMovePredIds_32);
    Var_104 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
    hlds__hlds_call_tree__find_moving_pred_ids_5_p_0(PredCalleeMap_28, NonMovingExportPredIdSet_31, WantToMovePredIds_32, Var_104, &MovingPredIdSet_33);
    mercury__set_tree234__intersect_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NonMovingExportPredIdSet_31, MovingPredIdSet_33, &ConflictExportedPredIdSet_34);
    mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NonMovingExportPredIdSet_31, &NonMovingExportPredIds_35);
    Var_105 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
    hlds__hlds_call_tree__find_staying_pred_ids_5_p_0(PredCalleeMap_28, WantToMovePredIdSet_9, NonMovingExportPredIds_35, Var_105, &StayingPredIdSet_36);
    mercury__set_tree234__intersect_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), MovingPredIdSet_33, StayingPredIdSet_36, &MovingStayingPredIdSet_37);
    {
      Var_106 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_106, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_7[4]));
      MR_hl_field(0, Var_106, 1) = ((MR_Box) (hlds__hlds_call_tree__generate_movability_report_4_p_0_2));
      MR_hl_field(0, Var_106, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_106, 3) = ((MR_Box) (ModuleInfo_5));
    }
    Var_107 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0));
    mercury__set_tree234__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[3]), Var_106, ExportPredIdSet_30, ((MR_Box) (Var_107)), &conv11_InInterfaceTypeCtorSet_38);
    InInterfaceTypeCtorSet_38 = ((MR_Word) (conv11_InInterfaceTypeCtorSet_38));
    {
      Var_108 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_108, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_7[4]));
      MR_hl_field(0, Var_108, 1) = ((MR_Box) (hlds__hlds_call_tree__generate_movability_report_4_p_0_3));
      MR_hl_field(0, Var_108, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_108, 3) = ((MR_Box) (ModuleInfo_5));
    }
    Var_109 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0));
    mercury__set_tree234__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[3]), Var_108, StayingPredIdSet_36, ((MR_Box) (Var_109)), &conv13_StayingPredTypeCtorSet_39);
    StayingPredTypeCtorSet_39 = ((MR_Word) (conv13_StayingPredTypeCtorSet_39));
    Var_111 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0));
    mercury__set_tree234__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[3]), Var_108, MovingPredIdSet_33, ((MR_Box) (Var_111)), &conv14_MovingPredTypeCtorSet_40);
    MovingPredTypeCtorSet_40 = ((MR_Word) (conv14_MovingPredTypeCtorSet_40));
    {
      Report_41 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Report_41, 0) = ((MR_Box) (WantToMovePredIdSet_9));
      MR_hl_field(0, Report_41, 1) = ((MR_Box) (ConflictExportedPredIdSet_34));
      MR_hl_field(0, Report_41, 2) = ((MR_Box) (MovingPredIdSet_33));
      MR_hl_field(0, Report_41, 3) = ((MR_Box) (MovingStayingPredIdSet_37));
      MR_hl_field(0, Report_41, 4) = ((MR_Box) (InInterfaceTypeCtorSet_38));
      MR_hl_field(0, Report_41, 5) = ((MR_Box) (MovingPredTypeCtorSet_40));
      MR_hl_field(0, Report_41, 6) = ((MR_Box) (StayingPredTypeCtorSet_39));
    }
    hlds__hlds_call_tree__construct_movability_report_3_p_0(ModuleInfo_5, Report_41, &InfoSpec_42);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InfoSpec_42));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    *Specs_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), UnknownSpecs_14, AmbigSpecs_19);
}

static MR_Box MR_CALL 
hlds__hlds_call_tree__construct_movability_report_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv8_LambdaHeadVar__2_12;

  conv8_LambdaHeadVar__2_12 = hlds__hlds_call_tree__IntroducedFrom__func__line_list_to_line_pieces__1431__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_12));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__hlds_call_tree__construct_movability_report_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv6_LineNumberDescStr_6;

  hlds__hlds_call_tree__line_number_and_desc_to_string_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv6_LineNumberDescStr_6);
  *wrapper_arg_2 = ((MR_Box) (conv6_LineNumberDescStr_6));
}

static MR_Box MR_CALL 
hlds__hlds_call_tree__construct_movability_report_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_LineNumberDesc_6;

  conv4_LineNumberDesc_6 = hlds__hlds_call_tree__make_line_number_and_desc_for_type_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_LineNumberDesc_6));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_call_tree__construct_movability_report_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_LineNumberDesc_6;

  conv3_LineNumberDesc_6 = hlds__hlds_call_tree__make_line_number_and_desc_for_pred_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_LineNumberDesc_6));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_call_tree__construct_movability_report_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_12;

  conv2_LambdaHeadVar__2_12 = hlds__hlds_call_tree__IntroducedFrom__func__line_list_to_line_pieces__1431__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_12));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_call_tree__construct_movability_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = hlds__hlds_desc__describe_pred_from_id_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__hlds_call_tree__construct_movability_report_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Report_5,
  MR_Word * InfoSpec_6)
{
  MR_bool succeeded;
  MR_Word WantToMovePredIdSet_7 = ((MR_Word) ((MR_hl_field(0, Report_5, 0))));
  MR_Word ConflictExportedPredIdSet_8 = ((MR_Word) ((MR_hl_field(0, Report_5, 1))));
  MR_Word MovingPredIdSet_9 = ((MR_Word) ((MR_hl_field(0, Report_5, 2))));
  MR_Word MovingStayingPredIdSet_10 = ((MR_Word) ((MR_hl_field(0, Report_5, 3))));
  MR_Word InInterfaceTypeCtorSet_11 = ((MR_Word) ((MR_hl_field(0, Report_5, 4))));
  MR_Word MovingPredTypeCtorSet_12 = ((MR_Word) ((MR_hl_field(0, Report_5, 5))));
  MR_Word StayingPredTypeCtorSet_13 = ((MR_Word) ((MR_hl_field(0, Report_5, 6))));
  MR_Word WantToMovePredPieces_14;
  MR_Word WantToMovePieces_15;
  MR_Word MovingPredLinesAndDescs_16;
  MR_Word MovingTypeLinesAndDescs_17;
  MR_Word MovingPredTypePieces_18;
  MR_Word MovingPieces_19;
  MR_Word ConflictExportedPieces_20;
  MR_Word MovingTypePieces_23;
  MR_Word MovingStayingPieces_26;
  MR_Word InfoPieces_28;
  MR_Word Var_34;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_127;
  MR_Word Var_128;
  MR_Word Var_129;
  MR_Word PredDescSet_139;
  MR_Word PredDescs_140;
  MR_Word Var_141;
  MR_Word AllButLastLines_145;
  MR_String LastLine_146;
  MR_Word AllButLastLinePieceLists_147;
  MR_Word AllButLastLinePieces_148;
  MR_Word Var_151;
  MR_Word Var_152;
  MR_Word Var_153;
  MR_Word LineNumberDescs_158;
  MR_Word LastLineNumberDesc_160;
  MR_Integer LastLineNumber_161;
  MR_Word NumDigits_163;
  MR_Word LineNumberDescStrs_164;
  MR_Word Var_168;
  MR_Word AllButLastLines_171;
  MR_String LastLine_172;
  MR_Word AllButLastLinePieceLists_173;
  MR_Word AllButLastLinePieces_174;
  MR_Word Var_177;
  MR_Word Var_178;
  MR_Word Var_179;
  MR_Box conv1_LastLine_146;
  MR_Word Var_159;
  MR_Box conv5_LastLineNumberDesc_160;
  MR_Box conv7_LastLine_172;

  {
    Var_141 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_141, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_7[3]));
    MR_hl_field(0, Var_141, 1) = ((MR_Box) (hlds__hlds_call_tree__construct_movability_report_3_p_0_1));
    MR_hl_field(0, Var_141, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_141, 3) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_141, 4) = ((MR_Box) (ModuleInfo_4));
  }
  PredDescSet_139 = mercury__set_tree234__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_141, WantToMovePredIdSet_7);
  mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PredDescSet_139, &PredDescs_140);
  mercury__list__det_split_last_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PredDescs_140, &AllButLastLines_145, &conv1_LastLine_146);
  LastLine_146 = ((MR_String) (conv1_LastLine_146));
  AllButLastLinePieceLists_147 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[5]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[13]), AllButLastLines_145);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AllButLastLinePieceLists_147, &AllButLastLinePieces_148);
  {
    Var_153 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_153, 0) = ((MR_Box) (LastLine_146));
  }
  {
    Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_152, 0) = ((MR_Box) (Var_153));
    MR_hl_field(1, Var_152, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[70])));
  }
  Var_151 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AllButLastLinePieces_148, Var_152);
  WantToMovePredPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[68])), Var_151);
  Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), WantToMovePredPieces_14, (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[20])));
  WantToMovePieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[16])), Var_34);
  {
    Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_43, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[5]));
    MR_hl_field(0, Var_43, 1) = ((MR_Box) (hlds__hlds_call_tree__construct_movability_report_3_p_0_3));
    MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_43, 3) = ((MR_Box) (ModuleInfo_4));
  }
  MovingPredLinesAndDescs_16 = mercury__set_tree234__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_line_number_and_desc_0), Var_43, MovingPredIdSet_9);
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[6]));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (hlds__hlds_call_tree__construct_movability_report_3_p_0_4));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (ModuleInfo_4));
  }
  MovingTypeLinesAndDescs_17 = mercury__set_tree234__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_line_number_and_desc_0), Var_44, MovingPredTypeCtorSet_12);
  Var_45 = mercury__set_tree234__union_2_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_line_number_and_desc_0), MovingPredLinesAndDescs_16, MovingTypeLinesAndDescs_17);
  mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_line_number_and_desc_0), Var_45, &LineNumberDescs_158);
  mercury__list__det_split_last_3_p_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_line_number_and_desc_0), LineNumberDescs_158, &Var_159, &conv5_LastLineNumberDesc_160);
  LastLineNumberDesc_160 = ((MR_Word) (conv5_LastLineNumberDesc_160));
  LastLineNumber_161 = ((MR_Integer) ((MR_hl_field(0, LastLineNumberDesc_160, 0))));
  succeeded = (LastLineNumber_161 >= (MR_Integer) 100000);
  if (succeeded)
    NumDigits_163 = (MR_Integer) 3;
  else
  {
    succeeded = (LastLineNumber_161 >= (MR_Integer) 10000);
    if (succeeded)
      NumDigits_163 = (MR_Integer) 2;
    else
    {
      succeeded = (LastLineNumber_161 >= (MR_Integer) 1000);
      if (succeeded)
        NumDigits_163 = (MR_Integer) 1;
      else
        NumDigits_163 = (MR_Integer) 0;
    }
  }
  {
    Var_168 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_168, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[7]));
    MR_hl_field(0, Var_168, 1) = ((MR_Box) (hlds__hlds_call_tree__construct_movability_report_3_p_0_5));
    MR_hl_field(0, Var_168, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_168, 3) = ((MR_Box) (NumDigits_163));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_line_number_and_desc_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_168, LineNumberDescs_158, &LineNumberDescStrs_164);
  mercury__list__det_split_last_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LineNumberDescStrs_164, &AllButLastLines_171, &conv7_LastLine_172);
  LastLine_172 = ((MR_String) (conv7_LastLine_172));
  AllButLastLinePieceLists_173 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[5]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[14]), AllButLastLines_171);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AllButLastLinePieceLists_173, &AllButLastLinePieces_174);
  {
    Var_179 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_179, 0) = ((MR_Box) (LastLine_172));
  }
  {
    Var_178 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_178, 0) = ((MR_Box) (Var_179));
    MR_hl_field(1, Var_178, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[70])));
  }
  Var_177 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AllButLastLinePieces_174, Var_178);
  MovingPredTypePieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[68])), Var_177);
  MovingPieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[28])), MovingPredTypePieces_18);
  succeeded = mercury__set_tree234__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ConflictExportedPredIdSet_8);
  if (succeeded)
    ConflictExportedPieces_20 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ConflictExportedPredPieces_21;

    ConflictExportedPredPieces_21 = hlds__hlds_call_tree__pred_name_set_to_line_pieces_2_f_0(ModuleInfo_4, ConflictExportedPredIdSet_8);
    ConflictExportedPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[34])), ConflictExportedPredPieces_21);
  }
  succeeded = mercury__set_tree234__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), InInterfaceTypeCtorSet_11);
  if (succeeded)
  {
    MR_Word MovingStayingPredTypeCtorSet_22;

    mercury__set_tree234__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), MovingPredTypeCtorSet_12, StayingPredTypeCtorSet_13, &MovingStayingPredTypeCtorSet_22);
    succeeded = mercury__set_tree234__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), MovingStayingPredTypeCtorSet_22);
    if (succeeded)
      MovingTypePieces_23 = (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[38]));
    else
    {
      MR_Word ExportedTypeCtorPieces_24;

      ExportedTypeCtorPieces_24 = hlds__hlds_call_tree__type_name_set_to_line_pieces_1_f_0(MovingStayingPredTypeCtorSet_22);
      MovingTypePieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[46])), ExportedTypeCtorPieces_24);
    }
  }
  else
  {
    MR_Word InInterfaceTypeCtorPieces_25;

    InInterfaceTypeCtorPieces_25 = hlds__hlds_call_tree__type_name_set_to_line_pieces_1_f_0(InInterfaceTypeCtorSet_11);
    MovingTypePieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[50])), InInterfaceTypeCtorPieces_25);
  }
  succeeded = mercury__set_tree234__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), MovingStayingPredIdSet_10);
  if (succeeded)
    MovingStayingPieces_26 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word MovingStayingPredPieces_27;

    MovingStayingPredPieces_27 = hlds__hlds_call_tree__pred_name_set_to_line_pieces_2_f_0(ModuleInfo_4, MovingStayingPredIdSet_10);
    MovingStayingPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[66])), MovingStayingPredPieces_27);
  }
  Var_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MovingTypePieces_23, MovingStayingPieces_26);
  Var_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MovingPieces_19, Var_129);
  Var_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ConflictExportedPieces_20, Var_128);
  InfoPieces_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), WantToMovePieces_15, Var_127);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *InfoSpec_6 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.hlds_call_tree.construct_movability_report\'/3"));
    MR_hl_field(1, base, 1) = ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_3[0])));
    MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 84U));
    MR_hl_field(1, base, 3) = ((MR_Box) (InfoPieces_28));
  }
}

static MR_Box MR_CALL 
hlds__hlds_call_tree__type_name_set_to_line_pieces_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_12;

  conv2_LambdaHeadVar__2_12 = hlds__hlds_call_tree__IntroducedFrom__func__line_list_to_line_pieces__1431__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_12));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_call_tree__type_name_set_to_line_pieces_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_5;

  conv0_Str_5 = hlds__hlds_call_tree__name_arity_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_5));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
hlds__hlds_call_tree__type_name_set_to_line_pieces_1_f_0(
  MR_Word NameAritySet_3)
{
  MR_Word Pieces_4;
  MR_Word PredDescSet_5;
  MR_Word PredDescs_6;
  MR_Word AllButLastLines_10;
  MR_String LastLine_11;
  MR_Word AllButLastLinePieceLists_12;
  MR_Word AllButLastLinePieces_13;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Box conv1_LastLine_11;

  PredDescSet_5 = mercury__set_tree234__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[11]), NameAritySet_3);
  mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PredDescSet_5, &PredDescs_6);
  mercury__list__det_split_last_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PredDescs_6, &AllButLastLines_10, &conv1_LastLine_11);
  LastLine_11 = ((MR_String) (conv1_LastLine_11));
  AllButLastLinePieceLists_12 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[5]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[12]), AllButLastLines_10);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AllButLastLinePieceLists_12, &AllButLastLinePieces_13);
  {
    Var_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_18, 0) = ((MR_Box) (LastLine_11));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[70])));
  }
  Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AllButLastLinePieces_13, Var_17);
  Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[68])), Var_16);
  return Pieces_4;
}

static MR_Box MR_CALL 
hlds__hlds_call_tree__pred_name_set_to_line_pieces_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_12;

  conv2_LambdaHeadVar__2_12 = hlds__hlds_call_tree__IntroducedFrom__func__line_list_to_line_pieces__1431__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_12));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_call_tree__pred_name_set_to_line_pieces_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = hlds__hlds_desc__describe_pred_from_id_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
hlds__hlds_call_tree__pred_name_set_to_line_pieces_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredIdSet_5)
{
  MR_Word Pieces_6;
  MR_Word PredDescSet_7;
  MR_Word PredDescs_8;
  MR_Word Var_9;
  MR_Word AllButLastLines_13;
  MR_String LastLine_14;
  MR_Word AllButLastLinePieceLists_15;
  MR_Word AllButLastLinePieces_16;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Box conv1_LastLine_14;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_7[3]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (hlds__hlds_call_tree__pred_name_set_to_line_pieces_2_f_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_9, 4) = ((MR_Box) (ModuleInfo_4));
  }
  PredDescSet_7 = mercury__set_tree234__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_9, PredIdSet_5);
  mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PredDescSet_7, &PredDescs_8);
  mercury__list__det_split_last_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PredDescs_8, &AllButLastLines_13, &conv1_LastLine_14);
  LastLine_14 = ((MR_String) (conv1_LastLine_14));
  AllButLastLinePieceLists_15 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[5]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[10]), AllButLastLines_13);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AllButLastLinePieceLists_15, &AllButLastLinePieces_16);
  {
    Var_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_21, 0) = ((MR_Box) (LastLine_14));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[70])));
  }
  Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AllButLastLinePieces_16, Var_20);
  Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[68])), Var_19);
  return Pieces_6;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__find_staying_pred_ids_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__hlds_call_tree__IntroducedFrom__pred__find_staying_pred_ids__1111__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__find_staying_pred_ids_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_PredId_3;

  succeeded = hlds__hlds_call_tree__callee_get_local_pred_id_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_PredId_3);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_PredId_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree__find_staying_pred_ids_5_p_0(
  MR_Word PredCalleeMap_1,
  MR_Word WantToMovePredIdSet_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_StayingPredIdSet_0_4,
  MR_Word * STATE_VARIABLE_StayingPredIdSet_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_StayingPredIdSet_5 = STATE_VARIABLE_StayingPredIdSet_0_4;
    else
    {
      MR_Word HeadPredId_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word TailPredIds_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word NextPredIds_16;
      MR_Word STATE_VARIABLE_StayingPredIdSet_2_28;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_StayingPredIdSet_0_4;

      succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), WantToMovePredIdSet_2, ((MR_Box) (HeadPredId_13)));
      if (succeeded)
      {
        NextPredIds_16 = TailPredIds_14;
        STATE_VARIABLE_StayingPredIdSet_2_28 = STATE_VARIABLE_StayingPredIdSet_0_4;
      }
      else
      {
        MR_Word STATE_VARIABLE_StayingPredIdSet_1_25;

        succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (HeadPredId_13)), STATE_VARIABLE_StayingPredIdSet_0_4, &STATE_VARIABLE_StayingPredIdSet_1_25);
        if (succeeded)
        {
          MR_Word PredCallees_17;
          MR_Word Callees_20;
          MR_Word LocalCalleePredIds_21;
          MR_Word NewLocalCalleePredIds_22;
          MR_Word Var_27;
          MR_Box conv0_PredCallees_17;

          STATE_VARIABLE_StayingPredIdSet_2_28 = STATE_VARIABLE_StayingPredIdSet_1_25;
          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), PredCalleeMap_1, ((MR_Box) (HeadPredId_13)), &conv0_PredCallees_17);
          PredCallees_17 = ((MR_Word) (conv0_PredCallees_17));
          Callees_20 = ((MR_Word) ((MR_hl_field(0, PredCallees_17, 2))));
          mercury__list__filter_map_3_p_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[9]), Callees_20, &LocalCalleePredIds_21);
          {
            Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_27, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[2]));
            MR_hl_field(0, Var_27, 1) = ((MR_Box) (hlds__hlds_call_tree__find_staying_pred_ids_5_p_0_2));
            MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_27, 3) = ((MR_Box) (STATE_VARIABLE_StayingPredIdSet_1_25));
          }
          mercury__list__negated_filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_27, LocalCalleePredIds_21, &NewLocalCalleePredIds_22);
          NextPredIds_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NewLocalCalleePredIds_22, TailPredIds_14);
        }
        else
        {
          NextPredIds_16 = TailPredIds_14;
          STATE_VARIABLE_StayingPredIdSet_2_28 = STATE_VARIABLE_StayingPredIdSet_0_4;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = NextPredIds_16;
      next_value_of_STATE_VARIABLE_StayingPredIdSet_0_4 = STATE_VARIABLE_StayingPredIdSet_2_28;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_StayingPredIdSet_0_4 = next_value_of_STATE_VARIABLE_StayingPredIdSet_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__find_moving_pred_ids_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__hlds_call_tree__IntroducedFrom__pred__find_moving_pred_ids__1078__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__find_moving_pred_ids_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_PredId_3;

  succeeded = hlds__hlds_call_tree__callee_get_local_pred_id_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_PredId_3);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_PredId_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree__find_moving_pred_ids_5_p_0(
  MR_Word PredCalleeMap_1,
  MR_Word NonMovingExportPredIdSet_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ReachablePredIdSet_0_4,
  MR_Word * STATE_VARIABLE_ReachablePredIdSet_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ReachablePredIdSet_5 = STATE_VARIABLE_ReachablePredIdSet_0_4;
    else
    {
      MR_Word HeadPredId_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word TailPredIds_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word NextPredIds_16;
      MR_Word STATE_VARIABLE_ReachablePredIdSet_2_28;
      MR_Word STATE_VARIABLE_ReachablePredIdSet_1_25;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ReachablePredIdSet_0_4;

      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (HeadPredId_13)), STATE_VARIABLE_ReachablePredIdSet_0_4, &STATE_VARIABLE_ReachablePredIdSet_1_25);
      if (succeeded)
      {
        STATE_VARIABLE_ReachablePredIdSet_2_28 = STATE_VARIABLE_ReachablePredIdSet_1_25;
        succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NonMovingExportPredIdSet_2, ((MR_Box) (HeadPredId_13)));
        if (succeeded)
          NextPredIds_16 = TailPredIds_14;
        else
        {
          MR_Word PredCallees_17;
          MR_Word Callees_20;
          MR_Word LocalCalleePredIds_21;
          MR_Word NewLocalCalleePredIds_22;
          MR_Word Var_27;
          MR_Box conv0_PredCallees_17;

          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), PredCalleeMap_1, ((MR_Box) (HeadPredId_13)), &conv0_PredCallees_17);
          PredCallees_17 = ((MR_Word) (conv0_PredCallees_17));
          Callees_20 = ((MR_Word) ((MR_hl_field(0, PredCallees_17, 2))));
          mercury__list__filter_map_3_p_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[8]), Callees_20, &LocalCalleePredIds_21);
          {
            Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_27, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[2]));
            MR_hl_field(0, Var_27, 1) = ((MR_Box) (hlds__hlds_call_tree__find_moving_pred_ids_5_p_0_2));
            MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_27, 3) = ((MR_Box) (STATE_VARIABLE_ReachablePredIdSet_1_25));
          }
          mercury__list__negated_filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_27, LocalCalleePredIds_21, &NewLocalCalleePredIds_22);
          NextPredIds_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NewLocalCalleePredIds_22, TailPredIds_14);
        }
      }
      else
      {
        NextPredIds_16 = TailPredIds_14;
        STATE_VARIABLE_ReachablePredIdSet_2_28 = STATE_VARIABLE_ReachablePredIdSet_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = NextPredIds_16;
      next_value_of_STATE_VARIABLE_ReachablePredIdSet_0_4 = STATE_VARIABLE_ReachablePredIdSet_2_28;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_ReachablePredIdSet_0_4 = next_value_of_STATE_VARIABLE_ReachablePredIdSet_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_call_tree__construct_local_call_tree_file_contents_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_State_10;

  hlds__hlds_call_tree__construct_pred_order_entry_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_State_10);
  *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_State_10));
}

static void MR_CALL 
hlds__hlds_call_tree__construct_local_call_tree_file_contents_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_String conv6_STATE_VARIABLE_MaybeNl_20;
  MR_Word conv5_STATE_VARIABLE_State_22;

  hlds__hlds_call_tree__construct_indirect_pred_callees_entry_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), &conv6_STATE_VARIABLE_MaybeNl_20, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_State_22);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_MaybeNl_20));
  *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_State_22));
}

static void MR_CALL 
hlds__hlds_call_tree__construct_local_call_tree_file_contents_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_Result_8;

  hlds__hlds_call_tree__compare_pred_callees_by_order_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_Result_8);
  *wrapper_arg_3 = ((MR_Box) (conv4_Result_8));
}

static void MR_CALL 
hlds__hlds_call_tree__construct_local_call_tree_file_contents_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_String conv1_STATE_VARIABLE_MaybeNl_18;
  MR_Word conv0_STATE_VARIABLE_State_20;

  hlds__hlds_call_tree__construct_direct_pred_callees_entry_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), &conv1_STATE_VARIABLE_MaybeNl_18, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_State_20);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_MaybeNl_18));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_State_20));
}

void MR_CALL 
hlds__hlds_call_tree__construct_local_call_tree_file_contents_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word CallTreeInfo_7,
  MR_String * DirectTreeFileStr_8,
  MR_String * IndirectTreeFileStr_9,
  MR_String * OrderFileStr_10)
{
  MR_Word PredCalleesList_13 = ((MR_Word) ((MR_hl_field(0, CallTreeInfo_7, 2))));
  MR_Word PredOrderMap_14 = ((MR_Word) ((MR_hl_field(0, CallTreeInfo_7, 3))));
  MR_Word DirectPredCalleeMap_15 = ((MR_Word) ((MR_hl_field(0, CallTreeInfo_7, 4))));
  MR_Word IndirectPredCalleesMap_16 = ((MR_Word) ((MR_hl_field(0, CallTreeInfo_7, 5))));
  MR_Word DirectTreeState0_17;
  MR_Word DirectTreeState_19;
  MR_Word IndirectPredCalleesList0_20;
  MR_Word IndirectPredCalleesList_21;
  MR_Word IndirectTreeState0_22;
  MR_Word IndirectTreeState_24;
  MR_Word PredIdCord_25;
  MR_Word PredIdList_26;
  MR_Word OrderState0_27;
  MR_Word OrderState_28;
  MR_Word Var_29;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Box conv3__MaybeNlD_18;
  MR_Box conv2_DirectTreeState_19;
  MR_Box conv8__MaybeNlI_23;
  MR_Box conv7_IndirectTreeState_24;
  MR_Box conv10_OrderState_28;

  DirectTreeState0_17 = mercury__string__builder__init_0_f_0();
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_6[1]));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (hlds__hlds_call_tree__construct_local_call_tree_file_contents_5_p_0_1));
    MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_29, 3) = ((MR_Box) (ModuleInfo_6));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_29, PredCalleesList_13, ((MR_Box) ((MR_String) "")), &conv3__MaybeNlD_18, ((MR_Box) (DirectTreeState0_17)), &conv2_DirectTreeState_19);
  DirectTreeState_19 = ((MR_Word) (conv2_DirectTreeState_19));
  *DirectTreeFileStr_8 = mercury__string__builder__to_string_1_f_0(DirectTreeState_19);
  mercury__map__values_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), IndirectPredCalleesMap_16, &IndirectPredCalleesList0_20);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_7[1]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (hlds__hlds_call_tree__construct_local_call_tree_file_contents_5_p_0_2));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (PredOrderMap_14));
  }
  mercury__list__sort_3_p_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), Var_31, IndirectPredCalleesList0_20, &IndirectPredCalleesList_21);
  IndirectTreeState0_22 = mercury__string__builder__init_0_f_0();
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_6[1]));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (hlds__hlds_call_tree__construct_local_call_tree_file_contents_5_p_0_3));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_32, 3) = ((MR_Box) (ModuleInfo_6));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_32, IndirectPredCalleesList_21, ((MR_Box) ((MR_String) "")), &conv8__MaybeNlI_23, ((MR_Box) (IndirectTreeState0_22)), &conv7_IndirectTreeState_24);
  IndirectTreeState_24 = ((MR_Word) (conv7_IndirectTreeState_24));
  *IndirectTreeFileStr_9 = mercury__string__builder__to_string_1_f_0(IndirectTreeState_24);
  Var_34 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  Var_35 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0(DirectPredCalleeMap_15, PredCalleesList_13, Var_34, Var_35, &PredIdCord_25);
  PredIdList_26 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIdCord_25);
  OrderState0_27 = mercury__string__builder__init_0_f_0();
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_7[2]));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (hlds__hlds_call_tree__construct_local_call_tree_file_contents_5_p_0_4));
    MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_36, 3) = ((MR_Box) (ModuleInfo_6));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_36, PredIdList_26, ((MR_Box) (OrderState0_27)), &conv10_OrderState_28);
  OrderState_28 = ((MR_Word) (conv10_OrderState_28));
  *OrderFileStr_10 = mercury__string__builder__to_string_1_f_0(OrderState_28);
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_34;

  succeeded = hlds__hlds_call_tree__IntroducedFrom__pred__construct_depth_first_left_right_order__714__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_34);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_34));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0(
  MR_Word PredCalleeMap_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_HandledPredIds_0_3,
  MR_Word STATE_VARIABLE_PredIdCord_0_4,
  MR_Word * STATE_VARIABLE_PredIdCord_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_PredIdCord_5 = STATE_VARIABLE_PredIdCord_0_4;
    else
    {
      MR_Word HeadPredCallees_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word TailPredCallees_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word PredId_16 = ((MR_Word) ((MR_hl_field(0, HeadPredCallees_12, 0))));
      MR_Word Callees_18 = ((MR_Word) ((MR_hl_field(0, HeadPredCallees_12, 2))));
      MR_Word NextPredCallees_22;
      MR_Word STATE_VARIABLE_PredIdCord_1_27;
      MR_Word STATE_VARIABLE_HandledPredIds_2_30;
      MR_Word STATE_VARIABLE_HandledPredIds_1_26;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_HandledPredIds_0_3;
      MR_Word next_value_of_STATE_VARIABLE_PredIdCord_0_4;

      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_16)), STATE_VARIABLE_HandledPredIds_0_3, &STATE_VARIABLE_HandledPredIds_1_26);
      if (succeeded)
      {
        MR_Word NewLocalPredIdCord_19;
        MR_Word NewLocalPredIds_20;
        MR_Word NewPredCallees_21;
        MR_Word Var_28;
        MR_Word Var_29;

        STATE_VARIABLE_HandledPredIds_2_30 = STATE_VARIABLE_HandledPredIds_1_26;
        mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_16)), STATE_VARIABLE_PredIdCord_0_4, &STATE_VARIABLE_PredIdCord_1_27);
        Var_28 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
        hlds__hlds_call_tree__keep_only_new_local_callees_4_p_0(STATE_VARIABLE_HandledPredIds_1_26, Callees_18, Var_28, &NewLocalPredIdCord_19);
        NewLocalPredIds_20 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NewLocalPredIdCord_19);
        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_29, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[4]));
          MR_hl_field(0, Var_29, 1) = ((MR_Box) (hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0_1));
          MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_29, 3) = ((MR_Box) (PredCalleeMap_1));
        }
        mercury__list__filter_map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), Var_29, NewLocalPredIds_20, &NewPredCallees_21);
        NextPredCallees_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), NewPredCallees_21, TailPredCallees_13);
      }
      else
      {
        NextPredCallees_22 = TailPredCallees_13;
        STATE_VARIABLE_PredIdCord_1_27 = STATE_VARIABLE_PredIdCord_0_4;
        STATE_VARIABLE_HandledPredIds_2_30 = STATE_VARIABLE_HandledPredIds_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = NextPredCallees_22;
      next_value_of_STATE_VARIABLE_HandledPredIds_0_3 = STATE_VARIABLE_HandledPredIds_2_30;
      next_value_of_STATE_VARIABLE_PredIdCord_0_4 = STATE_VARIABLE_PredIdCord_1_27;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_HandledPredIds_0_3 = next_value_of_STATE_VARIABLE_HandledPredIds_0_3;
      STATE_VARIABLE_PredIdCord_0_4 = next_value_of_STATE_VARIABLE_PredIdCord_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_call_tree__keep_only_new_local_callees_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_NewLocalPredIdCord_0_3,
  MR_Word * STATE_VARIABLE_NewLocalPredIdCord_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_NewLocalPredIdCord_4 = STATE_VARIABLE_NewLocalPredIdCord_0_3;
    else
    {
      MR_Word Callee_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Callees_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(0, Callee_10, 0))));
      MR_Word IsLocal_14 = ((MR_Unsigned) ((MR_hl_field(0, Callee_10, 1))) & (MR_Integer) 1);
      MR_Word STATE_VARIABLE_NewLocalPredIdCord_1_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_NewLocalPredIdCord_0_3;

      switch (IsLocal_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), HeadVar__1_1, ((MR_Box) (PredId_13)));
            if (succeeded)
              STATE_VARIABLE_NewLocalPredIdCord_1_17 = STATE_VARIABLE_NewLocalPredIdCord_0_3;
            else
              mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_13)), STATE_VARIABLE_NewLocalPredIdCord_0_3, &STATE_VARIABLE_NewLocalPredIdCord_1_17);
          }
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_NewLocalPredIdCord_1_17 = STATE_VARIABLE_NewLocalPredIdCord_0_3;
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Callees_11;
      next_value_of_STATE_VARIABLE_NewLocalPredIdCord_0_3 = STATE_VARIABLE_NewLocalPredIdCord_1_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_NewLocalPredIdCord_0_3 = next_value_of_STATE_VARIABLE_NewLocalPredIdCord_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_call_tree__compute_local_call_tree_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Graph_11;

  hlds__hlds_call_tree__add_pred_and_callees_to_digraph_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Graph_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Graph_11));
}

void MR_CALL 
hlds__hlds_call_tree__compute_local_call_tree_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * CallTreeInfo_4)
{
  MR_Word PredIdTable_5;
  MR_Word PredIdsInfos_6;
  MR_Word LocalPredIds_7;
  MR_Word ExportLineMap_8;
  MR_Word ExportLineList_9;
  MR_Word ExportedPredIds_10;
  MR_Word PredCalleesCord_11;
  MR_Word DirectPredCalleeMap_12;
  MR_Word PredCalleesList_13;
  MR_Word Graph_14;
  MR_Word BottomUpSccs_15;
  MR_Word PredOrderMap_16;
  MR_Word IndirectPredCalleesMap_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Box conv1_Graph_14;

  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_3, &PredIdTable_5);
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_5, &PredIdsInfos_6);
  Var_18 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  Var_19 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  hlds__hlds_call_tree__find_local_preds_exports_5_p_0(PredIdsInfos_6, Var_18, &LocalPredIds_7, Var_19, &ExportLineMap_8);
  mercury__one_or_more_map__to_flat_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ExportLineMap_8, &ExportLineList_9);
  mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ExportLineList_9, &ExportedPredIds_10);
  Var_20 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  Var_21 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0));
  Var_22 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0));
  hlds__hlds_call_tree__build_direct_pred_callee_map_8_p_0(PredIdTable_5, LocalPredIds_7, ExportedPredIds_10, Var_20, Var_21, &PredCalleesCord_11, Var_22, &DirectPredCalleeMap_12);
  PredCalleesList_13 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), PredCalleesCord_11);
  Var_24 = mercury__digraph__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[0]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[7]), PredCalleesList_13, ((MR_Box) (Var_24)), &conv1_Graph_14);
  Graph_14 = ((MR_Word) (conv1_Graph_14));
  BottomUpSccs_15 = mercury__digraph__return_sccs_in_to_from_order_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Graph_14);
  Var_26 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  hlds__hlds_call_tree__record_pred_order_4_p_0(PredCalleesList_13, (MR_Integer) 0, Var_26, &PredOrderMap_16);
  Var_27 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0));
  hlds__hlds_call_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_100_105_114_101_99_116_95_109_97_112_95_115_99_99_115_95_95_91_50_93_95_48_5_p_0(DirectPredCalleeMap_12, BottomUpSccs_15, Var_27, &IndirectPredCalleesMap_17);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *CallTreeInfo_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (LocalPredIds_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExportedPredIds_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (PredCalleesList_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (PredOrderMap_16));
    MR_hl_field(0, base, 4) = ((MR_Box) (DirectPredCalleeMap_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (IndirectPredCalleesMap_17));
  }
}

static void MR_CALL 
hlds__hlds_call_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_100_105_114_101_99_116_95_109_97_112_95_115_99_99_115_95_95_91_50_93_95_48_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_IndirectPredCalleeMap_17;

  hlds__hlds_call_tree__complete_and_add_indirect_map_pred_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_IndirectPredCalleeMap_17);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_IndirectPredCalleeMap_17));
}

static void MR_CALL 
hlds__hlds_call_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_100_105_114_101_99_116_95_109_97_112_95_115_99_99_115_95_95_91_50_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_IncompleteSccIndirectCalleeMap_19;

  hlds__hlds_call_tree__build_incomplete_indirect_map_pred_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_IncompleteSccIndirectCalleeMap_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_IncompleteSccIndirectCalleeMap_19));
}

static void MR_CALL 
hlds__hlds_call_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_100_105_114_101_99_116_95_109_97_112_95_115_99_99_115_95_95_91_50_93_95_48_5_p_0(
  MR_Word DirectCalleeMap_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_IndirectCalleeMap_0_4,
  MR_Word * STATE_VARIABLE_IndirectCalleeMap_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_IndirectCalleeMap_5 = STATE_VARIABLE_IndirectCalleeMap_0_4;
    else
    {
      MR_Word SccSet_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word SccSets_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word SccPredIds_16;
      MR_Word IncompleteSccIndirectCalleeMap_18;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word STATE_VARIABLE_IndirectCalleeMap_1_24;
      MR_Box conv1_IncompleteSccIndirectCalleeMap_18;
      MR_Box conv3_STATE_VARIABLE_IndirectCalleeMap_1_24;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_IndirectCalleeMap_0_4;

      SccPredIds_16 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), SccSet_13);
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_21, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_6[0]));
        MR_hl_field(0, Var_21, 1) = ((MR_Box) (hlds__hlds_call_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_100_105_114_101_99_116_95_109_97_112_95_115_99_99_115_95_95_91_50_93_95_48_5_p_0_1));
        MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_21, 3) = ((MR_Box) (DirectCalleeMap_1));
        MR_hl_field(0, Var_21, 4) = ((MR_Box) (SccSet_13));
        MR_hl_field(0, Var_21, 5) = ((MR_Box) (STATE_VARIABLE_IndirectCalleeMap_0_4));
      }
      Var_22 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0));
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[0]), Var_21, SccPredIds_16, ((MR_Box) (Var_22)), &conv1_IncompleteSccIndirectCalleeMap_18);
      IncompleteSccIndirectCalleeMap_18 = ((MR_Word) (conv1_IncompleteSccIndirectCalleeMap_18));
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_23, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_7[0]));
        MR_hl_field(0, Var_23, 1) = ((MR_Box) (hlds__hlds_call_tree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_100_105_114_101_99_116_95_109_97_112_95_115_99_99_115_95_95_91_50_93_95_48_5_p_0_2));
        MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_23, 3) = ((MR_Box) (IncompleteSccIndirectCalleeMap_18));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[0]), Var_23, SccPredIds_16, ((MR_Box) (STATE_VARIABLE_IndirectCalleeMap_0_4)), &conv3_STATE_VARIABLE_IndirectCalleeMap_1_24);
      STATE_VARIABLE_IndirectCalleeMap_1_24 = ((MR_Word) (conv3_STATE_VARIABLE_IndirectCalleeMap_1_24));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = SccSets_14;
      next_value_of_STATE_VARIABLE_IndirectCalleeMap_0_4 = STATE_VARIABLE_IndirectCalleeMap_1_24;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_IndirectCalleeMap_0_4 = next_value_of_STATE_VARIABLE_IndirectCalleeMap_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_call_tree__record_pred_order_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CurNum_2,
  MR_Word STATE_VARIABLE_PredOrderMap_0_3,
  MR_Word * STATE_VARIABLE_PredOrderMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_PredOrderMap_4 = STATE_VARIABLE_PredOrderMap_0_3;
    else
    {
      MR_Word HeadPredCallee_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word TailPredCalles_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word CallerPredId_13 = ((MR_Word) ((MR_hl_field(0, HeadPredCallee_9, 0))));
      MR_Word STATE_VARIABLE_PredOrderMap_1_18;
      MR_Integer Var_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_CurNum_2;
      MR_Word next_value_of_STATE_VARIABLE_PredOrderMap_0_3;

      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (CallerPredId_13)), ((MR_Box) (CurNum_2)), STATE_VARIABLE_PredOrderMap_0_3, &STATE_VARIABLE_PredOrderMap_1_18);
      Var_19 = (MR_Integer) ((MR_Unsigned) CurNum_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TailPredCalles_10;
      next_value_of_CurNum_2 = Var_19;
      next_value_of_STATE_VARIABLE_PredOrderMap_0_3 = STATE_VARIABLE_PredOrderMap_1_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      CurNum_2 = next_value_of_CurNum_2;
      STATE_VARIABLE_PredOrderMap_0_3 = next_value_of_STATE_VARIABLE_PredOrderMap_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__build_direct_pred_callee_map_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv2_PredId_6;

  succeeded = hlds__hlds_call_tree__callee_is_local_has_not_been_handled_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_PredId_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv2_PredId_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree__build_direct_pred_callee_map_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Callee_6;

  hlds__hlds_call_tree__pred_id_to_callee_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Callee_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_Callee_6));
}

static void MR_CALL 
hlds__hlds_call_tree__build_direct_pred_callee_map_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredCalleesCord_0_5,
  MR_Word * STATE_VARIABLE_PredCalleesCord_6,
  MR_Word STATE_VARIABLE_DirectPredCalleeMap_0_7,
  MR_Word * STATE_VARIABLE_DirectPredCalleeMap_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_DirectPredCalleeMap_8 = STATE_VARIABLE_DirectPredCalleeMap_0_7;
      *STATE_VARIABLE_PredCalleesCord_6 = STATE_VARIABLE_PredCalleesCord_0_5;
    }
    else
    {
      MR_Word HeadPredId_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word TailPredIds_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word NextPredIds_38;
      MR_Word STATE_VARIABLE_PredCalleesCord_1_48;
      MR_Word STATE_VARIABLE_DirectPredCalleeMap_1_49;
      MR_Word STATE_VARIABLE_HandledPredIds_2_51;
      MR_Word STATE_VARIABLE_HandledPredIds_1_44;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_PredCalleesCord_0_5;
      MR_Word next_value_of_STATE_VARIABLE_DirectPredCalleeMap_0_7;

      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (HeadPredId_20)), HeadVar__4_4, &STATE_VARIABLE_HandledPredIds_1_44);
      if (succeeded)
      {
        MR_Word PredInfo_25;
        MR_Word ProcTable_26;
        MR_Word ProcIdsInfos_27;
        MR_Box conv0_PredInfo_25;

        STATE_VARIABLE_HandledPredIds_2_51 = STATE_VARIABLE_HandledPredIds_1_44;
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), HeadVar__1_1, ((MR_Box) (HeadPredId_20)), &conv0_PredInfo_25);
        PredInfo_25 = ((MR_Word) (conv0_PredInfo_25));
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_25, &ProcTable_26);
        mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_26, &ProcIdsInfos_27);
        if ((ProcIdsInfos_27 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          NextPredIds_38 = TailPredIds_21;
          STATE_VARIABLE_PredCalleesCord_1_48 = STATE_VARIABLE_PredCalleesCord_0_5;
          STATE_VARIABLE_DirectPredCalleeMap_1_49 = STATE_VARIABLE_DirectPredCalleeMap_0_7;
        }
        else
        {
          MR_Word ProcInfo_29;
          MR_Word Goal_31;
          MR_Word ReferencedPredIdsCord_32;
          MR_Word ReferencedPredIds_33;
          MR_Word Callees0_34;
          MR_Word Callees_35;
          MR_Word PredCallees_36;
          MR_Word NotYethandledLocalPredIds_37;
          MR_Word Var_45 = ((MR_Word) ((MR_hl_field(1, ProcIdsInfos_27, 0))));
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_50;
          MR_Word SeenCalleess0_61;
          MR_Word CalleeCordWithoutDuplicates_62;
          MR_Word Var_63;

          ProcInfo_29 = ((MR_Word) ((MR_hl_field(0, Var_45, 1))));
          hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_29, &Goal_31);
          Var_46 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
          hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0(Goal_31, Var_46, &ReferencedPredIdsCord_32);
          ReferencedPredIds_33 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ReferencedPredIdsCord_32);
          {
            Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_47, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[1]));
            MR_hl_field(0, Var_47, 1) = ((MR_Box) (hlds__hlds_call_tree__build_direct_pred_callee_map_8_p_0_1));
            MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_47, 3) = ((MR_Box) (HeadVar__2_2));
          }
          mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0), Var_47, ReferencedPredIds_33, &Callees0_34);
          SeenCalleess0_61 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0));
          Var_63 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0));
          hlds__hlds_call_tree__keep_only_first_calls_loop_4_p_0(Callees0_34, SeenCalleess0_61, Var_63, &CalleeCordWithoutDuplicates_62);
          Callees_35 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0), CalleeCordWithoutDuplicates_62);
          {
            PredCallees_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PredCallees_36, 0) = ((MR_Box) (HeadPredId_20));
            MR_hl_field(0, PredCallees_36, 1) = ((MR_Box) (PredInfo_25));
            MR_hl_field(0, PredCallees_36, 2) = ((MR_Box) (Callees_35));
          }
          mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), ((MR_Box) (PredCallees_36)), STATE_VARIABLE_PredCalleesCord_0_5, &STATE_VARIABLE_PredCalleesCord_1_48);
          mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), ((MR_Box) (HeadPredId_20)), ((MR_Box) (PredCallees_36)), STATE_VARIABLE_DirectPredCalleeMap_0_7, &STATE_VARIABLE_DirectPredCalleeMap_1_49);
          {
            Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_50, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[2]));
            MR_hl_field(0, Var_50, 1) = ((MR_Box) (hlds__hlds_call_tree__build_direct_pred_callee_map_8_p_0_2));
            MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_50, 3) = ((MR_Box) (STATE_VARIABLE_HandledPredIds_1_44));
          }
          mercury__list__filter_map_3_p_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_50, Callees_35, &NotYethandledLocalPredIds_37);
          NextPredIds_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NotYethandledLocalPredIds_37, TailPredIds_21);
        }
      }
      else
      {
        NextPredIds_38 = TailPredIds_21;
        STATE_VARIABLE_DirectPredCalleeMap_1_49 = STATE_VARIABLE_DirectPredCalleeMap_0_7;
        STATE_VARIABLE_PredCalleesCord_1_48 = STATE_VARIABLE_PredCalleesCord_0_5;
        STATE_VARIABLE_HandledPredIds_2_51 = HeadVar__4_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = NextPredIds_38;
      next_value_of_HeadVar__4_4 = STATE_VARIABLE_HandledPredIds_2_51;
      next_value_of_STATE_VARIABLE_PredCalleesCord_0_5 = STATE_VARIABLE_PredCalleesCord_1_48;
      next_value_of_STATE_VARIABLE_DirectPredCalleeMap_0_7 = STATE_VARIABLE_DirectPredCalleeMap_1_49;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_PredCalleesCord_0_5 = next_value_of_STATE_VARIABLE_PredCalleesCord_0_5;
      STATE_VARIABLE_DirectPredCalleeMap_0_7 = next_value_of_STATE_VARIABLE_DirectPredCalleeMap_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_call_tree__keep_only_first_calls_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SeenCallees_0_2,
  MR_Word STATE_VARIABLE_CalleeCordWithoutDuplicates_0_3,
  MR_Word * STATE_VARIABLE_CalleeCordWithoutDuplicates_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CalleeCordWithoutDuplicates_4 = STATE_VARIABLE_CalleeCordWithoutDuplicates_0_3;
    else
    {
      MR_Word Callee_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Callees_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_CalleeCordWithoutDuplicates_1_17;
      MR_Word STATE_VARIABLE_SeenCallees_2_18;
      MR_Word STATE_VARIABLE_SeenCallees_1_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SeenCallees_0_2;
      MR_Word next_value_of_STATE_VARIABLE_CalleeCordWithoutDuplicates_0_3;

      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0), ((MR_Box) (Callee_9)), STATE_VARIABLE_SeenCallees_0_2, &STATE_VARIABLE_SeenCallees_1_16);
      if (succeeded)
      {
        STATE_VARIABLE_SeenCallees_2_18 = STATE_VARIABLE_SeenCallees_1_16;
        mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0), ((MR_Box) (Callee_9)), STATE_VARIABLE_CalleeCordWithoutDuplicates_0_3, &STATE_VARIABLE_CalleeCordWithoutDuplicates_1_17);
      }
      else
      {
        STATE_VARIABLE_CalleeCordWithoutDuplicates_1_17 = STATE_VARIABLE_CalleeCordWithoutDuplicates_0_3;
        STATE_VARIABLE_SeenCallees_2_18 = STATE_VARIABLE_SeenCallees_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Callees_10;
      next_value_of_STATE_VARIABLE_SeenCallees_0_2 = STATE_VARIABLE_SeenCallees_2_18;
      next_value_of_STATE_VARIABLE_CalleeCordWithoutDuplicates_0_3 = STATE_VARIABLE_CalleeCordWithoutDuplicates_1_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_SeenCallees_0_2 = next_value_of_STATE_VARIABLE_SeenCallees_0_2;
      STATE_VARIABLE_CalleeCordWithoutDuplicates_0_3 = next_value_of_STATE_VARIABLE_CalleeCordWithoutDuplicates_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_CalleeCord_85;

  hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_CalleeCord_85);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_CalleeCord_85));
}

static MR_Box MR_CALL 
hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv6_LambdaHeadVar__2_97;

  conv6_LambdaHeadVar__2_97 = hlds__hlds_call_tree__IntroducedFrom__func__acc_pred_ids_in_goal__465__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_97));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_CalleeCord_85;

  hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_CalleeCord_85);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_CalleeCord_85));
}

static void MR_CALL 
hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_CalleeCord_85;

  hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_CalleeCord_85);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_CalleeCord_85));
}

static void MR_CALL 
hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_CalleeCord_85;

  hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CalleeCord_85);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CalleeCord_85));
}

static void MR_CALL 
hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_CalleeCord_0_84,
  MR_Word * STATE_VARIABLE_CalleeCord_85)
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
          MR_Word SubGoal_115 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word next_value_of_Goal_4 = SubGoal_115;

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
          MR_Word STATE_VARIABLE_CalleeCord_1_86;

          switch (MR_tag((MR_Word) Unification_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word UnifyConsId_14 = ((MR_Word) ((MR_hl_field(0, Unification_11, 1))));
                MR_Word ShroudedPredProcId_143;

                succeeded = ((MR_tag((MR_Word) UnifyConsId_14)) == (MR_Integer) 2);
                if (succeeded)
                {
                  ShroudedPredProcId_143 = (MR_Word) (MR_body((MR_Word) (UnifyConsId_14), (MR_Integer) 2));
                  {
                    MR_Integer PredIdInt_144 = ((MR_Integer) ((MR_hl_field(0, ShroudedPredProcId_143, 0))));
                    MR_Word ShroudedPredId_146 = (MR_Word) (PredIdInt_144);
                    MR_Word PredId_147;

                    PredId_147 = hlds__hlds_pred__unshroud_pred_id_1_f_0(ShroudedPredId_146);
                    mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_147)), STATE_VARIABLE_CalleeCord_0_84, &STATE_VARIABLE_CalleeCord_1_86);
                  }
                }
                else
                  STATE_VARIABLE_CalleeCord_1_86 = STATE_VARIABLE_CalleeCord_0_84;
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_CalleeCord_1_86 = STATE_VARIABLE_CalleeCord_0_84;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_CalleeCord_1_86 = STATE_VARIABLE_CalleeCord_0_84;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unification_11, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_CalleeCord_1_86 = STATE_VARIABLE_CalleeCord_0_84;
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_CalleeCord_1_86 = STATE_VARIABLE_CalleeCord_0_84;
                  break;
              }
              break;
          }
          switch (MR_tag((MR_Word) RHS_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_CalleeCord_85 = STATE_VARIABLE_CalleeCord_1_86;
              break;
            case (MR_Integer) 1:
              {
                MR_Word RHSConsId_34 = ((MR_Word) ((MR_hl_field(1, RHS_9, 0))));

                hlds__hlds_call_tree__acc_pred_ids_in_cons_id_3_p_0(RHSConsId_34, STATE_VARIABLE_CalleeCord_1_86, STATE_VARIABLE_CalleeCord_85);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubGoal_43 = ((MR_Word) ((MR_hl_field(2, RHS_9, 4))));
                MR_Word next_value_of_Goal_4 = SubGoal_43;
                MR_Word next_value_of_STATE_VARIABLE_CalleeCord_0_84 = STATE_VARIABLE_CalleeCord_1_86;

                // direct tailcall eliminated
                ;
                Goal_4 = next_value_of_Goal_4;
                STATE_VARIABLE_CalleeCord_0_84 = next_value_of_STATE_VARIABLE_CalleeCord_0_84;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_44 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, 0))));

          mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_44)), STATE_VARIABLE_CalleeCord_0_84, STATE_VARIABLE_CalleeCord_85);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_CalleeCord_85 = STATE_VARIABLE_CalleeCord_0_84;
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredId_111 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));

              mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_111)), STATE_VARIABLE_CalleeCord_0_84, STATE_VARIABLE_CalleeCord_85);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubGoals_62 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_Box conv1_STATE_VARIABLE_CalleeCord_85;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[4]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[2]), SubGoals_62, ((MR_Box) (STATE_VARIABLE_CalleeCord_0_84)), &conv1_STATE_VARIABLE_CalleeCord_85);
              *STATE_VARIABLE_CalleeCord_85 = ((MR_Word) (conv1_STATE_VARIABLE_CalleeCord_85));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubGoals_112 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
              MR_Box conv3_STATE_VARIABLE_CalleeCord_85;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[4]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[3]), SubGoals_112, ((MR_Box) (STATE_VARIABLE_CalleeCord_0_84)), &conv3_STATE_VARIABLE_CalleeCord_85);
              *STATE_VARIABLE_CalleeCord_85 = ((MR_Word) (conv3_STATE_VARIABLE_CalleeCord_85));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 3))));
              MR_Word SubGoals_114;
              MR_Box conv8_STATE_VARIABLE_CalleeCord_85;

              SubGoals_114 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[5]), Cases_65);
              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[4]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[6]), SubGoals_114, ((MR_Box) (STATE_VARIABLE_CalleeCord_0_84)), &conv8_STATE_VARIABLE_CalleeCord_85);
              *STATE_VARIABLE_CalleeCord_85 = ((MR_Word) (conv8_STATE_VARIABLE_CalleeCord_85));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_116 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_Word next_value_of_Goal_4 = SubGoal_116;

              // direct tailcall eliminated
              ;
              Goal_4 = next_value_of_Goal_4;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_Word Then_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 3))));
              MR_Word Else_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 4))));
              MR_Word STATE_VARIABLE_CalleeCord_11_102;
              MR_Word STATE_VARIABLE_CalleeCord_12_103;
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_CalleeCord_0_84;

              hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0(Cond_69, STATE_VARIABLE_CalleeCord_0_84, &STATE_VARIABLE_CalleeCord_11_102);
              hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0(Then_70, STATE_VARIABLE_CalleeCord_11_102, &STATE_VARIABLE_CalleeCord_12_103);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = Else_71;
              next_value_of_STATE_VARIABLE_CalleeCord_0_84 = STATE_VARIABLE_CalleeCord_12_103;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_CalleeCord_0_84 = next_value_of_STATE_VARIABLE_CalleeCord_0_84;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));

              switch (MR_tag((MR_Word) Shorthand_72)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_call_tree.acc_pred_ids_in_goal\'/3", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_79 = ((MR_Word) ((MR_hl_field(1, Shorthand_72, 4))));
                    MR_Word OrElseGoals_80 = ((MR_Word) ((MR_hl_field(1, Shorthand_72, 5))));
                    MR_Word STATE_VARIABLE_CalleeCord_14_107;
                    MR_Box conv5_STATE_VARIABLE_CalleeCord_85;

                    hlds__hlds_call_tree__acc_pred_ids_in_goal_3_p_0(MainGoal_79, STATE_VARIABLE_CalleeCord_0_84, &STATE_VARIABLE_CalleeCord_14_107);
                    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[4]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[4]), OrElseGoals_80, ((MR_Box) (STATE_VARIABLE_CalleeCord_14_107)), &conv5_STATE_VARIABLE_CalleeCord_85);
                    *STATE_VARIABLE_CalleeCord_85 = ((MR_Word) (conv5_STATE_VARIABLE_CalleeCord_85));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_117 = ((MR_Word) ((MR_hl_field(2, Shorthand_72, 2))));
                    MR_Word next_value_of_Goal_4 = SubGoal_117;

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
hlds__hlds_call_tree__acc_pred_ids_in_cons_id_3_p_0(
  MR_Word ConsId_4,
  MR_Word STATE_VARIABLE_CalleeCord_0_11,
  MR_Word * STATE_VARIABLE_CalleeCord_12)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 2);
  MR_Word ShroudedPredProcId_6;

  if (succeeded)
  {
    ShroudedPredProcId_6 = (MR_Word) (MR_body((MR_Word) (ConsId_4), (MR_Integer) 2));
    {
      MR_Integer PredIdInt_7 = ((MR_Integer) ((MR_hl_field(0, ShroudedPredProcId_6, 0))));
      MR_Word ShroudedPredId_9 = (MR_Word) (PredIdInt_7);
      MR_Word PredId_10;

      PredId_10 = hlds__hlds_pred__unshroud_pred_id_1_f_0(ShroudedPredId_9);
      mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_10)), STATE_VARIABLE_CalleeCord_0_11, STATE_VARIABLE_CalleeCord_12);
    }
  }
  else
    *STATE_VARIABLE_CalleeCord_12 = STATE_VARIABLE_CalleeCord_0_11;
}

static void MR_CALL 
hlds__hlds_call_tree__find_local_preds_exports_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_LocalPredIds_0_2,
  MR_Word * STATE_VARIABLE_LocalPredIds_3,
  MR_Word STATE_VARIABLE_ExportMap_0_4,
  MR_Word * STATE_VARIABLE_ExportMap_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ExportMap_5 = STATE_VARIABLE_ExportMap_0_4;
      *STATE_VARIABLE_LocalPredIds_3 = STATE_VARIABLE_LocalPredIds_0_2;
    }
    else
    {
      MR_Word PredId_12;
      MR_Word PredInfo_13;
      MR_Word PredIdsInfos_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word PredStatus_17;
      MR_Word IsLocal_18;
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word STATE_VARIABLE_LocalPredIds_1_37;
      MR_Word STATE_VARIABLE_ExportMap_1_38;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_LocalPredIds_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ExportMap_0_4;

      PredId_12 = ((MR_Word) ((MR_hl_field(0, Var_36, 0))));
      PredInfo_13 = ((MR_Word) ((MR_hl_field(0, Var_36, 1))));
      hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_13, &PredStatus_17);
      IsLocal_18 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_17);
      switch (IsLocal_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_LocalPredIds_1_37 = STATE_VARIABLE_LocalPredIds_0_2;
            STATE_VARIABLE_ExportMap_1_38 = STATE_VARIABLE_ExportMap_0_4;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Origin_19;

            hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_13, &Origin_19);
            switch (MR_tag((MR_Word) Origin_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word IsExported_29;

                  mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_12)), STATE_VARIABLE_LocalPredIds_0_2, &STATE_VARIABLE_LocalPredIds_1_37);
                  IsExported_29 = hlds__status__pred_status_is_exported_to_non_submodules_1_f_0(PredStatus_17);
                  switch (IsExported_29) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      STATE_VARIABLE_ExportMap_1_38 = STATE_VARIABLE_ExportMap_0_4;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Context_30;
                        MR_Integer LineNumber_31;

                        hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_13, &Context_30);
                        LineNumber_31 = mercury__term_context__context_line_1_f_0(Context_30);
                        mercury__one_or_more_map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (LineNumber_31)), ((MR_Box) (PredId_12)), STATE_VARIABLE_ExportMap_0_4, &STATE_VARIABLE_ExportMap_1_38);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  STATE_VARIABLE_LocalPredIds_1_37 = STATE_VARIABLE_LocalPredIds_0_2;
                  STATE_VARIABLE_ExportMap_1_38 = STATE_VARIABLE_ExportMap_0_4;
                }
                break;
              case (MR_Integer) 2:
                {
                  STATE_VARIABLE_LocalPredIds_1_37 = STATE_VARIABLE_LocalPredIds_0_2;
                  STATE_VARIABLE_ExportMap_1_38 = STATE_VARIABLE_ExportMap_0_4;
                }
                break;
              case (MR_Integer) 3:
                {
                  STATE_VARIABLE_LocalPredIds_1_37 = STATE_VARIABLE_LocalPredIds_0_2;
                  STATE_VARIABLE_ExportMap_1_38 = STATE_VARIABLE_ExportMap_0_4;
                }
                break;
            }
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredIdsInfos_14;
      next_value_of_STATE_VARIABLE_LocalPredIds_0_2 = STATE_VARIABLE_LocalPredIds_1_37;
      next_value_of_STATE_VARIABLE_ExportMap_0_4 = STATE_VARIABLE_ExportMap_1_38;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_LocalPredIds_0_2 = next_value_of_STATE_VARIABLE_LocalPredIds_0_2;
      STATE_VARIABLE_ExportMap_0_4 = next_value_of_STATE_VARIABLE_ExportMap_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____call_tree_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_call_tree____Unify____call_tree_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree____Compare____call_tree_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_call_tree____Compare____call_tree_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____callee_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_call_tree____Unify____callee_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree____Compare____callee_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_call_tree____Compare____callee_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____line_number_and_desc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_call_tree____Unify____line_number_and_desc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree____Compare____line_number_and_desc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_call_tree____Compare____line_number_and_desc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____maybe_local_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_call_tree____Unify____maybe_local_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree____Compare____maybe_local_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_call_tree____Compare____maybe_local_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____movability_report_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_call_tree____Unify____movability_report_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree____Compare____movability_report_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_call_tree____Compare____movability_report_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____num_digits_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_call_tree____Unify____num_digits_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree____Compare____num_digits_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_call_tree____Compare____num_digits_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____pred_callees_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_call_tree____Unify____pred_callees_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree____Compare____pred_callees_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_call_tree____Compare____pred_callees_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____pred_callees_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_call_tree____Unify____pred_callees_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree____Compare____pred_callees_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_call_tree____Compare____pred_callees_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__hlds_call_tree__init(void)
{
}

void mercury__hlds__hlds_call_tree__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_call_tree_info_0);
  MR_register_type_ctor_info(&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_callee_0);
  MR_register_type_ctor_info(&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_line_number_and_desc_0);
  MR_register_type_ctor_info(&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_maybe_local_0);
  MR_register_type_ctor_info(&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_movability_report_0);
  MR_register_type_ctor_info(&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_num_digits_0);
  MR_register_type_ctor_info(&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0);
  MR_register_type_ctor_info(&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_map_0);
}

void mercury__hlds__hlds_call_tree__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_call_tree__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_call_tree.
