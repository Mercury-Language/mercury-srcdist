/*
** Automatically generated from `format_call.m'
** by the Mercury compiler,
** version rotd-2020-01-22
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


// :- module check_hlds.simplify.format_call.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__format_call__init
ENDINIT
*/

#include "check_hlds.simplify.format_call.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_path.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
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
#include "counter.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_goal_call.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "string.parse_util.mih"
#include "check_hlds.simplify.format_call.parse_string_format.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_map_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__maybe__pti_maybe_1__plain_check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0;

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_id_0[1];

static const MR_NotagFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__notag_functor_desc_conj_id_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_string_state_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_conj_map_0_0[4];

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_conj_map_0_0[4];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_conj_map_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_conj_map_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_conj_map_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_conj_map_0[1];

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_map_0[1];

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2check_hlds__simplify__format_call__type_ctor_info_conj_id_0check_hlds__simplify__format_call__type_ctor_info_conj_map_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2check_hlds__simplify__format_call__type_ctor_info_conj_id_0check_hlds__simplify__format_call__type_ctor_info_conj_id_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_fc_opt_goal_info_0_0[3];

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_fc_opt_goal_info_0_0[3];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_fc_opt_goal_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_fc_opt_goal_info_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_fc_opt_goal_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_fc_opt_goal_info_0[1];

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_fc_opt_goal_info_0[1];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_0;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_follow_skeleton_result_0_1[2];

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_follow_skeleton_result_0_1[2];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_1;

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_1[1];

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_follow_skeleton_result_0[2];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_follow_skeleton_result_0[2];

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_follow_skeleton_result_0[2];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_string_result_0_0;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_follow_string_result_0_1[3];

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_follow_string_result_0_1[3];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_string_result_0_1;

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_string_result_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_string_result_0_1[1];

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_follow_string_result_0[2];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_follow_string_result_0[2];

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_follow_string_result_0[2];

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_0[2];

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_0[2];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_0;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_1[3];

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_1[3];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_1;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_2[4];

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_2[4];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_2;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_3[5];

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_3[5];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_3;

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_3[1];

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_kind_0[4];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_kind_0[4];

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_kind_0[4];

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_site_0_0[11];

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_site_0_0[11];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_site_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_site_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_site_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_site_0[1];

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_site_0[1];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_0;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_list_skeleton_state_0_1[2];

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_list_skeleton_state_0_1[2];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_1;

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_1[1];

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_list_skeleton_state_0[2];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_list_skeleton_state_0[2];

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_list_skeleton_state_0[2];

static const MR_EnumFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_functor_desc_maybe_generate_implicit_stream_warnings_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_functor_desc_maybe_generate_implicit_stream_warnings_0_1;

static const MR_EnumFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_value_ordered_maybe_generate_implicit_stream_warnings_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_name_ordered_maybe_generate_implicit_stream_warnings_0[2];

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_maybe_generate_implicit_stream_warnings_0[2];

static const MR_EnumFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_functor_desc_maybe_opt_format_calls_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_functor_desc_maybe_opt_format_calls_0_1;

static const MR_EnumFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_value_ordered_maybe_opt_format_calls_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_name_ordered_maybe_opt_format_calls_0[2];

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_maybe_opt_format_calls_0[2];

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_state_0_0[1];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_state_0_0;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_state_0_1[3];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_state_0_1;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_state_0_2[2];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_state_0_2;

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_state_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_state_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_state_0_2[1];

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_string_state_0[3];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_string_state_0[3];

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_string_state_0[3];

static MR_bool MR_CALL 
check_hlds__simplify__format_call__IntroducedFrom__pred__format_call_traverse_unify__945__1_2_p_0(
  MR_Word ArgVars_20,
  MR_Word HeadVar__2_58);

static MR_Box MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call__follow_format_string_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call__analyze_and_optimize_format_calls_9_p_0_1(
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

static MR_Box MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_unify_9_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_pred_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_pred_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_string_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_string_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_site_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_site_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_element_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_element_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____maybe_generate_implicit_stream_warnings_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____maybe_generate_implicit_stream_warnings_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____maybe_opt_format_calls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____maybe_opt_format_calls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_1[11][3];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_2[19][2];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_3[5][1];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_4[3][5];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_6[1][17];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_7[2][8];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_9[1][4];


/* sealed */ struct check_hlds__simplify__format_call__vector_common_type_5_0_s {
  const MR_String check_hlds__simplify__format_call__vector_common_type_5_0__vct_5_f_0;
  const MR_Integer check_hlds__simplify__format_call__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct check_hlds__simplify__format_call__vector_common_type_5_0_s check_hlds__simplify__format_call_vector_common_5[4];

/* sealed */ struct check_hlds__simplify__format_call__vector_common_type_8_0_s {
  const MR_String check_hlds__simplify__format_call__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct check_hlds__simplify__format_call__vector_common_type_8_0_s check_hlds__simplify__format_call_vector_common_8[11];



static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_1[11][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2])),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2])),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2])),
    ((MR_Box) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2])),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_4[1])),
    ((MR_Box) (check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 3U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_4[2])),
    ((MR_Box) (check_hlds__simplify__format_call__check_format_call_site_14_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_2[19][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[6])))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_3[0])),
    ((MR_Box) ((MR_String) "string_writer"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "vxP"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 26)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_3[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Unknown format string in call to"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Unknown format values in call to"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Mismatched format and values"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in call to"))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_3[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "stream"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "represent_spec"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "replace_string_format"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "replace_io_format"))
  },
  /* row 4 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__simplify__format_call__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_6[1][17] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_maybe_generate_implicit_stream_warnings_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_maybe_opt_format_calls_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_map_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_site_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_7[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_map_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_follow_string_result_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_map_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__maybe__pti_maybe_1__plain_check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_9[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[9])))
  },
};


static /* final */ const struct check_hlds__simplify__format_call__vector_common_type_5_0_s check_hlds__simplify__format_call_vector_common_5[4] = {
  /* row 0 */
  {
    (MR_String) "c",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "f",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "i",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "s",
    (MR_Integer) 3
  },
};

static /* final */ const struct check_hlds__simplify__format_call__vector_common_type_8_0_s check_hlds__simplify__format_call_vector_common_8[11] = {
  /* row 0 */   {     (MR_String) "base_octal" },
  /* row 1 */   {     (MR_String) "base_decimal" },
  /* row 2 */   {     (MR_String) "base_hex_lc" },
  /* row 3 */   {     (MR_String) "base_hex_uc" },
  /* row 4 */   {     (MR_String) "base_hex_p" },
  /* row 5 */   {     (MR_String) "kind_e_scientific_lc" },
  /* row 6 */   {     (MR_String) "kind_e_scientific_uc" },
  /* row 7 */   {     (MR_String) "kind_f_plain_lc" },
  /* row 8 */   {     (MR_String) "kind_f_plain_uc" },
  /* row 9 */   {     (MR_String) "kind_g_flexible_lc" },
  /* row 10 */   {     (MR_String) "kind_g_flexible_uc" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_map_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0),
    (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0),
    (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__maybe__pti_maybe_1__plain_check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0)
  }
};

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_id_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__notag_functor_desc_conj_id_0 = {
  (MR_String) "conj_id",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____conj_id_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____conj_id_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "conj_id",
  {     &check_hlds__simplify__format_call__check_hlds__simplify__format_call__notag_functor_desc_conj_id_0 },
  {     &check_hlds__simplify__format_call__check_hlds__simplify__format_call__notag_functor_desc_conj_id_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_id_0
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_string_state_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_conj_map_0_0[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_string_state_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_conj_map_0_0[4] = {
  (MR_String) "cm_string_map",
  (MR_String) "cm_list_skeleton_map",
  (MR_String) "cm_list_element_map",
  (MR_String) "cm_eqv_map"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_conj_map_0_0 = {
  (MR_String) "conj_map",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_conj_map_0_0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_conj_map_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_conj_map_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_conj_map_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_conj_map_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_conj_map_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_conj_map_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_conj_map_0_0
};

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_map_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____conj_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____conj_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "conj_map",
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_conj_map_0 },
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_conj_map_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_map_0
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2check_hlds__simplify__format_call__type_ctor_info_conj_id_0check_hlds__simplify__format_call__type_ctor_info_conj_map_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0),
    (MR_TypeInfo) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_maps_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____conj_maps_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____conj_maps_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "conj_maps",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__tree234__ti_tree234_2check_hlds__simplify__format_call__type_ctor_info_conj_id_0check_hlds__simplify__format_call__type_ctor_info_conj_map_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2check_hlds__simplify__format_call__type_ctor_info_conj_id_0check_hlds__simplify__format_call__type_ctor_info_conj_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0),
    (MR_TypeInfo) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_pred_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____conj_pred_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____conj_pred_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "conj_pred_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__tree234__ti_tree234_2check_hlds__simplify__format_call__type_ctor_info_conj_id_0check_hlds__simplify__format_call__type_ctor_info_conj_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_eqv_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "fc_eqv_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_goal_id_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "fc_goal_id_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_fc_opt_goal_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0)
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_fc_opt_goal_info_0_0[3] = {
  (MR_String) "fcogi_replacement_goal",
  (MR_String) "fcogi_unneeded_vars",
  (MR_String) "fcogi_unneeded_goals"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_fc_opt_goal_info_0_0 = {
  (MR_String) "fc_opt_goal_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_fc_opt_goal_info_0_0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_fc_opt_goal_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_fc_opt_goal_info_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_fc_opt_goal_info_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_fc_opt_goal_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_fc_opt_goal_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_fc_opt_goal_info_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_fc_opt_goal_info_0_0
};

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_fc_opt_goal_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "fc_opt_goal_info",
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_fc_opt_goal_info_0 },
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_fc_opt_goal_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_fc_opt_goal_info_0
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_0 = {
  (MR_String) "no_follow_skeleton_result",
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

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_follow_skeleton_result_0_1[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_follow_skeleton_result_0_1[2] = {
  (MR_String) "fsr_element_vars",
  (MR_String) "fsr_skeleton_vars"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_1 = {
  (MR_String) "follow_skeleton_result",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_follow_skeleton_result_0_1,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_follow_skeleton_result_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_0
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_1[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_1
};

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_follow_skeleton_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_follow_skeleton_result_0[2] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_1,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_0
};

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_follow_skeleton_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_follow_skeleton_result_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "follow_skeleton_result",
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_follow_skeleton_result_0 },
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_follow_skeleton_result_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_follow_skeleton_result_0
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_string_result_0_0 = {
  (MR_String) "no_follow_string_result",
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

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_follow_string_result_0_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0)
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_follow_string_result_0_1[3] = {
  (MR_String) "fsr_string",
  (MR_String) "fsr_to_delete_vars",
  (MR_String) "fsr_to_delete_goals"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_string_result_0_1 = {
  (MR_String) "follow_string_result",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_follow_string_result_0_1,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_follow_string_result_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_string_result_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_string_result_0_0
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_string_result_0_1[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_string_result_0_1
};

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_follow_string_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_string_result_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_string_result_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_follow_string_result_0[2] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_string_result_0_1,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_string_result_0_0
};

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_follow_string_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_follow_string_result_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____follow_string_result_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____follow_string_result_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "follow_string_result",
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_follow_string_result_0 },
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_follow_string_result_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_follow_string_result_0
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_0[2] = {
  (MR_String) "sf_context",
  (MR_String) "sf_result_var"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_0 = {
  (MR_String) "kind_string_format",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_1[3] = {
  (MR_String) "iofns_context",
  (MR_String) "iofns_io_in_var",
  (MR_String) "iofns_io_out_var"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_1 = {
  (MR_String) "kind_io_format_nostream",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_1,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_2[4] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_2[4] = {
  (MR_String) "iofs_context",
  (MR_String) "iofs_stream_var",
  (MR_String) "iofs_io_in_var",
  (MR_String) "iofs_io_out_var"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_2 = {
  (MR_String) "kind_io_format_stream",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_2,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_3[5] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_3[5] = {
  (MR_String) "ssw_context",
  (MR_String) "ssw_tc_info_var",
  (MR_String) "ssw_stream_var",
  (MR_String) "ssw_in_var",
  (MR_String) "ssw_out_var"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_3 = {
  (MR_String) "kind_stream_string_writer",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_3,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_3,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_0
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_1[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_1
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_2[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_2
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_3[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_3
};

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_kind_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_kind_0[4] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_1,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_2,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_3,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_0
};

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_kind_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____format_call_kind_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____format_call_kind_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "format_call_kind",
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_kind_0 },
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_kind_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_kind_0
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_site_0_0[11] = {
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_kind_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0)
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_site_0_0[11] = {
  (MR_String) "fcs_goal_id",
  (MR_String) "fcs_goal_info",
  (MR_String) "fcs_string_var",
  (MR_String) "fcs_values_var",
  (MR_String) "fcs_call_kind",
  (MR_String) "fcs_called_pred_id",
  (MR_String) "fcs_called_pred_module",
  (MR_String) "fcs_called_pred_name",
  (MR_String) "fcs_called_pred_arity",
  (MR_String) "fcs_call_context",
  (MR_String) "fcs_containing_conj"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_site_0_0 = {
  (MR_String) "format_call_site",
  INT16_C(11),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_site_0_0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_site_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_site_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_site_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_site_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_site_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_site_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_site_0_0
};

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_site_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_site_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____format_call_site_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____format_call_site_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "format_call_site",
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_site_0 },
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_site_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_site_0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_element_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____list_element_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____list_element_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "list_element_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "list_skeleton_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_0 = {
  (MR_String) "list_skeleton_nil",
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

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_list_skeleton_state_0_1[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_list_skeleton_state_0_1[2] = {
  (MR_String) "head",
  (MR_String) "tail"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_1 = {
  (MR_String) "list_skeleton_cons",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_list_skeleton_state_0_1,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_list_skeleton_state_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_0
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_1[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_1
};

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_list_skeleton_state_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_list_skeleton_state_0[2] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_1,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_0
};

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_list_skeleton_state_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "list_skeleton_state",
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_list_skeleton_state_0 },
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_list_skeleton_state_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_list_skeleton_state_0
};

static const MR_EnumFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_functor_desc_maybe_generate_implicit_stream_warnings_0_0 = {
  (MR_String) "do_not_generate_implicit_stream_warnings",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_functor_desc_maybe_generate_implicit_stream_warnings_0_1 = {
  (MR_String) "generate_implicit_stream_warnings",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_value_ordered_maybe_generate_implicit_stream_warnings_0[2] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_functor_desc_maybe_generate_implicit_stream_warnings_0_0,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_functor_desc_maybe_generate_implicit_stream_warnings_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_name_ordered_maybe_generate_implicit_stream_warnings_0[2] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_functor_desc_maybe_generate_implicit_stream_warnings_0_0,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_functor_desc_maybe_generate_implicit_stream_warnings_0_1
};

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_maybe_generate_implicit_stream_warnings_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_maybe_generate_implicit_stream_warnings_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____maybe_generate_implicit_stream_warnings_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____maybe_generate_implicit_stream_warnings_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "maybe_generate_implicit_stream_warnings",
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_name_ordered_maybe_generate_implicit_stream_warnings_0 },
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_value_ordered_maybe_generate_implicit_stream_warnings_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_maybe_generate_implicit_stream_warnings_0
};

static const MR_EnumFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_functor_desc_maybe_opt_format_calls_0_0 = {
  (MR_String) "do_not_opt_format_calls",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_functor_desc_maybe_opt_format_calls_0_1 = {
  (MR_String) "opt_format_calls",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_value_ordered_maybe_opt_format_calls_0[2] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_functor_desc_maybe_opt_format_calls_0_0,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_functor_desc_maybe_opt_format_calls_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_name_ordered_maybe_opt_format_calls_0[2] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_functor_desc_maybe_opt_format_calls_0_0,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_functor_desc_maybe_opt_format_calls_0_1
};

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_maybe_opt_format_calls_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_maybe_opt_format_calls_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____maybe_opt_format_calls_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____maybe_opt_format_calls_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "maybe_opt_format_calls",
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_name_ordered_maybe_opt_format_calls_0 },
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_value_ordered_maybe_opt_format_calls_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_maybe_opt_format_calls_0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____string_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____string_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "string_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_string_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_state_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_state_0_0 = {
  (MR_String) "string_const",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_state_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_state_0_1[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_state_0_1 = {
  (MR_String) "string_append",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_state_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_state_0_2[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_state_0_2 = {
  (MR_String) "string_append_list",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_state_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_state_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_state_0_0
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_state_0_1[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_state_0_1
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_state_0_2[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_state_0_2
};

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_string_state_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_state_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_state_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_state_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_string_state_0[3] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_state_0_1,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_state_0_2,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_state_0_0
};

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_string_state_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____string_state_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____string_state_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "string_state",
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_string_state_0 },
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_string_state_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_string_state_0
};

static MR_bool MR_CALL 
check_hlds__simplify__format_call__IntroducedFrom__pred__format_call_traverse_unify__945__1_2_p_0(
  MR_Word ArgVars_20,
  MR_Word HeadVar__2_58)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[4]), ((MR_Box) (ArgVars_20)), ((MR_Box) (HeadVar__2_58)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____string_state_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_43 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_44 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_43 == CastY_44);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_56 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_56, ArgY1_5);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word SubResult1_19;
                  MR_Integer Var_57 = (MR_Integer) (Var_53);
                  MR_Integer Var_58 = (MR_Integer) (ArgY1_18);

                  succeeded = (Var_57 < Var_58);
                  if (succeeded)
                  {
                    SubResult1_19 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_57 > Var_58);
                    if (succeeded)
                    {
                      SubResult1_19 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult1_19 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_19;
                  else
                  {
                    MR_Word SubResult2_22;

                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), &SubResult2_22, ((MR_Box) (Var_52)), ((MR_Box) (ArgY2_21)));
                    succeeded = (SubResult2_22 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_22;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Var_51)), ((MR_Box) (ArgY3_24)));
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
            MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_42 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_40;
                  MR_Integer Var_59 = (MR_Integer) (Var_55);
                  MR_Integer Var_60 = (MR_Integer) (ArgY1_39);

                  succeeded = (Var_59 < Var_60);
                  if (succeeded)
                  {
                    SubResult1_40 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_59 > Var_60);
                    if (succeeded)
                    {
                      SubResult1_40 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult1_40 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_40;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Var_54)), ((MR_Box) (ArgY2_42)));
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_state_0_0(
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
          {
            MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_18_18;
            MR_Word TypeInfo_19_19;
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_8;
            MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_10;
            MR_Integer Var_22;
            MR_Integer Var_23;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
              Var_22 = (MR_Integer) (ArgX1_5);
              Var_23 = (MR_Integer) (ArgY1_6);
              succeeded = (Var_22 == Var_23);
              if (succeeded)
              {
                TypeInfo_18_18 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
                if (succeeded)
                {
                  TypeInfo_19_19 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_21_21;
            MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_12;
            MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_14;
            MR_Integer Var_24;
            MR_Integer Var_25;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              Var_24 = (MR_Integer) (ArgX1_11);
              Var_25 = (MR_Integer) (ArgY1_12);
              succeeded = (Var_24 == Var_25);
              if (succeeded)
              {
                TypeInfo_21_21 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX2_13)), ((MR_Box) (ArgY2_14)));
              }
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____string_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____maybe_opt_format_calls_0_0(
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

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____maybe_opt_format_calls_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____maybe_generate_implicit_stream_warnings_0_0(
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

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____maybe_generate_implicit_stream_warnings_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0(
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

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), &SubResult1_10, ((MR_Box) (Var_18)), ((MR_Box) (ArgY1_9)));
        succeeded = (SubResult1_10 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY2_12)));
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0(
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
      MR_Word TypeInfo_11_11;
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        TypeInfo_11_11 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____list_element_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_element_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_site_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_36 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_37 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_36 == CastY_37);
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
      MR_String ArgX8_25 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_String ArgY8_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Integer ArgX9_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Integer ArgY9_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
      MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))));
      MR_Word SubResult1_6;
      MR_Integer Var_49 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_50 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_49 < Var_50);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_49 > Var_50);
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
      {
        MR_Word SubResult2_9;

        hlds__hlds_goal____Compare____hlds_goal_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              check_hlds__simplify__format_call____Compare____format_call_kind_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                hlds__hlds_pred____Compare____pred_id_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult8_27, ArgX8_25, ArgY8_26);
                    succeeded = (SubResult8_27 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;

                      succeeded = (ArgX9_28 < ArgY9_29);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX9_28 > ArgY9_29);
                        if (succeeded)
                        {
                          SubResult9_30 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult9_30 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                      {
                        MR_Word SubResult10_33;

                        mercury__term____Compare____context_0_0(&SubResult10_33, ArgX10_31, ArgY10_32);
                        succeeded = (SubResult10_33 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult10_33;
                        else
                        {
                          MR_Integer Var_51 = (MR_Integer) (ArgX11_34);
                          MR_Integer Var_52 = (MR_Integer) (ArgY11_35);

                          succeeded = (Var_51 < Var_52);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_51 > Var_52);
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

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_site_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_25 == CastY_26);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_29_29;
      MR_Word TypeInfo_30_30;
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
      MR_String ArgX8_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_String ArgY8_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Integer ArgX9_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Integer ArgY9_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))));
      MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Integer Var_34 = (MR_Integer) (ArgX1_3);
      MR_Integer Var_35 = (MR_Integer) (ArgY1_4);
      MR_Integer CastX_38;
      MR_Integer CastY_39;

      succeeded = (Var_34 == Var_35);
      if (succeeded)
      {
        succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_29_29 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_30_30 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              succeeded = check_hlds__simplify__format_call____Unify____format_call_kind_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX6_13, ArgY6_14);
                if (succeeded)
                {
                  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX7_15, ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (strcmp(ArgX8_17, ArgY8_18) == 0);
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                      {
                        succeeded = mercury__term____Unify____context_0_0(ArgX10_21, ArgY10_22);
                        if (succeeded)
                        {
                          CastX_38 = (MR_Integer) (ArgX11_23);
                          CastY_39 = (MR_Integer) (ArgY11_24);
                          succeeded = (CastX_38 == CastY_39);
                          if (succeeded)
                            succeeded = MR_TRUE;
                          else
                          {
                            MR_Integer ArgX1_36 = (MR_Integer) (ArgX11_23);
                            MR_Integer ArgY1_37 = (MR_Integer) (ArgY11_24);

                            succeeded = (ArgX1_36 == ArgY1_37);
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
check_hlds__simplify__format_call____Compare____format_call_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_126 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_127 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_126 == CastY_127);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_154 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_155 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_6;

                  mercury__term____Compare____context_0_0(&SubResult1_6, Var_155, ArgY1_5);
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_6;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Var_154)), ((MR_Box) (ArgY2_8)));
                }
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
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_143 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word SubResult1_34;

                  mercury__term____Compare____context_0_0(&SubResult1_34, Var_144, ArgY1_33);
                  succeeded = (SubResult1_34 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_34;
                  else
                  {
                    MR_Word SubResult2_37;

                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), &SubResult2_37, ((MR_Box) (Var_143)), ((MR_Box) (ArgY2_36)));
                    succeeded = (SubResult2_37 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_37;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Var_142)), ((MR_Box) (ArgY3_39)));
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
            MR_Word Var_146 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_69 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_72 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_75 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word ArgY4_78 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Word SubResult1_70;

                  mercury__term____Compare____context_0_0(&SubResult1_70, Var_148, ArgY1_69);
                  succeeded = (SubResult1_70 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_70;
                  else
                  {
                    MR_Word SubResult2_73;

                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), &SubResult2_73, ((MR_Box) (Var_147)), ((MR_Box) (ArgY2_72)));
                    succeeded = (SubResult2_73 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_73;
                    else
                    {
                      MR_Word SubResult3_76;

                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), &SubResult3_76, ((MR_Box) (Var_146)), ((MR_Box) (ArgY3_75)));
                      succeeded = (SubResult3_76 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_76;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Var_145)), ((MR_Box) (ArgY4_78)));
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_149 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
            MR_Word Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
            MR_Word Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_152 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_153 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
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
                {
                  MR_Word ArgY1_113 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_116 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_119 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word ArgY4_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Word ArgY5_125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                  MR_Word SubResult1_114;

                  mercury__term____Compare____context_0_0(&SubResult1_114, Var_153, ArgY1_113);
                  succeeded = (SubResult1_114 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_114;
                  else
                  {
                    MR_Word SubResult2_117;

                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), &SubResult2_117, ((MR_Box) (Var_152)), ((MR_Box) (ArgY2_116)));
                    succeeded = (SubResult2_117 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_117;
                    else
                    {
                      MR_Word SubResult3_120;

                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), &SubResult3_120, ((MR_Box) (Var_151)), ((MR_Box) (ArgY3_119)));
                      succeeded = (SubResult3_120 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_120;
                      else
                      {
                        MR_Word SubResult4_123;

                        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), &SubResult4_123, ((MR_Box) (Var_150)), ((MR_Box) (ArgY4_122)));
                        succeeded = (SubResult4_123 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult4_123;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Var_149)), ((MR_Box) (ArgY5_125)));
                      }
                    }
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
check_hlds__simplify__format_call____Unify____format_call_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_31 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_32 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_31 == CastY_32);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeInfo_46_46;
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = mercury__term____Unify____context_0_0(ArgX1_3, ArgY1_4);
              if (succeeded)
              {
                TypeInfo_46_46 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_46_46, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_34_34;
            MR_Word TypeInfo_35_35;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_10;
            MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
              succeeded = mercury__term____Unify____context_0_0(ArgX1_7, ArgY1_8);
              if (succeeded)
              {
                TypeInfo_34_34 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
                if (succeeded)
                {
                  TypeInfo_35_35 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX3_11)), ((MR_Box) (ArgY3_12)));
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_37_37;
            MR_Word TypeInfo_38_38;
            MR_Word TypeInfo_39_39;
            MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_14;
            MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_16;
            MR_Word ArgX3_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_18;
            MR_Word ArgX4_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word ArgY4_20;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
              succeeded = mercury__term____Unify____context_0_0(ArgX1_13, ArgY1_14);
              if (succeeded)
              {
                TypeInfo_37_37 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_37, ((MR_Box) (ArgX2_15)), ((MR_Box) (ArgY2_16)));
                if (succeeded)
                {
                  TypeInfo_38_38 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_38, ((MR_Box) (ArgX3_17)), ((MR_Box) (ArgY3_18)));
                  if (succeeded)
                  {
                    TypeInfo_39_39 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_39_39, ((MR_Box) (ArgX4_19)), ((MR_Box) (ArgY4_20)));
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TypeInfo_41_41;
            MR_Word TypeInfo_42_42;
            MR_Word TypeInfo_43_43;
            MR_Word TypeInfo_44_44;
            MR_Word ArgX1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_22;
            MR_Word ArgX2_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_24;
            MR_Word ArgX3_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_26;
            MR_Word ArgX4_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word ArgY4_28;
            MR_Word ArgX5_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
            MR_Word ArgY5_30;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
              ArgY5_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
              succeeded = mercury__term____Unify____context_0_0(ArgX1_21, ArgY1_22);
              if (succeeded)
              {
                TypeInfo_41_41 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_41, ((MR_Box) (ArgX2_23)), ((MR_Box) (ArgY2_24)));
                if (succeeded)
                {
                  TypeInfo_42_42 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_42_42, ((MR_Box) (ArgX3_25)), ((MR_Box) (ArgY3_26)));
                  if (succeeded)
                  {
                    TypeInfo_43_43 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_43_43, ((MR_Box) (ArgX4_27)), ((MR_Box) (ArgY4_28)));
                    if (succeeded)
                    {
                      TypeInfo_44_44 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_44_44, ((MR_Box) (ArgX5_29)), ((MR_Box) (ArgY5_30)));
                    }
                  }
                }
              }
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_string_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
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
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String Var_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_String ArgY1_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_12;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_12, Var_25, ArgY1_11);
        succeeded = (SubResult1_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_12;
        else
        {
          MR_Word SubResult2_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[4]), &SubResult2_15, ((MR_Box) (Var_24)), ((MR_Box) (ArgY2_14)));
          succeeded = (SubResult2_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Var_23)), ((MR_Box) (ArgY3_17)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_string_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word TypeInfo_13_13;
      MR_Word TypeInfo_14_14;
      MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_10;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
          if (succeeded)
          {
            TypeInfo_14_14 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[5]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0(
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

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[4]), &SubResult1_10, ((MR_Box) (Var_18)), ((MR_Box) (ArgY1_9)));
        succeeded = (SubResult1_10 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY2_12)));
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0(
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
      MR_Word TypeInfo_11_11;
      MR_Word TypeInfo_12_12;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        TypeInfo_11_11 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
        if (succeeded)
        {
          TypeInfo_12_12 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0(
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
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      hlds__hlds_goal____Compare____hlds_goal_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0(
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
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_pred_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_pred_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_maps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_maps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
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
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_16_16 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
      MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

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
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
check_hlds__simplify__format_call__project_case_goal_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Goal_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));

    return Goal_5;
  }
}

void MR_CALL 
check_hlds__simplify__format_call__follow_poly_type_5_p_0(
  MR_Word ConjMaps_6,
  MR_Word PredMap_7,
  MR_Word CurId_8,
  MR_Word PolytypeVar_9,
  MR_Word * MaybeAbstractPolyType_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ConjMap_11;
    MR_Word ElementMap_14;
    MR_Word EqvMap_15;
    MR_Word EqvVar_16;
    MR_Box conv0_EqvVar_16;

    // setup for model_det tailcalls optimized into a loop
    ;
    ConjMap_11 = check_hlds__simplify__format_call__get_conj_map_2_f_0(ConjMaps_6, CurId_8);
    ElementMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjMap_11, (MR_Integer) 2))));
    EqvMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjMap_11, (MR_Integer) 3))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), EqvMap_15, ((MR_Box) (PolytypeVar_9)), &conv0_EqvVar_16);
    if (succeeded)
    {
      EqvVar_16 = ((MR_Word) (conv0_EqvVar_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word next_value_of_PolytypeVar_9 = EqvVar_16;

      // direct tailcall eliminated
      ;
      PolytypeVar_9 = next_value_of_PolytypeVar_9;
      continue;
    }
    else
    {
      MR_Word AbstractPolyType_17;
      MR_Box conv1_AbstractPolyType_17;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0), ElementMap_14, ((MR_Box) (PolytypeVar_9)), &conv1_AbstractPolyType_17);
      if (succeeded)
      {
        AbstractPolyType_17 = ((MR_Word) (conv1_AbstractPolyType_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeAbstractPolyType_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AbstractPolyType_17));
        }
      else
      {
        MR_Word PredId_18;
        MR_Box conv2_PredId_18;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), PredMap_7, ((MR_Box) (CurId_8)), &conv2_PredId_18);
        if (succeeded)
        {
          PredId_18 = ((MR_Word) (conv2_PredId_18));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word next_value_of_CurId_8 = PredId_18;

          // direct tailcall eliminated
          ;
          CurId_8 = next_value_of_CurId_8;
          continue;
        }
        else
          *MaybeAbstractPolyType_10 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = check_hlds__simplify__format_call__string_format_error_to_words_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeAbstractPolyType_10;

    check_hlds__simplify__format_call__follow_poly_type_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeAbstractPolyType_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_MaybeAbstractPolyType_10));
  }
}

void MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word ImplicitStreamWarnings_16,
  MR_Word OptFormatCalls_17,
  MR_Word ConjMaps_18,
  MR_Word PredMap_19,
  MR_Word FormatCallSite_20,
  MR_Word STATE_VARIABLE_GoalIdMap_0_76,
  MR_Word * STATE_VARIABLE_GoalIdMap_77,
  MR_Word STATE_VARIABLE_Specs_0_78,
  MR_Word * STATE_VARIABLE_Specs_79,
  MR_Word STATE_VARIABLE_VarSet_0_80,
  MR_Word * STATE_VARIABLE_VarSet_81,
  MR_Word STATE_VARIABLE_VarTypes_0_82,
  MR_Word * STATE_VARIABLE_VarTypes_83)
{
  {
    MR_bool succeeded;
    MR_Word GoalId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FormatCallSite_20, (MR_Integer) 0))));
    MR_Word GoalInfo_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FormatCallSite_20, (MR_Integer) 1))));
    MR_Word StringVar_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FormatCallSite_20, (MR_Integer) 2))));
    MR_Word ValuesVar_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FormatCallSite_20, (MR_Integer) 3))));
    MR_Word CallKind_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FormatCallSite_20, (MR_Integer) 4))));
    MR_Word PredId_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FormatCallSite_20, (MR_Integer) 5))));
    MR_Word ModuleName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FormatCallSite_20, (MR_Integer) 6))));
    MR_String Name_32 = ((MR_String) ((MR_hl_field(MR_mktag(0), FormatCallSite_20, (MR_Integer) 7))));
    MR_Integer Arity_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FormatCallSite_20, (MR_Integer) 8))));
    MR_Word Context_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FormatCallSite_20, (MR_Integer) 9))));
    MR_Word CurId_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FormatCallSite_20, (MR_Integer) 10))));
    MR_Word SymName_39;
    MR_Word Globals_40;
    MR_Word FormatStringResult_41;
    MR_Word SkeletonResult_49;
    MR_Word MaybePolyTypesInfo_55;
    MR_Word STATE_VARIABLE_Specs_84_84;
    MR_Word STATE_VARIABLE_Specs_105_105;
    MR_Word STATE_VARIABLE_Specs_130_130;
    MR_Word PolytypeVars0_50;
    MR_Word SkeletonVars0_51;
    MR_Word AbstractPolyTypes0_53;
    MR_Word TypeInfo_169_169;
    MR_Word TypeInfo_170_170;
    MR_Word TypeCtorInfo_171_171;
    MR_Word MaybeAbstractPolyTypes0_52;
    MR_Word Var_106;
    MR_String FormatString_60;
    MR_Word FormatStringToDeleteVars_61;
    MR_Word ToDeleteGoals_62;
    MR_Word AbstractPolyTypes_63;
    MR_Word PolyTypeToDeleteVars_64;
    MR_Tuple Var_131;

    switch (ImplicitStreamWarnings_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Specs_84_84 = STATE_VARIABLE_Specs_0_78;
        break;
      case (MR_Integer) 1:
        {
          MR_Word PredInfo_36;
          MR_Word MaybeImplicitStreamSpec_37;

          hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_15, PredId_30, &PredInfo_36);
          check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0(ModuleInfo_15, PredId_30, PredInfo_36, GoalInfo_26, &MaybeImplicitStreamSpec_37);
          if ((MaybeImplicitStreamSpec_37 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_Specs_84_84 = STATE_VARIABLE_Specs_0_78;
          else
          {
            MR_Word ImplicitStreamSpec_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImplicitStreamSpec_37, (MR_Integer) 0))));

            {
              STATE_VARIABLE_Specs_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_84_84, 0) = ((MR_Box) (ImplicitStreamSpec_38));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_84_84, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_78));
            }
          }
        }
        break;
    }
    {
      SymName_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_39, 0) = ((MR_Box) (ModuleName_31));
      MR_hl_field(MR_mktag(1), SymName_39, 1) = ((MR_Box) (Name_32));
    }
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_15, &Globals_40);
    check_hlds__simplify__format_call__follow_format_string_5_p_0(ConjMaps_18, PredMap_19, CurId_35, StringVar_27, &FormatStringResult_41);
    if ((FormatStringResult_41 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word WarnUnknownFormatCallsA_45;

      libs__globals__lookup_bool_option_3_p_0(Globals_40, (MR_Integer) 46, &WarnUnknownFormatCallsA_45);
      switch (WarnUnknownFormatCallsA_45) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_105_105 = STATE_VARIABLE_Specs_84_84;
          break;
        case (MR_Integer) 1:
          {
            MR_Word UnknownFormatPieces_46;
            MR_Word UnknownFormatMsg_47;
            MR_Word UnknownFormatSpec_48;
            MR_Word Var_88;
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Word Var_103;

            {
              Var_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (SymName_39));
              MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (Arity_33));
            }
            {
              Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), Var_89, 1) = ((MR_Box) (Var_90));
            }
            {
              Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
              MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[8])));
            }
            {
              UnknownFormatPieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), UnknownFormatPieces_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[15])));
              MR_hl_field(MR_mktag(1), UnknownFormatPieces_46, 1) = ((MR_Box) (Var_88));
            }
            {
              Var_98 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (UnknownFormatPieces_46));
            }
            {
              Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
              MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              UnknownFormatMsg_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), UnknownFormatMsg_47, 0) = ((MR_Box) (Context_34));
              MR_hl_field(MR_mktag(1), UnknownFormatMsg_47, 1) = ((MR_Box) (Var_97));
            }
            {
              Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (UnknownFormatMsg_47));
              MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              UnknownFormatSpec_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), UnknownFormatSpec_48, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(0), UnknownFormatSpec_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__format_call_scalar_common_3[4])));
              MR_hl_field(MR_mktag(0), UnknownFormatSpec_48, 2) = ((MR_Box) (Var_103));
            }
            {
              STATE_VARIABLE_Specs_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_105_105, 0) = ((MR_Box) (UnknownFormatSpec_48));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_105_105, 1) = ((MR_Box) (STATE_VARIABLE_Specs_84_84));
            }
          }
          break;
      }
    }
    else
      STATE_VARIABLE_Specs_105_105 = STATE_VARIABLE_Specs_84_84;
    check_hlds__simplify__format_call__follow_list_skeleton_5_p_0(ConjMaps_18, PredMap_19, CurId_35, ValuesVar_28, &SkeletonResult_49);
    succeeded = (SkeletonResult_49 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      PolytypeVars0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SkeletonResult_49, (MR_Integer) 0))));
      SkeletonVars0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SkeletonResult_49, (MR_Integer) 1))));
      TypeInfo_169_169 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
      TypeInfo_170_170 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[3]);
      {
        Var_106 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_7[1]));
        MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (check_hlds__simplify__format_call__check_format_call_site_14_p_0_1));
        MR_hl_field(MR_mktag(0), Var_106, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_106, 3) = ((MR_Box) (ConjMaps_18));
        MR_hl_field(MR_mktag(0), Var_106, 4) = ((MR_Box) (PredMap_19));
        MR_hl_field(MR_mktag(0), Var_106, 5) = ((MR_Box) (CurId_35));
      }
      mercury__list__map_3_p_0(TypeInfo_169_169, TypeInfo_170_170, Var_106, PolytypeVars0_50, &MaybeAbstractPolyTypes0_52);
      TypeCtorInfo_171_171 = (MR_Word) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0);
      succeeded = check_hlds__simplify__format_call__project_all_yes_2_p_0(TypeCtorInfo_171_171, MaybeAbstractPolyTypes0_52, &AbstractPolyTypes0_53);
    }
    if (succeeded)
    {
      MR_Word PolyTypesToDeleteVars0_54;
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Tuple Var_109;

      {
        Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (ValuesVar_28));
        MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (SkeletonVars0_51));
      }
      {
        Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (StringVar_27));
        MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_108));
      }
      PolyTypesToDeleteVars0_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), Var_107, PolytypeVars0_50);
      {
        Var_109 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (AbstractPolyTypes0_53));
        MR_hl_field(MR_mktag(0), Var_109, 1) = ((MR_Box) (PolyTypesToDeleteVars0_54));
      }
      {
        MaybePolyTypesInfo_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybePolyTypesInfo_55, 0) = ((MR_Box) (Var_109));
      }
      STATE_VARIABLE_Specs_130_130 = STATE_VARIABLE_Specs_105_105;
    }
    else
    {
      MR_Word WarnUnknownFormatCallsB_56;

      MaybePolyTypesInfo_55 = (MR_Word) ((MR_Unsigned) 0U);
      libs__globals__lookup_bool_option_3_p_0(Globals_40, (MR_Integer) 46, &WarnUnknownFormatCallsB_56);
      switch (WarnUnknownFormatCallsB_56) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_130_130 = STATE_VARIABLE_Specs_105_105;
          break;
        case (MR_Integer) 1:
          {
            MR_Word UnknownFormatValuesPieces_57;
            MR_Word UnknownFormatValuesMsg_58;
            MR_Word UnknownFormatValuesSpec_59;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_115;
            MR_Word Var_122;
            MR_Word Var_123;
            MR_Word Var_128;

            {
              Var_115 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (SymName_39));
              MR_hl_field(MR_mktag(0), Var_115, 1) = ((MR_Box) (Arity_33));
            }
            {
              Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_114, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), Var_114, 1) = ((MR_Box) (Var_115));
            }
            {
              Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Var_114));
              MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[8])));
            }
            {
              UnknownFormatValuesPieces_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), UnknownFormatValuesPieces_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[16])));
              MR_hl_field(MR_mktag(1), UnknownFormatValuesPieces_57, 1) = ((MR_Box) (Var_113));
            }
            {
              Var_123 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_123, 0) = ((MR_Box) (UnknownFormatValuesPieces_57));
            }
            {
              Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Var_123));
              MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              UnknownFormatValuesMsg_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), UnknownFormatValuesMsg_58, 0) = ((MR_Box) (Context_34));
              MR_hl_field(MR_mktag(1), UnknownFormatValuesMsg_58, 1) = ((MR_Box) (Var_122));
            }
            {
              Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (UnknownFormatValuesMsg_58));
              MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              UnknownFormatValuesSpec_59 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), UnknownFormatValuesSpec_59, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(0), UnknownFormatValuesSpec_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__format_call_scalar_common_3[4])));
              MR_hl_field(MR_mktag(0), UnknownFormatValuesSpec_59, 2) = ((MR_Box) (Var_128));
            }
            {
              STATE_VARIABLE_Specs_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_130_130, 0) = ((MR_Box) (UnknownFormatValuesSpec_59));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_130_130, 1) = ((MR_Box) (STATE_VARIABLE_Specs_105_105));
            }
          }
          break;
      }
    }
    succeeded = (FormatStringResult_41 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      FormatString_60 = ((MR_String) ((MR_hl_field(MR_mktag(1), FormatStringResult_41, (MR_Integer) 0))));
      FormatStringToDeleteVars_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FormatStringResult_41, (MR_Integer) 1))));
      ToDeleteGoals_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FormatStringResult_41, (MR_Integer) 2))));
      succeeded = (MaybePolyTypesInfo_55 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_131 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybePolyTypesInfo_55, (MR_Integer) 0))));
        AbstractPolyTypes_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_131, (MR_Integer) 0))));
        PolyTypeToDeleteVars_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_131, (MR_Integer) 1))));
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word FormatStringChars_65;
      MR_Word MaybeSpecs_66;

      mercury__string__to_char_list_2_p_0(FormatString_60, &FormatStringChars_65);
      check_hlds__simplify__format_call__parse_string_format__parse_and_optimize_format_string_4_p_0(FormatStringChars_65, AbstractPolyTypes_63, Context_34, &MaybeSpecs_66);
      if (((MR_tag((MR_Word) MaybeSpecs_66)) == (MR_Integer) 1))
      {
        MR_Word HeadError_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSpecs_66, (MR_Integer) 0))));
        MR_Word TailErrors_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSpecs_66, (MR_Integer) 1))));
        MR_Word WarnKnownBadFormatCalls_69;

        libs__globals__lookup_bool_option_3_p_0(Globals_40, (MR_Integer) 44, &WarnKnownBadFormatCalls_69);
        switch (WarnKnownBadFormatCalls_69) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_79 = STATE_VARIABLE_Specs_130_130;
            break;
          case (MR_Integer) 1:
            {
              MR_Word PrefixPieces_70;
              MR_Word WarnOnlyOneFormatStringError_71;
              MR_Word ErrorPieces_72;
              MR_Word BadFormatMsg_73;
              MR_Word BadFormatSpec_74;
              MR_Word Var_138;
              MR_Word Var_141;
              MR_Word Var_142;
              MR_Word Var_143;
              MR_Word Var_156;
              MR_Word Var_157;
              MR_Word Var_158;
              MR_Word Var_159;
              MR_Word Var_164;

              {
                Var_143 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_143, 0) = ((MR_Box) (SymName_39));
                MR_hl_field(MR_mktag(0), Var_143, 1) = ((MR_Box) (Arity_33));
              }
              {
                Var_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_142, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), Var_142, 1) = ((MR_Box) (Var_143));
              }
              {
                Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (Var_142));
                MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[10])));
              }
              {
                Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[18])));
                MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_141));
              }
              {
                PrefixPieces_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), PrefixPieces_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[17])));
                MR_hl_field(MR_mktag(1), PrefixPieces_70, 1) = ((MR_Box) (Var_138));
              }
              libs__globals__lookup_bool_option_3_p_0(Globals_40, (MR_Integer) 45, &WarnOnlyOneFormatStringError_71);
              switch (WarnOnlyOneFormatStringError_71) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_151;
                    MR_Word Var_152;

                    Var_151 = check_hlds__simplify__format_call__string_format_error_to_words_1_f_0(HeadError_67);
                    Var_152 = mercury__list__map_2_f_0((MR_Word) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[10]), TailErrors_68);
                    {
                      ErrorPieces_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ErrorPieces_72, 0) = ((MR_Box) (Var_151));
                      MR_hl_field(MR_mktag(1), ErrorPieces_72, 1) = ((MR_Box) (Var_152));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_154;

                    Var_154 = check_hlds__simplify__format_call__string_format_error_to_words_1_f_0(HeadError_67);
                    {
                      ErrorPieces_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ErrorPieces_72, 0) = ((MR_Box) (Var_154));
                      MR_hl_field(MR_mktag(1), ErrorPieces_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
              }
              {
                Var_157 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_157, 0) = ((MR_Box) (PrefixPieces_70));
              }
              {
                Var_159 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_159, 0) = ((MR_Box) (ErrorPieces_72));
              }
              {
                Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) (Var_159));
                MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (Var_157));
                MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) (Var_158));
              }
              {
                BadFormatMsg_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), BadFormatMsg_73, 0) = ((MR_Box) (Context_34));
                MR_hl_field(MR_mktag(1), BadFormatMsg_73, 1) = ((MR_Box) (Var_156));
              }
              {
                Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (BadFormatMsg_73));
                MR_hl_field(MR_mktag(1), Var_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                BadFormatSpec_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), BadFormatSpec_74, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(0), BadFormatSpec_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__format_call_scalar_common_3[4])));
                MR_hl_field(MR_mktag(0), BadFormatSpec_74, 2) = ((MR_Box) (Var_164));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_79 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BadFormatSpec_74));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_130_130));
              }
            }
            break;
        }
        *STATE_VARIABLE_GoalIdMap_77 = STATE_VARIABLE_GoalIdMap_0_76;
        *STATE_VARIABLE_VarSet_81 = STATE_VARIABLE_VarSet_0_80;
        *STATE_VARIABLE_VarTypes_83 = STATE_VARIABLE_VarTypes_0_82;
      }
      else
      {
        MR_Word Specs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeSpecs_66, (MR_Integer) 0))));

        switch (OptFormatCalls_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_GoalIdMap_77 = STATE_VARIABLE_GoalIdMap_0_76;
              *STATE_VARIABLE_VarSet_81 = STATE_VARIABLE_VarSet_0_80;
              *STATE_VARIABLE_VarTypes_83 = STATE_VARIABLE_VarTypes_0_82;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ToDeleteVars_75;

              ToDeleteVars_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), FormatStringToDeleteVars_61, PolyTypeToDeleteVars_64);
              check_hlds__simplify__format_call__create_replacement_goal_12_p_0(ModuleInfo_15, GoalId_25, CallKind_29, Specs_22, ToDeleteVars_75, ToDeleteGoals_62, STATE_VARIABLE_GoalIdMap_0_76, STATE_VARIABLE_GoalIdMap_77, STATE_VARIABLE_VarSet_0_80, STATE_VARIABLE_VarSet_81, STATE_VARIABLE_VarTypes_0_82, STATE_VARIABLE_VarTypes_83);
            }
            break;
        }
        *STATE_VARIABLE_Specs_79 = STATE_VARIABLE_Specs_130_130;
      }
    }
    else
    {
      *STATE_VARIABLE_VarTypes_83 = STATE_VARIABLE_VarTypes_0_82;
      *STATE_VARIABLE_VarSet_81 = STATE_VARIABLE_VarSet_0_80;
      *STATE_VARIABLE_Specs_79 = STATE_VARIABLE_Specs_130_130;
      *STATE_VARIABLE_GoalIdMap_77 = STATE_VARIABLE_GoalIdMap_0_76;
    }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__create_replacement_goal_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word GoalId_14,
  MR_Word CallKind_15,
  MR_Word Specs_16,
  MR_Word ToDeleteVars_17,
  MR_Word ToDeleteGoals_18,
  MR_Word STATE_VARIABLE_GoalIdMap_0_33,
  MR_Word * STATE_VARIABLE_GoalIdMap_34,
  MR_Word STATE_VARIABLE_VarSet_0_35,
  MR_Word * STATE_VARIABLE_VarSet_36,
  MR_Word STATE_VARIABLE_VarTypes_0_37,
  MR_Word * STATE_VARIABLE_VarTypes_38)
{
  {
    MR_Word ReplacementGoal_24;
    MR_Word FCOptGoalInfo_32;
    MR_Word Var_45;
    MR_Word Var_46;

    switch (MR_tag((MR_Word) CallKind_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallKind_15, (MR_Integer) 0))));
          MR_Word ResultVar_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallKind_15, (MR_Integer) 1))));

          check_hlds__simplify__format_call__create_string_format_replacement_9_p_0(ModuleInfo_13, Specs_16, Context_22, ResultVar_23, &ReplacementGoal_24, STATE_VARIABLE_VarSet_0_35, STATE_VARIABLE_VarSet_36, STATE_VARIABLE_VarTypes_0_37, STATE_VARIABLE_VarTypes_38);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IOInVar_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallKind_15, (MR_Integer) 1))));
          MR_Word IOOutVar_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallKind_15, (MR_Integer) 2))));
          MR_Word Context_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallKind_15, (MR_Integer) 0))));

          check_hlds__simplify__format_call__create_io_format_replacement_11_p_0(ModuleInfo_13, Specs_16, Context_48, (MR_Word) ((MR_Unsigned) 0U), IOInVar_25, IOOutVar_26, &ReplacementGoal_24, STATE_VARIABLE_VarSet_0_35, STATE_VARIABLE_VarSet_36, STATE_VARIABLE_VarTypes_0_37, STATE_VARIABLE_VarTypes_38);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word StreamVar_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CallKind_15, (MR_Integer) 1))));
          MR_Word IOInVar_54 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CallKind_15, (MR_Integer) 2))));
          MR_Word IOOutVar_55 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CallKind_15, (MR_Integer) 3))));
          MR_Word MaybeStreamVar_56;
          MR_Word Context_57 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CallKind_15, (MR_Integer) 0))));

          {
            MaybeStreamVar_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeStreamVar_56, 0) = ((MR_Box) (StreamVar_28));
          }
          check_hlds__simplify__format_call__create_io_format_replacement_11_p_0(ModuleInfo_13, Specs_16, Context_57, MaybeStreamVar_56, IOInVar_54, IOOutVar_55, &ReplacementGoal_24, STATE_VARIABLE_VarSet_0_35, STATE_VARIABLE_VarSet_36, STATE_VARIABLE_VarTypes_0_37, STATE_VARIABLE_VarTypes_38);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word TC_InfoVarForStream_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CallKind_15, (MR_Integer) 1))));
          MR_Word StateInVar_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CallKind_15, (MR_Integer) 3))));
          MR_Word StateOutVar_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CallKind_15, (MR_Integer) 4))));
          MR_Word Context_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CallKind_15, (MR_Integer) 0))));
          MR_Word StreamVar_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CallKind_15, (MR_Integer) 2))));

          check_hlds__simplify__format_call__create_stream_string_writer_format_replacement_12_p_0(ModuleInfo_13, Specs_16, Context_49, TC_InfoVarForStream_29, StreamVar_50, StateInVar_30, StateOutVar_31, &ReplacementGoal_24, STATE_VARIABLE_VarSet_0_35, STATE_VARIABLE_VarSet_36, STATE_VARIABLE_VarTypes_0_37, STATE_VARIABLE_VarTypes_38);
        }
        break;
    }
    Var_45 = mercury__list__sort_1_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), ToDeleteVars_17);
    Var_46 = mercury__list__sort_1_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), ToDeleteGoals_18);
    {
      FCOptGoalInfo_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FCOptGoalInfo_32, 0) = ((MR_Box) (ReplacementGoal_24));
      MR_hl_field(MR_mktag(0), FCOptGoalInfo_32, 1) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), FCOptGoalInfo_32, 2) = ((MR_Box) (Var_46));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0), ((MR_Box) (GoalId_14)), ((MR_Box) (FCOptGoalInfo_32)), STATE_VARIABLE_GoalIdMap_0_33, STATE_VARIABLE_GoalIdMap_34);
  }
}

void MR_CALL 
check_hlds__simplify__format_call__create_stream_string_writer_format_replacement_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word Specs_14,
  MR_Word Context_15,
  MR_Word TC_InfoVarForStream_16,
  MR_Word StreamVar_17,
  MR_Word StateInVar_18,
  MR_Word StateOutVar_19,
  MR_Word * ReplacementGoal_20,
  MR_Word STATE_VARIABLE_VarSet_0_32,
  MR_Word * STATE_VARIABLE_VarSet_33,
  MR_Word STATE_VARIABLE_VarTypes_0_34,
  MR_Word * STATE_VARIABLE_VarTypes_35)
{
  {
    MR_Word ResultVar_23;
    MR_Word StringFormatGoals_24;
    MR_Word ValueVars_25;
    MR_Word ArgVars_26;
    MR_Word InstMapDelta_27;
    MR_Word CallGoal_28;
    MR_Word Goals_29;
    MR_Word NonLocals_30;
    MR_Word GoalInfo_31;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_56;

    check_hlds__simplify__format_call__replace_string_format_11_p_0(ModuleInfo_13, Specs_14, Context_15, (MR_Word) ((MR_Unsigned) 0U), &ResultVar_23, &StringFormatGoals_24, &ValueVars_25, STATE_VARIABLE_VarSet_0_32, STATE_VARIABLE_VarSet_33, STATE_VARIABLE_VarTypes_0_34, STATE_VARIABLE_VarTypes_35);
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (StateOutVar_19));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (StateInVar_18));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (ResultVar_23));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (StreamVar_17));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_40));
    }
    {
      ArgVars_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgVars_26, 0) = ((MR_Box) (TC_InfoVarForStream_16));
      MR_hl_field(MR_mktag(1), ArgVars_26, 1) = ((MR_Box) (Var_39));
    }
    check_hlds__simplify__format_call__make_di_uo_instmap_delta_3_p_0(StateInVar_18, StateOutVar_19, &InstMapDelta_27);
    Var_44 = mdbcomp__builtin_modules__mercury_stream_module_0_f_0();
    hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_13, Var_44, (MR_String) "put", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, ArgVars_26, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[13])), InstMapDelta_27, Context_15, &CallGoal_28);
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (CallGoal_28));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Goals_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), StringFormatGoals_24, Var_53);
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (StreamVar_17));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (TC_InfoVarForStream_16));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_56));
    }
    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_55, ValueVars_25, &NonLocals_30);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_30, InstMapDelta_27, (MR_Integer) 0, (MR_Integer) 0, Context_15, &GoalInfo_31);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_29, GoalInfo_31, ReplacementGoal_20);
  }
}

void MR_CALL 
check_hlds__simplify__format_call__create_io_format_replacement_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Specs_13,
  MR_Word Context_14,
  MR_Word MaybeStreamVar_15,
  MR_Word IOInVar_16,
  MR_Word IOOutVar_17,
  MR_Word * ReplacementGoal_18,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27,
  MR_Word STATE_VARIABLE_VarTypes_0_28,
  MR_Word * STATE_VARIABLE_VarTypes_29)
{
  {
    MR_Word Goals_21;
    MR_Word ValueVars_22;
    MR_Word InstMapDelta_23;
    MR_Word NonLocals_24;
    MR_Word GoalInfo_25;
    MR_Word Var_32;
    MR_Word Var_33;

    check_hlds__simplify__format_call__replace_io_format_11_p_0(ModuleInfo_12, Specs_13, MaybeStreamVar_15, IOInVar_16, IOOutVar_17, &Goals_21, &ValueVars_22, STATE_VARIABLE_VarSet_0_26, STATE_VARIABLE_VarSet_27, STATE_VARIABLE_VarTypes_0_28, STATE_VARIABLE_VarTypes_29);
    check_hlds__simplify__format_call__make_di_uo_instmap_delta_3_p_0(IOInVar_16, IOOutVar_17, &InstMapDelta_23);
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (IOOutVar_17));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (IOInVar_16));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_33));
    }
    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_32, ValueVars_22, &NonLocals_24);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_24, InstMapDelta_23, (MR_Integer) 0, (MR_Integer) 0, Context_14, &GoalInfo_25);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_21, GoalInfo_25, ReplacementGoal_18);
  }
}

void MR_CALL 
check_hlds__simplify__format_call__replace_io_format_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Specs_13,
  MR_Word MaybeStreamVar_14,
  MR_Word IOInVar_15,
  MR_Word IOOutVar_16,
  MR_Word * Goals_17,
  MR_Word * STATE_VARIABLE_ValueVars_33,
  MR_Word STATE_VARIABLE_VarSet_0_34,
  MR_Word * STATE_VARIABLE_VarSet_35,
  MR_Word STATE_VARIABLE_VarTypes_0_36,
  MR_Word * STATE_VARIABLE_VarTypes_37)
{
  {
    MR_Word STATE_VARIABLE_ValueVars_38_38;

    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_ValueVars_38_38);
    if ((Specs_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Unification_21;
      MR_Word GoalExpr_27;
      MR_Word InstMapDelta_28;
      MR_Word GoalInfo_29;
      MR_Word Goal_30;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_54;
      MR_Word Var_55;

      {
        Unification_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Unification_21, 0) = ((MR_Box) (IOOutVar_16));
        MR_hl_field(MR_mktag(2), Unification_21, 1) = ((MR_Box) (IOInVar_15));
      }
      {
        Var_50 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (IOInVar_15));
      }
      {
        GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalExpr_27, 0) = ((MR_Box) (IOOutVar_16));
        MR_hl_field(MR_mktag(1), GoalExpr_27, 1) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(1), GoalExpr_27, 2) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_9[0]));
        MR_hl_field(MR_mktag(1), GoalExpr_27, 3) = ((MR_Box) (Unification_21));
        MR_hl_field(MR_mktag(1), GoalExpr_27, 4) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[14]));
      }
      check_hlds__simplify__format_call__make_di_uo_instmap_delta_3_p_0(IOInVar_15, IOOutVar_16, &InstMapDelta_28);
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (IOOutVar_16));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (IOInVar_15));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
      }
      Var_51 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_54);
      hlds__hlds_goal__goal_info_init_5_p_0(Var_51, InstMapDelta_28, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_29);
      {
        Goal_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_30, 0) = ((MR_Box) (GoalExpr_27));
        MR_hl_field(MR_mktag(0), Goal_30, 1) = ((MR_Box) (GoalInfo_29));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Goals_17 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_30));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_ValueVars_33 = STATE_VARIABLE_ValueVars_38_38;
      *STATE_VARIABLE_VarSet_35 = STATE_VARIABLE_VarSet_0_34;
      *STATE_VARIABLE_VarTypes_37 = STATE_VARIABLE_VarTypes_0_36;
    }
    else
    {
      MR_Word HeadSpec_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Specs_13, (MR_Integer) 0))));
      MR_Word TailSpecs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Specs_13, (MR_Integer) 1))));

      check_hlds__simplify__format_call__replace_io_format_nonempty_13_p_0(ModuleInfo_12, HeadSpec_31, TailSpecs_32, MaybeStreamVar_14, IOInVar_15, IOOutVar_16, Goals_17, STATE_VARIABLE_ValueVars_38_38, STATE_VARIABLE_ValueVars_33, STATE_VARIABLE_VarSet_0_34, STATE_VARIABLE_VarSet_35, STATE_VARIABLE_VarTypes_0_36, STATE_VARIABLE_VarTypes_37);
    }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__replace_io_format_nonempty_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word HeadSpec_15,
  MR_Word TailSpecs_16,
  MR_Word MaybeStreamVar_17,
  MR_Word IOInVar_18,
  MR_Word IOOutVar_19,
  MR_Word * Goals_20,
  MR_Word STATE_VARIABLE_ValueVars_0_29,
  MR_Word * STATE_VARIABLE_ValueVars_30,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32,
  MR_Word STATE_VARIABLE_VarTypes_0_33,
  MR_Word * STATE_VARIABLE_VarTypes_34)
{
  if ((TailSpecs_16 == (MR_Word) ((MR_Unsigned) 0U)))
    check_hlds__simplify__format_call__replace_one_io_format_12_p_0(ModuleInfo_14, HeadSpec_15, MaybeStreamVar_17, IOInVar_18, IOOutVar_19, Goals_20, STATE_VARIABLE_ValueVars_0_29, STATE_VARIABLE_ValueVars_30, STATE_VARIABLE_VarSet_0_31, STATE_VARIABLE_VarSet_32, STATE_VARIABLE_VarTypes_0_33, STATE_VARIABLE_VarTypes_34);
  else
  {
    MR_Word FirstTailSpec_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailSpecs_16, (MR_Integer) 0))));
    MR_Word LaterTailSpecs_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailSpecs_16, (MR_Integer) 1))));
    MR_Word IOMidVar_26;
    MR_Word HeadSpecGoals_27;
    MR_Word TailSpecsGoals_28;
    MR_Word STATE_VARIABLE_VarSet_35_35;
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_VarTypes_37_37;
    MR_Word STATE_VARIABLE_ValueVars_38_38;
    MR_Word STATE_VARIABLE_VarSet_39_39;
    MR_Word STATE_VARIABLE_VarTypes_40_40;

    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &IOMidVar_26, STATE_VARIABLE_VarSet_0_31, &STATE_VARIABLE_VarSet_35_35);
    Var_36 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
    hlds__vartypes__add_var_type_4_p_0(IOMidVar_26, Var_36, STATE_VARIABLE_VarTypes_0_33, &STATE_VARIABLE_VarTypes_37_37);
    check_hlds__simplify__format_call__replace_one_io_format_12_p_0(ModuleInfo_14, HeadSpec_15, MaybeStreamVar_17, IOInVar_18, IOMidVar_26, &HeadSpecGoals_27, STATE_VARIABLE_ValueVars_0_29, &STATE_VARIABLE_ValueVars_38_38, STATE_VARIABLE_VarSet_35_35, &STATE_VARIABLE_VarSet_39_39, STATE_VARIABLE_VarTypes_37_37, &STATE_VARIABLE_VarTypes_40_40);
    check_hlds__simplify__format_call__replace_io_format_nonempty_13_p_0(ModuleInfo_14, FirstTailSpec_24, LaterTailSpecs_25, MaybeStreamVar_17, IOMidVar_26, IOOutVar_19, &TailSpecsGoals_28, STATE_VARIABLE_ValueVars_38_38, STATE_VARIABLE_ValueVars_30, STATE_VARIABLE_VarSet_39_39, STATE_VARIABLE_VarSet_32, STATE_VARIABLE_VarTypes_40_40, STATE_VARIABLE_VarTypes_34);
    *Goals_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadSpecGoals_27, TailSpecsGoals_28);
  }
}

void MR_CALL 
check_hlds__simplify__format_call__replace_one_io_format_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word Spec_14,
  MR_Word MaybeStreamVar_15,
  MR_Word IOInVar_16,
  MR_Word IOOutVar_17,
  MR_Word * Goals_18,
  MR_Word STATE_VARIABLE_ValueVars_0_29,
  MR_Word * STATE_VARIABLE_ValueVars_30,
  MR_Word STATE_VARIABLE_VarSet_0_31,
  MR_Word * STATE_VARIABLE_VarSet_32,
  MR_Word STATE_VARIABLE_VarTypes_0_33,
  MR_Word * STATE_VARIABLE_VarTypes_34)
{
  {
    MR_Word SpecVar_22;
    MR_Word SpecGoals_23;
    MR_Word SpecContext_24;
    MR_Word ArgVars_26;
    MR_Word InstMapDelta_27;
    MR_Word CallGoal_28;
    MR_Word Var_46;
    MR_Word Var_55;

    check_hlds__simplify__format_call__represent_spec_12_p_0(ModuleInfo_13, Spec_14, (MR_Word) ((MR_Unsigned) 0U), &SpecVar_22, &SpecGoals_23, &SpecContext_24, STATE_VARIABLE_ValueVars_0_29, STATE_VARIABLE_ValueVars_30, STATE_VARIABLE_VarSet_0_31, STATE_VARIABLE_VarSet_32, STATE_VARIABLE_VarTypes_0_33, STATE_VARIABLE_VarTypes_34);
    if ((MaybeStreamVar_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_39;
      MR_Word Var_40;

      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (IOOutVar_17));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (IOInVar_16));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_40));
      }
      {
        ArgVars_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ArgVars_26, 0) = ((MR_Box) (SpecVar_22));
        MR_hl_field(MR_mktag(1), ArgVars_26, 1) = ((MR_Box) (Var_39));
      }
    }
    else
    {
      MR_Word StreamVar_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeStreamVar_15, (MR_Integer) 0))));
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;

      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (IOOutVar_17));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (IOInVar_16));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_44));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (SpecVar_22));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_43));
      }
      {
        ArgVars_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ArgVars_26, 0) = ((MR_Box) (StreamVar_25));
        MR_hl_field(MR_mktag(1), ArgVars_26, 1) = ((MR_Box) (Var_42));
      }
    }
    check_hlds__simplify__format_call__make_di_uo_instmap_delta_3_p_0(IOInVar_16, IOOutVar_17, &InstMapDelta_27);
    Var_46 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
    hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_13, Var_46, (MR_String) "write_string", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, ArgVars_26, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[13])), InstMapDelta_27, SpecContext_24, &CallGoal_28);
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (CallGoal_28));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *Goals_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SpecGoals_23, Var_55);
  }
}

void MR_CALL 
check_hlds__simplify__format_call__make_di_uo_instmap_delta_3_p_0(
  MR_Word InVar_4,
  MR_Word OutVar_5,
  MR_Word * InstMapDelta_6)
{
  {
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (InVar_4));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[9])));
    }
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (OutVar_5));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[8])));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (Var_15));
    }
    *InstMapDelta_6 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_13);
  }
}

void MR_CALL 
check_hlds__simplify__format_call__create_string_format_replacement_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Specs_11,
  MR_Word Context_12,
  MR_Word ResultVar_13,
  MR_Word * ReplacementGoal_14,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26,
  MR_Word STATE_VARIABLE_VarTypes_0_27,
  MR_Word * STATE_VARIABLE_VarTypes_28)
{
  {
    MR_bool succeeded;
    MR_Word ActualResultVar_17;
    MR_Word Goals_18;
    MR_Word ValueVars_19;
    MR_Word AllGoals_20;
    MR_Word NonLocals_22;
    MR_Word InstMapDelta_23;
    MR_Word GoalInfo_24;
    MR_Word Var_29;

    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (ResultVar_13));
    }
    check_hlds__simplify__format_call__replace_string_format_11_p_0(ModuleInfo_10, Specs_11, Context_12, Var_29, &ActualResultVar_17, &Goals_18, &ValueVars_19, STATE_VARIABLE_VarSet_0_25, STATE_VARIABLE_VarSet_26, STATE_VARIABLE_VarTypes_0_27, STATE_VARIABLE_VarTypes_28);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), ((MR_Box) (ActualResultVar_17)), ((MR_Box) (ResultVar_13)));
    if (succeeded)
      AllGoals_20 = Goals_18;
    else
    {
      MR_Word AssignGoal_21;
      MR_Word Var_35;

      hlds__make_goal__make_simple_assign_5_p_0(ResultVar_13, ActualResultVar_17, (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_3[2])), (MR_Word) ((MR_Unsigned) 0U), &AssignGoal_21);
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (AssignGoal_21));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      AllGoals_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals_18, Var_35);
    }
    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResultVar_13, ValueVars_19, &NonLocals_22);
    InstMapDelta_23 = hlds__instmap__instmap_delta_bind_var_1_f_0(ResultVar_13);
    hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_22, InstMapDelta_23, (MR_Integer) 0, (MR_Integer) 0, Context_12, &GoalInfo_24);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(AllGoals_20, GoalInfo_24, ReplacementGoal_14);
  }
}

void MR_CALL 
check_hlds__simplify__format_call__replace_string_format_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Specs_13,
  MR_Word Context_14,
  MR_Word MaybeResultVar_15,
  MR_Word * ResultVar_16,
  MR_Word * Goals_17,
  MR_Word * STATE_VARIABLE_ValueVars_24,
  MR_Word STATE_VARIABLE_VarSet_0_25,
  MR_Word * STATE_VARIABLE_VarSet_26,
  MR_Word STATE_VARIABLE_VarTypes_0_27,
  MR_Word * STATE_VARIABLE_VarTypes_28)
{
  {
    MR_Word STATE_VARIABLE_ValueVars_29_29;

    parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_ValueVars_29_29);
    if ((Specs_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Goal_21;

      check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(MaybeResultVar_15, ResultVar_16, STATE_VARIABLE_VarSet_0_25, STATE_VARIABLE_VarSet_26, STATE_VARIABLE_VarTypes_0_27, STATE_VARIABLE_VarTypes_28);
      hlds__make_goal__make_string_const_construction_4_p_0(Context_14, *ResultVar_16, (MR_String) "", &Goal_21);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Goals_17 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_21));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_ValueVars_24 = STATE_VARIABLE_ValueVars_29_29;
    }
    else
    {
      MR_Word HeadSpec_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Specs_13, (MR_Integer) 0))));
      MR_Word TailSpecs_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Specs_13, (MR_Integer) 1))));

      check_hlds__simplify__format_call__replace_string_format_nonempty_13_p_0(ModuleInfo_12, HeadSpec_22, TailSpecs_23, Context_14, MaybeResultVar_15, ResultVar_16, Goals_17, STATE_VARIABLE_ValueVars_29_29, STATE_VARIABLE_ValueVars_24, STATE_VARIABLE_VarSet_0_25, STATE_VARIABLE_VarSet_26, STATE_VARIABLE_VarTypes_0_27, STATE_VARIABLE_VarTypes_28);
    }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__replace_string_format_nonempty_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word HeadSpec_15,
  MR_Word TailSpecs_16,
  MR_Word Context_17,
  MR_Word MaybeResultVar_18,
  MR_Word * ResultVar_19,
  MR_Word * Goals_20,
  MR_Word STATE_VARIABLE_ValueVars_0_32,
  MR_Word * STATE_VARIABLE_ValueVars_33,
  MR_Word STATE_VARIABLE_VarSet_0_34,
  MR_Word * STATE_VARIABLE_VarSet_35,
  MR_Word STATE_VARIABLE_VarTypes_0_36,
  MR_Word * STATE_VARIABLE_VarTypes_37)
{
  if ((TailSpecs_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word _HeadSpecContext_24;

    check_hlds__simplify__format_call__represent_spec_12_p_0(ModuleInfo_14, HeadSpec_15, MaybeResultVar_18, ResultVar_19, Goals_20, &_HeadSpecContext_24, STATE_VARIABLE_ValueVars_0_32, STATE_VARIABLE_ValueVars_33, STATE_VARIABLE_VarSet_0_34, STATE_VARIABLE_VarSet_35, STATE_VARIABLE_VarTypes_0_36, STATE_VARIABLE_VarTypes_37);
  }
  else
  {
    MR_Word FirstTailSpec_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailSpecs_16, (MR_Integer) 0))));
    MR_Word LaterTailSpecs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailSpecs_16, (MR_Integer) 1))));
    MR_Word TailSpecsVar_27;
    MR_Word TailSpecsGoals_28;
    MR_Word HeadSpecVar_29;
    MR_Word HeadSpecGoals_30;
    MR_Word AppendGoal_31;
    MR_Word STATE_VARIABLE_ValueVars_39_39;
    MR_Word STATE_VARIABLE_VarSet_40_40;
    MR_Word STATE_VARIABLE_VarTypes_41_41;
    MR_Word STATE_VARIABLE_VarSet_44_44;
    MR_Word STATE_VARIABLE_VarTypes_45_45;
    MR_Word Var_48;
    MR_Word Var_54;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word _HeadSpecContext_72;

    check_hlds__simplify__format_call__replace_string_format_nonempty_13_p_0(ModuleInfo_14, FirstTailSpec_25, LaterTailSpecs_26, Context_17, (MR_Word) ((MR_Unsigned) 0U), &TailSpecsVar_27, &TailSpecsGoals_28, STATE_VARIABLE_ValueVars_0_32, &STATE_VARIABLE_ValueVars_39_39, STATE_VARIABLE_VarSet_0_34, &STATE_VARIABLE_VarSet_40_40, STATE_VARIABLE_VarTypes_0_36, &STATE_VARIABLE_VarTypes_41_41);
    check_hlds__simplify__format_call__represent_spec_12_p_0(ModuleInfo_14, HeadSpec_15, (MR_Word) ((MR_Unsigned) 0U), &HeadSpecVar_29, &HeadSpecGoals_30, &_HeadSpecContext_72, STATE_VARIABLE_ValueVars_39_39, STATE_VARIABLE_ValueVars_33, STATE_VARIABLE_VarSet_40_40, &STATE_VARIABLE_VarSet_44_44, STATE_VARIABLE_VarTypes_41_41, &STATE_VARIABLE_VarTypes_45_45);
    check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(MaybeResultVar_18, ResultVar_19, STATE_VARIABLE_VarSet_44_44, STATE_VARIABLE_VarSet_35, STATE_VARIABLE_VarTypes_45_45, STATE_VARIABLE_VarTypes_37);
    Var_48 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (*ResultVar_19));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (TailSpecsVar_27));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (HeadSpecVar_29));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (*ResultVar_19));
      MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[8])));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_56 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_60);
    hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_14, Var_48, (MR_String) "++", (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, Var_54, (MR_Word) ((MR_Unsigned) 0U), Var_56, Context_17, &AppendGoal_31);
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (AppendGoal_31));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadSpecGoals_30, Var_67);
    *Goals_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TailSpecsGoals_28, Var_66);
  }
}

void MR_CALL 
check_hlds__simplify__format_call__represent_spec_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word Spec_14,
  MR_Word MaybeResultVar_15,
  MR_Word * ResultVar_16,
  MR_Word * Goals_17,
  MR_Word * Context_18,
  MR_Word STATE_VARIABLE_ValueVars_0_44,
  MR_Word * STATE_VARIABLE_ValueVars_45,
  MR_Word STATE_VARIABLE_VarSet_0_46,
  MR_Word * STATE_VARIABLE_VarSet_47,
  MR_Word STATE_VARIABLE_VarTypes_0_48,
  MR_Word * STATE_VARIABLE_VarTypes_49)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Spec_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String StringConstant_22;
          MR_Word Goal_23;

          *Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Spec_14, (MR_Integer) 0))));
          StringConstant_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Spec_14, (MR_Integer) 1))));
          check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(MaybeResultVar_15, ResultVar_16, STATE_VARIABLE_VarSet_0_46, STATE_VARIABLE_VarSet_47, STATE_VARIABLE_VarTypes_0_48, STATE_VARIABLE_VarTypes_49);
          hlds__make_goal__make_string_const_construction_4_p_0(*Context_18, *ResultVar_16, StringConstant_22, &Goal_23);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Goals_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_23));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_ValueVars_45 = STATE_VARIABLE_ValueVars_0_44;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Flags_24;
          MR_Word MaybeWidth_25;
          MR_Word ValueVar_26;
          MR_Word FlagsVar_27;
          MR_Word FlagsGoals_28;
          MR_String WidthSuffix_29;
          MR_Word WidthVars_30;
          MR_Word WidthGoals_31;
          MR_Word CallGoal_32;
          MR_Word STATE_VARIABLE_VarSet_216_216;
          MR_Word STATE_VARIABLE_VarTypes_217_217;
          MR_Word STATE_VARIABLE_VarSet_218_218;
          MR_Word STATE_VARIABLE_VarTypes_219_219;
          MR_Word Var_222;
          MR_String Var_223;
          MR_Word Var_228;
          MR_Word Var_230;
          MR_Word Var_232;
          MR_Word Var_234;
          MR_Word Var_235;
          MR_Word Var_236;
          MR_Word Var_238;
          MR_Word Var_239;
          MR_Word Var_244;
          MR_Word Var_245;

          *Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Spec_14, (MR_Integer) 0))));
          Flags_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Spec_14, (MR_Integer) 1))));
          MaybeWidth_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Spec_14, (MR_Integer) 2))));
          ValueVar_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Spec_14, (MR_Integer) 3))));
          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ValueVar_26, STATE_VARIABLE_ValueVars_0_44, STATE_VARIABLE_ValueVars_45);
          check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(MaybeResultVar_15, ResultVar_16, STATE_VARIABLE_VarSet_0_46, &STATE_VARIABLE_VarSet_216_216, STATE_VARIABLE_VarTypes_0_48, &STATE_VARIABLE_VarTypes_217_217);
          check_hlds__simplify__format_call__build_flags_arg_8_p_0(*Context_18, Flags_24, &FlagsVar_27, &FlagsGoals_28, STATE_VARIABLE_VarSet_216_216, &STATE_VARIABLE_VarSet_218_218, STATE_VARIABLE_VarTypes_217_217, &STATE_VARIABLE_VarTypes_219_219);
          check_hlds__simplify__format_call__maybe_build_width_arg_8_p_0(MaybeWidth_25, &WidthSuffix_29, &WidthVars_30, &WidthGoals_31, STATE_VARIABLE_VarSet_218_218, STATE_VARIABLE_VarSet_47, STATE_VARIABLE_VarTypes_219_219, STATE_VARIABLE_VarTypes_49);
          Var_222 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
          Var_223 = mercury__string__f_43_43_2_f_0((MR_String) "format_char_component", WidthSuffix_29);
          {
            Var_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_232, 0) = ((MR_Box) (FlagsVar_27));
            MR_hl_field(MR_mktag(1), Var_232, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_236, 0) = ((MR_Box) (*ResultVar_16));
            MR_hl_field(MR_mktag(1), Var_236, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_235, 0) = ((MR_Box) (ValueVar_26));
            MR_hl_field(MR_mktag(1), Var_235, 1) = ((MR_Box) (Var_236));
          }
          Var_234 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), WidthVars_30, Var_235);
          Var_228 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), Var_232, Var_234);
          {
            Var_239 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_239, 0) = ((MR_Box) (*ResultVar_16));
            MR_hl_field(MR_mktag(0), Var_239, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[8])));
          }
          {
            Var_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_238, 0) = ((MR_Box) (Var_239));
            MR_hl_field(MR_mktag(1), Var_238, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_230 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_238);
          hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_13, Var_222, Var_223, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, Var_228, (MR_Word) ((MR_Unsigned) 0U), Var_230, *Context_18, &CallGoal_32);
          {
            Var_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_245, 0) = ((MR_Box) (CallGoal_32));
            MR_hl_field(MR_mktag(1), Var_245, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_244 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), WidthGoals_31, Var_245);
          *Goals_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FlagsGoals_28, Var_244);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MaybePrec_33;
          MR_Word Flags_262;
          MR_Word MaybeWidth_263;
          MR_Word ValueVar_264;
          MR_Word Var_170;
          MR_Word Var_171;
          MR_Word Var_172;
          MR_Word Var_173;
          MR_Word Var_174;

          *Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Spec_14, (MR_Integer) 0))));
          Flags_262 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Spec_14, (MR_Integer) 1))));
          MaybeWidth_263 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Spec_14, (MR_Integer) 2))));
          MaybePrec_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Spec_14, (MR_Integer) 3))));
          ValueVar_264 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Spec_14, (MR_Integer) 4))));
          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ValueVar_264, STATE_VARIABLE_ValueVars_0_44, STATE_VARIABLE_ValueVars_45);
          Var_170 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_262, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
          Var_171 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_262, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
          Var_172 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_262, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
          Var_173 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_262, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
          Var_174 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_262, (MR_Integer) 0))) & (MR_Integer) 1);
          succeeded = (Var_170 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Var_171 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Var_172 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (Var_173 == (MR_Integer) 0);
                if (succeeded)
                  succeeded = (Var_174 == (MR_Integer) 0);
              }
            }
          }
          if (succeeded)
          {
            succeeded = (MaybeWidth_263 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = (MaybePrec_33 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            if ((MaybeResultVar_15 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *ResultVar_16 = ValueVar_264;
              *Goals_17 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              MR_Word AssignGoal_34;

              *ResultVar_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeResultVar_15, (MR_Integer) 0))));
              hlds__make_goal__make_simple_assign_5_p_0(*ResultVar_16, ValueVar_264, (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_3[1])), (MR_Word) ((MR_Unsigned) 0U), &AssignGoal_34);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Goals_17 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AssignGoal_34));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            *STATE_VARIABLE_VarTypes_49 = STATE_VARIABLE_VarTypes_0_48;
            *STATE_VARIABLE_VarSet_47 = STATE_VARIABLE_VarSet_0_46;
          }
          else
          {
            MR_String PrecSuffix_35;
            MR_Word PrecVars_36;
            MR_Word PrecGoals_37;
            MR_Word STATE_VARIABLE_VarSet_179_179;
            MR_Word STATE_VARIABLE_VarTypes_180_180;
            MR_Word STATE_VARIABLE_VarSet_181_181;
            MR_Word STATE_VARIABLE_VarTypes_182_182;
            MR_Word STATE_VARIABLE_VarSet_183_183;
            MR_Word STATE_VARIABLE_VarTypes_184_184;
            MR_Word Var_187;
            MR_String Var_188;
            MR_Word Var_193;
            MR_Word Var_195;
            MR_String Var_197;
            MR_Word Var_198;
            MR_Word Var_200;
            MR_Word Var_201;
            MR_Word Var_202;
            MR_Word Var_203;
            MR_Word Var_205;
            MR_Word Var_206;
            MR_Word Var_211;
            MR_Word Var_212;
            MR_Word Var_213;
            MR_Word FlagsVar_250;
            MR_Word FlagsGoals_251;
            MR_String WidthSuffix_252;
            MR_Word WidthVars_253;
            MR_Word WidthGoals_254;
            MR_Word CallGoal_255;

            check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(MaybeResultVar_15, ResultVar_16, STATE_VARIABLE_VarSet_0_46, &STATE_VARIABLE_VarSet_179_179, STATE_VARIABLE_VarTypes_0_48, &STATE_VARIABLE_VarTypes_180_180);
            check_hlds__simplify__format_call__build_flags_arg_8_p_0(*Context_18, Flags_262, &FlagsVar_250, &FlagsGoals_251, STATE_VARIABLE_VarSet_179_179, &STATE_VARIABLE_VarSet_181_181, STATE_VARIABLE_VarTypes_180_180, &STATE_VARIABLE_VarTypes_182_182);
            check_hlds__simplify__format_call__maybe_build_width_arg_8_p_0(MaybeWidth_263, &WidthSuffix_252, &WidthVars_253, &WidthGoals_254, STATE_VARIABLE_VarSet_181_181, &STATE_VARIABLE_VarSet_183_183, STATE_VARIABLE_VarTypes_182_182, &STATE_VARIABLE_VarTypes_184_184);
            check_hlds__simplify__format_call__maybe_build_prec_arg_8_p_0(MaybePrec_33, &PrecSuffix_35, &PrecVars_36, &PrecGoals_37, STATE_VARIABLE_VarSet_183_183, STATE_VARIABLE_VarSet_47, STATE_VARIABLE_VarTypes_184_184, STATE_VARIABLE_VarTypes_49);
            Var_187 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
            Var_197 = mercury__string__f_43_43_2_f_0(WidthSuffix_252, PrecSuffix_35);
            Var_188 = mercury__string__f_43_43_2_f_0((MR_String) "format_string_component", Var_197);
            {
              Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) (FlagsVar_250));
              MR_hl_field(MR_mktag(1), Var_198, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_203, 0) = ((MR_Box) (*ResultVar_16));
              MR_hl_field(MR_mktag(1), Var_203, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) (ValueVar_264));
              MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) (Var_203));
            }
            Var_201 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), PrecVars_36, Var_202);
            Var_200 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), WidthVars_253, Var_201);
            Var_193 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), Var_198, Var_200);
            {
              Var_206 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_206, 0) = ((MR_Box) (*ResultVar_16));
              MR_hl_field(MR_mktag(0), Var_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[8])));
            }
            {
              Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_205, 0) = ((MR_Box) (Var_206));
              MR_hl_field(MR_mktag(1), Var_205, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_195 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_205);
            hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_13, Var_187, Var_188, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, Var_193, (MR_Word) ((MR_Unsigned) 0U), Var_195, *Context_18, &CallGoal_255);
            {
              Var_213 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_213, 0) = ((MR_Box) (CallGoal_255));
              MR_hl_field(MR_mktag(1), Var_213, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_212 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), PrecGoals_37, Var_213);
            Var_211 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), WidthGoals_254, Var_212);
            *Goals_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FlagsGoals_251, Var_211);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Spec_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word STATE_VARIABLE_VarSet_133_133;
              MR_Word STATE_VARIABLE_VarTypes_134_134;
              MR_Word STATE_VARIABLE_VarSet_135_135;
              MR_Word STATE_VARIABLE_VarTypes_136_136;
              MR_Word STATE_VARIABLE_VarSet_137_137;
              MR_Word STATE_VARIABLE_VarTypes_138_138;
              MR_Word Var_141;
              MR_String Var_142;
              MR_Word Var_147;
              MR_Word Var_149;
              MR_String Var_151;
              MR_Word Var_152;
              MR_Word Var_154;
              MR_Word Var_155;
              MR_Word Var_156;
              MR_Word Var_157;
              MR_Word Var_159;
              MR_Word Var_160;
              MR_Word Var_165;
              MR_Word Var_166;
              MR_Word Var_167;
              MR_Word Flags_271;
              MR_Word MaybeWidth_272;
              MR_Word ValueVar_273;
              MR_Word FlagsVar_274;
              MR_Word FlagsGoals_275;
              MR_String WidthSuffix_276;
              MR_Word WidthVars_277;
              MR_Word WidthGoals_278;
              MR_Word CallGoal_279;
              MR_Word MaybePrec_280;
              MR_String PrecSuffix_281;
              MR_Word PrecVars_282;
              MR_Word PrecGoals_283;

              *Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_14, (MR_Integer) 1))));
              Flags_271 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_14, (MR_Integer) 2))));
              MaybeWidth_272 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_14, (MR_Integer) 3))));
              MaybePrec_280 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_14, (MR_Integer) 4))));
              ValueVar_273 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_14, (MR_Integer) 5))));
              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ValueVar_273, STATE_VARIABLE_ValueVars_0_44, STATE_VARIABLE_ValueVars_45);
              check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(MaybeResultVar_15, ResultVar_16, STATE_VARIABLE_VarSet_0_46, &STATE_VARIABLE_VarSet_133_133, STATE_VARIABLE_VarTypes_0_48, &STATE_VARIABLE_VarTypes_134_134);
              check_hlds__simplify__format_call__build_flags_arg_8_p_0(*Context_18, Flags_271, &FlagsVar_274, &FlagsGoals_275, STATE_VARIABLE_VarSet_133_133, &STATE_VARIABLE_VarSet_135_135, STATE_VARIABLE_VarTypes_134_134, &STATE_VARIABLE_VarTypes_136_136);
              check_hlds__simplify__format_call__maybe_build_width_arg_8_p_0(MaybeWidth_272, &WidthSuffix_276, &WidthVars_277, &WidthGoals_278, STATE_VARIABLE_VarSet_135_135, &STATE_VARIABLE_VarSet_137_137, STATE_VARIABLE_VarTypes_136_136, &STATE_VARIABLE_VarTypes_138_138);
              check_hlds__simplify__format_call__maybe_build_prec_arg_8_p_0(MaybePrec_280, &PrecSuffix_281, &PrecVars_282, &PrecGoals_283, STATE_VARIABLE_VarSet_137_137, STATE_VARIABLE_VarSet_47, STATE_VARIABLE_VarTypes_138_138, STATE_VARIABLE_VarTypes_49);
              Var_141 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
              Var_151 = mercury__string__f_43_43_2_f_0(WidthSuffix_276, PrecSuffix_281);
              Var_142 = mercury__string__f_43_43_2_f_0((MR_String) "format_signed_int_component", Var_151);
              {
                Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (FlagsVar_274));
                MR_hl_field(MR_mktag(1), Var_152, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (*ResultVar_16));
                MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (ValueVar_273));
                MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) (Var_157));
              }
              Var_155 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), PrecVars_282, Var_156);
              Var_154 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), WidthVars_277, Var_155);
              Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), Var_152, Var_154);
              {
                Var_160 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_160, 0) = ((MR_Box) (*ResultVar_16));
                MR_hl_field(MR_mktag(0), Var_160, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[8])));
              }
              {
                Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (Var_160));
                MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_149 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_159);
              hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_13, Var_141, Var_142, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, Var_147, (MR_Word) ((MR_Unsigned) 0U), Var_149, *Context_18, &CallGoal_279);
              {
                Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (CallGoal_279));
                MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_166 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), PrecGoals_283, Var_167);
              Var_165 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), WidthGoals_278, Var_166);
              *Goals_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FlagsGoals_275, Var_165);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Base_38;
              MR_Word BaseVar_39;
              MR_Word BaseGoal_40;
              MR_Word STATE_VARIABLE_VarSet_92_92;
              MR_Word STATE_VARIABLE_VarTypes_93_93;
              MR_Word STATE_VARIABLE_VarSet_94_94;
              MR_Word STATE_VARIABLE_VarTypes_95_95;
              MR_Word STATE_VARIABLE_VarSet_96_96;
              MR_Word STATE_VARIABLE_VarTypes_97_97;
              MR_Word STATE_VARIABLE_VarSet_98_98;
              MR_Word STATE_VARIABLE_VarTypes_99_99;
              MR_Word Var_102;
              MR_String Var_103;
              MR_Word Var_108;
              MR_Word Var_110;
              MR_String Var_112;
              MR_Word Var_113;
              MR_Word Var_115;
              MR_Word Var_116;
              MR_Word Var_117;
              MR_Word Var_118;
              MR_Word Var_119;
              MR_Word Var_121;
              MR_Word Var_122;
              MR_Word Var_127;
              MR_Word Var_128;
              MR_Word Var_129;
              MR_Word Var_130;
              MR_Word Flags_284;
              MR_Word MaybeWidth_285;
              MR_Word ValueVar_286;
              MR_Word FlagsVar_287;
              MR_Word FlagsGoals_288;
              MR_String WidthSuffix_289;
              MR_Word WidthVars_290;
              MR_Word WidthGoals_291;
              MR_Word CallGoal_292;
              MR_Word MaybePrec_293;
              MR_String PrecSuffix_294;
              MR_Word PrecVars_295;
              MR_Word PrecGoals_296;

              *Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_14, (MR_Integer) 1))));
              Flags_284 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_14, (MR_Integer) 2))));
              MaybeWidth_285 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_14, (MR_Integer) 3))));
              MaybePrec_293 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_14, (MR_Integer) 4))));
              Base_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Spec_14, (MR_Integer) 5))) & (MR_Integer) 7);
              ValueVar_286 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_14, (MR_Integer) 6))));
              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ValueVar_286, STATE_VARIABLE_ValueVars_0_44, STATE_VARIABLE_ValueVars_45);
              check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(MaybeResultVar_15, ResultVar_16, STATE_VARIABLE_VarSet_0_46, &STATE_VARIABLE_VarSet_92_92, STATE_VARIABLE_VarTypes_0_48, &STATE_VARIABLE_VarTypes_93_93);
              check_hlds__simplify__format_call__build_flags_arg_8_p_0(*Context_18, Flags_284, &FlagsVar_287, &FlagsGoals_288, STATE_VARIABLE_VarSet_92_92, &STATE_VARIABLE_VarSet_94_94, STATE_VARIABLE_VarTypes_93_93, &STATE_VARIABLE_VarTypes_95_95);
              check_hlds__simplify__format_call__maybe_build_width_arg_8_p_0(MaybeWidth_285, &WidthSuffix_289, &WidthVars_290, &WidthGoals_291, STATE_VARIABLE_VarSet_94_94, &STATE_VARIABLE_VarSet_96_96, STATE_VARIABLE_VarTypes_95_95, &STATE_VARIABLE_VarTypes_97_97);
              check_hlds__simplify__format_call__maybe_build_prec_arg_8_p_0(MaybePrec_293, &PrecSuffix_294, &PrecVars_295, &PrecGoals_296, STATE_VARIABLE_VarSet_96_96, &STATE_VARIABLE_VarSet_98_98, STATE_VARIABLE_VarTypes_97_97, &STATE_VARIABLE_VarTypes_99_99);
              check_hlds__simplify__format_call__build_int_base_arg_7_p_0(Base_38, &BaseVar_39, &BaseGoal_40, STATE_VARIABLE_VarSet_98_98, STATE_VARIABLE_VarSet_47, STATE_VARIABLE_VarTypes_99_99, STATE_VARIABLE_VarTypes_49);
              Var_102 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
              Var_112 = mercury__string__f_43_43_2_f_0(WidthSuffix_289, PrecSuffix_294);
              Var_103 = mercury__string__f_43_43_2_f_0((MR_String) "format_unsigned_int_component", Var_112);
              {
                Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (FlagsVar_287));
                MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (*ResultVar_16));
                MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (ValueVar_286));
                MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (Var_119));
              }
              {
                Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (BaseVar_39));
                MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_118));
              }
              Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), PrecVars_295, Var_117);
              Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), WidthVars_290, Var_116);
              Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), Var_113, Var_115);
              {
                Var_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_122, 0) = ((MR_Box) (*ResultVar_16));
                MR_hl_field(MR_mktag(0), Var_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[8])));
              }
              {
                Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
                MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_110 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_121);
              hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_13, Var_102, Var_103, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, Var_108, (MR_Word) ((MR_Unsigned) 0U), Var_110, *Context_18, &CallGoal_292);
              {
                Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (CallGoal_292));
                MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (BaseGoal_40));
                MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_130));
              }
              Var_128 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), PrecGoals_296, Var_129);
              Var_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), WidthGoals_291, Var_128);
              *Goals_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FlagsGoals_288, Var_127);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Kind_41;
              MR_Word KindVar_42;
              MR_Word KindGoal_43;
              MR_Word STATE_VARIABLE_VarSet_51_51;
              MR_Word STATE_VARIABLE_VarTypes_52_52;
              MR_Word STATE_VARIABLE_VarSet_53_53;
              MR_Word STATE_VARIABLE_VarTypes_54_54;
              MR_Word STATE_VARIABLE_VarSet_55_55;
              MR_Word STATE_VARIABLE_VarTypes_56_56;
              MR_Word STATE_VARIABLE_VarSet_57_57;
              MR_Word STATE_VARIABLE_VarTypes_58_58;
              MR_Word Var_61;
              MR_String Var_62;
              MR_Word Var_67;
              MR_Word Var_69;
              MR_String Var_71;
              MR_Word Var_72;
              MR_Word Var_74;
              MR_Word Var_75;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Word Var_78;
              MR_Word Var_80;
              MR_Word Var_81;
              MR_Word Var_86;
              MR_Word Var_87;
              MR_Word Var_88;
              MR_Word Var_89;
              MR_Word Flags_297;
              MR_Word MaybeWidth_298;
              MR_Word ValueVar_299;
              MR_Word FlagsVar_300;
              MR_Word FlagsGoals_301;
              MR_String WidthSuffix_302;
              MR_Word WidthVars_303;
              MR_Word WidthGoals_304;
              MR_Word CallGoal_305;
              MR_Word MaybePrec_306;
              MR_String PrecSuffix_307;
              MR_Word PrecVars_308;
              MR_Word PrecGoals_309;

              *Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_14, (MR_Integer) 1))));
              Flags_297 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_14, (MR_Integer) 2))));
              MaybeWidth_298 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_14, (MR_Integer) 3))));
              MaybePrec_306 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_14, (MR_Integer) 4))));
              Kind_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Spec_14, (MR_Integer) 5))) & (MR_Integer) 7);
              ValueVar_299 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Spec_14, (MR_Integer) 6))));
              parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ValueVar_299, STATE_VARIABLE_ValueVars_0_44, STATE_VARIABLE_ValueVars_45);
              check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(MaybeResultVar_15, ResultVar_16, STATE_VARIABLE_VarSet_0_46, &STATE_VARIABLE_VarSet_51_51, STATE_VARIABLE_VarTypes_0_48, &STATE_VARIABLE_VarTypes_52_52);
              check_hlds__simplify__format_call__build_flags_arg_8_p_0(*Context_18, Flags_297, &FlagsVar_300, &FlagsGoals_301, STATE_VARIABLE_VarSet_51_51, &STATE_VARIABLE_VarSet_53_53, STATE_VARIABLE_VarTypes_52_52, &STATE_VARIABLE_VarTypes_54_54);
              check_hlds__simplify__format_call__maybe_build_width_arg_8_p_0(MaybeWidth_298, &WidthSuffix_302, &WidthVars_303, &WidthGoals_304, STATE_VARIABLE_VarSet_53_53, &STATE_VARIABLE_VarSet_55_55, STATE_VARIABLE_VarTypes_54_54, &STATE_VARIABLE_VarTypes_56_56);
              check_hlds__simplify__format_call__maybe_build_prec_arg_8_p_0(MaybePrec_306, &PrecSuffix_307, &PrecVars_308, &PrecGoals_309, STATE_VARIABLE_VarSet_55_55, &STATE_VARIABLE_VarSet_57_57, STATE_VARIABLE_VarTypes_56_56, &STATE_VARIABLE_VarTypes_58_58);
              check_hlds__simplify__format_call__build_float_kind_arg_7_p_0(Kind_41, &KindVar_42, &KindGoal_43, STATE_VARIABLE_VarSet_57_57, STATE_VARIABLE_VarSet_47, STATE_VARIABLE_VarTypes_58_58, STATE_VARIABLE_VarTypes_49);
              Var_61 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
              Var_71 = mercury__string__f_43_43_2_f_0(WidthSuffix_302, PrecSuffix_307);
              Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "format_float_component", Var_71);
              {
                Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (FlagsVar_300));
                MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (*ResultVar_16));
                MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (ValueVar_299));
                MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_78));
              }
              {
                Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (KindVar_42));
                MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_77));
              }
              Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), PrecVars_308, Var_76);
              Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), WidthVars_303, Var_75);
              Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), Var_72, Var_74);
              {
                Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (*ResultVar_16));
                MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[8])));
              }
              {
                Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
                MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Var_69 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_80);
              hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_13, Var_61, Var_62, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, Var_67, (MR_Word) ((MR_Unsigned) 0U), Var_69, *Context_18, &CallGoal_305);
              {
                Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (CallGoal_305));
                MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (KindGoal_43));
                MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_89));
              }
              Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), PrecGoals_309, Var_88);
              Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), WidthGoals_304, Var_87);
              *Goals_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FlagsGoals_301, Var_86);
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(
  MR_Word MaybeResultVar_7,
  MR_Word * ResultVar_8,
  MR_Word STATE_VARIABLE_VarSet_0_11,
  MR_Word * STATE_VARIABLE_VarSet_12,
  MR_Word STATE_VARIABLE_VarTypes_0_13,
  MR_Word * STATE_VARIABLE_VarTypes_14)
{
  if ((MaybeResultVar_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_16;

    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResultVar_8, STATE_VARIABLE_VarSet_0_11, STATE_VARIABLE_VarSet_12);
    Var_16 = parse_tree__builtin_lib_types__string_type_0_f_0();
    hlds__vartypes__add_var_type_4_p_0(*ResultVar_8, Var_16, STATE_VARIABLE_VarTypes_0_13, STATE_VARIABLE_VarTypes_14);
  }
  else
  {
    *ResultVar_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeResultVar_7, (MR_Integer) 0))));
    *STATE_VARIABLE_VarSet_12 = STATE_VARIABLE_VarSet_0_11;
    *STATE_VARIABLE_VarTypes_14 = STATE_VARIABLE_VarTypes_0_13;
  }
}

void MR_CALL 
check_hlds__simplify__format_call__build_float_kind_arg_7_p_0(
  MR_Word Kind_8,
  MR_Word * Var_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_VarTypes_0_21,
  MR_Word * STATE_VARIABLE_VarTypes_22)
{
  {
    MR_Word ParseUtil_13;
    MR_Word TypeName_14;
    MR_Word TypeCtor_15;
    MR_Word Type_16;
    MR_String ConsName_17;
    MR_Word ConsId_18;
    MR_Word Var_27;

    ParseUtil_13 = mdbcomp__builtin_modules__mercury_string_parse_util_module_0_f_0();
    {
      TypeName_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeName_14, 0) = ((MR_Box) (ParseUtil_13));
      MR_hl_field(MR_mktag(1), TypeName_14, 1) = ((MR_Box) ((MR_String) "string_format_float_kind"));
    }
    {
      TypeCtor_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_15, 0) = ((MR_Box) (TypeName_14));
      MR_hl_field(MR_mktag(0), TypeCtor_15, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      Type_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Type_16, 0) = ((MR_Box) (TypeName_14));
      MR_hl_field(MR_mktag(1), Type_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Type_16, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ConsName_17 = ((&check_hlds__simplify__format_call_vector_common_8[5 + Kind_8]))->check_hlds__simplify__format_call__vector_common_type_8_0__vct_8_f_0;
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (ParseUtil_13));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (ConsName_17));
    }
    {
      ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConsId_18, 1) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(3), ConsId_18, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ConsId_18, 3) = ((MR_Box) (TypeCtor_15));
    }
    hlds__make_goal__make_const_construction_alloc_9_p_0(ConsId_18, Type_16, (MR_Word) ((MR_Unsigned) 0U), Goal_10, Var_9, STATE_VARIABLE_VarSet_0_19, STATE_VARIABLE_VarSet_20, STATE_VARIABLE_VarTypes_0_21, STATE_VARIABLE_VarTypes_22);
  }
}

void MR_CALL 
check_hlds__simplify__format_call__build_int_base_arg_7_p_0(
  MR_Word Base_8,
  MR_Word * Var_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_VarTypes_0_21,
  MR_Word * STATE_VARIABLE_VarTypes_22)
{
  {
    MR_Word ParseUtil_13;
    MR_Word TypeName_14;
    MR_Word TypeCtor_15;
    MR_Word Type_16;
    MR_String ConsName_17;
    MR_Word ConsId_18;
    MR_Word Var_27;

    ParseUtil_13 = mdbcomp__builtin_modules__mercury_string_parse_util_module_0_f_0();
    {
      TypeName_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeName_14, 0) = ((MR_Box) (ParseUtil_13));
      MR_hl_field(MR_mktag(1), TypeName_14, 1) = ((MR_Box) ((MR_String) "string_format_int_base"));
    }
    {
      TypeCtor_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_15, 0) = ((MR_Box) (TypeName_14));
      MR_hl_field(MR_mktag(0), TypeCtor_15, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      Type_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Type_16, 0) = ((MR_Box) (TypeName_14));
      MR_hl_field(MR_mktag(1), Type_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Type_16, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ConsName_17 = ((&check_hlds__simplify__format_call_vector_common_8[0 + Base_8]))->check_hlds__simplify__format_call__vector_common_type_8_0__vct_8_f_0;
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (ParseUtil_13));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (ConsName_17));
    }
    {
      ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConsId_18, 1) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(3), ConsId_18, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ConsId_18, 3) = ((MR_Box) (TypeCtor_15));
    }
    hlds__make_goal__make_const_construction_alloc_9_p_0(ConsId_18, Type_16, (MR_Word) ((MR_Unsigned) 0U), Goal_10, Var_9, STATE_VARIABLE_VarSet_0_19, STATE_VARIABLE_VarSet_20, STATE_VARIABLE_VarTypes_0_21, STATE_VARIABLE_VarTypes_22);
  }
}

void MR_CALL 
check_hlds__simplify__format_call__maybe_build_prec_arg_8_p_0(
  MR_Word MaybePrec_9,
  MR_String * PredNameSuffix_10,
  MR_Word * MaybePrecVar_11,
  MR_Word * MaybePrecGoals_12,
  MR_Word STATE_VARIABLE_VarSet_0_18,
  MR_Word * STATE_VARIABLE_VarSet_19,
  MR_Word STATE_VARIABLE_VarTypes_0_20,
  MR_Word * STATE_VARIABLE_VarTypes_21)
{
  switch (MR_tag((MR_Word) MaybePrec_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *PredNameSuffix_10 = (MR_String) "_noprec";
        *MaybePrecVar_11 = (MR_Word) ((MR_Unsigned) 0U);
        *MaybePrecGoals_12 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_VarSet_19 = STATE_VARIABLE_VarSet_0_18;
        *STATE_VARIABLE_VarTypes_21 = STATE_VARIABLE_VarTypes_0_20;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer PrecInt_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrec_9, (MR_Integer) 0))));
        MR_Word PrecGoal_16;
        MR_Word PrecVar_17;

        *PredNameSuffix_10 = (MR_String) "_prec";
        hlds__make_goal__make_int_const_construction_alloc_8_p_0(PrecInt_15, (MR_Word) ((MR_Unsigned) 0U), &PrecGoal_16, &PrecVar_17, STATE_VARIABLE_VarSet_0_18, STATE_VARIABLE_VarSet_19, STATE_VARIABLE_VarTypes_0_20, STATE_VARIABLE_VarTypes_21);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybePrecVar_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PrecVar_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybePrecGoals_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PrecGoal_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PrecVar_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MaybePrec_9, (MR_Integer) 0))));

        *PredNameSuffix_10 = (MR_String) "_prec";
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybePrecVar_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PrecVar_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *MaybePrecGoals_12 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_VarSet_19 = STATE_VARIABLE_VarSet_0_18;
        *STATE_VARIABLE_VarTypes_21 = STATE_VARIABLE_VarTypes_0_20;
      }
      break;
  }
}

void MR_CALL 
check_hlds__simplify__format_call__maybe_build_width_arg_8_p_0(
  MR_Word MaybeWidth_9,
  MR_String * PredNameSuffix_10,
  MR_Word * MaybeWidthVar_11,
  MR_Word * MaybeWidthGoals_12,
  MR_Word STATE_VARIABLE_VarSet_0_18,
  MR_Word * STATE_VARIABLE_VarSet_19,
  MR_Word STATE_VARIABLE_VarTypes_0_20,
  MR_Word * STATE_VARIABLE_VarTypes_21)
{
  switch (MR_tag((MR_Word) MaybeWidth_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *PredNameSuffix_10 = (MR_String) "_nowidth";
        *MaybeWidthVar_11 = (MR_Word) ((MR_Unsigned) 0U);
        *MaybeWidthGoals_12 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_VarSet_19 = STATE_VARIABLE_VarSet_0_18;
        *STATE_VARIABLE_VarTypes_21 = STATE_VARIABLE_VarTypes_0_20;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer WidthInt_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeWidth_9, (MR_Integer) 0))));
        MR_Word WidthGoal_16;
        MR_Word WidthVar_17;

        *PredNameSuffix_10 = (MR_String) "_width";
        hlds__make_goal__make_int_const_construction_alloc_8_p_0(WidthInt_15, (MR_Word) ((MR_Unsigned) 0U), &WidthGoal_16, &WidthVar_17, STATE_VARIABLE_VarSet_0_18, STATE_VARIABLE_VarSet_19, STATE_VARIABLE_VarTypes_0_20, STATE_VARIABLE_VarTypes_21);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeWidthVar_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (WidthVar_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeWidthGoals_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (WidthGoal_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word WidthVar_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MaybeWidth_9, (MR_Integer) 0))));

        *PredNameSuffix_10 = (MR_String) "_width";
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeWidthVar_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (WidthVar_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *MaybeWidthGoals_12 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_VarSet_19 = STATE_VARIABLE_VarSet_0_18;
        *STATE_VARIABLE_VarTypes_21 = STATE_VARIABLE_VarTypes_0_20;
      }
      break;
  }
}

void MR_CALL 
check_hlds__simplify__format_call__build_flags_arg_8_p_0(
  MR_Word Context_9,
  MR_Word Flags_10,
  MR_Word * Var_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_VarSet_0_63,
  MR_Word * STATE_VARIABLE_VarSet_64,
  MR_Word STATE_VARIABLE_VarTypes_0_65,
  MR_Word * STATE_VARIABLE_VarTypes_66)
{
  {
    MR_Word FlagHash_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_10, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    MR_Word FlagSpace_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_10, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word FlagZero_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_10, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word FlagMinus_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_10, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word FlagPlus_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_10, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word VarHash_20;
    MR_Word VarSpace_21;
    MR_Word VarZero_22;
    MR_Word VarMinus_23;
    MR_Word VarPlus_24;
    MR_Word ParseUtil_25;
    MR_Word TypeSymNameHash_26;
    MR_Word TypeSymNameSpace_27;
    MR_Word TypeSymNameZero_28;
    MR_Word TypeSymNameMinus_29;
    MR_Word TypeSymNamePlus_30;
    MR_Word TypeCtorHash_31;
    MR_Word TypeCtorSpace_32;
    MR_Word TypeCtorZero_33;
    MR_Word TypeCtorMinus_34;
    MR_Word TypeCtorPlus_35;
    MR_Word TypeHash_36;
    MR_Word TypeSpace_37;
    MR_Word TypeZero_38;
    MR_Word TypeMinus_39;
    MR_Word TypePlus_40;
    MR_String ConsNameHash_41;
    MR_String ConsNameSpace_42;
    MR_String ConsNameZero_43;
    MR_String ConsNameMinus_44;
    MR_String ConsNamePlus_45;
    MR_Word ConsIdHash_46;
    MR_Word ConsIdSpace_47;
    MR_Word ConsIdZero_48;
    MR_Word ConsIdMinus_49;
    MR_Word ConsIdPlus_50;
    MR_Word GoalHash_51;
    MR_Word GoalSpace_52;
    MR_Word GoalZero_53;
    MR_Word GoalMinus_54;
    MR_Word GoalPlus_55;
    MR_Word TypeCombine_57;
    MR_Word TypeCtorCombine_58;
    MR_Word ConsSymNameCombine_59;
    MR_Word ConsIdCombine_60;
    MR_Word SpecVars_61;
    MR_Word GoalCombine_62;
    MR_Word STATE_VARIABLE_VarSet_67_67;
    MR_Word STATE_VARIABLE_VarSet_68_68;
    MR_Word STATE_VARIABLE_VarSet_69_69;
    MR_Word STATE_VARIABLE_VarSet_70_70;
    MR_Word STATE_VARIABLE_VarSet_71_71;
    MR_Word STATE_VARIABLE_VarTypes_92_92;
    MR_Word STATE_VARIABLE_VarTypes_93_93;
    MR_Word STATE_VARIABLE_VarTypes_94_94;
    MR_Word STATE_VARIABLE_VarTypes_95_95;
    MR_Word STATE_VARIABLE_VarTypes_96_96;
    MR_Word Var_97;
    MR_Word Var_99;
    MR_Word Var_101;
    MR_Word Var_103;
    MR_Word Var_105;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;

    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarHash_20, STATE_VARIABLE_VarSet_0_63, &STATE_VARIABLE_VarSet_67_67);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSpace_21, STATE_VARIABLE_VarSet_67_67, &STATE_VARIABLE_VarSet_68_68);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarZero_22, STATE_VARIABLE_VarSet_68_68, &STATE_VARIABLE_VarSet_69_69);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarMinus_23, STATE_VARIABLE_VarSet_69_69, &STATE_VARIABLE_VarSet_70_70);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarPlus_24, STATE_VARIABLE_VarSet_70_70, &STATE_VARIABLE_VarSet_71_71);
    ParseUtil_25 = mdbcomp__builtin_modules__mercury_string_parse_util_module_0_f_0();
    {
      TypeSymNameHash_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeSymNameHash_26, 0) = ((MR_Box) (ParseUtil_25));
      MR_hl_field(MR_mktag(1), TypeSymNameHash_26, 1) = ((MR_Box) ((MR_String) "string_format_flag_hash"));
    }
    {
      TypeSymNameSpace_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeSymNameSpace_27, 0) = ((MR_Box) (ParseUtil_25));
      MR_hl_field(MR_mktag(1), TypeSymNameSpace_27, 1) = ((MR_Box) ((MR_String) "string_format_flag_space"));
    }
    {
      TypeSymNameZero_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeSymNameZero_28, 0) = ((MR_Box) (ParseUtil_25));
      MR_hl_field(MR_mktag(1), TypeSymNameZero_28, 1) = ((MR_Box) ((MR_String) "string_format_flag_zero"));
    }
    {
      TypeSymNameMinus_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeSymNameMinus_29, 0) = ((MR_Box) (ParseUtil_25));
      MR_hl_field(MR_mktag(1), TypeSymNameMinus_29, 1) = ((MR_Box) ((MR_String) "string_format_flag_minus"));
    }
    {
      TypeSymNamePlus_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeSymNamePlus_30, 0) = ((MR_Box) (ParseUtil_25));
      MR_hl_field(MR_mktag(1), TypeSymNamePlus_30, 1) = ((MR_Box) ((MR_String) "string_format_flag_plus"));
    }
    {
      TypeCtorHash_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtorHash_31, 0) = ((MR_Box) (TypeSymNameHash_26));
      MR_hl_field(MR_mktag(0), TypeCtorHash_31, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      TypeCtorSpace_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtorSpace_32, 0) = ((MR_Box) (TypeSymNameSpace_27));
      MR_hl_field(MR_mktag(0), TypeCtorSpace_32, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      TypeCtorZero_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtorZero_33, 0) = ((MR_Box) (TypeSymNameZero_28));
      MR_hl_field(MR_mktag(0), TypeCtorZero_33, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      TypeCtorMinus_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtorMinus_34, 0) = ((MR_Box) (TypeSymNameMinus_29));
      MR_hl_field(MR_mktag(0), TypeCtorMinus_34, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      TypeCtorPlus_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtorPlus_35, 0) = ((MR_Box) (TypeSymNamePlus_30));
      MR_hl_field(MR_mktag(0), TypeCtorPlus_35, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      TypeHash_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeHash_36, 0) = ((MR_Box) (TypeSymNameHash_26));
      MR_hl_field(MR_mktag(1), TypeHash_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), TypeHash_36, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      TypeSpace_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeSpace_37, 0) = ((MR_Box) (TypeSymNameSpace_27));
      MR_hl_field(MR_mktag(1), TypeSpace_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), TypeSpace_37, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      TypeZero_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeZero_38, 0) = ((MR_Box) (TypeSymNameZero_28));
      MR_hl_field(MR_mktag(1), TypeZero_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), TypeZero_38, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      TypeMinus_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeMinus_39, 0) = ((MR_Box) (TypeSymNameMinus_29));
      MR_hl_field(MR_mktag(1), TypeMinus_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), TypeMinus_39, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      TypePlus_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypePlus_40, 0) = ((MR_Box) (TypeSymNamePlus_30));
      MR_hl_field(MR_mktag(1), TypePlus_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), TypePlus_40, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__vartypes__add_var_type_4_p_0(VarHash_20, TypeHash_36, STATE_VARIABLE_VarTypes_0_65, &STATE_VARIABLE_VarTypes_92_92);
    hlds__vartypes__add_var_type_4_p_0(VarSpace_21, TypeSpace_37, STATE_VARIABLE_VarTypes_92_92, &STATE_VARIABLE_VarTypes_93_93);
    hlds__vartypes__add_var_type_4_p_0(VarZero_22, TypeZero_38, STATE_VARIABLE_VarTypes_93_93, &STATE_VARIABLE_VarTypes_94_94);
    hlds__vartypes__add_var_type_4_p_0(VarMinus_23, TypeMinus_39, STATE_VARIABLE_VarTypes_94_94, &STATE_VARIABLE_VarTypes_95_95);
    hlds__vartypes__add_var_type_4_p_0(VarPlus_24, TypePlus_40, STATE_VARIABLE_VarTypes_95_95, &STATE_VARIABLE_VarTypes_96_96);
    switch (FlagHash_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ConsNameHash_41 = (MR_String) "flag_hash_clear";
        break;
      case (MR_Integer) 1:
        ConsNameHash_41 = (MR_String) "flag_hash_set";
        break;
    }
    switch (FlagSpace_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ConsNameSpace_42 = (MR_String) "flag_space_clear";
        break;
      case (MR_Integer) 1:
        ConsNameSpace_42 = (MR_String) "flag_space_set";
        break;
    }
    switch (FlagZero_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ConsNameZero_43 = (MR_String) "flag_zero_clear";
        break;
      case (MR_Integer) 1:
        ConsNameZero_43 = (MR_String) "flag_zero_set";
        break;
    }
    switch (FlagMinus_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ConsNameMinus_44 = (MR_String) "flag_minus_clear";
        break;
      case (MR_Integer) 1:
        ConsNameMinus_44 = (MR_String) "flag_minus_set";
        break;
    }
    switch (FlagPlus_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ConsNamePlus_45 = (MR_String) "flag_plus_clear";
        break;
      case (MR_Integer) 1:
        ConsNamePlus_45 = (MR_String) "flag_plus_set";
        break;
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (ParseUtil_25));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (ConsNameHash_41));
    }
    {
      ConsIdHash_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsIdHash_46, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConsIdHash_46, 1) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(3), ConsIdHash_46, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ConsIdHash_46, 3) = ((MR_Box) (TypeCtorHash_31));
    }
    {
      Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (ParseUtil_25));
      MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (ConsNameSpace_42));
    }
    {
      ConsIdSpace_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsIdSpace_47, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConsIdSpace_47, 1) = ((MR_Box) (Var_99));
      MR_hl_field(MR_mktag(3), ConsIdSpace_47, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ConsIdSpace_47, 3) = ((MR_Box) (TypeCtorSpace_32));
    }
    {
      Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (ParseUtil_25));
      MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (ConsNameZero_43));
    }
    {
      ConsIdZero_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsIdZero_48, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConsIdZero_48, 1) = ((MR_Box) (Var_101));
      MR_hl_field(MR_mktag(3), ConsIdZero_48, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ConsIdZero_48, 3) = ((MR_Box) (TypeCtorZero_33));
    }
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (ParseUtil_25));
      MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (ConsNameMinus_44));
    }
    {
      ConsIdMinus_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsIdMinus_49, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConsIdMinus_49, 1) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(3), ConsIdMinus_49, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ConsIdMinus_49, 3) = ((MR_Box) (TypeCtorMinus_34));
    }
    {
      Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (ParseUtil_25));
      MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (ConsNamePlus_45));
    }
    {
      ConsIdPlus_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsIdPlus_50, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConsIdPlus_50, 1) = ((MR_Box) (Var_105));
      MR_hl_field(MR_mktag(3), ConsIdPlus_50, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ConsIdPlus_50, 3) = ((MR_Box) (TypeCtorPlus_35));
    }
    hlds__make_goal__make_const_construction_4_p_0(Context_9, VarHash_20, ConsIdHash_46, &GoalHash_51);
    hlds__make_goal__make_const_construction_4_p_0(Context_9, VarSpace_21, ConsIdSpace_47, &GoalSpace_52);
    hlds__make_goal__make_const_construction_4_p_0(Context_9, VarZero_22, ConsIdZero_48, &GoalZero_53);
    hlds__make_goal__make_const_construction_4_p_0(Context_9, VarMinus_23, ConsIdMinus_49, &GoalMinus_54);
    hlds__make_goal__make_const_construction_4_p_0(Context_9, VarPlus_24, ConsIdPlus_50, &GoalPlus_55);
    {
      ConsSymNameCombine_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ConsSymNameCombine_59, 0) = ((MR_Box) (ParseUtil_25));
      MR_hl_field(MR_mktag(1), ConsSymNameCombine_59, 1) = ((MR_Box) ((MR_String) "string_format_flags"));
    }
    {
      TypeCombine_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TypeCombine_57, 0) = ((MR_Box) (ConsSymNameCombine_59));
      MR_hl_field(MR_mktag(1), TypeCombine_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), TypeCombine_57, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_11, STATE_VARIABLE_VarSet_71_71, STATE_VARIABLE_VarSet_64);
    hlds__vartypes__add_var_type_4_p_0(*Var_11, TypeCombine_57, STATE_VARIABLE_VarTypes_96_96, STATE_VARIABLE_VarTypes_66);
    {
      TypeCtorCombine_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtorCombine_58, 0) = ((MR_Box) (ConsSymNameCombine_59));
      MR_hl_field(MR_mktag(0), TypeCtorCombine_58, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      ConsIdCombine_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsIdCombine_60, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConsIdCombine_60, 1) = ((MR_Box) (ConsSymNameCombine_59));
      MR_hl_field(MR_mktag(3), ConsIdCombine_60, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ConsIdCombine_60, 3) = ((MR_Box) (TypeCtorCombine_58));
    }
    {
      Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (VarPlus_24));
      MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (VarMinus_23));
      MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_118));
    }
    {
      Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (VarZero_22));
      MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_117));
    }
    {
      Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (VarSpace_21));
      MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_116));
    }
    {
      SpecVars_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SpecVars_61, 0) = ((MR_Box) (VarHash_20));
      MR_hl_field(MR_mktag(1), SpecVars_61, 1) = ((MR_Box) (Var_115));
    }
    hlds__make_goal__construct_functor_4_p_0(*Var_11, ConsIdCombine_60, SpecVars_61, &GoalCombine_62);
    {
      Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (GoalCombine_62));
      MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (GoalPlus_55));
      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_124));
    }
    {
      Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (GoalMinus_54));
      MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_123));
    }
    {
      Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (GoalZero_53));
      MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_122));
    }
    {
      Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (GoalSpace_52));
      MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_121));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Goals_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (GoalHash_51));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_120));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__follow_format_string_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Result_10;

    check_hlds__simplify__format_call__follow_format_string_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_Result_10);
    *wrapper_arg_2 = ((MR_Box) (conv2_Result_10));
  }
}

void MR_CALL 
check_hlds__simplify__format_call__follow_format_string_5_p_0(
  MR_Word ConjMaps_6,
  MR_Word PredMap_7,
  MR_Word CurId_8,
  MR_Word StringVar_9,
  MR_Word * Result_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ConjMap_11;
    MR_Word StringMap_12;
    MR_Word EqvMap_15;
    MR_Word EqvVar_16;
    MR_Box conv0_EqvVar_16;

    // setup for model_det tailcalls optimized into a loop
    ;
    ConjMap_11 = check_hlds__simplify__format_call__get_conj_map_2_f_0(ConjMaps_6, CurId_8);
    StringMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjMap_11, (MR_Integer) 0))));
    EqvMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjMap_11, (MR_Integer) 3))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), EqvMap_15, ((MR_Box) (StringVar_9)), &conv0_EqvVar_16);
    if (succeeded)
    {
      EqvVar_16 = ((MR_Word) (conv0_EqvVar_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word next_value_of_StringVar_9 = EqvVar_16;

      // direct tailcall eliminated
      ;
      StringVar_9 = next_value_of_StringVar_9;
      continue;
    }
    else
    {
      MR_Word StringState_17;
      MR_Box conv1_StringState_17;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0), StringMap_12, ((MR_Box) (StringVar_9)), &conv1_StringState_17);
      if (succeeded)
      {
        StringState_17 = ((MR_Word) (conv1_StringState_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        switch (MR_tag((MR_Word) StringState_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String String_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), StringState_17, (MR_Integer) 0))));
              MR_Word Var_48;

              {
                Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (StringVar_9));
                MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Result_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (String_18));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_48));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word AppendGoalId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StringState_17, (MR_Integer) 0))));
              MR_Word StringVarA_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StringState_17, (MR_Integer) 1))));
              MR_Word StringVarB_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), StringState_17, (MR_Integer) 2))));
              MR_Word ResultA_22;
              MR_Word ResultB_23;
              MR_String StringA_24;
              MR_Word ToDeleteVarsA_25;
              MR_Word ToDeleteGoalsA_26;
              MR_String StringB_27;
              MR_Word ToDeleteVarsB_28;
              MR_Word ToDeleteGoalsB_29;

              check_hlds__simplify__format_call__follow_format_string_5_p_0(ConjMaps_6, PredMap_7, CurId_8, StringVarA_20, &ResultA_22);
              check_hlds__simplify__format_call__follow_format_string_5_p_0(ConjMaps_6, PredMap_7, CurId_8, StringVarB_21, &ResultB_23);
              succeeded = (ResultA_22 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                StringA_24 = ((MR_String) ((MR_hl_field(MR_mktag(1), ResultA_22, (MR_Integer) 0))));
                ToDeleteVarsA_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResultA_22, (MR_Integer) 1))));
                ToDeleteGoalsA_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResultA_22, (MR_Integer) 2))));
                succeeded = (ResultB_23 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  StringB_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), ResultB_23, (MR_Integer) 0))));
                  ToDeleteVarsB_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResultB_23, (MR_Integer) 1))));
                  ToDeleteGoalsB_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResultB_23, (MR_Integer) 2))));
                }
              }
              if (succeeded)
              {
                MR_String Var_42;
                MR_Word Var_43;
                MR_Word Var_44;
                MR_Word Var_45;
                MR_Word Var_47;

                Var_42 = mercury__string__f_43_43_2_f_0(StringA_24, StringB_27);
                Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), ToDeleteVarsA_25, ToDeleteVarsB_28);
                {
                  Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (AppendGoalId_19));
                  MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), ToDeleteGoalsA_26, ToDeleteGoalsB_29);
                Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), Var_45, Var_47);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Result_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_42));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_43));
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_44));
                }
              }
              else
                *Result_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word AppendListGoalId_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), StringState_17, (MR_Integer) 0))));
              MR_Word SkeletonVar_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), StringState_17, (MR_Integer) 1))));
              MR_Word SkeletonResult_32;

              check_hlds__simplify__format_call__follow_list_skeleton_5_p_0(ConjMaps_6, PredMap_7, CurId_8, SkeletonVar_31, &SkeletonResult_32);
              if ((SkeletonResult_32 == (MR_Word) ((MR_Unsigned) 0U)))
                *Result_10 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word SubStringVars_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SkeletonResult_32, (MR_Integer) 0))));
                MR_Word SkeletonVars_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SkeletonResult_32, (MR_Integer) 1))));
                MR_Word SubStringResults_35;
                MR_Word Var_39;
                MR_Word SubStringToDeleteVars_36;
                MR_Word SubStringToDeleteGoals_37;
                MR_String String_51;

                {
                  Var_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_7[0]));
                  MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__follow_format_string_5_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (ConjMaps_6));
                  MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (PredMap_7));
                  MR_hl_field(MR_mktag(0), Var_39, 5) = ((MR_Box) (CurId_8));
                }
                mercury__list__map_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_follow_string_result_0), Var_39, SubStringVars_33, &SubStringResults_35);
                succeeded = check_hlds__simplify__format_call__project_all_follow_string_results_4_p_0(SubStringResults_35, &String_51, &SubStringToDeleteVars_36, &SubStringToDeleteGoals_37);
                if (succeeded)
                {
                  MR_Word Var_40;
                  MR_Word Var_41;

                  Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), SkeletonVars_34, SubStringToDeleteVars_36);
                  {
                    Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (AppendListGoalId_30));
                    MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (SubStringToDeleteGoals_37));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Result_10 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (String_51));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_40));
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_41));
                  }
                }
                else
                  *Result_10 = (MR_Word) ((MR_Unsigned) 0U);
              }
            }
            break;
        }
      else
      {
        MR_Word PredId_38;
        MR_Box conv3_PredId_38;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), PredMap_7, ((MR_Box) (CurId_8)), &conv3_PredId_38);
        if (succeeded)
        {
          PredId_38 = ((MR_Word) (conv3_PredId_38));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word next_value_of_CurId_8 = PredId_38;

          // direct tailcall eliminated
          ;
          CurId_8 = next_value_of_CurId_8;
          continue;
        }
        else
          *Result_10 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    break;
  }
}

void MR_CALL 
check_hlds__simplify__format_call__follow_list_skeleton_5_p_0(
  MR_Word ConjMaps_6,
  MR_Word PredMap_7,
  MR_Word CurId_8,
  MR_Word ListVar_9,
  MR_Word * Result_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ConjMap_11;
    MR_Word ListMap_13;
    MR_Word EqvMap_15;
    MR_Word EqvVar_16;
    MR_Box conv0_EqvVar_16;

    // setup for model_det tailcalls optimized into a loop
    ;
    ConjMap_11 = check_hlds__simplify__format_call__get_conj_map_2_f_0(ConjMaps_6, CurId_8);
    ListMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjMap_11, (MR_Integer) 1))));
    EqvMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjMap_11, (MR_Integer) 3))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), EqvMap_15, ((MR_Box) (ListVar_9)), &conv0_EqvVar_16);
    if (succeeded)
    {
      EqvVar_16 = ((MR_Word) (conv0_EqvVar_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word next_value_of_ListVar_9 = EqvVar_16;

      // direct tailcall eliminated
      ;
      ListVar_9 = next_value_of_ListVar_9;
      continue;
    }
    else
    {
      MR_Word ListState_17;
      MR_Box conv1_ListState_17;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0), ListMap_13, ((MR_Box) (ListVar_9)), &conv1_ListState_17);
      if (succeeded)
      {
        ListState_17 = ((MR_Word) (conv1_ListState_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        if ((ListState_17 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_29;

          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (ListVar_9));
            MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Result_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_29));
          }
        }
        else
        {
          MR_Word HeadVar_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ListState_17, (MR_Integer) 0))));
          MR_Word TailVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ListState_17, (MR_Integer) 1))));
          MR_Word TailResult_20;

          check_hlds__simplify__format_call__follow_list_skeleton_5_p_0(ConjMaps_6, PredMap_7, CurId_8, TailVar_19, &TailResult_20);
          if ((TailResult_20 == (MR_Word) ((MR_Unsigned) 0U)))
            *Result_10 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word TailElementVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailResult_20, (MR_Integer) 0))));
            MR_Word TailSkeletonVars_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TailResult_20, (MR_Integer) 1))));
            MR_Word ElementVars_23;
            MR_Word SkeletonVars_24;

            {
              ElementVars_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ElementVars_23, 0) = ((MR_Box) (HeadVar_18));
              MR_hl_field(MR_mktag(1), ElementVars_23, 1) = ((MR_Box) (TailElementVars_21));
            }
            succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), ((MR_Box) (TailVar_19)), TailSkeletonVars_22);
            if (!(succeeded))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.format_call.follow_list_skeleton\'/5", (MR_String) "TailVar not in TailSkeletonVars");
                return;
              }
            {
              SkeletonVars_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), SkeletonVars_24, 0) = ((MR_Box) (ListVar_9));
              MR_hl_field(MR_mktag(1), SkeletonVars_24, 1) = ((MR_Box) (TailSkeletonVars_22));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Result_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ElementVars_23));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SkeletonVars_24));
            }
          }
        }
      else
      {
        MR_Word PredId_25;
        MR_Box conv2_PredId_25;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), PredMap_7, ((MR_Box) (CurId_8)), &conv2_PredId_25);
        if (succeeded)
        {
          PredId_25 = ((MR_Word) (conv2_PredId_25));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word next_value_of_CurId_8 = PredId_25;

          // direct tailcall eliminated
          ;
          CurId_8 = next_value_of_CurId_8;
          continue;
        }
        else
          *Result_10 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    break;
  }
}

MR_Word MR_CALL 
check_hlds__simplify__format_call__get_conj_map_2_f_0(
  MR_Word ConjMaps_4,
  MR_Word ConjId_5)
{
  {
    MR_bool succeeded;
    MR_Word ConjMap_6;
    MR_Word ConjMapPrime_7;
    MR_Box conv0_ConjMapPrime_7;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), ConjMaps_4, ((MR_Box) (ConjId_5)), &conv0_ConjMapPrime_7);
    if (succeeded)
    {
      ConjMapPrime_7 = ((MR_Word) (conv0_ConjMapPrime_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      ConjMap_6 = ConjMapPrime_7;
    else
    {
      MR_Word Var_8;
      MR_Word Var_9;
      MR_Word Var_10;
      MR_Word Var_11;

      Var_8 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0));
      Var_9 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0));
      Var_10 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0));
      Var_11 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]));
      {
        ConjMap_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConjMap_6, 0) = ((MR_Box) (Var_8));
        MR_hl_field(MR_mktag(0), ConjMap_6, 1) = ((MR_Box) (Var_9));
        MR_hl_field(MR_mktag(0), ConjMap_6, 2) = ((MR_Box) (Var_10));
        MR_hl_field(MR_mktag(0), ConjMap_6, 3) = ((MR_Box) (Var_11));
      }
    }
    return ConjMap_6;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call__project_all_follow_string_results_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_String) "";
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeInfo_16_16;
      MR_Word TypeCtorInfo_17_17;
      MR_Word HeadResult_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TailResults_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String HeadString_10;
      MR_Word HeadToDeleteVars_11;
      MR_Word HeadToDeleteGoals_12;
      MR_String TailString_13;
      MR_Word TailToDeleteVars_14;
      MR_Word TailToDeleteGoals_15;

      succeeded = (HeadResult_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadString_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadResult_5, (MR_Integer) 0))));
        HeadToDeleteVars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadResult_5, (MR_Integer) 1))));
        HeadToDeleteGoals_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadResult_5, (MR_Integer) 2))));
        succeeded = check_hlds__simplify__format_call__project_all_follow_string_results_4_p_0(TailResults_6, &TailString_13, &TailToDeleteVars_14, &TailToDeleteGoals_15);
        if (succeeded)
        {
          *HeadVar__2_2 = mercury__string__f_43_43_2_f_0(HeadString_10, TailString_13);
          TypeInfo_16_16 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
          *HeadVar__3_3 = mercury__list__f_43_43_2_f_0(TypeInfo_16_16, HeadToDeleteVars_11, TailToDeleteVars_14);
          TypeCtorInfo_17_17 = (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0);
          *HeadVar__4_4 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_17_17, HeadToDeleteGoals_12, TailToDeleteGoals_15);
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
check_hlds__simplify__format_call__string_format_error_to_words_1_f_0(
  MR_Word Error_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_String Var_4;

    Var_4 = mercury__string__parse_util__string_format_error_to_msg_1_f_0(Error_3);
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (Var_4));
    }
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call__project_all_yes_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box Value_3;
      MR_Word TailMaybes_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Tail_5;
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      succeeded = (Var_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Value_3 = (MR_hl_field(MR_mktag(1), Var_6, (MR_Integer) 0));
        succeeded = check_hlds__simplify__format_call__project_all_yes_2_p_0(TypeInfo_for_T_7, TailMaybes_4, &Tail_5);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = Value_3;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Tail_5));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__analyze_and_optimize_format_calls_9_p_0_1(
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
    MR_Word conv3_STATE_VARIABLE_GoalIdMap_77;
    MR_Word conv2_STATE_VARIABLE_Specs_79;
    MR_Word conv1_STATE_VARIABLE_VarSet_81;
    MR_Word conv0_STATE_VARIABLE_VarTypes_83;

    check_hlds__simplify__format_call__check_format_call_site_14_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_GoalIdMap_77, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_Specs_79, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_VarSet_81, ((MR_Word) (wrapper_arg_8)), &conv0_STATE_VARIABLE_VarTypes_83);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_GoalIdMap_77));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_79));
    *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_VarSet_81));
    *wrapper_arg_9 = ((MR_Box) (conv0_STATE_VARIABLE_VarTypes_83));
  }
}

void MR_CALL 
check_hlds__simplify__format_call__analyze_and_optimize_format_calls_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word GenImplicitStreamWarnings_11,
  MR_Word Goal0_12,
  MR_Word * MaybeGoal_13,
  MR_Word * Specs_14,
  MR_Word STATE_VARIABLE_VarSet_0_46,
  MR_Word * STATE_VARIABLE_VarSet_47,
  MR_Word STATE_VARIABLE_VarTypes_0_48,
  MR_Word * STATE_VARIABLE_VarTypes_49)
{
  {
    MR_bool succeeded;
    MR_Word ConjMaps0_17;
    MR_Word Counter0_18;
    MR_Word Goal1_20;
    MR_Word Globals0_21;
    MR_Word Globals_22;
    MR_Word FormatCallSites_26;
    MR_Word ConjMaps_28;
    MR_Word PredMap_29;
    MR_Word OptFormatCalls_31;
    MR_Word ExecTrace_32;
    MR_Word ShouldOptFormatCalls_33;
    MR_Word GoalIdMap_34;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_19;
    MR_Word OutInfo_23;
    MR_Word Var_25;
    MR_Word _Counter_27;
    MR_Word Var_30;
    MR_Box conv7_GoalIdMap_34;
    MR_Box conv6_Specs_14;
    MR_Box conv5_STATE_VARIABLE_VarSet_47;
    MR_Box conv4_STATE_VARIABLE_VarTypes_49;

    mercury__map__init_1_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), &ConjMaps0_17);
    mercury__counter__init_2_p_0((MR_Integer) 0, &Counter0_18);
    hlds__goal_path__fill_goal_id_slots_in_proc_body_5_p_0(ModuleInfo_10, STATE_VARIABLE_VarTypes_0_48, &Var_19, Goal0_12, &Goal1_20);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals0_21);
    libs__globals__set_option_4_p_0((MR_Integer) 176, (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[12])), Globals0_21, &Globals_22);
    OutInfo_23 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_22, (MR_Integer) 1);
    Var_63 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0));
    Var_64 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(ModuleInfo_10, Goal1_20, &Var_25, (MR_Word) ((MR_Unsigned) 0U), &FormatCallSites_26, Counter0_18, &_Counter_27, ConjMaps0_17, &ConjMaps_28, Var_63, &PredMap_29, Var_64, &Var_30);
    libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 397, &OptFormatCalls_31);
    libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 210, &ExecTrace_32);
    succeeded = (OptFormatCalls_31 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (ExecTrace_32 == (MR_Integer) 0);
    if (succeeded)
      ShouldOptFormatCalls_33 = (MR_Integer) 1;
    else
      ShouldOptFormatCalls_33 = (MR_Integer) 0;
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (check_hlds__simplify__format_call__analyze_and_optimize_format_calls_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (ModuleInfo_10));
      MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) (GenImplicitStreamWarnings_11));
      MR_hl_field(MR_mktag(0), Var_67, 5) = ((MR_Box) (ShouldOptFormatCalls_33));
      MR_hl_field(MR_mktag(0), Var_67, 6) = ((MR_Box) (ConjMaps_28));
      MR_hl_field(MR_mktag(0), Var_67, 7) = ((MR_Box) (PredMap_29));
    }
    Var_68 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0));
    mercury__list__foldl4_10_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_site_0), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[0]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[1]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), Var_67, FormatCallSites_26, ((MR_Box) (Var_68)), &conv7_GoalIdMap_34, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_Specs_14, ((MR_Box) (STATE_VARIABLE_VarSet_0_46)), &conv5_STATE_VARIABLE_VarSet_47, ((MR_Box) (STATE_VARIABLE_VarTypes_0_48)), &conv4_STATE_VARIABLE_VarTypes_49);
    GoalIdMap_34 = ((MR_Word) (conv7_GoalIdMap_34));
    *Specs_14 = ((MR_Word) (conv6_Specs_14));
    *STATE_VARIABLE_VarSet_47 = ((MR_Word) (conv5_STATE_VARIABLE_VarSet_47));
    *STATE_VARIABLE_VarTypes_49 = ((MR_Word) (conv4_STATE_VARIABLE_VarTypes_49));
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0), GoalIdMap_34);
    if (succeeded)
      *MaybeGoal_13 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word GoalInfo1_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_20, (MR_Integer) 1))));
      MR_Word InstMapDelta_37;
      MR_Word NeededVars0_38;
      MR_Word ToDeleteVars0_39;
      MR_Word ToDeleteGoals0_40;
      MR_Word Goal_41;
      MR_Word Var_42;
      MR_Word _NeededVars_43;
      MR_Word _ToDeleteVars_44;
      MR_Word _ToDeleteGoals_45;

      InstMapDelta_37 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_36);
      hlds__instmap__instmap_delta_changed_vars_2_p_0(InstMapDelta_37, &NeededVars0_38);
      ToDeleteVars0_39 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
      ToDeleteGoals0_40 = mercury__set_tree234__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0));
      check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(Goal1_20, &Goal_41, GoalIdMap_34, &Var_42, NeededVars0_38, &_NeededVars_43, ToDeleteVars0_39, &_ToDeleteVars_44, ToDeleteGoals0_40, &_ToDeleteGoals_45);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_41));
      }
    }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_GoalIdMap_0_108,
  MR_Word * STATE_VARIABLE_GoalIdMap_109,
  MR_Word STATE_VARIABLE_NeededVars_0_110,
  MR_Word * STATE_VARIABLE_NeededVars_111,
  MR_Word STATE_VARIABLE_ToDeleteVars_0_112,
  MR_Word * STATE_VARIABLE_ToDeleteVars_113,
  MR_Word STATE_VARIABLE_ToDeleteGoals_0_114,
  MR_Word * STATE_VARIABLE_ToDeleteGoals_115)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 0))));
    MR_Word GoalInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_11, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr0_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_86 = (MR_Word) ((MR_Word) (GoalExpr0_17));
          MR_Word SubGoal_87;
          MR_Word GoalExpr_193;

          check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(SubGoal0_86, &SubGoal_87, STATE_VARIABLE_GoalIdMap_0_108, STATE_VARIABLE_GoalIdMap_109, STATE_VARIABLE_NeededVars_0_110, STATE_VARIABLE_NeededVars_111, STATE_VARIABLE_ToDeleteVars_0_112, STATE_VARIABLE_ToDeleteVars_113, STATE_VARIABLE_ToDeleteGoals_0_114, STATE_VARIABLE_ToDeleteGoals_115);
          GoalExpr_193 = (MR_Word) ((MR_Word) (SubGoal_87));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_193));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_18));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_17, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_ToDeleteVars_171_171;
          MR_Word TypeCtorInfo_227_227;
          MR_Word LHSVar_50;
          MR_Word TypeCtorInfo_226_226;

          succeeded = ((MR_tag((MR_Word) Unification_48)) == (MR_Integer) 0);
          if (succeeded)
          {
            LHSVar_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_48, (MR_Integer) 0))));
            TypeCtorInfo_226_226 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_226_226, STATE_VARIABLE_NeededVars_0_110, LHSVar_50);
            succeeded = !(succeeded);
            if (succeeded)
            {
              TypeCtorInfo_227_227 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              succeeded = parse_tree__set_of_var__remove_3_p_0(TypeCtorInfo_227_227, LHSVar_50, STATE_VARIABLE_ToDeleteVars_0_112, &STATE_VARIABLE_ToDeleteVars_171_171);
            }
          }
          if (succeeded)
          {
            *STATE_VARIABLE_ToDeleteVars_113 = STATE_VARIABLE_ToDeleteVars_171_171;
            *Goal_12 = hlds__make_goal__true_goal_0_f_0();
            *STATE_VARIABLE_NeededVars_111 = STATE_VARIABLE_NeededVars_0_110;
          }
          else
          {
            MR_Word NonLocals_184;

            *Goal_12 = Goal0_11;
            NonLocals_184 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_18);
            parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_NeededVars_0_110, NonLocals_184, STATE_VARIABLE_NeededVars_111);
            parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_ToDeleteVars_0_112, NonLocals_184, STATE_VARIABLE_ToDeleteVars_113);
          }
          *STATE_VARIABLE_GoalIdMap_109 = STATE_VARIABLE_GoalIdMap_0_108;
          *STATE_VARIABLE_ToDeleteGoals_115 = STATE_VARIABLE_ToDeleteGoals_0_114;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word GoalId_25;
          MR_Word OptGoalInfo_26;
          MR_Word STATE_VARIABLE_GoalIdMap_176_176;
          MR_Box conv0_OptGoalInfo_26;

          GoalId_25 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_18);
          succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0), ((MR_Box) (GoalId_25)), &conv0_OptGoalInfo_26, STATE_VARIABLE_GoalIdMap_0_108, &STATE_VARIABLE_GoalIdMap_176_176);
          if (succeeded)
          {
            OptGoalInfo_26 = ((MR_Word) (conv0_OptGoalInfo_26));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word GoalToDeleteVars_28;
            MR_Word GoalToDeleteGoals_29;

            *STATE_VARIABLE_GoalIdMap_109 = STATE_VARIABLE_GoalIdMap_176_176;
            *Goal_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptGoalInfo_26, (MR_Integer) 0))));
            GoalToDeleteVars_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptGoalInfo_26, (MR_Integer) 1))));
            GoalToDeleteGoals_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptGoalInfo_26, (MR_Integer) 2))));
            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalToDeleteVars_28, STATE_VARIABLE_ToDeleteVars_0_112, STATE_VARIABLE_ToDeleteVars_113);
            mercury__set_tree234__insert_list_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), GoalToDeleteGoals_29, STATE_VARIABLE_ToDeleteGoals_0_114, STATE_VARIABLE_ToDeleteGoals_115);
            *STATE_VARIABLE_NeededVars_111 = STATE_VARIABLE_NeededVars_0_110;
          }
          else
          {
            MR_Word NonLocals_30;
            MR_Word NewToDeleteGoals_31;
            MR_Word TypeCtorInfo_223_223;
            MR_Word NeededNonLocals_32;

            NonLocals_30 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_18);
            succeeded = mercury__set_tree234__remove_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), ((MR_Box) (GoalId_25)), STATE_VARIABLE_ToDeleteGoals_0_114, &NewToDeleteGoals_31);
            if (succeeded)
            {
              TypeCtorInfo_223_223 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              parse_tree__set_of_var__intersect_3_p_0(TypeCtorInfo_223_223, NonLocals_30, STATE_VARIABLE_NeededVars_0_110, &NeededNonLocals_32);
              succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_223_223, NeededNonLocals_32);
            }
            if (succeeded)
            {
              *STATE_VARIABLE_ToDeleteGoals_115 = NewToDeleteGoals_31;
              *Goal_12 = hlds__make_goal__true_goal_0_f_0();
              *STATE_VARIABLE_ToDeleteVars_113 = STATE_VARIABLE_ToDeleteVars_0_112;
              *STATE_VARIABLE_NeededVars_111 = STATE_VARIABLE_NeededVars_0_110;
            }
            else
            {
              *Goal_12 = Goal0_11;
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_30, STATE_VARIABLE_NeededVars_0_110, STATE_VARIABLE_NeededVars_111);
              parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_ToDeleteVars_0_112, NonLocals_30, STATE_VARIABLE_ToDeleteVars_113);
              *STATE_VARIABLE_ToDeleteGoals_115 = STATE_VARIABLE_ToDeleteGoals_0_114;
            }
            *STATE_VARIABLE_GoalIdMap_109 = STATE_VARIABLE_GoalIdMap_0_108;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              MR_Word NonLocals_183;

              *Goal_12 = Goal0_11;
              NonLocals_183 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_18);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_NeededVars_0_110, NonLocals_183, STATE_VARIABLE_NeededVars_111);
              parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_ToDeleteVars_0_112, NonLocals_183, STATE_VARIABLE_ToDeleteVars_113);
              *STATE_VARIABLE_GoalIdMap_109 = STATE_VARIABLE_GoalIdMap_0_108;
              *STATE_VARIABLE_ToDeleteGoals_115 = STATE_VARIABLE_ToDeleteGoals_0_114;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Conjuncts0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 2))));
              MR_Word Conjuncts_59;
              MR_Word GoalExpr_60;

              check_hlds__simplify__format_call__opt_format_call_sites_in_conj_10_p_0(Conjuncts0_58, &Conjuncts_59, STATE_VARIABLE_GoalIdMap_0_108, STATE_VARIABLE_GoalIdMap_109, STATE_VARIABLE_NeededVars_0_110, STATE_VARIABLE_NeededVars_111, STATE_VARIABLE_ToDeleteVars_0_112, STATE_VARIABLE_ToDeleteVars_113, STATE_VARIABLE_ToDeleteGoals_0_114, STATE_VARIABLE_ToDeleteGoals_115);
              {
                GoalExpr_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_60, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_60, 1) = (MR_Box) ((MR_Unsigned) (ConjType_57));
                MR_hl_field(MR_mktag(3), GoalExpr_60, 2) = ((MR_Box) (Conjuncts_59));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_60));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_18));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 1))));
              MR_Word Disjuncts_62;
              MR_Word NeededVarsSets_63;
              MR_Word ToDeleteVarsSets_64;
              MR_Word ToDeleteGoalsSets_65;
              MR_Word GoalExpr_187;

              check_hlds__simplify__format_call__opt_format_call_sites_in_disj_13_p_0(Disjuncts0_61, &Disjuncts_62, STATE_VARIABLE_GoalIdMap_0_108, STATE_VARIABLE_GoalIdMap_109, STATE_VARIABLE_NeededVars_0_110, (MR_Word) ((MR_Unsigned) 0U), &NeededVarsSets_63, STATE_VARIABLE_ToDeleteVars_0_112, (MR_Word) ((MR_Unsigned) 0U), &ToDeleteVarsSets_64, STATE_VARIABLE_ToDeleteGoals_0_114, (MR_Word) ((MR_Unsigned) 0U), &ToDeleteGoalsSets_65);
              *STATE_VARIABLE_NeededVars_111 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeededVarsSets_63);
              *STATE_VARIABLE_ToDeleteVars_113 = parse_tree__set_of_var__intersect_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ToDeleteVarsSets_64);
              *STATE_VARIABLE_ToDeleteGoals_115 = mercury__set_tree234__union_list_1_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), ToDeleteGoalsSets_65);
              {
                GoalExpr_187 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_187, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_187, 1) = ((MR_Box) (Disjuncts_62));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_187));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_18));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SwitchVar_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 1))));
              MR_Word CanFail_67 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 3))));
              MR_Word Cases_69;
              MR_Word GoalExpr_188;
              MR_Word NeededVarsSets_189;
              MR_Word ToDeleteVarsSets_190;
              MR_Word ToDeleteGoalsSets_191;

              check_hlds__simplify__format_call__opt_format_call_sites_in_switch_13_p_0(Cases0_68, &Cases_69, STATE_VARIABLE_GoalIdMap_0_108, STATE_VARIABLE_GoalIdMap_109, STATE_VARIABLE_NeededVars_0_110, (MR_Word) ((MR_Unsigned) 0U), &NeededVarsSets_189, STATE_VARIABLE_ToDeleteVars_0_112, (MR_Word) ((MR_Unsigned) 0U), &ToDeleteVarsSets_190, STATE_VARIABLE_ToDeleteGoals_0_114, (MR_Word) ((MR_Unsigned) 0U), &ToDeleteGoalsSets_191);
              *STATE_VARIABLE_NeededVars_111 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeededVarsSets_189);
              *STATE_VARIABLE_ToDeleteVars_113 = parse_tree__set_of_var__intersect_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ToDeleteVarsSets_190);
              *STATE_VARIABLE_ToDeleteGoals_115 = mercury__set_tree234__union_list_1_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), ToDeleteGoalsSets_191);
              {
                GoalExpr_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_188, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_188, 1) = ((MR_Box) (SwitchVar_66));
                MR_hl_field(MR_mktag(3), GoalExpr_188, 2) = (MR_Box) ((MR_Unsigned) (CanFail_67));
                MR_hl_field(MR_mktag(3), GoalExpr_188, 3) = ((MR_Box) (Cases_69));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_188));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_18));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 1))));
              MR_Word SubGoal0_199 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 2))));
              MR_Word STATE_VARIABLE_ToDeleteVars_134_134;
              MR_Word TypeCtorInfo_236_236;
              MR_Word TermVar_89;
              MR_Word Var_133;
              MR_Word TypeCtorInfo_235_235;

              succeeded = ((((MR_tag((MR_Word) Reason_88)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_88, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                TermVar_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_88, (MR_Integer) 1))));
                Var_133 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_88, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_133 == (MR_Integer) 1);
                if (succeeded)
                {
                  TypeCtorInfo_235_235 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                  succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_235_235, STATE_VARIABLE_NeededVars_0_110, TermVar_89);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    TypeCtorInfo_236_236 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                    succeeded = parse_tree__set_of_var__remove_3_p_0(TypeCtorInfo_236_236, TermVar_89, STATE_VARIABLE_ToDeleteVars_0_112, &STATE_VARIABLE_ToDeleteVars_134_134);
                  }
                }
              }
              if (succeeded)
              {
                MR_Word next_value_of_Goal0_11 = SubGoal0_199;
                MR_Word next_value_of_STATE_VARIABLE_ToDeleteVars_0_112 = STATE_VARIABLE_ToDeleteVars_134_134;

                // direct tailcall eliminated
                ;
                Goal0_11 = next_value_of_Goal0_11;
                STATE_VARIABLE_ToDeleteVars_0_112 = next_value_of_STATE_VARIABLE_ToDeleteVars_0_112;
                continue;
              }
              else
              {
                MR_Word GoalExpr_194;
                MR_Word SubGoal_195;

                check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(SubGoal0_199, &SubGoal_195, STATE_VARIABLE_GoalIdMap_0_108, STATE_VARIABLE_GoalIdMap_109, STATE_VARIABLE_NeededVars_0_110, STATE_VARIABLE_NeededVars_111, STATE_VARIABLE_ToDeleteVars_0_112, STATE_VARIABLE_ToDeleteVars_113, STATE_VARIABLE_ToDeleteGoals_0_114, STATE_VARIABLE_ToDeleteGoals_115);
                {
                  GoalExpr_194 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_194, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), GoalExpr_194, 1) = ((MR_Box) (Reason_88));
                  MR_hl_field(MR_mktag(3), GoalExpr_194, 2) = ((MR_Box) (SubGoal_195));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_194));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_18));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 1))));
              MR_Word Cond0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 2))));
              MR_Word Then0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 3))));
              MR_Word Else0_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 4))));
              MR_Word Else_74;
              MR_Word NeededVarsBeforeElse_75;
              MR_Word ToDeleteVarsBeforeElse_76;
              MR_Word ToDeleteGoalsBeforeElse_77;
              MR_Word Then_78;
              MR_Word NeededVarsBeforeThen_79;
              MR_Word ToDeleteVarsBeforeThen_80;
              MR_Word ToDeleteGoalsBeforeThen_81;
              MR_Word Cond_82;
              MR_Word NeededVarsBeforeCond_83;
              MR_Word ToDeleteVarsBeforeCond_84;
              MR_Word ToDeleteGoalsBeforeCond_85;
              MR_Word STATE_VARIABLE_GoalIdMap_147_147;
              MR_Word STATE_VARIABLE_GoalIdMap_148_148;
              MR_Word GoalExpr_192;

              check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(Else0_73, &Else_74, STATE_VARIABLE_GoalIdMap_0_108, &STATE_VARIABLE_GoalIdMap_147_147, STATE_VARIABLE_NeededVars_0_110, &NeededVarsBeforeElse_75, STATE_VARIABLE_ToDeleteVars_0_112, &ToDeleteVarsBeforeElse_76, STATE_VARIABLE_ToDeleteGoals_0_114, &ToDeleteGoalsBeforeElse_77);
              check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(Then0_72, &Then_78, STATE_VARIABLE_GoalIdMap_147_147, &STATE_VARIABLE_GoalIdMap_148_148, STATE_VARIABLE_NeededVars_0_110, &NeededVarsBeforeThen_79, STATE_VARIABLE_ToDeleteVars_0_112, &ToDeleteVarsBeforeThen_80, STATE_VARIABLE_ToDeleteGoals_0_114, &ToDeleteGoalsBeforeThen_81);
              check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(Cond0_71, &Cond_82, STATE_VARIABLE_GoalIdMap_148_148, STATE_VARIABLE_GoalIdMap_109, NeededVarsBeforeThen_79, &NeededVarsBeforeCond_83, ToDeleteVarsBeforeThen_80, &ToDeleteVarsBeforeCond_84, ToDeleteGoalsBeforeThen_81, &ToDeleteGoalsBeforeCond_85);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeededVarsBeforeCond_83, NeededVarsBeforeElse_75, STATE_VARIABLE_NeededVars_111);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ToDeleteVarsBeforeCond_84, ToDeleteVarsBeforeElse_76, STATE_VARIABLE_ToDeleteVars_113);
              mercury__set_tree234__union_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), ToDeleteGoalsBeforeCond_85, ToDeleteGoalsBeforeElse_77, STATE_VARIABLE_ToDeleteGoals_115);
              {
                GoalExpr_192 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_192, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_192, 1) = ((MR_Box) (Vars_70));
                MR_hl_field(MR_mktag(3), GoalExpr_192, 2) = ((MR_Box) (Cond_82));
                MR_hl_field(MR_mktag(3), GoalExpr_192, 3) = ((MR_Box) (Then_78));
                MR_hl_field(MR_mktag(3), GoalExpr_192, 4) = ((MR_Box) (Else_74));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_192));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_18));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 1))));
              MR_Word GoalExpr_212;

              switch (MR_tag((MR_Word) ShortHand0_90)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.format_call.opt_format_call_sites_in_goal\'/10", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word AtomicType_91 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShortHand0_90, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word OuterVars_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_90, (MR_Integer) 1))));
                    MR_Word InnerVars_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_90, (MR_Integer) 2))));
                    MR_Word OutputVars_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_90, (MR_Integer) 3))));
                    MR_Word MainGoal0_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_90, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_90, (MR_Integer) 5))));
                    MR_Word OrElseInners_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand0_90, (MR_Integer) 6))));
                    MR_Word MainGoal_98;
                    MR_Word NeededVarsMain_99;
                    MR_Word ToDeleteVarsMain_100;
                    MR_Word ToDeleteGoalsMain_101;
                    MR_Word OrElseGoals_102;
                    MR_Word ShortHand_103;
                    MR_Word STATE_VARIABLE_GoalIdMap_122_122;
                    MR_Word Var_128;
                    MR_Word Var_130;
                    MR_Word Var_132;
                    MR_Word NeededVarsSets_201;
                    MR_Word ToDeleteVarsSets_202;
                    MR_Word ToDeleteGoalsSets_203;

                    check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(MainGoal0_95, &MainGoal_98, STATE_VARIABLE_GoalIdMap_0_108, &STATE_VARIABLE_GoalIdMap_122_122, STATE_VARIABLE_NeededVars_0_110, &NeededVarsMain_99, STATE_VARIABLE_ToDeleteVars_0_112, &ToDeleteVarsMain_100, STATE_VARIABLE_ToDeleteGoals_0_114, &ToDeleteGoalsMain_101);
                    check_hlds__simplify__format_call__opt_format_call_sites_in_disj_13_p_0(OrElseGoals0_96, &OrElseGoals_102, STATE_VARIABLE_GoalIdMap_122_122, STATE_VARIABLE_GoalIdMap_109, STATE_VARIABLE_NeededVars_0_110, (MR_Word) ((MR_Unsigned) 0U), &NeededVarsSets_201, STATE_VARIABLE_ToDeleteVars_0_112, (MR_Word) ((MR_Unsigned) 0U), &ToDeleteVarsSets_202, STATE_VARIABLE_ToDeleteGoals_0_114, (MR_Word) ((MR_Unsigned) 0U), &ToDeleteGoalsSets_203);
                    {
                      Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (NeededVarsMain_99));
                      MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (NeededVarsSets_201));
                    }
                    *STATE_VARIABLE_NeededVars_111 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_128);
                    {
                      Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (ToDeleteVarsMain_100));
                      MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (ToDeleteVarsSets_202));
                    }
                    *STATE_VARIABLE_ToDeleteVars_113 = parse_tree__set_of_var__intersect_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_130);
                    {
                      Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (ToDeleteGoalsMain_101));
                      MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (ToDeleteGoalsSets_203));
                    }
                    *STATE_VARIABLE_ToDeleteGoals_115 = mercury__set_tree234__union_list_1_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), Var_132);
                    {
                      ShortHand_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ShortHand_103, 0) = (MR_Box) ((MR_Unsigned) (AtomicType_91));
                      MR_hl_field(MR_mktag(1), ShortHand_103, 1) = ((MR_Box) (OuterVars_92));
                      MR_hl_field(MR_mktag(1), ShortHand_103, 2) = ((MR_Box) (InnerVars_93));
                      MR_hl_field(MR_mktag(1), ShortHand_103, 3) = ((MR_Box) (OutputVars_94));
                      MR_hl_field(MR_mktag(1), ShortHand_103, 4) = ((MR_Box) (MainGoal_98));
                      MR_hl_field(MR_mktag(1), ShortHand_103, 5) = ((MR_Box) (OrElseGoals_102));
                      MR_hl_field(MR_mktag(1), ShortHand_103, 6) = ((MR_Box) (OrElseInners_97));
                    }
                    {
                      GoalExpr_212 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_212, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(MR_mktag(3), GoalExpr_212, 1) = ((MR_Box) (ShortHand_103));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_104 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_90, (MR_Integer) 0))));
                    MR_Word ResultVar_105 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_90, (MR_Integer) 1))));
                    MR_Word SubGoal0_204 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand0_90, (MR_Integer) 2))));
                    MR_Word SubGoal_205;
                    MR_Word ShortHand_206;

                    check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(SubGoal0_204, &SubGoal_205, STATE_VARIABLE_GoalIdMap_0_108, STATE_VARIABLE_GoalIdMap_109, STATE_VARIABLE_NeededVars_0_110, STATE_VARIABLE_NeededVars_111, STATE_VARIABLE_ToDeleteVars_0_112, STATE_VARIABLE_ToDeleteVars_113, STATE_VARIABLE_ToDeleteGoals_0_114, STATE_VARIABLE_ToDeleteGoals_115);
                    {
                      ShortHand_206 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), ShortHand_206, 0) = ((MR_Box) (MaybeIO_104));
                      MR_hl_field(MR_mktag(2), ShortHand_206, 1) = ((MR_Box) (ResultVar_105));
                      MR_hl_field(MR_mktag(2), ShortHand_206, 2) = ((MR_Box) (SubGoal_205));
                    }
                    {
                      GoalExpr_212 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_212, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(MR_mktag(3), GoalExpr_212, 1) = ((MR_Box) (ShortHand_206));
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_212));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_18));
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
check_hlds__simplify__format_call__opt_format_call_sites_in_switch_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_GoalIdMap_0_3,
  MR_Word * STATE_VARIABLE_GoalIdMap_4,
  MR_Word NeededVars0_5,
  MR_Word STATE_VARIABLE_NeededVarsSets_0_6,
  MR_Word * STATE_VARIABLE_NeededVarsSets_7,
  MR_Word ToDeleteVars0_8,
  MR_Word STATE_VARIABLE_ToDeleteVarsSets_0_9,
  MR_Word * STATE_VARIABLE_ToDeleteVarsSets_10,
  MR_Word ToDeleteGoals0_11,
  MR_Word STATE_VARIABLE_ToDeleteGoalSets_0_12,
  MR_Word * STATE_VARIABLE_ToDeleteGoalSets_13)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ToDeleteGoalSets_13 = STATE_VARIABLE_ToDeleteGoalSets_0_12;
    *STATE_VARIABLE_ToDeleteVarsSets_10 = STATE_VARIABLE_ToDeleteVarsSets_0_9;
    *STATE_VARIABLE_NeededVarsSets_7 = STATE_VARIABLE_NeededVarsSets_0_6;
    *STATE_VARIABLE_GoalIdMap_4 = STATE_VARIABLE_GoalIdMap_0_3;
  }
  else
  {
    MR_Word Case0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_31;
    MR_Word Cases_32;
    MR_Word FirstConsId_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_29, (MR_Integer) 0))));
    MR_Word LaterConsIds_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_29, (MR_Integer) 1))));
    MR_Word Goal0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_29, (MR_Integer) 2))));
    MR_Word Goal_43;
    MR_Word NeededVars_44;
    MR_Word ToDeleteVars_45;
    MR_Word ToDeleteGoals_46;
    MR_Word STATE_VARIABLE_GoalIdMap_55_55;
    MR_Word STATE_VARIABLE_NeededVarsSets_56_56;
    MR_Word STATE_VARIABLE_ToDeleteVarsSets_57_57;
    MR_Word STATE_VARIABLE_ToDeleteGoalSets_58_58;

    check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(Goal0_42, &Goal_43, STATE_VARIABLE_GoalIdMap_0_3, &STATE_VARIABLE_GoalIdMap_55_55, NeededVars0_5, &NeededVars_44, ToDeleteVars0_8, &ToDeleteVars_45, ToDeleteGoals0_11, &ToDeleteGoals_46);
    {
      STATE_VARIABLE_NeededVarsSets_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_NeededVarsSets_56_56, 0) = ((MR_Box) (NeededVars_44));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_NeededVarsSets_56_56, 1) = ((MR_Box) (STATE_VARIABLE_NeededVarsSets_0_6));
    }
    {
      STATE_VARIABLE_ToDeleteVarsSets_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_ToDeleteVarsSets_57_57, 0) = ((MR_Box) (ToDeleteVars_45));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_ToDeleteVarsSets_57_57, 1) = ((MR_Box) (STATE_VARIABLE_ToDeleteVarsSets_0_9));
    }
    {
      STATE_VARIABLE_ToDeleteGoalSets_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_ToDeleteGoalSets_58_58, 0) = ((MR_Box) (ToDeleteGoals_46));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_ToDeleteGoalSets_58_58, 1) = ((MR_Box) (STATE_VARIABLE_ToDeleteGoalSets_0_12));
    }
    {
      Case_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_31, 0) = ((MR_Box) (FirstConsId_40));
      MR_hl_field(MR_mktag(0), Case_31, 1) = ((MR_Box) (LaterConsIds_41));
      MR_hl_field(MR_mktag(0), Case_31, 2) = ((MR_Box) (Goal_43));
    }
    check_hlds__simplify__format_call__opt_format_call_sites_in_switch_13_p_0(Cases0_30, &Cases_32, STATE_VARIABLE_GoalIdMap_55_55, STATE_VARIABLE_GoalIdMap_4, NeededVars0_5, STATE_VARIABLE_NeededVarsSets_56_56, STATE_VARIABLE_NeededVarsSets_7, ToDeleteVars0_8, STATE_VARIABLE_ToDeleteVarsSets_57_57, STATE_VARIABLE_ToDeleteVarsSets_10, ToDeleteGoals0_11, STATE_VARIABLE_ToDeleteGoalSets_58_58, STATE_VARIABLE_ToDeleteGoalSets_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_31));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_32));
    }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__opt_format_call_sites_in_disj_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_GoalIdMap_0_3,
  MR_Word * STATE_VARIABLE_GoalIdMap_4,
  MR_Word NeededVars0_5,
  MR_Word STATE_VARIABLE_NeededVarsSets_0_6,
  MR_Word * STATE_VARIABLE_NeededVarsSets_7,
  MR_Word ToDeleteVars0_8,
  MR_Word STATE_VARIABLE_ToDeleteVarsSets_0_9,
  MR_Word * STATE_VARIABLE_ToDeleteVarsSets_10,
  MR_Word ToDeleteGoals0_11,
  MR_Word STATE_VARIABLE_ToDeleteGoalSets_0_12,
  MR_Word * STATE_VARIABLE_ToDeleteGoalSets_13)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_ToDeleteGoalSets_13 = STATE_VARIABLE_ToDeleteGoalSets_0_12;
    *STATE_VARIABLE_ToDeleteVarsSets_10 = STATE_VARIABLE_ToDeleteVarsSets_0_9;
    *STATE_VARIABLE_NeededVarsSets_7 = STATE_VARIABLE_NeededVarsSets_0_6;
    *STATE_VARIABLE_GoalIdMap_4 = STATE_VARIABLE_GoalIdMap_0_3;
  }
  else
  {
    MR_Word Goal0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_31;
    MR_Word Goals_32;
    MR_Word NeededVars_40;
    MR_Word ToDeleteVars_41;
    MR_Word ToDeleteGoals_42;
    MR_Word STATE_VARIABLE_GoalIdMap_51_51;
    MR_Word STATE_VARIABLE_NeededVarsSets_52_52;
    MR_Word STATE_VARIABLE_ToDeleteVarsSets_53_53;
    MR_Word STATE_VARIABLE_ToDeleteGoalSets_54_54;

    check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(Goal0_29, &Goal_31, STATE_VARIABLE_GoalIdMap_0_3, &STATE_VARIABLE_GoalIdMap_51_51, NeededVars0_5, &NeededVars_40, ToDeleteVars0_8, &ToDeleteVars_41, ToDeleteGoals0_11, &ToDeleteGoals_42);
    {
      STATE_VARIABLE_NeededVarsSets_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_NeededVarsSets_52_52, 0) = ((MR_Box) (NeededVars_40));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_NeededVarsSets_52_52, 1) = ((MR_Box) (STATE_VARIABLE_NeededVarsSets_0_6));
    }
    {
      STATE_VARIABLE_ToDeleteVarsSets_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_ToDeleteVarsSets_53_53, 0) = ((MR_Box) (ToDeleteVars_41));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_ToDeleteVarsSets_53_53, 1) = ((MR_Box) (STATE_VARIABLE_ToDeleteVarsSets_0_9));
    }
    {
      STATE_VARIABLE_ToDeleteGoalSets_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_ToDeleteGoalSets_54_54, 0) = ((MR_Box) (ToDeleteGoals_42));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_ToDeleteGoalSets_54_54, 1) = ((MR_Box) (STATE_VARIABLE_ToDeleteGoalSets_0_12));
    }
    check_hlds__simplify__format_call__opt_format_call_sites_in_disj_13_p_0(Goals0_30, &Goals_32, STATE_VARIABLE_GoalIdMap_51_51, STATE_VARIABLE_GoalIdMap_4, NeededVars0_5, STATE_VARIABLE_NeededVarsSets_52_52, STATE_VARIABLE_NeededVarsSets_7, ToDeleteVars0_8, STATE_VARIABLE_ToDeleteVarsSets_53_53, STATE_VARIABLE_ToDeleteVarsSets_10, ToDeleteGoals0_11, STATE_VARIABLE_ToDeleteGoalSets_54_54, STATE_VARIABLE_ToDeleteGoalSets_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_31));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_32));
    }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__opt_format_call_sites_in_conj_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_GoalIdMap_0_3,
  MR_Word * STATE_VARIABLE_GoalIdMap_4,
  MR_Word STATE_VARIABLE_NeededVars_0_5,
  MR_Word * STATE_VARIABLE_NeededVars_6,
  MR_Word STATE_VARIABLE_ToDeleteVars_0_7,
  MR_Word * STATE_VARIABLE_ToDeleteVars_8,
  MR_Word STATE_VARIABLE_ToDeleteGoals_0_9,
  MR_Word * STATE_VARIABLE_ToDeleteGoals_10)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_ToDeleteGoals_10 = STATE_VARIABLE_ToDeleteGoals_0_9;
      *STATE_VARIABLE_ToDeleteVars_8 = STATE_VARIABLE_ToDeleteVars_0_7;
      *STATE_VARIABLE_NeededVars_6 = STATE_VARIABLE_NeededVars_0_5;
      *STATE_VARIABLE_GoalIdMap_4 = STATE_VARIABLE_GoalIdMap_0_3;
    }
    else
    {
      MR_Word HeadGoal0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TailGoals0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TailGoals_30;
      MR_Word HeadGoal_31;
      MR_Word HeadGoalExpr_32;
      MR_Word STATE_VARIABLE_GoalIdMap_43_43;
      MR_Word STATE_VARIABLE_NeededVars_44_44;
      MR_Word STATE_VARIABLE_ToDeleteVars_45_45;
      MR_Word STATE_VARIABLE_ToDeleteGoals_46_46;
      MR_Word HeadSubGoals_34;
      MR_Word Var_51;

      check_hlds__simplify__format_call__opt_format_call_sites_in_conj_10_p_0(TailGoals0_24, &TailGoals_30, STATE_VARIABLE_GoalIdMap_0_3, &STATE_VARIABLE_GoalIdMap_43_43, STATE_VARIABLE_NeededVars_0_5, &STATE_VARIABLE_NeededVars_44_44, STATE_VARIABLE_ToDeleteVars_0_7, &STATE_VARIABLE_ToDeleteVars_45_45, STATE_VARIABLE_ToDeleteGoals_0_9, &STATE_VARIABLE_ToDeleteGoals_46_46);
      check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(HeadGoal0_23, &HeadGoal_31, STATE_VARIABLE_GoalIdMap_43_43, STATE_VARIABLE_GoalIdMap_4, STATE_VARIABLE_NeededVars_44_44, STATE_VARIABLE_NeededVars_6, STATE_VARIABLE_ToDeleteVars_45_45, STATE_VARIABLE_ToDeleteVars_8, STATE_VARIABLE_ToDeleteGoals_46_46, STATE_VARIABLE_ToDeleteGoals_10);
      HeadGoalExpr_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadGoal_31, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) HeadGoalExpr_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadGoalExpr_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadGoalExpr_32, (MR_Integer) 1))) & (MR_Integer) 1);
        HeadSubGoals_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadGoalExpr_32, (MR_Integer) 2))));
        succeeded = (Var_51 == (MR_Integer) 0);
      }
      if (succeeded)
        *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadSubGoals_34, TailGoals_30);
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadGoal_31));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailGoals_30));
        }
    }
  }
}

static MR_Box MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Goal_5;

    conv0_Goal_5 = check_hlds__simplify__format_call__project_case_goal_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Goal_5));
    return wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_FormatCallSites_0_4,
  MR_Word * STATE_VARIABLE_FormatCallSites_5,
  MR_Word STATE_VARIABLE_Counter_0_6,
  MR_Word * STATE_VARIABLE_Counter_7,
  MR_Word STATE_VARIABLE_ConjMaps_0_8,
  MR_Word * STATE_VARIABLE_ConjMaps_9,
  MR_Word STATE_VARIABLE_PredMap_0_10,
  MR_Word * STATE_VARIABLE_PredMap_11,
  MR_Word STATE_VARIABLE_RelevantVars_0_12,
  MR_Word * STATE_VARIABLE_RelevantVars_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_RelevantVars_13 = STATE_VARIABLE_RelevantVars_0_12;
      *STATE_VARIABLE_PredMap_11 = STATE_VARIABLE_PredMap_0_10;
      *STATE_VARIABLE_ConjMaps_9 = STATE_VARIABLE_ConjMaps_0_8;
      *STATE_VARIABLE_Counter_7 = STATE_VARIABLE_Counter_0_6;
      *STATE_VARIABLE_FormatCallSites_5 = STATE_VARIABLE_FormatCallSites_0_4;
    }
    else
    {
      MR_Word Goal_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GoalExpr_40;
      MR_Word GoalInfo_41;
      MR_Word STATE_VARIABLE_FormatCallSites_134_134;
      MR_Word STATE_VARIABLE_Counter_135_135;
      MR_Word STATE_VARIABLE_ConjMaps_136_136;
      MR_Word STATE_VARIABLE_PredMap_137_137;
      MR_Word STATE_VARIABLE_RelevantVars_138_138;

      check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(HeadVar__1_1, Goals_33, HeadVar__3_3, STATE_VARIABLE_FormatCallSites_0_4, &STATE_VARIABLE_FormatCallSites_134_134, STATE_VARIABLE_Counter_0_6, &STATE_VARIABLE_Counter_135_135, STATE_VARIABLE_ConjMaps_0_8, &STATE_VARIABLE_ConjMaps_136_136, STATE_VARIABLE_PredMap_0_10, &STATE_VARIABLE_PredMap_137_137, STATE_VARIABLE_RelevantVars_0_12, &STATE_VARIABLE_RelevantVars_138_138);
      GoalExpr_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_32, (MR_Integer) 0))));
      GoalInfo_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_32, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) GoalExpr_40)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_56 = (MR_Word) ((MR_Word) (GoalExpr_40));
            MR_Word SubGoalId_57;
            MR_Word STATE_VARIABLE_PredMap_190_190;

            check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(HeadVar__1_1, SubGoal_56, &SubGoalId_57, STATE_VARIABLE_FormatCallSites_134_134, STATE_VARIABLE_FormatCallSites_5, STATE_VARIABLE_Counter_135_135, STATE_VARIABLE_Counter_7, STATE_VARIABLE_ConjMaps_136_136, STATE_VARIABLE_ConjMaps_9, STATE_VARIABLE_PredMap_137_137, &STATE_VARIABLE_PredMap_190_190, STATE_VARIABLE_RelevantVars_138_138, STATE_VARIABLE_RelevantVars_13);
            mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), ((MR_Box) (SubGoalId_57)), ((MR_Box) (HeadVar__3_3)), STATE_VARIABLE_PredMap_190_190, STATE_VARIABLE_PredMap_11);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RHS_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_40, (MR_Integer) 1))));
            MR_Word Unification_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_40, (MR_Integer) 3))));
            MR_Word STATE_VARIABLE_ConjMaps_153_153;
            MR_Word STATE_VARIABLE_PredMap_154_154;
            MR_Word STATE_VARIABLE_RelevantVars_155_155;

            check_hlds__simplify__format_call__format_call_traverse_unify_9_p_0(Unification_96, GoalInfo_41, HeadVar__3_3, STATE_VARIABLE_ConjMaps_136_136, &STATE_VARIABLE_ConjMaps_153_153, STATE_VARIABLE_PredMap_137_137, &STATE_VARIABLE_PredMap_154_154, STATE_VARIABLE_RelevantVars_138_138, &STATE_VARIABLE_RelevantVars_155_155);
            switch (MR_tag((MR_Word) RHS_94)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *STATE_VARIABLE_FormatCallSites_5 = STATE_VARIABLE_FormatCallSites_134_134;
                  *STATE_VARIABLE_Counter_7 = STATE_VARIABLE_Counter_135_135;
                  *STATE_VARIABLE_ConjMaps_9 = STATE_VARIABLE_ConjMaps_153_153;
                  *STATE_VARIABLE_PredMap_11 = STATE_VARIABLE_PredMap_154_154;
                  *STATE_VARIABLE_RelevantVars_13 = STATE_VARIABLE_RelevantVars_155_155;
                }
                break;
              case (MR_Integer) 1:
                {
                  *STATE_VARIABLE_FormatCallSites_5 = STATE_VARIABLE_FormatCallSites_134_134;
                  *STATE_VARIABLE_Counter_7 = STATE_VARIABLE_Counter_135_135;
                  *STATE_VARIABLE_ConjMaps_9 = STATE_VARIABLE_ConjMaps_153_153;
                  *STATE_VARIABLE_PredMap_11 = STATE_VARIABLE_PredMap_154_154;
                  *STATE_VARIABLE_RelevantVars_13 = STATE_VARIABLE_RelevantVars_155_155;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word LambdaGoal_106 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_94, (MR_Integer) 6))));
                  MR_Word LambdaGoalId_107;
                  MR_Word STATE_VARIABLE_PredMap_159_159;

                  check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(HeadVar__1_1, LambdaGoal_106, &LambdaGoalId_107, STATE_VARIABLE_FormatCallSites_134_134, STATE_VARIABLE_FormatCallSites_5, STATE_VARIABLE_Counter_135_135, STATE_VARIABLE_Counter_7, STATE_VARIABLE_ConjMaps_153_153, STATE_VARIABLE_ConjMaps_9, STATE_VARIABLE_PredMap_154_154, &STATE_VARIABLE_PredMap_159_159, STATE_VARIABLE_RelevantVars_155_155, STATE_VARIABLE_RelevantVars_13);
                  mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), ((MR_Box) (LambdaGoalId_107)), ((MR_Box) (HeadVar__3_3)), STATE_VARIABLE_PredMap_159_159, STATE_VARIABLE_PredMap_11);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_72 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_40, (MR_Integer) 0))));
            MR_Word ArgVars_74 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_40, (MR_Integer) 2))));
            MR_Word PredInfo_78;
            MR_Word ModuleName_79;
            MR_String Name_80;
            MR_Word Kind_81;
            MR_Word StringVar_82;
            MR_Word ValuesVar_83;

            hlds__hlds_module__module_info_pred_info_3_p_0(HeadVar__1_1, PredId_72, &PredInfo_78);
            ModuleName_79 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_78);
            Name_80 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_78);
            succeeded = check_hlds__simplify__format_call__is_format_call_kind_and_vars_7_p_0(ModuleName_79, Name_80, ArgVars_74, GoalInfo_41, &Kind_81, &StringVar_82, &ValuesVar_83);
            if (succeeded)
            {
              MR_Integer Arity_84;
              MR_Word GoalId_85;
              MR_Word Context_86;
              MR_Word FormatCallSite_87;
              MR_Word Var_163;
              MR_Word Var_165;

              Arity_84 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_78);
              GoalId_85 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_41);
              Context_86 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_41);
              {
                FormatCallSite_87 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), FormatCallSite_87, 0) = ((MR_Box) (GoalId_85));
                MR_hl_field(MR_mktag(0), FormatCallSite_87, 1) = ((MR_Box) (GoalInfo_41));
                MR_hl_field(MR_mktag(0), FormatCallSite_87, 2) = ((MR_Box) (StringVar_82));
                MR_hl_field(MR_mktag(0), FormatCallSite_87, 3) = ((MR_Box) (ValuesVar_83));
                MR_hl_field(MR_mktag(0), FormatCallSite_87, 4) = ((MR_Box) (Kind_81));
                MR_hl_field(MR_mktag(0), FormatCallSite_87, 5) = ((MR_Box) (PredId_72));
                MR_hl_field(MR_mktag(0), FormatCallSite_87, 6) = ((MR_Box) (ModuleName_79));
                MR_hl_field(MR_mktag(0), FormatCallSite_87, 7) = ((MR_Box) (Name_80));
                MR_hl_field(MR_mktag(0), FormatCallSite_87, 8) = ((MR_Box) (Arity_84));
                MR_hl_field(MR_mktag(0), FormatCallSite_87, 9) = ((MR_Box) (Context_86));
                MR_hl_field(MR_mktag(0), FormatCallSite_87, 10) = ((MR_Box) (HeadVar__3_3));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_FormatCallSites_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FormatCallSite_87));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_FormatCallSites_134_134));
              }
              {
                Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (ValuesVar_83));
                MR_hl_field(MR_mktag(1), Var_165, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (StringVar_82));
                MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) (Var_165));
              }
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_163, STATE_VARIABLE_RelevantVars_138_138, STATE_VARIABLE_RelevantVars_13);
              *STATE_VARIABLE_ConjMaps_9 = STATE_VARIABLE_ConjMaps_136_136;
            }
            else
            {
              MR_Word Var_255;

              Var_255 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_79, Var_255);
              if (succeeded)
              {
                MR_Word ArgVarA_88;
                MR_Word ArgVarB_89;
                MR_Word ResultVar_90;
                MR_Word TypeCtorInfo_249_249;
                MR_Word Var_167;
                MR_Word Var_168;
                MR_Word Var_169;

                if ((strcmp(Name_80, (MR_String) "++") == 0))
                  succeeded = MR_TRUE;
                else
                if ((strcmp(Name_80, (MR_String) "append") == 0))
                  succeeded = MR_TRUE;
                else
                  succeeded = MR_FALSE;
                if (succeeded)
                {
                  succeeded = (ArgVars_74 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    ArgVarA_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_74, (MR_Integer) 0))));
                    Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_74, (MR_Integer) 1))));
                    succeeded = (Var_167 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      ArgVarB_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_167, (MR_Integer) 0))));
                      Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_167, (MR_Integer) 1))));
                      succeeded = (Var_168 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ResultVar_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_168, (MR_Integer) 0))));
                        Var_169 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_168, (MR_Integer) 1))));
                        succeeded = (Var_169 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          TypeCtorInfo_249_249 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                          succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_249_249, STATE_VARIABLE_RelevantVars_138_138, ResultVar_90);
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word StringState_91;
                  MR_Word STATE_VARIABLE_RelevantVars_170_170;
                  MR_Word STATE_VARIABLE_RelevantVars_171_171;
                  MR_Word GoalId_225;

                  parse_tree__set_of_var__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResultVar_90, STATE_VARIABLE_RelevantVars_138_138, &STATE_VARIABLE_RelevantVars_170_170);
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVarA_88, STATE_VARIABLE_RelevantVars_170_170, &STATE_VARIABLE_RelevantVars_171_171);
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVarB_89, STATE_VARIABLE_RelevantVars_171_171, STATE_VARIABLE_RelevantVars_13);
                  GoalId_225 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_41);
                  {
                    StringState_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), StringState_91, 0) = ((MR_Box) (GoalId_225));
                    MR_hl_field(MR_mktag(1), StringState_91, 1) = ((MR_Box) (ArgVarA_88));
                    MR_hl_field(MR_mktag(1), StringState_91, 2) = ((MR_Box) (ArgVarB_89));
                  }
                  check_hlds__simplify__format_call__add_to_string_map_5_p_0(HeadVar__3_3, ResultVar_90, StringState_91, STATE_VARIABLE_ConjMaps_136_136, STATE_VARIABLE_ConjMaps_9);
                }
                else
                {
                  MR_Word ListSkeletonVar_92;
                  MR_Word ResultVar_229;
                  MR_Word TypeCtorInfo_251_251;
                  MR_Word Var_174;
                  MR_Word Var_175;

                  succeeded = (strcmp(Name_80, (MR_String) "append_list") == 0);
                  if (succeeded)
                  {
                    succeeded = (ArgVars_74 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      ListSkeletonVar_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_74, (MR_Integer) 0))));
                      Var_174 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_74, (MR_Integer) 1))));
                      succeeded = (Var_174 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ResultVar_229 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_174, (MR_Integer) 0))));
                        Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_174, (MR_Integer) 1))));
                        succeeded = (Var_175 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          TypeCtorInfo_251_251 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                          succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_251_251, STATE_VARIABLE_RelevantVars_138_138, ResultVar_229);
                        }
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word STATE_VARIABLE_RelevantVars_176_176;
                    MR_Word GoalId_226;
                    MR_Word StringState_227;

                    parse_tree__set_of_var__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResultVar_229, STATE_VARIABLE_RelevantVars_138_138, &STATE_VARIABLE_RelevantVars_176_176);
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ListSkeletonVar_92, STATE_VARIABLE_RelevantVars_176_176, STATE_VARIABLE_RelevantVars_13);
                    GoalId_226 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_41);
                    {
                      StringState_227 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), StringState_227, 0) = ((MR_Box) (GoalId_226));
                      MR_hl_field(MR_mktag(2), StringState_227, 1) = ((MR_Box) (ListSkeletonVar_92));
                    }
                    check_hlds__simplify__format_call__add_to_string_map_5_p_0(HeadVar__3_3, ResultVar_229, StringState_227, STATE_VARIABLE_ConjMaps_136_136, STATE_VARIABLE_ConjMaps_9);
                  }
                  else
                  {
                    *STATE_VARIABLE_RelevantVars_13 = STATE_VARIABLE_RelevantVars_138_138;
                    *STATE_VARIABLE_ConjMaps_9 = STATE_VARIABLE_ConjMaps_136_136;
                  }
                }
              }
              else
              {
                *STATE_VARIABLE_RelevantVars_13 = STATE_VARIABLE_RelevantVars_138_138;
                *STATE_VARIABLE_ConjMaps_9 = STATE_VARIABLE_ConjMaps_136_136;
              }
              *STATE_VARIABLE_FormatCallSites_5 = STATE_VARIABLE_FormatCallSites_134_134;
            }
            *STATE_VARIABLE_Counter_7 = STATE_VARIABLE_Counter_135_135;
            *STATE_VARIABLE_PredMap_11 = STATE_VARIABLE_PredMap_137_137;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_40, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *STATE_VARIABLE_FormatCallSites_5 = STATE_VARIABLE_FormatCallSites_134_134;
                *STATE_VARIABLE_Counter_7 = STATE_VARIABLE_Counter_135_135;
                *STATE_VARIABLE_ConjMaps_9 = STATE_VARIABLE_ConjMaps_136_136;
                *STATE_VARIABLE_PredMap_11 = STATE_VARIABLE_PredMap_137_137;
                *STATE_VARIABLE_RelevantVars_13 = STATE_VARIABLE_RelevantVars_138_138;
              }
              break;
            case (MR_Integer) 1:
              {
                *STATE_VARIABLE_FormatCallSites_5 = STATE_VARIABLE_FormatCallSites_134_134;
                *STATE_VARIABLE_Counter_7 = STATE_VARIABLE_Counter_135_135;
                *STATE_VARIABLE_ConjMaps_9 = STATE_VARIABLE_ConjMaps_136_136;
                *STATE_VARIABLE_PredMap_11 = STATE_VARIABLE_PredMap_137_137;
                *STATE_VARIABLE_RelevantVars_13 = STATE_VARIABLE_RelevantVars_138_138;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Conjuncts_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_40, (MR_Integer) 2))));
                MR_Word next_value_of_HeadVar__2_2 = Conjuncts_43;
                MR_Word next_value_of_STATE_VARIABLE_FormatCallSites_0_4 = STATE_VARIABLE_FormatCallSites_134_134;
                MR_Word next_value_of_STATE_VARIABLE_Counter_0_6 = STATE_VARIABLE_Counter_135_135;
                MR_Word next_value_of_STATE_VARIABLE_ConjMaps_0_8 = STATE_VARIABLE_ConjMaps_136_136;
                MR_Word next_value_of_STATE_VARIABLE_PredMap_0_10 = STATE_VARIABLE_PredMap_137_137;
                MR_Word next_value_of_STATE_VARIABLE_RelevantVars_0_12 = STATE_VARIABLE_RelevantVars_138_138;

                // direct tailcall eliminated
                ;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                STATE_VARIABLE_FormatCallSites_0_4 = next_value_of_STATE_VARIABLE_FormatCallSites_0_4;
                STATE_VARIABLE_Counter_0_6 = next_value_of_STATE_VARIABLE_Counter_0_6;
                STATE_VARIABLE_ConjMaps_0_8 = next_value_of_STATE_VARIABLE_ConjMaps_0_8;
                STATE_VARIABLE_PredMap_0_10 = next_value_of_STATE_VARIABLE_PredMap_0_10;
                STATE_VARIABLE_RelevantVars_0_12 = next_value_of_STATE_VARIABLE_RelevantVars_0_12;
                continue;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Disjuncts_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_40, (MR_Integer) 1))));

                check_hlds__simplify__format_call__format_call_traverse_disj_13_p_0(HeadVar__1_1, Disjuncts_44, HeadVar__3_3, STATE_VARIABLE_FormatCallSites_134_134, STATE_VARIABLE_FormatCallSites_5, STATE_VARIABLE_Counter_135_135, STATE_VARIABLE_Counter_7, STATE_VARIABLE_ConjMaps_136_136, STATE_VARIABLE_ConjMaps_9, STATE_VARIABLE_PredMap_137_137, STATE_VARIABLE_PredMap_11, STATE_VARIABLE_RelevantVars_138_138, STATE_VARIABLE_RelevantVars_13);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_40, (MR_Integer) 3))));
                MR_Word Disjuncts_223;

                Disjuncts_223 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[7]), Cases_47);
                check_hlds__simplify__format_call__format_call_traverse_disj_13_p_0(HeadVar__1_1, Disjuncts_223, HeadVar__3_3, STATE_VARIABLE_FormatCallSites_134_134, STATE_VARIABLE_FormatCallSites_5, STATE_VARIABLE_Counter_135_135, STATE_VARIABLE_Counter_7, STATE_VARIABLE_ConjMaps_136_136, STATE_VARIABLE_ConjMaps_9, STATE_VARIABLE_PredMap_137_137, STATE_VARIABLE_PredMap_11, STATE_VARIABLE_RelevantVars_138_138, STATE_VARIABLE_RelevantVars_13);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_40, (MR_Integer) 1))));
                MR_Word SubGoal_224 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_40, (MR_Integer) 2))));
                MR_Word TermVar_59;
                MR_Word Var_179;
                MR_Word TypeCtorInfo_247_247;

                succeeded = ((((MR_tag((MR_Word) Reason_58)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_58, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  TermVar_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_58, (MR_Integer) 1))));
                  Var_179 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_58, (MR_Integer) 2))) & (MR_Integer) 3);
                  succeeded = (Var_179 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    TypeCtorInfo_247_247 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                    succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_247_247, STATE_VARIABLE_RelevantVars_138_138, TermVar_59);
                    succeeded = !(succeeded);
                  }
                }
                if (succeeded)
                {
                  *STATE_VARIABLE_RelevantVars_13 = STATE_VARIABLE_RelevantVars_138_138;
                  *STATE_VARIABLE_PredMap_11 = STATE_VARIABLE_PredMap_137_137;
                  *STATE_VARIABLE_ConjMaps_9 = STATE_VARIABLE_ConjMaps_136_136;
                  *STATE_VARIABLE_Counter_7 = STATE_VARIABLE_Counter_135_135;
                  *STATE_VARIABLE_FormatCallSites_5 = STATE_VARIABLE_FormatCallSites_134_134;
                }
                else
                {
                  MR_Word Var_180;
                  MR_Word next_value_of_HeadVar__2_2;
                  MR_Word next_value_of_STATE_VARIABLE_FormatCallSites_0_4;
                  MR_Word next_value_of_STATE_VARIABLE_Counter_0_6;
                  MR_Word next_value_of_STATE_VARIABLE_ConjMaps_0_8;
                  MR_Word next_value_of_STATE_VARIABLE_PredMap_0_10;
                  MR_Word next_value_of_STATE_VARIABLE_RelevantVars_0_12;

                  {
                    Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_180, 0) = ((MR_Box) (SubGoal_224));
                    MR_hl_field(MR_mktag(1), Var_180, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__2_2 = Var_180;
                  next_value_of_STATE_VARIABLE_FormatCallSites_0_4 = STATE_VARIABLE_FormatCallSites_134_134;
                  next_value_of_STATE_VARIABLE_Counter_0_6 = STATE_VARIABLE_Counter_135_135;
                  next_value_of_STATE_VARIABLE_ConjMaps_0_8 = STATE_VARIABLE_ConjMaps_136_136;
                  next_value_of_STATE_VARIABLE_PredMap_0_10 = STATE_VARIABLE_PredMap_137_137;
                  next_value_of_STATE_VARIABLE_RelevantVars_0_12 = STATE_VARIABLE_RelevantVars_138_138;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  STATE_VARIABLE_FormatCallSites_0_4 = next_value_of_STATE_VARIABLE_FormatCallSites_0_4;
                  STATE_VARIABLE_Counter_0_6 = next_value_of_STATE_VARIABLE_Counter_0_6;
                  STATE_VARIABLE_ConjMaps_0_8 = next_value_of_STATE_VARIABLE_ConjMaps_0_8;
                  STATE_VARIABLE_PredMap_0_10 = next_value_of_STATE_VARIABLE_PredMap_0_10;
                  STATE_VARIABLE_RelevantVars_0_12 = next_value_of_STATE_VARIABLE_RelevantVars_0_12;
                  continue;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_40, (MR_Integer) 2))));
                MR_Word Then_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_40, (MR_Integer) 3))));
                MR_Word Else_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_40, (MR_Integer) 4))));
                MR_Word ElseId_52;
                MR_Word CondThenId_53;
                MR_Word ThenConj_54;
                MR_Word CondConj_55;
                MR_Word STATE_VARIABLE_FormatCallSites_193_193;
                MR_Word STATE_VARIABLE_Counter_194_194;
                MR_Word STATE_VARIABLE_ConjMaps_195_195;
                MR_Word STATE_VARIABLE_PredMap_196_196;
                MR_Word STATE_VARIABLE_RelevantVars_197_197;
                MR_Word STATE_VARIABLE_PredMap_198_198;
                MR_Word STATE_VARIABLE_Counter_199_199;
                MR_Word Var_200;
                MR_Word STATE_VARIABLE_PredMap_204_204;

                check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(HeadVar__1_1, Else_51, &ElseId_52, STATE_VARIABLE_FormatCallSites_134_134, &STATE_VARIABLE_FormatCallSites_193_193, STATE_VARIABLE_Counter_135_135, &STATE_VARIABLE_Counter_194_194, STATE_VARIABLE_ConjMaps_136_136, &STATE_VARIABLE_ConjMaps_195_195, STATE_VARIABLE_PredMap_137_137, &STATE_VARIABLE_PredMap_196_196, STATE_VARIABLE_RelevantVars_138_138, &STATE_VARIABLE_RelevantVars_197_197);
                mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), ((MR_Box) (ElseId_52)), ((MR_Box) (HeadVar__3_3)), STATE_VARIABLE_PredMap_196_196, &STATE_VARIABLE_PredMap_198_198);
                check_hlds__simplify__format_call__alloc_id_3_p_0(&CondThenId_53, STATE_VARIABLE_Counter_194_194, &STATE_VARIABLE_Counter_199_199);
                hlds__hlds_goal__goal_to_conj_list_2_p_0(Then_50, &ThenConj_54);
                hlds__hlds_goal__goal_to_conj_list_2_p_0(Cond_49, &CondConj_55);
                Var_200 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CondConj_55, ThenConj_54);
                check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(HeadVar__1_1, Var_200, CondThenId_53, STATE_VARIABLE_FormatCallSites_193_193, STATE_VARIABLE_FormatCallSites_5, STATE_VARIABLE_Counter_199_199, STATE_VARIABLE_Counter_7, STATE_VARIABLE_ConjMaps_195_195, STATE_VARIABLE_ConjMaps_9, STATE_VARIABLE_PredMap_198_198, &STATE_VARIABLE_PredMap_204_204, STATE_VARIABLE_RelevantVars_197_197, STATE_VARIABLE_RelevantVars_13);
                mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), ((MR_Box) (CondThenId_53)), ((MR_Box) (HeadVar__3_3)), STATE_VARIABLE_PredMap_204_204, STATE_VARIABLE_PredMap_11);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_40, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_112)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.format_call.format_call_traverse_conj\'/13", (MR_String) "bi_implication");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_112, (MR_Integer) 4))));
                      MR_Word OrElseGoals_118 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_112, (MR_Integer) 5))));
                      MR_Word Var_147;

                      {
                        Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (MainGoal_117));
                        MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (OrElseGoals_118));
                      }
                      check_hlds__simplify__format_call__format_call_traverse_disj_13_p_0(HeadVar__1_1, Var_147, HeadVar__3_3, STATE_VARIABLE_FormatCallSites_134_134, STATE_VARIABLE_FormatCallSites_5, STATE_VARIABLE_Counter_135_135, STATE_VARIABLE_Counter_7, STATE_VARIABLE_ConjMaps_136_136, STATE_VARIABLE_ConjMaps_9, STATE_VARIABLE_PredMap_137_137, STATE_VARIABLE_PredMap_11, STATE_VARIABLE_RelevantVars_138_138, STATE_VARIABLE_RelevantVars_13);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word STATE_VARIABLE_PredMap_144_144;
                      MR_Word SubGoal_234 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_112, (MR_Integer) 2))));
                      MR_Word SubGoalId_235;

                      check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(HeadVar__1_1, SubGoal_234, &SubGoalId_235, STATE_VARIABLE_FormatCallSites_134_134, STATE_VARIABLE_FormatCallSites_5, STATE_VARIABLE_Counter_135_135, STATE_VARIABLE_Counter_7, STATE_VARIABLE_ConjMaps_136_136, STATE_VARIABLE_ConjMaps_9, STATE_VARIABLE_PredMap_137_137, &STATE_VARIABLE_PredMap_144_144, STATE_VARIABLE_RelevantVars_138_138, STATE_VARIABLE_RelevantVars_13);
                      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), ((MR_Box) (SubGoalId_235)), ((MR_Box) (HeadVar__3_3)), STATE_VARIABLE_PredMap_144_144, STATE_VARIABLE_PredMap_11);
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

void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_disj_arms_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word ContainingId_3,
  MR_Word STATE_VARIABLE_FormatCallSites_0_4,
  MR_Word * STATE_VARIABLE_FormatCallSites_5,
  MR_Word STATE_VARIABLE_Counter_0_6,
  MR_Word * STATE_VARIABLE_Counter_7,
  MR_Word STATE_VARIABLE_ConjMaps_0_8,
  MR_Word * STATE_VARIABLE_ConjMaps_9,
  MR_Word STATE_VARIABLE_PredMap_0_10,
  MR_Word * STATE_VARIABLE_PredMap_11,
  MR_Word * HeadVar__12_12)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__12_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_PredMap_11 = STATE_VARIABLE_PredMap_0_10;
    *STATE_VARIABLE_ConjMaps_9 = STATE_VARIABLE_ConjMaps_0_8;
    *STATE_VARIABLE_Counter_7 = STATE_VARIABLE_Counter_0_6;
    *STATE_VARIABLE_FormatCallSites_5 = STATE_VARIABLE_FormatCallSites_0_4;
  }
  else
  {
    MR_Word Goal_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word DisjId_36;
    MR_Word HeadRelevantVars_37;
    MR_Word TailRelevantVars_38;
    MR_Word STATE_VARIABLE_FormatCallSites_47_47;
    MR_Word STATE_VARIABLE_Counter_48_48;
    MR_Word STATE_VARIABLE_ConjMaps_49_49;
    MR_Word STATE_VARIABLE_PredMap_50_50;
    MR_Word Var_51;
    MR_Word STATE_VARIABLE_PredMap_52_52;

    Var_51 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(ModuleInfo_1, Goal_28, &DisjId_36, STATE_VARIABLE_FormatCallSites_0_4, &STATE_VARIABLE_FormatCallSites_47_47, STATE_VARIABLE_Counter_0_6, &STATE_VARIABLE_Counter_48_48, STATE_VARIABLE_ConjMaps_0_8, &STATE_VARIABLE_ConjMaps_49_49, STATE_VARIABLE_PredMap_0_10, &STATE_VARIABLE_PredMap_50_50, Var_51, &HeadRelevantVars_37);
    mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), ((MR_Box) (DisjId_36)), ((MR_Box) (ContainingId_3)), STATE_VARIABLE_PredMap_50_50, &STATE_VARIABLE_PredMap_52_52);
    check_hlds__simplify__format_call__format_call_traverse_disj_arms_12_p_0(ModuleInfo_1, Goals_29, ContainingId_3, STATE_VARIABLE_FormatCallSites_47_47, STATE_VARIABLE_FormatCallSites_5, STATE_VARIABLE_Counter_48_48, STATE_VARIABLE_Counter_7, STATE_VARIABLE_ConjMaps_49_49, STATE_VARIABLE_ConjMaps_9, STATE_VARIABLE_PredMap_52_52, STATE_VARIABLE_PredMap_11, &TailRelevantVars_38);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__12_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadRelevantVars_37));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailRelevantVars_38));
    }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_disj_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word Disjuncts_15,
  MR_Word CurId_16,
  MR_Word STATE_VARIABLE_FormatCallSites_0_24,
  MR_Word * STATE_VARIABLE_FormatCallSites_25,
  MR_Word STATE_VARIABLE_Counter_0_26,
  MR_Word * STATE_VARIABLE_Counter_27,
  MR_Word STATE_VARIABLE_ConjMaps_0_28,
  MR_Word * STATE_VARIABLE_ConjMaps_29,
  MR_Word STATE_VARIABLE_PredMap_0_30,
  MR_Word * STATE_VARIABLE_PredMap_31,
  MR_Word STATE_VARIABLE_RelevantVars_0_32,
  MR_Word * STATE_VARIABLE_RelevantVars_33)
{
  {
    MR_Word DisjRelevantVarSets_22;
    MR_Word DisjRelevantVars_23;

    check_hlds__simplify__format_call__format_call_traverse_disj_arms_12_p_0(ModuleInfo_14, Disjuncts_15, CurId_16, STATE_VARIABLE_FormatCallSites_0_24, STATE_VARIABLE_FormatCallSites_25, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27, STATE_VARIABLE_ConjMaps_0_28, STATE_VARIABLE_ConjMaps_29, STATE_VARIABLE_PredMap_0_30, STATE_VARIABLE_PredMap_31, &DisjRelevantVarSets_22);
    DisjRelevantVars_23 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DisjRelevantVarSets_22);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DisjRelevantVars_23, STATE_VARIABLE_RelevantVars_0_32, STATE_VARIABLE_RelevantVars_33);
  }
}

void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word Goal_15,
  MR_Word * CurId_16,
  MR_Word STATE_VARIABLE_FormatCallSites_0_23,
  MR_Word * STATE_VARIABLE_FormatCallSites_24,
  MR_Word STATE_VARIABLE_Counter_0_25,
  MR_Word * STATE_VARIABLE_Counter_26,
  MR_Word STATE_VARIABLE_ConjMaps_0_27,
  MR_Word * STATE_VARIABLE_ConjMaps_28,
  MR_Word STATE_VARIABLE_PredMap_0_29,
  MR_Word * STATE_VARIABLE_PredMap_30,
  MR_Word STATE_VARIABLE_RelevantVars_0_31,
  MR_Word * STATE_VARIABLE_RelevantVars_32)
{
  {
    MR_Word GoalConj_22;
    MR_Word STATE_VARIABLE_Counter_33_33;
    MR_Integer N_43;

    mercury__counter__allocate_3_p_0(&N_43, STATE_VARIABLE_Counter_0_25, &STATE_VARIABLE_Counter_33_33);
    *CurId_16 = (MR_Word) (N_43);
    hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal_15, &GoalConj_22);
    check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(ModuleInfo_14, GoalConj_22, *CurId_16, STATE_VARIABLE_FormatCallSites_0_23, STATE_VARIABLE_FormatCallSites_24, STATE_VARIABLE_Counter_33_33, STATE_VARIABLE_Counter_26, STATE_VARIABLE_ConjMaps_0_27, STATE_VARIABLE_ConjMaps_28, STATE_VARIABLE_PredMap_0_29, STATE_VARIABLE_PredMap_30, STATE_VARIABLE_RelevantVars_0_31, STATE_VARIABLE_RelevantVars_32);
  }
}

void MR_CALL 
check_hlds__simplify__format_call__alloc_id_3_p_0(
  MR_Word * ConjId_4,
  MR_Word STATE_VARIABLE_Counter_0_7,
  MR_Word * STATE_VARIABLE_Counter_8)
{
  {
    MR_Integer N_6;

    mercury__counter__allocate_3_p_0(&N_6, STATE_VARIABLE_Counter_0_7, STATE_VARIABLE_Counter_8);
    *ConjId_4 = (MR_Word) (N_6);
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_unify_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__simplify__format_call__IntroducedFrom__pred__format_call_traverse_unify__945__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_unify_9_p_0(
  MR_Word Unification_10,
  MR_Word GoalInfo_11,
  MR_Word CurId_12,
  MR_Word STATE_VARIABLE_ConjMaps_0_49,
  MR_Word * STATE_VARIABLE_ConjMaps_50,
  MR_Word STATE_VARIABLE_PredMap_0_51,
  MR_Word * STATE_VARIABLE_PredMap_52,
  MR_Word STATE_VARIABLE_RelevantVars_0_53,
  MR_Word * STATE_VARIABLE_RelevantVars_54)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Unification_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word CellVar_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_10, (MR_Integer) 0))));
          MR_Word ConsId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_10, (MR_Integer) 1))));
          MR_Word ArgVars_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unification_10, (MR_Integer) 2))));

          succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_RelevantVars_0_53, CellVar_18);
          if (succeeded)
          {
            MR_String StringConst_25;

            succeeded = ((((MR_tag((MR_Word) ConsId_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_19, (MR_Integer) 0)))) == (MR_Integer) 17)));
            if (succeeded)
            {
              StringConst_25 = ((MR_String) ((MR_hl_field(MR_mktag(3), ConsId_19, (MR_Integer) 1))));
              {
                MR_Word Var_55;
                MR_Word Var_60;

                {
                  Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_4[0]));
                  MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (check_hlds__simplify__format_call__format_call_traverse_unify_9_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (ArgVars_20));
                  MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                mercury__require__expect_3_p_0(Var_55, (MR_String) "predicate \140check_hlds.simplify.format_call.format_call_traverse_unify\'/9", (MR_String) "string constant with args");
                parse_tree__set_of_var__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CellVar_18, STATE_VARIABLE_RelevantVars_0_53, STATE_VARIABLE_RelevantVars_54);
                {
                  Var_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (StringConst_25));
                }
                check_hlds__simplify__format_call__add_to_string_map_5_p_0(CurId_12, CellVar_18, Var_60, STATE_VARIABLE_ConjMaps_0_49, STATE_VARIABLE_ConjMaps_50);
              }
            }
            else
            {
              MR_Word SymName_26;
              MR_Integer Arity_27;
              MR_Word TypeCtor_28;
              MR_Word Var_94;

              succeeded = ((((MR_tag((MR_Word) ConsId_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                SymName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_19, (MR_Integer) 1))));
                Arity_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_19, (MR_Integer) 2))));
                TypeCtor_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_19, (MR_Integer) 3))));
                Var_94 = parse_tree__builtin_lib_types__list_type_ctor_0_f_0();
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_28, Var_94);
              }
              if (succeeded)
              {
                MR_String Functor_29;
                MR_Word List_33;
                MR_Word STATE_VARIABLE_RelevantVars_66_66;
                MR_Word ListPrime_32;

                Functor_29 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_26);
                if ((ArgVars_20 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  succeeded = (strcmp(Functor_29, (MR_String) "[]") == 0);
                  if (succeeded)
                  {
                    succeeded = (Arity_27 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      ListPrime_32 = (MR_Word) ((MR_Unsigned) 0U);
                      succeeded = MR_TRUE;
                    }
                  }
                }
                else
                {
                  MR_Word ArgVar1_30;
                  MR_Word ArgVar2_31;
                  MR_Word Var_62;
                  MR_Word Var_63;

                  succeeded = (strcmp(Functor_29, (MR_String) "[|]") == 0);
                  if (succeeded)
                  {
                    succeeded = (Arity_27 == (MR_Integer) 2);
                    if (succeeded)
                    {
                      ArgVar1_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_20, (MR_Integer) 0))));
                      Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_20, (MR_Integer) 1))));
                      succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ArgVar2_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_62, (MR_Integer) 0))));
                        Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_62, (MR_Integer) 1))));
                        succeeded = (Var_63 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          {
                            ListPrime_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ListPrime_32, 0) = ((MR_Box) (ArgVar1_30));
                            MR_hl_field(MR_mktag(1), ListPrime_32, 1) = ((MR_Box) (ArgVar2_31));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                  List_33 = ListPrime_32;
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.format_call.format_call_traverse_unify\'/9", (MR_String) "unexpected list functor");
                    return;
                  }
                parse_tree__set_of_var__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CellVar_18, STATE_VARIABLE_RelevantVars_0_53, &STATE_VARIABLE_RelevantVars_66_66);
                parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_20, STATE_VARIABLE_RelevantVars_66_66, STATE_VARIABLE_RelevantVars_54);
                check_hlds__simplify__format_call__add_to_list_map_5_p_0(CurId_12, CellVar_18, List_33, STATE_VARIABLE_ConjMaps_0_49, STATE_VARIABLE_ConjMaps_50);
              }
              else
              {
                MR_Word SymName_83;
                MR_Integer Arity_84;
                MR_Word TypeCtor_79;
                MR_Word Var_95;

                succeeded = ((((MR_tag((MR_Word) ConsId_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  SymName_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_19, (MR_Integer) 1))));
                  Arity_84 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsId_19, (MR_Integer) 2))));
                  TypeCtor_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsId_19, (MR_Integer) 3))));
                  Var_95 = parse_tree__builtin_lib_types__poly_type_type_ctor_0_f_0();
                  succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_79, Var_95);
                }
                if (succeeded)
                {
                  MR_Word TypeCtorInfo_93_93;
                  MR_Word VarPolyType_37;
                  MR_Word ArgVar_34;
                  MR_Word Var_69;

                  succeeded = (Arity_84 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    succeeded = (ArgVars_20 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      ArgVar_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_20, (MR_Integer) 0))));
                      Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_20, (MR_Integer) 1))));
                      succeeded = (Var_69 == (MR_Word) ((MR_Unsigned) 0U));
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word Context_35;
                    MR_String Functor_80;
                    MR_Word VarPolyTypePrime_36;
                    MR_Integer lo_0;
                    MR_Integer hi_1;
                    MR_Integer mid_2;
                    MR_Integer result_3;

                    Context_35 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                    Functor_80 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_83);
                    // binary string jump switch
                    ;
                    lo_0 = (MR_Integer) 0;
                    hi_1 = (MR_Integer) 3;
                    do
                    {
                      mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
                      result_3 = MR_strcmp(Functor_80, ((&check_hlds__simplify__format_call_vector_common_5[0 + mid_2]))->check_hlds__simplify__format_call__vector_common_type_5_0__vct_5_f_0);
                      if ((result_3 == (MR_Integer) 0))
                      {
                        switch (((&check_hlds__simplify__format_call_vector_common_5[0 + mid_2]))->check_hlds__simplify__format_call__vector_common_type_5_0__vct_5_f_1) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              // case "c"
                              ;
                              {
                                VarPolyTypePrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), VarPolyTypePrime_36, 0) = ((MR_Box) (ArgVar_34));
                                MR_hl_field(MR_mktag(3), VarPolyTypePrime_36, 1) = ((MR_Box) (Context_35));
                              }
                              succeeded = MR_TRUE;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              // case "f"
                              ;
                              {
                                VarPolyTypePrime_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), VarPolyTypePrime_36, 0) = ((MR_Box) (ArgVar_34));
                                MR_hl_field(MR_mktag(0), VarPolyTypePrime_36, 1) = ((MR_Box) (Context_35));
                              }
                              succeeded = MR_TRUE;
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              // case "i"
                              ;
                              {
                                VarPolyTypePrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), VarPolyTypePrime_36, 0) = ((MR_Box) (ArgVar_34));
                                MR_hl_field(MR_mktag(1), VarPolyTypePrime_36, 1) = ((MR_Box) (Context_35));
                              }
                              succeeded = MR_TRUE;
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              // case "s"
                              ;
                              {
                                VarPolyTypePrime_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(2), VarPolyTypePrime_36, 0) = ((MR_Box) (ArgVar_34));
                                MR_hl_field(MR_mktag(2), VarPolyTypePrime_36, 1) = ((MR_Box) (Context_35));
                              }
                              succeeded = MR_TRUE;
                            }
                            break;
                        }
                        // jump out of search loop
                        ;
                        goto label_0;
                      }
                      else
                      if ((result_3 < (MR_Integer) 0))
                        hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
                      else
                        lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
                    }
                    while ((lo_0 <= hi_1));
                    succeeded = MR_FALSE;
                  label_0:;
                    if (succeeded)
                      VarPolyType_37 = VarPolyTypePrime_36;
                    else
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.format_call.format_call_traverse_unify\'/9", (MR_String) "unexpected poly_type functor");
                        return;
                      }
                  }
                  else
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.format_call.format_call_traverse_unify\'/9", (MR_String) "poly_type arity mismatch");
                      return;
                    }
                  TypeCtorInfo_93_93 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                  parse_tree__set_of_var__delete_3_p_0(TypeCtorInfo_93_93, CellVar_18, STATE_VARIABLE_RelevantVars_0_53, STATE_VARIABLE_RelevantVars_54);
                  check_hlds__simplify__format_call__add_to_element_map_5_p_0(CurId_12, CellVar_18, VarPolyType_37, STATE_VARIABLE_ConjMaps_0_49, STATE_VARIABLE_ConjMaps_50);
                }
                else
                {
                  *STATE_VARIABLE_RelevantVars_54 = STATE_VARIABLE_RelevantVars_0_53;
                  *STATE_VARIABLE_ConjMaps_50 = STATE_VARIABLE_ConjMaps_0_49;
                }
              }
            }
          }
          else
          {
            *STATE_VARIABLE_RelevantVars_54 = STATE_VARIABLE_RelevantVars_0_53;
            *STATE_VARIABLE_ConjMaps_50 = STATE_VARIABLE_ConjMaps_0_49;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_ConjMaps_50 = STATE_VARIABLE_ConjMaps_0_49;
          *STATE_VARIABLE_RelevantVars_54 = STATE_VARIABLE_RelevantVars_0_53;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TargetVar_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_10, (MR_Integer) 0))));
          MR_Word SourceVar_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_10, (MR_Integer) 1))));

          succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_RelevantVars_0_53, TargetVar_16);
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_RelevantVars_76_76;

            parse_tree__set_of_var__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TargetVar_16, STATE_VARIABLE_RelevantVars_0_53, &STATE_VARIABLE_RelevantVars_76_76);
            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SourceVar_17, STATE_VARIABLE_RelevantVars_76_76, STATE_VARIABLE_RelevantVars_54);
            check_hlds__simplify__format_call__add_to_fc_eqv_map_5_p_0(CurId_12, TargetVar_16, SourceVar_17, STATE_VARIABLE_ConjMaps_0_49, STATE_VARIABLE_ConjMaps_50);
          }
          else
          {
            *STATE_VARIABLE_RelevantVars_54 = STATE_VARIABLE_RelevantVars_0_53;
            *STATE_VARIABLE_ConjMaps_50 = STATE_VARIABLE_ConjMaps_0_49;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Unification_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_ConjMaps_50 = STATE_VARIABLE_ConjMaps_0_49;
              *STATE_VARIABLE_RelevantVars_54 = STATE_VARIABLE_RelevantVars_0_53;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_ConjMaps_50 = STATE_VARIABLE_ConjMaps_0_49;
              *STATE_VARIABLE_RelevantVars_54 = STATE_VARIABLE_RelevantVars_0_53;
            }
            break;
        }
        break;
    }
    *STATE_VARIABLE_PredMap_52 = STATE_VARIABLE_PredMap_0_51;
  }
}

void MR_CALL 
check_hlds__simplify__format_call__add_to_fc_eqv_map_5_p_0(
  MR_Word ConjId_6,
  MR_Word Var_7,
  MR_Word EqvVar_8,
  MR_Word STATE_VARIABLE_ConjMaps_0_17,
  MR_Word * STATE_VARIABLE_ConjMaps_18)
{
  {
    MR_bool succeeded;
    MR_Word ConjMap0_10;
    MR_Box conv0_ConjMap0_10;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), STATE_VARIABLE_ConjMaps_0_17, ((MR_Box) (ConjId_6)), &conv0_ConjMap0_10);
    if (succeeded)
    {
      ConjMap0_10 = ((MR_Word) (conv0_ConjMap0_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word StringMap_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjMap0_10, (MR_Integer) 0))));
      MR_Word ListMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjMap0_10, (MR_Integer) 1))));
      MR_Word ElementMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjMap0_10, (MR_Integer) 2))));
      MR_Word EqvMap0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjMap0_10, (MR_Integer) 3))));
      MR_Word EqvMap_15;
      MR_Word ConjMap_16;

      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), ((MR_Box) (Var_7)), ((MR_Box) (EqvVar_8)), EqvMap0_14, &EqvMap_15);
      {
        ConjMap_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConjMap_16, 0) = ((MR_Box) (StringMap_11));
        MR_hl_field(MR_mktag(0), ConjMap_16, 1) = ((MR_Box) (ListMap_12));
        MR_hl_field(MR_mktag(0), ConjMap_16, 2) = ((MR_Box) (ElementMap_13));
        MR_hl_field(MR_mktag(0), ConjMap_16, 3) = ((MR_Box) (EqvMap_15));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), ((MR_Box) (ConjId_6)), ((MR_Box) (ConjMap_16)), STATE_VARIABLE_ConjMaps_0_17, STATE_VARIABLE_ConjMaps_18);
    }
    else
    {
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word EqvMap_24;
      MR_Word ConjMap_25;

      EqvMap_24 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), ((MR_Box) (Var_7)), ((MR_Box) (EqvVar_8)));
      Var_20 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0));
      Var_21 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0));
      Var_22 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0));
      {
        ConjMap_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConjMap_25, 0) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), ConjMap_25, 1) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), ConjMap_25, 2) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(0), ConjMap_25, 3) = ((MR_Box) (EqvMap_24));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), ((MR_Box) (ConjId_6)), ((MR_Box) (ConjMap_25)), STATE_VARIABLE_ConjMaps_0_17, STATE_VARIABLE_ConjMaps_18);
    }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__add_to_element_map_5_p_0(
  MR_Word ConjId_6,
  MR_Word Var_7,
  MR_Word Element_8,
  MR_Word STATE_VARIABLE_ConjMaps_0_18,
  MR_Word * STATE_VARIABLE_ConjMaps_19)
{
  {
    MR_bool succeeded;
    MR_Word ConjMap0_11;
    MR_Box conv0_ConjMap0_11;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), STATE_VARIABLE_ConjMaps_0_18, ((MR_Box) (ConjId_6)), &conv0_ConjMap0_11);
    if (succeeded)
    {
      ConjMap0_11 = ((MR_Word) (conv0_ConjMap0_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word StringMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjMap0_11, (MR_Integer) 0))));
      MR_Word ListMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjMap0_11, (MR_Integer) 1))));
      MR_Word ElementMap0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjMap0_11, (MR_Integer) 2))));
      MR_Word EqvMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjMap0_11, (MR_Integer) 3))));
      MR_Word ElementMap_16;
      MR_Word ConjMap_17;

      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0), ((MR_Box) (Var_7)), ((MR_Box) (Element_8)), ElementMap0_14, &ElementMap_16);
      {
        ConjMap_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConjMap_17, 0) = ((MR_Box) (StringMap_12));
        MR_hl_field(MR_mktag(0), ConjMap_17, 1) = ((MR_Box) (ListMap_13));
        MR_hl_field(MR_mktag(0), ConjMap_17, 2) = ((MR_Box) (ElementMap_16));
        MR_hl_field(MR_mktag(0), ConjMap_17, 3) = ((MR_Box) (EqvMap_15));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), ((MR_Box) (ConjId_6)), ((MR_Box) (ConjMap_17)), STATE_VARIABLE_ConjMaps_0_18, STATE_VARIABLE_ConjMaps_19);
    }
    else
    {
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word ElementMap_33;
      MR_Word ConjMap_34;

      ElementMap_33 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0), ((MR_Box) (Var_7)), ((MR_Box) (Element_8)));
      Var_29 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0));
      Var_30 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0));
      Var_31 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]));
      {
        ConjMap_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConjMap_34, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), ConjMap_34, 1) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), ConjMap_34, 2) = ((MR_Box) (ElementMap_33));
        MR_hl_field(MR_mktag(0), ConjMap_34, 3) = ((MR_Box) (Var_31));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), ((MR_Box) (ConjId_6)), ((MR_Box) (ConjMap_34)), STATE_VARIABLE_ConjMaps_0_18, STATE_VARIABLE_ConjMaps_19);
    }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__add_to_list_map_5_p_0(
  MR_Word ConjId_6,
  MR_Word Var_7,
  MR_Word ListState_8,
  MR_Word STATE_VARIABLE_ConjMaps_0_18,
  MR_Word * STATE_VARIABLE_ConjMaps_19)
{
  {
    MR_bool succeeded;
    MR_Word ConjMap0_11;
    MR_Box conv0_ConjMap0_11;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), STATE_VARIABLE_ConjMaps_0_18, ((MR_Box) (ConjId_6)), &conv0_ConjMap0_11);
    if (succeeded)
    {
      ConjMap0_11 = ((MR_Word) (conv0_ConjMap0_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word StringMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjMap0_11, (MR_Integer) 0))));
      MR_Word ListMap0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjMap0_11, (MR_Integer) 1))));
      MR_Word ElementMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjMap0_11, (MR_Integer) 2))));
      MR_Word EqvMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjMap0_11, (MR_Integer) 3))));
      MR_Word ListMap_16;
      MR_Word ConjMap_17;

      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0), ((MR_Box) (Var_7)), ((MR_Box) (ListState_8)), ListMap0_13, &ListMap_16);
      {
        ConjMap_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConjMap_17, 0) = ((MR_Box) (StringMap_12));
        MR_hl_field(MR_mktag(0), ConjMap_17, 1) = ((MR_Box) (ListMap_16));
        MR_hl_field(MR_mktag(0), ConjMap_17, 2) = ((MR_Box) (ElementMap_14));
        MR_hl_field(MR_mktag(0), ConjMap_17, 3) = ((MR_Box) (EqvMap_15));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), ((MR_Box) (ConjId_6)), ((MR_Box) (ConjMap_17)), STATE_VARIABLE_ConjMaps_0_18, STATE_VARIABLE_ConjMaps_19);
    }
    else
    {
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word ListMap_33;
      MR_Word ConjMap_34;

      ListMap_33 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0), ((MR_Box) (Var_7)), ((MR_Box) (ListState_8)));
      Var_29 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0));
      Var_30 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0));
      Var_31 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]));
      {
        ConjMap_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConjMap_34, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), ConjMap_34, 1) = ((MR_Box) (ListMap_33));
        MR_hl_field(MR_mktag(0), ConjMap_34, 2) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), ConjMap_34, 3) = ((MR_Box) (Var_31));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), ((MR_Box) (ConjId_6)), ((MR_Box) (ConjMap_34)), STATE_VARIABLE_ConjMaps_0_18, STATE_VARIABLE_ConjMaps_19);
    }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__add_to_string_map_5_p_0(
  MR_Word ConjId_6,
  MR_Word Var_7,
  MR_Word StringState_8,
  MR_Word STATE_VARIABLE_ConjMaps_0_18,
  MR_Word * STATE_VARIABLE_ConjMaps_19)
{
  {
    MR_bool succeeded;
    MR_Word ConjMap0_11;
    MR_Box conv0_ConjMap0_11;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), STATE_VARIABLE_ConjMaps_0_18, ((MR_Box) (ConjId_6)), &conv0_ConjMap0_11);
    if (succeeded)
    {
      ConjMap0_11 = ((MR_Word) (conv0_ConjMap0_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word StringMap0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjMap0_11, (MR_Integer) 0))));
      MR_Word ListMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjMap0_11, (MR_Integer) 1))));
      MR_Word ElementMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjMap0_11, (MR_Integer) 2))));
      MR_Word EqvMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConjMap0_11, (MR_Integer) 3))));
      MR_Word StringMap_16;
      MR_Word ConjMap_17;

      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0), ((MR_Box) (Var_7)), ((MR_Box) (StringState_8)), StringMap0_12, &StringMap_16);
      {
        ConjMap_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConjMap_17, 0) = ((MR_Box) (StringMap_16));
        MR_hl_field(MR_mktag(0), ConjMap_17, 1) = ((MR_Box) (ListMap_13));
        MR_hl_field(MR_mktag(0), ConjMap_17, 2) = ((MR_Box) (ElementMap_14));
        MR_hl_field(MR_mktag(0), ConjMap_17, 3) = ((MR_Box) (EqvMap_15));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), ((MR_Box) (ConjId_6)), ((MR_Box) (ConjMap_17)), STATE_VARIABLE_ConjMaps_0_18, STATE_VARIABLE_ConjMaps_19);
    }
    else
    {
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word StringMap_33;
      MR_Word ConjMap_34;

      StringMap_33 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0), ((MR_Box) (Var_7)), ((MR_Box) (StringState_8)));
      Var_29 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0));
      Var_30 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0));
      Var_31 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]));
      {
        ConjMap_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConjMap_34, 0) = ((MR_Box) (StringMap_33));
        MR_hl_field(MR_mktag(0), ConjMap_34, 1) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), ConjMap_34, 2) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), ConjMap_34, 3) = ((MR_Box) (Var_31));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), ((MR_Box) (ConjId_6)), ((MR_Box) (ConjMap_34)), STATE_VARIABLE_ConjMaps_0_18, STATE_VARIABLE_ConjMaps_19);
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call__is_format_call_kind_and_vars_7_p_0(
  MR_Word ModuleName_8,
  MR_String Name_9,
  MR_Word Args_10,
  MR_Word GoalInfo_11,
  MR_Word * Kind_12,
  MR_Word * FormatStringVar_13,
  MR_Word * FormattedValuesVar_14)
{
  {
    MR_bool succeeded = (strcmp(Name_9, (MR_String) "format") == 0);
    MR_Word Var_55;

    if (succeeded)
    {
      Var_55 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_8, Var_55);
      if (succeeded)
      {
        MR_Word ResultVar_15;
        MR_Word Context_16;
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word Var_25;

        succeeded = (Args_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *FormatStringVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_10, (MR_Integer) 0))));
          Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_10, (MR_Integer) 1))));
          succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            *FormattedValuesVar_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 0))));
            Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 1))));
            succeeded = (Var_24 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ResultVar_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0))));
              Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 1))));
              succeeded = (Var_25 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Kind_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Context_16));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ResultVar_15));
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
      else
      {
        MR_Word Var_56;

        Var_56 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_8, Var_56);
        if (succeeded)
        {
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_66;

          succeeded = (Args_10 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_10, (MR_Integer) 0))));
            Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_10, (MR_Integer) 1))));
            succeeded = (Var_59 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_59, (MR_Integer) 0))));
              Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_59, (MR_Integer) 1))));
              succeeded = (Var_61 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_61, (MR_Integer) 0))));
                Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_61, (MR_Integer) 1))));
                succeeded = (Var_63 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_63, (MR_Integer) 0))));
                  Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_63, (MR_Integer) 1))));
                  if ((Var_65 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Context_45;

                    *FormatStringVar_13 = Var_60;
                    *FormattedValuesVar_14 = Var_62;
                    Context_45 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *Kind_12 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Context_45));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_64));
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_66));
                    }
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word Var_30;
                    MR_Word Context_46;
                    MR_Word IOOut_48;

                    *FormatStringVar_13 = Var_62;
                    *FormattedValuesVar_14 = Var_64;
                    IOOut_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_65, (MR_Integer) 0))));
                    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_65, (MR_Integer) 1))));
                    succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Context_46 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        *Kind_12 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Context_46));
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Var_60));
                        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Var_66));
                        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (IOOut_48));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          MR_Word TC_InfoVarForStream_20;
          MR_Word StateInVar_21;
          MR_Word StateOutVar_22;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Context_50;
          MR_Word StreamVar_51;
          MR_Word Var_58;

          Var_58 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[11])));
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_8, Var_58);
          if (succeeded)
          {
            succeeded = (Args_10 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              TC_InfoVarForStream_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_10, (MR_Integer) 0))));
              Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_10, (MR_Integer) 1))));
              succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                StreamVar_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 0))));
                Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 1))));
                succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  *FormatStringVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0))));
                  Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1))));
                  succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    *FormattedValuesVar_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0))));
                    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1))));
                    succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      StateInVar_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0))));
                      Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 1))));
                      succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        StateOutVar_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 0))));
                        Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 1))));
                        succeeded = (Var_44 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Context_50 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                            *Kind_12 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Context_50));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TC_InfoVarForStream_20));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (StreamVar_51));
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (StateInVar_21));
                            MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (StateOutVar_22));
                          }
                          succeeded = MR_TRUE;
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

MR_bool MR_CALL 
check_hlds__simplify__format_call__is_format_call_3_p_0(
  MR_Word ModuleName_4,
  MR_String Name_5,
  MR_Word Args_6)
{
  {
    MR_bool succeeded = (strcmp(Name_5, (MR_String) "format") == 0);
    MR_Word Var_63;

    if (succeeded)
    {
      Var_63 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_4, Var_63);
      if (succeeded)
      {
        MR_Word Var_16;
        MR_Word Var_17;
        MR_Word Var_18;

        succeeded = (Args_6 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 1))));
          succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 1))));
            succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 1))));
              succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
      }
      else
      {
        MR_Word Var_64;

        Var_64 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_4, Var_64);
        if (succeeded)
        {
          MR_Word Var_67;
          MR_Word Var_69;
          MR_Word Var_71;
          MR_Word Var_73;

          succeeded = (Args_6 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 1))));
            succeeded = (Var_67 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_67, (MR_Integer) 1))));
              succeeded = (Var_69 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_69, (MR_Integer) 1))));
                succeeded = (Var_71 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 1))));
                  if ((Var_73 == (MR_Word) ((MR_Unsigned) 0U)))
                    succeeded = MR_TRUE;
                  else
                  {
                    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_73, (MR_Integer) 1))));

                    succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
              }
            }
          }
        }
        else
        {
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Word Var_34;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_66;

          Var_66 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[11])));
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_4, Var_66);
          if (succeeded)
          {
            succeeded = (Args_6 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 1))));
              succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 1))));
                succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 1))));
                  succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 1))));
                    succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 1))));
                      succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_36, (MR_Integer) 1))));
                        succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 0U));
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

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__format_call____Unify____conj_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__format_call____Compare____conj_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__format_call____Unify____conj_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__format_call____Compare____conj_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__format_call____Unify____conj_maps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__format_call____Compare____conj_maps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_pred_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__format_call____Unify____conj_pred_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_pred_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__format_call____Compare____conj_pred_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_string_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__format_call____Unify____follow_string_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_string_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__format_call____Compare____follow_string_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__format_call____Unify____format_call_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__format_call____Compare____format_call_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_site_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__format_call____Unify____format_call_site_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_site_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__format_call____Compare____format_call_site_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_element_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__format_call____Unify____list_element_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_element_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__format_call____Compare____list_element_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____maybe_generate_implicit_stream_warnings_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__format_call____Unify____maybe_generate_implicit_stream_warnings_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____maybe_generate_implicit_stream_warnings_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__format_call____Compare____maybe_generate_implicit_stream_warnings_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____maybe_opt_format_calls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__format_call____Unify____maybe_opt_format_calls_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____maybe_opt_format_calls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__format_call____Compare____maybe_opt_format_calls_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__format_call____Unify____string_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__format_call____Compare____string_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__format_call____Unify____string_state_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__format_call____Compare____string_state_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__simplify__format_call__init(void)
{
}

void mercury__check_hlds__simplify__format_call__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_maps_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_pred_map_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_eqv_map_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_goal_id_map_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_follow_skeleton_result_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_follow_string_result_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_kind_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_site_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_element_map_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_map_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_maybe_generate_implicit_stream_warnings_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_maybe_opt_format_calls_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_map_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0);
}

void mercury__check_hlds__simplify__format_call__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__format_call__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.format_call.
