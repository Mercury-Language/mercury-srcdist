/*
** Automatically generated from `state_var.m'
** by the Mercury compiler,
** version rotd-2026-06-28
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


// :- module hlds.make_hlds.state_var.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__state_var__init
ENDINIT
*/

#include "hlds.make_hlds.state_var.mih"


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
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_vars.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.make_hlds.mih"
#include "hlds.mode_util.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.build_eqv_maps.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_uint_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__one_or_more__pti_one_or_more_1__plain_hlds__make_hlds__state_var__type_ctor_info_maybe_statevar_arg_pos_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_hlds__hlds_clauses__type_ctor_info_statevar_arg_desc_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__make_hlds__state_var__type_ctor_info_svar_status_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_hlds_goal_svar_state_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_hlds_goal_svar_state_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_hlds_goal_svar_state_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_hlds_goal_svar_state_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_hlds_goal_svar_state_0[1];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_hlds_goal_svar_state_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_uint_0;

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_maybe_statevar_arg_pos_0_0[1];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_maybe_statevar_arg_pos_0_0;

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_maybe_statevar_arg_pos_0_1[1];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_maybe_statevar_arg_pos_0_1;

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_maybe_statevar_arg_pos_0_2;

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_maybe_statevar_arg_pos_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_maybe_statevar_arg_pos_0_1[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_maybe_statevar_arg_pos_0_2[1];

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_maybe_statevar_arg_pos_0[3];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_maybe_statevar_arg_pos_0[3];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_maybe_statevar_arg_pos_0[3];

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__one_or_more__ti_one_or_more_1hlds__make_hlds__state_var__type_ctor_info_maybe_statevar_arg_pos_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0one_or_more__ti_one_or_more_1hlds__make_hlds__state_var__type_ctor_info_maybe_statevar_arg_pos_0;

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0;

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_ordinal_ordered_readonly_context_kind_0[1];

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_readonly_context_kind_0[1];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_readonly_context_kind_0[1];

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1;

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2;

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_ordinal_ordered_state_var_name_source_0[3];

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_state_var_name_source_0[3];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_state_var_name_source_0[3];

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_inner_atomic_scope_info_0_0[3];

static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_inner_atomic_scope_info_0_0[3];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_inner_atomic_scope_info_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_inner_atomic_scope_info_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_inner_atomic_scope_info_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_inner_atomic_scope_info_0[1];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_inner_atomic_scope_info_0[1];

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_outer_atomic_scope_info_0_0[3];

static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_outer_atomic_scope_info_0_0[3];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_0;

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_1;

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_1[1];

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_outer_atomic_scope_info_0[2];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_outer_atomic_scope_info_0[2];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_outer_atomic_scope_info_0[2];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_state_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__make_hlds__state_var__type_ctor_info_svar_status_0;

static const MR_NotagFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__notag_functor_desc_svar_state_0;

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_0;

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_1[1];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_1;

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_2[3];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_2;

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_3[1];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_3;

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_4[2];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_4;

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_1[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_2[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_3[2];

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_status_0[4];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_status_0[5];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_status_0[5];

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_store_0_0[4];

static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_store_0_0[4];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_store_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_store_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_store_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_store_0[1];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_store_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_unravel_info_0_0[6];

static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_unravel_info_0_0[6];

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_unravel_info_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_unravel_info_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_unravel_info_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_unravel_info_0[1];

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_unravel_info_0[1];

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__delete_unneeded_copy_goals__2440__1_2_p_0(
  MR_Word OrElseInners_91,
  MR_Word HeadVar__2_118);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__handle_state_vars_in_ite__1615__1_2_p_0(
  MR_Word StatusBefore_76,
  MR_Word StatusAfterThen_78);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__handle_arm_updated_state_vars__1395__1_2_p_0(
  MR_Word AfterAllArmsStatus_23,
  MR_Word AfterArmStatus_25);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__get_disjuncts_with_empty_states__1283__1_1_p_0(
  MR_Word StatusMapAfterGoal_12);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1531__1_2_p_0(
  MR_Word SVarsBefore_32,
  MR_Word SVarsAfterElse_35);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1529__1_2_p_0(
  MR_Word SVarsBefore_32,
  MR_Word SVarsAfterThen_34);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1527__1_2_p_0(
  MR_Word SVarsBefore_32,
  MR_Word SVarsAfterCond_33);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____state_var_name_source_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____state_var_name_source_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0(
  MR_Word * HeadVar__1_1);

static void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0(void);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____last_id_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____last_id_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__state_var__report_unneeded_svar_in_lambda_8_p_0(
  MR_Word Context_9,
  MR_Word Modes_10,
  MR_Word ParseTreeGoal_11,
  MR_Word GoalVarSVarNames_12,
  MR_Unsigned ArgNum_13,
  MR_Word SVarArgDesc_14,
  MR_Word STATE_VARIABLE_UrInfo_0_30,
  MR_Word * STATE_VARIABLE_UrInfo_31);

static void MR_CALL 
hlds__make_hlds__state_var__record_statevar_if_unused_6_p_0(
  MR_Word VarSet_7,
  MR_Word LastIdMap_8,
  MR_Word SVar_9,
  MR_Word OoMArgPos_10,
  MR_Word STATE_VARIABLE_UnusedSVarArgMap_0_20,
  MR_Word * STATE_VARIABLE_UnusedSVarArgMap_21);

static void MR_CALL 
hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_p_0(
  MR_Word DelayedRenamingToAdd_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_NextGoalId_0_21,
  MR_Word * STATE_VARIABLE_NextGoalId_22,
  MR_Word STATE_VARIABLE_DelayedRenamingMap_0_23,
  MR_Word * STATE_VARIABLE_DelayedRenamingMap_24);

static void MR_CALL 
hlds__make_hlds__state_var__reset_updated_status_2_p_0(
  MR_Word STATE_VARIABLE_Status_0_10,
  MR_Word * STATE_VARIABLE_Status_11);

static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_state_pairs_in_clause_2_p_0(
  MR_Word ItemClause0_3,
  MR_Word * ItemClause_4);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__is_prog_var_for_state_var_3_p_0(
  MR_Word VarSet_4,
  MR_String SVarName_5,
  MR_Word Var_6);

static void MR_CALL 
hlds__make_hlds__state_var__report_uninitialized_state_var_5_p_0(
  MR_Word WarnOption_6,
  MR_Word Context_7,
  MR_Word StateVar_8,
  MR_Word STATE_VARIABLE_UrInfo_0_14,
  MR_Word * STATE_VARIABLE_UrInfo_15);

static void MR_CALL 
hlds__make_hlds__state_var__report_non_visible_state_var_5_p_0(
  MR_String DorC_6,
  MR_Word Context_7,
  MR_Word StateVar_8,
  MR_Word STATE_VARIABLE_UrInfo_0_14,
  MR_Word * STATE_VARIABLE_UrInfo_15);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_14_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_14_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_14_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__state_var__report_missing_inits_in_ite_6_p_0(
  MR_Word Context_7,
  MR_Word NextStateVars_8,
  MR_String WhenMissing_9,
  MR_String WhenNotMissing_10,
  MR_Word STATE_VARIABLE_UrInfo_0_17,
  MR_Word * STATE_VARIABLE_UrInfo_18);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0(
  MR_Word LocKind_1,
  MR_Word QuantStateVars_2,
  MR_Word HeadVar__3_3,
  MR_Word StatusMapBefore_4,
  MR_Word StatusMapAfterCond_5,
  MR_Word StatusMapAfterThen_6,
  MR_Word StatusMapAfterElse_7,
  MR_Word STATE_VARIABLE_StatusMapAfterITE_0_8,
  MR_Word * STATE_VARIABLE_StatusMapAfterITE_9,
  MR_Word STATE_VARIABLE_NeckCopyGoals_0_10,
  MR_Word * STATE_VARIABLE_NeckCopyGoals_11,
  MR_Word STATE_VARIABLE_ThenEndCopyGoals_0_12,
  MR_Word * STATE_VARIABLE_ThenEndCopyGoals_13,
  MR_Word STATE_VARIABLE_ElseEndCopyGoals_0_14,
  MR_Word * STATE_VARIABLE_ElseEndCopyGoals_15,
  MR_Word STATE_VARIABLE_ThenRenames_0_16,
  MR_Word * STATE_VARIABLE_ThenRenames_17,
  MR_Word STATE_VARIABLE_ElseRenames_0_18,
  MR_Word * STATE_VARIABLE_ElseRenames_19,
  MR_Word STATE_VARIABLE_ThenMissingInits_0_20,
  MR_Word * STATE_VARIABLE_ThenMissingInits_21,
  MR_Word STATE_VARIABLE_ElseMissingInits_0_22,
  MR_Word * STATE_VARIABLE_ElseMissingInits_23,
  MR_Word STATE_VARIABLE_UrInfo_0_24,
  MR_Word * STATE_VARIABLE_UrInfo_25);

static void MR_CALL 
hlds__make_hlds__state_var__handle_state_var_in_ite_21_p_0(
  MR_Word LocKind_22,
  MR_Word SVar_23,
  MR_Word StatusBefore_24,
  MR_Word StatusAfterCond_25,
  MR_Word StatusAfterThen_26,
  MR_Word StatusAfterElse_27,
  MR_Word * StatusAfterITE_28,
  MR_Word STATE_VARIABLE_NeckCopyGoals_0_41,
  MR_Word * STATE_VARIABLE_NeckCopyGoals_42,
  MR_Word STATE_VARIABLE_ThenEndCopyGoals_0_43,
  MR_Word * STATE_VARIABLE_ThenEndCopyGoals_44,
  MR_Word STATE_VARIABLE_ElseEndCopyGoals_0_45,
  MR_Word * STATE_VARIABLE_ElseEndCopyGoals_46,
  MR_Word STATE_VARIABLE_ElseRenames_0_47,
  MR_Word * STATE_VARIABLE_ElseRenames_48,
  MR_Word STATE_VARIABLE_ThenMissingInits_0_49,
  MR_Word * STATE_VARIABLE_ThenMissingInits_50,
  MR_Word STATE_VARIABLE_ElseMissingInits_0_51,
  MR_Word * STATE_VARIABLE_ElseMissingInits_52,
  MR_Word STATE_VARIABLE_UrInfo_0_53,
  MR_Word * STATE_VARIABLE_UrInfo_54);

static MR_Word MR_CALL 
hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(
  MR_Word LocKind_4,
  MR_Word Status_5);

static void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__state_var__merge_changes_made_by_arms_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__state_var__merge_changes_made_by_arms_12_p_0(
  MR_Word VarSet_1,
  MR_Word HeadVar__2_2,
  MR_Word StatusMapBefore_3,
  MR_Word ChangedStatusListAfter_4,
  MR_Word STATE_VARIABLE_RevArms_0_5,
  MR_Word * STATE_VARIABLE_RevArms_6,
  MR_Word STATE_VARIABLE_NextGoalId_0_7,
  MR_Word * STATE_VARIABLE_NextGoalId_8,
  MR_Word STATE_VARIABLE_DelayedRenamings_0_9,
  MR_Word * STATE_VARIABLE_DelayedRenamings_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_p_0(
  MR_Word Context_5,
  MR_Word NextStateVars_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0(
  MR_Word VarSet_1,
  MR_Word HeadVar__2_2,
  MR_Word StatusMapBefore_3,
  MR_Word StatusMapAfterArm_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
hlds__make_hlds__state_var__compute_status_after_arms_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ChangedStatusMapAfter_0_3,
  MR_Word * STATE_VARIABLE_ChangedStatusMapAfter_4,
  MR_Word STATE_VARIABLE_StatusMapAfter_0_5,
  MR_Word * STATE_VARIABLE_StatusMapAfter_6);

static void MR_CALL 
hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word StatusMapAfterArm_2,
  MR_Word STATE_VARIABLE_ChangedStatusMapAfter_0_3,
  MR_Word * STATE_VARIABLE_ChangedStatusMapAfter_4,
  MR_Word STATE_VARIABLE_StatusMapAfter_0_5,
  MR_Word * STATE_VARIABLE_StatusMapAfter_6);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevDisjuncts_0_2,
  MR_Word * STATE_VARIABLE_RevDisjuncts_3);

static void MR_CALL 
hlds__make_hlds__state_var__finish_svars_for_scope_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word StatusMapBeforeOutside_2,
  MR_Word STATE_VARIABLE_StatusMapAfterOutside_0_3,
  MR_Word * STATE_VARIABLE_StatusMapAfterOutside_4);

static void MR_CALL 
hlds__make_hlds__state_var__prepare_svars_for_scope_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_StatusMap_0_3,
  MR_Word * STATE_VARIABLE_StatusMap_4,
  MR_Word STATE_VARIABLE_UrInfo_0_5,
  MR_Word * STATE_VARIABLE_UrInfo_6);

static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_lambda_body_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_lambda_body_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_lambda_body_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_clause_body_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__make_hlds__state_var__delete_unneeded_copy_goals_switch_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SeenAfter_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__make_hlds__state_var__delete_unneeded_copy_goals_disj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SeenAfter_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__make_hlds__state_var__delete_unneeded_copy_goals_rev_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SeenAfter_3,
  MR_Word * SeenBefore_4);

static MR_bool MR_CALL 
hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word SeenAfter_7,
  MR_Word * SeenBefore_8);

static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_body_8_p_0(
  MR_Word Context_9,
  MR_Word FinalMap_10,
  MR_Word Goals0_11,
  MR_Word * Goal_12,
  MR_Word InitialSVarState_13,
  MR_Word FinalSVarState_14,
  MR_Word STATE_VARIABLE_UrInfo_0_47,
  MR_Word * STATE_VARIABLE_UrInfo_48);

static void MR_CALL 
hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InitialStatusMap_2,
  MR_Word FinalStatusMap_3,
  MR_Word STATE_VARIABLE_FinalSVarSubn_0_4,
  MR_Word * STATE_VARIABLE_FinalSVarSubn_5,
  MR_Word STATE_VARIABLE_CopyGoals_0_6,
  MR_Word * STATE_VARIABLE_CopyGoals_7);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__state_var__svar_flatten_conj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__make_hlds__state_var__make_svars_read_only_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_head_term_12_p_0(
  MR_Unsigned CurDepth_13,
  MR_Unsigned CurArgNum_14,
  MR_Word Term0_15,
  MR_Word * Term_16,
  MR_Word STATE_VARIABLE_FinalMap_0_51,
  MR_Word * STATE_VARIABLE_FinalMap_52,
  MR_Word STATE_VARIABLE_SVarState_0_53,
  MR_Word * STATE_VARIABLE_SVarState_54,
  MR_Word STATE_VARIABLE_NewSVars_0_55,
  MR_Word * STATE_VARIABLE_NewSVars_56,
  MR_Word STATE_VARIABLE_UrInfo_0_57,
  MR_Word * STATE_VARIABLE_UrInfo_58);

static void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_head_terms_12_p_0(
  MR_Unsigned CurDepth_1,
  MR_Unsigned CurArgNum_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_FinalMap_0_5,
  MR_Word * STATE_VARIABLE_FinalMap_6,
  MR_Word STATE_VARIABLE_SVarState_0_7,
  MR_Word * STATE_VARIABLE_SVarState_8,
  MR_Word STATE_VARIABLE_NewSVars_0_9,
  MR_Word * STATE_VARIABLE_NewSVars_10,
  MR_Word STATE_VARIABLE_UrInfo_0_11,
  MR_Word * STATE_VARIABLE_UrInfo_12);

static void MR_CALL 
hlds__make_hlds__state_var__report_repeated_head_state_var_4_p_0(
  MR_Word Context_5,
  MR_Word StateVar_6,
  MR_Word STATE_VARIABLE_UrInfo_0_12,
  MR_Word * STATE_VARIABLE_UrInfo_13);

static void MR_CALL 
hlds__make_hlds__state_var__new_state_var_instance_5_p_0(
  MR_Word StateVar_6,
  MR_Word NameSource_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_UrInfo_0_20,
  MR_Word * STATE_VARIABLE_UrInfo_21);

static MR_Word MR_CALL 
hlds__make_hlds__state_var__init_new_statevar_map_0_f_0(void);

static MR_Word MR_CALL 
hlds__make_hlds__state_var__new_svar_store_0_f_0(void);

static MR_Word MR_CALL 
hlds__make_hlds__state_var__new_svar_state_0_f_0(void);

static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_state_pairs_in_instance_method_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____last_id_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____last_id_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____maybe_statevar_arg_pos_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____maybe_statevar_arg_pos_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____new_statevar_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____new_statevar_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____state_var_name_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____state_var_name_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_store_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_store_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____unravel_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__state_var____Compare____unravel_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_1[108][2];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_2[9][3];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_3[9][1];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_4[4][5];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_5[1][7];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_6[1][9];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_7[1][6];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_8[1][11];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_9[1][4];

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_10[1][10];




static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_1[108][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_2[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[1]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_maybe_statevar_arg_pos_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: you cannot use"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "here due to the surrounding"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "you may only refer to"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Here is the surrounding context that makes"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "state variable"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "readonly."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[18])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: since it represents two arguments, not one,"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot be a function result. You probably meant"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Perhaps you meant"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[30])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot be a lambda argument."))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[31])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "You probably meant"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[37])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot appear as a unification argument."))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[38])))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_Integer) 16)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[41])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: state variable"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not visible in this context."))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[18])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: you cannot refer to"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "here, because that state variable has"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not been initialized"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[51]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "yet."))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[18])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: clause head introduces"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "more than once."))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[18])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: new state variable"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "shadows old one."))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[63]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "When the condition"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the if-then-else"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[66]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[67])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "defines"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[69]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but when the condition"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "it does not."))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[72]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Other disjuncts define"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[74]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but not this one."))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[76]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: the state variable"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[78]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[80]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "never updated"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[82]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "replaced with an ordinary variable."))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[18])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in this lambda expressions, so it should be"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[85])))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: the argument"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[88]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in this lambda expression"))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[90]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "could be deleted,"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[92]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is always the same as its initial value."))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[18])))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because its value"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[95])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: the arguments"))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[98]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[100]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is always the same as the initial value."))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[18])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and because the final value"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[103])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because they are not used in the lambda goal,"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[105])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_2[9][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[1])),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[2]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_statevar_arg_desc_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[1])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[1])),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[6]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_1[1])),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__state_var__expand_bang_state_pairs_in_instance_method_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__state_var__svar_flatten_conj_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[2])),
    ((MR_Box) (hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_3[9][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "!.")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "!:")) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "state variable")) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 231U) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 197U) },
  /* row   6 */
  { (MR_Box) ((MR_Unsigned) 233U) },
  /* row   7 */
  { (MR_Box) ((MR_Unsigned) 211U) },
  /* row   8 */
  { (MR_Box) ((MR_Unsigned) 186U) },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_4[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__state_var__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__state_var__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_5[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_6[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__make_hlds__state_var__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__one_or_more__pti_one_or_more_1__plain_hlds__make_hlds__state_var__type_ctor_info_maybe_statevar_arg_pos_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_hlds__hlds_clauses__type_ctor_info_statevar_arg_desc_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_hlds__hlds_clauses__type_ctor_info_statevar_arg_desc_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_7[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__state_var__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_8[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_statevar_arg_desc_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_9[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__make_hlds__state_var__type_ctor_info_svar_status_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__state_var_scalar_common_10[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__make_hlds__state_var__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_ucounter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_ucounter_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_interface_vars_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_uint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__one_or_more__pti_one_or_more_1__plain_hlds__make_hlds__state_var__type_ctor_info_maybe_statevar_arg_pos_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_maybe_statevar_arg_pos_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_builtin__type_ctor_info_uint_0__plain_hlds__hlds_clauses__type_ctor_info_statevar_arg_desc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_statevar_arg_desc_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__make_hlds__state_var__type_ctor_info_svar_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__make_hlds__state_var__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__state_var__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__state_var__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_hlds_goal_svar_state_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_hlds_goal_svar_state_0_0 = {
  (MR_String) "hlds_goal_svar_state",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_hlds_goal_svar_state_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_hlds_goal_svar_state_0_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_hlds_goal_svar_state_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_hlds_goal_svar_state_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_hlds_goal_svar_state_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_hlds_goal_svar_state_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_hlds_goal_svar_state_0_0 };

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_hlds_goal_svar_state_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "hlds_goal_svar_state",
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_hlds_goal_svar_state_0 },
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_hlds_goal_svar_state_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_hlds_goal_svar_state_0,

};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_uint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_last_id_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____last_id_map_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____last_id_map_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "last_id_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_uint_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_maybe_statevar_arg_pos_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0) };

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_maybe_statevar_arg_pos_0_0 = {
  (MR_String) "arg_old",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_maybe_statevar_arg_pos_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_maybe_statevar_arg_pos_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0) };

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_maybe_statevar_arg_pos_0_1 = {
  (MR_String) "arg_new",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_maybe_statevar_arg_pos_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_maybe_statevar_arg_pos_0_2 = {
  (MR_String) "non_arg",
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

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_maybe_statevar_arg_pos_0_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_maybe_statevar_arg_pos_0_2 };

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_maybe_statevar_arg_pos_0_1[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_maybe_statevar_arg_pos_0_0 };

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_maybe_statevar_arg_pos_0_2[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_maybe_statevar_arg_pos_0_1 };

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_maybe_statevar_arg_pos_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_maybe_statevar_arg_pos_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_maybe_statevar_arg_pos_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_maybe_statevar_arg_pos_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_maybe_statevar_arg_pos_0[3] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_maybe_statevar_arg_pos_0_1,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_maybe_statevar_arg_pos_0_0,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_maybe_statevar_arg_pos_0_2
};

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_maybe_statevar_arg_pos_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_maybe_statevar_arg_pos_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____maybe_statevar_arg_pos_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____maybe_statevar_arg_pos_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "maybe_statevar_arg_pos",
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_maybe_statevar_arg_pos_0 },
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_maybe_statevar_arg_pos_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_maybe_statevar_arg_pos_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__one_or_more__ti_one_or_more_1hlds__make_hlds__state_var__type_ctor_info_maybe_statevar_arg_pos_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_maybe_statevar_arg_pos_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0one_or_more__ti_one_or_more_1hlds__make_hlds__state_var__type_ctor_info_maybe_statevar_arg_pos_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__make_hlds__state_var__one_or_more__ti_one_or_more_1hlds__make_hlds__state_var__type_ctor_info_maybe_statevar_arg_pos_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_new_statevar_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____new_statevar_map_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____new_statevar_map_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "new_statevar_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0one_or_more__ti_one_or_more_1hlds__make_hlds__state_var__type_ctor_info_maybe_statevar_arg_pos_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0 = {
  (MR_String) "roc_lambda",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_ordinal_ordered_readonly_context_kind_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0 };

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_readonly_context_kind_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_readonly_context_kind_0_0 };

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_readonly_context_kind_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_readonly_context_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "readonly_context_kind",
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_readonly_context_kind_0 },
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_ordinal_ordered_readonly_context_kind_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_readonly_context_kind_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0 = {
  (MR_String) "name_initial",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1 = {
  (MR_String) "name_middle",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2 = {
  (MR_String) "name_final",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_ordinal_ordered_state_var_name_source_0[3] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_state_var_name_source_0[3] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_2,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_0,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_functor_desc_state_var_name_source_0_1
};

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_state_var_name_source_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_state_var_name_source_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____state_var_name_source_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____state_var_name_source_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "state_var_name_source",
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_name_ordered_state_var_name_source_0 },
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__enum_ordinal_ordered_state_var_name_source_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_state_var_name_source_0,

};

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_inner_atomic_scope_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0)
};

static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_inner_atomic_scope_info_0_0[3] = {
  (MR_String) "siasi_state_var",
  (MR_String) "siasi_di_var",
  (MR_String) "siasi_state_before"
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_inner_atomic_scope_info_0_0 = {
  (MR_String) "svar_inner_atomic_scope_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_inner_atomic_scope_info_0_0,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_inner_atomic_scope_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_inner_atomic_scope_info_0_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_inner_atomic_scope_info_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_inner_atomic_scope_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_inner_atomic_scope_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_inner_atomic_scope_info_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_inner_atomic_scope_info_0_0 };

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_inner_atomic_scope_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_inner_atomic_scope_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_inner_atomic_scope_info",
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_inner_atomic_scope_info_0 },
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_inner_atomic_scope_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_inner_atomic_scope_info_0,

};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_outer_atomic_scope_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0)
};

static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_outer_atomic_scope_info_0_0[3] = {
  (MR_String) "soasi_state_var",
  (MR_String) "soasi_before_status",
  (MR_String) "soasi_after_status"
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_0 = {
  (MR_String) "svar_outer_atomic_scope_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_outer_atomic_scope_info_0_0,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_outer_atomic_scope_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_1 = {
  (MR_String) "no_svar_outer_atomic_scope_info",
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

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_1 };

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_1[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_outer_atomic_scope_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_outer_atomic_scope_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_outer_atomic_scope_info_0[2] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_1,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_outer_atomic_scope_info_0_0
};

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_outer_atomic_scope_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_outer_atomic_scope_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_outer_atomic_scope_info",
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_outer_atomic_scope_info_0 },
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_outer_atomic_scope_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_outer_atomic_scope_info_0,

};

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_state_0[1] = { (MR_Integer) 0 };

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__make_hlds__state_var__type_ctor_info_svar_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0)
  }
};

static const MR_NotagFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__notag_functor_desc_svar_state_0 = {
  (MR_String) "svar_state",
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__make_hlds__state_var__type_ctor_info_svar_status_0),
  (MR_String) "state_status_map",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_state_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_state_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_state",
  { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__notag_functor_desc_svar_state_0 },
  { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__notag_functor_desc_svar_state_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_state_0,

};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_0 = {
  (MR_String) "status_unknown",
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

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_1 = {
  (MR_String) "status_unknown_updated",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_2[3] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_readonly_context_kind_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_2 = {
  (MR_String) "status_known_ro",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_3[1] = { (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_3 = {
  (MR_String) "status_known",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_4[2] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_4 = {
  (MR_String) "status_known_updated",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_status_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_0 };

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_1[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_1 };

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_2[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_2 };

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_3[2] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_3,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_4
};

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_status_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_status_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_status_0[5] = {
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_3,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_2,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_4,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_0,
  &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_status_0_1
};

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_status_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_status_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_status_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_status",
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_status_0 },
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_status_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_status_0,

};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__state_var__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&hlds__make_hlds__state_var__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_store_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_ucounter_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
};

static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_store_0_0[4] = {
  (MR_String) "store_next_goal_id",
  (MR_String) "store_final_remap",
  (MR_String) "store_last_id_map",
  (MR_String) "store_missing_init_specs"
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_store_0_0 = {
  (MR_String) "svar_store",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_svar_store_0_0,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_svar_store_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_store_0_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_store_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_store_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_svar_store_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_store_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_svar_store_0_0 };

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_store_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____svar_store_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____svar_store_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "svar_store",
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_svar_store_0 },
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_svar_store_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_svar_store_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__state_var__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_unravel_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__state_var__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
};

static const MR_ConstString hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_unravel_info_0_0[6] = {
  (MR_String) "ui_module_info",
  (MR_String) "ui_fgt_threshold",
  (MR_String) "ui_qual_info",
  (MR_String) "ui_varset",
  (MR_String) "ui_state_var_store",
  (MR_String) "ui_error_specs"
};

static const MR_DuFunctorDesc hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_unravel_info_0_0 = {
  (MR_String) "unravel_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_types_unravel_info_0_0,
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__field_names_unravel_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_unravel_info_0_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_unravel_info_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_unravel_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_stag_ordered_unravel_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_unravel_info_0[1] = { &hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_functor_desc_unravel_info_0_0 };

static const MR_Integer hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_unravel_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__state_var____Unify____unravel_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__state_var____Compare____unravel_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.state_var",
  (MR_String) "unravel_info",
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_name_ordered_unravel_info_0 },
  { hlds__make_hlds__state_var__hlds__make_hlds__state_var__du_ptag_ordered_unravel_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__state_var__hlds__make_hlds__state_var__functor_number_map_unravel_info_0,

};

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__delete_unneeded_copy_goals__2440__1_2_p_0(
  MR_Word OrElseInners_91,
  MR_Word HeadVar__2_118)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[5]), ((MR_Box) (OrElseInners_91)), ((MR_Box) (HeadVar__2_118)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__handle_state_vars_in_ite__1615__1_2_p_0(
  MR_Word StatusBefore_76,
  MR_Word StatusAfterThen_78)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(StatusBefore_76, StatusAfterThen_78);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__handle_arm_updated_state_vars__1395__1_2_p_0(
  MR_Word AfterAllArmsStatus_23,
  MR_Word AfterArmStatus_25)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(AfterArmStatus_25, AfterAllArmsStatus_23);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__get_disjuncts_with_empty_states__1283__1_1_p_0(
  MR_Word StatusMapAfterGoal_12)
{
  MR_bool succeeded;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapAfterGoal_12);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1531__1_2_p_0(
  MR_Word SVarsBefore_32,
  MR_Word SVarsAfterElse_35)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[3]), ((MR_Box) (SVarsBefore_32)), ((MR_Box) (SVarsAfterElse_35)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1529__1_2_p_0(
  MR_Word SVarsBefore_32,
  MR_Word SVarsAfterThen_34)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[3]), ((MR_Box) (SVarsBefore_32)), ((MR_Box) (SVarsAfterThen_34)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1527__1_2_p_0(
  MR_Word SVarsBefore_32,
  MR_Word SVarsAfterCond_33)
{
  MR_bool succeeded;

  succeeded = mercury__list__sublist_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), SVarsBefore_32, SVarsAfterCond_33);
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__state_var____Compare____unravel_info_0_0(
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
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__make_hlds__qual_info____Compare____qual_info_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[8]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            hlds__make_hlds__state_var____Compare____svar_store_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____unravel_info_0_0(
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
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = hlds__make_hlds__qual_info____Unify____qual_info_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[8]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = hlds__make_hlds__state_var____Unify____svar_store_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              TypeInfo_20_20 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[7]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_store_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    mercury__counter____Compare____ucounter_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_store_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = mercury__counter____Unify____ucounter_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[7]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_20 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_21 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_20 == CastY_21);
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
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
              MR_Word ArgY3_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 2))));
              MR_Word SubResult1_8;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), &SubResult1_8, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
              succeeded = (SubResult1_8 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_8;
              else
                mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX3_11, ArgY3_12);
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX1_13)), ((MR_Box) (ArgY1_14)));
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                      MR_Word ArgY2_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                      MR_Word SubResult1_17;

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), &SubResult1_17, ((MR_Box) (ArgX1_15)), ((MR_Box) (ArgY1_16)));
                      succeeded = (SubResult1_17 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_17;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_18)), ((MR_Box) (ArgY2_19)));
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer CastX_33 = (MR_Integer) (ArgX2_7);
      MR_Integer CastY_34 = (MR_Integer) (ArgY2_8);

      succeeded = (CastX_33 == CastY_34);
      if (succeeded)
        succeeded = MR_FALSE;
      else
        switch (MR_tag((MR_Word) ArgX2_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            if (((((((((((MR_tag((MR_Word) ArgY2_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ArgY2_8, 0)))) == (MR_Integer) 0)))) || (((MR_tag((MR_Word) ArgY2_8)) == (MR_Integer) 2)))) || (((((MR_tag((MR_Word) ArgY2_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ArgY2_8, 0)))) == (MR_Integer) 1)))))) || (((MR_tag((MR_Word) ArgY2_8)) == (MR_Integer) 1))))
            {
              SubResult2_9 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
              succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) ArgY2_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  SubResult2_9 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(1, ArgX2_7, 0))));
                  MR_Word ArgY1_18 = ((MR_Word) ((MR_hl_field(1, ArgY2_8, 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX1_17)), ((MR_Box) (ArgY1_18)));
                  succeeded = (SubResult2_9 != (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                {
                  SubResult2_9 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) ArgY2_8)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  SubResult2_9 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(2, ArgX2_7, 0))));
                  MR_Word ArgY1_20 = ((MR_Word) ((MR_hl_field(2, ArgY2_8, 0))));
                  MR_Word ArgX3_24 = ((MR_Word) ((MR_hl_field(2, ArgX2_7, 2))));
                  MR_Word ArgY3_25 = ((MR_Word) ((MR_hl_field(2, ArgY2_8, 2))));
                  MR_Word SubResult1_21;

                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), &SubResult1_21, ((MR_Box) (ArgX1_19)), ((MR_Box) (ArgY1_20)));
                  succeeded = (SubResult1_21 != (MR_Integer) 0);
                  if (succeeded)
                  {
                    SubResult2_9 = SubResult1_21;
                    succeeded = (SubResult2_9 != (MR_Integer) 0);
                  }
                  else
                  {
                    mercury__term_context____Compare____term_context_0_0(&SubResult2_9, ArgX3_24, ArgY3_25);
                    succeeded = (SubResult2_9 != (MR_Integer) 0);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  SubResult2_9 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, ArgX2_7, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_tag((MR_Word) ArgY2_8)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      SubResult2_9 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, ArgY2_8, 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ArgX1_26 = ((MR_Word) ((MR_hl_field(3, ArgX2_7, 1))));
                          MR_Word ArgY1_27 = ((MR_Word) ((MR_hl_field(3, ArgY2_8, 1))));

                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX1_26)), ((MR_Box) (ArgY1_27)));
                          succeeded = (SubResult2_9 != (MR_Integer) 0);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          SubResult2_9 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                switch (MR_tag((MR_Word) ArgY2_8)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      SubResult2_9 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, ArgY2_8, 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          SubResult2_9 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgX1_28 = ((MR_Word) ((MR_hl_field(3, ArgX2_7, 1))));
                          MR_Word ArgY1_29 = ((MR_Word) ((MR_hl_field(3, ArgY2_8, 1))));
                          MR_Word ArgX2_31 = ((MR_Word) ((MR_hl_field(3, ArgX2_7, 2))));
                          MR_Word ArgY2_32 = ((MR_Word) ((MR_hl_field(3, ArgY2_8, 2))));
                          MR_Word SubResult1_30;

                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), &SubResult1_30, ((MR_Box) (ArgX1_28)), ((MR_Box) (ArgY1_29)));
                          succeeded = (SubResult1_30 != (MR_Integer) 0);
                          if (succeeded)
                          {
                            SubResult2_9 = SubResult1_30;
                            succeeded = (SubResult2_9 != (MR_Integer) 0);
                          }
                          else
                          {
                            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_31)), ((MR_Box) (ArgY2_32)));
                            succeeded = (SubResult2_9 != (MR_Integer) 0);
                          }
                        }
                        break;
                    }
                    break;
                }
                break;
            }
            break;
        }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer CastX_57 = (MR_Integer) (ArgX3_10);
        MR_Integer CastY_58 = (MR_Integer) (ArgY3_11);

        succeeded = (CastX_57 == CastY_58);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          switch (MR_tag((MR_Word) ArgX3_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) ArgY3_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) ArgY3_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ArgX1_41 = ((MR_Word) ((MR_hl_field(1, ArgX3_10, 0))));
                    MR_Word ArgY1_42 = ((MR_Word) ((MR_hl_field(1, ArgY3_11, 0))));

                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX1_41)), ((MR_Box) (ArgY1_42)));
                  }
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) ArgY3_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ArgX1_43 = ((MR_Word) ((MR_hl_field(2, ArgX3_10, 0))));
                    MR_Word ArgY1_44 = ((MR_Word) ((MR_hl_field(2, ArgY3_11, 0))));
                    MR_Word ArgX3_48 = ((MR_Word) ((MR_hl_field(2, ArgX3_10, 2))));
                    MR_Word ArgY3_49 = ((MR_Word) ((MR_hl_field(2, ArgY3_11, 2))));
                    MR_Word SubResult1_45;

                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), &SubResult1_45, ((MR_Box) (ArgX1_43)), ((MR_Box) (ArgY1_44)));
                    succeeded = (SubResult1_45 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult1_45;
                    else
                      mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX3_48, ArgY3_49);
                  }
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, ArgX3_10, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_tag((MR_Word) ArgY3_11)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) ((MR_hl_field(3, ArgY3_11, 0))))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word ArgX1_50 = ((MR_Word) ((MR_hl_field(3, ArgX3_10, 1))));
                            MR_Word ArgY1_51 = ((MR_Word) ((MR_hl_field(3, ArgY3_11, 1))));

                            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX1_50)), ((MR_Box) (ArgY1_51)));
                          }
                          break;
                        case (MR_Integer) 1:
                          *HeadVar__1_1 = (MR_Integer) 1;
                          break;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  switch (MR_tag((MR_Word) ArgY3_11)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) ((MR_hl_field(3, ArgY3_11, 0))))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *HeadVar__1_1 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word ArgX1_52 = ((MR_Word) ((MR_hl_field(3, ArgX3_10, 1))));
                            MR_Word ArgY1_53 = ((MR_Word) ((MR_hl_field(3, ArgY3_11, 1))));
                            MR_Word ArgX2_55 = ((MR_Word) ((MR_hl_field(3, ArgX3_10, 2))));
                            MR_Word ArgY2_56 = ((MR_Word) ((MR_hl_field(3, ArgY3_11, 2))));
                            MR_Word SubResult1_54;

                            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), &SubResult1_54, ((MR_Box) (ArgX1_52)), ((MR_Box) (ArgY1_53)));
                            succeeded = (SubResult1_54 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult1_54;
                            else
                              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_55)), ((MR_Box) (ArgY2_56)));
                          }
                          break;
                      }
                      break;
                  }
                  break;
              }
              break;
          }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_10 == CastX_9);
  }
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_Word ArgY3_8;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      ArgY3_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      TypeInfo_13_13 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(ArgX3_7, ArgY3_8);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        hlds__make_hlds__state_var____Compare____svar_state_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = hlds__make_hlds__state_var____Unify____svar_state_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____state_var_name_source_0_0(
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
hlds__make_hlds__state_var____Unify____state_var_name_source_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0(
  MR_Word * HeadVar__1_1)
{
  hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

static void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_116_97_116_101_95_118_97_114_95_95_114_101_97_100_111_110_108_121_95_99_111_110_116_101_120_116_95_107_105_110_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
hlds__make_hlds__state_var____Compare____new_statevar_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____new_statevar_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__state_var____Compare____maybe_statevar_arg_pos_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Unsigned ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Unsigned ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))));

              succeeded = (ArgX1_4 < ArgY1_5);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_4 > ArgY1_5);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 2:
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
              MR_Unsigned ArgX1_6 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Unsigned ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, 0))));

              succeeded = (ArgX1_6 < ArgY1_7);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_6 > ArgY1_7);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____maybe_statevar_arg_pos_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_8 == CastX_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Unsigned ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Unsigned ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Unsigned ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Unsigned ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____last_id_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____last_id_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0(
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
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    hlds__hlds_goal____Compare____hlds_goal_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      hlds__make_hlds__state_var____Compare____svar_state_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_state_0_0(
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
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0(
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
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = hlds__make_hlds__state_var____Unify____svar_state_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_state_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[5]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var__report_unneeded_svar_in_lambda_8_p_0(
  MR_Word Context_9,
  MR_Word Modes_10,
  MR_Word ParseTreeGoal_11,
  MR_Word GoalVarSVarNames_12,
  MR_Unsigned ArgNum_13,
  MR_Word SVarArgDesc_14,
  MR_Word STATE_VARIABLE_UrInfo_0_30,
  MR_Word * STATE_VARIABLE_UrInfo_31)
{
  MR_bool succeeded;
  MR_Word InitOrFinal_16 = ((MR_Word) ((MR_hl_field(0, SVarArgDesc_14, 0))));
  MR_String SVarName_17 = ((MR_String) ((MR_hl_field(0, SVarArgDesc_14, 1))));

  switch (MR_tag((MR_Word) InitOrFinal_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(InitOrFinal_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Pieces_174;
            MR_Word Spec_176;
            MR_Word Var_178;
            MR_Word Var_179;
            MR_Word Var_180;
            MR_Word Var_181;
            MR_String Var_182;
            MR_Word Var_184;
            MR_Word Var_186;
            MR_Word Var_187;

            Var_182 = mercury__string__f_43_43_2_f_0((MR_String) "!.", SVarName_17);
            {
              Var_181 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_181, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_181, 1) = ((MR_Box) (Var_182));
            }
            {
              Var_180 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_180, 0) = ((MR_Box) (Var_181));
              MR_hl_field(1, Var_180, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_179 = parse_tree__error_spec__color_as_subject_1_f_0(Var_180);
            Var_187 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[83])));
            Var_186 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_187, (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[87])));
            Var_184 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[81])), Var_186);
            Var_178 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_179, Var_184);
            Pieces_174 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[79])), Var_178);
            {
              Spec_176 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_176, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_unneeded_svar_in_lambda\'/8"));
              MR_hl_field(0, Spec_176, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_3[6])));
              MR_hl_field(0, Spec_176, 2) = ((MR_Box) ((MR_Unsigned) 44U));
              MR_hl_field(0, Spec_176, 3) = ((MR_Box) (Context_9));
              MR_hl_field(0, Spec_176, 4) = ((MR_Box) (Pieces_174));
            }
            hlds__make_hlds__state_var__add_unravel_spec_3_p_0(Spec_176, STATE_VARIABLE_UrInfo_0_30, STATE_VARIABLE_UrInfo_31);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Pieces_19;
            MR_Word Spec_21;
            MR_Word Var_36;
            MR_Word Var_37;
            MR_Word Var_38;
            MR_Word Var_39;
            MR_String Var_40;
            MR_Word Var_42;
            MR_Word Var_47;
            MR_Word Var_48;

            Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "!:", SVarName_17);
            {
              Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_39, 1) = ((MR_Box) (Var_40));
            }
            {
              Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
              MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_37 = parse_tree__error_spec__color_as_subject_1_f_0(Var_38);
            Var_48 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[83])));
            Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[87])));
            Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[81])), Var_47);
            Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_42);
            Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[79])), Var_36);
            {
              Spec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_unneeded_svar_in_lambda\'/8"));
              MR_hl_field(0, Spec_21, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_3[6])));
              MR_hl_field(0, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 44U));
              MR_hl_field(0, Spec_21, 3) = ((MR_Box) (Context_9));
              MR_hl_field(0, Spec_21, 4) = ((MR_Box) (Pieces_19));
            }
            hlds__make_hlds__state_var__add_unravel_spec_3_p_0(Spec_21, STATE_VARIABLE_UrInfo_0_30, STATE_VARIABLE_UrInfo_31);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Unsigned FinalArgNum_23 = ((MR_Unsigned) ((MR_hl_field(1, InitOrFinal_16, 0))));

        succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (SVarName_17)), GoalVarSVarNames_12);
        if (succeeded)
        {
          MR_Word ModuleInfo_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_30, 0))));
          MR_Integer FinalArgNumI_25;
          MR_Integer InitArgNumI_26;
          MR_Word InitArgMode_27;
          MR_Word FinalArgMode_28;
          MR_Box conv0_InitArgMode_27;
          MR_Box conv1_FinalArgMode_28;

          FinalArgNumI_25 = mercury__uint__cast_to_int_1_f_0(FinalArgNum_23);
          InitArgNumI_26 = mercury__uint__cast_to_int_1_f_0(ArgNum_13);
          mercury__list__det_index1_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_10, InitArgNumI_26, &conv0_InitArgMode_27);
          InitArgMode_27 = ((MR_Word) (conv0_InitArgMode_27));
          mercury__list__det_index1_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_10, FinalArgNumI_25, &conv1_FinalArgMode_28);
          FinalArgMode_28 = ((MR_Word) (conv1_FinalArgMode_28));
          succeeded = ((((MR_tag((MR_Word) ParseTreeGoal_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ParseTreeGoal_11, 0)))) == (MR_Integer) 0)));
          succeeded = !(succeeded);
          if (succeeded)
          {
            succeeded = hlds__mode_util__mode_is_free_of_uniqueness_2_p_0(ModuleInfo_24, InitArgMode_27);
            if (succeeded)
              succeeded = hlds__mode_util__mode_is_free_of_uniqueness_2_p_0(ModuleInfo_24, FinalArgMode_28);
          }
          if (succeeded)
          {
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_String Var_74;
            MR_Word Var_77;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Pieces_151;
            MR_Word Spec_153;

            Var_74 = mercury__string__f_43_43_2_f_0((MR_String) "!:", SVarName_17);
            {
              Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_73, 1) = ((MR_Box) (Var_74));
            }
            {
              Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
              MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_71 = parse_tree__error_spec__color_as_subject_1_f_0(Var_72);
            Var_83 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[93])));
            Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[97])));
            Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[91])), Var_82);
            Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, Var_77);
            Pieces_151 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[89])), Var_70);
            {
              Spec_153 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_153, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_unneeded_svar_in_lambda\'/8"));
              MR_hl_field(0, Spec_153, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_3[7])));
              MR_hl_field(0, Spec_153, 2) = ((MR_Box) ((MR_Unsigned) 44U));
              MR_hl_field(0, Spec_153, 3) = ((MR_Box) (Context_9));
              MR_hl_field(0, Spec_153, 4) = ((MR_Box) (Pieces_151));
            }
            hlds__make_hlds__state_var__add_unravel_spec_3_p_0(Spec_153, STATE_VARIABLE_UrInfo_0_30, STATE_VARIABLE_UrInfo_31);
          }
          else
            *STATE_VARIABLE_UrInfo_31 = STATE_VARIABLE_UrInfo_0_30;
        }
        else
        {
          MR_Word Var_105;
          MR_Word Var_106;
          MR_Word Var_107;
          MR_Word Var_108;
          MR_String Var_109;
          MR_Word Var_112;
          MR_Word Var_117;
          MR_Word Var_118;
          MR_Word Var_119;
          MR_Word Var_120;
          MR_String Var_121;
          MR_Word Var_124;
          MR_Word Var_129;
          MR_Word Var_130;
          MR_Word Pieces_160;
          MR_Word Spec_162;

          Var_109 = mercury__string__f_43_43_2_f_0((MR_String) "!.", SVarName_17);
          {
            Var_108 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_108, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_108, 1) = ((MR_Box) (Var_109));
          }
          {
            Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_107, 0) = ((MR_Box) (Var_108));
            MR_hl_field(1, Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_106 = parse_tree__error_spec__color_as_subject_1_f_0(Var_107);
          Var_121 = mercury__string__f_43_43_2_f_0((MR_String) "!:", SVarName_17);
          {
            Var_120 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_120, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_120, 1) = ((MR_Box) (Var_121));
          }
          {
            Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_119, 0) = ((MR_Box) (Var_120));
            MR_hl_field(1, Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_118 = parse_tree__error_spec__color_as_subject_1_f_0(Var_119);
          Var_130 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[93])));
          Var_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_130, (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[107])));
          Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[91])), Var_129);
          Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_118, Var_124);
          Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[101])), Var_117);
          Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_106, Var_112);
          Pieces_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[99])), Var_105);
          {
            Spec_162 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_162, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_unneeded_svar_in_lambda\'/8"));
            MR_hl_field(0, Spec_162, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_3[7])));
            MR_hl_field(0, Spec_162, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(0, Spec_162, 3) = ((MR_Box) (Context_9));
            MR_hl_field(0, Spec_162, 4) = ((MR_Box) (Pieces_160));
          }
          hlds__make_hlds__state_var__add_unravel_spec_3_p_0(Spec_162, STATE_VARIABLE_UrInfo_0_30, STATE_VARIABLE_UrInfo_31);
        }
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__record_statevar_if_unused_6_p_0(
  MR_Word VarSet_7,
  MR_Word LastIdMap_8,
  MR_Word SVar_9,
  MR_Word OoMArgPos_10,
  MR_Word STATE_VARIABLE_UnusedSVarArgMap_0_20,
  MR_Word * STATE_VARIABLE_UnusedSVarArgMap_21)
{
  MR_bool succeeded;
  MR_Word SortedArgPoss_12;
  MR_Word Var_22;
  MR_Unsigned ArgPos_16;
  MR_Word ArgKind_17;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Box conv0_Var_13;

  Var_22 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_maybe_statevar_arg_pos_0), OoMArgPos_10);
  mercury__list__sort_2_p_0((MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_maybe_statevar_arg_pos_0), Var_22, &SortedArgPoss_12);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), LastIdMap_8, ((MR_Box) (SVar_9)), &conv0_Var_13);
  if (succeeded)
    succeeded = MR_TRUE;
  succeeded = !(succeeded);
  if (succeeded)
  {
    succeeded = (SortedArgPoss_12 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_41 = ((MR_Word) ((MR_hl_field(1, SortedArgPoss_12, 0))));
      Var_40 = ((MR_Word) ((MR_hl_field(1, SortedArgPoss_12, 1))));
      if ((Var_40 == (MR_Word) ((MR_Unsigned) 0U)))
        if (((MR_tag((MR_Word) Var_41)) == (MR_Integer) 2))
        {
          ArgPos_16 = ((MR_Unsigned) ((MR_hl_field(2, Var_41, 0))));
          ArgKind_17 = (MR_Word) ((MR_Unsigned) 4U);
          succeeded = MR_TRUE;
        }
        else
        if (((MR_tag((MR_Word) Var_41)) == (MR_Integer) 1))
        {
          ArgPos_16 = ((MR_Unsigned) ((MR_hl_field(1, Var_41, 0))));
          ArgKind_17 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
      else
      {
        MR_Unsigned FinalPos_15;
        MR_Word Var_25;
        MR_Word Var_26;

        succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 1);
        if (succeeded)
        {
          ArgPos_16 = ((MR_Unsigned) ((MR_hl_field(1, Var_41, 0))));
          Var_25 = ((MR_Word) ((MR_hl_field(1, Var_40, 0))));
          Var_26 = ((MR_Word) ((MR_hl_field(1, Var_40, 1))));
          succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 2);
            if (succeeded)
            {
              FinalPos_15 = ((MR_Unsigned) ((MR_hl_field(2, Var_25, 0))));
              {
                ArgKind_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, ArgKind_17, 0) = ((MR_Box) (FinalPos_15));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_String SVarName_18;
    MR_Word SVarArgDesc_19;

    mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_7, SVar_9, &SVarName_18);
    {
      SVarArgDesc_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SVarArgDesc_19, 0) = ((MR_Box) (ArgKind_17));
      MR_hl_field(0, SVarArgDesc_19, 1) = ((MR_Box) (SVarName_18));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_statevar_arg_desc_0), ((MR_Box) (ArgPos_16)), ((MR_Box) (SVarArgDesc_19)), STATE_VARIABLE_UnusedSVarArgMap_0_20, STATE_VARIABLE_UnusedSVarArgMap_21);
  }
  else
    *STATE_VARIABLE_UnusedSVarArgMap_21 = STATE_VARIABLE_UnusedSVarArgMap_0_20;
}

static void MR_CALL 
hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_p_0(
  MR_Word DelayedRenamingToAdd_8,
  MR_Word Goal0_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_NextGoalId_0_21,
  MR_Word * STATE_VARIABLE_NextGoalId_22,
  MR_Word STATE_VARIABLE_DelayedRenamingMap_0_23,
  MR_Word * STATE_VARIABLE_DelayedRenamingMap_24)
{
  MR_bool succeeded;
  MR_Word GoalExpr_13 = ((MR_Word) ((MR_hl_field(0, Goal0_9, 0))));
  MR_Word GoalInfo0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_9, 1))));
  MR_Word GoalId0_15;
  MR_Word DelayedRenaming0_16;
  MR_Box conv0_DelayedRenaming0_16;

  GoalId0_15 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo0_14);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), STATE_VARIABLE_DelayedRenamingMap_0_23, ((MR_Box) (GoalId0_15)), &conv0_DelayedRenaming0_16);
  if (succeeded)
  {
    DelayedRenaming0_16 = ((MR_Word) (conv0_DelayedRenaming0_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word DelayedRenaming_17;

    DelayedRenaming_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[0]), DelayedRenamingToAdd_8, DelayedRenaming0_16);
    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), ((MR_Box) (GoalId0_15)), ((MR_Box) (DelayedRenaming_17)), STATE_VARIABLE_DelayedRenamingMap_0_23, STATE_VARIABLE_DelayedRenamingMap_24);
    *Goal_10 = Goal0_9;
    *STATE_VARIABLE_NextGoalId_22 = STATE_VARIABLE_NextGoalId_0_21;
  }
  else
  {
    MR_Unsigned GoalIdNum_18;
    MR_Word GoalId_19;
    MR_Word GoalInfo_20;

    mercury__counter__uallocate_3_p_0(&GoalIdNum_18, STATE_VARIABLE_NextGoalId_0_21, STATE_VARIABLE_NextGoalId_22);
    GoalId_19 = (MR_Word) (GoalIdNum_18);
    hlds__hlds_goal__goal_info_set_goal_id_3_p_0(GoalId_19, GoalInfo0_14, &GoalInfo_20);
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), ((MR_Box) (GoalId_19)), ((MR_Box) (DelayedRenamingToAdd_8)), STATE_VARIABLE_DelayedRenamingMap_0_23, STATE_VARIABLE_DelayedRenamingMap_24);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_13));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_20));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__reset_updated_status_2_p_0(
  MR_Word STATE_VARIABLE_Status_0_10,
  MR_Word * STATE_VARIABLE_Status_11)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_Status_0_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Status_11 = STATE_VARIABLE_Status_0_10;
      break;
    case (MR_Integer) 1:
      {
        MR_Word NewProgVar_8 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Status_0_10, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Status_11 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, base, 1) = ((MR_Box) (NewProgVar_8));
        }
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Status_11 = STATE_VARIABLE_Status_0_10;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, STATE_VARIABLE_Status_0_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Status_11 = STATE_VARIABLE_Status_0_10;
          break;
        case (MR_Integer) 1:
          {
            MR_Word NewProgVar_14 = ((MR_Word) ((MR_hl_field(3, STATE_VARIABLE_Status_0_10, 2))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Status_11 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (NewProgVar_14));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_state_pairs_in_clause_2_p_0(
  MR_Word ItemClause0_3,
  MR_Word * ItemClause_4)
{
  MR_Word PredOrFunc_5 = ((MR_Unsigned) ((MR_hl_field(0, ItemClause0_3, 0))) & (MR_Integer) 1);
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, ItemClause0_3, 1))));
  MR_Word Args0_7 = ((MR_Word) ((MR_hl_field(0, ItemClause0_3, 2))));
  MR_Word VarSet_8 = ((MR_Word) ((MR_hl_field(0, ItemClause0_3, 3))));
  MR_Word MaybeBody_9 = ((MR_Word) ((MR_hl_field(0, ItemClause0_3, 4))));
  MR_Word Context_10 = ((MR_Word) ((MR_hl_field(0, ItemClause0_3, 5))));
  MR_Word SeqNum_11 = ((MR_Word) ((MR_hl_field(0, ItemClause0_3, 6))));
  MR_Word Args_12;

  hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(Args0_7, &Args_12);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *ItemClause_4 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (SymName_6));
    MR_hl_field(0, base, 2) = ((MR_Box) (Args_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (VarSet_8));
    MR_hl_field(0, base, 4) = ((MR_Box) (MaybeBody_9));
    MR_hl_field(0, base, 5) = ((MR_Box) (Context_10));
    MR_hl_field(0, base, 6) = ((MR_Box) (SeqNum_11));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__is_prog_var_for_state_var_3_p_0(
  MR_Word VarSet_4,
  MR_String SVarName_5,
  MR_Word Var_6)
{
  MR_bool succeeded;
  MR_String VarName_7;
  MR_String AfterStdPrefix_8;
  MR_String Suffix_9;
  MR_String Var_12;

  succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_4, Var_6, &VarName_7);
  if (succeeded)
  {
    Var_12 = (MR_String) "STATE_VARIABLE_";
    succeeded = mercury__string__remove_prefix_3_p_0(Var_12, VarName_7, &AfterStdPrefix_8);
    if (succeeded)
    {
      succeeded = mercury__string__remove_prefix_3_p_0(SVarName_5, AfterStdPrefix_8, &Suffix_9);
      if (succeeded)
      {
        succeeded = (strcmp(Suffix_9, (MR_String) "") == 0);
        if (!(succeeded))
        {
          MR_String SuffixAfterUnderscore_10;
          MR_Integer _N_11;

          succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "_", Suffix_9, &SuffixAfterUnderscore_10);
          if (succeeded)
            succeeded = mercury__string__to_int_2_p_0(SuffixAfterUnderscore_10, &_N_11);
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__state_var__report_svar_unify_error_6_p_0(
  MR_Word Context_7,
  MR_Word StateVar_8,
  MR_Word STATE_VARIABLE_SVarState_0_20,
  MR_Word * STATE_VARIABLE_SVarState_21,
  MR_Word STATE_VARIABLE_UrInfo_0_22,
  MR_Word * STATE_VARIABLE_UrInfo_23)
{
  MR_bool succeeded;
  MR_Word VarSet_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_22, 3))));
  MR_String Name_12;
  MR_Word Pieces_13;
  MR_Word Spec_14;
  MR_Word StatusMap0_15;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_String Var_32;
  MR_Word Var_35;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_String Var_49;
  MR_Word Var_52;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_String Var_61;
  MR_Word STATE_VARIABLE_UrInfo_1_73;
  MR_Word Specs0_86;
  MR_Word Specs_87;
  MR_Word Var_88;
  MR_Integer Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word OldStatus_16;
  MR_Box conv0_OldStatus_16;

  Name_12 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_11, StateVar_8);
  Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "!", Name_12);
  {
    Var_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_31, 0) = ((MR_Box) (Var_32));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_29 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_30);
  Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "!.", Name_12);
  {
    Var_48 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_48, 0) = ((MR_Box) (Var_49));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_46 = parse_tree__error_spec__color_as_correct_1_f_0(Var_47);
  Var_61 = mercury__string__f_43_43_2_f_0((MR_String) "!:", Name_12);
  {
    Var_60 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_60, 0) = ((MR_Box) (Var_61));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[17])));
  }
  Var_58 = parse_tree__error_spec__color_as_correct_1_f_0(Var_59);
  Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[18])));
  Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[35])), Var_57);
  Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_46, Var_52);
  Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[40])), Var_45);
  Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_35);
  Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[28])), Var_28);
  {
    Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_svar_unify_error\'/6"));
    MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_7));
    MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_13));
  }
  Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_22, 0))));
  Var_89 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_22, 1))));
  Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_22, 2))));
  Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_22, 3))));
  Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_22, 4))));
  Specs0_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_22, 5))));
  {
    Specs_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_87, 0) = ((MR_Box) (Spec_14));
    MR_hl_field(1, Specs_87, 1) = ((MR_Box) (Specs0_86));
  }
  {
    STATE_VARIABLE_UrInfo_1_73 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_UrInfo_1_73, 0) = ((MR_Box) (Var_88));
    MR_hl_field(0, STATE_VARIABLE_UrInfo_1_73, 1) = ((MR_Box) (Var_89));
    MR_hl_field(0, STATE_VARIABLE_UrInfo_1_73, 2) = ((MR_Box) (Var_90));
    MR_hl_field(0, STATE_VARIABLE_UrInfo_1_73, 3) = ((MR_Box) (Var_91));
    MR_hl_field(0, STATE_VARIABLE_UrInfo_1_73, 4) = ((MR_Box) (Var_92));
    MR_hl_field(0, STATE_VARIABLE_UrInfo_1_73, 5) = ((MR_Box) (Specs_87));
  }
  StatusMap0_15 = (MR_Word) (STATE_VARIABLE_SVarState_0_20);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMap0_15, ((MR_Box) (StateVar_8)), &conv0_OldStatus_16);
  if (succeeded)
  {
    OldStatus_16 = ((MR_Word) (conv0_OldStatus_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    succeeded = (OldStatus_16 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    *STATE_VARIABLE_UrInfo_23 = STATE_VARIABLE_UrInfo_1_73;
    *STATE_VARIABLE_SVarState_21 = STATE_VARIABLE_SVarState_0_20;
  }
  else
  {
    MR_Word Var_17;
    MR_Word Status_18;
    MR_Word StatusMap_19;

    hlds__make_hlds__state_var__new_state_var_instance_5_p_0(StateVar_8, (MR_Integer) 0, &Var_17, STATE_VARIABLE_UrInfo_1_73, STATE_VARIABLE_UrInfo_23);
    {
      Status_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Status_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Status_18, 1) = ((MR_Box) (Var_17));
    }
    mercury__map__set_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (StateVar_8)), ((MR_Box) (Status_18)), StatusMap0_15, &StatusMap_19);
    *STATE_VARIABLE_SVarState_21 = (MR_Word) (StatusMap_19);
  }
}

void MR_CALL 
hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_4_p_0(
  MR_Word Context_5,
  MR_Word StateVar_6,
  MR_Word STATE_VARIABLE_UrInfo_0_10,
  MR_Word * STATE_VARIABLE_UrInfo_11)
{
  MR_Word VarSet_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 3))));
  MR_Word Spec_9;
  MR_Word Specs0_17;
  MR_Word Specs_18;
  MR_Word Var_19;
  MR_Integer Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;

  Spec_9 = hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_raw_3_f_0(Context_5, VarSet_8, StateVar_6);
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 0))));
  Var_20 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 1))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 2))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 3))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 4))));
  Specs0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 5))));
  {
    Specs_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_18, 0) = ((MR_Box) (Spec_9));
    MR_hl_field(1, Specs_18, 1) = ((MR_Box) (Specs0_17));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 5) = ((MR_Box) (Specs_18));
  }
}

MR_Word MR_CALL 
hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_raw_3_f_0(
  MR_Word Context_5,
  MR_Word VarSet_6,
  MR_Word StateVar_7)
{
  MR_Word Spec_8;
  MR_String Name_9;
  MR_Word Pieces_10;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_String Var_19;
  MR_Word Var_22;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_String Var_36;
  MR_Word Var_39;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_String Var_48;

  Name_9 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, StateVar_7);
  Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "!", Name_9);
  {
    Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_18, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_16 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_17);
  Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "!.", Name_9);
  {
    Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_35, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_33 = parse_tree__error_spec__color_as_correct_1_f_0(Var_34);
  Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "!:", Name_9);
  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_47, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[17])));
  }
  Var_45 = parse_tree__error_spec__color_as_correct_1_f_0(Var_46);
  Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[18])));
  Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[35])), Var_44);
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, Var_39);
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[33])), Var_32);
  Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_16, Var_22);
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[28])), Var_15);
  {
    Spec_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140hlds.make_hlds.state_var.report_illegal_bang_svar_lambda_arg_raw\'/3"));
    MR_hl_field(0, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_8, 3) = ((MR_Box) (Context_5));
    MR_hl_field(0, Spec_8, 4) = ((MR_Box) (Pieces_10));
  }
  return Spec_8;
}

void MR_CALL 
hlds__make_hlds__state_var__report_illegal_func_svar_result_4_p_0(
  MR_Word Context_5,
  MR_Word StateVar_6,
  MR_Word STATE_VARIABLE_UrInfo_0_10,
  MR_Word * STATE_VARIABLE_UrInfo_11)
{
  MR_Word VarSet_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 3))));
  MR_Word Spec_9;
  MR_Word Specs0_17;
  MR_Word Specs_18;
  MR_Word Var_19;
  MR_Integer Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;

  Spec_9 = hlds__make_hlds__state_var__report_illegal_func_svar_result_raw_3_f_0(Context_5, VarSet_8, StateVar_6);
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 0))));
  Var_20 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 1))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 2))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 3))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 4))));
  Specs0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 5))));
  {
    Specs_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_18, 0) = ((MR_Box) (Spec_9));
    MR_hl_field(1, Specs_18, 1) = ((MR_Box) (Specs0_17));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 5) = ((MR_Box) (Specs_18));
  }
}

MR_Word MR_CALL 
hlds__make_hlds__state_var__report_illegal_func_svar_result_raw_3_f_0(
  MR_Word Context_5,
  MR_Word VarSet_6,
  MR_Word StateVar_7)
{
  MR_Word Spec_8;
  MR_String Name_9;
  MR_Word Pieces_10;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_String Var_19;
  MR_Word Var_22;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_String Var_31;

  Name_9 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, StateVar_7);
  Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "!", Name_9);
  {
    Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_18, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_16 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_17);
  Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "!:", Name_9);
  {
    Var_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_30, 0) = ((MR_Box) (Var_31));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[17])));
  }
  Var_28 = parse_tree__error_spec__color_as_correct_1_f_0(Var_29);
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[18])));
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[26])), Var_27);
  Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_16, Var_22);
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[24])), Var_15);
  {
    Spec_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140hlds.make_hlds.state_var.report_illegal_func_svar_result_raw\'/3"));
    MR_hl_field(0, Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_8, 3) = ((MR_Box) (Context_5));
    MR_hl_field(0, Spec_8, 4) = ((MR_Box) (Pieces_10));
  }
  return Spec_8;
}

MR_bool MR_CALL 
hlds__make_hlds__state_var__is_term_a_bang_state_pair_3_p_0(
  MR_Word ArgTerm_4,
  MR_Word * StateVar_5,
  MR_Word * Context_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ArgTerm_4)) == (MR_Integer) 0);
  MR_Word Var_8;
  MR_String Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;

  if (succeeded)
  {
    Var_8 = ((MR_Word) ((MR_hl_field(0, ArgTerm_4, 0))));
    Var_10 = ((MR_Word) ((MR_hl_field(0, ArgTerm_4, 1))));
    succeeded = ((MR_tag((MR_Word) Var_8)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_9 = ((MR_String) ((MR_hl_field(0, Var_8, 0))));
      succeeded = (strcmp(Var_9, (MR_String) "!") == 0);
      if (succeeded)
      {
        succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_11 = ((MR_Word) ((MR_hl_field(1, Var_10, 0))));
          Var_12 = ((MR_Word) ((MR_hl_field(1, Var_10, 1))));
          succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 1);
          if (succeeded)
          {
            *StateVar_5 = ((MR_Word) ((MR_hl_field(1, Var_11, 0))));
            *Context_6 = ((MR_Word) ((MR_hl_field(1, Var_11, 1))));
            succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__make_hlds__state_var__illegal_state_var_func_result_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ArgTerms_5,
  MR_Word * StateVar_6,
  MR_Word * Context_7)
{
  MR_bool succeeded = (HeadVar__1_1 == (MR_Integer) 1);
  MR_Word TypeInfo_9_9;
  MR_Word LastArgTerm_8;
  MR_Word Var_11;
  MR_String Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Box conv0_LastArgTerm_8;

  if (succeeded)
  {
    TypeInfo_9_9 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[0]);
    succeeded = mercury__list__last_2_p_0(TypeInfo_9_9, ArgTerms_5, &conv0_LastArgTerm_8);
    if (succeeded)
    {
      LastArgTerm_8 = ((MR_Word) (conv0_LastArgTerm_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) LastArgTerm_8)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_11 = ((MR_Word) ((MR_hl_field(0, LastArgTerm_8, 0))));
        Var_13 = ((MR_Word) ((MR_hl_field(0, LastArgTerm_8, 1))));
        succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_12 = ((MR_String) ((MR_hl_field(0, Var_11, 0))));
          succeeded = (strcmp(Var_12, (MR_String) "!") == 0);
          if (succeeded)
          {
            succeeded = (Var_13 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_14 = ((MR_Word) ((MR_hl_field(1, Var_13, 0))));
              Var_15 = ((MR_Word) ((MR_hl_field(1, Var_13, 1))));
              succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_Integer) 1);
                if (succeeded)
                {
                  *StateVar_6 = ((MR_Word) ((MR_hl_field(1, Var_14, 0))));
                  *Context_7 = ((MR_Word) ((MR_hl_field(1, Var_14, 1))));
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
hlds__make_hlds__state_var__replace_any_dot_colon_state_var_in_terms_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_SVarState_0_3,
  MR_Word * STATE_VARIABLE_SVarState_4,
  MR_Word STATE_VARIABLE_UrInfo_0_5,
  MR_Word * STATE_VARIABLE_UrInfo_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UrInfo_6 = STATE_VARIABLE_UrInfo_0_5;
    *STATE_VARIABLE_SVarState_4 = STATE_VARIABLE_SVarState_0_3;
  }
  else
  {
    MR_Word Arg0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Args0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Arg_15;
    MR_Word Args_16;
    MR_Word STATE_VARIABLE_SVarState_1_23;
    MR_Word STATE_VARIABLE_UrInfo_1_24;

    hlds__make_hlds__state_var__replace_any_dot_colon_state_var_in_term_6_p_0(Arg0_13, &Arg_15, STATE_VARIABLE_SVarState_0_3, &STATE_VARIABLE_SVarState_1_23, STATE_VARIABLE_UrInfo_0_5, &STATE_VARIABLE_UrInfo_1_24);
    hlds__make_hlds__state_var__replace_any_dot_colon_state_var_in_terms_6_p_0(Args0_14, &Args_16, STATE_VARIABLE_SVarState_1_23, STATE_VARIABLE_SVarState_4, STATE_VARIABLE_UrInfo_1_24, STATE_VARIABLE_UrInfo_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Arg_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (Args_16));
    }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__replace_any_dot_colon_state_var_in_term_6_p_0(
  MR_Word Arg0_7,
  MR_Word * Arg_8,
  MR_Word STATE_VARIABLE_SVarState_0_16,
  MR_Word * STATE_VARIABLE_SVarState_17,
  MR_Word STATE_VARIABLE_UrInfo_0_18,
  MR_Word * STATE_VARIABLE_UrInfo_19)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Arg0_7)) == (MR_Integer) 0);
  MR_Word StateVar_11;
  MR_Word Context_13;
  MR_Word Var_20;
  MR_String Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;

  if (succeeded)
  {
    Var_20 = ((MR_Word) ((MR_hl_field(0, Arg0_7, 0))));
    Var_22 = ((MR_Word) ((MR_hl_field(0, Arg0_7, 1))));
    Context_13 = ((MR_Word) ((MR_hl_field(0, Arg0_7, 2))));
    succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_21 = ((MR_String) ((MR_hl_field(0, Var_20, 0))));
      succeeded = (strcmp(Var_21, (MR_String) "!.") == 0);
      if (succeeded)
      {
        succeeded = (Var_22 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_23 = ((MR_Word) ((MR_hl_field(1, Var_22, 0))));
          Var_24 = ((MR_Word) ((MR_hl_field(1, Var_22, 1))));
          succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 1);
          if (succeeded)
          {
            StateVar_11 = ((MR_Word) ((MR_hl_field(1, Var_23, 0))));
            succeeded = (Var_24 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_14;

    hlds__make_hlds__state_var__lookup_dot_state_var_7_p_0(Context_13, StateVar_11, &Var_14, STATE_VARIABLE_SVarState_0_16, STATE_VARIABLE_SVarState_17, STATE_VARIABLE_UrInfo_0_18, STATE_VARIABLE_UrInfo_19);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Arg_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (Context_13));
    }
  }
  else
  {
    MR_Word StateVar_35;
    MR_Word Context_36;
    MR_Word Var_27;
    MR_String Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;

    succeeded = ((MR_tag((MR_Word) Arg0_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_27 = ((MR_Word) ((MR_hl_field(0, Arg0_7, 0))));
      Var_29 = ((MR_Word) ((MR_hl_field(0, Arg0_7, 1))));
      Context_36 = ((MR_Word) ((MR_hl_field(0, Arg0_7, 2))));
      succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_28 = ((MR_String) ((MR_hl_field(0, Var_27, 0))));
        succeeded = (strcmp(Var_28, (MR_String) "!:") == 0);
        if (succeeded)
        {
          succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_30 = ((MR_Word) ((MR_hl_field(1, Var_29, 0))));
            Var_31 = ((MR_Word) ((MR_hl_field(1, Var_29, 1))));
            succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 1);
            if (succeeded)
            {
              StateVar_35 = ((MR_Word) ((MR_hl_field(1, Var_30, 0))));
              succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Var_34;

      hlds__make_hlds__state_var__lookup_colon_state_var_7_p_0(Context_36, StateVar_35, &Var_34, STATE_VARIABLE_SVarState_0_16, STATE_VARIABLE_SVarState_17, STATE_VARIABLE_UrInfo_0_18, STATE_VARIABLE_UrInfo_19);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Arg_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_34));
        MR_hl_field(1, base, 1) = ((MR_Box) (Context_36));
      }
    }
    else
    {
      *Arg_8 = Arg0_7;
      *STATE_VARIABLE_UrInfo_19 = STATE_VARIABLE_UrInfo_0_18;
      *STATE_VARIABLE_SVarState_17 = STATE_VARIABLE_SVarState_0_16;
    }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__lookup_colon_state_var_7_p_0(
  MR_Word Context_8,
  MR_Word StateVar_9,
  MR_Word * Var_10,
  MR_Word STATE_VARIABLE_SVarState_0_21,
  MR_Word * STATE_VARIABLE_SVarState_22,
  MR_Word STATE_VARIABLE_UrInfo_0_23,
  MR_Word * STATE_VARIABLE_UrInfo_24)
{
  MR_bool succeeded;
  MR_Word StatusMap0_13 = (MR_Word) (STATE_VARIABLE_SVarState_0_21);
  MR_Word Status_14;
  MR_Box conv0_Status_14;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMap0_13, ((MR_Box) (StateVar_9)), &conv0_Status_14);
  if (succeeded)
  {
    Status_14 = ((MR_Word) (conv0_Status_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    switch (MR_tag((MR_Word) Status_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word StatusMap_15;
          MR_Word Var_27;

          hlds__make_hlds__state_var__new_state_var_instance_5_p_0(StateVar_9, (MR_Integer) 1, Var_10, STATE_VARIABLE_UrInfo_0_23, STATE_VARIABLE_UrInfo_24);
          {
            Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_27, 0) = ((MR_Box) (*Var_10));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (StateVar_9)), ((MR_Box) (Var_27)), StatusMap0_13, &StatusMap_15);
          *STATE_VARIABLE_SVarState_22 = (MR_Word) (StatusMap_15);
        }
        break;
      case (MR_Integer) 1:
        {
          *Var_10 = ((MR_Word) ((MR_hl_field(1, Status_14, 0))));
          *STATE_VARIABLE_SVarState_22 = STATE_VARIABLE_SVarState_0_21;
          *STATE_VARIABLE_UrInfo_24 = STATE_VARIABLE_UrInfo_0_23;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word RO_Context_18 = ((MR_Word) ((MR_hl_field(2, Status_14, 2))));
          MR_Word STATE_VARIABLE_UrInfo_3_33;
          MR_Word Var_36;
          MR_Word StatusMap_41;
          MR_Word OldVar_42 = ((MR_Word) ((MR_hl_field(2, Status_14, 0))));

          hlds__make_hlds__state_var__report_illegal_state_var_update_6_p_0(Context_8, (MR_String) "lambda expression", RO_Context_18, StateVar_9, STATE_VARIABLE_UrInfo_0_23, &STATE_VARIABLE_UrInfo_3_33);
          hlds__make_hlds__state_var__new_state_var_instance_5_p_0(StateVar_9, (MR_Integer) 1, Var_10, STATE_VARIABLE_UrInfo_3_33, STATE_VARIABLE_UrInfo_24);
          {
            Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_36, 1) = ((MR_Box) (OldVar_42));
            MR_hl_field(3, Var_36, 2) = ((MR_Box) (*Var_10));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (StateVar_9)), ((MR_Box) (Var_36)), StatusMap0_13, &StatusMap_41);
          *STATE_VARIABLE_SVarState_22 = (MR_Word) (StatusMap_41);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Status_14, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word OldVar_16 = ((MR_Word) ((MR_hl_field(3, Status_14, 1))));
              MR_Word Var_31;
              MR_Word StatusMap_40;

              hlds__make_hlds__state_var__new_state_var_instance_5_p_0(StateVar_9, (MR_Integer) 1, Var_10, STATE_VARIABLE_UrInfo_0_23, STATE_VARIABLE_UrInfo_24);
              {
                Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_31, 1) = ((MR_Box) (OldVar_16));
                MR_hl_field(3, Var_31, 2) = ((MR_Box) (*Var_10));
              }
              mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (StateVar_9)), ((MR_Box) (Var_31)), StatusMap0_13, &StatusMap_40);
              *STATE_VARIABLE_SVarState_22 = (MR_Word) (StatusMap_40);
            }
            break;
          case (MR_Integer) 1:
            {
              *Var_10 = ((MR_Word) ((MR_hl_field(3, Status_14, 2))));
              *STATE_VARIABLE_SVarState_22 = STATE_VARIABLE_SVarState_0_21;
              *STATE_VARIABLE_UrInfo_24 = STATE_VARIABLE_UrInfo_0_23;
            }
            break;
        }
        break;
    }
  else
  {
    MR_Word VarSet_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_23, 3))));
    MR_String Name_55;
    MR_Word Pieces_56;
    MR_Word Spec_57;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_String Var_66;
    MR_String Var_68;
    MR_Word Specs0_81;
    MR_Word Specs_82;
    MR_Word Var_83;
    MR_Integer Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;

    Name_55 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_54, StateVar_9);
    Var_68 = mercury__string__f_43_43_2_f_0((MR_String) ":", Name_55);
    Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "!", Var_68);
    {
      Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_65, 1) = ((MR_Box) (Var_66));
    }
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_63 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_64);
    Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[46])));
    Pieces_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[44])), Var_62);
    {
      Spec_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_57, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_non_visible_state_var\'/5"));
      MR_hl_field(0, Spec_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_57, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_57, 3) = ((MR_Box) (Context_8));
      MR_hl_field(0, Spec_57, 4) = ((MR_Box) (Pieces_56));
    }
    Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_23, 0))));
    Var_84 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_23, 1))));
    Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_23, 2))));
    Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_23, 3))));
    Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_23, 4))));
    Specs0_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_23, 5))));
    {
      Specs_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Specs_82, 0) = ((MR_Box) (Spec_57));
      MR_hl_field(1, Specs_82, 1) = ((MR_Box) (Specs0_81));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_UrInfo_24 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_83));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_84));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_85));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_86));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_87));
      MR_hl_field(0, base, 5) = ((MR_Box) (Specs_82));
    }
    *Var_10 = StateVar_9;
    *STATE_VARIABLE_SVarState_22 = STATE_VARIABLE_SVarState_0_21;
  }
}

void MR_CALL 
hlds__make_hlds__state_var__lookup_dot_state_var_7_p_0(
  MR_Word Context_8,
  MR_Word StateVar_9,
  MR_Word * Var_10,
  MR_Word STATE_VARIABLE_SVarState_0_20,
  MR_Word * STATE_VARIABLE_SVarState_21,
  MR_Word STATE_VARIABLE_UrInfo_0_22,
  MR_Word * STATE_VARIABLE_UrInfo_23)
{
  MR_bool succeeded;
  MR_Word StatusMap0_13 = (MR_Word) (STATE_VARIABLE_SVarState_0_20);
  MR_Word Status_14;
  MR_Box conv0_Status_14;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMap0_13, ((MR_Box) (StateVar_9)), &conv0_Status_14);
  if (succeeded)
  {
    Status_14 = ((MR_Word) (conv0_Status_14));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    switch (MR_tag((MR_Word) Status_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word StatusMap_15;
          MR_Word STATE_VARIABLE_UrInfo_1_25;
          MR_Word Var_28;
          MR_Word VarSet_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_22, 3))));
          MR_String Name_48;
          MR_Word Pieces_49;
          MR_Word Spec_50;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_String Var_59;
          MR_Word Var_62;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Specs0_84;
          MR_Word Specs_85;
          MR_Word Var_86;
          MR_Integer Var_87;
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Word Var_90;

          Name_48 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_47, StateVar_9);
          Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "!.", Name_48);
          {
            Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_58, 1) = ((MR_Box) (Var_59));
          }
          {
            Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
            MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_56 = parse_tree__error_spec__color_as_subject_1_f_0(Var_57);
          Var_68 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[52])));
          Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[54])));
          Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[50])), Var_67);
          Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, Var_62);
          Pieces_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[48])), Var_55);
          {
            Spec_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_50, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_uninitialized_state_var\'/5"));
            MR_hl_field(0, Spec_50, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_3[8])));
            MR_hl_field(0, Spec_50, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(0, Spec_50, 3) = ((MR_Box) (Context_8));
            MR_hl_field(0, Spec_50, 4) = ((MR_Box) (Pieces_49));
          }
          Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_22, 0))));
          Var_87 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_22, 1))));
          Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_22, 2))));
          Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_22, 3))));
          Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_22, 4))));
          Specs0_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_22, 5))));
          {
            Specs_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Specs_85, 0) = ((MR_Box) (Spec_50));
            MR_hl_field(1, Specs_85, 1) = ((MR_Box) (Specs0_84));
          }
          {
            STATE_VARIABLE_UrInfo_1_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_UrInfo_1_25, 0) = ((MR_Box) (Var_86));
            MR_hl_field(0, STATE_VARIABLE_UrInfo_1_25, 1) = ((MR_Box) (Var_87));
            MR_hl_field(0, STATE_VARIABLE_UrInfo_1_25, 2) = ((MR_Box) (Var_88));
            MR_hl_field(0, STATE_VARIABLE_UrInfo_1_25, 3) = ((MR_Box) (Var_89));
            MR_hl_field(0, STATE_VARIABLE_UrInfo_1_25, 4) = ((MR_Box) (Var_90));
            MR_hl_field(0, STATE_VARIABLE_UrInfo_1_25, 5) = ((MR_Box) (Specs_85));
          }
          hlds__make_hlds__state_var__new_state_var_instance_5_p_0(StateVar_9, (MR_Integer) 1, Var_10, STATE_VARIABLE_UrInfo_1_25, STATE_VARIABLE_UrInfo_23);
          {
            Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_28, 1) = ((MR_Box) (*Var_10));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (StateVar_9)), ((MR_Box) (Var_28)), StatusMap0_13, &StatusMap_15);
          *STATE_VARIABLE_SVarState_21 = (MR_Word) (StatusMap_15);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word NewVar_16 = ((MR_Word) ((MR_hl_field(1, Status_14, 0))));
          MR_Word STATE_VARIABLE_UrInfo_3_31;
          MR_Word Var_34;
          MR_Word StatusMap_38;

          hlds__make_hlds__state_var__report_uninitialized_state_var_5_p_0((MR_Integer) 186, Context_8, StateVar_9, STATE_VARIABLE_UrInfo_0_22, &STATE_VARIABLE_UrInfo_3_31);
          hlds__make_hlds__state_var__new_state_var_instance_5_p_0(StateVar_9, (MR_Integer) 1, Var_10, STATE_VARIABLE_UrInfo_3_31, STATE_VARIABLE_UrInfo_23);
          {
            Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_34, 1) = ((MR_Box) (*Var_10));
            MR_hl_field(3, Var_34, 2) = ((MR_Box) (NewVar_16));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (StateVar_9)), ((MR_Box) (Var_34)), StatusMap0_13, &StatusMap_38);
          *STATE_VARIABLE_SVarState_21 = (MR_Word) (StatusMap_38);
        }
        break;
      case (MR_Integer) 2:
        {
          *Var_10 = ((MR_Word) ((MR_hl_field(2, Status_14, 0))));
          *STATE_VARIABLE_SVarState_21 = STATE_VARIABLE_SVarState_0_20;
          *STATE_VARIABLE_UrInfo_23 = STATE_VARIABLE_UrInfo_0_22;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Status_14, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Var_10 = ((MR_Word) ((MR_hl_field(3, Status_14, 1))));
              *STATE_VARIABLE_SVarState_21 = STATE_VARIABLE_SVarState_0_20;
              *STATE_VARIABLE_UrInfo_23 = STATE_VARIABLE_UrInfo_0_22;
            }
            break;
          case (MR_Integer) 1:
            {
              *Var_10 = ((MR_Word) ((MR_hl_field(3, Status_14, 1))));
              *STATE_VARIABLE_SVarState_21 = STATE_VARIABLE_SVarState_0_20;
              *STATE_VARIABLE_UrInfo_23 = STATE_VARIABLE_UrInfo_0_22;
            }
            break;
        }
        break;
    }
  else
  {
    hlds__make_hlds__state_var__report_non_visible_state_var_5_p_0((MR_String) ".", Context_8, StateVar_9, STATE_VARIABLE_UrInfo_0_22, STATE_VARIABLE_UrInfo_23);
    *Var_10 = StateVar_9;
    *STATE_VARIABLE_SVarState_21 = STATE_VARIABLE_SVarState_0_20;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__report_uninitialized_state_var_5_p_0(
  MR_Word WarnOption_6,
  MR_Word Context_7,
  MR_Word StateVar_8,
  MR_Word STATE_VARIABLE_UrInfo_0_14,
  MR_Word * STATE_VARIABLE_UrInfo_15)
{
  MR_Word VarSet_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 3))));
  MR_String Name_11;
  MR_Word Pieces_12;
  MR_Word Spec_13;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_String Var_24;
  MR_Word Var_27;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_45;
  MR_Word Specs0_54;
  MR_Word Specs_55;
  MR_Word Var_56;
  MR_Integer Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;

  Name_11 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, StateVar_8);
  Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "!.", Name_11);
  {
    Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_23, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_21 = parse_tree__error_spec__color_as_subject_1_f_0(Var_22);
  Var_33 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[52])));
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[54])));
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[50])), Var_32);
  Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, Var_27);
  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[48])), Var_20);
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = (MR_Box) ((MR_Unsigned) (WarnOption_6));
  }
  {
    Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_uninitialized_state_var\'/5"));
    MR_hl_field(0, Spec_13, 1) = ((MR_Box) (Var_45));
    MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_13, 3) = ((MR_Box) (Context_7));
    MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
  }
  Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 0))));
  Var_57 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 1))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 2))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 3))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 4))));
  Specs0_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 5))));
  {
    Specs_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_55, 0) = ((MR_Box) (Spec_13));
    MR_hl_field(1, Specs_55, 1) = ((MR_Box) (Specs0_54));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_15 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_56));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_57));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_58));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_59));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_60));
    MR_hl_field(0, base, 5) = ((MR_Box) (Specs_55));
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_inner_atomic_scope_6_p_0(
  MR_Word _Context_7,
  MR_Word InnerScopeInfo_8,
  MR_Word * InnerDIVar_9,
  MR_Word * InnerUOVar_10,
  MR_Word STATE_VARIABLE_SVarState_0_22,
  MR_Word * STATE_VARIABLE_SVarState_23)
{
  hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_6_p_0(InnerScopeInfo_8, InnerDIVar_9, InnerUOVar_10, STATE_VARIABLE_SVarState_0_22, STATE_VARIABLE_SVarState_23);
}

void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_6_p_0(
  MR_Word InnerScopeInfo_8,
  MR_Word * InnerDIVar_9,
  MR_Word * InnerUOVar_10,
  MR_Word STATE_VARIABLE_SVarState_0_22,
  MR_Word * STATE_VARIABLE_SVarState_23)
{
  MR_Word InnerStateVar_12 = ((MR_Word) ((MR_hl_field(0, InnerScopeInfo_8, 0))));
  MR_Word StatusMap0_14;
  MR_Word Status_15;
  MR_Box conv0_Status_15;

  *InnerDIVar_9 = ((MR_Word) ((MR_hl_field(0, InnerScopeInfo_8, 1))));
  *STATE_VARIABLE_SVarState_23 = ((MR_Word) ((MR_hl_field(0, InnerScopeInfo_8, 2))));
  StatusMap0_14 = (MR_Word) (STATE_VARIABLE_SVarState_0_22);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMap0_14, ((MR_Box) (InnerStateVar_12)), &conv0_Status_15);
  Status_15 = ((MR_Word) (conv0_Status_15));
  switch (MR_tag((MR_Word) Status_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_inner_atomic_scope\'/6", (MR_String) "status != known");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Status_15, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *InnerUOVar_10 = ((MR_Word) ((MR_hl_field(3, Status_15, 1))));
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_inner_atomic_scope\'/6", (MR_String) "status != known");
            return;
          }
          break;
      }
      break;
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_start_inner_atomic_scope_7_p_0(
  MR_Word _Context_8,
  MR_Word InnerStateVar_9,
  MR_Word * InnerScopeInfo_10,
  MR_Word STATE_VARIABLE_SVarState_0_17,
  MR_Word * STATE_VARIABLE_SVarState_18,
  MR_Word STATE_VARIABLE_UrInfo_0_19,
  MR_Word * STATE_VARIABLE_UrInfo_20)
{
  hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_7_p_0(InnerStateVar_9, InnerScopeInfo_10, STATE_VARIABLE_SVarState_0_17, STATE_VARIABLE_SVarState_18, STATE_VARIABLE_UrInfo_0_19, STATE_VARIABLE_UrInfo_20);
}

void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_115_116_97_114_116_95_105_110_110_101_114_95_97_116_111_109_105_99_95_115_99_111_112_101_95_95_91_49_93_95_48_7_p_0(
  MR_Word InnerStateVar_9,
  MR_Word * InnerScopeInfo_10,
  MR_Word STATE_VARIABLE_SVarState_0_17,
  MR_Word * STATE_VARIABLE_SVarState_18,
  MR_Word STATE_VARIABLE_UrInfo_0_19,
  MR_Word * STATE_VARIABLE_UrInfo_20)
{
  MR_Word InnerDIVar_14;
  MR_Word StatusMap0_15;
  MR_Word StatusMap_16;
  MR_Word Var_23;

  hlds__make_hlds__state_var__new_state_var_instance_5_p_0(InnerStateVar_9, (MR_Integer) 0, &InnerDIVar_14, STATE_VARIABLE_UrInfo_0_19, STATE_VARIABLE_UrInfo_20);
  StatusMap0_15 = (MR_Word) (STATE_VARIABLE_SVarState_0_17);
  {
    Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_23, 1) = ((MR_Box) (InnerDIVar_14));
  }
  mercury__map__set_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (InnerStateVar_9)), ((MR_Box) (Var_23)), StatusMap0_15, &StatusMap_16);
  *STATE_VARIABLE_SVarState_18 = (MR_Word) (StatusMap_16);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *InnerScopeInfo_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (InnerStateVar_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (InnerDIVar_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (STATE_VARIABLE_SVarState_0_17));
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_outer_atomic_scope_3_p_0(
  MR_Word OuterScopeInfo_4,
  MR_Word STATE_VARIABLE_SVarState_0_11,
  MR_Word * STATE_VARIABLE_SVarState_12)
{
  if ((OuterScopeInfo_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_SVarState_12 = STATE_VARIABLE_SVarState_0_11;
  else
  {
    MR_Word OuterStateVar_6 = ((MR_Word) ((MR_hl_field(1, OuterScopeInfo_4, 0))));
    MR_Word AfterStatus_8 = ((MR_Word) ((MR_hl_field(1, OuterScopeInfo_4, 2))));
    MR_Word StatusMap0_9 = (MR_Word) (STATE_VARIABLE_SVarState_0_11);
    MR_Word StatusMap_10;

    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (OuterStateVar_6)), ((MR_Box) (AfterStatus_8)), StatusMap0_9, &StatusMap_10);
    *STATE_VARIABLE_SVarState_12 = (MR_Word) (StatusMap_10);
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_start_outer_atomic_scope_9_p_0(
  MR_Word Context_10,
  MR_Word OuterStateVar_11,
  MR_Word * OuterDIVar_12,
  MR_Word * OuterUOVar_13,
  MR_Word * OuterScopeInfo_14,
  MR_Word STATE_VARIABLE_SVarState_0_26,
  MR_Word * STATE_VARIABLE_SVarState_27,
  MR_Word STATE_VARIABLE_UrInfo_0_28,
  MR_Word * STATE_VARIABLE_UrInfo_29)
{
  MR_bool succeeded;
  MR_Word StatusMap0_17 = (MR_Word) (STATE_VARIABLE_SVarState_0_26);
  MR_Word BeforeStatus_18;
  MR_Word StatusMap_19;
  MR_Box conv0_BeforeStatus_18;

  succeeded = mercury__map__remove_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (OuterStateVar_11)), &conv0_BeforeStatus_18, StatusMap0_17, &StatusMap_19);
  if (succeeded)
  {
    BeforeStatus_18 = ((MR_Word) (conv0_BeforeStatus_18));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *STATE_VARIABLE_SVarState_27 = (MR_Word) (StatusMap_19);
    switch (MR_tag((MR_Word) BeforeStatus_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word STATE_VARIABLE_UrInfo_1_32;
          MR_Word STATE_VARIABLE_UrInfo_2_34;
          MR_Word VarSet_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_28, 3))));
          MR_String Name_56;
          MR_Word Pieces_57;
          MR_Word Spec_58;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_String Var_67;
          MR_Word Var_70;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Specs0_92;
          MR_Word Specs_93;
          MR_Word Var_94;
          MR_Integer Var_95;
          MR_Word Var_96;
          MR_Word Var_97;
          MR_Word Var_98;

          Name_56 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_55, OuterStateVar_11);
          Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "!.", Name_56);
          {
            Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_66, 1) = ((MR_Box) (Var_67));
          }
          {
            Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
            MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_64 = parse_tree__error_spec__color_as_subject_1_f_0(Var_65);
          Var_76 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[52])));
          Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_76, (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[54])));
          Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[50])), Var_75);
          Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, Var_70);
          Pieces_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[48])), Var_63);
          {
            Spec_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_58, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_uninitialized_state_var\'/5"));
            MR_hl_field(0, Spec_58, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_3[8])));
            MR_hl_field(0, Spec_58, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(0, Spec_58, 3) = ((MR_Box) (Context_10));
            MR_hl_field(0, Spec_58, 4) = ((MR_Box) (Pieces_57));
          }
          Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_28, 0))));
          Var_95 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_28, 1))));
          Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_28, 2))));
          Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_28, 3))));
          Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_28, 4))));
          Specs0_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_28, 5))));
          {
            Specs_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Specs_93, 0) = ((MR_Box) (Spec_58));
            MR_hl_field(1, Specs_93, 1) = ((MR_Box) (Specs0_92));
          }
          {
            STATE_VARIABLE_UrInfo_1_32 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_UrInfo_1_32, 0) = ((MR_Box) (Var_94));
            MR_hl_field(0, STATE_VARIABLE_UrInfo_1_32, 1) = ((MR_Box) (Var_95));
            MR_hl_field(0, STATE_VARIABLE_UrInfo_1_32, 2) = ((MR_Box) (Var_96));
            MR_hl_field(0, STATE_VARIABLE_UrInfo_1_32, 3) = ((MR_Box) (Var_97));
            MR_hl_field(0, STATE_VARIABLE_UrInfo_1_32, 4) = ((MR_Box) (Var_98));
            MR_hl_field(0, STATE_VARIABLE_UrInfo_1_32, 5) = ((MR_Box) (Specs_93));
          }
          hlds__make_hlds__state_var__new_state_var_instance_5_p_0(OuterStateVar_11, (MR_Integer) 1, OuterDIVar_12, STATE_VARIABLE_UrInfo_1_32, &STATE_VARIABLE_UrInfo_2_34);
          hlds__make_hlds__state_var__new_state_var_instance_5_p_0(OuterStateVar_11, (MR_Integer) 1, OuterUOVar_13, STATE_VARIABLE_UrInfo_2_34, STATE_VARIABLE_UrInfo_29);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *OuterScopeInfo_14 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (OuterStateVar_11));
            MR_hl_field(1, base, 1) = ((MR_Box) (BeforeStatus_18));
            MR_hl_field(1, base, 2) = ((MR_Box) (BeforeStatus_18));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_start_outer_atomic_scope\'/9", (MR_String) "status updated");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word RO_Context_21;
          MR_Word STATE_VARIABLE_UrInfo_4_39;

          *OuterDIVar_12 = ((MR_Word) ((MR_hl_field(2, BeforeStatus_18, 0))));
          RO_Context_21 = ((MR_Word) ((MR_hl_field(2, BeforeStatus_18, 2))));
          hlds__make_hlds__state_var__report_illegal_state_var_update_6_p_0(Context_10, (MR_String) "lambda expression", RO_Context_21, OuterStateVar_11, STATE_VARIABLE_UrInfo_0_28, &STATE_VARIABLE_UrInfo_4_39);
          hlds__make_hlds__state_var__new_state_var_instance_5_p_0(OuterStateVar_11, (MR_Integer) 1, OuterUOVar_13, STATE_VARIABLE_UrInfo_4_39, STATE_VARIABLE_UrInfo_29);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *OuterScopeInfo_14 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (OuterStateVar_11));
            MR_hl_field(1, base, 1) = ((MR_Box) (BeforeStatus_18));
            MR_hl_field(1, base, 2) = ((MR_Box) (BeforeStatus_18));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, BeforeStatus_18, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word AfterStatus_22;

              *OuterDIVar_12 = ((MR_Word) ((MR_hl_field(3, BeforeStatus_18, 1))));
              hlds__make_hlds__state_var__new_state_var_instance_5_p_0(OuterStateVar_11, (MR_Integer) 1, OuterUOVar_13, STATE_VARIABLE_UrInfo_0_28, STATE_VARIABLE_UrInfo_29);
              {
                AfterStatus_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, AfterStatus_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, AfterStatus_22, 1) = ((MR_Box) (*OuterUOVar_13));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *OuterScopeInfo_14 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (OuterStateVar_11));
                MR_hl_field(1, base, 1) = ((MR_Box) (BeforeStatus_18));
                MR_hl_field(1, base, 2) = ((MR_Box) (AfterStatus_22));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_start_outer_atomic_scope\'/9", (MR_String) "status updated");
              return;
            }
            break;
        }
        break;
    }
  }
  else
  {
    MR_Word STATE_VARIABLE_UrInfo_7_48;
    MR_Word STATE_VARIABLE_UrInfo_8_50;

    hlds__make_hlds__state_var__report_non_visible_state_var_5_p_0((MR_String) "", Context_10, OuterStateVar_11, STATE_VARIABLE_UrInfo_0_28, &STATE_VARIABLE_UrInfo_7_48);
    hlds__make_hlds__state_var__new_state_var_instance_5_p_0(OuterStateVar_11, (MR_Integer) 1, OuterDIVar_12, STATE_VARIABLE_UrInfo_7_48, &STATE_VARIABLE_UrInfo_8_50);
    hlds__make_hlds__state_var__new_state_var_instance_5_p_0(OuterStateVar_11, (MR_Integer) 1, OuterUOVar_13, STATE_VARIABLE_UrInfo_8_50, STATE_VARIABLE_UrInfo_29);
    *OuterScopeInfo_14 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_SVarState_27 = STATE_VARIABLE_SVarState_0_26;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__report_non_visible_state_var_5_p_0(
  MR_String DorC_6,
  MR_Word Context_7,
  MR_Word StateVar_8,
  MR_Word STATE_VARIABLE_UrInfo_0_14,
  MR_Word * STATE_VARIABLE_UrInfo_15)
{
  MR_Word VarSet_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 3))));
  MR_String Name_11;
  MR_Word Pieces_12;
  MR_Word Spec_13;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_String Var_24;
  MR_String Var_26;
  MR_Word Specs0_44;
  MR_Word Specs_45;
  MR_Word Var_46;
  MR_Integer Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;

  Name_11 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, StateVar_8);
  Var_26 = mercury__string__f_43_43_2_f_0(DorC_6, Name_11);
  Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "!", Var_26);
  {
    Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_23, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_21 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_22);
  Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[46])));
  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[44])), Var_20);
  {
    Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_non_visible_state_var\'/5"));
    MR_hl_field(0, Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_13, 3) = ((MR_Box) (Context_7));
    MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_12));
  }
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 0))));
  Var_47 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 1))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 2))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 3))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 4))));
  Specs0_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_14, 5))));
  {
    Specs_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_45, 0) = ((MR_Box) (Spec_13));
    MR_hl_field(1, Specs_45, 1) = ((MR_Box) (Specs0_44));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_15 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_50));
    MR_hl_field(0, base, 5) = ((MR_Box) (Specs_45));
  }
}

void MR_CALL 
hlds__make_hlds__state_var__report_illegal_state_var_update_6_p_0(
  MR_Word Context_7,
  MR_String RO_Construct_8,
  MR_Word RO_Context_9,
  MR_Word StateVar_10,
  MR_Word STATE_VARIABLE_UrInfo_0_19,
  MR_Word * STATE_VARIABLE_UrInfo_20)
{
  MR_Word VarSet_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_19, 3))));
  MR_String Name_13;
  MR_Word Pieces1_14;
  MR_Word Msg1_15;
  MR_Word Pieces2_16;
  MR_Word Msg2_17;
  MR_Word Spec_18;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_String Var_29;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_String Var_49;
  MR_Word Var_60;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Specs0_84;
  MR_Word Specs_85;
  MR_Word Var_86;
  MR_Integer Var_87;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_90;

  Name_13 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_12, StateVar_10);
  Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "!:", Name_13);
  {
    Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_28, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_26 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_27);
  {
    Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_37, 1) = ((MR_Box) (RO_Construct_8));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[15])));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[11])));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
  }
  Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "!.", Name_13);
  {
    Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_48, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[17])));
  }
  Var_46 = parse_tree__error_spec__color_as_correct_1_f_0(Var_47);
  Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_46, (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[18])));
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, Var_45);
  Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_26, Var_32);
  Pieces1_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[10])), Var_25);
  {
    Msg1_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Msg1_15, 0) = ((MR_Box) (Context_7));
    MR_hl_field(0, Msg1_15, 1) = ((MR_Box) (Pieces1_14));
  }
  {
    Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_64, 1) = ((MR_Box) (Name_13));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[22])));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[20])));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
  }
  {
    Pieces2_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces2_16, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[19])));
    MR_hl_field(1, Pieces2_16, 1) = ((MR_Box) (Var_60));
  }
  {
    Msg2_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Msg2_17, 0) = ((MR_Box) (RO_Context_9));
    MR_hl_field(0, Msg2_17, 1) = ((MR_Box) (Pieces2_16));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (Msg2_17));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_74, 0) = ((MR_Box) (Msg1_15));
    MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_75));
  }
  {
    Spec_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_illegal_state_var_update\'/6"));
    MR_hl_field(2, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(2, Spec_18, 3) = ((MR_Box) (Var_74));
  }
  Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_19, 0))));
  Var_87 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_19, 1))));
  Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_19, 2))));
  Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_19, 3))));
  Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_19, 4))));
  Specs0_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_19, 5))));
  {
    Specs_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_85, 0) = ((MR_Box) (Spec_18));
    MR_hl_field(1, Specs_85, 1) = ((MR_Box) (Specs0_84));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_20 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_86));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_87));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_88));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_89));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_90));
    MR_hl_field(0, base, 5) = ((MR_Box) (Specs_85));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_14_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1531__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_14_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1529__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_14_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__svar_finish_if_then_else__1527__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_if_then_else_14_p_0(
  MR_Word LocKind_15,
  MR_Word Context_16,
  MR_Word QuantStateVars_17,
  MR_Word ThenGoal0_18,
  MR_Word * ThenGoal_19,
  MR_Word ElseGoal0_20,
  MR_Word * ElseGoal_21,
  MR_Word StateBefore_22,
  MR_Word StateAfterCond_23,
  MR_Word StateAfterThen_24,
  MR_Word StateAfterElse_25,
  MR_Word * StateAfterITE_26,
  MR_Word STATE_VARIABLE_UrInfo_0_72,
  MR_Word * STATE_VARIABLE_UrInfo_73)
{
  MR_bool succeeded;
  MR_Word StatusMapBefore_28 = (MR_Word) (StateBefore_22);
  MR_Word StatusMapAfterCond_29 = (MR_Word) (StateAfterCond_23);
  MR_Word StatusMapAfterThen_30 = (MR_Word) (StateAfterThen_24);
  MR_Word StatusMapAfterElse_31 = (MR_Word) (StateAfterElse_25);
  MR_Word SVarsBefore_32;
  MR_Word SVarsAfterCond_33;
  MR_Word SVarsAfterThen_34;
  MR_Word SVarsAfterElse_35;
  MR_Word StatusMapAfterITE_36;
  MR_Word NeckCopyGoals_37;
  MR_Word ThenEndCopyGoals_38;
  MR_Word ElseEndCopyGoals_39;
  MR_Word ThenRenames_40;
  MR_Word ElseRenames_41;
  MR_Word ThenMissingInits_42;
  MR_Word ElseMissingInits_43;
  MR_Word ThenGoals0_48;
  MR_Word ElseGoals0_49;
  MR_Word ThenGoals_50;
  MR_Word ElseGoals_51;
  MR_Word ThenInfo0_53;
  MR_Word ElseInfo0_55;
  MR_Word ThenGoal1_56;
  MR_Word ElseGoal1_57;
  MR_Word SVarStore0_58;
  MR_Word NextGoalId0_59;
  MR_Word DelayedRenamings0_60;
  MR_Word LastIdMap0_61;
  MR_Word SVarSpecs0_62;
  MR_Unsigned ThenGoalIdNum_63;
  MR_Word NextGoalId1_64;
  MR_Unsigned ElseGoalIdNum_65;
  MR_Word NextGoalId_66;
  MR_Word ThenGoalId_67;
  MR_Word ElseGoalId_68;
  MR_Word DelayedRenamings1_69;
  MR_Word DelayedRenamings_70;
  MR_Word SVarStore_71;
  MR_Word Var_74;
  MR_Word Var_77;
  MR_Word Var_80;
  MR_Word Var_83;
  MR_Word STATE_VARIABLE_UrInfo_1_91;
  MR_Word STATE_VARIABLE_UrInfo_2_94;
  MR_Word STATE_VARIABLE_UrInfo_3_97;
  MR_Word STATE_VARIABLE_UrInfo_4_98;
  MR_Word STATE_VARIABLE_UrInfo_5_99;
  MR_Word Var_100;
  MR_Word Var_106;
  MR_Integer Var_107;
  MR_Word Var_108;
  MR_Word Var_109;
  MR_Word Var_111;

  mercury__map__keys_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapBefore_28, &SVarsBefore_32);
  mercury__map__keys_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapAfterCond_29, &SVarsAfterCond_33);
  mercury__map__keys_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapAfterThen_30, &SVarsAfterThen_34);
  mercury__map__keys_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapAfterElse_31, &SVarsAfterElse_35);
  {
    Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_74, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[3]));
    MR_hl_field(0, Var_74, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_finish_if_then_else_14_p_0_1));
    MR_hl_field(0, Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_74, 3) = ((MR_Box) (SVarsBefore_32));
    MR_hl_field(0, Var_74, 4) = ((MR_Box) (SVarsAfterCond_33));
  }
  mercury__require__expect_3_p_0(Var_74, (MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_if_then_else\'/14", (MR_String) "vars Before not sublist of Cond");
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_77, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[3]));
    MR_hl_field(0, Var_77, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_finish_if_then_else_14_p_0_2));
    MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_77, 3) = ((MR_Box) (SVarsBefore_32));
    MR_hl_field(0, Var_77, 4) = ((MR_Box) (SVarsAfterThen_34));
  }
  mercury__require__expect_3_p_0(Var_77, (MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_if_then_else\'/14", (MR_String) "vars Before != AfterThen");
  {
    Var_80 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_80, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[3]));
    MR_hl_field(0, Var_80, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_finish_if_then_else_14_p_0_3));
    MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_80, 3) = ((MR_Box) (SVarsBefore_32));
    MR_hl_field(0, Var_80, 4) = ((MR_Box) (SVarsAfterElse_35));
  }
  mercury__require__expect_3_p_0(Var_80, (MR_String) "predicate \140hlds.make_hlds.state_var.svar_finish_if_then_else\'/14", (MR_String) "vars Before != AfterElse");
  Var_83 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0));
  hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0(LocKind_15, QuantStateVars_17, SVarsBefore_32, StatusMapBefore_28, StatusMapAfterCond_29, StatusMapAfterThen_30, StatusMapAfterElse_31, Var_83, &StatusMapAfterITE_36, (MR_Word) ((MR_Unsigned) 0U), &NeckCopyGoals_37, (MR_Word) ((MR_Unsigned) 0U), &ThenEndCopyGoals_38, (MR_Word) ((MR_Unsigned) 0U), &ElseEndCopyGoals_39, (MR_Word) ((MR_Unsigned) 0U), &ThenRenames_40, (MR_Word) ((MR_Unsigned) 0U), &ElseRenames_41, (MR_Word) ((MR_Unsigned) 0U), &ThenMissingInits_42, (MR_Word) ((MR_Unsigned) 0U), &ElseMissingInits_43, STATE_VARIABLE_UrInfo_0_72, &STATE_VARIABLE_UrInfo_1_91);
  *StateAfterITE_26 = (MR_Word) (StatusMapAfterITE_36);
  if ((ThenMissingInits_42 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_UrInfo_2_94 = STATE_VARIABLE_UrInfo_1_91;
  else
    hlds__make_hlds__state_var__report_missing_inits_in_ite_6_p_0(Context_16, ThenMissingInits_42, (MR_String) "succeeds", (MR_String) "fails", STATE_VARIABLE_UrInfo_1_91, &STATE_VARIABLE_UrInfo_2_94);
  if ((ElseMissingInits_43 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_UrInfo_3_97 = STATE_VARIABLE_UrInfo_2_94;
  else
    hlds__make_hlds__state_var__report_missing_inits_in_ite_6_p_0(Context_16, ElseMissingInits_43, (MR_String) "fails", (MR_String) "succeeds", STATE_VARIABLE_UrInfo_2_94, &STATE_VARIABLE_UrInfo_3_97);
  hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(ThenGoal0_18, &ThenGoals0_48, STATE_VARIABLE_UrInfo_3_97, &STATE_VARIABLE_UrInfo_4_98);
  hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(ElseGoal0_20, &ElseGoals0_49, STATE_VARIABLE_UrInfo_4_98, &STATE_VARIABLE_UrInfo_5_99);
  Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ThenGoals0_48, ThenEndCopyGoals_38);
  ThenGoals_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), NeckCopyGoals_37, Var_100);
  ElseGoals_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ElseGoals0_49, ElseEndCopyGoals_39);
  ThenInfo0_53 = ((MR_Word) ((MR_hl_field(0, ThenGoal0_18, 1))));
  ElseInfo0_55 = ((MR_Word) ((MR_hl_field(0, ElseGoal0_20, 1))));
  hlds__hlds_goal__conj_list_to_goal_3_p_0(ThenGoals_50, ThenInfo0_53, &ThenGoal1_56);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(ElseGoals_51, ElseInfo0_55, &ElseGoal1_57);
  SVarStore0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_5_99, 4))));
  NextGoalId0_59 = ((MR_Word) ((MR_hl_field(0, SVarStore0_58, 0))));
  DelayedRenamings0_60 = ((MR_Word) ((MR_hl_field(0, SVarStore0_58, 1))));
  LastIdMap0_61 = ((MR_Word) ((MR_hl_field(0, SVarStore0_58, 2))));
  SVarSpecs0_62 = ((MR_Word) ((MR_hl_field(0, SVarStore0_58, 3))));
  mercury__counter__uallocate_3_p_0(&ThenGoalIdNum_63, NextGoalId0_59, &NextGoalId1_64);
  mercury__counter__uallocate_3_p_0(&ElseGoalIdNum_65, NextGoalId1_64, &NextGoalId_66);
  ThenGoalId_67 = (MR_Word) (ThenGoalIdNum_63);
  ElseGoalId_68 = (MR_Word) (ElseGoalIdNum_65);
  hlds__hlds_goal__goal_set_goal_id_3_p_0(ThenGoalId_67, ThenGoal1_56, ThenGoal_19);
  hlds__hlds_goal__goal_set_goal_id_3_p_0(ElseGoalId_68, ElseGoal1_57, ElseGoal_21);
  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), ((MR_Box) (ThenGoalId_67)), ((MR_Box) (ThenRenames_40)), DelayedRenamings0_60, &DelayedRenamings1_69);
  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), ((MR_Box) (ElseGoalId_68)), ((MR_Box) (ElseRenames_41)), DelayedRenamings1_69, &DelayedRenamings_70);
  {
    SVarStore_71 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SVarStore_71, 0) = ((MR_Box) (NextGoalId_66));
    MR_hl_field(0, SVarStore_71, 1) = ((MR_Box) (DelayedRenamings_70));
    MR_hl_field(0, SVarStore_71, 2) = ((MR_Box) (LastIdMap0_61));
    MR_hl_field(0, SVarStore_71, 3) = ((MR_Box) (SVarSpecs0_62));
  }
  Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_5_99, 0))));
  Var_107 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_5_99, 1))));
  Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_5_99, 2))));
  Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_5_99, 3))));
  Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_5_99, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_73 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_106));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_107));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_108));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_109));
    MR_hl_field(0, base, 4) = ((MR_Box) (SVarStore_71));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_111));
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__report_missing_inits_in_ite_6_p_0(
  MR_Word Context_7,
  MR_Word NextStateVars_8,
  MR_String WhenMissing_9,
  MR_String WhenNotMissing_10,
  MR_Word STATE_VARIABLE_UrInfo_0_17,
  MR_Word * STATE_VARIABLE_UrInfo_18)
{
  MR_Word NextStateVarsPieces_12;
  MR_Word Pieces_13;
  MR_Word Spec_14;
  MR_Word Specs0_15;
  MR_Word Specs_16;
  MR_Word Var_25;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_67;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Integer Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;

  NextStateVarsPieces_12 = parse_tree__error_spec__quote_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[64])), NextStateVars_8);
  {
    Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_29, 1) = ((MR_Box) (WhenNotMissing_10));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[68])));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[65])));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
  }
  Var_38 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[70])));
  {
    Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_49, 1) = ((MR_Box) (WhenMissing_9));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[64])));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[71])));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
  }
  Var_55 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[73])));
  Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_55, (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[18])));
  Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, Var_54);
  Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NextStateVarsPieces_12, Var_44);
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, Var_43);
  Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Var_37);
  {
    Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_missing_inits_in_ite\'/6"));
    MR_hl_field(0, Spec_14, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_3[5])));
    MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_7));
    MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_13));
  }
  Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_17, 0))));
  Var_72 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_17, 1))));
  Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_17, 2))));
  Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_17, 3))));
  Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_17, 4))));
  Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_17, 5))));
  Var_76 = ((MR_Word) ((MR_hl_field(0, Var_67, 0))));
  Var_77 = ((MR_Word) ((MR_hl_field(0, Var_67, 1))));
  Var_78 = ((MR_Word) ((MR_hl_field(0, Var_67, 2))));
  Specs0_15 = ((MR_Word) ((MR_hl_field(0, Var_67, 3))));
  {
    Specs_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_16, 0) = ((MR_Box) (Spec_14));
    MR_hl_field(1, Specs_16, 1) = ((MR_Box) (Specs0_15));
  }
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (Var_76));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) (Var_77));
    MR_hl_field(0, Var_70, 2) = ((MR_Box) (Var_78));
    MR_hl_field(0, Var_70, 3) = ((MR_Box) (Specs_16));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_18 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_71));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_72));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_73));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_74));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_70));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_75));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__handle_state_vars_in_ite__1615__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0(
  MR_Word LocKind_1,
  MR_Word QuantStateVars_2,
  MR_Word HeadVar__3_3,
  MR_Word StatusMapBefore_4,
  MR_Word StatusMapAfterCond_5,
  MR_Word StatusMapAfterThen_6,
  MR_Word StatusMapAfterElse_7,
  MR_Word STATE_VARIABLE_StatusMapAfterITE_0_8,
  MR_Word * STATE_VARIABLE_StatusMapAfterITE_9,
  MR_Word STATE_VARIABLE_NeckCopyGoals_0_10,
  MR_Word * STATE_VARIABLE_NeckCopyGoals_11,
  MR_Word STATE_VARIABLE_ThenEndCopyGoals_0_12,
  MR_Word * STATE_VARIABLE_ThenEndCopyGoals_13,
  MR_Word STATE_VARIABLE_ElseEndCopyGoals_0_14,
  MR_Word * STATE_VARIABLE_ElseEndCopyGoals_15,
  MR_Word STATE_VARIABLE_ThenRenames_0_16,
  MR_Word * STATE_VARIABLE_ThenRenames_17,
  MR_Word STATE_VARIABLE_ElseRenames_0_18,
  MR_Word * STATE_VARIABLE_ElseRenames_19,
  MR_Word STATE_VARIABLE_ThenMissingInits_0_20,
  MR_Word * STATE_VARIABLE_ThenMissingInits_21,
  MR_Word STATE_VARIABLE_ElseMissingInits_0_22,
  MR_Word * STATE_VARIABLE_ElseMissingInits_23,
  MR_Word STATE_VARIABLE_UrInfo_0_24,
  MR_Word * STATE_VARIABLE_UrInfo_25)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_UrInfo_25 = STATE_VARIABLE_UrInfo_0_24;
      *STATE_VARIABLE_ElseMissingInits_23 = STATE_VARIABLE_ElseMissingInits_0_22;
      *STATE_VARIABLE_ThenMissingInits_21 = STATE_VARIABLE_ThenMissingInits_0_20;
      *STATE_VARIABLE_ElseRenames_19 = STATE_VARIABLE_ElseRenames_0_18;
      *STATE_VARIABLE_ThenRenames_17 = STATE_VARIABLE_ThenRenames_0_16;
      *STATE_VARIABLE_ElseEndCopyGoals_15 = STATE_VARIABLE_ElseEndCopyGoals_0_14;
      *STATE_VARIABLE_ThenEndCopyGoals_13 = STATE_VARIABLE_ThenEndCopyGoals_0_12;
      *STATE_VARIABLE_NeckCopyGoals_11 = STATE_VARIABLE_NeckCopyGoals_0_10;
      *STATE_VARIABLE_StatusMapAfterITE_9 = STATE_VARIABLE_StatusMapAfterITE_0_8;
    }
    else
    {
      MR_Word SVar_61 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word SVars_62 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word StatusBefore_76;
      MR_Word StatusAfterCond_77;
      MR_Word StatusAfterThen_78;
      MR_Word StatusAfterElse_79;
      MR_Word StatusAfterITE_80;
      MR_Word STATE_VARIABLE_NeckCopyGoals_1_104;
      MR_Word STATE_VARIABLE_ThenEndCopyGoals_1_105;
      MR_Word STATE_VARIABLE_ElseEndCopyGoals_1_106;
      MR_Word STATE_VARIABLE_ElseRenames_1_107;
      MR_Word STATE_VARIABLE_ThenMissingInits_1_108;
      MR_Word STATE_VARIABLE_ElseMissingInits_1_109;
      MR_Word STATE_VARIABLE_UrInfo_1_110;
      MR_Word STATE_VARIABLE_StatusMapAfterITE_1_118;
      MR_Box conv0_StatusBefore_76;
      MR_Box conv1_StatusAfterCond_77;
      MR_Box conv2_StatusAfterThen_78;
      MR_Box conv3_StatusAfterElse_79;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_StatusMapAfterITE_0_8;
      MR_Word next_value_of_STATE_VARIABLE_NeckCopyGoals_0_10;
      MR_Word next_value_of_STATE_VARIABLE_ThenEndCopyGoals_0_12;
      MR_Word next_value_of_STATE_VARIABLE_ElseEndCopyGoals_0_14;
      MR_Word next_value_of_STATE_VARIABLE_ElseRenames_0_18;
      MR_Word next_value_of_STATE_VARIABLE_ThenMissingInits_0_20;
      MR_Word next_value_of_STATE_VARIABLE_ElseMissingInits_0_22;
      MR_Word next_value_of_STATE_VARIABLE_UrInfo_0_24;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapBefore_4, ((MR_Box) (SVar_61)), &conv0_StatusBefore_76);
      StatusBefore_76 = ((MR_Word) (conv0_StatusBefore_76));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapAfterCond_5, ((MR_Box) (SVar_61)), &conv1_StatusAfterCond_77);
      StatusAfterCond_77 = ((MR_Word) (conv1_StatusAfterCond_77));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapAfterThen_6, ((MR_Box) (SVar_61)), &conv2_StatusAfterThen_78);
      StatusAfterThen_78 = ((MR_Word) (conv2_StatusAfterThen_78));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapAfterElse_7, ((MR_Box) (SVar_61)), &conv3_StatusAfterElse_79);
      StatusAfterElse_79 = ((MR_Word) (conv3_StatusAfterElse_79));
      succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), ((MR_Box) (SVar_61)), QuantStateVars_2);
      if (succeeded)
      {
        MR_Word Var_99;

        {
          Var_99 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_99, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[2]));
          MR_hl_field(0, Var_99, 1) = ((MR_Box) (hlds__make_hlds__state_var__handle_state_vars_in_ite_25_p_0_1));
          MR_hl_field(0, Var_99, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_99, 3) = ((MR_Box) (StatusBefore_76));
          MR_hl_field(0, Var_99, 4) = ((MR_Box) (StatusAfterThen_78));
        }
        mercury__require__expect_3_p_0(Var_99, (MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_vars_in_ite\'/25", (MR_String) "state var shadowed in if-then-else is nevertheless updated");
        hlds__make_hlds__state_var__handle_state_var_in_ite_21_p_0(LocKind_1, SVar_61, StatusBefore_76, StatusBefore_76, StatusBefore_76, StatusAfterElse_79, &StatusAfterITE_80, STATE_VARIABLE_NeckCopyGoals_0_10, &STATE_VARIABLE_NeckCopyGoals_1_104, STATE_VARIABLE_ThenEndCopyGoals_0_12, &STATE_VARIABLE_ThenEndCopyGoals_1_105, STATE_VARIABLE_ElseEndCopyGoals_0_14, &STATE_VARIABLE_ElseEndCopyGoals_1_106, STATE_VARIABLE_ElseRenames_0_18, &STATE_VARIABLE_ElseRenames_1_107, STATE_VARIABLE_ThenMissingInits_0_20, &STATE_VARIABLE_ThenMissingInits_1_108, STATE_VARIABLE_ElseMissingInits_0_22, &STATE_VARIABLE_ElseMissingInits_1_109, STATE_VARIABLE_UrInfo_0_24, &STATE_VARIABLE_UrInfo_1_110);
      }
      else
        hlds__make_hlds__state_var__handle_state_var_in_ite_21_p_0(LocKind_1, SVar_61, StatusBefore_76, StatusAfterCond_77, StatusAfterThen_78, StatusAfterElse_79, &StatusAfterITE_80, STATE_VARIABLE_NeckCopyGoals_0_10, &STATE_VARIABLE_NeckCopyGoals_1_104, STATE_VARIABLE_ThenEndCopyGoals_0_12, &STATE_VARIABLE_ThenEndCopyGoals_1_105, STATE_VARIABLE_ElseEndCopyGoals_0_14, &STATE_VARIABLE_ElseEndCopyGoals_1_106, STATE_VARIABLE_ElseRenames_0_18, &STATE_VARIABLE_ElseRenames_1_107, STATE_VARIABLE_ThenMissingInits_0_20, &STATE_VARIABLE_ThenMissingInits_1_108, STATE_VARIABLE_ElseMissingInits_0_22, &STATE_VARIABLE_ElseMissingInits_1_109, STATE_VARIABLE_UrInfo_0_24, &STATE_VARIABLE_UrInfo_1_110);
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (SVar_61)), ((MR_Box) (StatusAfterITE_80)), STATE_VARIABLE_StatusMapAfterITE_0_8, &STATE_VARIABLE_StatusMapAfterITE_1_118);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = SVars_62;
      next_value_of_STATE_VARIABLE_StatusMapAfterITE_0_8 = STATE_VARIABLE_StatusMapAfterITE_1_118;
      next_value_of_STATE_VARIABLE_NeckCopyGoals_0_10 = STATE_VARIABLE_NeckCopyGoals_1_104;
      next_value_of_STATE_VARIABLE_ThenEndCopyGoals_0_12 = STATE_VARIABLE_ThenEndCopyGoals_1_105;
      next_value_of_STATE_VARIABLE_ElseEndCopyGoals_0_14 = STATE_VARIABLE_ElseEndCopyGoals_1_106;
      next_value_of_STATE_VARIABLE_ElseRenames_0_18 = STATE_VARIABLE_ElseRenames_1_107;
      next_value_of_STATE_VARIABLE_ThenMissingInits_0_20 = STATE_VARIABLE_ThenMissingInits_1_108;
      next_value_of_STATE_VARIABLE_ElseMissingInits_0_22 = STATE_VARIABLE_ElseMissingInits_1_109;
      next_value_of_STATE_VARIABLE_UrInfo_0_24 = STATE_VARIABLE_UrInfo_1_110;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_StatusMapAfterITE_0_8 = next_value_of_STATE_VARIABLE_StatusMapAfterITE_0_8;
      STATE_VARIABLE_NeckCopyGoals_0_10 = next_value_of_STATE_VARIABLE_NeckCopyGoals_0_10;
      STATE_VARIABLE_ThenEndCopyGoals_0_12 = next_value_of_STATE_VARIABLE_ThenEndCopyGoals_0_12;
      STATE_VARIABLE_ElseEndCopyGoals_0_14 = next_value_of_STATE_VARIABLE_ElseEndCopyGoals_0_14;
      STATE_VARIABLE_ElseRenames_0_18 = next_value_of_STATE_VARIABLE_ElseRenames_0_18;
      STATE_VARIABLE_ThenMissingInits_0_20 = next_value_of_STATE_VARIABLE_ThenMissingInits_0_20;
      STATE_VARIABLE_ElseMissingInits_0_22 = next_value_of_STATE_VARIABLE_ElseMissingInits_0_22;
      STATE_VARIABLE_UrInfo_0_24 = next_value_of_STATE_VARIABLE_UrInfo_0_24;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__handle_state_var_in_ite_21_p_0(
  MR_Word LocKind_22,
  MR_Word SVar_23,
  MR_Word StatusBefore_24,
  MR_Word StatusAfterCond_25,
  MR_Word StatusAfterThen_26,
  MR_Word StatusAfterElse_27,
  MR_Word * StatusAfterITE_28,
  MR_Word STATE_VARIABLE_NeckCopyGoals_0_41,
  MR_Word * STATE_VARIABLE_NeckCopyGoals_42,
  MR_Word STATE_VARIABLE_ThenEndCopyGoals_0_43,
  MR_Word * STATE_VARIABLE_ThenEndCopyGoals_44,
  MR_Word STATE_VARIABLE_ElseEndCopyGoals_0_45,
  MR_Word * STATE_VARIABLE_ElseEndCopyGoals_46,
  MR_Word STATE_VARIABLE_ElseRenames_0_47,
  MR_Word * STATE_VARIABLE_ElseRenames_48,
  MR_Word STATE_VARIABLE_ThenMissingInits_0_49,
  MR_Word * STATE_VARIABLE_ThenMissingInits_50,
  MR_Word STATE_VARIABLE_ElseMissingInits_0_51,
  MR_Word * STATE_VARIABLE_ElseMissingInits_52,
  MR_Word STATE_VARIABLE_UrInfo_0_53,
  MR_Word * STATE_VARIABLE_UrInfo_54)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(StatusAfterThen_26, StatusAfterCond_25);
  if (succeeded)
  {
    succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(StatusAfterElse_27, StatusBefore_24);
    if (succeeded)
    {
      succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(StatusAfterCond_25, StatusBefore_24);
      if (succeeded)
      {
        *StatusAfterITE_28 = StatusBefore_24;
        *STATE_VARIABLE_UrInfo_54 = STATE_VARIABLE_UrInfo_0_53;
        *STATE_VARIABLE_ElseMissingInits_52 = STATE_VARIABLE_ElseMissingInits_0_51;
        *STATE_VARIABLE_ElseEndCopyGoals_46 = STATE_VARIABLE_ElseEndCopyGoals_0_45;
        *STATE_VARIABLE_NeckCopyGoals_42 = STATE_VARIABLE_NeckCopyGoals_0_41;
      }
      else
        switch (MR_tag((MR_Word) StatusBefore_24)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word VarSet_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_53, 3))));
              MR_String SVarName_85;
              MR_String Var_93;
              MR_Word FinalVar_98;
              MR_Word VarAfterCond_99;
              MR_Word NeckCopyGoal_100;
              MR_Word CopyGoal0_121;
              MR_Word Var_122;
              MR_Word Var_123;

              mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_84, SVar_23, &SVarName_85);
              Var_93 = mercury__string__f_43_43_2_f_0((MR_String) "!:", SVarName_85);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_ElseMissingInits_52 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_93));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ElseMissingInits_0_51));
              }
              hlds__make_hlds__state_var__new_state_var_instance_5_p_0(SVar_23, (MR_Integer) 1, &FinalVar_98, STATE_VARIABLE_UrInfo_0_53, STATE_VARIABLE_UrInfo_54);
              VarAfterCond_99 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(LocKind_22, StatusAfterCond_25);
              {
                Var_122 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_122, 0) = ((MR_Box) (VarAfterCond_99));
              }
              Var_123 = mercury__term_context__dummy_context_0_f_0();
              hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(FinalVar_98, Var_122, Var_123, (MR_Word) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_3[3])), (MR_Word) ((MR_Unsigned) 0U), &CopyGoal0_121);
              hlds__hlds_goal__goal_add_features_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[42])), CopyGoal0_121, &NeckCopyGoal_100);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_NeckCopyGoals_42 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (NeckCopyGoal_100));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_NeckCopyGoals_0_41));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *StatusAfterITE_28 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, base, 1) = ((MR_Box) (FinalVar_98));
              }
              *STATE_VARIABLE_ElseEndCopyGoals_46 = STATE_VARIABLE_ElseEndCopyGoals_0_45;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite_cond\'/13", (MR_String) "updated before (case 5)");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              *StatusAfterITE_28 = StatusBefore_24;
              *STATE_VARIABLE_NeckCopyGoals_42 = STATE_VARIABLE_NeckCopyGoals_0_41;
              *STATE_VARIABLE_ElseEndCopyGoals_46 = STATE_VARIABLE_ElseEndCopyGoals_0_45;
              *STATE_VARIABLE_ElseMissingInits_52 = STATE_VARIABLE_ElseMissingInits_0_51;
              *STATE_VARIABLE_UrInfo_54 = STATE_VARIABLE_UrInfo_0_53;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, StatusBefore_24, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word VarBefore_79 = ((MR_Word) ((MR_hl_field(3, StatusBefore_24, 1))));
                  MR_Word FinalVar_80;
                  MR_Word VarAfterCond_81;
                  MR_Word NeckCopyGoal_82;
                  MR_Word ElseCopyGoal_83;
                  MR_Word CopyGoal0_107;
                  MR_Word Var_108;
                  MR_Word Var_109;
                  MR_Word CopyGoal0_114;
                  MR_Word Var_115;
                  MR_Word Var_116;

                  hlds__make_hlds__state_var__new_state_var_instance_5_p_0(SVar_23, (MR_Integer) 1, &FinalVar_80, STATE_VARIABLE_UrInfo_0_53, STATE_VARIABLE_UrInfo_54);
                  VarAfterCond_81 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(LocKind_22, StatusAfterCond_25);
                  {
                    Var_108 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_108, 0) = ((MR_Box) (VarAfterCond_81));
                  }
                  Var_109 = mercury__term_context__dummy_context_0_f_0();
                  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(FinalVar_80, Var_108, Var_109, (MR_Word) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_3[3])), (MR_Word) ((MR_Unsigned) 0U), &CopyGoal0_107);
                  hlds__hlds_goal__goal_add_features_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[42])), CopyGoal0_107, &NeckCopyGoal_82);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_NeckCopyGoals_42 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (NeckCopyGoal_82));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_NeckCopyGoals_0_41));
                  }
                  {
                    Var_115 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_115, 0) = ((MR_Box) (VarBefore_79));
                  }
                  Var_116 = mercury__term_context__dummy_context_0_f_0();
                  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(FinalVar_80, Var_115, Var_116, (MR_Word) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_3[3])), (MR_Word) ((MR_Unsigned) 0U), &CopyGoal0_114);
                  hlds__hlds_goal__goal_add_features_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[42])), CopyGoal0_114, &ElseCopyGoal_83);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_ElseEndCopyGoals_46 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (ElseCopyGoal_83));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ElseEndCopyGoals_0_45));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *StatusAfterITE_28 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (FinalVar_80));
                  }
                  *STATE_VARIABLE_ElseMissingInits_52 = STATE_VARIABLE_ElseMissingInits_0_51;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite_cond\'/13", (MR_String) "updated before (case 5)");
                  return;
                }
                break;
            }
            break;
        }
      *STATE_VARIABLE_ThenMissingInits_50 = STATE_VARIABLE_ThenMissingInits_0_49;
      *STATE_VARIABLE_ThenEndCopyGoals_44 = STATE_VARIABLE_ThenEndCopyGoals_0_43;
    }
    else
    {
      succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(StatusAfterCond_25, StatusBefore_24);
      if (succeeded)
      {
        switch (MR_tag((MR_Word) StatusBefore_24)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word VarSet_131 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_53, 3))));
              MR_String SVarName_132;
              MR_String Var_139;

              mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_131, SVar_23, &SVarName_132);
              Var_139 = mercury__string__f_43_43_2_f_0((MR_String) "!:", SVarName_132);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_ThenMissingInits_50 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_139));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ThenMissingInits_0_49));
              }
              *StatusAfterITE_28 = StatusAfterElse_27;
              *STATE_VARIABLE_ThenEndCopyGoals_44 = STATE_VARIABLE_ThenEndCopyGoals_0_43;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite_else\'/10", (MR_String) "updated before (case 2)");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              *StatusAfterITE_28 = StatusBefore_24;
              *STATE_VARIABLE_ThenEndCopyGoals_44 = STATE_VARIABLE_ThenEndCopyGoals_0_43;
              *STATE_VARIABLE_ThenMissingInits_50 = STATE_VARIABLE_ThenMissingInits_0_49;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, StatusBefore_24, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word VarBefore_128 = ((MR_Word) ((MR_hl_field(3, StatusBefore_24, 1))));
                  MR_Word VarAfterElse_129;
                  MR_Word CopyGoal_130;
                  MR_Word CopyGoal0_149;
                  MR_Word Var_150;
                  MR_Word Var_151;

                  VarAfterElse_129 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(LocKind_22, StatusAfterElse_27);
                  {
                    Var_150 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_150, 0) = ((MR_Box) (VarBefore_128));
                  }
                  Var_151 = mercury__term_context__dummy_context_0_f_0();
                  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(VarAfterElse_129, Var_150, Var_151, (MR_Word) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_3[3])), (MR_Word) ((MR_Unsigned) 0U), &CopyGoal0_149);
                  hlds__hlds_goal__goal_add_features_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[42])), CopyGoal0_149, &CopyGoal_130);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_ThenEndCopyGoals_44 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (CopyGoal_130));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ThenEndCopyGoals_0_43));
                  }
                  *StatusAfterITE_28 = StatusAfterElse_27;
                  *STATE_VARIABLE_ThenMissingInits_50 = STATE_VARIABLE_ThenMissingInits_0_49;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite_else\'/10", (MR_String) "updated before (case 2)");
                  return;
                }
                break;
            }
            break;
        }
        *STATE_VARIABLE_NeckCopyGoals_42 = STATE_VARIABLE_NeckCopyGoals_0_41;
      }
      else
      {
        MR_Word VarAfterCond_156;
        MR_Word VarAfterElse_157;
        MR_Word CopyGoal_158;
        MR_Word CopyGoal0_159;
        MR_Word Var_160;
        MR_Word Var_161;

        VarAfterCond_156 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(LocKind_22, StatusAfterCond_25);
        VarAfterElse_157 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(LocKind_22, StatusAfterElse_27);
        {
          Var_160 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_160, 0) = ((MR_Box) (VarAfterCond_156));
        }
        Var_161 = mercury__term_context__dummy_context_0_f_0();
        hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(VarAfterElse_157, Var_160, Var_161, (MR_Word) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_3[3])), (MR_Word) ((MR_Unsigned) 0U), &CopyGoal0_159);
        hlds__hlds_goal__goal_add_features_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[42])), CopyGoal0_159, &CopyGoal_158);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_NeckCopyGoals_42 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (CopyGoal_158));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_NeckCopyGoals_0_41));
        }
        *StatusAfterITE_28 = StatusAfterElse_27;
        *STATE_VARIABLE_ThenMissingInits_50 = STATE_VARIABLE_ThenMissingInits_0_49;
        *STATE_VARIABLE_ThenEndCopyGoals_44 = STATE_VARIABLE_ThenEndCopyGoals_0_43;
      }
      *STATE_VARIABLE_UrInfo_54 = STATE_VARIABLE_UrInfo_0_53;
      *STATE_VARIABLE_ElseMissingInits_52 = STATE_VARIABLE_ElseMissingInits_0_51;
      *STATE_VARIABLE_ElseEndCopyGoals_46 = STATE_VARIABLE_ElseEndCopyGoals_0_45;
    }
    *STATE_VARIABLE_ElseRenames_48 = STATE_VARIABLE_ElseRenames_0_47;
  }
  else
  {
    succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(StatusAfterElse_27, StatusBefore_24);
    if (succeeded)
    {
      switch (MR_tag((MR_Word) StatusBefore_24)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word VarSet_169 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_53, 3))));
            MR_String SVarName_170;
            MR_String Var_177;

            mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_169, SVar_23, &SVarName_170);
            Var_177 = mercury__string__f_43_43_2_f_0((MR_String) "!:", SVarName_170);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_ElseMissingInits_52 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_177));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ElseMissingInits_0_51));
            }
            *StatusAfterITE_28 = StatusAfterThen_26;
            *STATE_VARIABLE_ElseEndCopyGoals_46 = STATE_VARIABLE_ElseEndCopyGoals_0_45;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite_maybe_cond_then\'/10", (MR_String) "updated before (case 7)");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            *StatusAfterITE_28 = StatusBefore_24;
            *STATE_VARIABLE_ElseEndCopyGoals_46 = STATE_VARIABLE_ElseEndCopyGoals_0_45;
            *STATE_VARIABLE_ElseMissingInits_52 = STATE_VARIABLE_ElseMissingInits_0_51;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, StatusBefore_24, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word VarBefore_166 = ((MR_Word) ((MR_hl_field(3, StatusBefore_24, 1))));
                MR_Word VarAfterThen_167;
                MR_Word CopyGoal_168;
                MR_Word CopyGoal0_187;
                MR_Word Var_188;
                MR_Word Var_189;

                VarAfterThen_167 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(LocKind_22, StatusAfterThen_26);
                {
                  Var_188 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_188, 0) = ((MR_Box) (VarBefore_166));
                }
                Var_189 = mercury__term_context__dummy_context_0_f_0();
                hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(VarAfterThen_167, Var_188, Var_189, (MR_Word) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_3[3])), (MR_Word) ((MR_Unsigned) 0U), &CopyGoal0_187);
                hlds__hlds_goal__goal_add_features_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[42])), CopyGoal0_187, &CopyGoal_168);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_ElseEndCopyGoals_46 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (CopyGoal_168));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ElseEndCopyGoals_0_45));
                }
                *StatusAfterITE_28 = StatusAfterThen_26;
                *STATE_VARIABLE_ElseMissingInits_52 = STATE_VARIABLE_ElseMissingInits_0_51;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_state_var_in_ite_maybe_cond_then\'/10", (MR_String) "updated before (case 7)");
                return;
              }
              break;
          }
          break;
      }
      *STATE_VARIABLE_ElseRenames_48 = STATE_VARIABLE_ElseRenames_0_47;
    }
    else
    {
      MR_Word VarAfterThen_194;
      MR_Word VarAfterElse_195;
      MR_Word Var_196;

      VarAfterThen_194 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(LocKind_22, StatusAfterThen_26);
      VarAfterElse_195 = hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(LocKind_22, StatusAfterElse_27);
      {
        Var_196 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_196, 0) = ((MR_Box) (VarAfterElse_195));
        MR_hl_field(0, Var_196, 1) = ((MR_Box) (VarAfterThen_194));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ElseRenames_48 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_196));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ElseRenames_0_47));
      }
      *StatusAfterITE_28 = StatusAfterThen_26;
      *STATE_VARIABLE_ElseMissingInits_52 = STATE_VARIABLE_ElseMissingInits_0_51;
      *STATE_VARIABLE_ElseEndCopyGoals_46 = STATE_VARIABLE_ElseEndCopyGoals_0_45;
    }
    *STATE_VARIABLE_UrInfo_54 = STATE_VARIABLE_UrInfo_0_53;
    *STATE_VARIABLE_ThenMissingInits_50 = STATE_VARIABLE_ThenMissingInits_0_49;
    *STATE_VARIABLE_ThenEndCopyGoals_44 = STATE_VARIABLE_ThenEndCopyGoals_0_43;
    *STATE_VARIABLE_NeckCopyGoals_42 = STATE_VARIABLE_NeckCopyGoals_0_41;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__state_var__svar_get_current_progvar_2_f_0(
  MR_Word LocKind_4,
  MR_Word Status_5)
{
  MR_Word ProgVar_6;

  switch (LocKind_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      switch (MR_tag((MR_Word) Status_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.make_hlds.state_var.svar_get_current_progvar\'/2", (MR_String) "Status not known or updated");
          break;
        case (MR_Integer) 1:
          ProgVar_6 = ((MR_Word) ((MR_hl_field(1, Status_5, 0))));
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Status_5, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ProgVar_6 = ((MR_Word) ((MR_hl_field(3, Status_5, 1))));
              break;
            case (MR_Integer) 1:
              ProgVar_6 = ((MR_Word) ((MR_hl_field(3, Status_5, 2))));
              break;
          }
          break;
      }
      break;
    case (MR_Integer) 0:
      switch (MR_tag((MR_Word) Status_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.make_hlds.state_var.svar_get_current_progvar\'/2", (MR_String) "Status not known");
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, Status_5, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ProgVar_6 = ((MR_Word) ((MR_hl_field(3, Status_5, 1))));
              break;
            case (MR_Integer) 1:
              mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.make_hlds.state_var.svar_get_current_progvar\'/2", (MR_String) "Status not known");
              break;
          }
          break;
      }
      break;
  }
  return ProgVar_6;
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Goal_10;
  MR_Word conv2_STATE_VARIABLE_NextGoalId_22;
  MR_Word conv1_STATE_VARIABLE_DelayedRenamingMap_24;

  hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_Goal_10, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_NextGoalId_22, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_DelayedRenamingMap_24);
  *wrapper_arg_2 = ((MR_Box) (conv3_Goal_10));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_NextGoalId_22));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_DelayedRenamingMap_24));
}

void MR_CALL 
hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(
  MR_Word Goal_5,
  MR_Word * Conjuncts_6,
  MR_Word STATE_VARIABLE_UrInfo_0_21,
  MR_Word * STATE_VARIABLE_UrInfo_22)
{
  MR_bool succeeded;
  MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Goal_5, 0))));
  MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(0, Goal_5, 1))));
  MR_Word Conjuncts0_10;
  MR_Word Var_23;

  succeeded = ((((MR_tag((MR_Word) GoalExpr_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_8, 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_23 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_8, 1))) & (MR_Integer) 1);
    Conjuncts0_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));
    succeeded = (Var_23 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word SVarStore0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_21, 4))));
    MR_Word NextGoalId0_12 = ((MR_Word) ((MR_hl_field(0, SVarStore0_11, 0))));
    MR_Word DelayedRenamingMap0_13 = ((MR_Word) ((MR_hl_field(0, SVarStore0_11, 1))));
    MR_Word LastIdMap0_14 = ((MR_Word) ((MR_hl_field(0, SVarStore0_11, 2))));
    MR_Word SVarSpecs0_15 = ((MR_Word) ((MR_hl_field(0, SVarStore0_11, 3))));
    MR_Word GoalId_16;
    MR_Word GoalDelayedRenaming_17;
    MR_Box conv0_GoalDelayedRenaming_17;

    GoalId_16 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_9);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), DelayedRenamingMap0_13, ((MR_Box) (GoalId_16)), &conv0_GoalDelayedRenaming_17);
    if (succeeded)
    {
      GoalDelayedRenaming_17 = ((MR_Word) (conv0_GoalDelayedRenaming_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word NextGoalId_18;
      MR_Word DelayedRenamingMap_19;
      MR_Word SVarStore_20;
      MR_Word Var_24;
      MR_Box conv5_NextGoalId_18;
      MR_Box conv4_DelayedRenamingMap_19;
      MR_Word Var_32;
      MR_Integer Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_37;

      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_24, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_10[0]));
        MR_hl_field(0, Var_24, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0_1));
        MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_24, 3) = ((MR_Box) (GoalDelayedRenaming_17));
      }
      mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_ucounter_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[1]), Var_24, Conjuncts0_10, Conjuncts_6, ((MR_Box) (NextGoalId0_12)), &conv5_NextGoalId_18, ((MR_Box) (DelayedRenamingMap0_13)), &conv4_DelayedRenamingMap_19);
      NextGoalId_18 = ((MR_Word) (conv5_NextGoalId_18));
      DelayedRenamingMap_19 = ((MR_Word) (conv4_DelayedRenamingMap_19));
      {
        SVarStore_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SVarStore_20, 0) = ((MR_Box) (NextGoalId_18));
        MR_hl_field(0, SVarStore_20, 1) = ((MR_Box) (DelayedRenamingMap_19));
        MR_hl_field(0, SVarStore_20, 2) = ((MR_Box) (LastIdMap0_14));
        MR_hl_field(0, SVarStore_20, 3) = ((MR_Box) (SVarSpecs0_15));
      }
      Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_21, 0))));
      Var_33 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_21, 1))));
      Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_21, 2))));
      Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_21, 3))));
      Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_21, 5))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_UrInfo_22 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_32));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_33));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_34));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_35));
        MR_hl_field(0, base, 4) = ((MR_Box) (SVarStore_20));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_37));
      }
    }
    else
    {
      *Conjuncts_6 = Conjuncts0_10;
      *STATE_VARIABLE_UrInfo_22 = STATE_VARIABLE_UrInfo_0_21;
    }
  }
  else
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Conjuncts_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_5));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *STATE_VARIABLE_UrInfo_22 = STATE_VARIABLE_UrInfo_0_21;
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_disjunction_6_p_0(
  MR_Word DisjStates_7,
  MR_Word * Disjs_8,
  MR_Word StateBefore_9,
  MR_Word * StateAfter_10,
  MR_Word STATE_VARIABLE_UrInfo_0_28,
  MR_Word * STATE_VARIABLE_UrInfo_29)
{
  MR_bool succeeded;
  MR_Word StatusMapBefore_12 = (MR_Word) (StateBefore_9);

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapBefore_12);
  if (succeeded)
  {
    MR_Word RevDisjs_13;

    hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0(DisjStates_7, (MR_Word) ((MR_Unsigned) 0U), &RevDisjs_13);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevDisjs_13, Disjs_8);
    *StateAfter_10 = StateBefore_9;
    *STATE_VARIABLE_UrInfo_29 = STATE_VARIABLE_UrInfo_0_28;
  }
  else
  {
    MR_Word StatusListBefore_14;
    MR_Word ChangedStatusMapAfter_15;
    MR_Word StatusMapAfter_16;
    MR_Word ChangedStatusListAfter_17;
    MR_Word VarSet0_18;
    MR_Word SVarStore0_19;
    MR_Word NextGoalId0_20;
    MR_Word DelayedRenamings0_21;
    MR_Word LastIdMap0_22;
    MR_Word SVarSpecs0_23;
    MR_Word NextGoalId_24;
    MR_Word DelayedRenamings_25;
    MR_Word SVarSpecs_26;
    MR_Word SVarStore_27;
    MR_Word Var_31;
    MR_Word RevDisjs_34;
    MR_Word Var_45;
    MR_Integer Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_50;

    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapBefore_12, &StatusListBefore_14);
    Var_31 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0));
    hlds__make_hlds__state_var__compute_status_after_arms_6_p_0(StatusListBefore_14, DisjStates_7, Var_31, &ChangedStatusMapAfter_15, StatusMapBefore_12, &StatusMapAfter_16);
    mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ChangedStatusMapAfter_15, &ChangedStatusListAfter_17);
    *StateAfter_10 = (MR_Word) (StatusMapAfter_16);
    VarSet0_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_28, 3))));
    SVarStore0_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_28, 4))));
    NextGoalId0_20 = ((MR_Word) ((MR_hl_field(0, SVarStore0_19, 0))));
    DelayedRenamings0_21 = ((MR_Word) ((MR_hl_field(0, SVarStore0_19, 1))));
    LastIdMap0_22 = ((MR_Word) ((MR_hl_field(0, SVarStore0_19, 2))));
    SVarSpecs0_23 = ((MR_Word) ((MR_hl_field(0, SVarStore0_19, 3))));
    hlds__make_hlds__state_var__merge_changes_made_by_arms_12_p_0(VarSet0_18, DisjStates_7, StatusMapBefore_12, ChangedStatusListAfter_17, (MR_Word) ((MR_Unsigned) 0U), &RevDisjs_34, NextGoalId0_20, &NextGoalId_24, DelayedRenamings0_21, &DelayedRenamings_25, SVarSpecs0_23, &SVarSpecs_26);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevDisjs_34, Disjs_8);
    {
      SVarStore_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SVarStore_27, 0) = ((MR_Box) (NextGoalId_24));
      MR_hl_field(0, SVarStore_27, 1) = ((MR_Box) (DelayedRenamings_25));
      MR_hl_field(0, SVarStore_27, 2) = ((MR_Box) (LastIdMap0_22));
      MR_hl_field(0, SVarStore_27, 3) = ((MR_Box) (SVarSpecs_26));
    }
    Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_28, 0))));
    Var_46 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_28, 1))));
    Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_28, 2))));
    Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_28, 3))));
    Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_28, 5))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_UrInfo_29 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_45));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_46));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_47));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_48));
      MR_hl_field(0, base, 4) = ((MR_Box) (SVarStore_27));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_50));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__merge_changes_made_by_arms_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Goal_10;
  MR_Word conv2_STATE_VARIABLE_NextGoalId_22;
  MR_Word conv1_STATE_VARIABLE_DelayedRenamingMap_24;

  hlds__make_hlds__state_var__add_conjunct_delayed_renames_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_Goal_10, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_NextGoalId_22, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_DelayedRenamingMap_24);
  *wrapper_arg_2 = ((MR_Box) (conv3_Goal_10));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_NextGoalId_22));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_DelayedRenamingMap_24));
}

static void MR_CALL 
hlds__make_hlds__state_var__merge_changes_made_by_arms_12_p_0(
  MR_Word VarSet_1,
  MR_Word HeadVar__2_2,
  MR_Word StatusMapBefore_3,
  MR_Word ChangedStatusListAfter_4,
  MR_Word STATE_VARIABLE_RevArms_0_5,
  MR_Word * STATE_VARIABLE_RevArms_6,
  MR_Word STATE_VARIABLE_NextGoalId_0_7,
  MR_Word * STATE_VARIABLE_NextGoalId_8,
  MR_Word STATE_VARIABLE_DelayedRenamings_0_9,
  MR_Word * STATE_VARIABLE_DelayedRenamings_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
      *STATE_VARIABLE_DelayedRenamings_10 = STATE_VARIABLE_DelayedRenamings_0_9;
      *STATE_VARIABLE_NextGoalId_8 = STATE_VARIABLE_NextGoalId_0_7;
      *STATE_VARIABLE_RevArms_6 = STATE_VARIABLE_RevArms_0_5;
    }
    else
    {
      MR_Word ArmState_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArmStates_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Arm0_37 = ((MR_Word) ((MR_hl_field(0, ArmState_29, 0))));
      MR_Word StateAfterArm_38 = ((MR_Word) ((MR_hl_field(0, ArmState_29, 1))));
      MR_Word StatusMapAfterArm_39 = (MR_Word) (StateAfterArm_38);
      MR_Unsigned ArmIdNum_40;
      MR_Word ArmId_41;
      MR_Word UninitVarNames_42;
      MR_Word CopyGoals_43;
      MR_Word ArmRenames_44;
      MR_Word ArmExpr0_45;
      MR_Word ArmInfo0_46;
      MR_Word ArmExpr_47;
      MR_Word ArmInfo_54;
      MR_Word Arm_55;
      MR_Word STATE_VARIABLE_NextGoalId_1_64;
      MR_Word STATE_VARIABLE_DelayedRenamings_1_65;
      MR_Word STATE_VARIABLE_NextGoalId_2_66;
      MR_Word STATE_VARIABLE_DelayedRenamings_2_67;
      MR_Word STATE_VARIABLE_Specs_1_70;
      MR_Word STATE_VARIABLE_RevArms_1_71;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_RevArms_0_5;
      MR_Word next_value_of_STATE_VARIABLE_NextGoalId_0_7;
      MR_Word next_value_of_STATE_VARIABLE_DelayedRenamings_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_11;

      mercury__counter__uallocate_3_p_0(&ArmIdNum_40, STATE_VARIABLE_NextGoalId_0_7, &STATE_VARIABLE_NextGoalId_1_64);
      ArmId_41 = (MR_Word) (ArmIdNum_40);
      hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0(VarSet_1, ChangedStatusListAfter_4, StatusMapBefore_3, StatusMapAfterArm_39, &UninitVarNames_42, &CopyGoals_43, &ArmRenames_44);
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), ((MR_Box) (ArmId_41)), ((MR_Box) (ArmRenames_44)), STATE_VARIABLE_DelayedRenamings_0_9, &STATE_VARIABLE_DelayedRenamings_1_65);
      ArmExpr0_45 = ((MR_Word) ((MR_hl_field(0, Arm0_37, 0))));
      ArmInfo0_46 = ((MR_Word) ((MR_hl_field(0, Arm0_37, 1))));
      if ((CopyGoals_43 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ArmExpr_47 = ArmExpr0_45;
        STATE_VARIABLE_NextGoalId_2_66 = STATE_VARIABLE_NextGoalId_1_64;
        STATE_VARIABLE_DelayedRenamings_2_67 = STATE_VARIABLE_DelayedRenamings_1_65;
      }
      else
      {
        MR_Word ArmGoals0_50;
        MR_Word Var_69;
        MR_Word Conjuncts0_77;
        MR_Word Var_80;

        succeeded = ((((MR_tag((MR_Word) ArmExpr0_45)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ArmExpr0_45, 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_80 = ((MR_Unsigned) ((MR_hl_field(3, ArmExpr0_45, 1))) & (MR_Integer) 1);
          Conjuncts0_77 = ((MR_Word) ((MR_hl_field(3, ArmExpr0_45, 2))));
          succeeded = (Var_80 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          MR_Word GoalId_78;
          MR_Word GoalDelayedRenaming_79;
          MR_Box conv0_GoalDelayedRenaming_79;

          GoalId_78 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(ArmInfo0_46);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), STATE_VARIABLE_DelayedRenamings_1_65, ((MR_Box) (GoalId_78)), &conv0_GoalDelayedRenaming_79);
          if (succeeded)
          {
            GoalDelayedRenaming_79 = ((MR_Word) (conv0_GoalDelayedRenaming_79));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word Var_81;
            MR_Box conv5_STATE_VARIABLE_NextGoalId_2_66;
            MR_Box conv4_STATE_VARIABLE_DelayedRenamings_2_67;

            {
              Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_81, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_10[0]));
              MR_hl_field(0, Var_81, 1) = ((MR_Box) (hlds__make_hlds__state_var__merge_changes_made_by_arms_12_p_0_1));
              MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_81, 3) = ((MR_Box) (GoalDelayedRenaming_79));
            }
            mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_ucounter_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[1]), Var_81, Conjuncts0_77, &ArmGoals0_50, ((MR_Box) (STATE_VARIABLE_NextGoalId_1_64)), &conv5_STATE_VARIABLE_NextGoalId_2_66, ((MR_Box) (STATE_VARIABLE_DelayedRenamings_1_65)), &conv4_STATE_VARIABLE_DelayedRenamings_2_67);
            STATE_VARIABLE_NextGoalId_2_66 = ((MR_Word) (conv5_STATE_VARIABLE_NextGoalId_2_66));
            STATE_VARIABLE_DelayedRenamings_2_67 = ((MR_Word) (conv4_STATE_VARIABLE_DelayedRenamings_2_67));
          }
          else
          {
            ArmGoals0_50 = Conjuncts0_77;
            STATE_VARIABLE_DelayedRenamings_2_67 = STATE_VARIABLE_DelayedRenamings_1_65;
            STATE_VARIABLE_NextGoalId_2_66 = STATE_VARIABLE_NextGoalId_1_64;
          }
        }
        else
        {
          {
            ArmGoals0_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ArmGoals0_50, 0) = ((MR_Box) (Arm0_37));
            MR_hl_field(1, ArmGoals0_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_DelayedRenamings_2_67 = STATE_VARIABLE_DelayedRenamings_1_65;
          STATE_VARIABLE_NextGoalId_2_66 = STATE_VARIABLE_NextGoalId_1_64;
        }
        Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ArmGoals0_50, CopyGoals_43);
        {
          ArmExpr_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ArmExpr_47, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, ArmExpr_47, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, ArmExpr_47, 2) = ((MR_Box) (Var_69));
        }
      }
      if ((UninitVarNames_42 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Specs_1_70 = STATE_VARIABLE_Specs_0_11;
      else
      {
        MR_Word ArmContext_53;

        ArmContext_53 = hlds__hlds_goal__goal_info_get_context_1_f_0(ArmInfo0_46);
        hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_p_0(ArmContext_53, UninitVarNames_42, STATE_VARIABLE_Specs_0_11, &STATE_VARIABLE_Specs_1_70);
      }
      hlds__hlds_goal__goal_info_set_goal_id_3_p_0(ArmId_41, ArmInfo0_46, &ArmInfo_54);
      {
        Arm_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Arm_55, 0) = ((MR_Box) (ArmExpr_47));
        MR_hl_field(0, Arm_55, 1) = ((MR_Box) (ArmInfo_54));
      }
      {
        STATE_VARIABLE_RevArms_1_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevArms_1_71, 0) = ((MR_Box) (Arm_55));
        MR_hl_field(1, STATE_VARIABLE_RevArms_1_71, 1) = ((MR_Box) (STATE_VARIABLE_RevArms_0_5));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ArmStates_30;
      next_value_of_STATE_VARIABLE_RevArms_0_5 = STATE_VARIABLE_RevArms_1_71;
      next_value_of_STATE_VARIABLE_NextGoalId_0_7 = STATE_VARIABLE_NextGoalId_2_66;
      next_value_of_STATE_VARIABLE_DelayedRenamings_0_9 = STATE_VARIABLE_DelayedRenamings_2_67;
      next_value_of_STATE_VARIABLE_Specs_0_11 = STATE_VARIABLE_Specs_1_70;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_RevArms_0_5 = next_value_of_STATE_VARIABLE_RevArms_0_5;
      STATE_VARIABLE_NextGoalId_0_7 = next_value_of_STATE_VARIABLE_NextGoalId_0_7;
      STATE_VARIABLE_DelayedRenamings_0_9 = next_value_of_STATE_VARIABLE_DelayedRenamings_0_9;
      STATE_VARIABLE_Specs_0_11 = next_value_of_STATE_VARIABLE_Specs_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__report_missing_inits_in_disjunct_4_p_0(
  MR_Word Context_5,
  MR_Word NextStateVars_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  MR_Word Pieces_8;
  MR_Word Spec_9;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_24;
  MR_Word Var_25;

  Var_17 = parse_tree__error_spec__quote_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[64])), NextStateVars_6);
  Var_25 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[77])));
  Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[18])));
  Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_17, Var_24);
  Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[75])), Var_16);
  {
    Spec_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_missing_inits_in_disjunct\'/4"));
    MR_hl_field(0, Spec_9, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_3[5])));
    MR_hl_field(0, Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_9, 3) = ((MR_Box) (Context_5));
    MR_hl_field(0, Spec_9, 4) = ((MR_Box) (Pieces_8));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_11 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_9));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__handle_arm_updated_state_vars__1395__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0(
  MR_Word VarSet_1,
  MR_Word HeadVar__2_2,
  MR_Word StatusMapBefore_3,
  MR_Word StatusMapAfterArm_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Change_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Changes_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word UninitVarNamesTail_19;
    MR_Word CopyGoalsTail_20;
    MR_Word RenamesTail_21;
    MR_Word StateVar_22;
    MR_Word AfterAllArmsStatus_23;
    MR_Word BeforeStatus_24;
    MR_Word AfterArmStatus_25;
    MR_Box conv0_BeforeStatus_24;
    MR_Box conv1_AfterArmStatus_25;

    hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0(VarSet_1, Changes_13, StatusMapBefore_3, StatusMapAfterArm_4, &UninitVarNamesTail_19, &CopyGoalsTail_20, &RenamesTail_21);
    StateVar_22 = ((MR_Word) ((MR_hl_field(0, Change_12, 0))));
    AfterAllArmsStatus_23 = ((MR_Word) ((MR_hl_field(0, Change_12, 1))));
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapBefore_3, ((MR_Box) (StateVar_22)), &conv0_BeforeStatus_24);
    BeforeStatus_24 = ((MR_Word) (conv0_BeforeStatus_24));
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapAfterArm_4, ((MR_Box) (StateVar_22)), &conv1_AfterArmStatus_25);
    AfterArmStatus_25 = ((MR_Word) (conv1_AfterArmStatus_25));
    succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(AfterArmStatus_25, BeforeStatus_24);
    if (succeeded)
    {
      MR_Word Var_55;

      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_55, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[2]));
        MR_hl_field(0, Var_55, 1) = ((MR_Box) (hlds__make_hlds__state_var__handle_arm_updated_state_vars_7_p_0_1));
        MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_55, 3) = ((MR_Box) (AfterAllArmsStatus_23));
        MR_hl_field(0, Var_55, 4) = ((MR_Box) (AfterArmStatus_25));
      }
      mercury__require__expect_not_3_p_0(Var_55, (MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = AfterAllArmsStatus");
      switch (MR_tag((MR_Word) BeforeStatus_24)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Name_37;
            MR_String UninitVarName_38;

            mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_1, StateVar_22, &Name_37);
            UninitVarName_38 = mercury__string__f_43_43_2_f_0((MR_String) "!:", Name_37);
            *HeadVar__6_6 = CopyGoalsTail_20;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (UninitVarName_38));
              MR_hl_field(1, base, 1) = ((MR_Box) (UninitVarNamesTail_19));
            }
            *HeadVar__7_7 = RenamesTail_21;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "BeforeStatus is updated");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BeforeVar_88 = ((MR_Word) ((MR_hl_field(2, BeforeStatus_24, 0))));

            switch (MR_tag((MR_Word) AfterAllArmsStatus_23)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
                  return;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, AfterAllArmsStatus_23, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word AfterAllVar_80 = ((MR_Word) ((MR_hl_field(3, AfterAllArmsStatus_23, 1))));
                      MR_Word CopyGoal_81;
                      MR_Word CopyGoal0_96;
                      MR_Word Var_97;
                      MR_Word Var_98;

                      {
                        Var_97 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_97, 0) = ((MR_Box) (BeforeVar_88));
                      }
                      Var_98 = mercury__term_context__dummy_context_0_f_0();
                      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(AfterAllVar_80, Var_97, Var_98, (MR_Word) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_3[3])), (MR_Word) ((MR_Unsigned) 0U), &CopyGoal0_96);
                      hlds__hlds_goal__goal_add_features_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[42])), CopyGoal0_96, &CopyGoal_81);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *HeadVar__6_6 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (CopyGoal_81));
                        MR_hl_field(1, base, 1) = ((MR_Box) (CopyGoalsTail_20));
                      }
                      *HeadVar__5_5 = UninitVarNamesTail_19;
                      *HeadVar__7_7 = RenamesTail_21;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
                      return;
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, BeforeStatus_24, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word BeforeVar_26 = ((MR_Word) ((MR_hl_field(3, BeforeStatus_24, 1))));

                switch (MR_tag((MR_Word) AfterAllArmsStatus_23)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
                      return;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, AfterAllArmsStatus_23, 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word AfterAllVar_29 = ((MR_Word) ((MR_hl_field(3, AfterAllArmsStatus_23, 1))));
                          MR_Word CopyGoal_30;
                          MR_Word CopyGoal0_89;
                          MR_Word Var_90;
                          MR_Word Var_91;

                          {
                            Var_90 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Var_90, 0) = ((MR_Box) (BeforeVar_26));
                          }
                          Var_91 = mercury__term_context__dummy_context_0_f_0();
                          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(AfterAllVar_29, Var_90, Var_91, (MR_Word) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_3[3])), (MR_Word) ((MR_Unsigned) 0U), &CopyGoal0_89);
                          hlds__hlds_goal__goal_add_features_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[42])), CopyGoal0_89, &CopyGoal_30);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *HeadVar__6_6 = base;
                            MR_hl_field(1, base, 0) = ((MR_Box) (CopyGoal_30));
                            MR_hl_field(1, base, 1) = ((MR_Box) (CopyGoalsTail_20));
                          }
                          *HeadVar__5_5 = UninitVarNamesTail_19;
                          *HeadVar__7_7 = RenamesTail_21;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before == After)");
                          return;
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "BeforeStatus is updated");
                return;
              }
              break;
          }
          break;
      }
    }
    else
      switch (MR_tag((MR_Word) AfterArmStatus_25)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = status_unknown");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = status_unknown");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = status_known_ro");
            return;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, AfterArmStatus_25, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word AfterArmVar_42 = ((MR_Word) ((MR_hl_field(3, AfterArmStatus_25, 1))));

                switch (MR_tag((MR_Word) AfterAllArmsStatus_23)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before != After)");
                      return;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, AfterAllArmsStatus_23, 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word AfterAllVar_74 = ((MR_Word) ((MR_hl_field(3, AfterAllArmsStatus_23, 1))));

                          *HeadVar__6_6 = CopyGoalsTail_20;
                          *HeadVar__5_5 = UninitVarNamesTail_19;
                          succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), ((MR_Box) (AfterArmVar_42)), ((MR_Box) (AfterAllVar_74)));
                          if (succeeded)
                            *HeadVar__7_7 = RenamesTail_21;
                          else
                          {
                            MR_Word Var_63;

                            {
                              Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, Var_63, 0) = ((MR_Box) (AfterArmVar_42));
                              MR_hl_field(0, Var_63, 1) = ((MR_Box) (AfterAllVar_74));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__7_7 = base;
                              MR_hl_field(1, base, 0) = ((MR_Box) (Var_63));
                              MR_hl_field(1, base, 1) = ((MR_Box) (RenamesTail_21));
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterAllArmsStatus != status_known (Before != After)");
                          return;
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.handle_arm_updated_state_vars\'/7", (MR_String) "AfterArmStatus = status_known_updated");
                return;
              }
              break;
          }
          break;
      }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__compute_status_after_arms_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ChangedStatusMapAfter_0_3,
  MR_Word * STATE_VARIABLE_ChangedStatusMapAfter_4,
  MR_Word STATE_VARIABLE_StatusMapAfter_0_5,
  MR_Word * STATE_VARIABLE_StatusMapAfter_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_StatusMapAfter_6 = STATE_VARIABLE_StatusMapAfter_0_5;
      *STATE_VARIABLE_ChangedStatusMapAfter_4 = STATE_VARIABLE_ChangedStatusMapAfter_0_3;
    }
    else
    {
      MR_Word ArmState_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArmStates_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word StateAfterArm_20 = ((MR_Word) ((MR_hl_field(0, ArmState_15, 1))));
      MR_Word StatusMapAfterArm_21 = (MR_Word) (StateAfterArm_20);
      MR_Word STATE_VARIABLE_ChangedStatusMapAfter_1_26;
      MR_Word STATE_VARIABLE_StatusMapAfter_1_27;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ChangedStatusMapAfter_0_3;
      MR_Word next_value_of_STATE_VARIABLE_StatusMapAfter_0_5;

      hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_p_0(HeadVar__1_1, StatusMapAfterArm_21, STATE_VARIABLE_ChangedStatusMapAfter_0_3, &STATE_VARIABLE_ChangedStatusMapAfter_1_26, STATE_VARIABLE_StatusMapAfter_0_5, &STATE_VARIABLE_StatusMapAfter_1_27);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ArmStates_16;
      next_value_of_STATE_VARIABLE_ChangedStatusMapAfter_0_3 = STATE_VARIABLE_ChangedStatusMapAfter_1_26;
      next_value_of_STATE_VARIABLE_StatusMapAfter_0_5 = STATE_VARIABLE_StatusMapAfter_1_27;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ChangedStatusMapAfter_0_3 = next_value_of_STATE_VARIABLE_ChangedStatusMapAfter_0_3;
      STATE_VARIABLE_StatusMapAfter_0_5 = next_value_of_STATE_VARIABLE_StatusMapAfter_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__find_changes_in_arm_and_update_changed_status_map_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word StatusMapAfterArm_2,
  MR_Word STATE_VARIABLE_ChangedStatusMapAfter_0_3,
  MR_Word * STATE_VARIABLE_ChangedStatusMapAfter_4,
  MR_Word STATE_VARIABLE_StatusMapAfter_0_5,
  MR_Word * STATE_VARIABLE_StatusMapAfter_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_StatusMapAfter_6 = STATE_VARIABLE_StatusMapAfter_0_5;
      *STATE_VARIABLE_ChangedStatusMapAfter_4 = STATE_VARIABLE_ChangedStatusMapAfter_0_3;
    }
    else
    {
      MR_Word Before_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Befores_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word SVar_19 = ((MR_Word) ((MR_hl_field(0, Before_14, 0))));
      MR_Word StatusBefore_20 = ((MR_Word) ((MR_hl_field(0, Before_14, 1))));
      MR_Word StatusAfter_21;
      MR_Word STATE_VARIABLE_ChangedStatusMapAfter_1_27;
      MR_Word STATE_VARIABLE_StatusMapAfter_1_28;
      MR_Box conv0_StatusAfter_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ChangedStatusMapAfter_0_3;
      MR_Word next_value_of_STATE_VARIABLE_StatusMapAfter_0_5;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapAfterArm_2, ((MR_Box) (SVar_19)), &conv0_StatusAfter_21);
      StatusAfter_21 = ((MR_Word) (conv0_StatusAfter_21));
      succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(StatusBefore_20, StatusAfter_21);
      if (succeeded)
      {
        STATE_VARIABLE_StatusMapAfter_1_28 = STATE_VARIABLE_StatusMapAfter_0_5;
        STATE_VARIABLE_ChangedStatusMapAfter_1_27 = STATE_VARIABLE_ChangedStatusMapAfter_0_3;
      }
      else
      {
        MR_Box conv1__AlreadyUpdated_22;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), STATE_VARIABLE_ChangedStatusMapAfter_0_3, ((MR_Box) (SVar_19)), &conv1__AlreadyUpdated_22);
        if (succeeded)
          succeeded = MR_TRUE;
        if (succeeded)
        {
          STATE_VARIABLE_StatusMapAfter_1_28 = STATE_VARIABLE_StatusMapAfter_0_5;
          STATE_VARIABLE_ChangedStatusMapAfter_1_27 = STATE_VARIABLE_ChangedStatusMapAfter_0_3;
        }
        else
        {
          mercury__map__det_insert_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (SVar_19)), ((MR_Box) (StatusAfter_21)), STATE_VARIABLE_ChangedStatusMapAfter_0_3, &STATE_VARIABLE_ChangedStatusMapAfter_1_27);
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (SVar_19)), ((MR_Box) (StatusAfter_21)), STATE_VARIABLE_StatusMapAfter_0_5, &STATE_VARIABLE_StatusMapAfter_1_28);
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Befores_15;
      next_value_of_STATE_VARIABLE_ChangedStatusMapAfter_0_3 = STATE_VARIABLE_ChangedStatusMapAfter_1_27;
      next_value_of_STATE_VARIABLE_StatusMapAfter_0_5 = STATE_VARIABLE_StatusMapAfter_1_28;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ChangedStatusMapAfter_0_3 = next_value_of_STATE_VARIABLE_ChangedStatusMapAfter_0_3;
      STATE_VARIABLE_StatusMapAfter_0_5 = next_value_of_STATE_VARIABLE_StatusMapAfter_0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__get_disjuncts_with_empty_states__1283__1_1_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevDisjuncts_0_2,
  MR_Word * STATE_VARIABLE_RevDisjuncts_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevDisjuncts_3 = STATE_VARIABLE_RevDisjuncts_0_2;
    else
    {
      MR_Word GoalState_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word GoalStates_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Goal_10 = ((MR_Word) ((MR_hl_field(0, GoalState_7, 0))));
      MR_Word State_11 = ((MR_Word) ((MR_hl_field(0, GoalState_7, 1))));
      MR_Word StatusMapAfterGoal_12 = (MR_Word) (State_11);
      MR_Word Var_15;
      MR_Word STATE_VARIABLE_RevDisjuncts_1_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevDisjuncts_0_2;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_15, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_9[0]));
        MR_hl_field(0, Var_15, 1) = ((MR_Box) (hlds__make_hlds__state_var__get_disjuncts_with_empty_states_3_p_0_1));
        MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_15, 3) = ((MR_Box) (StatusMapAfterGoal_12));
      }
      mercury__require__expect_3_p_0(Var_15, (MR_String) "predicate \140hlds.make_hlds.state_var.get_disjuncts_with_empty_states\'/3", (MR_String) "map after goal not empty");
      {
        STATE_VARIABLE_RevDisjuncts_1_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevDisjuncts_1_18, 0) = ((MR_Box) (Goal_10));
        MR_hl_field(1, STATE_VARIABLE_RevDisjuncts_1_18, 1) = ((MR_Box) (STATE_VARIABLE_RevDisjuncts_0_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = GoalStates_8;
      next_value_of_STATE_VARIABLE_RevDisjuncts_0_2 = STATE_VARIABLE_RevDisjuncts_1_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevDisjuncts_0_2 = next_value_of_STATE_VARIABLE_RevDisjuncts_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_local_state_vars_5_p_0(
  MR_Word UrInfo_6,
  MR_Word StateVars_7,
  MR_Word StateBeforeOutside_8,
  MR_Word StateAfterInside_9,
  MR_Word * StateAfterOutside_10)
{
  hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_108_111_99_97_108_95_115_116_97_116_101_95_118_97_114_115_95_95_91_49_93_95_48_5_p_0(StateVars_7, StateBeforeOutside_8, StateAfterInside_9, StateAfterOutside_10);
}

void MR_CALL 
hlds__make_hlds__state_var__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_118_97_114_95_102_105_110_105_115_104_95_108_111_99_97_108_95_115_116_97_116_101_95_118_97_114_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word StateVars_7,
  MR_Word StateBeforeOutside_8,
  MR_Word StateAfterInside_9,
  MR_Word * StateAfterOutside_10)
{
  MR_Word StatusMapBeforeOutside_11 = (MR_Word) (StateBeforeOutside_8);
  MR_Word StatusMapAfterOutside0_20 = (MR_Word) (StateAfterInside_9);
  MR_Word StatusMapAfterOutside_21;

  hlds__make_hlds__state_var__finish_svars_for_scope_4_p_0(StateVars_7, StatusMapBeforeOutside_11, StatusMapAfterOutside0_20, &StatusMapAfterOutside_21);
  *StateAfterOutside_10 = (MR_Word) (StatusMapAfterOutside_21);
}

static void MR_CALL 
hlds__make_hlds__state_var__finish_svars_for_scope_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word StatusMapBeforeOutside_2,
  MR_Word STATE_VARIABLE_StatusMapAfterOutside_0_3,
  MR_Word * STATE_VARIABLE_StatusMapAfterOutside_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_StatusMapAfterOutside_4 = STATE_VARIABLE_StatusMapAfterOutside_0_3;
    else
    {
      MR_Word SVar_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word SVars_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_StatusMapAfterOutside_1_17;
      MR_Word BeforeOutsideStatus_13;
      MR_Box conv0_BeforeOutsideStatus_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_StatusMapAfterOutside_0_3;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMapBeforeOutside_2, ((MR_Box) (SVar_9)), &conv0_BeforeOutsideStatus_13);
      if (succeeded)
      {
        BeforeOutsideStatus_13 = ((MR_Word) (conv0_BeforeOutsideStatus_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (SVar_9)), ((MR_Box) (BeforeOutsideStatus_13)), STATE_VARIABLE_StatusMapAfterOutside_0_3, &STATE_VARIABLE_StatusMapAfterOutside_1_17);
      else
      {
        MR_Box conv1_Var_14;

        mercury__map__det_remove_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (SVar_9)), &conv1_Var_14, STATE_VARIABLE_StatusMapAfterOutside_0_3, &STATE_VARIABLE_StatusMapAfterOutside_1_17);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = SVars_10;
      next_value_of_STATE_VARIABLE_StatusMapAfterOutside_0_3 = STATE_VARIABLE_StatusMapAfterOutside_1_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_StatusMapAfterOutside_0_3 = next_value_of_STATE_VARIABLE_StatusMapAfterOutside_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_for_local_state_vars_6_p_0(
  MR_Word Context_7,
  MR_Word StateVars_8,
  MR_Word OutsideState_9,
  MR_Word * InsideState_10,
  MR_Word STATE_VARIABLE_UrInfo_0_14,
  MR_Word * STATE_VARIABLE_UrInfo_15)
{
  MR_Word StatusMapOutside_12 = (MR_Word) (OutsideState_9);
  MR_Word StatusMapInside_13;

  hlds__make_hlds__state_var__prepare_svars_for_scope_6_p_0(Context_7, StateVars_8, StatusMapOutside_12, &StatusMapInside_13, STATE_VARIABLE_UrInfo_0_14, STATE_VARIABLE_UrInfo_15);
  *InsideState_10 = (MR_Word) (StatusMapInside_13);
}

static void MR_CALL 
hlds__make_hlds__state_var__prepare_svars_for_scope_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_StatusMap_0_3,
  MR_Word * STATE_VARIABLE_StatusMap_4,
  MR_Word STATE_VARIABLE_UrInfo_0_5,
  MR_Word * STATE_VARIABLE_UrInfo_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_UrInfo_6 = STATE_VARIABLE_UrInfo_0_5;
      *STATE_VARIABLE_StatusMap_4 = STATE_VARIABLE_StatusMap_0_3;
    }
    else
    {
      MR_Word SVar_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word SVars_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_UrInfo_1_24;
      MR_Word STATE_VARIABLE_StatusMap_1_26;
      MR_Box conv0__OldStatus_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_StatusMap_0_3;
      MR_Word next_value_of_STATE_VARIABLE_UrInfo_0_5;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), STATE_VARIABLE_StatusMap_0_3, ((MR_Box) (SVar_15)), &conv0__OldStatus_19);
      if (succeeded)
        succeeded = MR_TRUE;
      if (succeeded)
      {
        MR_Word VarSet_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_5, 3))));
        MR_String Name_35;
        MR_Word Pieces_36;
        MR_Word Spec_37;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Specs0_67;
        MR_Word Specs_68;
        MR_Word Var_69;
        MR_Integer Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;

        Name_35 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_34, SVar_15);
        {
          Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_45, 1) = ((MR_Box) (Name_35));
        }
        {
          Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
          MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_43 = parse_tree__error_spec__color_as_subject_1_f_0(Var_44);
        Var_48 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[62])));
        Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[18])));
        Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_47);
        Pieces_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[60])), Var_42);
        {
          Spec_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_37, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_state_var_shadow\'/4"));
          MR_hl_field(0, Spec_37, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_3[4])));
          MR_hl_field(0, Spec_37, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_37, 3) = ((MR_Box) (HeadVar__1_1));
          MR_hl_field(0, Spec_37, 4) = ((MR_Box) (Pieces_36));
        }
        Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_5, 0))));
        Var_70 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_5, 1))));
        Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_5, 2))));
        Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_5, 3))));
        Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_5, 4))));
        Specs0_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_5, 5))));
        {
          Specs_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Specs_68, 0) = ((MR_Box) (Spec_37));
          MR_hl_field(1, Specs_68, 1) = ((MR_Box) (Specs0_67));
        }
        {
          STATE_VARIABLE_UrInfo_1_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_24, 0) = ((MR_Box) (Var_69));
          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_24, 1) = ((MR_Box) (Var_70));
          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_24, 2) = ((MR_Box) (Var_71));
          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_24, 3) = ((MR_Box) (Var_72));
          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_24, 4) = ((MR_Box) (Var_73));
          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_24, 5) = ((MR_Box) (Specs_68));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (SVar_15)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_StatusMap_0_3, &STATE_VARIABLE_StatusMap_1_26);
      }
      else
      {
        mercury__map__det_insert_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (SVar_15)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_StatusMap_0_3, &STATE_VARIABLE_StatusMap_1_26);
        STATE_VARIABLE_UrInfo_1_24 = STATE_VARIABLE_UrInfo_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = SVars_16;
      next_value_of_STATE_VARIABLE_StatusMap_0_3 = STATE_VARIABLE_StatusMap_1_26;
      next_value_of_STATE_VARIABLE_UrInfo_0_5 = STATE_VARIABLE_UrInfo_1_24;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_StatusMap_0_3 = next_value_of_STATE_VARIABLE_StatusMap_0_3;
      STATE_VARIABLE_UrInfo_0_5 = next_value_of_STATE_VARIABLE_UrInfo_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Status_11;

  hlds__make_hlds__state_var__reset_updated_status_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Status_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Status_11));
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_atomic_goal_3_p_0(
  MR_Word Loc_4,
  MR_Word STATE_VARIABLE_SVarState_0_8,
  MR_Word * STATE_VARIABLE_SVarState_9)
{
  switch (Loc_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_SVarState_9 = STATE_VARIABLE_SVarState_0_8;
      break;
    case (MR_Integer) 0:
      {
        MR_Word StatusMap0_6 = (MR_Word) (STATE_VARIABLE_SVarState_0_8);
        MR_Word StatusMap_7;

        mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[8]), StatusMap0_6, &StatusMap_7);
        *STATE_VARIABLE_SVarState_9 = (MR_Word) (StatusMap_7);
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_lambda_body_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_UrInfo_31;

  hlds__make_hlds__state_var__report_unneeded_svar_in_lambda_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Unsigned) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_UrInfo_31);
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_UrInfo_31));
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__svar_finish_lambda_body_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_String conv2_SVarName_6;

  succeeded = hlds__make_hlds__state_var__is_prog_var_for_some_state_var_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_SVarName_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv2_SVarName_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_lambda_body_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UnusedSVarArgMap_21;

  hlds__make_hlds__state_var__record_statevar_if_unused_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_UnusedSVarArgMap_21);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_UnusedSVarArgMap_21));
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_lambda_body_11_p_0(
  MR_Word Context_12,
  MR_Word Modes_13,
  MR_Word NewSVars_14,
  MR_Word FinalMap_15,
  MR_Word ParseTreeGoal_16,
  MR_Word Goals0_17,
  MR_Word * Goal_18,
  MR_Word InitialSVarState_19,
  MR_Word FinalSVarState_20,
  MR_Word STATE_VARIABLE_UrInfo_0_25,
  MR_Word * STATE_VARIABLE_UrInfo_26)
{
  MR_bool succeeded;
  MR_Word VarSet_22;
  MR_Word LastIdMap_23;
  MR_Word UnusedSVarDescs_24;
  MR_Word STATE_VARIABLE_UrInfo_1_27;
  MR_Word Var_32;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Box conv1_UnusedSVarDescs_24;

  hlds__make_hlds__state_var__svar_finish_body_8_p_0(Context_12, FinalMap_15, Goals0_17, Goal_18, InitialSVarState_19, FinalSVarState_20, STATE_VARIABLE_UrInfo_0_25, &STATE_VARIABLE_UrInfo_1_27);
  VarSet_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_27, 3))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_27, 4))));
  LastIdMap_23 = ((MR_Word) ((MR_hl_field(0, Var_32, 2))));
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_6[0]));
    MR_hl_field(0, Var_42, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_finish_lambda_body_11_p_0_1));
    MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_42, 3) = ((MR_Box) (VarSet_22));
    MR_hl_field(0, Var_42, 4) = ((MR_Box) (LastIdMap_23));
  }
  Var_43 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_statevar_arg_desc_0));
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[6]), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[2]), Var_42, NewSVars_14, ((MR_Box) (Var_43)), &conv1_UnusedSVarDescs_24);
  UnusedSVarDescs_24 = ((MR_Word) (conv1_UnusedSVarDescs_24));
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_statevar_arg_desc_0), UnusedSVarDescs_24);
  if (succeeded)
    *STATE_VARIABLE_UrInfo_26 = STATE_VARIABLE_UrInfo_1_27;
  else
  {
    MR_Word VarSet_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_27, 3))));
    MR_Word GoalVarsSet_50;
    MR_Word GoalVars_51;
    MR_Word GoalVarSVarNames_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Box conv4_STATE_VARIABLE_UrInfo_26;

    hlds__goal_vars__non_svar_copy_vars_in_goal_2_p_0(*Goal_18, &GoalVarsSet_50);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVarsSet_50, &GoalVars_51);
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_53, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_7[0]));
      MR_hl_field(0, Var_53, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_finish_lambda_body_11_p_0_2));
      MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_53, 3) = ((MR_Box) (VarSet_49));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_53, GoalVars_51, &GoalVarSVarNames_52);
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_54, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_8[0]));
      MR_hl_field(0, Var_54, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_finish_lambda_body_11_p_0_3));
      MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_54, 3) = ((MR_Box) (Context_12));
      MR_hl_field(0, Var_54, 4) = ((MR_Box) (Modes_13));
      MR_hl_field(0, Var_54, 5) = ((MR_Box) (ParseTreeGoal_16));
      MR_hl_field(0, Var_54, 6) = ((MR_Box) (GoalVarSVarNames_52));
    }
    mercury__map__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_statevar_arg_desc_0), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0), Var_54, UnusedSVarDescs_24, ((MR_Box) (STATE_VARIABLE_UrInfo_1_27)), &conv4_STATE_VARIABLE_UrInfo_26);
    *STATE_VARIABLE_UrInfo_26 = ((MR_Word) (conv4_STATE_VARIABLE_UrInfo_26));
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_clause_body_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_UnusedSVarArgMap_21;

  hlds__make_hlds__state_var__record_statevar_if_unused_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_UnusedSVarArgMap_21);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_UnusedSVarArgMap_21));
}

void MR_CALL 
hlds__make_hlds__state_var__svar_finish_clause_body_12_p_0(
  MR_Word Context_13,
  MR_Word NewSVars_14,
  MR_Word FinalMap_15,
  MR_Word InitialSVarState_16,
  MR_Word FinalSVarState_17,
  MR_Word HeadUnificationsGoal_18,
  MR_Word BodyGoal0_19,
  MR_Word * Goal_20,
  MR_Word * StateVarSpecs_21,
  MR_Word * UnusedSVarDescs_22,
  MR_Word STATE_VARIABLE_UrInfo_0_42,
  MR_Word * STATE_VARIABLE_UrInfo_43)
{
  MR_bool succeeded;
  MR_Word Goal1_24;
  MR_Word SVarStore1_25;
  MR_Word DelayedRenamings_27;
  MR_Word LastIdMap_28;
  MR_Word VarSet_41;
  MR_Word Var_44;
  MR_Word Var_46;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word TypeCtorInfo_83_83;
  MR_Word TypeInfo_84_84;
  MR_Box conv1_UnusedSVarDescs_22;

  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (BodyGoal0_19));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (HeadUnificationsGoal_18));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_46));
  }
  hlds__make_hlds__state_var__svar_finish_body_8_p_0(Context_13, FinalMap_15, Var_44, &Goal1_24, InitialSVarState_16, FinalSVarState_17, STATE_VARIABLE_UrInfo_0_42, STATE_VARIABLE_UrInfo_43);
  SVarStore1_25 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_UrInfo_43, 4))));
  DelayedRenamings_27 = ((MR_Word) ((MR_hl_field(0, SVarStore1_25, 1))));
  LastIdMap_28 = ((MR_Word) ((MR_hl_field(0, SVarStore1_25, 2))));
  *StateVarSpecs_21 = ((MR_Word) ((MR_hl_field(0, SVarStore1_25, 3))));
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), FinalMap_15);
  if (succeeded)
  {
    TypeCtorInfo_83_83 = (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0);
    TypeInfo_84_84 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]);
    succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_83_83, TypeInfo_84_84, DelayedRenamings_27);
  }
  if (succeeded)
    *Goal_20 = Goal1_24;
  else
  {
    MR_Word Goal2_40;
    MR_Word Var_66;
    MR_Word SeenLater0_94;
    MR_Word _SeenLater_95;

    Var_66 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]));
    hlds__hlds_goal__incremental_rename_vars_in_goal_4_p_0(Var_66, DelayedRenamings_27, Goal1_24, &Goal2_40);
    hlds__goal_vars__vars_in_goal_2_p_0(HeadUnificationsGoal_18, &SeenLater0_94);
    hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(Goal2_40, Goal_20, SeenLater0_94, &_SeenLater_95);
  }
  VarSet_41 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_UrInfo_43, 3))));
  {
    Var_96 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_96, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_6[0]));
    MR_hl_field(0, Var_96, 1) = ((MR_Box) (hlds__make_hlds__state_var__svar_finish_clause_body_12_p_0_1));
    MR_hl_field(0, Var_96, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_96, 3) = ((MR_Box) (VarSet_41));
    MR_hl_field(0, Var_96, 4) = ((MR_Box) (LastIdMap_28));
  }
  Var_97 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_statevar_arg_desc_0));
  mercury__map__foldl_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[6]), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[2]), Var_96, NewSVars_14, ((MR_Box) (Var_97)), &conv1_UnusedSVarDescs_22);
  *UnusedSVarDescs_22 = ((MR_Word) (conv1_UnusedSVarDescs_22));
}

static void MR_CALL 
hlds__make_hlds__state_var__delete_unneeded_copy_goals_switch_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SeenAfter_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Case0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Cases0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Case_8;
    MR_Word Cases_9;
    MR_Word SeenBefore_11;
    MR_Word SeenBefores_12;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(0, Case0_6, 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(0, Case0_6, 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(0, Case0_6, 2))));
    MR_Word Goal_16;

    hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(Goal0_15, &Goal_16, SeenAfter_3, &SeenBefore_11);
    {
      Case_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_8, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(0, Case_8, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(0, Case_8, 2) = ((MR_Box) (Goal_16));
    }
    hlds__make_hlds__state_var__delete_unneeded_copy_goals_switch_4_p_0(Cases0_7, &Cases_9, SeenAfter_3, &SeenBefores_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SeenBefore_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (SeenBefores_12));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__delete_unneeded_copy_goals_disj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SeenAfter_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Disjunct0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Disjuncts0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Disjunct_8;
    MR_Word Disjuncts_9;
    MR_Word SeenBefore_11;
    MR_Word SeenBefores_12;

    hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(Disjunct0_6, &Disjunct_8, SeenAfter_3, &SeenBefore_11);
    hlds__make_hlds__state_var__delete_unneeded_copy_goals_disj_4_p_0(Disjuncts0_7, &Disjuncts_9, SeenAfter_3, &SeenBefores_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Disjunct_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Disjuncts_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SeenBefore_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (SeenBefores_12));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__delete_unneeded_copy_goals_rev_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word SeenAfter_3,
  MR_Word * SeenBefore_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *SeenBefore_4 = SeenAfter_3;
  }
  else
  {
    MR_Word RevConjunct0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word RevConjuncts0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word RevConjunct_9;
    MR_Word RevConjuncts_10;
    MR_Word SeenBetween_13;

    hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(RevConjunct0_7, &RevConjunct_9, SeenAfter_3, &SeenBetween_13);
    hlds__make_hlds__state_var__delete_unneeded_copy_goals_rev_conj_4_p_0(RevConjuncts0_8, &RevConjuncts_10, SeenBetween_13, SeenBefore_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (RevConjunct_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (RevConjuncts_10));
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__state_var__IntroducedFrom__pred__delete_unneeded_copy_goals__2440__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word SeenAfter_7,
  MR_Word * SeenBefore_8)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 0))));
  MR_Word GoalInfo_10 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 1))));

  switch (MR_tag((MR_Word) GoalExpr0_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SubGoal0_59 = (MR_Word) ((MR_Word) (GoalExpr0_9));
        MR_Word SubGoal_60;
        MR_Word GoalExpr_135;

        hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(SubGoal0_59, &SubGoal_60, SeenAfter_7, SeenBefore_8);
        GoalExpr_135 = (MR_Word) ((MR_Word) (SubGoal_60));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_135));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word LHSVar_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_9, 0))));
        MR_Word GoalVars0_16;
        MR_Word TypeCtorInfo_159_159;

        hlds__goal_vars__vars_in_goal_2_p_0(Goal0_5, &GoalVars0_16);
        succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_10, (MR_Integer) 16);
        if (succeeded)
        {
          TypeCtorInfo_159_159 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
          succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_159_159, SeenAfter_7, LHSVar_11);
          succeeded = !(succeeded);
        }
        if (succeeded)
        {
          MR_Word Var_109;

          Var_109 = hlds__make_goal__true_goal_expr_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_6 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_109));
            MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
          }
          *SeenBefore_8 = SeenAfter_7;
        }
        else
        {
          parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars0_16, SeenAfter_7, SeenBefore_8);
          *Goal_6 = Goal0_5;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word GoalVars0_129;

        hlds__goal_vars__vars_in_goal_2_p_0(Goal0_5, &GoalVars0_129);
        parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars0_129, SeenAfter_7, SeenBefore_8);
        *Goal_6 = Goal0_5;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          {
            MR_Word GoalVars0_129;

            hlds__goal_vars__vars_in_goal_2_p_0(Goal0_5, &GoalVars0_129);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalVars0_129, SeenAfter_7, SeenBefore_8);
            *Goal_6 = Goal0_5;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ConjKind_35 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, 1))) & (MR_Integer) 1);
            MR_Word Conjuncts0_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 2))));
            MR_Word RevConjuncts0_37;
            MR_Word RevConjuncts_38;
            MR_Word Conjuncts_39;
            MR_Word GoalExpr_40;

            mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conjuncts0_36, &RevConjuncts0_37);
            hlds__make_hlds__state_var__delete_unneeded_copy_goals_rev_conj_4_p_0(RevConjuncts0_37, &RevConjuncts_38, SeenAfter_7, SeenBefore_8);
            mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevConjuncts_38, &Conjuncts_39);
            {
              GoalExpr_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_40, 1) = (MR_Box) ((MR_Unsigned) (ConjKind_35));
              MR_hl_field(3, GoalExpr_40, 2) = ((MR_Box) (Conjuncts_39));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_40));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Disjuncts0_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 1))));
            MR_Word Disjuncts_42;
            MR_Word SeenBefores_43;
            MR_Word GoalExpr_130;

            hlds__make_hlds__state_var__delete_unneeded_copy_goals_disj_4_p_0(Disjuncts0_41, &Disjuncts_42, SeenAfter_7, &SeenBefores_43);
            {
              GoalExpr_130 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_130, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_130, 1) = ((MR_Box) (Disjuncts_42));
            }
            parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenBefores_43, SeenBefore_8);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_130));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word SwitchVar_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 1))));
            MR_Word CanFail_45 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_9, 2))) & (MR_Integer) 1);
            MR_Word Cases0_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 3))));
            MR_Word Cases_47;
            MR_Word SeenBefore0_48;
            MR_Word GoalExpr_131;
            MR_Word SeenBefores_132;

            hlds__make_hlds__state_var__delete_unneeded_copy_goals_switch_4_p_0(Cases0_46, &Cases_47, SeenAfter_7, &SeenBefores_132);
            {
              GoalExpr_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_131, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_131, 1) = ((MR_Box) (SwitchVar_44));
              MR_hl_field(3, GoalExpr_131, 2) = (MR_Box) ((MR_Unsigned) (CanFail_45));
              MR_hl_field(3, GoalExpr_131, 3) = ((MR_Box) (Cases_47));
            }
            parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenBefores_132, &SeenBefore0_48);
            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SwitchVar_44, SeenBefore0_48, SeenBefore_8);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_131));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 1))));
            MR_Word GoalExpr_140;
            MR_Word SubGoal0_142 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 2))));
            MR_Word SubGoal_143;

            switch (MR_tag((MR_Word) Reason_61)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ScopeVars_69 = ((MR_Word) ((MR_hl_field(0, Reason_61, 0))));
                  MR_Word SeenBefore0_138;

                  hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, &SeenBefore0_138);
                  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ScopeVars_69, SeenBefore0_138, SeenBefore_8);
                }
                break;
              case (MR_Integer) 1:
                hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, SeenBefore_8);
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ScopeVars_174 = ((MR_Word) ((MR_hl_field(2, Reason_61, 0))));
                  MR_Word SeenBefore0_175;

                  hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, &SeenBefore0_175);
                  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ScopeVars_174, SeenBefore0_175, SeenBefore_8);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_61, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, SeenBefore_8);
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ScopeVar_64 = ((MR_Word) ((MR_hl_field(3, Reason_61, 1))));
                      MR_Word SeenBefore0_136;

                      hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, &SeenBefore0_136);
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ScopeVar_64, SeenBefore0_136, SeenBefore_8);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ScopeVar_180 = ((MR_Word) ((MR_hl_field(3, Reason_61, 1))));
                      MR_Word SeenBefore0_181;

                      hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, &SeenBefore0_181);
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ScopeVar_180, SeenBefore0_181, SeenBefore_8);
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word TermVar_62 = ((MR_Word) ((MR_hl_field(3, Reason_61, 1))));

                      SubGoal_143 = SubGoal0_142;
                      parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TermVar_62, SeenAfter_7, SeenBefore_8);
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word ScopeVars_177 = ((MR_Word) ((MR_hl_field(3, Reason_61, 5))));
                      MR_Word SeenBefore0_178;

                      hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, &SeenBefore0_178);
                      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ScopeVars_177, SeenBefore0_178, SeenBefore_8);
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Word LCVar_66 = ((MR_Word) ((MR_hl_field(3, Reason_61, 1))));
                      MR_Word LCSVar_67 = ((MR_Word) ((MR_hl_field(3, Reason_61, 2))));
                      MR_Word Var_110;
                      MR_Word Var_111;
                      MR_Word SeenBefore0_137;

                      hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(SubGoal0_142, &SubGoal_143, SeenAfter_7, &SeenBefore0_137);
                      {
                        Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_111, 0) = ((MR_Box) (LCSVar_67));
                        MR_hl_field(1, Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_110, 0) = ((MR_Box) (LCVar_66));
                        MR_hl_field(1, Var_110, 1) = ((MR_Box) (Var_111));
                      }
                      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_110, SeenBefore0_137, SeenBefore_8);
                    }
                    break;
                }
                break;
            }
            {
              GoalExpr_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_140, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, GoalExpr_140, 1) = ((MR_Box) (Reason_61));
              MR_hl_field(3, GoalExpr_140, 2) = ((MR_Box) (SubGoal_143));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_140));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word ITEVars_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 1))));
            MR_Word Cond0_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 2))));
            MR_Word Then0_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 3))));
            MR_Word Else0_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 4))));
            MR_Word Else_53;
            MR_Word SeenBeforeElse_54;
            MR_Word Then_55;
            MR_Word SeenAfterThen_56;
            MR_Word Cond_57;
            MR_Word SeenBeforeCond_58;
            MR_Word GoalExpr_133;
            MR_Word SeenBefore0_134;

            hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(Else0_52, &Else_53, SeenAfter_7, &SeenBeforeElse_54);
            hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(Then0_51, &Then_55, SeenAfter_7, &SeenAfterThen_56);
            hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(Cond0_50, &Cond_57, SeenAfterThen_56, &SeenBeforeCond_58);
            {
              GoalExpr_133 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_133, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_133, 1) = ((MR_Box) (ITEVars_49));
              MR_hl_field(3, GoalExpr_133, 2) = ((MR_Box) (Cond_57));
              MR_hl_field(3, GoalExpr_133, 3) = ((MR_Box) (Then_55));
              MR_hl_field(3, GoalExpr_133, 4) = ((MR_Box) (Else_53));
            }
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenBeforeCond_58, SeenBeforeElse_54, &SeenBefore0_134);
            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ITEVars_49, SeenBefore0_134, SeenBefore_8);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_133));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ShortHand0_82 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_9, 1))));
            MR_Word ShortHand_94;
            MR_Word GoalExpr_158;

            switch (MR_tag((MR_Word) ShortHand0_82)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word LeftGoal0_102 = ((MR_Word) ((MR_hl_field(0, ShortHand0_82, 0))));
                  MR_Word RightGoal0_103 = ((MR_Word) ((MR_hl_field(0, ShortHand0_82, 1))));
                  MR_Word LeftGoal_104;
                  MR_Word SeenBeforeLeft_105;
                  MR_Word RightGoal_106;
                  MR_Word SeenBeforeRight_107;

                  hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(LeftGoal0_102, &LeftGoal_104, SeenAfter_7, &SeenBeforeLeft_105);
                  hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(RightGoal0_103, &RightGoal_106, SeenAfter_7, &SeenBeforeRight_107);
                  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenBeforeLeft_105, SeenBeforeRight_107, SeenBefore_8);
                  {
                    ShortHand_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, ShortHand_94, 0) = ((MR_Box) (LeftGoal_104));
                    MR_hl_field(0, ShortHand_94, 1) = ((MR_Box) (RightGoal_106));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word AtomicType_83 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_82, 0))) & (MR_Integer) 3);
                  MR_Word OuterInitVar_84;
                  MR_Word OuterFinalVar_85;
                  MR_Word InnerInitVar_86;
                  MR_Word InnerFinalVar_87;
                  MR_Word MaybeOutputVars_88 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, 3))));
                  MR_Word OrElseInners_91 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, 6))));
                  MR_Word MainGoal_92;
                  MR_Word OrElseGoals_93;
                  MR_Word SeenBefore1_95;
                  MR_Word Var_113 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, 1))));
                  MR_Word Var_114 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, 2))));
                  MR_Word Var_115;
                  MR_Word Var_123;
                  MR_Word Var_124;
                  MR_Word Var_125;
                  MR_Word Var_126;
                  MR_Word SeenBefores_146;
                  MR_Word SeenBefore0_147;
                  MR_Word Disjunct0_184 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, 4))));
                  MR_Word Disjuncts0_185 = ((MR_Word) ((MR_hl_field(1, ShortHand0_82, 5))));
                  MR_Word SeenBefore_189;
                  MR_Word SeenBefores_190;

                  OuterInitVar_84 = ((MR_Word) ((MR_hl_field(0, Var_113, 0))));
                  OuterFinalVar_85 = ((MR_Word) ((MR_hl_field(0, Var_113, 1))));
                  InnerInitVar_86 = ((MR_Word) ((MR_hl_field(0, Var_114, 0))));
                  InnerFinalVar_87 = ((MR_Word) ((MR_hl_field(0, Var_114, 1))));
                  {
                    Var_115 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_115, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_4[1]));
                    MR_hl_field(0, Var_115, 1) = ((MR_Box) (hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0_1));
                    MR_hl_field(0, Var_115, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_115, 3) = ((MR_Box) (OrElseInners_91));
                    MR_hl_field(0, Var_115, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  mercury__require__expect_3_p_0(Var_115, (MR_String) "predicate \140hlds.make_hlds.state_var.delete_unneeded_copy_goals\'/4", (MR_String) "OrElseInners != []");
                  hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(Disjunct0_184, &MainGoal_92, SeenAfter_7, &SeenBefore_189);
                  hlds__make_hlds__state_var__delete_unneeded_copy_goals_disj_4_p_0(Disjuncts0_185, &OrElseGoals_93, SeenAfter_7, &SeenBefores_190);
                  {
                    SeenBefores_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SeenBefores_146, 0) = ((MR_Box) (SeenBefore_189));
                    MR_hl_field(1, SeenBefores_146, 1) = ((MR_Box) (SeenBefores_190));
                  }
                  {
                    ShortHand_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, ShortHand_94, 0) = (MR_Box) ((MR_Unsigned) (AtomicType_83));
                    MR_hl_field(1, ShortHand_94, 1) = ((MR_Box) (Var_113));
                    MR_hl_field(1, ShortHand_94, 2) = ((MR_Box) (Var_114));
                    MR_hl_field(1, ShortHand_94, 3) = ((MR_Box) (MaybeOutputVars_88));
                    MR_hl_field(1, ShortHand_94, 4) = ((MR_Box) (MainGoal_92));
                    MR_hl_field(1, ShortHand_94, 5) = ((MR_Box) (OrElseGoals_93));
                    MR_hl_field(1, ShortHand_94, 6) = ((MR_Box) (OrElseInners_91));
                  }
                  parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SeenBefores_146, &SeenBefore0_147);
                  {
                    Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_126, 0) = ((MR_Box) (InnerFinalVar_87));
                    MR_hl_field(1, Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_125, 0) = ((MR_Box) (InnerInitVar_86));
                    MR_hl_field(1, Var_125, 1) = ((MR_Box) (Var_126));
                  }
                  {
                    Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_124, 0) = ((MR_Box) (OuterFinalVar_85));
                    MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_125));
                  }
                  {
                    Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_123, 0) = ((MR_Box) (OuterInitVar_84));
                    MR_hl_field(1, Var_123, 1) = ((MR_Box) (Var_124));
                  }
                  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_123, SeenBefore0_147, &SeenBefore1_95);
                  if ((MaybeOutputVars_88 == (MR_Word) ((MR_Unsigned) 0U)))
                    *SeenBefore_8 = SeenBefore1_95;
                  else
                  {
                    MR_Word OutputVars_96 = ((MR_Word) ((MR_hl_field(1, MaybeOutputVars_88, 0))));

                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutputVars_96, SeenBefore1_95, SeenBefore_8);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word MaybeIOStateVars_97 = ((MR_Word) ((MR_hl_field(2, ShortHand0_82, 0))));
                  MR_Word ResultVar_98 = ((MR_Word) ((MR_hl_field(2, ShortHand0_82, 1))));
                  MR_Word SeenBefore0_148;
                  MR_Word SubGoal0_149 = ((MR_Word) ((MR_hl_field(2, ShortHand0_82, 2))));
                  MR_Word SubGoal_150;
                  MR_Word SeenBefore1_151;

                  hlds__make_hlds__state_var__delete_unneeded_copy_goals_4_p_0(SubGoal0_149, &SubGoal_150, SeenAfter_7, &SeenBefore0_148);
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResultVar_98, SeenBefore0_148, &SeenBefore1_151);
                  if ((MaybeIOStateVars_97 == (MR_Word) ((MR_Unsigned) 0U)))
                    *SeenBefore_8 = SeenBefore1_151;
                  else
                  {
                    MR_Word InitVar_99;
                    MR_Word FinalVar_100;
                    MR_Word SeenBefore2_101;
                    MR_Word Var_128 = ((MR_Word) ((MR_hl_field(1, MaybeIOStateVars_97, 0))));

                    InitVar_99 = ((MR_Word) ((MR_hl_field(0, Var_128, 0))));
                    FinalVar_100 = ((MR_Word) ((MR_hl_field(0, Var_128, 1))));
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), InitVar_99, SeenBefore1_151, &SeenBefore2_101);
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FinalVar_100, SeenBefore2_101, SeenBefore_8);
                  }
                  {
                    ShortHand_94 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, ShortHand_94, 0) = ((MR_Box) (MaybeIOStateVars_97));
                    MR_hl_field(2, ShortHand_94, 1) = ((MR_Box) (ResultVar_98));
                    MR_hl_field(2, ShortHand_94, 2) = ((MR_Box) (SubGoal_150));
                  }
                }
                break;
            }
            {
              GoalExpr_158 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_158, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, GoalExpr_158, 1) = ((MR_Box) (ShortHand_94));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_158));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_10));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_finish_body_8_p_0(
  MR_Word Context_9,
  MR_Word FinalMap_10,
  MR_Word Goals0_11,
  MR_Word * Goal_12,
  MR_Word InitialSVarState_13,
  MR_Word FinalSVarState_14,
  MR_Word STATE_VARIABLE_UrInfo_0_47,
  MR_Word * STATE_VARIABLE_UrInfo_48)
{
  MR_bool succeeded;
  MR_Word FinalAssocList_16;
  MR_Word InitialSVarStatusMap_17;
  MR_Word FinalSVarStatusMap_18;
  MR_Word FinalSVarSubn_19;
  MR_Word CopyGoals_20;
  MR_Word Goals1_21;
  MR_Word Goal1_24;
  MR_Word GoalExpr1_25;
  MR_Word GoalInfo1_26;
  MR_Word GoalId1_27;
  MR_Word SVarStore1_28;
  MR_Word NextGoalId1_29;
  MR_Word DelayedRenamingMap1_30;
  MR_Word LastIdMap1_31;
  MR_Word StateVarSpecs1_32;
  MR_Word DelayedRenamingMap_39;
  MR_Word NextGoalId_40;
  MR_Word SVarStore_46;
  MR_Word STATE_VARIABLE_UrInfo_1_51;
  MR_Word DelayedRenaming0_33;
  MR_Box conv0_DelayedRenaming0_33;
  MR_Word Var_97;
  MR_Integer Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_102;

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), FinalMap_10, &FinalAssocList_16);
  InitialSVarStatusMap_17 = (MR_Word) (InitialSVarState_13);
  FinalSVarStatusMap_18 = (MR_Word) (FinalSVarState_14);
  hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_p_0(FinalAssocList_16, InitialSVarStatusMap_17, FinalSVarStatusMap_18, (MR_Word) ((MR_Unsigned) 0U), &FinalSVarSubn_19, (MR_Word) ((MR_Unsigned) 0U), &CopyGoals_20);
  if ((CopyGoals_20 == (MR_Word) ((MR_Unsigned) 0U)))
    Goals1_21 = Goals0_11;
  else
    Goals1_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_11, CopyGoals_20);
  hlds__make_hlds__state_var__svar_flatten_conj_5_p_0(Context_9, Goals1_21, &Goal1_24, STATE_VARIABLE_UrInfo_0_47, &STATE_VARIABLE_UrInfo_1_51);
  GoalExpr1_25 = ((MR_Word) ((MR_hl_field(0, Goal1_24, 0))));
  GoalInfo1_26 = ((MR_Word) ((MR_hl_field(0, Goal1_24, 1))));
  GoalId1_27 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo1_26);
  SVarStore1_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_51, 4))));
  NextGoalId1_29 = ((MR_Word) ((MR_hl_field(0, SVarStore1_28, 0))));
  DelayedRenamingMap1_30 = ((MR_Word) ((MR_hl_field(0, SVarStore1_28, 1))));
  LastIdMap1_31 = ((MR_Word) ((MR_hl_field(0, SVarStore1_28, 2))));
  StateVarSpecs1_32 = ((MR_Word) ((MR_hl_field(0, SVarStore1_28, 3))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), DelayedRenamingMap1_30, ((MR_Box) (GoalId1_27)), &conv0_DelayedRenaming0_33);
  if (succeeded)
  {
    DelayedRenaming0_33 = ((MR_Word) (conv0_DelayedRenaming0_33));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_62;

    Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[0]), DelayedRenaming0_33, FinalSVarSubn_19);
    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), ((MR_Box) (GoalId1_27)), ((MR_Box) (Var_62)), DelayedRenamingMap1_30, &DelayedRenamingMap_39);
    NextGoalId_40 = NextGoalId1_29;
    *Goal_12 = Goal1_24;
  }
  else
  if ((FinalSVarSubn_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    NextGoalId_40 = NextGoalId1_29;
    DelayedRenamingMap_39 = DelayedRenamingMap1_30;
    *Goal_12 = Goal1_24;
  }
  else
  {
    MR_Unsigned GoalIdNum_43;
    MR_Word GoalId_44;
    MR_Word GoalInfo_45;

    mercury__counter__uallocate_3_p_0(&GoalIdNum_43, NextGoalId1_29, &NextGoalId_40);
    GoalId_44 = (MR_Word) (GoalIdNum_43);
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]), ((MR_Box) (GoalId_44)), ((MR_Box) (FinalSVarSubn_19)), DelayedRenamingMap1_30, &DelayedRenamingMap_39);
    hlds__hlds_goal__goal_info_set_goal_id_3_p_0(GoalId_44, GoalInfo1_26, &GoalInfo_45);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr1_25));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_45));
    }
  }
  {
    SVarStore_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SVarStore_46, 0) = ((MR_Box) (NextGoalId_40));
    MR_hl_field(0, SVarStore_46, 1) = ((MR_Box) (DelayedRenamingMap_39));
    MR_hl_field(0, SVarStore_46, 2) = ((MR_Box) (LastIdMap1_31));
    MR_hl_field(0, SVarStore_46, 3) = ((MR_Box) (StateVarSpecs1_32));
  }
  Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_51, 0))));
  Var_98 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_51, 1))));
  Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_51, 2))));
  Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_51, 3))));
  Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_51, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_48 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_97));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_98));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_99));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_100));
    MR_hl_field(0, base, 4) = ((MR_Box) (SVarStore_46));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_102));
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_find_final_renames_and_copy_goals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InitialStatusMap_2,
  MR_Word FinalStatusMap_3,
  MR_Word STATE_VARIABLE_FinalSVarSubn_0_4,
  MR_Word * STATE_VARIABLE_FinalSVarSubn_5,
  MR_Word STATE_VARIABLE_CopyGoals_0_6,
  MR_Word * STATE_VARIABLE_CopyGoals_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CopyGoals_7 = STATE_VARIABLE_CopyGoals_0_6;
      *STATE_VARIABLE_FinalSVarSubn_5 = STATE_VARIABLE_FinalSVarSubn_0_4;
    }
    else
    {
      MR_Word Head_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Tail_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word SVar_22 = ((MR_Word) ((MR_hl_field(0, Head_16, 0))));
      MR_Word FinalHeadVar_23 = ((MR_Word) ((MR_hl_field(0, Head_16, 1))));
      MR_Word InitialStatus_24;
      MR_Word FinalStatus_25;
      MR_Word STATE_VARIABLE_CopyGoals_1_38;
      MR_Word STATE_VARIABLE_FinalSVarSubn_1_39;
      MR_Box conv0_InitialStatus_24;
      MR_Box conv1_FinalStatus_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_FinalSVarSubn_0_4;
      MR_Word next_value_of_STATE_VARIABLE_CopyGoals_0_6;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), InitialStatusMap_2, ((MR_Box) (SVar_22)), &conv0_InitialStatus_24);
      InitialStatus_24 = ((MR_Word) (conv0_InitialStatus_24));
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), FinalStatusMap_3, ((MR_Box) (SVar_22)), &conv1_FinalStatus_25);
      FinalStatus_25 = ((MR_Word) (conv1_FinalStatus_25));
      switch (MR_tag((MR_Word) FinalStatus_25)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_FinalSVarSubn_1_39 = STATE_VARIABLE_FinalSVarSubn_0_4;
            STATE_VARIABLE_CopyGoals_1_38 = STATE_VARIABLE_CopyGoals_0_6;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_find_final_renames_and_copy_goals\'/7", (MR_String) "updated status");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_find_final_renames_and_copy_goals\'/7", (MR_String) "readonly status");
            return;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, FinalStatus_25, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word LastVar_26 = ((MR_Word) ((MR_hl_field(3, FinalStatus_25, 1))));

                succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(FinalStatus_25, InitialStatus_24);
                if (succeeded)
                {
                  MR_Word CopyGoal_27;
                  MR_Word CopyGoal0_47;
                  MR_Word Var_48;
                  MR_Word Var_49;

                  {
                    Var_48 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_48, 0) = ((MR_Box) (LastVar_26));
                  }
                  Var_49 = mercury__term_context__dummy_context_0_f_0();
                  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(FinalHeadVar_23, Var_48, Var_49, (MR_Word) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_3[3])), (MR_Word) ((MR_Unsigned) 0U), &CopyGoal0_47);
                  hlds__hlds_goal__goal_add_features_3_p_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[42])), CopyGoal0_47, &CopyGoal_27);
                  {
                    STATE_VARIABLE_CopyGoals_1_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_CopyGoals_1_38, 0) = ((MR_Box) (CopyGoal_27));
                    MR_hl_field(1, STATE_VARIABLE_CopyGoals_1_38, 1) = ((MR_Box) (STATE_VARIABLE_CopyGoals_0_6));
                  }
                  STATE_VARIABLE_FinalSVarSubn_1_39 = STATE_VARIABLE_FinalSVarSubn_0_4;
                }
                else
                {
                  MR_Word Var_40;

                  {
                    Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_40, 0) = ((MR_Box) (LastVar_26));
                    MR_hl_field(0, Var_40, 1) = ((MR_Box) (FinalHeadVar_23));
                  }
                  {
                    STATE_VARIABLE_FinalSVarSubn_1_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, STATE_VARIABLE_FinalSVarSubn_1_39, 0) = ((MR_Box) (Var_40));
                    MR_hl_field(1, STATE_VARIABLE_FinalSVarSubn_1_39, 1) = ((MR_Box) (STATE_VARIABLE_FinalSVarSubn_0_4));
                  }
                  STATE_VARIABLE_CopyGoals_1_38 = STATE_VARIABLE_CopyGoals_0_6;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_find_final_renames_and_copy_goals\'/7", (MR_String) "updated status");
                return;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Tail_17;
      next_value_of_STATE_VARIABLE_FinalSVarSubn_0_4 = STATE_VARIABLE_FinalSVarSubn_1_39;
      next_value_of_STATE_VARIABLE_CopyGoals_0_6 = STATE_VARIABLE_CopyGoals_1_38;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_FinalSVarSubn_0_4 = next_value_of_STATE_VARIABLE_FinalSVarSubn_0_4;
      STATE_VARIABLE_CopyGoals_0_6 = next_value_of_STATE_VARIABLE_CopyGoals_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_status_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_18 == CastX_17);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_26_26;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            TypeInfo_26_26 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_22_22;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;
          MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 2))));
          MR_Word ArgY3_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY3_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
            TypeInfo_22_22 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
            if (succeeded)
              succeeded = mercury__term_context____Unify____term_context_0_0(ArgX3_9, ArgY3_10);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_21_21;
              MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                TypeInfo_21_21 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_24_24;
              MR_Word TypeInfo_25_25;
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_14;
              MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word ArgY2_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                TypeInfo_24_24 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX1_13)), ((MR_Box) (ArgY1_14)));
                if (succeeded)
                {
                  TypeInfo_25_25 = (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX2_15)), ((MR_Box) (ArgY2_16)));
                }
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_flatten_conj_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Conjuncts_6;
  MR_Word conv0_STATE_VARIABLE_UrInfo_22;

  hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Conjuncts_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_UrInfo_22);
  *wrapper_arg_2 = ((MR_Box) (conv1_Conjuncts_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_UrInfo_22));
}

void MR_CALL 
hlds__make_hlds__state_var__svar_flatten_conj_5_p_0(
  MR_Word Context_6,
  MR_Word Goals_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_UrInfo_0_14,
  MR_Word * STATE_VARIABLE_UrInfo_15)
{
  MR_Word GoalConjuncts_10;
  MR_Word Conjuncts_11;
  MR_Word GoalExpr_12;
  MR_Word GoalInfo_13;
  MR_Box conv2_STATE_VARIABLE_UrInfo_15;

  mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[4]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[7]), Goals_7, &GoalConjuncts_10, ((MR_Box) (STATE_VARIABLE_UrInfo_0_14)), &conv2_STATE_VARIABLE_UrInfo_15);
  *STATE_VARIABLE_UrInfo_15 = ((MR_Word) (conv2_STATE_VARIABLE_UrInfo_15));
  mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalConjuncts_10, &Conjuncts_11);
  {
    GoalExpr_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_12, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_12, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_12, 2) = ((MR_Box) (Conjuncts_11));
  }
  hlds__hlds_goal__goal_info_init_2_p_0(Context_6, &GoalInfo_13);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_13));
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_for_lambda_head_9_p_0(
  MR_Word Context_10,
  MR_Word Args0_11,
  MR_Word * Args_12,
  MR_Word * FinalMap_13,
  MR_Word * NewSVars_14,
  MR_Word OutsideState_15,
  MR_Word * InsideState_16,
  MR_Word STATE_VARIABLE_UrInfo_0_23,
  MR_Word * STATE_VARIABLE_UrInfo_24)
{
  MR_Word OutsideStatusMap_18 = (MR_Word) (OutsideState_15);
  MR_Word OutsideStatusList_19;
  MR_Word InsideStatusList_20;
  MR_Word InsideStatusMap_21;
  MR_Word InsideState0_22;
  MR_Word Var_28;
  MR_Word Var_29;

  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), OutsideStatusMap_18, &OutsideStatusList_19);
  hlds__make_hlds__state_var__make_svars_read_only_4_p_0(Context_10, OutsideStatusList_19, &InsideStatusList_20);
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), InsideStatusList_20, &InsideStatusMap_21);
  InsideState0_22 = (MR_Word) (InsideStatusMap_21);
  Var_28 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]));
  Var_29 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_maybe_statevar_arg_pos_0));
  hlds__make_hlds__state_var__svar_prepare_head_terms_12_p_0((MR_Unsigned) 0U, (MR_Unsigned) 1U, Args0_11, Args_12, Var_28, FinalMap_13, InsideState0_22, InsideState_16, Var_29, NewSVars_14, STATE_VARIABLE_UrInfo_0_23, STATE_VARIABLE_UrInfo_24);
}

static void MR_CALL 
hlds__make_hlds__state_var__make_svars_read_only_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word SVar_9;
    MR_Word CurStatus_10;
    MR_Word CurTail_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word LambdaTail_13;
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    SVar_9 = ((MR_Word) ((MR_hl_field(0, Var_21, 0))));
    CurStatus_10 = ((MR_Word) ((MR_hl_field(0, Var_21, 1))));
    hlds__make_hlds__state_var__make_svars_read_only_4_p_0(HeadVar__2_2, CurTail_11, &LambdaTail_13);
    switch (MR_tag((MR_Word) CurStatus_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        *HeadVar__4_4 = LambdaTail_13;
        break;
      case (MR_Integer) 2:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_21));
          MR_hl_field(1, base, 1) = ((MR_Box) (LambdaTail_13));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, CurStatus_10, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_18 = ((MR_Word) ((MR_hl_field(3, CurStatus_10, 1))));
              MR_Word LambdaStatus_20;
              MR_Word Var_23;

              {
                LambdaStatus_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, LambdaStatus_20, 0) = ((MR_Box) (Var_18));
                MR_hl_field(2, LambdaStatus_20, 1) = NULL;
                MR_hl_field(2, LambdaStatus_20, 2) = ((MR_Box) (HeadVar__2_2));
              }
              {
                Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_23, 0) = ((MR_Box) (SVar_9));
                MR_hl_field(0, Var_23, 1) = ((MR_Box) (LambdaStatus_20));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_23));
                MR_hl_field(1, base, 1) = ((MR_Box) (LambdaTail_13));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_24 = ((MR_Word) ((MR_hl_field(3, CurStatus_10, 1))));
              MR_Word LambdaStatus_25;
              MR_Word Var_26;

              {
                LambdaStatus_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, LambdaStatus_25, 0) = ((MR_Box) (Var_24));
                MR_hl_field(2, LambdaStatus_25, 1) = NULL;
                MR_hl_field(2, LambdaStatus_25, 2) = ((MR_Box) (HeadVar__2_2));
              }
              {
                Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_26, 0) = ((MR_Box) (SVar_9));
                MR_hl_field(0, Var_26, 1) = ((MR_Box) (LambdaStatus_25));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_26));
                MR_hl_field(1, base, 1) = ((MR_Box) (LambdaTail_13));
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_for_clause_head_9_p_0(
  MR_Word ModuleInfo0_10,
  MR_Word QualInfo0_11,
  MR_Word VarSet0_12,
  MR_Word Args0_13,
  MR_Word * Args_14,
  MR_Word * FinalMap_15,
  MR_Word * NewSVars_16,
  MR_Word * STATE_VARIABLE_SVarState_24,
  MR_Word * STATE_VARIABLE_UrInfo_25)
{
  MR_Word Globals_19;
  MR_Word OptTuple_20;
  MR_Integer Threshold_21;
  MR_Word SVarStore0_22;
  MR_Word STATE_VARIABLE_SVarState_1_26;
  MR_Word STATE_VARIABLE_UrInfo_1_27;
  MR_Word Var_30;
  MR_Word Var_32;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo0_10, &Globals_19);
  libs__globals__get_opt_tuple_2_p_0(Globals_19, &OptTuple_20);
  Threshold_21 = ((MR_Integer) ((MR_hl_field(0, OptTuple_20, 8))));
  STATE_VARIABLE_SVarState_1_26 = hlds__make_hlds__state_var__new_svar_state_0_f_0();
  SVarStore0_22 = hlds__make_hlds__state_var__new_svar_store_0_f_0();
  {
    STATE_VARIABLE_UrInfo_1_27 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_UrInfo_1_27, 0) = ((MR_Box) (ModuleInfo0_10));
    MR_hl_field(0, STATE_VARIABLE_UrInfo_1_27, 1) = ((MR_Box) (Threshold_21));
    MR_hl_field(0, STATE_VARIABLE_UrInfo_1_27, 2) = ((MR_Box) (QualInfo0_11));
    MR_hl_field(0, STATE_VARIABLE_UrInfo_1_27, 3) = ((MR_Box) (VarSet0_12));
    MR_hl_field(0, STATE_VARIABLE_UrInfo_1_27, 4) = ((MR_Box) (SVarStore0_22));
    MR_hl_field(0, STATE_VARIABLE_UrInfo_1_27, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_30 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]));
  Var_32 = hlds__make_hlds__state_var__init_new_statevar_map_0_f_0();
  hlds__make_hlds__state_var__svar_prepare_head_terms_12_p_0((MR_Unsigned) 0U, (MR_Unsigned) 1U, Args0_13, Args_14, Var_30, FinalMap_15, STATE_VARIABLE_SVarState_1_26, STATE_VARIABLE_SVarState_24, Var_32, NewSVars_16, STATE_VARIABLE_UrInfo_1_27, STATE_VARIABLE_UrInfo_25);
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_head_term_12_p_0(
  MR_Unsigned CurDepth_13,
  MR_Unsigned CurArgNum_14,
  MR_Word Term0_15,
  MR_Word * Term_16,
  MR_Word STATE_VARIABLE_FinalMap_0_51,
  MR_Word * STATE_VARIABLE_FinalMap_52,
  MR_Word STATE_VARIABLE_SVarState_0_53,
  MR_Word * STATE_VARIABLE_SVarState_54,
  MR_Word STATE_VARIABLE_NewSVars_0_55,
  MR_Word * STATE_VARIABLE_NewSVars_56,
  MR_Word STATE_VARIABLE_UrInfo_0_57,
  MR_Word * STATE_VARIABLE_UrInfo_58)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Term0_15)) == (MR_Integer) 0))
  {
    MR_Word Functor_23 = ((MR_Word) ((MR_hl_field(0, Term0_15, 0))));
    MR_Word SubTerms0_24 = ((MR_Word) ((MR_hl_field(0, Term0_15, 1))));
    MR_Word Context_25 = ((MR_Word) ((MR_hl_field(0, Term0_15, 2))));
    MR_Word StateVar_26;
    MR_String Var_59;
    MR_Word Var_60;
    MR_Word Var_61;

    succeeded = ((MR_tag((MR_Word) Functor_23)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_59 = ((MR_String) ((MR_hl_field(0, Functor_23, 0))));
      succeeded = (strcmp(Var_59, (MR_String) "!.") == 0);
      if (succeeded)
      {
        succeeded = (SubTerms0_24 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_60 = ((MR_Word) ((MR_hl_field(1, SubTerms0_24, 0))));
          Var_61 = ((MR_Word) ((MR_hl_field(1, SubTerms0_24, 1))));
          succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_Integer) 1);
            if (succeeded)
              StateVar_26 = ((MR_Word) ((MR_hl_field(1, Var_60, 0))));
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word StatusMap0_28 = (MR_Word) (STATE_VARIABLE_SVarState_0_53);
      MR_Word StatusMap_32;
      MR_Word MaybeArgPos_39;
      MR_Word OldStatus_29;
      MR_Box conv0_OldStatus_29;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMap0_28, ((MR_Box) (StateVar_26)), &conv0_OldStatus_29);
      if (succeeded)
      {
        OldStatus_29 = ((MR_Word) (conv0_OldStatus_29));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        switch (MR_tag((MR_Word) OldStatus_29)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_30;
              MR_Word Status_31;

              hlds__make_hlds__state_var__new_state_var_instance_5_p_0(StateVar_26, (MR_Integer) 0, &Var_30, STATE_VARIABLE_UrInfo_0_57, STATE_VARIABLE_UrInfo_58);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Term_16 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_30));
                MR_hl_field(1, base, 1) = ((MR_Box) (Context_25));
              }
              {
                Status_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Status_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Status_31, 1) = ((MR_Box) (Var_30));
              }
              mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (StateVar_26)), ((MR_Box) (Status_31)), StatusMap0_28, &StatusMap_32);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/12", (MR_String) "status_unknown_updated for !.");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_95;
              MR_Word Status_96;

              hlds__make_hlds__state_var__new_state_var_instance_5_p_0(StateVar_26, (MR_Integer) 0, &Var_95, STATE_VARIABLE_UrInfo_0_57, STATE_VARIABLE_UrInfo_58);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Term_16 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_95));
                MR_hl_field(1, base, 1) = ((MR_Box) (Context_25));
              }
              {
                Status_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Status_96, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Status_96, 1) = ((MR_Box) (Var_95));
              }
              mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (StateVar_26)), ((MR_Box) (Status_96)), StatusMap0_28, &StatusMap_32);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, OldStatus_29, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_94 = ((MR_Word) ((MR_hl_field(3, OldStatus_29, 1))));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Term_16 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_94));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Context_25));
                  }
                  StatusMap_32 = StatusMap0_28;
                  *STATE_VARIABLE_UrInfo_58 = STATE_VARIABLE_UrInfo_0_57;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/12", (MR_String) "status_known_updated for !.");
                  return;
                }
                break;
            }
            break;
        }
      else
      {
        MR_Word Var_97;
        MR_Word Status_98;

        hlds__make_hlds__state_var__new_state_var_instance_5_p_0(StateVar_26, (MR_Integer) 0, &Var_97, STATE_VARIABLE_UrInfo_0_57, STATE_VARIABLE_UrInfo_58);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Term_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_97));
          MR_hl_field(1, base, 1) = ((MR_Box) (Context_25));
        }
        {
          Status_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Status_98, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Status_98, 1) = ((MR_Box) (Var_97));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (StateVar_26)), ((MR_Box) (Status_98)), StatusMap0_28, &StatusMap_32);
      }
      *STATE_VARIABLE_SVarState_54 = (MR_Word) (StatusMap_32);
      succeeded = (CurDepth_13 == (MR_Unsigned) 0U);
      if (succeeded)
        {
          MaybeArgPos_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeArgPos_39, 0) = ((MR_Box) (CurArgNum_14));
        }
      else
        MaybeArgPos_39 = (MR_Word) ((MR_Unsigned) 0U);
      mercury__one_or_more_map__add_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_maybe_statevar_arg_pos_0), ((MR_Box) (StateVar_26)), ((MR_Box) (MaybeArgPos_39)), STATE_VARIABLE_NewSVars_0_55, STATE_VARIABLE_NewSVars_56);
      *STATE_VARIABLE_FinalMap_52 = STATE_VARIABLE_FinalMap_0_51;
    }
    else
    {
      MR_Word StateVar_106;
      MR_String Var_74;
      MR_Word Var_75;
      MR_Word Var_76;

      succeeded = ((MR_tag((MR_Word) Functor_23)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_74 = ((MR_String) ((MR_hl_field(0, Functor_23, 0))));
        succeeded = (strcmp(Var_74, (MR_String) "!:") == 0);
        if (succeeded)
        {
          succeeded = (SubTerms0_24 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_75 = ((MR_Word) ((MR_hl_field(1, SubTerms0_24, 0))));
            Var_76 = ((MR_Word) ((MR_hl_field(1, SubTerms0_24, 1))));
            succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_75)) == (MR_Integer) 1);
              if (succeeded)
                StateVar_106 = ((MR_Word) ((MR_hl_field(1, Var_75, 0))));
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word MaybeOldVar_48;
        MR_Word STATE_VARIABLE_UrInfo_4_78;
        MR_Word StatusMap0_100;
        MR_Word Var_102;
        MR_Word StatusMap_104;
        MR_Word MaybeArgPos_105;
        MR_Word OldStatus_99;
        MR_Box conv1_OldStatus_99;

        hlds__make_hlds__state_var__new_state_var_instance_5_p_0(StateVar_106, (MR_Integer) 2, &Var_102, STATE_VARIABLE_UrInfo_0_57, &STATE_VARIABLE_UrInfo_4_78);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Term_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_102));
          MR_hl_field(1, base, 1) = ((MR_Box) (Context_25));
        }
        StatusMap0_100 = (MR_Word) (STATE_VARIABLE_SVarState_0_53);
        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), StatusMap0_100, ((MR_Box) (StateVar_106)), &conv1_OldStatus_99);
        if (succeeded)
        {
          OldStatus_99 = ((MR_Word) (conv1_OldStatus_99));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          switch (MR_tag((MR_Word) OldStatus_99)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              StatusMap_104 = StatusMap0_100;
              break;
            case (MR_Integer) 1:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/12", (MR_String) "status_unknown_updated for !:");
                return;
              }
              break;
            case (MR_Integer) 2:
              mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (StateVar_106)), ((MR_Box) ((MR_Unsigned) 0U)), StatusMap0_100, &StatusMap_104);
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, OldStatus_99, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  StatusMap_104 = StatusMap0_100;
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.state_var.svar_prepare_head_term\'/12", (MR_String) "status_known_updated for !:");
                    return;
                  }
                  break;
              }
              break;
          }
        else
          mercury__map__det_insert_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0), ((MR_Box) (StateVar_106)), ((MR_Box) ((MR_Unsigned) 0U)), StatusMap0_100, &StatusMap_104);
        *STATE_VARIABLE_SVarState_54 = (MR_Word) (StatusMap_104);
        mercury__map__search_insert_5_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), ((MR_Box) (StateVar_106)), ((MR_Box) (Var_102)), &MaybeOldVar_48, STATE_VARIABLE_FinalMap_0_51, STATE_VARIABLE_FinalMap_52);
        if ((MaybeOldVar_48 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_UrInfo_58 = STATE_VARIABLE_UrInfo_4_78;
        else
          hlds__make_hlds__state_var__report_repeated_head_state_var_4_p_0(Context_25, StateVar_106, STATE_VARIABLE_UrInfo_4_78, STATE_VARIABLE_UrInfo_58);
        succeeded = (CurDepth_13 == (MR_Unsigned) 0U);
        if (succeeded)
          {
            MaybeArgPos_105 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, MaybeArgPos_105, 0) = ((MR_Box) (CurArgNum_14));
          }
        else
          MaybeArgPos_105 = (MR_Word) ((MR_Unsigned) 0U);
        mercury__one_or_more_map__add_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_maybe_statevar_arg_pos_0), ((MR_Box) (StateVar_106)), ((MR_Box) (MaybeArgPos_105)), STATE_VARIABLE_NewSVars_0_55, STATE_VARIABLE_NewSVars_56);
      }
      else
      {
        MR_Word SubTerms_50;
        MR_Unsigned Var_87 = (CurDepth_13 + (MR_Unsigned) 1U);

        hlds__make_hlds__state_var__svar_prepare_head_terms_12_p_0(Var_87, (MR_Unsigned) 1U, SubTerms0_24, &SubTerms_50, STATE_VARIABLE_FinalMap_0_51, STATE_VARIABLE_FinalMap_52, STATE_VARIABLE_SVarState_0_53, STATE_VARIABLE_SVarState_54, STATE_VARIABLE_NewSVars_0_55, STATE_VARIABLE_NewSVars_56, STATE_VARIABLE_UrInfo_0_57, STATE_VARIABLE_UrInfo_58);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *Term_16 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Functor_23));
          MR_hl_field(0, base, 1) = ((MR_Box) (SubTerms_50));
          MR_hl_field(0, base, 2) = ((MR_Box) (Context_25));
        }
      }
    }
  }
  else
  {
    *Term_16 = Term0_15;
    *STATE_VARIABLE_FinalMap_52 = STATE_VARIABLE_FinalMap_0_51;
    *STATE_VARIABLE_SVarState_54 = STATE_VARIABLE_SVarState_0_53;
    *STATE_VARIABLE_NewSVars_56 = STATE_VARIABLE_NewSVars_0_55;
    *STATE_VARIABLE_UrInfo_58 = STATE_VARIABLE_UrInfo_0_57;
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__svar_prepare_head_terms_12_p_0(
  MR_Unsigned CurDepth_1,
  MR_Unsigned CurArgNum_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_FinalMap_0_5,
  MR_Word * STATE_VARIABLE_FinalMap_6,
  MR_Word STATE_VARIABLE_SVarState_0_7,
  MR_Word * STATE_VARIABLE_SVarState_8,
  MR_Word STATE_VARIABLE_NewSVars_0_9,
  MR_Word * STATE_VARIABLE_NewSVars_10,
  MR_Word STATE_VARIABLE_UrInfo_0_11,
  MR_Word * STATE_VARIABLE_UrInfo_12)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UrInfo_12 = STATE_VARIABLE_UrInfo_0_11;
    *STATE_VARIABLE_NewSVars_10 = STATE_VARIABLE_NewSVars_0_9;
    *STATE_VARIABLE_SVarState_8 = STATE_VARIABLE_SVarState_0_7;
    *STATE_VARIABLE_FinalMap_6 = STATE_VARIABLE_FinalMap_0_5;
  }
  else
  {
    MR_Word Term0_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Terms0_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Term_31;
    MR_Word Terms_32;
    MR_Word STATE_VARIABLE_FinalMap_1_45;
    MR_Word STATE_VARIABLE_SVarState_1_46;
    MR_Word STATE_VARIABLE_NewSVars_1_47;
    MR_Word STATE_VARIABLE_UrInfo_1_48;
    MR_Unsigned Var_49;

    hlds__make_hlds__state_var__svar_prepare_head_term_12_p_0(CurDepth_1, CurArgNum_2, Term0_29, &Term_31, STATE_VARIABLE_FinalMap_0_5, &STATE_VARIABLE_FinalMap_1_45, STATE_VARIABLE_SVarState_0_7, &STATE_VARIABLE_SVarState_1_46, STATE_VARIABLE_NewSVars_0_9, &STATE_VARIABLE_NewSVars_1_47, STATE_VARIABLE_UrInfo_0_11, &STATE_VARIABLE_UrInfo_1_48);
    Var_49 = (CurArgNum_2 + (MR_Unsigned) 1U);
    hlds__make_hlds__state_var__svar_prepare_head_terms_12_p_0(CurDepth_1, Var_49, Terms0_30, &Terms_32, STATE_VARIABLE_FinalMap_1_45, STATE_VARIABLE_FinalMap_6, STATE_VARIABLE_SVarState_1_46, STATE_VARIABLE_SVarState_8, STATE_VARIABLE_NewSVars_1_47, STATE_VARIABLE_NewSVars_10, STATE_VARIABLE_UrInfo_1_48, STATE_VARIABLE_UrInfo_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Term_31));
      MR_hl_field(1, base, 1) = ((MR_Box) (Terms_32));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__report_repeated_head_state_var_4_p_0(
  MR_Word Context_5,
  MR_Word StateVar_6,
  MR_Word STATE_VARIABLE_UrInfo_0_12,
  MR_Word * STATE_VARIABLE_UrInfo_13)
{
  MR_Word VarSet_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 3))));
  MR_String Name_9;
  MR_Word Pieces_10;
  MR_Word Spec_11;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Specs0_42;
  MR_Word Specs_43;
  MR_Word Var_44;
  MR_Integer Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;

  Name_9 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_8, StateVar_6);
  {
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) (Name_9));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__state_var_scalar_common_1[20])));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_23));
  }
  Var_19 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_20);
  Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[58])));
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__state_var_scalar_common_1[56])), Var_18);
  {
    Spec_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.state_var.report_repeated_head_state_var\'/4"));
    MR_hl_field(0, Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_11, 3) = ((MR_Box) (Context_5));
    MR_hl_field(0, Spec_11, 4) = ((MR_Box) (Pieces_10));
  }
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 0))));
  Var_45 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 1))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 2))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 3))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 4))));
  Specs0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_12, 5))));
  {
    Specs_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_43, 0) = ((MR_Box) (Spec_11));
    MR_hl_field(1, Specs_43, 1) = ((MR_Box) (Specs0_42));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 5) = ((MR_Box) (Specs_43));
  }
}

static void MR_CALL 
hlds__make_hlds__state_var__new_state_var_instance_5_p_0(
  MR_Word StateVar_6,
  MR_Word NameSource_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_UrInfo_0_20,
  MR_Word * STATE_VARIABLE_UrInfo_21)
{
  MR_bool succeeded;
  MR_Word VarSet0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_20, 3))));
  MR_String SVarName_11;
  MR_Word VarSet_13;
  MR_Word STATE_VARIABLE_UrInfo_1_24;
  MR_Word Var_61;
  MR_Integer Var_62;
  MR_Word Var_63;
  MR_Word Var_65;
  MR_Word Var_66;

  SVarName_11 = mercury__varset__lookup_name_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet0_10, StateVar_6);
  switch (NameSource_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_String ProgVarName_37;

        ProgVarName_37 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", SVarName_11);
        mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarName_37, Var_8, VarSet0_10, &VarSet_13);
        STATE_VARIABLE_UrInfo_1_24 = STATE_VARIABLE_UrInfo_0_20;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_String ProgVarName_12;
        MR_String Var_92;

        Var_92 = mercury__string__f_43_43_2_f_0(SVarName_11, (MR_String) "_0");
        ProgVarName_12 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", Var_92);
        mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarName_12, Var_8, VarSet0_10, &VarSet_13);
        STATE_VARIABLE_UrInfo_1_24 = STATE_VARIABLE_UrInfo_0_20;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SVarState0_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_20, 4))));
        MR_Word LastIdMap0_15 = ((MR_Word) ((MR_hl_field(0, SVarState0_14, 2))));
        MR_Unsigned CurId_17;
        MR_Word LastIdMap_18;
        MR_Word SVarState_19;
        MR_String ProgVarName_36;
        MR_String Var_75;
        MR_String Var_83;
        MR_String Var_84;
        MR_Unsigned LastId0_16;
        MR_Box conv0_LastId0_16;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Integer Var_56;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_60;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), LastIdMap0_15, ((MR_Box) (StateVar_6)), &conv0_LastId0_16);
        if (succeeded)
        {
          LastId0_16 = ((MR_Unsigned) (conv0_LastId0_16));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          CurId_17 = (LastId0_16 + (MR_Unsigned) 1U);
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (StateVar_6)), ((MR_Box) (CurId_17)), LastIdMap0_15, &LastIdMap_18);
        }
        else
        {
          CurId_17 = (MR_Unsigned) 1U;
          mercury__map__det_insert_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (StateVar_6)), ((MR_Box) ((MR_Unsigned) 1U)), LastIdMap0_15, &LastIdMap_18);
        }
        Var_51 = ((MR_Word) ((MR_hl_field(0, SVarState0_14, 0))));
        Var_52 = ((MR_Word) ((MR_hl_field(0, SVarState0_14, 1))));
        Var_54 = ((MR_Word) ((MR_hl_field(0, SVarState0_14, 3))));
        {
          SVarState_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SVarState_19, 0) = ((MR_Box) (Var_51));
          MR_hl_field(0, SVarState_19, 1) = ((MR_Box) (Var_52));
          MR_hl_field(0, SVarState_19, 2) = ((MR_Box) (LastIdMap_18));
          MR_hl_field(0, SVarState_19, 3) = ((MR_Box) (Var_54));
        }
        Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_20, 0))));
        Var_56 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_20, 1))));
        Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_20, 2))));
        Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_20, 3))));
        Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_20, 5))));
        {
          STATE_VARIABLE_UrInfo_1_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_24, 0) = ((MR_Box) (Var_55));
          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_24, 1) = ((MR_Box) (Var_56));
          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_24, 2) = ((MR_Box) (Var_57));
          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_24, 3) = ((MR_Box) (Var_58));
          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_24, 4) = ((MR_Box) (SVarState_19));
          MR_hl_field(0, STATE_VARIABLE_UrInfo_1_24, 5) = ((MR_Box) (Var_60));
        }
        mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_3[2]), (MR_Integer) 1, CurId_17, &Var_75);
        Var_83 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_75);
        Var_84 = mercury__string__f_43_43_2_f_0(SVarName_11, Var_83);
        ProgVarName_36 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", Var_84);
        mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarName_36, Var_8, VarSet0_10, &VarSet_13);
      }
      break;
  }
  Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_24, 0))));
  Var_62 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_24, 1))));
  Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_24, 2))));
  Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_24, 4))));
  Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_1_24, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_21 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_61));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_62));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_63));
    MR_hl_field(0, base, 3) = ((MR_Box) (VarSet_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_65));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_66));
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__state_var__init_new_statevar_map_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_maybe_statevar_arg_pos_0));
  return HeadVar__1_1;
}

static MR_Word MR_CALL 
hlds__make_hlds__state_var__new_svar_store_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_2;
  MR_Word Var_4;
  MR_Word Var_5;

  Var_2 = mercury__counter__uinit_1_f_0((MR_Unsigned) 1U);
  Var_4 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[2]));
  Var_5 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0));
  {
    HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__1_1, 0) = ((MR_Box) (Var_2));
    MR_hl_field(0, HeadVar__1_1, 1) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__1_1, 2) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__1_1, 3) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__1_1;
}

static MR_Word MR_CALL 
hlds__make_hlds__state_var__new_svar_state_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_2;

  Var_2 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0));
  HeadVar__1_1 = (MR_Word) (Var_2);
  return HeadVar__1_1;
}

static void MR_CALL 
hlds__make_hlds__state_var__expand_bang_state_pairs_in_instance_method_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_ItemClause_4;

  hlds__make_hlds__state_var__expand_bang_state_pairs_in_clause_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_ItemClause_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_ItemClause_4));
}

void MR_CALL 
hlds__make_hlds__state_var__expand_bang_state_pairs_in_instance_method_2_p_0(
  MR_Word IM0_3,
  MR_Word * IM_4)
{
  MR_bool succeeded;
  MR_Word MethodId0_5 = ((MR_Word) ((MR_hl_field(0, IM0_3, 0))));
  MR_Word ProcDef0_6 = ((MR_Word) ((MR_hl_field(0, IM0_3, 1))));
  MR_Word Context_7 = ((MR_Word) ((MR_hl_field(0, IM0_3, 2))));
  MR_Word PredOrFunc_8 = ((MR_Unsigned) ((MR_hl_field(0, MethodId0_5, 0))) & (MR_Integer) 1);
  MR_Word MethodSymName_9 = ((MR_Word) ((MR_hl_field(0, MethodId0_5, 1))));

  if (((MR_tag((MR_Word) ProcDef0_6)) == (MR_Integer) 1))
  {
    MR_Word ItemClausesCord0_12 = ((MR_Word) ((MR_hl_field(1, ProcDef0_6, 0))));
    MR_Word ItemClausesCord_13;
    MR_Word MethodId_18;
    MR_Word ProcDef_19;
    MR_Word ItemClause_14;
    MR_Box conv1_ItemClause_14;

    mercury__cord__map_pred_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&hlds__make_hlds__state_var_scalar_common_2[6]), ItemClausesCord0_12, &ItemClausesCord_13);
    succeeded = mercury__cord__head_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), ItemClausesCord_13, &conv1_ItemClause_14);
    if (succeeded)
    {
      ItemClause_14 = ((MR_Word) (conv1_ItemClause_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Args_15 = ((MR_Word) ((MR_hl_field(0, ItemClause_14, 2))));
      MR_Word PredFormArity_16;
      MR_Word UserArity_17;

      PredFormArity_16 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&hlds__make_hlds__state_var_scalar_common_1[0]), Args_15);
      parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_8, &UserArity_17, PredFormArity_16);
      {
        MethodId_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MethodId_18, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_8));
        MR_hl_field(0, MethodId_18, 1) = ((MR_Box) (MethodSymName_9));
        MR_hl_field(0, MethodId_18, 2) = ((MR_Box) (UserArity_17));
      }
    }
    else
      MethodId_18 = MethodId0_5;
    {
      ProcDef_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ProcDef_19, 0) = ((MR_Box) (ItemClausesCord_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *IM_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (MethodId_18));
      MR_hl_field(0, base, 1) = ((MR_Box) (ProcDef_19));
      MR_hl_field(0, base, 2) = ((MR_Box) (Context_7));
    }
  }
  else
    *IM_4 = IM0_3;
}

void MR_CALL 
hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HeadArg0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word TailArgs0_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word TailArgs_6;

    hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(TailArgs0_4, &TailArgs_6);
    if (((MR_tag((MR_Word) HeadArg0_3)) == (MR_Integer) 0))
    {
      MR_Word Const_9 = ((MR_Word) ((MR_hl_field(0, HeadArg0_3, 0))));
      MR_Word FunctorArgs_10 = ((MR_Word) ((MR_hl_field(0, HeadArg0_3, 1))));
      MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, HeadArg0_3, 2))));
      MR_String Var_16;
      MR_Word Var_17;
      MR_Word Var_18;

      succeeded = ((MR_tag((MR_Word) Const_9)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_16 = ((MR_String) ((MR_hl_field(0, Const_9, 0))));
        succeeded = (strcmp(Var_16, (MR_String) "!") == 0);
        if (succeeded)
        {
          succeeded = (FunctorArgs_10 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_17 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_10, 0))));
            Var_18 = ((MR_Word) ((MR_hl_field(1, FunctorArgs_10, 1))));
            succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 1);
            if (succeeded)
              succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
      if (succeeded)
      {
        MR_Word HeadArg1_14;
        MR_Word HeadArg2_15;
        MR_Word Var_23;

        {
          HeadArg1_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HeadArg1_14, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_3[0]));
          MR_hl_field(0, HeadArg1_14, 1) = ((MR_Box) (FunctorArgs_10));
          MR_hl_field(0, HeadArg1_14, 2) = ((MR_Box) (Context_11));
        }
        {
          HeadArg2_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HeadArg2_15, 0) = ((MR_Box) (&hlds__make_hlds__state_var_scalar_common_3[1]));
          MR_hl_field(0, HeadArg2_15, 1) = ((MR_Box) (FunctorArgs_10));
          MR_hl_field(0, HeadArg2_15, 2) = ((MR_Box) (Context_11));
        }
        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (HeadArg2_15));
          MR_hl_field(1, Var_23, 1) = ((MR_Box) (TailArgs_6));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadArg1_14));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_23));
        }
      }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadArg0_3));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailArgs_6));
        }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadArg0_3));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailArgs_6));
      }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__state_var__is_prog_var_for_some_state_var_3_p_0(
  MR_Word VarSet_4,
  MR_Word Var_5,
  MR_String * SVarName_6)
{
  MR_bool succeeded;
  MR_String VarName_7;
  MR_String AfterStdPrefix_8;
  MR_Word UnderscoreSeparatedPieces_9;
  MR_String Var_15;
  MR_Char Var_16;

  succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_4, Var_5, &VarName_7);
  if (succeeded)
  {
    Var_15 = (MR_String) "STATE_VARIABLE_";
    succeeded = mercury__string__remove_prefix_3_p_0(Var_15, VarName_7, &AfterStdPrefix_8);
    if (succeeded)
    {
      Var_16 = (MR_Char) 95;
      UnderscoreSeparatedPieces_9 = mercury__string__split_at_char_2_f_0(Var_16, AfterStdPrefix_8);
      if ((UnderscoreSeparatedPieces_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *SVarName_6 = AfterStdPrefix_8;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_String LastPiece_12;
        MR_String NumericalSuffix_14;
        MR_String Var_17;
        MR_Box conv0_LastPiece_12;
        MR_Integer _N_13;

        mercury__list__det_last_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnderscoreSeparatedPieces_9, &conv0_LastPiece_12);
        LastPiece_12 = ((MR_String) (conv0_LastPiece_12));
        succeeded = mercury__string__to_int_2_p_0(LastPiece_12, &_N_13);
        if (succeeded)
        {
          Var_17 = (MR_String) "_";
          NumericalSuffix_14 = mercury__string__f_43_43_2_f_0(Var_17, LastPiece_12);
          *SVarName_6 = mercury__string__det_remove_suffix_2_f_0(AfterStdPrefix_8, NumericalSuffix_14);
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

MR_String MR_CALL 
hlds__make_hlds__state_var__initial_state_var_name_1_f_0(
  MR_String SVarName_3)
{
  MR_String ProgVarName_4;
  MR_String Var_10;

  Var_10 = mercury__string__f_43_43_2_f_0(SVarName_3, (MR_String) "_0");
  ProgVarName_4 = mercury__string__f_43_43_2_f_0((MR_String) "STATE_VARIABLE_", Var_10);
  return ProgVarName_4;
}

void MR_CALL 
hlds__make_hlds__state_var__add_unravel_specs_3_p_0(
  MR_Word NewSpecs_4,
  MR_Word STATE_VARIABLE_UrInfo_0_10,
  MR_Word * STATE_VARIABLE_UrInfo_11)
{
  if ((NewSpecs_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_UrInfo_11 = STATE_VARIABLE_UrInfo_0_10;
  else
  {
    MR_Word Specs0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 5))));
    MR_Word Specs_9;
    MR_Word Var_17;
    MR_Integer Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;

    Specs_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NewSpecs_4, Specs0_8);
    Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 0))));
    Var_18 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 1))));
    Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 2))));
    Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 3))));
    Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 4))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_UrInfo_11 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_19));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_21));
      MR_hl_field(0, base, 5) = ((MR_Box) (Specs_9));
    }
  }
}

void MR_CALL 
hlds__make_hlds__state_var__add_unravel_spec_3_p_0(
  MR_Word NewSpec_4,
  MR_Word STATE_VARIABLE_UrInfo_0_8,
  MR_Word * STATE_VARIABLE_UrInfo_9)
{
  MR_Word Specs0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 5))));
  MR_Word Specs_7;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 0))));
  MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 4))));

  {
    Specs_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Specs_7, 0) = ((MR_Box) (NewSpec_4));
    MR_hl_field(1, Specs_7, 1) = ((MR_Box) (Specs0_6));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Specs_7));
  }
}

void MR_CALL 
hlds__make_hlds__state_var__record_unravel_found_syntax_error_2_p_0(
  MR_Word STATE_VARIABLE_UrInfo_0_6,
  MR_Word * STATE_VARIABLE_UrInfo_7)
{
  MR_Word QualInfo0_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_6, 2))));
  MR_Word QualInfo_5;
  MR_Word Var_14;
  MR_Integer Var_15;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;

  hlds__make_hlds__qual_info__qual_info_set_found_syntax_error_3_p_0((MR_Integer) 1, QualInfo0_4, &QualInfo_5);
  Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_6, 0))));
  Var_15 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_6, 1))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_6, 3))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_6, 4))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_6, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 2) = ((MR_Box) (QualInfo_5));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__make_hlds__state_var__create_new_named_unravel_var_4_p_0(
  MR_String Name_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_UrInfo_0_10,
  MR_Word * STATE_VARIABLE_UrInfo_11)
{
  MR_Word VarSet0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 3))));
  MR_Word VarSet_9;
  MR_Word Var_17;
  MR_Integer Var_18;
  MR_Word Var_19;
  MR_Word Var_21;
  MR_Word Var_22;

  mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_5, Var_6, VarSet0_8, &VarSet_9);
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 0))));
  Var_18 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 1))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 2))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 4))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_10, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 3) = ((MR_Box) (VarSet_9));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_22));
  }
}

void MR_CALL 
hlds__make_hlds__state_var__create_new_unravel_var_3_p_0(
  MR_Word * Var_4,
  MR_Word STATE_VARIABLE_UrInfo_0_8,
  MR_Word * STATE_VARIABLE_UrInfo_9)
{
  MR_Word VarSet0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 3))));
  MR_Word VarSet_7;
  MR_Word Var_15;
  MR_Integer Var_16;
  MR_Word Var_17;
  MR_Word Var_19;
  MR_Word Var_20;

  mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_4, VarSet0_6, &VarSet_7);
  Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 0))));
  Var_16 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 1))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 2))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 4))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_UrInfo_0_8, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_UrInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 3) = ((MR_Box) (VarSet_7));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_20));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____hlds_goal_svar_state_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__state_var____Compare____hlds_goal_svar_state_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____last_id_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____last_id_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____last_id_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__state_var____Compare____last_id_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____maybe_statevar_arg_pos_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____maybe_statevar_arg_pos_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____maybe_statevar_arg_pos_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__state_var____Compare____maybe_statevar_arg_pos_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____new_statevar_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____new_statevar_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____new_statevar_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__state_var____Compare____new_statevar_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____readonly_context_kind_0_0();
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__state_var____Compare____readonly_context_kind_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____state_var_name_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____state_var_name_source_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____state_var_name_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__state_var____Compare____state_var_name_source_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____svar_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__state_var____Compare____svar_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____svar_inner_atomic_scope_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__state_var____Compare____svar_inner_atomic_scope_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____svar_outer_atomic_scope_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__state_var____Compare____svar_outer_atomic_scope_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____svar_state_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__state_var____Compare____svar_state_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____svar_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__state_var____Compare____svar_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____svar_store_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____svar_store_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____svar_store_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__state_var____Compare____svar_store_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__state_var____Unify____unravel_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__state_var____Unify____unravel_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__state_var____Compare____unravel_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__state_var____Compare____unravel_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__state_var__init(void)
{
}

void mercury__hlds__make_hlds__state_var__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_hlds_goal_svar_state_0);
  MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_last_id_map_0);
  MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_maybe_statevar_arg_pos_0);
  MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_new_statevar_map_0);
  MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_readonly_context_kind_0);
  MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_state_var_name_source_0);
  MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_0);
  MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_inner_atomic_scope_info_0);
  MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_outer_atomic_scope_info_0);
  MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_state_0);
  MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_status_0);
  MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_svar_store_0);
  MR_register_type_ctor_info(&hlds__make_hlds__state_var__hlds__make_hlds__state_var__type_ctor_info_unravel_info_0);
}

void mercury__hlds__make_hlds__state_var__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__state_var__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.state_var.
