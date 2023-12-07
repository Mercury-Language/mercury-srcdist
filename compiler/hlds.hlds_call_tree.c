/*
** Automatically generated from `hlds_call_tree.m'
** by the Mercury compiler,
** version rotd-2023-12-07
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
#include "libs.indent.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.var_table.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__cord__pti_cord_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_call_tree__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_call_tree__type_ctor_info_pred_callees_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_name_arity_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_call_tree__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_call_tree__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_call_tree__list__ti_list_1hlds__hlds_call_tree__type_ctor_info_pred_callees_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_call_tree__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_call_tree__type_ctor_info_pred_callees_0;

static const MR_PseudoTypeInfo hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_call_tree_info_0_0[4];

static const MR_ConstString hlds__hlds_call_tree__hlds__hlds_call_tree__field_names_call_tree_info_0_0[4];

static const MR_DuFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_call_tree_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_stag_ordered_call_tree_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_call_tree__hlds__hlds_call_tree__du_ptag_ordered_call_tree_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_name_ordered_call_tree_info_0[1];

static const MR_Integer hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_call_tree_info_0[1];

static const MR_PseudoTypeInfo hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_line_number_and_desc_0_0[2];

static const MR_DuFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_line_number_and_desc_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_stag_ordered_line_number_and_desc_0_0[1];

static const MR_DuPtagLayout hlds__hlds_call_tree__hlds__hlds_call_tree__du_ptag_ordered_line_number_and_desc_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_name_ordered_line_number_and_desc_0[1];

static const MR_Integer hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_line_number_and_desc_0[1];

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

static const MR_PseudoTypeInfo hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_pred_callees_0_0[3];

static const MR_DuFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_pred_callees_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_stag_ordered_pred_callees_0_0[1];

static const MR_DuPtagLayout hlds__hlds_call_tree__hlds__hlds_call_tree__du_ptag_ordered_pred_callees_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_call_tree__hlds__hlds_call_tree__du_name_ordered_pred_callees_0[1];

static const MR_Integer hlds__hlds_call_tree__hlds__hlds_call_tree__functor_number_map_pred_callees_0[1];

static MR_Word MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__func__line_list_to_line_pieces__1014__1_1_f_0(
  MR_String LambdaHeadVar__1_11);

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__find_staying_pred_ids__697__1_2_p_0(
  MR_Word STATE_VARIABLE_StayingPredIdSet_25_25,
  MR_Word HeadVar__2_32);

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__find_moving_pred_ids__666__1_2_p_0(
  MR_Word STATE_VARIABLE_ReachablePredIdSet_25_25,
  MR_Word HeadVar__2_32);

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__construct_depth_first_left_right_order__435__1_3_p_0(
  MR_Word PredCalleeMap_1,
  MR_Word HeadVar__2_35,
  MR_Word * HeadVar__3_36);

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__construct_depth_first_left_right_order__431__1_2_p_0(
  MR_Word STATE_VARIABLE_HandledPredIds_26_26,
  MR_Word HeadVar__2_33);

static MR_Word MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__func__acc_goal_callees__353__1_1_f_0(
  MR_Word LambdaHeadVar__1_97);

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__gather_pred_callees__268__1_2_p_0(
  MR_Word STATE_VARIABLE_HandledPredIds_43_43,
  MR_Word HeadVar__2_58);

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__gather_pred_callees__255__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__2_55);

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
hlds__hlds_call_tree____Compare____line_number_and_desc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_call_tree____Unify____line_number_and_desc_0_0(
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
  MR_Word STATE_VARIABLE_TypeCtorNameArities_0_26,
  MR_Word * STATE_VARIABLE_TypeCtorNameArities_27);

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
hlds__hlds_call_tree__write_pred_order_entry_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word PredId_8);

static void MR_CALL 
hlds__hlds_call_tree__lookup_and_write_callee_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word PredId_8);

static void MR_CALL 
hlds__hlds_call_tree__write_pred_callees_entry_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__write_pred_callees_entry_7_p_0(
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word PredCallees_10,
  MR_Word STATE_VARIABLE_IsFirst_0_17,
  MR_Word * STATE_VARIABLE_IsFirst_18);

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
hlds__hlds_call_tree__find_staying_pred_ids_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_call_tree__find_staying_pred_ids_5_p_0(
  MR_Word PredCalleeMap_1,
  MR_Word WantToMovePredIdSet_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_StayingPredIdSet_0_4,
  MR_Word * STATE_VARIABLE_StayingPredIdSet_5);

static MR_bool MR_CALL 
hlds__hlds_call_tree__find_moving_pred_ids_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_call_tree__find_moving_pred_ids_5_p_0(
  MR_Word PredCalleeMap_1,
  MR_Word NonMovingExportPredIdSet_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ReachablePredIdSet_0_4,
  MR_Word * STATE_VARIABLE_ReachablePredIdSet_5);

static void MR_CALL 
hlds__hlds_call_tree__write_local_call_tree_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__write_local_call_tree_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0(
  MR_Word PredCalleeMap_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_HandledPredIds_0_3,
  MR_Word STATE_VARIABLE_PredIdCord_0_4,
  MR_Word * STATE_VARIABLE_PredIdCord_5);

static MR_bool MR_CALL 
hlds__hlds_call_tree__gather_pred_callees_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__hlds_call_tree__gather_pred_callees_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_call_tree__gather_pred_callees_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredCalleesCord_0_5,
  MR_Word * STATE_VARIABLE_PredCalleesCord_6,
  MR_Word STATE_VARIABLE_PredCalleeMap_0_7,
  MR_Word * STATE_VARIABLE_PredCalleeMap_8);

static void MR_CALL 
hlds__hlds_call_tree__keep_only_first_calls_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SeenPredIds_0_2,
  MR_Word STATE_VARIABLE_CordWithoutDuplicates_0_3,
  MR_Word * STATE_VARIABLE_CordWithoutDuplicates_4);

static void MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_CalleeCord_0_85,
  MR_Word * STATE_VARIABLE_CalleeCord_86);

static void MR_CALL 
hlds__hlds_call_tree__acc_cons_id_callees_3_p_0(
  MR_Word ConsId_4,
  MR_Word STATE_VARIABLE_CalleeCord_0_12,
  MR_Word * STATE_VARIABLE_CalleeCord_13);

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
hlds__hlds_call_tree____Unify____line_number_and_desc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_call_tree____Compare____line_number_and_desc_0_0_10001(
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


static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_1[68][2];

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_2[11][3];

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_3[1][1];

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_4[5][6];

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_5[4][5];

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_6[1][10];

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_7[1][8];

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_8[5][7];

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_9[1][11];




static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_1[68][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error in the arguments"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of the --show-movability option: the"))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "don\'t name any predicate or function."))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Report for the proposed move of"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[14])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to a new module:"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "would be"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which should therefore be moved to the new module,"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the proposed-to-be-moved predicates and/or functions,"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The set of predicates, functions and/or types reachable from"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[23])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to get access to"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "would require the new module to import the current module"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[27])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Moving these predicates and/or functions to a new module"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[29])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the new module."))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[15])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "All of the moved types can be private"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "from the new module:"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and would therefore need to be exported"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "that is staying in the current module,"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[39])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The following moved types are used by code"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[41])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "current module to import the new module in its interface"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[27])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Moving these types to a new module would require"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[45])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Neither option is usually a good idea."))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to be accessible from the other module."))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[49])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "need to be exported from the module they end up in"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[51])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "one of the two modules, old and new, they would"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[53])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "need to be either duplicated, or, if included in only"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[55])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "code that is staying, which means that they would"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[57])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are reachable both from code being moved and"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[59])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "However, the following local predicates and/or functions"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[61])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[14])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[14])))
  },
};

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_2[11][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_call_tree__acc_goal_callees_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_call_tree__acc_goal_callees_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_call_tree__acc_goal_callees_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[0])),
    ((MR_Box) (hlds__hlds_call_tree__acc_goal_callees_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_call_tree__acc_goal_callees_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[2])),
    ((MR_Box) (hlds__hlds_call_tree__pred_name_set_to_line_pieces_2_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[3])),
    ((MR_Box) (hlds__hlds_call_tree__type_name_set_to_line_pieces_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[2])),
    ((MR_Box) (hlds__hlds_call_tree__type_name_set_to_line_pieces_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[2])),
    ((MR_Box) (hlds__hlds_call_tree__construct_movability_report_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[2])),
    ((MR_Box) (hlds__hlds_call_tree__construct_movability_report_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_4[5][6] = {
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
    ((MR_Box) (&hlds__hlds_call_tree__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_call_tree__type_ctor_info_pred_callees_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_line_number_and_desc_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_line_number_and_desc_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_num_digits_0)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_line_number_and_desc_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_5[4][5] = {
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
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_call_tree__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_6[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_7[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_8[5][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_desc__hlds__hlds_desc__type_ctor_info_include_module_name_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_name_arity_0)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_name_arity_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_name_arity_0)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_name_arity_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_name_arity_0)),
    ((MR_Box) (&hlds__hlds_call_tree__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_name_arity_0))
  },
  /* row   4 */
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

static /* final */ const MR_Box hlds__hlds_call_tree_scalar_common_9[1][11] = {
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

static const MR_FA_TypeInfo_Struct2 hlds__hlds_call_tree__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_call_tree__type_ctor_info_pred_callees_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_call_tree_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__set_tree234__ti_set_tree234_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__list__ti_list_1hlds__hlds_call_tree__type_ctor_info_pred_callees_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_call_tree__type_ctor_info_pred_callees_0)
};

static const MR_ConstString hlds__hlds_call_tree__hlds__hlds_call_tree__field_names_call_tree_info_0_0[4] = {
  (MR_String) "cti_local_pred_set",
  (MR_String) "cti_exported_preds",
  (MR_String) "cti_pred_callee_list",
  (MR_String) "cti_pred_callee_map"
};

static const MR_DuFunctorDesc hlds__hlds_call_tree__hlds__hlds_call_tree__du_functor_desc_call_tree_info_0_0 = {
  (MR_String) "call_tree_info",
  INT16_C(4),
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

static const MR_PseudoTypeInfo hlds__hlds_call_tree__hlds__hlds_call_tree__field_types_pred_callees_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_call_tree__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)
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
hlds__hlds_call_tree__IntroducedFrom__func__line_list_to_line_pieces__1014__1_1_f_0(
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
    MR_hl_field(1, LambdaHeadVar__2_12, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[9])));
  }
  return LambdaHeadVar__2_12;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__find_staying_pred_ids__697__1_2_p_0(
  MR_Word STATE_VARIABLE_StayingPredIdSet_25_25,
  MR_Word HeadVar__2_32)
{
  MR_bool succeeded;

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), STATE_VARIABLE_StayingPredIdSet_25_25, ((MR_Box) (HeadVar__2_32)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__find_moving_pred_ids__666__1_2_p_0(
  MR_Word STATE_VARIABLE_ReachablePredIdSet_25_25,
  MR_Word HeadVar__2_32)
{
  MR_bool succeeded;

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), STATE_VARIABLE_ReachablePredIdSet_25_25, ((MR_Box) (HeadVar__2_32)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__construct_depth_first_left_right_order__435__1_3_p_0(
  MR_Word PredCalleeMap_1,
  MR_Word HeadVar__2_35,
  MR_Word * HeadVar__3_36)
{
  MR_bool succeeded;
  MR_Box conv0_HeadVar__3_36;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), PredCalleeMap_1, ((MR_Box) (HeadVar__2_35)), &conv0_HeadVar__3_36);
  if (succeeded)
  {
    *HeadVar__3_36 = ((MR_Word) (conv0_HeadVar__3_36));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__construct_depth_first_left_right_order__431__1_2_p_0(
  MR_Word STATE_VARIABLE_HandledPredIds_26_26,
  MR_Word HeadVar__2_33)
{
  MR_bool succeeded;

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), STATE_VARIABLE_HandledPredIds_26_26, ((MR_Box) (HeadVar__2_33)));
  return succeeded;
}

static MR_Word MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__func__acc_goal_callees__353__1_1_f_0(
  MR_Word LambdaHeadVar__1_97)
{
  MR_Word LambdaHeadVar__2_98 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_97, (MR_Integer) 2))));

  return LambdaHeadVar__2_98;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__gather_pred_callees__268__1_2_p_0(
  MR_Word STATE_VARIABLE_HandledPredIds_43_43,
  MR_Word HeadVar__2_58)
{
  MR_bool succeeded;

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), STATE_VARIABLE_HandledPredIds_43_43, ((MR_Box) (HeadVar__2_58)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__IntroducedFrom__pred__gather_pred_callees__255__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__2_55)
{
  MR_bool succeeded;

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), HeadVar__2_2, ((MR_Box) (HeadVar__2_55)));
  return succeeded;
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[5]);
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
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[0]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[0]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[2]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[2]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_20_20 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_21_21 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_22_22 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_23_23 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_24_24 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_25_25 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[2]);
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
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
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
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
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[6]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
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
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
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
  MR_String Name_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Arity_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_String Var_12;
  MR_String Var_20;

  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_3[0]), Arity_4, &Var_12);
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
  MR_Integer LineNumber_7 = ((MR_Integer) ((MR_hl_field(0, LineNumberDesc_5, (MR_Integer) 0))));
  MR_String Desc_8 = ((MR_String) ((MR_hl_field(0, LineNumberDesc_5, (MR_Integer) 1))));

  switch (NumDigits_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Var_70;
        MR_String Var_71;
        MR_String Var_79;

        Var_70 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Desc_8);
        mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_3[0]), (MR_Integer) 3, LineNumber_7, &Var_71);
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
        mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_3[0]), (MR_Integer) 4, LineNumber_7, &Var_59);
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
        mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_3[0]), (MR_Integer) 5, LineNumber_7, &Var_47);
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
        mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_3[0]), (MR_Integer) 6, LineNumber_7, &Var_35);
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
  Name_9 = ((MR_String) ((MR_hl_field(0, NameArity_5, (MR_Integer) 0))));
  Arity_10 = ((MR_Integer) ((MR_hl_field(0, NameArity_5, (MR_Integer) 1))));
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
  LineNumber_15 = ((MR_Integer) ((MR_hl_field(0, Context_13, (MR_Integer) 1))));
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_call_tree_scalar_common_3[0]), Arity_10, &Var_24);
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
  LineNumber_10 = ((MR_Integer) ((MR_hl_field(0, Context_8, (MR_Integer) 1))));
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
  MR_Word Type_9 = ((MR_Word) ((MR_hl_field(0, VarTableEntry_6, (MR_Integer) 1))));

  hlds__hlds_call_tree__acc_local_type_ctors_in_type_4_p_0(ModuleName_5, Type_9, STATE_VARIABLE_TypeCtorNameArities_0_11, STATE_VARIABLE_TypeCtorNameArities_12);
}

static void MR_CALL 
hlds__hlds_call_tree__acc_local_type_ctors_in_type_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_TypeCtorNameArities_0_26,
  MR_Word * STATE_VARIABLE_TypeCtorNameArities_27)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_TypeCtorNameArities_27 = STATE_VARIABLE_TypeCtorNameArities_0_26;
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(1, Type_6, (MR_Integer) 0))));
          MR_Word ArgTypes_12 = ((MR_Word) ((MR_hl_field(1, Type_6, (MR_Integer) 1))));
          MR_Word STATE_VARIABLE_TypeCtorNameArities_28_28;
          MR_String Name_14;
          MR_Word Var_35;

          succeeded = ((MR_tag((MR_Word) SymName_11)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_35 = ((MR_Word) ((MR_hl_field(1, SymName_11, (MR_Integer) 0))));
            Name_14 = ((MR_String) ((MR_hl_field(1, SymName_11, (MR_Integer) 1))));
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_5, Var_35);
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
            mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), ((MR_Box) (NameArity_16)), STATE_VARIABLE_TypeCtorNameArities_0_26, &STATE_VARIABLE_TypeCtorNameArities_28_28);
          }
          else
            STATE_VARIABLE_TypeCtorNameArities_28_28 = STATE_VARIABLE_TypeCtorNameArities_0_26;
          hlds__hlds_call_tree__acc_local_type_ctors_in_types_4_p_0(ModuleName_5, ArgTypes_12, STATE_VARIABLE_TypeCtorNameArities_28_28, STATE_VARIABLE_TypeCtorNameArities_27);
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_TypeCtorNameArities_27 = STATE_VARIABLE_TypeCtorNameArities_0_26;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_37 = ((MR_Word) ((MR_hl_field(3, Type_6, (MR_Integer) 1))));

              hlds__hlds_call_tree__acc_local_type_ctors_in_types_4_p_0(ModuleName_5, ArgTypes_37, STATE_VARIABLE_TypeCtorNameArities_0_26, STATE_VARIABLE_TypeCtorNameArities_27);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgTypes_36 = ((MR_Word) ((MR_hl_field(3, Type_6, (MR_Integer) 2))));

              hlds__hlds_call_tree__acc_local_type_ctors_in_types_4_p_0(ModuleName_5, ArgTypes_36, STATE_VARIABLE_TypeCtorNameArities_0_26, STATE_VARIABLE_TypeCtorNameArities_27);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgTypes_32 = ((MR_Word) ((MR_hl_field(3, Type_6, (MR_Integer) 2))));

              hlds__hlds_call_tree__acc_local_type_ctors_in_types_4_p_0(ModuleName_5, ArgTypes_32, STATE_VARIABLE_TypeCtorNameArities_0_26, STATE_VARIABLE_TypeCtorNameArities_27);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubType_24 = ((MR_Word) ((MR_hl_field(3, Type_6, (MR_Integer) 1))));
              MR_Word next_value_of_Type_6 = SubType_24;

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
      MR_Word Type_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Types_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_TypeCtorNameArities_15_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_TypeCtorNameArities_0_3;

      hlds__hlds_call_tree__acc_local_type_ctors_in_type_4_p_0(ModuleName_1, Type_10, STATE_VARIABLE_TypeCtorNameArities_0_3, &STATE_VARIABLE_TypeCtorNameArities_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Types_11;
      next_value_of_STATE_VARIABLE_TypeCtorNameArities_0_3 = STATE_VARIABLE_TypeCtorNameArities_15_15;
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

  hlds__hlds_call_tree__acc_local_type_ctors_in_var_table_entry_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeCtorNameArities_12);
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
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_8[4]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (hlds__hlds_call_tree__acc_local_type_ctors_in_proc_4_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (ModuleName_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[2]), Var_12, VarTableEntries_9, ((MR_Box) (STATE_VARIABLE_TypeCtorNameArities_0_10)), &conv1_STATE_VARIABLE_TypeCtorNameArities_11);
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

  hlds__hlds_call_tree__acc_local_type_ctors_in_proc_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeCtorNameArities_11);
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
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_8[3]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (hlds__hlds_call_tree__acc_local_type_ctors_in_pred_4_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (ModuleName_8));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[2]), Var_14, ProcInfos_11, ((MR_Box) (STATE_VARIABLE_TypeCtorNameArities_0_12)), &conv1_STATE_VARIABLE_TypeCtorNameArities_13);
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
  MR_Word conv0_STATE_VARIABLE_TypeCtorNameArities_27;

  hlds__hlds_call_tree__acc_local_type_ctors_in_type_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_TypeCtorNameArities_27);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_TypeCtorNameArities_27));
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
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_8[2]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (hlds__hlds_call_tree__acc_local_type_ctors_in_pred_arg_list_4_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (ModuleName_8));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[2]), Var_13, ArgTypes_10, ((MR_Box) (STATE_VARIABLE_TypeCtorNameArities_0_11)), &conv1_STATE_VARIABLE_TypeCtorNameArities_12);
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
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, PredIds_17, (MR_Integer) 1))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, PredIds_17, (MR_Integer) 0))));

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
hlds__hlds_call_tree__write_pred_order_entry_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word PredId_8)
{
  MR_String PredDesc_10;

  PredDesc_10 = hlds__hlds_desc__describe_pred_from_id_3_f_0((MR_Integer) 0, ModuleInfo_7, PredId_8);
  mercury__io__write_string_4_p_0(Stream_6, PredDesc_10);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
}

static void MR_CALL 
hlds__hlds_call_tree__lookup_and_write_callee_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word PredId_8)
{
  MR_Word PredInfo_10;
  MR_String PredDesc_11;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_8, &PredInfo_10);
  PredDesc_11 = hlds__hlds_desc__describe_pred_2_f_0((MR_Integer) 0, PredInfo_10);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "    ");
  mercury__io__write_string_4_p_0(Stream_6, PredDesc_11);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
}

static void MR_CALL 
hlds__hlds_call_tree__write_pred_callees_entry_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_call_tree__lookup_and_write_callee_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
hlds__hlds_call_tree__write_pred_callees_entry_7_p_0(
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word PredCallees_10,
  MR_Word STATE_VARIABLE_IsFirst_0_17,
  MR_Word * STATE_VARIABLE_IsFirst_18)
{
  MR_Word PredInfo_14 = ((MR_Word) ((MR_hl_field(0, PredCallees_10, (MR_Integer) 1))));
  MR_Word Callees_15 = ((MR_Word) ((MR_hl_field(0, PredCallees_10, (MR_Integer) 2))));
  MR_String PredDesc_16;
  MR_Word Var_29;
  MR_Box conv0_STATE_VARIABLE_IO_20;

  PredDesc_16 = hlds__hlds_desc__describe_pred_2_f_0((MR_Integer) 0, PredInfo_14);
  switch (STATE_VARIABLE_IsFirst_0_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__io__nl_3_p_0(Stream_8);
        *STATE_VARIABLE_IsFirst_18 = STATE_VARIABLE_IsFirst_0_17;
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_IsFirst_18 = (MR_Integer) 0;
      break;
  }
  mercury__io__write_string_4_p_0(Stream_8, PredDesc_16);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_7[0]));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (hlds__hlds_call_tree__write_pred_callees_entry_7_p_0_1));
    MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_29, 3) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_29, 4) = ((MR_Box) (ModuleInfo_9));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_29, Callees_15, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_20);
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

  hlds__hlds_call_tree__acc_local_type_ctors_in_pred_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_TypeCtorNameArities_13);
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

  hlds__hlds_call_tree__acc_local_type_ctors_in_pred_arg_list_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_TypeCtorNameArities_12);
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

  hlds__hlds_call_tree__acc_moving_pred_name_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_MovingPredIdSet_23, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_UnknownNameSet_25, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_AmbigNameSet_27);
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
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Box conv5_WantToMovePredIdSet_9;
  MR_Box conv4_UnknownNameSet_10;
  MR_Box conv3_AmbigNameSet_11;

  {
    Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_41, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_9[0]));
    MR_hl_field(0, Var_41, 1) = ((MR_Box) (hlds__hlds_call_tree__generate_movability_report_4_p_0_1));
    MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_41, 3) = ((MR_Box) (ModuleInfo_5));
  }
  Var_42 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  Var_43 = mercury__set_tree234__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  Var_44 = mercury__set_tree234__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  mercury__list__foldl3_8_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[0]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[1]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[1]), Var_41, WantToMovePredNames_7, ((MR_Box) (Var_42)), &conv5_WantToMovePredIdSet_9, ((MR_Box) (Var_43)), &conv4_UnknownNameSet_10, ((MR_Box) (Var_44)), &conv3_AmbigNameSet_11);
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
    MR_Word Var_45;
    MR_Word Var_48;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_String Var_53;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_String Var_61;
    MR_Box conv6_Var_53;
    MR_Box conv7_Var_61;

    conv6_Var_53 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnknownNames_12, ((MR_Box) ((MR_String) "name")), ((MR_Box) ((MR_String) "names")));
    Var_53 = ((MR_String) (conv6_Var_53));
    {
      Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_52, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[8])));
      MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[7])));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
    }
    Var_58 = parse_tree__error_spec__list_to_pieces_1_f_0(UnknownNames_12);
    conv7_Var_61 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnknownNames_12, ((MR_Box) ((MR_String) "does not")), ((MR_Box) ((MR_String) "do not")));
    Var_61 = ((MR_String) (conv7_Var_61));
    {
      Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_60, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[11])));
    }
    Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, Var_59);
    UnknownPieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, Var_57);
    {
      UnknownSpec_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, UnknownSpec_18, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.hlds_call_tree.generate_movability_report\'/4"));
      MR_hl_field(2, UnknownSpec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, UnknownSpec_18, 2) = ((MR_Box) ((MR_Unsigned) 84U));
      MR_hl_field(2, UnknownSpec_18, 3) = ((MR_Box) (UnknownPieces_17));
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
    MR_Word Var_74;
    MR_Word Var_77;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_String Var_82;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_String Var_90;
    MR_Box conv8_Var_82;
    MR_Box conv9_Var_90;

    conv8_Var_82 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AmbigNames_13, ((MR_Box) ((MR_String) "name")), ((MR_Box) ((MR_String) "names")));
    Var_82 = ((MR_String) (conv8_Var_82));
    {
      Var_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_81, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_81, 1) = ((MR_Box) (Var_82));
    }
    {
      Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
      MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_77, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[8])));
      MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_80));
    }
    {
      Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_74, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_call_tree_scalar_common_1[7])));
      MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_77));
    }
    Var_87 = parse_tree__error_spec__list_to_pieces_1_f_0(AmbigNames_13);
    conv9_Var_90 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AmbigNames_13, ((MR_Box) ((MR_String) "is ambiguous.")), ((MR_Box) ((MR_String) "are ambiguous.")));
    Var_90 = ((MR_String) (conv9_Var_90));
    {
      Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_89, 1) = ((MR_Box) (Var_90));
    }
    {
      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
      MR_hl_field(1, Var_88, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[9])));
    }
    Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_87, Var_88);
    AmbigPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_74, Var_86);
    {
      AmbigSpec_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, AmbigSpec_23, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.hlds_call_tree.generate_movability_report\'/4"));
      MR_hl_field(2, AmbigSpec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, AmbigSpec_23, 2) = ((MR_Box) ((MR_Unsigned) 84U));
      MR_hl_field(2, AmbigSpec_23, 3) = ((MR_Box) (AmbigPieces_22));
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
    MR_Word ExportPredIds_25 = ((MR_Word) ((MR_hl_field(0, CallTreeInfo_6, (MR_Integer) 1))));
    MR_Word PredCalleeMap_27 = ((MR_Word) ((MR_hl_field(0, CallTreeInfo_6, (MR_Integer) 3))));
    MR_Word ExportPredIdSet_28;
    MR_Word NonMovingExportPredIdSet_29;
    MR_Word WantToMovePredIds_30;
    MR_Word MovingPredIdSet_31;
    MR_Word ConflictExportedPredIdSet_32;
    MR_Word NonMovingExportPredIds_33;
    MR_Word StayingPredIdSet_34;
    MR_Word MovingStayingPredIdSet_35;
    MR_Word InInterfaceTypeCtorSet_36;
    MR_Word StayingPredTypeCtorSet_37;
    MR_Word MovingPredTypeCtorSet_38;
    MR_Word Report_39;
    MR_Word InfoSpec_40;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_107;
    MR_Box conv11_InInterfaceTypeCtorSet_36;
    MR_Box conv13_StayingPredTypeCtorSet_37;
    MR_Box conv14_MovingPredTypeCtorSet_38;

    mercury__set_tree234__list_to_set_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ExportPredIds_25, &ExportPredIdSet_28);
    mercury__set_tree234__difference_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ExportPredIdSet_28, WantToMovePredIdSet_9, &NonMovingExportPredIdSet_29);
    mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), WantToMovePredIdSet_9, &WantToMovePredIds_30);
    Var_100 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
    hlds__hlds_call_tree__find_moving_pred_ids_5_p_0(PredCalleeMap_27, NonMovingExportPredIdSet_29, WantToMovePredIds_30, Var_100, &MovingPredIdSet_31);
    mercury__set_tree234__intersect_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NonMovingExportPredIdSet_29, MovingPredIdSet_31, &ConflictExportedPredIdSet_32);
    mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NonMovingExportPredIdSet_29, &NonMovingExportPredIds_33);
    Var_101 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
    hlds__hlds_call_tree__find_staying_pred_ids_5_p_0(PredCalleeMap_27, WantToMovePredIdSet_9, NonMovingExportPredIds_33, Var_101, &StayingPredIdSet_34);
    mercury__set_tree234__intersect_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), MovingPredIdSet_31, StayingPredIdSet_34, &MovingStayingPredIdSet_35);
    {
      Var_102 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_102, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_8[1]));
      MR_hl_field(0, Var_102, 1) = ((MR_Box) (hlds__hlds_call_tree__generate_movability_report_4_p_0_2));
      MR_hl_field(0, Var_102, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_102, 3) = ((MR_Box) (ModuleInfo_5));
    }
    Var_103 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0));
    mercury__set_tree234__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[2]), Var_102, ExportPredIdSet_28, ((MR_Box) (Var_103)), &conv11_InInterfaceTypeCtorSet_36);
    InInterfaceTypeCtorSet_36 = ((MR_Word) (conv11_InInterfaceTypeCtorSet_36));
    {
      Var_104 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_104, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_8[1]));
      MR_hl_field(0, Var_104, 1) = ((MR_Box) (hlds__hlds_call_tree__generate_movability_report_4_p_0_3));
      MR_hl_field(0, Var_104, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_104, 3) = ((MR_Box) (ModuleInfo_5));
    }
    Var_105 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0));
    mercury__set_tree234__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[2]), Var_104, StayingPredIdSet_34, ((MR_Box) (Var_105)), &conv13_StayingPredTypeCtorSet_37);
    StayingPredTypeCtorSet_37 = ((MR_Word) (conv13_StayingPredTypeCtorSet_37));
    Var_107 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0));
    mercury__set_tree234__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[2]), Var_104, MovingPredIdSet_31, ((MR_Box) (Var_107)), &conv14_MovingPredTypeCtorSet_38);
    MovingPredTypeCtorSet_38 = ((MR_Word) (conv14_MovingPredTypeCtorSet_38));
    {
      Report_39 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Report_39, 0) = ((MR_Box) (WantToMovePredIdSet_9));
      MR_hl_field(0, Report_39, 1) = ((MR_Box) (ConflictExportedPredIdSet_32));
      MR_hl_field(0, Report_39, 2) = ((MR_Box) (MovingPredIdSet_31));
      MR_hl_field(0, Report_39, 3) = ((MR_Box) (MovingStayingPredIdSet_35));
      MR_hl_field(0, Report_39, 4) = ((MR_Box) (InInterfaceTypeCtorSet_36));
      MR_hl_field(0, Report_39, 5) = ((MR_Box) (MovingPredTypeCtorSet_38));
      MR_hl_field(0, Report_39, 6) = ((MR_Box) (StayingPredTypeCtorSet_37));
    }
    hlds__hlds_call_tree__construct_movability_report_3_p_0(ModuleInfo_5, Report_39, &InfoSpec_40);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (InfoSpec_40));
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

  conv8_LambdaHeadVar__2_12 = hlds__hlds_call_tree__IntroducedFrom__func__line_list_to_line_pieces__1014__1_1_f_0(((MR_String) (wrapper_arg_1)));
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

  hlds__hlds_call_tree__line_number_and_desc_to_string_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv6_LineNumberDescStr_6);
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

  conv4_LineNumberDesc_6 = hlds__hlds_call_tree__make_line_number_and_desc_for_type_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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

  conv3_LineNumberDesc_6 = hlds__hlds_call_tree__make_line_number_and_desc_for_pred_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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

  conv2_LambdaHeadVar__2_12 = hlds__hlds_call_tree__IntroducedFrom__func__line_list_to_line_pieces__1014__1_1_f_0(((MR_String) (wrapper_arg_1)));
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

  conv0_HeadVar__4_4 = hlds__hlds_desc__describe_pred_from_id_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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
  MR_Word WantToMovePredIdSet_7 = ((MR_Word) ((MR_hl_field(0, Report_5, (MR_Integer) 0))));
  MR_Word ConflictExportedPredIdSet_8 = ((MR_Word) ((MR_hl_field(0, Report_5, (MR_Integer) 1))));
  MR_Word MovingPredIdSet_9 = ((MR_Word) ((MR_hl_field(0, Report_5, (MR_Integer) 2))));
  MR_Word MovingStayingPredIdSet_10 = ((MR_Word) ((MR_hl_field(0, Report_5, (MR_Integer) 3))));
  MR_Word InInterfaceTypeCtorSet_11 = ((MR_Word) ((MR_hl_field(0, Report_5, (MR_Integer) 4))));
  MR_Word MovingPredTypeCtorSet_12 = ((MR_Word) ((MR_hl_field(0, Report_5, (MR_Integer) 5))));
  MR_Word StayingPredTypeCtorSet_13 = ((MR_Word) ((MR_hl_field(0, Report_5, (MR_Integer) 6))));
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
  MR_Word Var_33;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_126;
  MR_Word Var_127;
  MR_Word Var_128;
  MR_Word PredDescSet_138;
  MR_Word PredDescs_139;
  MR_Word Var_140;
  MR_Word AllButLastLines_144;
  MR_String LastLine_145;
  MR_Word AllButLastLinePieceLists_146;
  MR_Word AllButLastLinePieces_147;
  MR_Word Var_150;
  MR_Word Var_151;
  MR_Word Var_152;
  MR_Word LineNumberDescs_157;
  MR_Word LastLineNumberDesc_159;
  MR_Integer LastLineNumber_160;
  MR_Word NumDigits_162;
  MR_Word LineNumberDescStrs_163;
  MR_Word Var_167;
  MR_Word AllButLastLines_170;
  MR_String LastLine_171;
  MR_Word AllButLastLinePieceLists_172;
  MR_Word AllButLastLinePieces_173;
  MR_Word Var_176;
  MR_Word Var_177;
  MR_Word Var_178;
  MR_Box conv1_LastLine_145;
  MR_Word Var_158;
  MR_Box conv5_LastLineNumberDesc_159;
  MR_Box conv7_LastLine_171;

  {
    Var_140 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_140, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_8[0]));
    MR_hl_field(0, Var_140, 1) = ((MR_Box) (hlds__hlds_call_tree__construct_movability_report_3_p_0_1));
    MR_hl_field(0, Var_140, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_140, 3) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_140, 4) = ((MR_Box) (ModuleInfo_4));
  }
  PredDescSet_138 = mercury__set_tree234__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_140, WantToMovePredIdSet_7);
  mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PredDescSet_138, &PredDescs_139);
  mercury__list__det_split_last_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PredDescs_139, &AllButLastLines_144, &conv1_LastLine_145);
  LastLine_145 = ((MR_String) (conv1_LastLine_145));
  AllButLastLinePieceLists_146 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[4]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[9]), AllButLastLines_144);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AllButLastLinePieceLists_146, &AllButLastLinePieces_147);
  {
    Var_152 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_152, 0) = ((MR_Box) (LastLine_145));
  }
  {
    Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_151, 0) = ((MR_Box) (Var_152));
    MR_hl_field(1, Var_151, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[67])));
  }
  Var_150 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AllButLastLinePieces_147, Var_151);
  WantToMovePredPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[65])), Var_150);
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), WantToMovePredPieces_14, (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[17])));
  WantToMovePieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[13])), Var_33);
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[2]));
    MR_hl_field(0, Var_42, 1) = ((MR_Box) (hlds__hlds_call_tree__construct_movability_report_3_p_0_3));
    MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_42, 3) = ((MR_Box) (ModuleInfo_4));
  }
  MovingPredLinesAndDescs_16 = mercury__set_tree234__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_line_number_and_desc_0), Var_42, MovingPredIdSet_9);
  {
    Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_43, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[3]));
    MR_hl_field(0, Var_43, 1) = ((MR_Box) (hlds__hlds_call_tree__construct_movability_report_3_p_0_4));
    MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_43, 3) = ((MR_Box) (ModuleInfo_4));
  }
  MovingTypeLinesAndDescs_17 = mercury__set_tree234__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_line_number_and_desc_0), Var_43, MovingPredTypeCtorSet_12);
  Var_44 = mercury__set_tree234__union_2_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_line_number_and_desc_0), MovingPredLinesAndDescs_16, MovingTypeLinesAndDescs_17);
  mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_line_number_and_desc_0), Var_44, &LineNumberDescs_157);
  mercury__list__det_split_last_3_p_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_line_number_and_desc_0), LineNumberDescs_157, &Var_158, &conv5_LastLineNumberDesc_159);
  LastLineNumberDesc_159 = ((MR_Word) (conv5_LastLineNumberDesc_159));
  LastLineNumber_160 = ((MR_Integer) ((MR_hl_field(0, LastLineNumberDesc_159, (MR_Integer) 0))));
  succeeded = (LastLineNumber_160 >= (MR_Integer) 100000);
  if (succeeded)
    NumDigits_162 = (MR_Integer) 3;
  else
  {
    succeeded = (LastLineNumber_160 >= (MR_Integer) 10000);
    if (succeeded)
      NumDigits_162 = (MR_Integer) 2;
    else
    {
      succeeded = (LastLineNumber_160 >= (MR_Integer) 1000);
      if (succeeded)
        NumDigits_162 = (MR_Integer) 1;
      else
        NumDigits_162 = (MR_Integer) 0;
    }
  }
  {
    Var_167 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_167, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[4]));
    MR_hl_field(0, Var_167, 1) = ((MR_Box) (hlds__hlds_call_tree__construct_movability_report_3_p_0_5));
    MR_hl_field(0, Var_167, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_167, 3) = ((MR_Box) (NumDigits_162));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_line_number_and_desc_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_167, LineNumberDescs_157, &LineNumberDescStrs_163);
  mercury__list__det_split_last_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LineNumberDescStrs_163, &AllButLastLines_170, &conv7_LastLine_171);
  LastLine_171 = ((MR_String) (conv7_LastLine_171));
  AllButLastLinePieceLists_172 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[4]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[10]), AllButLastLines_170);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AllButLastLinePieceLists_172, &AllButLastLinePieces_173);
  {
    Var_178 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_178, 0) = ((MR_Box) (LastLine_171));
  }
  {
    Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_177, 0) = ((MR_Box) (Var_178));
    MR_hl_field(1, Var_177, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[67])));
  }
  Var_176 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AllButLastLinePieces_173, Var_177);
  MovingPredTypePieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[65])), Var_176);
  MovingPieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[25])), MovingPredTypePieces_18);
  succeeded = mercury__set_tree234__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ConflictExportedPredIdSet_8);
  if (succeeded)
    ConflictExportedPieces_20 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ConflictExportedPredPieces_21;

    ConflictExportedPredPieces_21 = hlds__hlds_call_tree__pred_name_set_to_line_pieces_2_f_0(ModuleInfo_4, ConflictExportedPredIdSet_8);
    ConflictExportedPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[31])), ConflictExportedPredPieces_21);
  }
  succeeded = mercury__set_tree234__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), InInterfaceTypeCtorSet_11);
  if (succeeded)
  {
    MR_Word MovingStayingPredTypeCtorSet_22;

    mercury__set_tree234__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), MovingPredTypeCtorSet_12, StayingPredTypeCtorSet_13, &MovingStayingPredTypeCtorSet_22);
    succeeded = mercury__set_tree234__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), MovingStayingPredTypeCtorSet_22);
    if (succeeded)
      MovingTypePieces_23 = (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[35]));
    else
    {
      MR_Word ExportedTypeCtorPieces_24;

      ExportedTypeCtorPieces_24 = hlds__hlds_call_tree__type_name_set_to_line_pieces_1_f_0(MovingStayingPredTypeCtorSet_22);
      MovingTypePieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[43])), ExportedTypeCtorPieces_24);
    }
  }
  else
  {
    MR_Word InInterfaceTypeCtorPieces_25;

    InInterfaceTypeCtorPieces_25 = hlds__hlds_call_tree__type_name_set_to_line_pieces_1_f_0(InInterfaceTypeCtorSet_11);
    MovingTypePieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[47])), InInterfaceTypeCtorPieces_25);
  }
  succeeded = mercury__set_tree234__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), MovingStayingPredIdSet_10);
  if (succeeded)
    MovingStayingPieces_26 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word MovingStayingPredPieces_27;

    MovingStayingPredPieces_27 = hlds__hlds_call_tree__pred_name_set_to_line_pieces_2_f_0(ModuleInfo_4, MovingStayingPredIdSet_10);
    MovingStayingPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[63])), MovingStayingPredPieces_27);
  }
  Var_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MovingTypePieces_23, MovingStayingPieces_26);
  Var_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MovingPieces_19, Var_128);
  Var_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ConflictExportedPieces_20, Var_127);
  InfoPieces_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), WantToMovePieces_15, Var_126);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    *InfoSpec_6 = base;
    MR_hl_field(2, base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.hlds_call_tree.construct_movability_report\'/3"));
    MR_hl_field(2, base, 1) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(2, base, 2) = ((MR_Box) ((MR_Unsigned) 84U));
    MR_hl_field(2, base, 3) = ((MR_Box) (InfoPieces_28));
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

  conv2_LambdaHeadVar__2_12 = hlds__hlds_call_tree__IntroducedFrom__func__line_list_to_line_pieces__1014__1_1_f_0(((MR_String) (wrapper_arg_1)));
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

  PredDescSet_5 = mercury__set_tree234__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_name_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[7]), NameAritySet_3);
  mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PredDescSet_5, &PredDescs_6);
  mercury__list__det_split_last_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PredDescs_6, &AllButLastLines_10, &conv1_LastLine_11);
  LastLine_11 = ((MR_String) (conv1_LastLine_11));
  AllButLastLinePieceLists_12 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[4]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[8]), AllButLastLines_10);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AllButLastLinePieceLists_12, &AllButLastLinePieces_13);
  {
    Var_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_18, 0) = ((MR_Box) (LastLine_11));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[67])));
  }
  Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AllButLastLinePieces_13, Var_17);
  Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[65])), Var_16);
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

  conv2_LambdaHeadVar__2_12 = hlds__hlds_call_tree__IntroducedFrom__func__line_list_to_line_pieces__1014__1_1_f_0(((MR_String) (wrapper_arg_1)));
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

  conv0_HeadVar__4_4 = hlds__hlds_desc__describe_pred_from_id_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_8[0]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (hlds__hlds_call_tree__pred_name_set_to_line_pieces_2_f_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_9, 4) = ((MR_Box) (ModuleInfo_4));
  }
  PredDescSet_7 = mercury__set_tree234__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_9, PredIdSet_5);
  mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PredDescSet_7, &PredDescs_8);
  mercury__list__det_split_last_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PredDescs_8, &AllButLastLines_13, &conv1_LastLine_14);
  LastLine_14 = ((MR_String) (conv1_LastLine_14));
  AllButLastLinePieceLists_15 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[4]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[6]), AllButLastLines_13);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AllButLastLinePieceLists_15, &AllButLastLinePieces_16);
  {
    Var_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_21, 0) = ((MR_Box) (LastLine_14));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[67])));
  }
  Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AllButLastLinePieces_16, Var_20);
  Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_call_tree_scalar_common_1[65])), Var_19);
  return Pieces_6;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__find_staying_pred_ids_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__hlds_call_tree__IntroducedFrom__pred__find_staying_pred_ids__697__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
      MR_Word HeadPredId_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TailPredIds_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word NextPredIds_16;
      MR_Word STATE_VARIABLE_StayingPredIdSet_27_27;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_StayingPredIdSet_0_4;

      succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), WantToMovePredIdSet_2, ((MR_Box) (HeadPredId_13)));
      if (succeeded)
      {
        NextPredIds_16 = TailPredIds_14;
        STATE_VARIABLE_StayingPredIdSet_27_27 = STATE_VARIABLE_StayingPredIdSet_0_4;
      }
      else
      {
        MR_Word STATE_VARIABLE_StayingPredIdSet_25_25;

        succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (HeadPredId_13)), STATE_VARIABLE_StayingPredIdSet_0_4, &STATE_VARIABLE_StayingPredIdSet_25_25);
        if (succeeded)
        {
          MR_Word PredCallees_17;
          MR_Word LocalCalleesList_20;
          MR_Word NewLocalCalleesList_22;
          MR_Word Var_26;
          MR_Box conv0_PredCallees_17;
          MR_Word _OldLocalCalleesList_21;

          STATE_VARIABLE_StayingPredIdSet_27_27 = STATE_VARIABLE_StayingPredIdSet_25_25;
          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), PredCalleeMap_1, ((MR_Box) (HeadPredId_13)), &conv0_PredCallees_17);
          PredCallees_17 = ((MR_Word) (conv0_PredCallees_17));
          LocalCalleesList_20 = ((MR_Word) ((MR_hl_field(0, PredCallees_17, (MR_Integer) 2))));
          {
            Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_26, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[1]));
            MR_hl_field(0, Var_26, 1) = ((MR_Box) (hlds__hlds_call_tree__find_staying_pred_ids_5_p_0_1));
            MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_26, 3) = ((MR_Box) (STATE_VARIABLE_StayingPredIdSet_25_25));
          }
          mercury__list__filter_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_26, LocalCalleesList_20, &_OldLocalCalleesList_21, &NewLocalCalleesList_22);
          NextPredIds_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NewLocalCalleesList_22, TailPredIds_14);
        }
        else
        {
          NextPredIds_16 = TailPredIds_14;
          STATE_VARIABLE_StayingPredIdSet_27_27 = STATE_VARIABLE_StayingPredIdSet_0_4;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = NextPredIds_16;
      next_value_of_STATE_VARIABLE_StayingPredIdSet_0_4 = STATE_VARIABLE_StayingPredIdSet_27_27;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_StayingPredIdSet_0_4 = next_value_of_STATE_VARIABLE_StayingPredIdSet_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__find_moving_pred_ids_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__hlds_call_tree__IntroducedFrom__pred__find_moving_pred_ids__666__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
      MR_Word HeadPredId_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TailPredIds_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word NextPredIds_16;
      MR_Word STATE_VARIABLE_ReachablePredIdSet_27_27;
      MR_Word STATE_VARIABLE_ReachablePredIdSet_25_25;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ReachablePredIdSet_0_4;

      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (HeadPredId_13)), STATE_VARIABLE_ReachablePredIdSet_0_4, &STATE_VARIABLE_ReachablePredIdSet_25_25);
      if (succeeded)
      {
        STATE_VARIABLE_ReachablePredIdSet_27_27 = STATE_VARIABLE_ReachablePredIdSet_25_25;
        succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NonMovingExportPredIdSet_2, ((MR_Box) (HeadPredId_13)));
        if (succeeded)
          NextPredIds_16 = TailPredIds_14;
        else
        {
          MR_Word PredCallees_17;
          MR_Word LocalCalleesList_20;
          MR_Word NewLocalCalleesList_22;
          MR_Word Var_26;
          MR_Box conv0_PredCallees_17;
          MR_Word _OldLocalCalleesList_21;

          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), PredCalleeMap_1, ((MR_Box) (HeadPredId_13)), &conv0_PredCallees_17);
          PredCallees_17 = ((MR_Word) (conv0_PredCallees_17));
          LocalCalleesList_20 = ((MR_Word) ((MR_hl_field(0, PredCallees_17, (MR_Integer) 2))));
          {
            Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_26, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[1]));
            MR_hl_field(0, Var_26, 1) = ((MR_Box) (hlds__hlds_call_tree__find_moving_pred_ids_5_p_0_1));
            MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_26, 3) = ((MR_Box) (STATE_VARIABLE_ReachablePredIdSet_25_25));
          }
          mercury__list__filter_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_26, LocalCalleesList_20, &_OldLocalCalleesList_21, &NewLocalCalleesList_22);
          NextPredIds_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NewLocalCalleesList_22, TailPredIds_14);
        }
      }
      else
      {
        NextPredIds_16 = TailPredIds_14;
        STATE_VARIABLE_ReachablePredIdSet_27_27 = STATE_VARIABLE_ReachablePredIdSet_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = NextPredIds_16;
      next_value_of_STATE_VARIABLE_ReachablePredIdSet_0_4 = STATE_VARIABLE_ReachablePredIdSet_27_27;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_ReachablePredIdSet_0_4 = next_value_of_STATE_VARIABLE_ReachablePredIdSet_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_call_tree__write_local_call_tree_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_call_tree__write_pred_order_entry_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
hlds__hlds_call_tree__write_local_call_tree_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_IsFirst_18;

  hlds__hlds_call_tree__write_pred_callees_entry_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_IsFirst_18);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_IsFirst_18));
}

void MR_CALL 
hlds__hlds_call_tree__write_local_call_tree_6_p_0(
  MR_Word TreeStream_7,
  MR_Word OrderStream_8,
  MR_Word ModuleInfo_9,
  MR_Word CallTreeInfo_10)
{
  MR_Word PredCalleesList_14 = ((MR_Word) ((MR_hl_field(0, CallTreeInfo_10, (MR_Integer) 2))));
  MR_Word PredCalleeMap_15 = ((MR_Word) ((MR_hl_field(0, CallTreeInfo_10, (MR_Integer) 3))));
  MR_Word PredIdCord_17;
  MR_Word PredIdList_18;
  MR_Word Var_21;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Box conv2__First_16;
  MR_Box conv1_STATE_VARIABLE_IO_23_23;
  MR_Box conv3_STATE_VARIABLE_IO_20;

  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_6[0]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (hlds__hlds_call_tree__write_local_call_tree_6_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (TreeStream_7));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (ModuleInfo_9));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, PredCalleesList_14, ((MR_Box) ((MR_Integer) 1)), &conv2__First_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23_23);
  Var_24 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  Var_25 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0(PredCalleeMap_15, PredCalleesList_14, Var_24, Var_25, &PredIdCord_17);
  PredIdList_18 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIdCord_17);
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_7[0]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (hlds__hlds_call_tree__write_local_call_tree_6_p_0_2));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (OrderStream_8));
    MR_hl_field(0, Var_26, 4) = ((MR_Box) (ModuleInfo_9));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_26, PredIdList_18, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_20);
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_36;

  succeeded = hlds__hlds_call_tree__IntroducedFrom__pred__construct_depth_first_left_right_order__435__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_36);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_36));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__hlds_call_tree__IntroducedFrom__pred__construct_depth_first_left_right_order__431__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
      MR_Word HeadPredCallees_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TailPredCallees_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredId_16 = ((MR_Word) ((MR_hl_field(0, HeadPredCallees_12, (MR_Integer) 0))));
      MR_Word Callees_18 = ((MR_Word) ((MR_hl_field(0, HeadPredCallees_12, (MR_Integer) 2))));
      MR_Word NextPredCallees_22;
      MR_Word STATE_VARIABLE_PredIdCord_27_27;
      MR_Word STATE_VARIABLE_HandledPredIds_30_30;
      MR_Word STATE_VARIABLE_HandledPredIds_26_26;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_HandledPredIds_0_3;
      MR_Word next_value_of_STATE_VARIABLE_PredIdCord_0_4;

      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_16)), STATE_VARIABLE_HandledPredIds_0_3, &STATE_VARIABLE_HandledPredIds_26_26);
      if (succeeded)
      {
        MR_Word NewCallees_20;
        MR_Word NewPredCallees_21;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word _OldCallees_19;

        STATE_VARIABLE_HandledPredIds_30_30 = STATE_VARIABLE_HandledPredIds_26_26;
        mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_16)), STATE_VARIABLE_PredIdCord_0_4, &STATE_VARIABLE_PredIdCord_27_27);
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_28, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[1]));
          MR_hl_field(0, Var_28, 1) = ((MR_Box) (hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0_1));
          MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_28, 3) = ((MR_Box) (STATE_VARIABLE_HandledPredIds_26_26));
        }
        mercury__list__filter_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_28, Callees_18, &_OldCallees_19, &NewCallees_20);
        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_29, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_4[1]));
          MR_hl_field(0, Var_29, 1) = ((MR_Box) (hlds__hlds_call_tree__construct_depth_first_left_right_order_5_p_0_2));
          MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_29, 3) = ((MR_Box) (PredCalleeMap_1));
        }
        mercury__list__filter_map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), Var_29, NewCallees_20, &NewPredCallees_21);
        NextPredCallees_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), NewPredCallees_21, TailPredCallees_13);
      }
      else
      {
        NextPredCallees_22 = TailPredCallees_13;
        STATE_VARIABLE_PredIdCord_27_27 = STATE_VARIABLE_PredIdCord_0_4;
        STATE_VARIABLE_HandledPredIds_30_30 = STATE_VARIABLE_HandledPredIds_0_3;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = NextPredCallees_22;
      next_value_of_STATE_VARIABLE_HandledPredIds_0_3 = STATE_VARIABLE_HandledPredIds_30_30;
      next_value_of_STATE_VARIABLE_PredIdCord_0_4 = STATE_VARIABLE_PredIdCord_27_27;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_HandledPredIds_0_3 = next_value_of_STATE_VARIABLE_HandledPredIds_0_3;
      STATE_VARIABLE_PredIdCord_0_4 = next_value_of_STATE_VARIABLE_PredIdCord_0_4;
      continue;
    }
    break;
  }
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
  MR_Word ExportList_10;
  MR_Word PredCalleesCord_11;
  MR_Word PredCalleeMap_12;
  MR_Word PredCalleesList_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;

  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_3, &PredIdTable_5);
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_5, &PredIdsInfos_6);
  Var_14 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  Var_15 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  hlds__hlds_call_tree__find_local_preds_exports_5_p_0(PredIdsInfos_6, Var_14, &LocalPredIds_7, Var_15, &ExportLineMap_8);
  mercury__one_or_more_map__to_flat_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ExportLineMap_8, &ExportLineList_9);
  mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ExportLineList_9, &ExportList_10);
  Var_16 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  Var_17 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0));
  Var_18 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0));
  hlds__hlds_call_tree__gather_pred_callees_8_p_0(PredIdTable_5, LocalPredIds_7, ExportList_10, Var_16, Var_17, &PredCalleesCord_11, Var_18, &PredCalleeMap_12);
  PredCalleesList_13 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), PredCalleesCord_11);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *CallTreeInfo_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (LocalPredIds_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExportList_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (PredCalleesList_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (PredCalleeMap_12));
  }
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__gather_pred_callees_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__hlds_call_tree__IntroducedFrom__pred__gather_pred_callees__268__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_call_tree__gather_pred_callees_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__hlds_call_tree__IntroducedFrom__pred__gather_pred_callees__255__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_call_tree__gather_pred_callees_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_PredCalleesCord_0_5,
  MR_Word * STATE_VARIABLE_PredCalleesCord_6,
  MR_Word STATE_VARIABLE_PredCalleeMap_0_7,
  MR_Word * STATE_VARIABLE_PredCalleeMap_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_PredCalleeMap_8 = STATE_VARIABLE_PredCalleeMap_0_7;
      *STATE_VARIABLE_PredCalleesCord_6 = STATE_VARIABLE_PredCalleesCord_0_5;
    }
    else
    {
      MR_Word HeadPredId_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TailPredIds_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word NextPredIds_37;
      MR_Word STATE_VARIABLE_PredCalleesCord_46_46;
      MR_Word STATE_VARIABLE_PredCalleeMap_47_47;
      MR_Word STATE_VARIABLE_HandledPredIds_49_49;
      MR_Word STATE_VARIABLE_HandledPredIds_43_43;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_PredCalleesCord_0_5;
      MR_Word next_value_of_STATE_VARIABLE_PredCalleeMap_0_7;

      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (HeadPredId_20)), HeadVar__4_4, &STATE_VARIABLE_HandledPredIds_43_43);
      if (succeeded)
      {
        MR_Word PredInfo_25;
        MR_Word ProcTable_26;
        MR_Word ProcIdsInfos_27;
        MR_Box conv0_PredInfo_25;
        MR_Word ValidProcInfo_28;
        MR_Word Var_63;

        STATE_VARIABLE_HandledPredIds_49_49 = STATE_VARIABLE_HandledPredIds_43_43;
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), HeadVar__1_1, ((MR_Box) (HeadPredId_20)), &conv0_PredInfo_25);
        PredInfo_25 = ((MR_Word) (conv0_PredInfo_25));
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_25, &ProcTable_26);
        mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_26, &ProcIdsInfos_27);
        succeeded = (ProcIdsInfos_27 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_63 = ((MR_Word) ((MR_hl_field(1, ProcIdsInfos_27, (MR_Integer) 0))));
          ValidProcInfo_28 = ((MR_Word) ((MR_hl_field(0, Var_63, (MR_Integer) 1))));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Goal_29;
          MR_Word AllCalleesCord_30;
          MR_Word AllCalleesList_31;
          MR_Word LocalCalleesList0_32;
          MR_Word LocalCalleesList_33;
          MR_Word PredCallees_34;
          MR_Word NewLocalCalleesList_36;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_Word Var_48;
          MR_Word SeenPredIds0_65;
          MR_Word CordWithoutDuplicates_66;
          MR_Word Var_67;
          MR_Word _OldLocalCalleesList_35;

          hlds__hlds_pred__proc_info_get_goal_2_p_0(ValidProcInfo_28, &Goal_29);
          Var_44 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
          hlds__hlds_call_tree__acc_goal_callees_3_p_0(Goal_29, Var_44, &AllCalleesCord_30);
          AllCalleesList_31 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), AllCalleesCord_30);
          {
            Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_45, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[1]));
            MR_hl_field(0, Var_45, 1) = ((MR_Box) (hlds__hlds_call_tree__gather_pred_callees_8_p_0_1));
            MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_45, 3) = ((MR_Box) (HeadVar__2_2));
          }
          mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_45, AllCalleesList_31, &LocalCalleesList0_32);
          SeenPredIds0_65 = mercury__set_tree234__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
          Var_67 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
          hlds__hlds_call_tree__keep_only_first_calls_loop_4_p_0(LocalCalleesList0_32, SeenPredIds0_65, Var_67, &CordWithoutDuplicates_66);
          LocalCalleesList_33 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), CordWithoutDuplicates_66);
          {
            PredCallees_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PredCallees_34, 0) = ((MR_Box) (HeadPredId_20));
            MR_hl_field(0, PredCallees_34, 1) = ((MR_Box) (PredInfo_25));
            MR_hl_field(0, PredCallees_34, 2) = ((MR_Box) (LocalCalleesList_33));
          }
          mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), ((MR_Box) (PredCallees_34)), STATE_VARIABLE_PredCalleesCord_0_5, &STATE_VARIABLE_PredCalleesCord_46_46);
          mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_pred_callees_0), ((MR_Box) (HeadPredId_20)), ((MR_Box) (PredCallees_34)), STATE_VARIABLE_PredCalleeMap_0_7, &STATE_VARIABLE_PredCalleeMap_47_47);
          {
            Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_48, 0) = ((MR_Box) (&hlds__hlds_call_tree_scalar_common_5[1]));
            MR_hl_field(0, Var_48, 1) = ((MR_Box) (hlds__hlds_call_tree__gather_pred_callees_8_p_0_2));
            MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_48, 3) = ((MR_Box) (STATE_VARIABLE_HandledPredIds_43_43));
          }
          mercury__list__filter_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_48, LocalCalleesList_33, &_OldLocalCalleesList_35, &NewLocalCalleesList_36);
          NextPredIds_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NewLocalCalleesList_36, TailPredIds_21);
        }
        else
        {
          NextPredIds_37 = TailPredIds_21;
          STATE_VARIABLE_PredCalleeMap_47_47 = STATE_VARIABLE_PredCalleeMap_0_7;
          STATE_VARIABLE_PredCalleesCord_46_46 = STATE_VARIABLE_PredCalleesCord_0_5;
        }
      }
      else
      {
        NextPredIds_37 = TailPredIds_21;
        STATE_VARIABLE_PredCalleeMap_47_47 = STATE_VARIABLE_PredCalleeMap_0_7;
        STATE_VARIABLE_PredCalleesCord_46_46 = STATE_VARIABLE_PredCalleesCord_0_5;
        STATE_VARIABLE_HandledPredIds_49_49 = HeadVar__4_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = NextPredIds_37;
      next_value_of_HeadVar__4_4 = STATE_VARIABLE_HandledPredIds_49_49;
      next_value_of_STATE_VARIABLE_PredCalleesCord_0_5 = STATE_VARIABLE_PredCalleesCord_46_46;
      next_value_of_STATE_VARIABLE_PredCalleeMap_0_7 = STATE_VARIABLE_PredCalleeMap_47_47;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_PredCalleesCord_0_5 = next_value_of_STATE_VARIABLE_PredCalleesCord_0_5;
      STATE_VARIABLE_PredCalleeMap_0_7 = next_value_of_STATE_VARIABLE_PredCalleeMap_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_call_tree__keep_only_first_calls_loop_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SeenPredIds_0_2,
  MR_Word STATE_VARIABLE_CordWithoutDuplicates_0_3,
  MR_Word * STATE_VARIABLE_CordWithoutDuplicates_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CordWithoutDuplicates_4 = STATE_VARIABLE_CordWithoutDuplicates_0_3;
    else
    {
      MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PredIds_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_CordWithoutDuplicates_17_17;
      MR_Word STATE_VARIABLE_SeenPredIds_18_18;
      MR_Word STATE_VARIABLE_SeenPredIds_16_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_SeenPredIds_0_2;
      MR_Word next_value_of_STATE_VARIABLE_CordWithoutDuplicates_0_3;

      succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_9)), STATE_VARIABLE_SeenPredIds_0_2, &STATE_VARIABLE_SeenPredIds_16_16);
      if (succeeded)
      {
        STATE_VARIABLE_SeenPredIds_18_18 = STATE_VARIABLE_SeenPredIds_16_16;
        mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_9)), STATE_VARIABLE_CordWithoutDuplicates_0_3, &STATE_VARIABLE_CordWithoutDuplicates_17_17);
      }
      else
      {
        STATE_VARIABLE_CordWithoutDuplicates_17_17 = STATE_VARIABLE_CordWithoutDuplicates_0_3;
        STATE_VARIABLE_SeenPredIds_18_18 = STATE_VARIABLE_SeenPredIds_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredIds_10;
      next_value_of_STATE_VARIABLE_SeenPredIds_0_2 = STATE_VARIABLE_SeenPredIds_18_18;
      next_value_of_STATE_VARIABLE_CordWithoutDuplicates_0_3 = STATE_VARIABLE_CordWithoutDuplicates_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_SeenPredIds_0_2 = next_value_of_STATE_VARIABLE_SeenPredIds_0_2;
      STATE_VARIABLE_CordWithoutDuplicates_0_3 = next_value_of_STATE_VARIABLE_CordWithoutDuplicates_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_CalleeCord_86;

  hlds__hlds_call_tree__acc_goal_callees_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_CalleeCord_86);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_CalleeCord_86));
}

static MR_Box MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv6_LambdaHeadVar__2_98;

  conv6_LambdaHeadVar__2_98 = hlds__hlds_call_tree__IntroducedFrom__func__acc_goal_callees__353__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_98));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_CalleeCord_86;

  hlds__hlds_call_tree__acc_goal_callees_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_CalleeCord_86);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_CalleeCord_86));
}

static void MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_CalleeCord_86;

  hlds__hlds_call_tree__acc_goal_callees_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_CalleeCord_86);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_CalleeCord_86));
}

static void MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_CalleeCord_86;

  hlds__hlds_call_tree__acc_goal_callees_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CalleeCord_86);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CalleeCord_86));
}

static void MR_CALL 
hlds__hlds_call_tree__acc_goal_callees_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_CalleeCord_0_85,
  MR_Word * STATE_VARIABLE_CalleeCord_86)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, Goal_4, (MR_Integer) 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_116 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word next_value_of_Goal_4 = SubGoal_116;

          // direct tailcall eliminated
          ;
          Goal_4 = next_value_of_Goal_4;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 1))));
          MR_Word Unification_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_CalleeCord_87_87;

          switch (MR_tag((MR_Word) Unification_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word UnifyConsId_14 = ((MR_Word) ((MR_hl_field(0, Unification_11, (MR_Integer) 1))));
                MR_Word ShroudedPredProcId_144;

                succeeded = ((((MR_tag((MR_Word) UnifyConsId_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, UnifyConsId_14, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ShroudedPredProcId_144 = ((MR_Word) ((MR_hl_field(3, UnifyConsId_14, (MR_Integer) 1))));
                  {
                    MR_Integer PredIdInt_146 = ((MR_Integer) ((MR_hl_field(0, ShroudedPredProcId_144, (MR_Integer) 0))));
                    MR_Word ShroudedPredId_148 = (MR_Word) (PredIdInt_146);
                    MR_Word PredId_149;

                    PredId_149 = hlds__hlds_pred__unshroud_pred_id_1_f_0(ShroudedPredId_148);
                    mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_149)), STATE_VARIABLE_CalleeCord_0_85, &STATE_VARIABLE_CalleeCord_87_87);
                  }
                }
                else
                  STATE_VARIABLE_CalleeCord_87_87 = STATE_VARIABLE_CalleeCord_0_85;
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_CalleeCord_87_87 = STATE_VARIABLE_CalleeCord_0_85;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_CalleeCord_87_87 = STATE_VARIABLE_CalleeCord_0_85;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unification_11, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_CalleeCord_87_87 = STATE_VARIABLE_CalleeCord_0_85;
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_CalleeCord_87_87 = STATE_VARIABLE_CalleeCord_0_85;
                  break;
              }
              break;
          }
          switch (MR_tag((MR_Word) RHS_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_CalleeCord_86 = STATE_VARIABLE_CalleeCord_87_87;
              break;
            case (MR_Integer) 1:
              {
                MR_Word RHSConsId_34 = ((MR_Word) ((MR_hl_field(1, RHS_9, (MR_Integer) 0))));

                hlds__hlds_call_tree__acc_cons_id_callees_3_p_0(RHSConsId_34, STATE_VARIABLE_CalleeCord_87_87, STATE_VARIABLE_CalleeCord_86);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubGoal_44 = ((MR_Word) ((MR_hl_field(2, RHS_9, (MR_Integer) 5))));
                MR_Word next_value_of_Goal_4 = SubGoal_44;
                MR_Word next_value_of_STATE_VARIABLE_CalleeCord_0_85 = STATE_VARIABLE_CalleeCord_87_87;

                // direct tailcall eliminated
                ;
                Goal_4 = next_value_of_Goal_4;
                STATE_VARIABLE_CalleeCord_0_85 = next_value_of_STATE_VARIABLE_CalleeCord_0_85;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_45 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, (MR_Integer) 0))));

          mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_45)), STATE_VARIABLE_CalleeCord_0_85, STATE_VARIABLE_CalleeCord_86);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_CalleeCord_86 = STATE_VARIABLE_CalleeCord_0_85;
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredId_112 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));

              mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_112)), STATE_VARIABLE_CalleeCord_0_85, STATE_VARIABLE_CalleeCord_86);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubGoals_63 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Box conv1_STATE_VARIABLE_CalleeCord_86;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[3]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[1]), SubGoals_63, ((MR_Box) (STATE_VARIABLE_CalleeCord_0_85)), &conv1_STATE_VARIABLE_CalleeCord_86);
              *STATE_VARIABLE_CalleeCord_86 = ((MR_Word) (conv1_STATE_VARIABLE_CalleeCord_86));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubGoals_113 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));
              MR_Box conv3_STATE_VARIABLE_CalleeCord_86;

              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[3]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[2]), SubGoals_113, ((MR_Box) (STATE_VARIABLE_CalleeCord_0_85)), &conv3_STATE_VARIABLE_CalleeCord_86);
              *STATE_VARIABLE_CalleeCord_86 = ((MR_Word) (conv3_STATE_VARIABLE_CalleeCord_86));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word SubGoals_115;
              MR_Box conv8_STATE_VARIABLE_CalleeCord_86;

              SubGoals_115 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[4]), Cases_66);
              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[3]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[5]), SubGoals_115, ((MR_Box) (STATE_VARIABLE_CalleeCord_0_85)), &conv8_STATE_VARIABLE_CalleeCord_86);
              *STATE_VARIABLE_CalleeCord_86 = ((MR_Word) (conv8_STATE_VARIABLE_CalleeCord_86));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_117 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word next_value_of_Goal_4 = SubGoal_117;

              // direct tailcall eliminated
              ;
              Goal_4 = next_value_of_Goal_4;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 2))));
              MR_Word Then_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 3))));
              MR_Word Else_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 4))));
              MR_Word STATE_VARIABLE_CalleeCord_103_103;
              MR_Word STATE_VARIABLE_CalleeCord_104_104;
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_CalleeCord_0_85;

              hlds__hlds_call_tree__acc_goal_callees_3_p_0(Cond_70, STATE_VARIABLE_CalleeCord_0_85, &STATE_VARIABLE_CalleeCord_103_103);
              hlds__hlds_call_tree__acc_goal_callees_3_p_0(Then_71, STATE_VARIABLE_CalleeCord_103_103, &STATE_VARIABLE_CalleeCord_104_104);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = Else_72;
              next_value_of_STATE_VARIABLE_CalleeCord_0_85 = STATE_VARIABLE_CalleeCord_104_104;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_CalleeCord_0_85 = next_value_of_STATE_VARIABLE_CalleeCord_0_85;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Shorthand_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Shorthand_73)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_call_tree.acc_goal_callees\'/3", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_80 = ((MR_Word) ((MR_hl_field(1, Shorthand_73, (MR_Integer) 4))));
                    MR_Word OrElseGoals_81 = ((MR_Word) ((MR_hl_field(1, Shorthand_73, (MR_Integer) 5))));
                    MR_Word STATE_VARIABLE_CalleeCord_108_108;
                    MR_Box conv5_STATE_VARIABLE_CalleeCord_86;

                    hlds__hlds_call_tree__acc_goal_callees_3_p_0(MainGoal_80, STATE_VARIABLE_CalleeCord_0_85, &STATE_VARIABLE_CalleeCord_108_108);
                    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_call_tree_scalar_common_1[3]), (MR_Word) (&hlds__hlds_call_tree_scalar_common_2[3]), OrElseGoals_81, ((MR_Box) (STATE_VARIABLE_CalleeCord_108_108)), &conv5_STATE_VARIABLE_CalleeCord_86);
                    *STATE_VARIABLE_CalleeCord_86 = ((MR_Word) (conv5_STATE_VARIABLE_CalleeCord_86));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_118 = ((MR_Word) ((MR_hl_field(2, Shorthand_73, (MR_Integer) 2))));
                    MR_Word next_value_of_Goal_4 = SubGoal_118;

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
hlds__hlds_call_tree__acc_cons_id_callees_3_p_0(
  MR_Word ConsId_4,
  MR_Word STATE_VARIABLE_CalleeCord_0_12,
  MR_Word * STATE_VARIABLE_CalleeCord_13)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) ConsId_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 4)));
  MR_Word ShroudedPredProcId_6;

  if (succeeded)
  {
    ShroudedPredProcId_6 = ((MR_Word) ((MR_hl_field(3, ConsId_4, (MR_Integer) 1))));
    {
      MR_Integer PredIdInt_8 = ((MR_Integer) ((MR_hl_field(0, ShroudedPredProcId_6, (MR_Integer) 0))));
      MR_Word ShroudedPredId_10 = (MR_Word) (PredIdInt_8);
      MR_Word PredId_11;

      PredId_11 = hlds__hlds_pred__unshroud_pred_id_1_f_0(ShroudedPredId_10);
      mercury__cord__snoc_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_11)), STATE_VARIABLE_CalleeCord_0_12, STATE_VARIABLE_CalleeCord_13);
    }
  }
  else
    *STATE_VARIABLE_CalleeCord_13 = STATE_VARIABLE_CalleeCord_0_12;
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
      MR_Word PredIdsInfos_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PredStatus_17;
      MR_Word IsLocal_18;
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_LocalPredIds_37_37;
      MR_Word STATE_VARIABLE_ExportMap_38_38;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_LocalPredIds_0_2;
      MR_Word next_value_of_STATE_VARIABLE_ExportMap_0_4;

      PredId_12 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 0))));
      PredInfo_13 = ((MR_Word) ((MR_hl_field(0, Var_36, (MR_Integer) 1))));
      hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_13, &PredStatus_17);
      IsLocal_18 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_17);
      switch (IsLocal_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_LocalPredIds_37_37 = STATE_VARIABLE_LocalPredIds_0_2;
            STATE_VARIABLE_ExportMap_38_38 = STATE_VARIABLE_ExportMap_0_4;
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

                  mercury__set_tree234__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_12)), STATE_VARIABLE_LocalPredIds_0_2, &STATE_VARIABLE_LocalPredIds_37_37);
                  IsExported_29 = hlds__status__pred_status_is_exported_to_non_submodules_1_f_0(PredStatus_17);
                  switch (IsExported_29) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      STATE_VARIABLE_ExportMap_38_38 = STATE_VARIABLE_ExportMap_0_4;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Context_30;
                        MR_Integer LineNumber_31;

                        hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_13, &Context_30);
                        LineNumber_31 = mercury__term_context__context_line_1_f_0(Context_30);
                        mercury__one_or_more_map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (LineNumber_31)), ((MR_Box) (PredId_12)), STATE_VARIABLE_ExportMap_0_4, &STATE_VARIABLE_ExportMap_38_38);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  STATE_VARIABLE_LocalPredIds_37_37 = STATE_VARIABLE_LocalPredIds_0_2;
                  STATE_VARIABLE_ExportMap_38_38 = STATE_VARIABLE_ExportMap_0_4;
                }
                break;
              case (MR_Integer) 2:
                {
                  STATE_VARIABLE_LocalPredIds_37_37 = STATE_VARIABLE_LocalPredIds_0_2;
                  STATE_VARIABLE_ExportMap_38_38 = STATE_VARIABLE_ExportMap_0_4;
                }
                break;
              case (MR_Integer) 3:
                {
                  STATE_VARIABLE_LocalPredIds_37_37 = STATE_VARIABLE_LocalPredIds_0_2;
                  STATE_VARIABLE_ExportMap_38_38 = STATE_VARIABLE_ExportMap_0_4;
                }
                break;
            }
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredIdsInfos_14;
      next_value_of_STATE_VARIABLE_LocalPredIds_0_2 = STATE_VARIABLE_LocalPredIds_37_37;
      next_value_of_STATE_VARIABLE_ExportMap_0_4 = STATE_VARIABLE_ExportMap_38_38;
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
	MR_register_type_ctor_info(&hlds__hlds_call_tree__hlds__hlds_call_tree__type_ctor_info_line_number_and_desc_0);
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
