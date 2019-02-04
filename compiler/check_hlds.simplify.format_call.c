/*
** Automatically generated from `format_call.m'
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


/* :- module check_hlds.simplify.format_call. */
/* :- implementation. */

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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_path.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.simplify_goal_call.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
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
check_hlds__simplify__format_call__IntroducedFrom__pred__format_call_traverse_unify__946__1_2_p_0(
  MR_Word check_hlds__simplify__format_call__ArgVars_20,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_59);

static MR_Box MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_14_p_0_2(
  MR_Box check_hlds__simplify__format_call__closure_arg,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1);

static void MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_14_p_0_1(
  MR_Box check_hlds__simplify__format_call__closure_arg,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call__follow_format_string_5_p_0_1(
  MR_Box check_hlds__simplify__format_call__closure_arg,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call__analyze_and_optimize_format_calls_9_p_0_1(
  MR_Box check_hlds__simplify__format_call__closure_arg,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_3,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_4,
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_5,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_6,
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_7,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_8,
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_9);

static MR_Box MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0_1(
  MR_Box check_hlds__simplify__format_call__closure_arg,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_unify_9_p_0_1(
  MR_Box check_hlds__simplify__format_call__closure_arg);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_id_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_id_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_map_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_map_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_maps_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_maps_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_pred_map_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_pred_map_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_string_result_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_string_result_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_kind_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_kind_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_site_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_site_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_element_map_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_element_map_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____maybe_generate_implicit_stream_warnings_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____maybe_generate_implicit_stream_warnings_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____maybe_opt_format_calls_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____maybe_opt_format_calls_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_map_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_map_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_state_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_state_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_1[12][3];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_2[22][2];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_3[5][1];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_4[3][5];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_6[1][17];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_7[2][8];


/* sealed */ struct check_hlds__simplify__format_call__vector_common_type_5_0_s {
  const MR_String check_hlds__simplify__format_call__vector_common_type_5_0__vct_5_f_0;
  const MR_Integer check_hlds__simplify__format_call__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct check_hlds__simplify__format_call__vector_common_type_5_0_s check_hlds__simplify__format_call_vector_common_5[4];

/* sealed */ struct check_hlds__simplify__format_call__vector_common_type_8_0_s {
  const MR_String check_hlds__simplify__format_call__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct check_hlds__simplify__format_call__vector_common_type_8_0_s check_hlds__simplify__format_call_vector_common_8[11];



static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_1[12][3] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2])),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2])),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2])),
    ((MR_Box) (&check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2])),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_4[1])),
    ((MR_Box) (check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_4[2])),
    ((MR_Box) (check_hlds__simplify__format_call__check_format_call_site_14_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_2[22][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "vxP"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 24)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[9])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[10])))
  },
  /* row 16 */
  {
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[14])),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[15]))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_3[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Unknown format string in call to"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Unknown format values in call to"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Mismatched format and values"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__simplify__format_call__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_6[1][17] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_map_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__maybe__pti_maybe_1__plain_check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0))
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


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_map_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0,
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0,
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__maybe__pti_maybe_1__plain_check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0
  }
};

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_id_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__notag_functor_desc_conj_id_0 = {
  (MR_String) "conj_id",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____conj_id_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____conj_id_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "conj_id",
  {     &check_hlds__simplify__format_call__check_hlds__simplify__format_call__notag_functor_desc_conj_id_0 },
  {     &check_hlds__simplify__format_call__check_hlds__simplify__format_call__notag_functor_desc_conj_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_id_0
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_string_state_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_conj_map_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_string_state_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_conj_map_0_0[4] = {
  (MR_String) "cm_string_map",
  (MR_String) "cm_list_skeleton_map",
  (MR_String) "cm_list_element_map",
  (MR_String) "cm_eqv_map"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_conj_map_0_0 = {
  (MR_String) "conj_map",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_conj_map_0_0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_conj_map_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_conj_map_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_conj_map_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_conj_map_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_conj_map_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____conj_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____conj_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "conj_map",
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_conj_map_0 },
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_conj_map_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_map_0
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2check_hlds__simplify__format_call__type_ctor_info_conj_id_0check_hlds__simplify__format_call__type_ctor_info_conj_map_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0,
    (MR_TypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_maps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____conj_maps_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____conj_maps_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "conj_maps",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2check_hlds__simplify__format_call__type_ctor_info_conj_id_0check_hlds__simplify__format_call__type_ctor_info_conj_map_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2check_hlds__simplify__format_call__type_ctor_info_conj_id_0check_hlds__simplify__format_call__type_ctor_info_conj_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0,
    (MR_TypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_pred_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____conj_pred_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____conj_pred_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "conj_pred_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2check_hlds__simplify__format_call__type_ctor_info_conj_id_0check_hlds__simplify__format_call__type_ctor_info_conj_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_eqv_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "fc_eqv_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_goal_id_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "fc_goal_id_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_fc_opt_goal_info_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_fc_opt_goal_info_0_0[3] = {
  (MR_String) "fcogi_replacement_goal",
  (MR_String) "fcogi_unneeded_vars",
  (MR_String) "fcogi_unneeded_goals"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_fc_opt_goal_info_0_0 = {
  (MR_String) "fc_opt_goal_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_fc_opt_goal_info_0_0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_fc_opt_goal_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_fc_opt_goal_info_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_fc_opt_goal_info_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_fc_opt_goal_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_fc_opt_goal_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "fc_opt_goal_info",
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_fc_opt_goal_info_0 },
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_fc_opt_goal_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_fc_opt_goal_info_0
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_0 = {
  (MR_String) "no_follow_skeleton_result",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_follow_skeleton_result_0_1[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_follow_skeleton_result_0_1[2] = {
  (MR_String) "fsr_element_vars",
  (MR_String) "fsr_skeleton_vars"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_1 = {
  (MR_String) "follow_skeleton_result",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_follow_skeleton_result_0_1,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_follow_skeleton_result_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_0
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_1[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_1
};

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_follow_skeleton_result_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "follow_skeleton_result",
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_follow_skeleton_result_0 },
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_follow_skeleton_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_follow_skeleton_result_0
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_string_result_0_0 = {
  (MR_String) "no_follow_string_result",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_follow_string_result_0_1[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_follow_string_result_0_1[3] = {
  (MR_String) "fsr_string",
  (MR_String) "fsr_to_delete_vars",
  (MR_String) "fsr_to_delete_goals"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_string_result_0_1 = {
  (MR_String) "follow_string_result",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_follow_string_result_0_1,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_follow_string_result_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_string_result_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_string_result_0_0
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_string_result_0_1[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_string_result_0_1
};

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_follow_string_result_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_string_result_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_string_result_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____follow_string_result_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____follow_string_result_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "follow_string_result",
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_follow_string_result_0 },
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_follow_string_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_follow_string_result_0
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_0[2] = {
  (MR_String) "sf_context",
  (MR_String) "sf_result_var"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_0 = {
  (MR_String) "kind_string_format",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_1[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_1[3] = {
  (MR_String) "iofns_context",
  (MR_String) "iofns_io_in_var",
  (MR_String) "iofns_io_out_var"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_1 = {
  (MR_String) "kind_io_format_nostream",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_1,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_2[4] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_2[4] = {
  (MR_String) "iofs_context",
  (MR_String) "iofs_stream_var",
  (MR_String) "iofs_io_in_var",
  (MR_String) "iofs_io_out_var"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_2 = {
  (MR_String) "kind_io_format_stream",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_2,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_3[5] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
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
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_3,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_3,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_2
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____format_call_kind_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____format_call_kind_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "format_call_kind",
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_kind_0 },
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_kind_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_kind_0
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_site_0_0[11] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_kind_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0
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
  (MR_Integer) 11,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_site_0_0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_site_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_site_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_site_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_site_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_site_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____format_call_site_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____format_call_site_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "format_call_site",
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_site_0 },
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_site_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_site_0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_element_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____list_element_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____list_element_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "list_element_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "list_skeleton_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_0 = {
  (MR_String) "list_skeleton_nil",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_list_skeleton_state_0_1[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_list_skeleton_state_0_1[2] = {
  (MR_String) "head",
  (MR_String) "tail"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_1 = {
  (MR_String) "list_skeleton_cons",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_list_skeleton_state_0_1,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_list_skeleton_state_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_0
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_1[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_1
};

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_list_skeleton_state_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "list_skeleton_state",
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_list_skeleton_state_0 },
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_list_skeleton_state_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_list_skeleton_state_0
};

static const MR_EnumFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_functor_desc_maybe_generate_implicit_stream_warnings_0_0 = {
  (MR_String) "do_not_generate_implicit_stream_warnings",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_functor_desc_maybe_generate_implicit_stream_warnings_0_1 = {
  (MR_String) "generate_implicit_stream_warnings",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____maybe_generate_implicit_stream_warnings_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____maybe_generate_implicit_stream_warnings_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "maybe_generate_implicit_stream_warnings",
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_name_ordered_maybe_generate_implicit_stream_warnings_0 },
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_value_ordered_maybe_generate_implicit_stream_warnings_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_maybe_generate_implicit_stream_warnings_0
};

static const MR_EnumFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_functor_desc_maybe_opt_format_calls_0_0 = {
  (MR_String) "do_not_opt_format_calls",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_functor_desc_maybe_opt_format_calls_0_1 = {
  (MR_String) "opt_format_calls",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____maybe_opt_format_calls_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____maybe_opt_format_calls_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "maybe_opt_format_calls",
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_name_ordered_maybe_opt_format_calls_0 },
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_value_ordered_maybe_opt_format_calls_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_maybe_opt_format_calls_0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____string_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____string_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "string_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_string_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_state_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_state_0_0 = {
  (MR_String) "string_const",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_state_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_state_0_1[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_state_0_1 = {
  (MR_String) "string_append",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_state_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_state_0_2[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_state_0_2 = {
  (MR_String) "string_append_list",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_state_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_state_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_state_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_state_0_2
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____string_state_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____string_state_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "string_state",
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_string_state_0 },
  {     check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_string_state_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_string_state_0
};

static MR_bool MR_CALL 
check_hlds__simplify__format_call__IntroducedFrom__pred__format_call_traverse_unify__946__1_2_p_0(
  MR_Word check_hlds__simplify__format_call__ArgVars_20,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_59)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    {
      check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[4], ((MR_Box) (check_hlds__simplify__format_call__ArgVars_20)), ((MR_Box) (check_hlds__simplify__format_call__HeadVar__2_59)));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____string_state_0_0(
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Integer check_hlds__simplify__format_call__CastX_43 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
    MR_Integer check_hlds__simplify__format_call__CastY_44 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_43 == check_hlds__simplify__format_call__CastY_44);
    if (check_hlds__simplify__format_call__succeeded)
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String check_hlds__simplify__format_call__Var_56 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String check_hlds__simplify__format_call__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__Var_56, check_hlds__simplify__format_call__ArgY1_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__simplify__format_call__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word check_hlds__simplify__format_call__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__format_call__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__simplify__format_call__ArgY1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word check_hlds__simplify__format_call__ArgY2_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word check_hlds__simplify__format_call__ArgY3_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word check_hlds__simplify__format_call__Var_23;
                  MR_Integer check_hlds__simplify__format_call__Var_57 = (MR_Integer) check_hlds__simplify__format_call__Var_53;
                  MR_Integer check_hlds__simplify__format_call__Var_58 = (MR_Integer) check_hlds__simplify__format_call__ArgY1_18;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__format_call__Var_23, check_hlds__simplify__format_call__Var_57, check_hlds__simplify__format_call__Var_58);
                  }
                  check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_23 == (MR_Integer) 0);
                  check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                  if (check_hlds__simplify__format_call__succeeded)
                    *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_23;
                  else
                    {
                      MR_Word check_hlds__simplify__format_call__Var_24;

                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__Var_24, ((MR_Box) (check_hlds__simplify__format_call__Var_52)), ((MR_Box) (check_hlds__simplify__format_call__ArgY2_20)));
                      }
                      check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_24 == (MR_Integer) 0);
                      check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                      if (check_hlds__simplify__format_call__succeeded)
                        *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_24;
                      else
                        {
                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Var_51)), ((MR_Box) (check_hlds__simplify__format_call__ArgY3_22)));
                          }
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word check_hlds__simplify__format_call__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__format_call__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__simplify__format_call__ArgY1_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word check_hlds__simplify__format_call__ArgY2_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word check_hlds__simplify__format_call__Var_42;
                  MR_Integer check_hlds__simplify__format_call__Var_59 = (MR_Integer) check_hlds__simplify__format_call__Var_55;
                  MR_Integer check_hlds__simplify__format_call__Var_60 = (MR_Integer) check_hlds__simplify__format_call__ArgY1_39;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__format_call__Var_42, check_hlds__simplify__format_call__Var_59, check_hlds__simplify__format_call__Var_60);
                  }
                  check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_42 == (MR_Integer) 0);
                  check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                  if (check_hlds__simplify__format_call__succeeded)
                    *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_42;
                  else
                    {
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Var_54)), ((MR_Box) (check_hlds__simplify__format_call__ArgY2_41)));
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
check_hlds__simplify__format_call____Unify____string_state_0_0(
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Integer check_hlds__simplify__format_call__CastX_15 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
    MR_Integer check_hlds__simplify__format_call__CastY_16 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_15 == check_hlds__simplify__format_call__CastY_16);
    if (check_hlds__simplify__format_call__succeeded)
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String check_hlds__simplify__format_call__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
            MR_String check_hlds__simplify__format_call__ArgY1_4;

            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (check_hlds__simplify__format_call__succeeded)
              {
                check_hlds__simplify__format_call__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__simplify__format_call__succeeded = (strcmp(check_hlds__simplify__format_call__ArgX1_3, check_hlds__simplify__format_call__ArgY1_4) == 0);
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__simplify__format_call__TypeInfo_18_18;
            MR_Word check_hlds__simplify__format_call__TypeInfo_19_19;
            MR_Word check_hlds__simplify__format_call__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__format_call__ArgY1_6;
            MR_Word check_hlds__simplify__format_call__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__format_call__ArgY2_8;
            MR_Word check_hlds__simplify__format_call__ArgX3_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word check_hlds__simplify__format_call__ArgY3_10;
            MR_Integer check_hlds__simplify__format_call__Var_22;
            MR_Integer check_hlds__simplify__format_call__Var_23;

            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__simplify__format_call__succeeded)
              {
                check_hlds__simplify__format_call__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__simplify__format_call__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
                check_hlds__simplify__format_call__ArgY3_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
                check_hlds__simplify__format_call__Var_22 = (MR_Integer) check_hlds__simplify__format_call__ArgX1_5;
                check_hlds__simplify__format_call__Var_23 = (MR_Integer) check_hlds__simplify__format_call__ArgY1_6;
                check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_22 == check_hlds__simplify__format_call__Var_23);
                if (check_hlds__simplify__format_call__succeeded)
                  {
                    check_hlds__simplify__format_call__TypeInfo_18_18 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
                    {
                      check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_18_18, ((MR_Box) (check_hlds__simplify__format_call__ArgX2_7)), ((MR_Box) (check_hlds__simplify__format_call__ArgY2_8)));
                    }
                    if (check_hlds__simplify__format_call__succeeded)
                      {
                        check_hlds__simplify__format_call__TypeInfo_19_19 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
                        {
                          check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_19_19, ((MR_Box) (check_hlds__simplify__format_call__ArgX3_9)), ((MR_Box) (check_hlds__simplify__format_call__ArgY3_10)));
                        }
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word check_hlds__simplify__format_call__TypeInfo_21_21;
            MR_Word check_hlds__simplify__format_call__ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__format_call__ArgY1_12;
            MR_Word check_hlds__simplify__format_call__ArgX2_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__format_call__ArgY2_14;
            MR_Integer check_hlds__simplify__format_call__Var_24;
            MR_Integer check_hlds__simplify__format_call__Var_25;

            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (check_hlds__simplify__format_call__succeeded)
              {
                check_hlds__simplify__format_call__ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__simplify__format_call__ArgY2_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
                check_hlds__simplify__format_call__Var_24 = (MR_Integer) check_hlds__simplify__format_call__ArgX1_11;
                check_hlds__simplify__format_call__Var_25 = (MR_Integer) check_hlds__simplify__format_call__ArgY1_12;
                check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_24 == check_hlds__simplify__format_call__Var_25);
                if (check_hlds__simplify__format_call__succeeded)
                  {
                    check_hlds__simplify__format_call__TypeInfo_21_21 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
                    {
                      check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_21_21, ((MR_Box) (check_hlds__simplify__format_call__ArgX2_13)), ((MR_Box) (check_hlds__simplify__format_call__ArgY2_14)));
                    }
                  }
              }
          }
          break;
      }
    return check_hlds__simplify__format_call__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____string_map_0_0(
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
{
  {
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_4 = check_hlds__simplify__format_call__HeadVar__2_2;
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_5 = check_hlds__simplify__format_call__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_map_0_0(
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_3 = check_hlds__simplify__format_call__HeadVar__1_1;
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_4 = check_hlds__simplify__format_call__HeadVar__2_2;

    {
      check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[2], ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_4)));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____maybe_opt_format_calls_0_0(
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
{
  {
    MR_Integer check_hlds__simplify__format_call__Cast_HeadVar1_4 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
    MR_Integer check_hlds__simplify__format_call__Cast_HeadVar2_5 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__Cast_HeadVar1_4, check_hlds__simplify__format_call__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____maybe_opt_format_calls_0_0(
  MR_Word check_hlds__simplify__format_call__HeadVar__2_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__HeadVar__2_1 == check_hlds__simplify__format_call__HeadVar__2_2);

    return check_hlds__simplify__format_call__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____maybe_generate_implicit_stream_warnings_0_0(
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
{
  {
    MR_Integer check_hlds__simplify__format_call__Cast_HeadVar1_4 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
    MR_Integer check_hlds__simplify__format_call__Cast_HeadVar2_5 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__Cast_HeadVar1_4, check_hlds__simplify__format_call__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____maybe_generate_implicit_stream_warnings_0_0(
  MR_Word check_hlds__simplify__format_call__HeadVar__2_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__HeadVar__2_1 == check_hlds__simplify__format_call__HeadVar__2_2);

    return check_hlds__simplify__format_call__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0(
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Integer check_hlds__simplify__format_call__CastX_13 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
    MR_Integer check_hlds__simplify__format_call__CastY_14 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_13 == check_hlds__simplify__format_call__CastY_14);
    if (check_hlds__simplify__format_call__succeeded)
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((check_hlds__simplify__format_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__simplify__format_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
      else
        *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word check_hlds__simplify__format_call__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

        if ((check_hlds__simplify__format_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word check_hlds__simplify__format_call__ArgY1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__format_call__ArgY2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__format_call__Var_12;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__Var_12, ((MR_Box) (check_hlds__simplify__format_call__Var_18)), ((MR_Box) (check_hlds__simplify__format_call__ArgY1_9)));
            }
            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_12 == (MR_Integer) 0);
            check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
            if (check_hlds__simplify__format_call__succeeded)
              *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_12;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Var_17)), ((MR_Box) (check_hlds__simplify__format_call__ArgY2_11)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0(
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Integer check_hlds__simplify__format_call__CastX_9 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
    MR_Integer check_hlds__simplify__format_call__CastY_10 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_9 == check_hlds__simplify__format_call__CastY_10);
    if (check_hlds__simplify__format_call__succeeded)
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
    else
    if ((check_hlds__simplify__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer check_hlds__simplify__format_call__CastX_3 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
        MR_Integer check_hlds__simplify__format_call__CastY_4 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastY_4 == check_hlds__simplify__format_call__CastX_3);
      }
    else
      {
        MR_Word check_hlds__simplify__format_call__TypeInfo_11_11;
        MR_Word check_hlds__simplify__format_call__TypeInfo_12_12;
        MR_Word check_hlds__simplify__format_call__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__ArgY1_6;
        MR_Word check_hlds__simplify__format_call__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__ArgY2_8;

        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__simplify__format_call__succeeded)
          {
            check_hlds__simplify__format_call__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
            check_hlds__simplify__format_call__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
            check_hlds__simplify__format_call__TypeInfo_11_11 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
            {
              check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_11_11, ((MR_Box) (check_hlds__simplify__format_call__ArgX1_5)), ((MR_Box) (check_hlds__simplify__format_call__ArgY1_6)));
            }
            if (check_hlds__simplify__format_call__succeeded)
              {
                check_hlds__simplify__format_call__TypeInfo_12_12 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
                {
                  check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_12_12, ((MR_Box) (check_hlds__simplify__format_call__ArgX2_7)), ((MR_Box) (check_hlds__simplify__format_call__ArgY2_8)));
                }
              }
          }
      }
    return check_hlds__simplify__format_call__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0(
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
{
  {
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_4 = check_hlds__simplify__format_call__HeadVar__2_2;
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_5 = check_hlds__simplify__format_call__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[3], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0(
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_3 = check_hlds__simplify__format_call__HeadVar__1_1;
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_4 = check_hlds__simplify__format_call__HeadVar__2_2;

    {
      check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[3], ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_4)));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____list_element_map_0_0(
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
{
  {
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_4 = check_hlds__simplify__format_call__HeadVar__2_2;
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_5 = check_hlds__simplify__format_call__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[4], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_element_map_0_0(
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_3 = check_hlds__simplify__format_call__HeadVar__1_1;
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_4 = check_hlds__simplify__format_call__HeadVar__2_2;

    {
      check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[4], ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_4)));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_site_0_0(
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Integer check_hlds__simplify__format_call__CastX_36 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
    MR_Integer check_hlds__simplify__format_call__CastY_37 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_36 == check_hlds__simplify__format_call__CastY_37);
    if (check_hlds__simplify__format_call__succeeded)
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__simplify__format_call__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__format_call__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__format_call__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__format_call__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__format_call__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word check_hlds__simplify__format_call__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word check_hlds__simplify__format_call__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word check_hlds__simplify__format_call__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word check_hlds__simplify__format_call__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word check_hlds__simplify__format_call__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 6)));
        MR_String check_hlds__simplify__format_call__ArgX8_18 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 7)));
        MR_String check_hlds__simplify__format_call__ArgY8_19 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 7)));
        MR_Integer check_hlds__simplify__format_call__ArgX9_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 8)));
        MR_Integer check_hlds__simplify__format_call__ArgY9_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word check_hlds__simplify__format_call__ArgX10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word check_hlds__simplify__format_call__ArgY10_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 9)));
        MR_Word check_hlds__simplify__format_call__ArgX11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 10)));
        MR_Word check_hlds__simplify__format_call__ArgY11_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 10)));
        MR_Word check_hlds__simplify__format_call__Var_26;
        MR_Integer check_hlds__simplify__format_call__Var_49 = (MR_Integer) check_hlds__simplify__format_call__ArgX1_4;
        MR_Integer check_hlds__simplify__format_call__Var_50 = (MR_Integer) check_hlds__simplify__format_call__ArgY1_5;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__format_call__Var_26, check_hlds__simplify__format_call__Var_49, check_hlds__simplify__format_call__Var_50);
        }
        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_26 == (MR_Integer) 0);
        check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
        if (check_hlds__simplify__format_call__succeeded)
          *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_26;
        else
          {
            MR_Word check_hlds__simplify__format_call__Var_27;

            {
              hlds__hlds_goal____Compare____hlds_goal_info_0_0(&check_hlds__simplify__format_call__Var_27, check_hlds__simplify__format_call__ArgX2_6, check_hlds__simplify__format_call__ArgY2_7);
            }
            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_27 == (MR_Integer) 0);
            check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
            if (check_hlds__simplify__format_call__succeeded)
              *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_27;
            else
              {
                MR_Word check_hlds__simplify__format_call__Var_28;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__Var_28, ((MR_Box) (check_hlds__simplify__format_call__ArgX3_8)), ((MR_Box) (check_hlds__simplify__format_call__ArgY3_9)));
                }
                check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_28 == (MR_Integer) 0);
                check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                if (check_hlds__simplify__format_call__succeeded)
                  *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_28;
                else
                  {
                    MR_Word check_hlds__simplify__format_call__Var_29;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__Var_29, ((MR_Box) (check_hlds__simplify__format_call__ArgX4_10)), ((MR_Box) (check_hlds__simplify__format_call__ArgY4_11)));
                    }
                    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_29 == (MR_Integer) 0);
                    check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                    if (check_hlds__simplify__format_call__succeeded)
                      *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_29;
                    else
                      {
                        MR_Word check_hlds__simplify__format_call__Var_30;

                        {
                          check_hlds__simplify__format_call____Compare____format_call_kind_0_0(&check_hlds__simplify__format_call__Var_30, check_hlds__simplify__format_call__ArgX5_12, check_hlds__simplify__format_call__ArgY5_13);
                        }
                        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_30 == (MR_Integer) 0);
                        check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                        if (check_hlds__simplify__format_call__succeeded)
                          *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_30;
                        else
                          {
                            MR_Word check_hlds__simplify__format_call__Var_31;

                            {
                              hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__simplify__format_call__Var_31, check_hlds__simplify__format_call__ArgX6_14, check_hlds__simplify__format_call__ArgY6_15);
                            }
                            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_31 == (MR_Integer) 0);
                            check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                            if (check_hlds__simplify__format_call__succeeded)
                              *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_31;
                            else
                              {
                                MR_Word check_hlds__simplify__format_call__Var_32;

                                {
                                  mdbcomp__sym_name____Compare____sym_name_0_0(&check_hlds__simplify__format_call__Var_32, check_hlds__simplify__format_call__ArgX7_16, check_hlds__simplify__format_call__ArgY7_17);
                                }
                                check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_32 == (MR_Integer) 0);
                                check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                                if (check_hlds__simplify__format_call__succeeded)
                                  *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_32;
                                else
                                  {
                                    MR_Word check_hlds__simplify__format_call__Var_33;

                                    {
                                      mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__simplify__format_call__Var_33, check_hlds__simplify__format_call__ArgX8_18, check_hlds__simplify__format_call__ArgY8_19);
                                    }
                                    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_33 == (MR_Integer) 0);
                                    check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                                    if (check_hlds__simplify__format_call__succeeded)
                                      *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_33;
                                    else
                                      {
                                        MR_Word check_hlds__simplify__format_call__Var_34;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__format_call__Var_34, check_hlds__simplify__format_call__ArgX9_20, check_hlds__simplify__format_call__ArgY9_21);
                                        }
                                        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_34 == (MR_Integer) 0);
                                        check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                                        if (check_hlds__simplify__format_call__succeeded)
                                          *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_34;
                                        else
                                          {
                                            MR_Word check_hlds__simplify__format_call__Var_35;

                                            {
                                              mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__Var_35, check_hlds__simplify__format_call__ArgX10_22, check_hlds__simplify__format_call__ArgY10_23);
                                            }
                                            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_35 == (MR_Integer) 0);
                                            check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                                            if (check_hlds__simplify__format_call__succeeded)
                                              *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_35;
                                            else
                                              {
                                                MR_Integer check_hlds__simplify__format_call__Var_51 = (MR_Integer) check_hlds__simplify__format_call__ArgX11_24;
                                                MR_Integer check_hlds__simplify__format_call__Var_52 = (MR_Integer) check_hlds__simplify__format_call__ArgY11_25;

                                                {
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__Var_51, check_hlds__simplify__format_call__Var_52);
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
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Integer check_hlds__simplify__format_call__CastX_25 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
    MR_Integer check_hlds__simplify__format_call__CastY_26 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_25 == check_hlds__simplify__format_call__CastY_26);
    if (check_hlds__simplify__format_call__succeeded)
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__simplify__format_call__TypeInfo_29_29;
        MR_Word check_hlds__simplify__format_call__TypeInfo_30_30;
        MR_Word check_hlds__simplify__format_call__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__format_call__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__format_call__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__format_call__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__format_call__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word check_hlds__simplify__format_call__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word check_hlds__simplify__format_call__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word check_hlds__simplify__format_call__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word check_hlds__simplify__format_call__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word check_hlds__simplify__format_call__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 6)));
        MR_String check_hlds__simplify__format_call__ArgX8_17 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 7)));
        MR_String check_hlds__simplify__format_call__ArgY8_18 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 7)));
        MR_Integer check_hlds__simplify__format_call__ArgX9_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 8)));
        MR_Integer check_hlds__simplify__format_call__ArgY9_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word check_hlds__simplify__format_call__ArgX10_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 9)));
        MR_Word check_hlds__simplify__format_call__ArgY10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 9)));
        MR_Word check_hlds__simplify__format_call__ArgX11_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 10)));
        MR_Word check_hlds__simplify__format_call__ArgY11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 10)));
        MR_Integer check_hlds__simplify__format_call__Var_34 = (MR_Integer) check_hlds__simplify__format_call__ArgX1_3;
        MR_Integer check_hlds__simplify__format_call__Var_35 = (MR_Integer) check_hlds__simplify__format_call__ArgY1_4;
        MR_Integer check_hlds__simplify__format_call__CastX_38;
        MR_Integer check_hlds__simplify__format_call__CastY_39;

        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_34 == check_hlds__simplify__format_call__Var_35);
        if (check_hlds__simplify__format_call__succeeded)
          {
            {
              check_hlds__simplify__format_call__succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(check_hlds__simplify__format_call__ArgX2_5, check_hlds__simplify__format_call__ArgY2_6);
            }
            if (check_hlds__simplify__format_call__succeeded)
              {
                check_hlds__simplify__format_call__TypeInfo_29_29 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
                {
                  check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_29_29, ((MR_Box) (check_hlds__simplify__format_call__ArgX3_7)), ((MR_Box) (check_hlds__simplify__format_call__ArgY3_8)));
                }
                if (check_hlds__simplify__format_call__succeeded)
                  {
                    check_hlds__simplify__format_call__TypeInfo_30_30 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
                    {
                      check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_30_30, ((MR_Box) (check_hlds__simplify__format_call__ArgX4_9)), ((MR_Box) (check_hlds__simplify__format_call__ArgY4_10)));
                    }
                    if (check_hlds__simplify__format_call__succeeded)
                      {
                        {
                          check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____format_call_kind_0_0(check_hlds__simplify__format_call__ArgX5_11, check_hlds__simplify__format_call__ArgY5_12);
                        }
                        if (check_hlds__simplify__format_call__succeeded)
                          {
                            {
                              check_hlds__simplify__format_call__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__format_call__ArgX6_13, check_hlds__simplify__format_call__ArgY6_14);
                            }
                            if (check_hlds__simplify__format_call__succeeded)
                              {
                                {
                                  check_hlds__simplify__format_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__format_call__ArgX7_15, check_hlds__simplify__format_call__ArgY7_16);
                                }
                                if (check_hlds__simplify__format_call__succeeded)
                                  {
                                    check_hlds__simplify__format_call__succeeded = (strcmp(check_hlds__simplify__format_call__ArgX8_17, check_hlds__simplify__format_call__ArgY8_18) == 0);
                                    if (check_hlds__simplify__format_call__succeeded)
                                      {
                                        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__ArgX9_19 == check_hlds__simplify__format_call__ArgY9_20);
                                        if (check_hlds__simplify__format_call__succeeded)
                                          {
                                            {
                                              check_hlds__simplify__format_call__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__ArgX10_21, check_hlds__simplify__format_call__ArgY10_22);
                                            }
                                            if (check_hlds__simplify__format_call__succeeded)
                                              {
                                                check_hlds__simplify__format_call__CastX_38 = (MR_Integer) check_hlds__simplify__format_call__ArgX11_23;
                                                check_hlds__simplify__format_call__CastY_39 = (MR_Integer) check_hlds__simplify__format_call__ArgY11_24;
                                                check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_38 == check_hlds__simplify__format_call__CastY_39);
                                                if (check_hlds__simplify__format_call__succeeded)
                                                  check_hlds__simplify__format_call__succeeded = MR_TRUE;
                                                else
                                                  {
                                                    MR_Integer check_hlds__simplify__format_call__ArgX1_36 = (MR_Integer) check_hlds__simplify__format_call__ArgX11_23;
                                                    MR_Integer check_hlds__simplify__format_call__ArgY1_37 = (MR_Integer) check_hlds__simplify__format_call__ArgY11_24;

                                                    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__ArgX1_36 == check_hlds__simplify__format_call__ArgY1_37);
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
    return check_hlds__simplify__format_call__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_kind_0_0(
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Integer check_hlds__simplify__format_call__CastX_126 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
    MR_Integer check_hlds__simplify__format_call__CastY_127 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_126 == check_hlds__simplify__format_call__CastY_127);
    if (check_hlds__simplify__format_call__succeeded)
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word check_hlds__simplify__format_call__Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__format_call__Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__simplify__format_call__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word check_hlds__simplify__format_call__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word check_hlds__simplify__format_call__Var_8;

                  {
                    mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__Var_8, check_hlds__simplify__format_call__Var_155, check_hlds__simplify__format_call__ArgY1_5);
                  }
                  check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_8 == (MR_Integer) 0);
                  check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                  if (check_hlds__simplify__format_call__succeeded)
                    *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_8;
                  else
                    {
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Var_154)), ((MR_Box) (check_hlds__simplify__format_call__ArgY2_7)));
                      }
                    }
                }
                break;
              case (MR_Integer) 1:
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__simplify__format_call__Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word check_hlds__simplify__format_call__Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__format_call__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__simplify__format_call__ArgY1_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word check_hlds__simplify__format_call__ArgY2_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word check_hlds__simplify__format_call__ArgY3_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word check_hlds__simplify__format_call__Var_38;

                  {
                    mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__Var_38, check_hlds__simplify__format_call__Var_144, check_hlds__simplify__format_call__ArgY1_33);
                  }
                  check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_38 == (MR_Integer) 0);
                  check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                  if (check_hlds__simplify__format_call__succeeded)
                    *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_38;
                  else
                    {
                      MR_Word check_hlds__simplify__format_call__Var_39;

                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__Var_39, ((MR_Box) (check_hlds__simplify__format_call__Var_143)), ((MR_Box) (check_hlds__simplify__format_call__ArgY2_35)));
                      }
                      check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_39 == (MR_Integer) 0);
                      check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                      if (check_hlds__simplify__format_call__succeeded)
                        *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_39;
                      else
                        {
                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Var_142)), ((MR_Box) (check_hlds__simplify__format_call__ArgY3_37)));
                          }
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word check_hlds__simplify__format_call__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 3)));
            MR_Word check_hlds__simplify__format_call__Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word check_hlds__simplify__format_call__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__format_call__Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__simplify__format_call__ArgY1_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word check_hlds__simplify__format_call__ArgY2_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word check_hlds__simplify__format_call__ArgY3_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word check_hlds__simplify__format_call__ArgY4_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 3)));
                  MR_Word check_hlds__simplify__format_call__Var_76;

                  {
                    mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__Var_76, check_hlds__simplify__format_call__Var_148, check_hlds__simplify__format_call__ArgY1_69);
                  }
                  check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_76 == (MR_Integer) 0);
                  check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                  if (check_hlds__simplify__format_call__succeeded)
                    *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_76;
                  else
                    {
                      MR_Word check_hlds__simplify__format_call__Var_77;

                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__Var_77, ((MR_Box) (check_hlds__simplify__format_call__Var_147)), ((MR_Box) (check_hlds__simplify__format_call__ArgY2_71)));
                      }
                      check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_77 == (MR_Integer) 0);
                      check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                      if (check_hlds__simplify__format_call__succeeded)
                        *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_77;
                      else
                        {
                          MR_Word check_hlds__simplify__format_call__Var_78;

                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__Var_78, ((MR_Box) (check_hlds__simplify__format_call__Var_146)), ((MR_Box) (check_hlds__simplify__format_call__ArgY3_73)));
                          }
                          check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_78 == (MR_Integer) 0);
                          check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                          if (check_hlds__simplify__format_call__succeeded)
                            *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_78;
                          else
                            {
                              {
                                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Var_145)), ((MR_Box) (check_hlds__simplify__format_call__ArgY4_75)));
                              }
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 3:
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word check_hlds__simplify__format_call__Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 4)));
            MR_Word check_hlds__simplify__format_call__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 3)));
            MR_Word check_hlds__simplify__format_call__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word check_hlds__simplify__format_call__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__format_call__Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__simplify__format_call__ArgY1_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word check_hlds__simplify__format_call__ArgY2_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word check_hlds__simplify__format_call__ArgY3_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word check_hlds__simplify__format_call__ArgY4_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 3)));
                  MR_Word check_hlds__simplify__format_call__ArgY5_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 4)));
                  MR_Word check_hlds__simplify__format_call__Var_122;

                  {
                    mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__Var_122, check_hlds__simplify__format_call__Var_153, check_hlds__simplify__format_call__ArgY1_113);
                  }
                  check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_122 == (MR_Integer) 0);
                  check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                  if (check_hlds__simplify__format_call__succeeded)
                    *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_122;
                  else
                    {
                      MR_Word check_hlds__simplify__format_call__Var_123;

                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__Var_123, ((MR_Box) (check_hlds__simplify__format_call__Var_152)), ((MR_Box) (check_hlds__simplify__format_call__ArgY2_115)));
                      }
                      check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_123 == (MR_Integer) 0);
                      check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                      if (check_hlds__simplify__format_call__succeeded)
                        *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_123;
                      else
                        {
                          MR_Word check_hlds__simplify__format_call__Var_124;

                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__Var_124, ((MR_Box) (check_hlds__simplify__format_call__Var_151)), ((MR_Box) (check_hlds__simplify__format_call__ArgY3_117)));
                          }
                          check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_124 == (MR_Integer) 0);
                          check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                          if (check_hlds__simplify__format_call__succeeded)
                            *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_124;
                          else
                            {
                              MR_Word check_hlds__simplify__format_call__Var_125;

                              {
                                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__Var_125, ((MR_Box) (check_hlds__simplify__format_call__Var_150)), ((MR_Box) (check_hlds__simplify__format_call__ArgY4_119)));
                              }
                              check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_125 == (MR_Integer) 0);
                              check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                              if (check_hlds__simplify__format_call__succeeded)
                                *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_125;
                              else
                                {
                                  {
                                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Var_149)), ((MR_Box) (check_hlds__simplify__format_call__ArgY5_121)));
                                  }
                                }
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
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Integer check_hlds__simplify__format_call__CastX_31 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
    MR_Integer check_hlds__simplify__format_call__CastY_32 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_31 == check_hlds__simplify__format_call__CastY_32);
    if (check_hlds__simplify__format_call__succeeded)
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word check_hlds__simplify__format_call__TypeInfo_46_46;
            MR_Word check_hlds__simplify__format_call__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__format_call__ArgY1_4;
            MR_Word check_hlds__simplify__format_call__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__format_call__ArgY2_6;

            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (check_hlds__simplify__format_call__succeeded)
              {
                check_hlds__simplify__format_call__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__simplify__format_call__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
                {
                  check_hlds__simplify__format_call__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__ArgX1_3, check_hlds__simplify__format_call__ArgY1_4);
                }
                if (check_hlds__simplify__format_call__succeeded)
                  {
                    check_hlds__simplify__format_call__TypeInfo_46_46 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
                    {
                      check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_46_46, ((MR_Box) (check_hlds__simplify__format_call__ArgX2_5)), ((MR_Box) (check_hlds__simplify__format_call__ArgY2_6)));
                    }
                  }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__simplify__format_call__TypeInfo_34_34;
            MR_Word check_hlds__simplify__format_call__TypeInfo_35_35;
            MR_Word check_hlds__simplify__format_call__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__format_call__ArgY1_8;
            MR_Word check_hlds__simplify__format_call__ArgX2_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__format_call__ArgY2_10;
            MR_Word check_hlds__simplify__format_call__ArgX3_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word check_hlds__simplify__format_call__ArgY3_12;

            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__simplify__format_call__succeeded)
              {
                check_hlds__simplify__format_call__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__simplify__format_call__ArgY2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
                check_hlds__simplify__format_call__ArgY3_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
                {
                  check_hlds__simplify__format_call__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__ArgX1_7, check_hlds__simplify__format_call__ArgY1_8);
                }
                if (check_hlds__simplify__format_call__succeeded)
                  {
                    check_hlds__simplify__format_call__TypeInfo_34_34 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
                    {
                      check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_34_34, ((MR_Box) (check_hlds__simplify__format_call__ArgX2_9)), ((MR_Box) (check_hlds__simplify__format_call__ArgY2_10)));
                    }
                    if (check_hlds__simplify__format_call__succeeded)
                      {
                        check_hlds__simplify__format_call__TypeInfo_35_35 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
                        {
                          check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_35_35, ((MR_Box) (check_hlds__simplify__format_call__ArgX3_11)), ((MR_Box) (check_hlds__simplify__format_call__ArgY3_12)));
                        }
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word check_hlds__simplify__format_call__TypeInfo_37_37;
            MR_Word check_hlds__simplify__format_call__TypeInfo_38_38;
            MR_Word check_hlds__simplify__format_call__TypeInfo_39_39;
            MR_Word check_hlds__simplify__format_call__ArgX1_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__format_call__ArgY1_14;
            MR_Word check_hlds__simplify__format_call__ArgX2_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__format_call__ArgY2_16;
            MR_Word check_hlds__simplify__format_call__ArgX3_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word check_hlds__simplify__format_call__ArgY3_18;
            MR_Word check_hlds__simplify__format_call__ArgX4_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 3)));
            MR_Word check_hlds__simplify__format_call__ArgY4_20;

            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (check_hlds__simplify__format_call__succeeded)
              {
                check_hlds__simplify__format_call__ArgY1_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__simplify__format_call__ArgY2_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
                check_hlds__simplify__format_call__ArgY3_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
                check_hlds__simplify__format_call__ArgY4_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 3)));
                {
                  check_hlds__simplify__format_call__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__ArgX1_13, check_hlds__simplify__format_call__ArgY1_14);
                }
                if (check_hlds__simplify__format_call__succeeded)
                  {
                    check_hlds__simplify__format_call__TypeInfo_37_37 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
                    {
                      check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_37_37, ((MR_Box) (check_hlds__simplify__format_call__ArgX2_15)), ((MR_Box) (check_hlds__simplify__format_call__ArgY2_16)));
                    }
                    if (check_hlds__simplify__format_call__succeeded)
                      {
                        check_hlds__simplify__format_call__TypeInfo_38_38 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
                        {
                          check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_38_38, ((MR_Box) (check_hlds__simplify__format_call__ArgX3_17)), ((MR_Box) (check_hlds__simplify__format_call__ArgY3_18)));
                        }
                        if (check_hlds__simplify__format_call__succeeded)
                          {
                            check_hlds__simplify__format_call__TypeInfo_39_39 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
                            {
                              check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_39_39, ((MR_Box) (check_hlds__simplify__format_call__ArgX4_19)), ((MR_Box) (check_hlds__simplify__format_call__ArgY4_20)));
                            }
                          }
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word check_hlds__simplify__format_call__TypeInfo_41_41;
            MR_Word check_hlds__simplify__format_call__TypeInfo_42_42;
            MR_Word check_hlds__simplify__format_call__TypeInfo_43_43;
            MR_Word check_hlds__simplify__format_call__TypeInfo_44_44;
            MR_Word check_hlds__simplify__format_call__ArgX1_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__format_call__ArgY1_22;
            MR_Word check_hlds__simplify__format_call__ArgX2_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__format_call__ArgY2_24;
            MR_Word check_hlds__simplify__format_call__ArgX3_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word check_hlds__simplify__format_call__ArgY3_26;
            MR_Word check_hlds__simplify__format_call__ArgX4_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 3)));
            MR_Word check_hlds__simplify__format_call__ArgY4_28;
            MR_Word check_hlds__simplify__format_call__ArgX5_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 4)));
            MR_Word check_hlds__simplify__format_call__ArgY5_30;

            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (check_hlds__simplify__format_call__succeeded)
              {
                check_hlds__simplify__format_call__ArgY1_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__simplify__format_call__ArgY2_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
                check_hlds__simplify__format_call__ArgY3_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
                check_hlds__simplify__format_call__ArgY4_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 3)));
                check_hlds__simplify__format_call__ArgY5_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 4)));
                {
                  check_hlds__simplify__format_call__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__ArgX1_21, check_hlds__simplify__format_call__ArgY1_22);
                }
                if (check_hlds__simplify__format_call__succeeded)
                  {
                    check_hlds__simplify__format_call__TypeInfo_41_41 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
                    {
                      check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_41_41, ((MR_Box) (check_hlds__simplify__format_call__ArgX2_23)), ((MR_Box) (check_hlds__simplify__format_call__ArgY2_24)));
                    }
                    if (check_hlds__simplify__format_call__succeeded)
                      {
                        check_hlds__simplify__format_call__TypeInfo_42_42 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
                        {
                          check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_42_42, ((MR_Box) (check_hlds__simplify__format_call__ArgX3_25)), ((MR_Box) (check_hlds__simplify__format_call__ArgY3_26)));
                        }
                        if (check_hlds__simplify__format_call__succeeded)
                          {
                            check_hlds__simplify__format_call__TypeInfo_43_43 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
                            {
                              check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_43_43, ((MR_Box) (check_hlds__simplify__format_call__ArgX4_27)), ((MR_Box) (check_hlds__simplify__format_call__ArgY4_28)));
                            }
                            if (check_hlds__simplify__format_call__succeeded)
                              {
                                check_hlds__simplify__format_call__TypeInfo_44_44 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
                                {
                                  check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_44_44, ((MR_Box) (check_hlds__simplify__format_call__ArgX5_29)), ((MR_Box) (check_hlds__simplify__format_call__ArgY5_30)));
                                }
                              }
                          }
                      }
                  }
              }
          }
          break;
      }
    return check_hlds__simplify__format_call__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_string_result_0_0(
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Integer check_hlds__simplify__format_call__CastX_18 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
    MR_Integer check_hlds__simplify__format_call__CastY_19 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_18 == check_hlds__simplify__format_call__CastY_19);
    if (check_hlds__simplify__format_call__succeeded)
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((check_hlds__simplify__format_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__simplify__format_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
      else
        *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word check_hlds__simplify__format_call__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__format_call__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
        MR_String check_hlds__simplify__format_call__Var_25 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

        if ((check_hlds__simplify__format_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_String check_hlds__simplify__format_call__ArgY1_11 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__format_call__ArgY2_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__format_call__ArgY3_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 2)));
            MR_Word check_hlds__simplify__format_call__Var_16;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__simplify__format_call__Var_16, check_hlds__simplify__format_call__Var_25, check_hlds__simplify__format_call__ArgY1_11);
            }
            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_16 == (MR_Integer) 0);
            check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
            if (check_hlds__simplify__format_call__succeeded)
              *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_16;
            else
              {
                MR_Word check_hlds__simplify__format_call__Var_17;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[4], &check_hlds__simplify__format_call__Var_17, ((MR_Box) (check_hlds__simplify__format_call__Var_24)), ((MR_Box) (check_hlds__simplify__format_call__ArgY2_13)));
                }
                check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_17 == (MR_Integer) 0);
                check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                if (check_hlds__simplify__format_call__succeeded)
                  *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_17;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[5], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Var_23)), ((MR_Box) (check_hlds__simplify__format_call__ArgY3_15)));
                    }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_string_result_0_0(
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Integer check_hlds__simplify__format_call__CastX_11 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
    MR_Integer check_hlds__simplify__format_call__CastY_12 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_11 == check_hlds__simplify__format_call__CastY_12);
    if (check_hlds__simplify__format_call__succeeded)
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
    else
    if ((check_hlds__simplify__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer check_hlds__simplify__format_call__CastX_3 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
        MR_Integer check_hlds__simplify__format_call__CastY_4 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastY_4 == check_hlds__simplify__format_call__CastX_3);
      }
    else
      {
        MR_Word check_hlds__simplify__format_call__TypeInfo_13_13;
        MR_Word check_hlds__simplify__format_call__TypeInfo_14_14;
        MR_String check_hlds__simplify__format_call__ArgX1_5 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
        MR_String check_hlds__simplify__format_call__ArgY1_6;
        MR_Word check_hlds__simplify__format_call__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__ArgY2_8;
        MR_Word check_hlds__simplify__format_call__ArgX3_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__format_call__ArgY3_10;

        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__simplify__format_call__succeeded)
          {
            check_hlds__simplify__format_call__ArgY1_6 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
            check_hlds__simplify__format_call__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
            check_hlds__simplify__format_call__ArgY3_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
            check_hlds__simplify__format_call__succeeded = (strcmp(check_hlds__simplify__format_call__ArgX1_5, check_hlds__simplify__format_call__ArgY1_6) == 0);
            if (check_hlds__simplify__format_call__succeeded)
              {
                check_hlds__simplify__format_call__TypeInfo_13_13 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[4];
                {
                  check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_13_13, ((MR_Box) (check_hlds__simplify__format_call__ArgX2_7)), ((MR_Box) (check_hlds__simplify__format_call__ArgY2_8)));
                }
                if (check_hlds__simplify__format_call__succeeded)
                  {
                    check_hlds__simplify__format_call__TypeInfo_14_14 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[5];
                    {
                      check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_14_14, ((MR_Box) (check_hlds__simplify__format_call__ArgX3_9)), ((MR_Box) (check_hlds__simplify__format_call__ArgY3_10)));
                    }
                  }
              }
          }
      }
    return check_hlds__simplify__format_call__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0(
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Integer check_hlds__simplify__format_call__CastX_13 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
    MR_Integer check_hlds__simplify__format_call__CastY_14 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_13 == check_hlds__simplify__format_call__CastY_14);
    if (check_hlds__simplify__format_call__succeeded)
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((check_hlds__simplify__format_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__simplify__format_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
      else
        *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word check_hlds__simplify__format_call__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

        if ((check_hlds__simplify__format_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word check_hlds__simplify__format_call__ArgY1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__format_call__ArgY2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__format_call__Var_12;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[4], &check_hlds__simplify__format_call__Var_12, ((MR_Box) (check_hlds__simplify__format_call__Var_18)), ((MR_Box) (check_hlds__simplify__format_call__ArgY1_9)));
            }
            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_12 == (MR_Integer) 0);
            check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
            if (check_hlds__simplify__format_call__succeeded)
              *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_12;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[4], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Var_17)), ((MR_Box) (check_hlds__simplify__format_call__ArgY2_11)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0(
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Integer check_hlds__simplify__format_call__CastX_9 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
    MR_Integer check_hlds__simplify__format_call__CastY_10 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_9 == check_hlds__simplify__format_call__CastY_10);
    if (check_hlds__simplify__format_call__succeeded)
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
    else
    if ((check_hlds__simplify__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer check_hlds__simplify__format_call__CastX_3 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
        MR_Integer check_hlds__simplify__format_call__CastY_4 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastY_4 == check_hlds__simplify__format_call__CastX_3);
      }
    else
      {
        MR_Word check_hlds__simplify__format_call__TypeInfo_11_11;
        MR_Word check_hlds__simplify__format_call__TypeInfo_12_12;
        MR_Word check_hlds__simplify__format_call__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__ArgY1_6;
        MR_Word check_hlds__simplify__format_call__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__ArgY2_8;

        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__simplify__format_call__succeeded)
          {
            check_hlds__simplify__format_call__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
            check_hlds__simplify__format_call__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
            check_hlds__simplify__format_call__TypeInfo_11_11 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[4];
            {
              check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_11_11, ((MR_Box) (check_hlds__simplify__format_call__ArgX1_5)), ((MR_Box) (check_hlds__simplify__format_call__ArgY1_6)));
            }
            if (check_hlds__simplify__format_call__succeeded)
              {
                check_hlds__simplify__format_call__TypeInfo_12_12 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[4];
                {
                  check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_12_12, ((MR_Box) (check_hlds__simplify__format_call__ArgX2_7)), ((MR_Box) (check_hlds__simplify__format_call__ArgY2_8)));
                }
              }
          }
      }
    return check_hlds__simplify__format_call__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0(
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Integer check_hlds__simplify__format_call__CastX_12 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
    MR_Integer check_hlds__simplify__format_call__CastY_13 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_12 == check_hlds__simplify__format_call__CastY_13);
    if (check_hlds__simplify__format_call__succeeded)
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__simplify__format_call__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__format_call__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__format_call__Var_10;

        {
          hlds__hlds_goal____Compare____hlds_goal_0_0(&check_hlds__simplify__format_call__Var_10, check_hlds__simplify__format_call__ArgX1_4, check_hlds__simplify__format_call__ArgY1_5);
        }
        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_10 == (MR_Integer) 0);
        check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
        if (check_hlds__simplify__format_call__succeeded)
          *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_10;
        else
          {
            MR_Word check_hlds__simplify__format_call__Var_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[4], &check_hlds__simplify__format_call__Var_11, ((MR_Box) (check_hlds__simplify__format_call__ArgX2_6)), ((MR_Box) (check_hlds__simplify__format_call__ArgY2_7)));
            }
            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_11 == (MR_Integer) 0);
            check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
            if (check_hlds__simplify__format_call__succeeded)
              *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[5], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__ArgX3_8)), ((MR_Box) (check_hlds__simplify__format_call__ArgY3_9)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0(
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Integer check_hlds__simplify__format_call__CastX_9 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
    MR_Integer check_hlds__simplify__format_call__CastY_10 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_9 == check_hlds__simplify__format_call__CastY_10);
    if (check_hlds__simplify__format_call__succeeded)
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__simplify__format_call__TypeInfo_12_12;
        MR_Word check_hlds__simplify__format_call__TypeInfo_13_13;
        MR_Word check_hlds__simplify__format_call__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__format_call__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));

        {
          check_hlds__simplify__format_call__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(check_hlds__simplify__format_call__ArgX1_3, check_hlds__simplify__format_call__ArgY1_4);
        }
        if (check_hlds__simplify__format_call__succeeded)
          {
            check_hlds__simplify__format_call__TypeInfo_12_12 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[4];
            {
              check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_12_12, ((MR_Box) (check_hlds__simplify__format_call__ArgX2_5)), ((MR_Box) (check_hlds__simplify__format_call__ArgY2_6)));
            }
            if (check_hlds__simplify__format_call__succeeded)
              {
                check_hlds__simplify__format_call__TypeInfo_13_13 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[5];
                {
                  check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_13_13, ((MR_Box) (check_hlds__simplify__format_call__ArgX3_7)), ((MR_Box) (check_hlds__simplify__format_call__ArgY3_8)));
                }
              }
          }
      }
    return check_hlds__simplify__format_call__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0(
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
{
  {
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_4 = check_hlds__simplify__format_call__HeadVar__2_2;
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_5 = check_hlds__simplify__format_call__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[0], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0(
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_3 = check_hlds__simplify__format_call__HeadVar__1_1;
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_4 = check_hlds__simplify__format_call__HeadVar__2_2;

    {
      check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_4)));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0(
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
{
  {
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_4 = check_hlds__simplify__format_call__HeadVar__2_2;
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_5 = check_hlds__simplify__format_call__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[5], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0(
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_3 = check_hlds__simplify__format_call__HeadVar__1_1;
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_4 = check_hlds__simplify__format_call__HeadVar__2_2;

    {
      check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[5], ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_4)));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_pred_map_0_0(
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
{
  {
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_4 = check_hlds__simplify__format_call__HeadVar__2_2;
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_5 = check_hlds__simplify__format_call__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[7], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_pred_map_0_0(
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_3 = check_hlds__simplify__format_call__HeadVar__1_1;
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_4 = check_hlds__simplify__format_call__HeadVar__2_2;

    {
      check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[7], ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_4)));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_maps_0_0(
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
{
  {
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_4 = check_hlds__simplify__format_call__HeadVar__2_2;
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_5 = check_hlds__simplify__format_call__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[6], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_maps_0_0(
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_3 = check_hlds__simplify__format_call__HeadVar__1_1;
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_4 = check_hlds__simplify__format_call__HeadVar__2_2;

    {
      check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[6], ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_4)));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_map_0_0(
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Integer check_hlds__simplify__format_call__CastX_15 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
    MR_Integer check_hlds__simplify__format_call__CastY_16 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_15 == check_hlds__simplify__format_call__CastY_16);
    if (check_hlds__simplify__format_call__succeeded)
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__simplify__format_call__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__format_call__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__format_call__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__format_call__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__format_call__Var_12;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[2], &check_hlds__simplify__format_call__Var_12, ((MR_Box) (check_hlds__simplify__format_call__ArgX1_4)), ((MR_Box) (check_hlds__simplify__format_call__ArgY1_5)));
        }
        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_12 == (MR_Integer) 0);
        check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
        if (check_hlds__simplify__format_call__succeeded)
          *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_12;
        else
          {
            MR_Word check_hlds__simplify__format_call__Var_13;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[3], &check_hlds__simplify__format_call__Var_13, ((MR_Box) (check_hlds__simplify__format_call__ArgX2_6)), ((MR_Box) (check_hlds__simplify__format_call__ArgY2_7)));
            }
            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_13 == (MR_Integer) 0);
            check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
            if (check_hlds__simplify__format_call__succeeded)
              *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_13;
            else
              {
                MR_Word check_hlds__simplify__format_call__Var_14;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[4], &check_hlds__simplify__format_call__Var_14, ((MR_Box) (check_hlds__simplify__format_call__ArgX3_8)), ((MR_Box) (check_hlds__simplify__format_call__ArgY3_9)));
                }
                check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_14 == (MR_Integer) 0);
                check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                if (check_hlds__simplify__format_call__succeeded)
                  *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__Var_14;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[5], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__ArgX4_10)), ((MR_Box) (check_hlds__simplify__format_call__ArgY4_11)));
                    }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_map_0_0(
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Integer check_hlds__simplify__format_call__CastX_11 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
    MR_Integer check_hlds__simplify__format_call__CastY_12 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_11 == check_hlds__simplify__format_call__CastY_12);
    if (check_hlds__simplify__format_call__succeeded)
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__simplify__format_call__TypeInfo_14_14;
        MR_Word check_hlds__simplify__format_call__TypeInfo_15_15;
        MR_Word check_hlds__simplify__format_call__TypeInfo_16_16;
        MR_Word check_hlds__simplify__format_call__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__format_call__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__format_call__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__format_call__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 3)));

        {
          check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[2], ((MR_Box) (check_hlds__simplify__format_call__ArgX1_3)), ((MR_Box) (check_hlds__simplify__format_call__ArgY1_4)));
        }
        if (check_hlds__simplify__format_call__succeeded)
          {
            check_hlds__simplify__format_call__TypeInfo_14_14 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_1[3];
            {
              check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_14_14, ((MR_Box) (check_hlds__simplify__format_call__ArgX2_5)), ((MR_Box) (check_hlds__simplify__format_call__ArgY2_6)));
            }
            if (check_hlds__simplify__format_call__succeeded)
              {
                check_hlds__simplify__format_call__TypeInfo_15_15 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_1[4];
                {
                  check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_15_15, ((MR_Box) (check_hlds__simplify__format_call__ArgX3_7)), ((MR_Box) (check_hlds__simplify__format_call__ArgY3_8)));
                }
                if (check_hlds__simplify__format_call__succeeded)
                  {
                    check_hlds__simplify__format_call__TypeInfo_16_16 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_1[5];
                    {
                      check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_16_16, ((MR_Box) (check_hlds__simplify__format_call__ArgX4_9)), ((MR_Box) (check_hlds__simplify__format_call__ArgY4_10)));
                    }
                  }
              }
          }
      }
    return check_hlds__simplify__format_call__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_id_0_0(
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Integer check_hlds__simplify__format_call__CastX_6 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
    MR_Integer check_hlds__simplify__format_call__CastY_7 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_6 == check_hlds__simplify__format_call__CastY_7);
    if (check_hlds__simplify__format_call__succeeded)
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer check_hlds__simplify__format_call__ArgX1_4 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
        MR_Integer check_hlds__simplify__format_call__ArgY1_5 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__ArgX1_4, check_hlds__simplify__format_call__ArgY1_5);
        }
      }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_id_0_0(
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Integer check_hlds__simplify__format_call__CastX_5 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
    MR_Integer check_hlds__simplify__format_call__CastY_6 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_5 == check_hlds__simplify__format_call__CastY_6);
    if (check_hlds__simplify__format_call__succeeded)
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
    else
      {
        MR_Integer check_hlds__simplify__format_call__ArgX1_3 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
        MR_Integer check_hlds__simplify__format_call__ArgY1_4 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__ArgX1_3 == check_hlds__simplify__format_call__ArgY1_4);
      }
    return check_hlds__simplify__format_call__succeeded;
  }
}

MR_Word MR_CALL 
check_hlds__simplify__format_call__project_case_goal_1_f_0(
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1)
{
  {
    MR_Word check_hlds__simplify__format_call__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__format_call__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__format_call__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));

    return check_hlds__simplify__format_call__Goal_5;
  }
}

void MR_CALL 
check_hlds__simplify__format_call__follow_poly_type_5_p_0(
  MR_Word check_hlds__simplify__format_call__ConjMaps_6,
  MR_Word check_hlds__simplify__format_call__PredMap_7,
  MR_Word check_hlds__simplify__format_call__CurId_8,
  MR_Word check_hlds__simplify__format_call__PolytypeVar_9,
  MR_Word * check_hlds__simplify__format_call__MaybeAbstractPolyType_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__format_call__succeeded;
        MR_Word check_hlds__simplify__format_call__ConjMap_11;
        MR_Word check_hlds__simplify__format_call__ElementMap_14;
        MR_Word check_hlds__simplify__format_call__EqvMap_15;
        MR_Word check_hlds__simplify__format_call__Var_12;
        MR_Word check_hlds__simplify__format_call__Var_13;
        MR_Word check_hlds__simplify__format_call__EqvVar_16;
        MR_Word check_hlds__simplify__format_call__TypeInfo_19_19;
        MR_Box check_hlds__simplify__format_call__conv0_EqvVar_16;

        {
          check_hlds__simplify__format_call__ConjMap_11 = check_hlds__simplify__format_call__get_conj_map_2_f_0(check_hlds__simplify__format_call__ConjMaps_6, check_hlds__simplify__format_call__CurId_8);
        }
        check_hlds__simplify__format_call__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 0)));
        check_hlds__simplify__format_call__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 1)));
        check_hlds__simplify__format_call__ElementMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 2)));
        check_hlds__simplify__format_call__EqvMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 3)));
        check_hlds__simplify__format_call__TypeInfo_19_19 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
        {
          check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__format_call__TypeInfo_19_19, check_hlds__simplify__format_call__TypeInfo_19_19, check_hlds__simplify__format_call__EqvMap_15, ((MR_Box) (check_hlds__simplify__format_call__PolytypeVar_9)), &check_hlds__simplify__format_call__conv0_EqvVar_16);
        }
        if (check_hlds__simplify__format_call__succeeded)
          {
            check_hlds__simplify__format_call__EqvVar_16 = ((MR_Word) check_hlds__simplify__format_call__conv0_EqvVar_16);
            check_hlds__simplify__format_call__succeeded = MR_TRUE;
          }
        if (check_hlds__simplify__format_call__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__simplify__format_call__next_value_of_PolytypeVar_9 = check_hlds__simplify__format_call__EqvVar_16;

              check_hlds__simplify__format_call__PolytypeVar_9 = check_hlds__simplify__format_call__next_value_of_PolytypeVar_9;
            }
            continue;
          }
        else
          {
            MR_Word check_hlds__simplify__format_call__AbstractPolyType_17;
            MR_Box check_hlds__simplify__format_call__conv1_AbstractPolyType_17;

            {
              check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], (MR_Word) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0, check_hlds__simplify__format_call__ElementMap_14, ((MR_Box) (check_hlds__simplify__format_call__PolytypeVar_9)), &check_hlds__simplify__format_call__conv1_AbstractPolyType_17);
            }
            if (check_hlds__simplify__format_call__succeeded)
              {
                check_hlds__simplify__format_call__AbstractPolyType_17 = ((MR_Word) check_hlds__simplify__format_call__conv1_AbstractPolyType_17);
                check_hlds__simplify__format_call__succeeded = MR_TRUE;
              }
            if (check_hlds__simplify__format_call__succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__simplify__format_call__MaybeAbstractPolyType_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__AbstractPolyType_17));
              }
            else
              {
                MR_Word check_hlds__simplify__format_call__PredId_18;
                MR_Word check_hlds__simplify__format_call__TypeCtorInfo_22_22 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
                MR_Box check_hlds__simplify__format_call__conv2_PredId_18;

                {
                  check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_22_22, check_hlds__simplify__format_call__TypeCtorInfo_22_22, check_hlds__simplify__format_call__PredMap_7, ((MR_Box) (check_hlds__simplify__format_call__CurId_8)), &check_hlds__simplify__format_call__conv2_PredId_18);
                }
                if (check_hlds__simplify__format_call__succeeded)
                  {
                    check_hlds__simplify__format_call__PredId_18 = ((MR_Word) check_hlds__simplify__format_call__conv2_PredId_18);
                    check_hlds__simplify__format_call__succeeded = MR_TRUE;
                  }
                if (check_hlds__simplify__format_call__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word check_hlds__simplify__format_call__next_value_of_CurId_8 = check_hlds__simplify__format_call__PredId_18;

                      check_hlds__simplify__format_call__CurId_8 = check_hlds__simplify__format_call__next_value_of_CurId_8;
                    }
                    continue;
                  }
                else
                  *check_hlds__simplify__format_call__MaybeAbstractPolyType_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
          }
      }
      break;
    }
}

static MR_Box MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_14_p_0_2(
  MR_Box check_hlds__simplify__format_call__closure_arg,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1)
{
  {
    MR_Box check_hlds__simplify__format_call__wrapper_arg_2;
    MR_Box check_hlds__simplify__format_call__closure = check_hlds__simplify__format_call__closure_arg;
    MR_Word check_hlds__simplify__format_call__conv1_HeadVar__2_2;

    {
      check_hlds__simplify__format_call__conv1_HeadVar__2_2 = check_hlds__simplify__format_call__string_format_error_to_words_1_f_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1));
    }
    check_hlds__simplify__format_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__format_call__conv1_HeadVar__2_2));
    return check_hlds__simplify__format_call__wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_14_p_0_1(
  MR_Box check_hlds__simplify__format_call__closure_arg,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_2)
{
  {
    MR_Box check_hlds__simplify__format_call__closure = check_hlds__simplify__format_call__closure_arg;
    MR_Word check_hlds__simplify__format_call__conv0_MaybeAbstractPolyType_10;

    {
      check_hlds__simplify__format_call__follow_poly_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), &check_hlds__simplify__format_call__conv0_MaybeAbstractPolyType_10);
    }
    *check_hlds__simplify__format_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__format_call__conv0_MaybeAbstractPolyType_10));
  }
}

void MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_14_p_0(
  MR_Word check_hlds__simplify__format_call__ModuleInfo_15,
  MR_Word check_hlds__simplify__format_call__ImplicitStreamWarnings_16,
  MR_Word check_hlds__simplify__format_call__OptFormatCalls_17,
  MR_Word check_hlds__simplify__format_call__ConjMaps_18,
  MR_Word check_hlds__simplify__format_call__PredMap_19,
  MR_Word check_hlds__simplify__format_call__FormatCallSite_20,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_76,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_77,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Specs_0_78,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Specs_79,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_80,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_81,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_82,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_83)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Word check_hlds__simplify__format_call__GoalId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_20, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__format_call__GoalInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_20, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__format_call__StringVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_20, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__format_call__ValuesVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_20, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__format_call__CallKind_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_20, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__format_call__PredId_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_20, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__format_call__ModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_20, (MR_Integer) 6)));
    MR_String check_hlds__simplify__format_call__Name_32 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_20, (MR_Integer) 7)));
    MR_Integer check_hlds__simplify__format_call__Arity_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_20, (MR_Integer) 8)));
    MR_Word check_hlds__simplify__format_call__Context_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_20, (MR_Integer) 9)));
    MR_Word check_hlds__simplify__format_call__CurId_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_20, (MR_Integer) 10)));
    MR_Word check_hlds__simplify__format_call__SymName_39;
    MR_Word check_hlds__simplify__format_call__Globals_40;
    MR_Word check_hlds__simplify__format_call__FormatStringResult_41;
    MR_Word check_hlds__simplify__format_call__SkeletonResult_49;
    MR_Word check_hlds__simplify__format_call__MaybePolyTypesInfo_55;
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Specs_84_84;
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Specs_105_105;
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Specs_130_130;
    MR_Word check_hlds__simplify__format_call__PolytypeVars0_50;
    MR_Word check_hlds__simplify__format_call__SkeletonVars0_51;
    MR_Word check_hlds__simplify__format_call__AbstractPolyTypes0_53;
    MR_Word check_hlds__simplify__format_call__TypeInfo_169_169;
    MR_Word check_hlds__simplify__format_call__TypeInfo_170_170;
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_171_171;
    MR_Word check_hlds__simplify__format_call__MaybeAbstractPolyTypes0_52;
    MR_Word check_hlds__simplify__format_call__Var_106;
    MR_String check_hlds__simplify__format_call__FormatString_60;
    MR_Word check_hlds__simplify__format_call__FormatStringToDeleteVars_61;
    MR_Word check_hlds__simplify__format_call__ToDeleteGoals_62;
    MR_Word check_hlds__simplify__format_call__AbstractPolyTypes_63;
    MR_Word check_hlds__simplify__format_call__PolyTypeToDeleteVars_64;
    MR_Tuple check_hlds__simplify__format_call__Var_131;

    switch (check_hlds__simplify__format_call__ImplicitStreamWarnings_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__simplify__format_call__STATE_VARIABLE_Specs_84_84 = check_hlds__simplify__format_call__STATE_VARIABLE_Specs_0_78;
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__simplify__format_call__PredInfo_36;
          MR_Word check_hlds__simplify__format_call__MaybeImplicitStreamSpec_37;

          {
            hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__format_call__ModuleInfo_15, check_hlds__simplify__format_call__PredId_30, &check_hlds__simplify__format_call__PredInfo_36);
          }
          {
            check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0(check_hlds__simplify__format_call__ModuleInfo_15, check_hlds__simplify__format_call__PredId_30, check_hlds__simplify__format_call__PredInfo_36, check_hlds__simplify__format_call__GoalInfo_26, &check_hlds__simplify__format_call__MaybeImplicitStreamSpec_37);
          }
          if ((check_hlds__simplify__format_call__MaybeImplicitStreamSpec_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            check_hlds__simplify__format_call__STATE_VARIABLE_Specs_84_84 = check_hlds__simplify__format_call__STATE_VARIABLE_Specs_0_78;
          else
            {
              MR_Word check_hlds__simplify__format_call__ImplicitStreamSpec_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeImplicitStreamSpec_37, (MR_Integer) 0)));

              {
                check_hlds__simplify__format_call__STATE_VARIABLE_Specs_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_Specs_84_84, 0) = ((MR_Box) (check_hlds__simplify__format_call__ImplicitStreamSpec_38));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_Specs_84_84, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_Specs_0_78));
              }
            }
        }
        break;
    }
    {
      check_hlds__simplify__format_call__SymName_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SymName_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__ModuleName_31));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SymName_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__Name_32));
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__format_call__ModuleInfo_15, &check_hlds__simplify__format_call__Globals_40);
    }
    {
      check_hlds__simplify__format_call__follow_format_string_5_p_0(check_hlds__simplify__format_call__ConjMaps_18, check_hlds__simplify__format_call__PredMap_19, check_hlds__simplify__format_call__CurId_35, check_hlds__simplify__format_call__StringVar_27, &check_hlds__simplify__format_call__FormatStringResult_41);
    }
    if ((check_hlds__simplify__format_call__FormatStringResult_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__simplify__format_call__WarnUnknownFormatCallsA_45;

        {
          libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__format_call__Globals_40, (MR_Integer) 43, &check_hlds__simplify__format_call__WarnUnknownFormatCallsA_45);
        }
        switch (check_hlds__simplify__format_call__WarnUnknownFormatCallsA_45) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__simplify__format_call__STATE_VARIABLE_Specs_105_105 = check_hlds__simplify__format_call__STATE_VARIABLE_Specs_84_84;
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__simplify__format_call__UnknownFormatPieces_46;
              MR_Word check_hlds__simplify__format_call__UnknownFormatMsg_47;
              MR_Word check_hlds__simplify__format_call__UnknownFormatSpec_48;
              MR_Word check_hlds__simplify__format_call__Var_88;
              MR_Word check_hlds__simplify__format_call__Var_89;
              MR_Word check_hlds__simplify__format_call__Var_90;
              MR_Word check_hlds__simplify__format_call__Var_97;
              MR_Word check_hlds__simplify__format_call__Var_98;
              MR_Word check_hlds__simplify__format_call__Var_103;

              {
                check_hlds__simplify__format_call__Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_90, 0) = ((MR_Box) (check_hlds__simplify__format_call__SymName_39));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_90, 1) = ((MR_Box) (check_hlds__simplify__format_call__Arity_33));
              }
              {
                check_hlds__simplify__format_call__Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Var_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Var_89, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_90));
              }
              {
                check_hlds__simplify__format_call__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_88, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_89));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[8])));
              }
              {
                check_hlds__simplify__format_call__UnknownFormatPieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__UnknownFormatPieces_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[18])));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__UnknownFormatPieces_46, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_88));
              }
              {
                check_hlds__simplify__format_call__Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_98, 0) = ((MR_Box) (check_hlds__simplify__format_call__UnknownFormatPieces_46));
              }
              {
                check_hlds__simplify__format_call__Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_97, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_98));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__format_call__UnknownFormatMsg_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatMsg_47, 0) = ((MR_Box) (check_hlds__simplify__format_call__Context_34));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatMsg_47, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_97));
              }
              {
                check_hlds__simplify__format_call__Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_103, 0) = ((MR_Box) (check_hlds__simplify__format_call__UnknownFormatMsg_47));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__format_call__UnknownFormatSpec_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatSpec_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatSpec_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__format_call_scalar_common_3[4])));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatSpec_48, 2) = ((MR_Box) (check_hlds__simplify__format_call__Var_103));
              }
              {
                check_hlds__simplify__format_call__STATE_VARIABLE_Specs_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_Specs_105_105, 0) = ((MR_Box) (check_hlds__simplify__format_call__UnknownFormatSpec_48));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_Specs_105_105, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_Specs_84_84));
              }
            }
            break;
        }
      }
    else
      check_hlds__simplify__format_call__STATE_VARIABLE_Specs_105_105 = check_hlds__simplify__format_call__STATE_VARIABLE_Specs_84_84;
    {
      check_hlds__simplify__format_call__follow_list_skeleton_5_p_0(check_hlds__simplify__format_call__ConjMaps_18, check_hlds__simplify__format_call__PredMap_19, check_hlds__simplify__format_call__CurId_35, check_hlds__simplify__format_call__ValuesVar_28, &check_hlds__simplify__format_call__SkeletonResult_49);
    }
    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__SkeletonResult_49)) == (MR_mktag((MR_Integer) 1)));
    if (check_hlds__simplify__format_call__succeeded)
      {
        check_hlds__simplify__format_call__PolytypeVars0_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SkeletonResult_49, (MR_Integer) 0)));
        check_hlds__simplify__format_call__SkeletonVars0_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SkeletonResult_49, (MR_Integer) 1)));
        check_hlds__simplify__format_call__TypeInfo_169_169 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
        check_hlds__simplify__format_call__TypeInfo_170_170 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[3];
        {
          check_hlds__simplify__format_call__Var_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_106, 0) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_7[1]));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_106, 1) = ((MR_Box) (check_hlds__simplify__format_call__check_format_call_site_14_p_0_1));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_106, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_106, 3) = ((MR_Box) (check_hlds__simplify__format_call__ConjMaps_18));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_106, 4) = ((MR_Box) (check_hlds__simplify__format_call__PredMap_19));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_106, 5) = ((MR_Box) (check_hlds__simplify__format_call__CurId_35));
        }
        {
          mercury__list__map_3_p_0(check_hlds__simplify__format_call__TypeInfo_169_169, check_hlds__simplify__format_call__TypeInfo_170_170, check_hlds__simplify__format_call__Var_106, check_hlds__simplify__format_call__PolytypeVars0_50, &check_hlds__simplify__format_call__MaybeAbstractPolyTypes0_52);
        }
        check_hlds__simplify__format_call__TypeCtorInfo_171_171 = (MR_Word) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0;
        {
          check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call__project_all_yes_2_p_0(check_hlds__simplify__format_call__TypeCtorInfo_171_171, check_hlds__simplify__format_call__MaybeAbstractPolyTypes0_52, &check_hlds__simplify__format_call__AbstractPolyTypes0_53);
        }
      }
    if (check_hlds__simplify__format_call__succeeded)
      {
        MR_Word check_hlds__simplify__format_call__PolyTypesToDeleteVars0_54;
        MR_Word check_hlds__simplify__format_call__Var_107;
        MR_Word check_hlds__simplify__format_call__Var_108;
        MR_Tuple check_hlds__simplify__format_call__Var_109;

        {
          check_hlds__simplify__format_call__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_108, 0) = ((MR_Box) (check_hlds__simplify__format_call__ValuesVar_28));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_108, 1) = ((MR_Box) (check_hlds__simplify__format_call__SkeletonVars0_51));
        }
        {
          check_hlds__simplify__format_call__Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_107, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringVar_27));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_107, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_108));
        }
        {
          check_hlds__simplify__format_call__PolyTypesToDeleteVars0_54 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__Var_107, check_hlds__simplify__format_call__PolytypeVars0_50);
        }
        {
          check_hlds__simplify__format_call__Var_109 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_109, 0) = ((MR_Box) (check_hlds__simplify__format_call__AbstractPolyTypes0_53));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_109, 1) = ((MR_Box) (check_hlds__simplify__format_call__PolyTypesToDeleteVars0_54));
        }
        {
          check_hlds__simplify__format_call__MaybePolyTypesInfo_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybePolyTypesInfo_55, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_109));
        }
        check_hlds__simplify__format_call__STATE_VARIABLE_Specs_130_130 = check_hlds__simplify__format_call__STATE_VARIABLE_Specs_105_105;
      }
    else
      {
        MR_Word check_hlds__simplify__format_call__WarnUnknownFormatCallsB_56;

        check_hlds__simplify__format_call__MaybePolyTypesInfo_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__format_call__Globals_40, (MR_Integer) 43, &check_hlds__simplify__format_call__WarnUnknownFormatCallsB_56);
        }
        switch (check_hlds__simplify__format_call__WarnUnknownFormatCallsB_56) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__simplify__format_call__STATE_VARIABLE_Specs_130_130 = check_hlds__simplify__format_call__STATE_VARIABLE_Specs_105_105;
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__simplify__format_call__UnknownFormatValuesPieces_57;
              MR_Word check_hlds__simplify__format_call__UnknownFormatValuesMsg_58;
              MR_Word check_hlds__simplify__format_call__UnknownFormatValuesSpec_59;
              MR_Word check_hlds__simplify__format_call__Var_113;
              MR_Word check_hlds__simplify__format_call__Var_114;
              MR_Word check_hlds__simplify__format_call__Var_115;
              MR_Word check_hlds__simplify__format_call__Var_122;
              MR_Word check_hlds__simplify__format_call__Var_123;
              MR_Word check_hlds__simplify__format_call__Var_128;

              {
                check_hlds__simplify__format_call__Var_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_115, 0) = ((MR_Box) (check_hlds__simplify__format_call__SymName_39));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_115, 1) = ((MR_Box) (check_hlds__simplify__format_call__Arity_33));
              }
              {
                check_hlds__simplify__format_call__Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Var_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Var_114, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_115));
              }
              {
                check_hlds__simplify__format_call__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_113, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_114));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[8])));
              }
              {
                check_hlds__simplify__format_call__UnknownFormatValuesPieces_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__UnknownFormatValuesPieces_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[19])));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__UnknownFormatValuesPieces_57, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_113));
              }
              {
                check_hlds__simplify__format_call__Var_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_123, 0) = ((MR_Box) (check_hlds__simplify__format_call__UnknownFormatValuesPieces_57));
              }
              {
                check_hlds__simplify__format_call__Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_122, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_123));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__format_call__UnknownFormatValuesMsg_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatValuesMsg_58, 0) = ((MR_Box) (check_hlds__simplify__format_call__Context_34));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatValuesMsg_58, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_122));
              }
              {
                check_hlds__simplify__format_call__Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_128, 0) = ((MR_Box) (check_hlds__simplify__format_call__UnknownFormatValuesMsg_58));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__format_call__UnknownFormatValuesSpec_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatValuesSpec_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatValuesSpec_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__format_call_scalar_common_3[4])));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatValuesSpec_59, 2) = ((MR_Box) (check_hlds__simplify__format_call__Var_128));
              }
              {
                check_hlds__simplify__format_call__STATE_VARIABLE_Specs_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_Specs_130_130, 0) = ((MR_Box) (check_hlds__simplify__format_call__UnknownFormatValuesSpec_59));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_Specs_130_130, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_Specs_105_105));
              }
            }
            break;
        }
      }
    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__FormatStringResult_41)) == (MR_mktag((MR_Integer) 1)));
    if (check_hlds__simplify__format_call__succeeded)
      {
        check_hlds__simplify__format_call__FormatString_60 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__FormatStringResult_41, (MR_Integer) 0)));
        check_hlds__simplify__format_call__FormatStringToDeleteVars_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__FormatStringResult_41, (MR_Integer) 1)));
        check_hlds__simplify__format_call__ToDeleteGoals_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__FormatStringResult_41, (MR_Integer) 2)));
        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__MaybePolyTypesInfo_55)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__simplify__format_call__succeeded)
          {
            check_hlds__simplify__format_call__Var_131 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybePolyTypesInfo_55, (MR_Integer) 0)));
            check_hlds__simplify__format_call__AbstractPolyTypes_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_131, (MR_Integer) 0)));
            check_hlds__simplify__format_call__PolyTypeToDeleteVars_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_131, (MR_Integer) 1)));
            check_hlds__simplify__format_call__succeeded = MR_TRUE;
          }
      }
    if (check_hlds__simplify__format_call__succeeded)
      {
        MR_Word check_hlds__simplify__format_call__FormatStringChars_65;
        MR_Word check_hlds__simplify__format_call__MaybeSpecs_66;

        {
          mercury__string__to_char_list_2_p_0(check_hlds__simplify__format_call__FormatString_60, &check_hlds__simplify__format_call__FormatStringChars_65);
        }
        {
          check_hlds__simplify__format_call__parse_string_format__parse_and_optimize_format_string_4_p_0(check_hlds__simplify__format_call__FormatStringChars_65, check_hlds__simplify__format_call__AbstractPolyTypes_63, check_hlds__simplify__format_call__Context_34, &check_hlds__simplify__format_call__MaybeSpecs_66);
        }
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__MaybeSpecs_66)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word check_hlds__simplify__format_call__HeadError_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeSpecs_66, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__format_call__TailErrors_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeSpecs_66, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__format_call__WarnKnownBadFormatCalls_69;

            {
              libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__format_call__Globals_40, (MR_Integer) 41, &check_hlds__simplify__format_call__WarnKnownBadFormatCalls_69);
            }
            switch (check_hlds__simplify__format_call__WarnKnownBadFormatCalls_69) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__simplify__format_call__STATE_VARIABLE_Specs_79 = check_hlds__simplify__format_call__STATE_VARIABLE_Specs_130_130;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__simplify__format_call__PrefixPieces_70;
                  MR_Word check_hlds__simplify__format_call__WarnOnlyOneFormatStringError_71;
                  MR_Word check_hlds__simplify__format_call__ErrorPieces_72;
                  MR_Word check_hlds__simplify__format_call__BadFormatMsg_73;
                  MR_Word check_hlds__simplify__format_call__BadFormatSpec_74;
                  MR_Word check_hlds__simplify__format_call__Var_138;
                  MR_Word check_hlds__simplify__format_call__Var_141;
                  MR_Word check_hlds__simplify__format_call__Var_142;
                  MR_Word check_hlds__simplify__format_call__Var_143;
                  MR_Word check_hlds__simplify__format_call__Var_156;
                  MR_Word check_hlds__simplify__format_call__Var_157;
                  MR_Word check_hlds__simplify__format_call__Var_158;
                  MR_Word check_hlds__simplify__format_call__Var_159;
                  MR_Word check_hlds__simplify__format_call__Var_164;

                  {
                    check_hlds__simplify__format_call__Var_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_143, 0) = ((MR_Box) (check_hlds__simplify__format_call__SymName_39));
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_143, 1) = ((MR_Box) (check_hlds__simplify__format_call__Arity_33));
                  }
                  {
                    check_hlds__simplify__format_call__Var_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Var_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Var_142, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_143));
                  }
                  {
                    check_hlds__simplify__format_call__Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_141, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_142));
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[10])));
                  }
                  {
                    check_hlds__simplify__format_call__Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_138, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[21])));
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_138, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_141));
                  }
                  {
                    check_hlds__simplify__format_call__PrefixPieces_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__PrefixPieces_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[20])));
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__PrefixPieces_70, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_138));
                  }
                  {
                    libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__format_call__Globals_40, (MR_Integer) 42, &check_hlds__simplify__format_call__WarnOnlyOneFormatStringError_71);
                  }
                  switch (check_hlds__simplify__format_call__WarnOnlyOneFormatStringError_71) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word check_hlds__simplify__format_call__Var_151;
                        MR_Word check_hlds__simplify__format_call__Var_152;

                        {
                          check_hlds__simplify__format_call__Var_151 = check_hlds__simplify__format_call__string_format_error_to_words_1_f_0(check_hlds__simplify__format_call__HeadError_67);
                        }
                        {
                          check_hlds__simplify__format_call__Var_152 = mercury__list__map_2_f_0((MR_Word) &mercury__string__parse_util__string__parse_util__type_ctor_info_string_format_error_0, (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) &check_hlds__simplify__format_call_scalar_common_1[11], check_hlds__simplify__format_call__TailErrors_68);
                        }
                        {
                          check_hlds__simplify__format_call__ErrorPieces_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ErrorPieces_72, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_151));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ErrorPieces_72, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_152));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word check_hlds__simplify__format_call__Var_154;

                        {
                          check_hlds__simplify__format_call__Var_154 = check_hlds__simplify__format_call__string_format_error_to_words_1_f_0(check_hlds__simplify__format_call__HeadError_67);
                        }
                        {
                          check_hlds__simplify__format_call__ErrorPieces_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ErrorPieces_72, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_154));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ErrorPieces_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                      }
                      break;
                  }
                  {
                    check_hlds__simplify__format_call__Var_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_157, 0) = ((MR_Box) (check_hlds__simplify__format_call__PrefixPieces_70));
                  }
                  {
                    check_hlds__simplify__format_call__Var_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_159, 0) = ((MR_Box) (check_hlds__simplify__format_call__ErrorPieces_72));
                  }
                  {
                    check_hlds__simplify__format_call__Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_158, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_159));
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    check_hlds__simplify__format_call__Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_156, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_157));
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_156, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_158));
                  }
                  {
                    check_hlds__simplify__format_call__BadFormatMsg_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__BadFormatMsg_73, 0) = ((MR_Box) (check_hlds__simplify__format_call__Context_34));
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__BadFormatMsg_73, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_156));
                  }
                  {
                    check_hlds__simplify__format_call__Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_164, 0) = ((MR_Box) (check_hlds__simplify__format_call__BadFormatMsg_73));
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    check_hlds__simplify__format_call__BadFormatSpec_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__BadFormatSpec_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__BadFormatSpec_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__format_call_scalar_common_3[4])));
                    MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__BadFormatSpec_74, 2) = ((MR_Box) (check_hlds__simplify__format_call__Var_164));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__simplify__format_call__STATE_VARIABLE_Specs_79 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__BadFormatSpec_74));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_Specs_130_130));
                  }
                }
                break;
            }
            *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_77 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_76;
            *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_81 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_80;
            *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_83 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_82;
          }
        else
          {
            MR_Word check_hlds__simplify__format_call__Specs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__MaybeSpecs_66, (MR_Integer) 0)));

            switch (check_hlds__simplify__format_call__OptFormatCalls_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_77 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_76;
                  *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_81 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_80;
                  *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_83 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_82;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__simplify__format_call__ToDeleteVars_75;

                  {
                    check_hlds__simplify__format_call__ToDeleteVars_75 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__FormatStringToDeleteVars_61, check_hlds__simplify__format_call__PolyTypeToDeleteVars_64);
                  }
                  {
                    check_hlds__simplify__format_call__create_replacement_goal_12_p_0(check_hlds__simplify__format_call__ModuleInfo_15, check_hlds__simplify__format_call__GoalId_25, check_hlds__simplify__format_call__CallKind_29, check_hlds__simplify__format_call__Specs_22, check_hlds__simplify__format_call__ToDeleteVars_75, check_hlds__simplify__format_call__ToDeleteGoals_62, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_76, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_77, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_80, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_81, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_82, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_83);
                  }
                }
                break;
            }
            *check_hlds__simplify__format_call__STATE_VARIABLE_Specs_79 = check_hlds__simplify__format_call__STATE_VARIABLE_Specs_130_130;
          }
      }
    else
      {
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_83 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_82;
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_81 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_80;
        *check_hlds__simplify__format_call__STATE_VARIABLE_Specs_79 = check_hlds__simplify__format_call__STATE_VARIABLE_Specs_130_130;
        *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_77 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_76;
      }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__create_replacement_goal_12_p_0(
  MR_Word check_hlds__simplify__format_call__ModuleInfo_13,
  MR_Word check_hlds__simplify__format_call__GoalId_14,
  MR_Word check_hlds__simplify__format_call__CallKind_15,
  MR_Word check_hlds__simplify__format_call__Specs_16,
  MR_Word check_hlds__simplify__format_call__ToDeleteVars_17,
  MR_Word check_hlds__simplify__format_call__ToDeleteGoals_18,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_33,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_34,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_35,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_36,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_37,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_38)
{
  {
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_52_52;
    MR_Word check_hlds__simplify__format_call__ReplacementGoal_24;
    MR_Word check_hlds__simplify__format_call__FCOptGoalInfo_32;
    MR_Word check_hlds__simplify__format_call__Var_45;
    MR_Word check_hlds__simplify__format_call__Var_46;

    switch (MR_tag((MR_Word) check_hlds__simplify__format_call__CallKind_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__simplify__format_call__Context_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__CallKind_15, (MR_Integer) 0)));
          MR_Word check_hlds__simplify__format_call__ResultVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__CallKind_15, (MR_Integer) 1)));

          {
            check_hlds__simplify__format_call__create_string_format_replacement_9_p_0(check_hlds__simplify__format_call__ModuleInfo_13, check_hlds__simplify__format_call__Specs_16, check_hlds__simplify__format_call__Context_22, check_hlds__simplify__format_call__ResultVar_23, &check_hlds__simplify__format_call__ReplacementGoal_24, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_35, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_36, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_37, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_38);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__simplify__format_call__IOInVar_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__CallKind_15, (MR_Integer) 1)));
          MR_Word check_hlds__simplify__format_call__IOOutVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__CallKind_15, (MR_Integer) 2)));
          MR_Word check_hlds__simplify__format_call__Context_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__CallKind_15, (MR_Integer) 0)));

          {
            check_hlds__simplify__format_call__create_io_format_replacement_11_p_0(check_hlds__simplify__format_call__ModuleInfo_13, check_hlds__simplify__format_call__Specs_16, check_hlds__simplify__format_call__Context_48, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__IOInVar_25, check_hlds__simplify__format_call__IOOutVar_26, &check_hlds__simplify__format_call__ReplacementGoal_24, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_35, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_36, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_37, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_38);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__simplify__format_call__StreamVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__CallKind_15, (MR_Integer) 1)));
          MR_Word check_hlds__simplify__format_call__IOInVar_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__CallKind_15, (MR_Integer) 2)));
          MR_Word check_hlds__simplify__format_call__IOOutVar_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__CallKind_15, (MR_Integer) 3)));
          MR_Word check_hlds__simplify__format_call__MaybeStreamVar_56;
          MR_Word check_hlds__simplify__format_call__Context_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__CallKind_15, (MR_Integer) 0)));

          {
            check_hlds__simplify__format_call__MaybeStreamVar_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeStreamVar_56, 0) = ((MR_Box) (check_hlds__simplify__format_call__StreamVar_28));
          }
          {
            check_hlds__simplify__format_call__create_io_format_replacement_11_p_0(check_hlds__simplify__format_call__ModuleInfo_13, check_hlds__simplify__format_call__Specs_16, check_hlds__simplify__format_call__Context_57, check_hlds__simplify__format_call__MaybeStreamVar_56, check_hlds__simplify__format_call__IOInVar_54, check_hlds__simplify__format_call__IOOutVar_55, &check_hlds__simplify__format_call__ReplacementGoal_24, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_35, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_36, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_37, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_38);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word check_hlds__simplify__format_call__TC_InfoVarForStream_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__CallKind_15, (MR_Integer) 1)));
          MR_Word check_hlds__simplify__format_call__StateInVar_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__CallKind_15, (MR_Integer) 3)));
          MR_Word check_hlds__simplify__format_call__StateOutVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__CallKind_15, (MR_Integer) 4)));
          MR_Word check_hlds__simplify__format_call__Context_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__CallKind_15, (MR_Integer) 0)));
          MR_Word check_hlds__simplify__format_call__StreamVar_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__CallKind_15, (MR_Integer) 2)));

          {
            check_hlds__simplify__format_call__create_stream_string_writer_format_replacement_12_p_0(check_hlds__simplify__format_call__ModuleInfo_13, check_hlds__simplify__format_call__Specs_16, check_hlds__simplify__format_call__Context_49, check_hlds__simplify__format_call__TC_InfoVarForStream_29, check_hlds__simplify__format_call__StreamVar_50, check_hlds__simplify__format_call__StateInVar_30, check_hlds__simplify__format_call__StateOutVar_31, &check_hlds__simplify__format_call__ReplacementGoal_24, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_35, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_36, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_37, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_38);
          }
        }
        break;
    }
    {
      check_hlds__simplify__format_call__Var_45 = mercury__list__sort_1_f_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__ToDeleteVars_17);
    }
    check_hlds__simplify__format_call__TypeCtorInfo_52_52 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
    {
      check_hlds__simplify__format_call__Var_46 = mercury__list__sort_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_52_52, check_hlds__simplify__format_call__ToDeleteGoals_18);
    }
    {
      check_hlds__simplify__format_call__FCOptGoalInfo_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FCOptGoalInfo_32, 0) = ((MR_Box) (check_hlds__simplify__format_call__ReplacementGoal_24));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FCOptGoalInfo_32, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_45));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FCOptGoalInfo_32, 2) = ((MR_Box) (check_hlds__simplify__format_call__Var_46));
    }
    {
      mercury__map__det_insert_4_p_0(check_hlds__simplify__format_call__TypeCtorInfo_52_52, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0, ((MR_Box) (check_hlds__simplify__format_call__GoalId_14)), ((MR_Box) (check_hlds__simplify__format_call__FCOptGoalInfo_32)), check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_33, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_34);
    }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__create_stream_string_writer_format_replacement_12_p_0(
  MR_Word check_hlds__simplify__format_call__ModuleInfo_13,
  MR_Word check_hlds__simplify__format_call__Specs_14,
  MR_Word check_hlds__simplify__format_call__Context_15,
  MR_Word check_hlds__simplify__format_call__TC_InfoVarForStream_16,
  MR_Word check_hlds__simplify__format_call__StreamVar_17,
  MR_Word check_hlds__simplify__format_call__StateInVar_18,
  MR_Word check_hlds__simplify__format_call__StateOutVar_19,
  MR_Word * check_hlds__simplify__format_call__ReplacementGoal_20,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_32,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_33,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_34,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_35)
{
  {
    MR_Word check_hlds__simplify__format_call__ResultVar_23;
    MR_Word check_hlds__simplify__format_call__StringFormatGoals_24;
    MR_Word check_hlds__simplify__format_call__ValueVars_25;
    MR_Word check_hlds__simplify__format_call__ArgVars_26;
    MR_Word check_hlds__simplify__format_call__InstMapDelta_27;
    MR_Word check_hlds__simplify__format_call__CallGoal_28;
    MR_Word check_hlds__simplify__format_call__Goals_29;
    MR_Word check_hlds__simplify__format_call__NonLocals_30;
    MR_Word check_hlds__simplify__format_call__GoalInfo_31;
    MR_Word check_hlds__simplify__format_call__Var_39;
    MR_Word check_hlds__simplify__format_call__Var_40;
    MR_Word check_hlds__simplify__format_call__Var_41;
    MR_Word check_hlds__simplify__format_call__Var_42;
    MR_Word check_hlds__simplify__format_call__Var_44;
    MR_Word check_hlds__simplify__format_call__Var_53;
    MR_Word check_hlds__simplify__format_call__Var_55;
    MR_Word check_hlds__simplify__format_call__Var_56;

    {
      check_hlds__simplify__format_call__replace_string_format_11_p_0(check_hlds__simplify__format_call__ModuleInfo_13, check_hlds__simplify__format_call__Specs_14, check_hlds__simplify__format_call__Context_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__ResultVar_23, &check_hlds__simplify__format_call__StringFormatGoals_24, &check_hlds__simplify__format_call__ValueVars_25, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_32, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_33, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_34, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_35);
    }
    {
      check_hlds__simplify__format_call__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_42, 0) = ((MR_Box) (check_hlds__simplify__format_call__StateOutVar_19));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__format_call__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_41, 0) = ((MR_Box) (check_hlds__simplify__format_call__StateInVar_18));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_41, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_42));
    }
    {
      check_hlds__simplify__format_call__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__ResultVar_23));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_40, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_41));
    }
    {
      check_hlds__simplify__format_call__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__StreamVar_17));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_40));
    }
    {
      check_hlds__simplify__format_call__ArgVars_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_26, 0) = ((MR_Box) (check_hlds__simplify__format_call__TC_InfoVarForStream_16));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_26, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_39));
    }
    {
      check_hlds__simplify__format_call__make_di_uo_instmap_delta_3_p_0(check_hlds__simplify__format_call__StateInVar_18, check_hlds__simplify__format_call__StateOutVar_19, &check_hlds__simplify__format_call__InstMapDelta_27);
    }
    {
      check_hlds__simplify__format_call__Var_44 = mdbcomp__builtin_modules__mercury_stream_module_0_f_0();
    }
    {
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__format_call__Var_44, (MR_String) "put", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__ArgVars_26, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[13]), check_hlds__simplify__format_call__InstMapDelta_27, check_hlds__simplify__format_call__ModuleInfo_13, check_hlds__simplify__format_call__Context_15, &check_hlds__simplify__format_call__CallGoal_28);
    }
    {
      check_hlds__simplify__format_call__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_53, 0) = ((MR_Box) (check_hlds__simplify__format_call__CallGoal_28));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__format_call__Goals_29 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__format_call__StringFormatGoals_24, check_hlds__simplify__format_call__Var_53);
    }
    {
      check_hlds__simplify__format_call__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_56, 0) = ((MR_Box) (check_hlds__simplify__format_call__StreamVar_17));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_56, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_41));
    }
    {
      check_hlds__simplify__format_call__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_55, 0) = ((MR_Box) (check_hlds__simplify__format_call__TC_InfoVarForStream_16));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_55, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_56));
    }
    {
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__Var_55, check_hlds__simplify__format_call__ValueVars_25, &check_hlds__simplify__format_call__NonLocals_30);
    }
    {
      hlds__hlds_goal__goal_info_init_6_p_0(check_hlds__simplify__format_call__NonLocals_30, check_hlds__simplify__format_call__InstMapDelta_27, (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__Context_15, &check_hlds__simplify__format_call__GoalInfo_31);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__simplify__format_call__Goals_29, check_hlds__simplify__format_call__GoalInfo_31, check_hlds__simplify__format_call__ReplacementGoal_20);
    }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__create_io_format_replacement_11_p_0(
  MR_Word check_hlds__simplify__format_call__ModuleInfo_12,
  MR_Word check_hlds__simplify__format_call__Specs_13,
  MR_Word check_hlds__simplify__format_call__Context_14,
  MR_Word check_hlds__simplify__format_call__MaybeStreamVar_15,
  MR_Word check_hlds__simplify__format_call__IOInVar_16,
  MR_Word check_hlds__simplify__format_call__IOOutVar_17,
  MR_Word * check_hlds__simplify__format_call__ReplacementGoal_18,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_26,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_27,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_28,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_29)
{
  {
    MR_Word check_hlds__simplify__format_call__Goals_21;
    MR_Word check_hlds__simplify__format_call__ValueVars_22;
    MR_Word check_hlds__simplify__format_call__InstMapDelta_23;
    MR_Word check_hlds__simplify__format_call__NonLocals_24;
    MR_Word check_hlds__simplify__format_call__GoalInfo_25;
    MR_Word check_hlds__simplify__format_call__Var_32;
    MR_Word check_hlds__simplify__format_call__Var_33;

    {
      check_hlds__simplify__format_call__replace_io_format_11_p_0(check_hlds__simplify__format_call__ModuleInfo_12, check_hlds__simplify__format_call__Specs_13, check_hlds__simplify__format_call__MaybeStreamVar_15, check_hlds__simplify__format_call__IOInVar_16, check_hlds__simplify__format_call__IOOutVar_17, &check_hlds__simplify__format_call__Goals_21, &check_hlds__simplify__format_call__ValueVars_22, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_26, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_27, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_28, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_29);
    }
    {
      check_hlds__simplify__format_call__make_di_uo_instmap_delta_3_p_0(check_hlds__simplify__format_call__IOInVar_16, check_hlds__simplify__format_call__IOOutVar_17, &check_hlds__simplify__format_call__InstMapDelta_23);
    }
    {
      check_hlds__simplify__format_call__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_33, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOOutVar_17));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__format_call__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_32, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOInVar_16));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_32, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_33));
    }
    {
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__Var_32, check_hlds__simplify__format_call__ValueVars_22, &check_hlds__simplify__format_call__NonLocals_24);
    }
    {
      hlds__hlds_goal__goal_info_init_6_p_0(check_hlds__simplify__format_call__NonLocals_24, check_hlds__simplify__format_call__InstMapDelta_23, (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__Context_14, &check_hlds__simplify__format_call__GoalInfo_25);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__simplify__format_call__Goals_21, check_hlds__simplify__format_call__GoalInfo_25, check_hlds__simplify__format_call__ReplacementGoal_18);
    }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__replace_io_format_11_p_0(
  MR_Word check_hlds__simplify__format_call__ModuleInfo_12,
  MR_Word check_hlds__simplify__format_call__Specs_13,
  MR_Word check_hlds__simplify__format_call__MaybeStreamVar_14,
  MR_Word check_hlds__simplify__format_call__IOInVar_15,
  MR_Word check_hlds__simplify__format_call__IOOutVar_16,
  MR_Word * check_hlds__simplify__format_call__Goals_17,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_33,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_34,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_35,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_36,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_37)
{
  {
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_59_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_38_38;

    {
      parse_tree__set_of_var__init_1_p_0(check_hlds__simplify__format_call__TypeCtorInfo_59_59, &check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_38_38);
    }
    if ((check_hlds__simplify__format_call__Specs_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__simplify__format_call__Unification_21;
        MR_Word check_hlds__simplify__format_call__GoalExpr_27;
        MR_Word check_hlds__simplify__format_call__InstMapDelta_28;
        MR_Word check_hlds__simplify__format_call__GoalInfo_29;
        MR_Word check_hlds__simplify__format_call__Goal_30;
        MR_Word check_hlds__simplify__format_call__Var_51;
        MR_Word check_hlds__simplify__format_call__Var_52;
        MR_Word check_hlds__simplify__format_call__Var_55;
        MR_Word check_hlds__simplify__format_call__Var_56;

        {
          check_hlds__simplify__format_call__Unification_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Unification_21, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOOutVar_16));
          MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Unification_21, 1) = ((MR_Box) (check_hlds__simplify__format_call__IOInVar_15));
        }
        {
          check_hlds__simplify__format_call__Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_51, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOInVar_15));
        }
        {
          check_hlds__simplify__format_call__GoalExpr_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_27, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOOutVar_16));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_27, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_51));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_27, 2) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[16]));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_27, 3) = ((MR_Box) (check_hlds__simplify__format_call__Unification_21));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_27, 4) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[17]));
        }
        {
          check_hlds__simplify__format_call__make_di_uo_instmap_delta_3_p_0(check_hlds__simplify__format_call__IOInVar_15, check_hlds__simplify__format_call__IOOutVar_16, &check_hlds__simplify__format_call__InstMapDelta_28);
        }
        {
          check_hlds__simplify__format_call__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_56, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOOutVar_16));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__simplify__format_call__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_55, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOInVar_15));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_55, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_56));
        }
        {
          check_hlds__simplify__format_call__Var_52 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_59_59, check_hlds__simplify__format_call__Var_55);
        }
        {
          hlds__hlds_goal__goal_info_init_5_p_0(check_hlds__simplify__format_call__Var_52, check_hlds__simplify__format_call__InstMapDelta_28, (MR_Integer) 0, (MR_Integer) 0, &check_hlds__simplify__format_call__GoalInfo_29);
        }
        {
          check_hlds__simplify__format_call__Goal_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Goal_30, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_27));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Goal_30, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_29));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__simplify__format_call__Goals_17 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Goal_30));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        *check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_33 = check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_38_38;
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_35 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_34;
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_37 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_36;
      }
    else
      {
        MR_Word check_hlds__simplify__format_call__HeadSpec_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Specs_13, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__TailSpecs_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Specs_13, (MR_Integer) 1)));

        {
          check_hlds__simplify__format_call__replace_io_format_nonempty_13_p_0(check_hlds__simplify__format_call__ModuleInfo_12, check_hlds__simplify__format_call__HeadSpec_31, check_hlds__simplify__format_call__TailSpecs_32, check_hlds__simplify__format_call__MaybeStreamVar_14, check_hlds__simplify__format_call__IOInVar_15, check_hlds__simplify__format_call__IOOutVar_16, check_hlds__simplify__format_call__Goals_17, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_38_38, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_33, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_34, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_35, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_36, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_37);
        }
      }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__replace_io_format_nonempty_13_p_0(
  MR_Word check_hlds__simplify__format_call__ModuleInfo_14,
  MR_Word check_hlds__simplify__format_call__HeadSpec_15,
  MR_Word check_hlds__simplify__format_call__TailSpecs_16,
  MR_Word check_hlds__simplify__format_call__MaybeStreamVar_17,
  MR_Word check_hlds__simplify__format_call__IOInVar_18,
  MR_Word check_hlds__simplify__format_call__IOOutVar_19,
  MR_Word * check_hlds__simplify__format_call__Goals_20,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_29,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_30,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_31,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_32,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_33,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_34)
{
  if ((check_hlds__simplify__format_call__TailSpecs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      check_hlds__simplify__format_call__replace_one_io_format_12_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__HeadSpec_15, check_hlds__simplify__format_call__MaybeStreamVar_17, check_hlds__simplify__format_call__IOInVar_18, check_hlds__simplify__format_call__IOOutVar_19, check_hlds__simplify__format_call__Goals_20, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_29, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_30, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_31, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_32, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_33, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_34);
    }
  else
    {
      MR_Word check_hlds__simplify__format_call__FirstTailSpec_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TailSpecs_16, (MR_Integer) 0)));
      MR_Word check_hlds__simplify__format_call__LaterTailSpecs_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TailSpecs_16, (MR_Integer) 1)));
      MR_Word check_hlds__simplify__format_call__IOMidVar_26;
      MR_Word check_hlds__simplify__format_call__HeadSpecGoals_27;
      MR_Word check_hlds__simplify__format_call__TailSpecsGoals_28;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_35_35;
      MR_Word check_hlds__simplify__format_call__Var_36;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_37_37;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_38_38;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_39_39;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_40_40;

      {
        mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__simplify__format_call__IOMidVar_26, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_31, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_35_35);
      }
      {
        check_hlds__simplify__format_call__Var_36 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
      }
      {
        hlds__vartypes__add_var_type_4_p_0(check_hlds__simplify__format_call__IOMidVar_26, check_hlds__simplify__format_call__Var_36, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_33, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_37_37);
      }
      {
        check_hlds__simplify__format_call__replace_one_io_format_12_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__HeadSpec_15, check_hlds__simplify__format_call__MaybeStreamVar_17, check_hlds__simplify__format_call__IOInVar_18, check_hlds__simplify__format_call__IOMidVar_26, &check_hlds__simplify__format_call__HeadSpecGoals_27, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_29, &check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_38_38, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_35_35, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_39_39, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_37_37, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_40_40);
      }
      {
        check_hlds__simplify__format_call__replace_io_format_nonempty_13_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__FirstTailSpec_24, check_hlds__simplify__format_call__LaterTailSpecs_25, check_hlds__simplify__format_call__MaybeStreamVar_17, check_hlds__simplify__format_call__IOMidVar_26, check_hlds__simplify__format_call__IOOutVar_19, &check_hlds__simplify__format_call__TailSpecsGoals_28, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_38_38, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_30, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_39_39, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_32, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_40_40, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_34);
      }
      {
        *check_hlds__simplify__format_call__Goals_20 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__format_call__HeadSpecGoals_27, check_hlds__simplify__format_call__TailSpecsGoals_28);
      }
    }
}

void MR_CALL 
check_hlds__simplify__format_call__replace_one_io_format_12_p_0(
  MR_Word check_hlds__simplify__format_call__ModuleInfo_13,
  MR_Word check_hlds__simplify__format_call__Spec_14,
  MR_Word check_hlds__simplify__format_call__MaybeStreamVar_15,
  MR_Word check_hlds__simplify__format_call__IOInVar_16,
  MR_Word check_hlds__simplify__format_call__IOOutVar_17,
  MR_Word * check_hlds__simplify__format_call__Goals_18,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_29,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_30,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_31,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_32,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_33,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_34)
{
  {
    MR_Word check_hlds__simplify__format_call__SpecVar_22;
    MR_Word check_hlds__simplify__format_call__SpecGoals_23;
    MR_Word check_hlds__simplify__format_call__SpecContext_24;
    MR_Word check_hlds__simplify__format_call__ArgVars_26;
    MR_Word check_hlds__simplify__format_call__InstMapDelta_27;
    MR_Word check_hlds__simplify__format_call__CallGoal_28;
    MR_Word check_hlds__simplify__format_call__Var_46;
    MR_Word check_hlds__simplify__format_call__Var_55;

    {
      check_hlds__simplify__format_call__represent_spec_12_p_0(check_hlds__simplify__format_call__ModuleInfo_13, check_hlds__simplify__format_call__Spec_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__SpecVar_22, &check_hlds__simplify__format_call__SpecGoals_23, &check_hlds__simplify__format_call__SpecContext_24, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_29, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_30, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_31, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_32, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_33, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_34);
    }
    if ((check_hlds__simplify__format_call__MaybeStreamVar_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__simplify__format_call__Var_39;
        MR_Word check_hlds__simplify__format_call__Var_40;

        {
          check_hlds__simplify__format_call__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOOutVar_17));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__simplify__format_call__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOInVar_16));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_40));
        }
        {
          check_hlds__simplify__format_call__ArgVars_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_26, 0) = ((MR_Box) (check_hlds__simplify__format_call__SpecVar_22));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_26, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_39));
        }
      }
    else
      {
        MR_Word check_hlds__simplify__format_call__StreamVar_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeStreamVar_15, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__Var_42;
        MR_Word check_hlds__simplify__format_call__Var_43;
        MR_Word check_hlds__simplify__format_call__Var_44;

        {
          check_hlds__simplify__format_call__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_44, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOOutVar_17));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__simplify__format_call__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_43, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOInVar_16));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_43, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_44));
        }
        {
          check_hlds__simplify__format_call__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_42, 0) = ((MR_Box) (check_hlds__simplify__format_call__SpecVar_22));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_42, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_43));
        }
        {
          check_hlds__simplify__format_call__ArgVars_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_26, 0) = ((MR_Box) (check_hlds__simplify__format_call__StreamVar_25));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_26, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_42));
        }
      }
    {
      check_hlds__simplify__format_call__make_di_uo_instmap_delta_3_p_0(check_hlds__simplify__format_call__IOInVar_16, check_hlds__simplify__format_call__IOOutVar_17, &check_hlds__simplify__format_call__InstMapDelta_27);
    }
    {
      check_hlds__simplify__format_call__Var_46 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
    }
    {
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__format_call__Var_46, (MR_String) "write_string", (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__ArgVars_26, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[13]), check_hlds__simplify__format_call__InstMapDelta_27, check_hlds__simplify__format_call__ModuleInfo_13, check_hlds__simplify__format_call__SpecContext_24, &check_hlds__simplify__format_call__CallGoal_28);
    }
    {
      check_hlds__simplify__format_call__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_55, 0) = ((MR_Box) (check_hlds__simplify__format_call__CallGoal_28));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      *check_hlds__simplify__format_call__Goals_18 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__format_call__SpecGoals_23, check_hlds__simplify__format_call__Var_55);
    }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__make_di_uo_instmap_delta_3_p_0(
  MR_Word check_hlds__simplify__format_call__InVar_4,
  MR_Word check_hlds__simplify__format_call__OutVar_5,
  MR_Word * check_hlds__simplify__format_call__InstMapDelta_6)
{
  {
    MR_Word check_hlds__simplify__format_call__Var_13;
    MR_Word check_hlds__simplify__format_call__Var_14;
    MR_Word check_hlds__simplify__format_call__Var_15;
    MR_Word check_hlds__simplify__format_call__Var_16;

    {
      check_hlds__simplify__format_call__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_14, 0) = ((MR_Box) (check_hlds__simplify__format_call__InVar_4));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[10])));
    }
    {
      check_hlds__simplify__format_call__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_16, 0) = ((MR_Box) (check_hlds__simplify__format_call__OutVar_5));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[9])));
    }
    {
      check_hlds__simplify__format_call__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_15, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_16));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__format_call__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_13, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_14));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_13, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_15));
    }
    {
      *check_hlds__simplify__format_call__InstMapDelta_6 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__format_call__Var_13);
    }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__create_string_format_replacement_9_p_0(
  MR_Word check_hlds__simplify__format_call__ModuleInfo_10,
  MR_Word check_hlds__simplify__format_call__Specs_11,
  MR_Word check_hlds__simplify__format_call__Context_12,
  MR_Word check_hlds__simplify__format_call__ResultVar_13,
  MR_Word * check_hlds__simplify__format_call__ReplacementGoal_14,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_25,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_26,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_27,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_28)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Word check_hlds__simplify__format_call__ActualResultVar_17;
    MR_Word check_hlds__simplify__format_call__Goals_18;
    MR_Word check_hlds__simplify__format_call__ValueVars_19;
    MR_Word check_hlds__simplify__format_call__AllGoals_20;
    MR_Word check_hlds__simplify__format_call__NonLocals_22;
    MR_Word check_hlds__simplify__format_call__InstMapDelta_23;
    MR_Word check_hlds__simplify__format_call__GoalInfo_24;
    MR_Word check_hlds__simplify__format_call__Var_29;

    {
      check_hlds__simplify__format_call__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_29, 0) = ((MR_Box) (check_hlds__simplify__format_call__ResultVar_13));
    }
    {
      check_hlds__simplify__format_call__replace_string_format_11_p_0(check_hlds__simplify__format_call__ModuleInfo_10, check_hlds__simplify__format_call__Specs_11, check_hlds__simplify__format_call__Context_12, check_hlds__simplify__format_call__Var_29, &check_hlds__simplify__format_call__ActualResultVar_17, &check_hlds__simplify__format_call__Goals_18, &check_hlds__simplify__format_call__ValueVars_19, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_25, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_26, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_27, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_28);
    }
    {
      check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], ((MR_Box) (check_hlds__simplify__format_call__ActualResultVar_17)), ((MR_Box) (check_hlds__simplify__format_call__ResultVar_13)));
    }
    if (check_hlds__simplify__format_call__succeeded)
      check_hlds__simplify__format_call__AllGoals_20 = check_hlds__simplify__format_call__Goals_18;
    else
      {
        MR_Word check_hlds__simplify__format_call__AssignGoal_21;
        MR_Word check_hlds__simplify__format_call__Var_35;

        {
          hlds__make_goal__make_simple_assign_5_p_0(check_hlds__simplify__format_call__ResultVar_13, check_hlds__simplify__format_call__ActualResultVar_17, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_3[2]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__AssignGoal_21);
        }
        {
          check_hlds__simplify__format_call__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_35, 0) = ((MR_Box) (check_hlds__simplify__format_call__AssignGoal_21));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__simplify__format_call__AllGoals_20 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__format_call__Goals_18, check_hlds__simplify__format_call__Var_35);
        }
      }
    {
      parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__ResultVar_13, check_hlds__simplify__format_call__ValueVars_19, &check_hlds__simplify__format_call__NonLocals_22);
    }
    {
      check_hlds__simplify__format_call__InstMapDelta_23 = hlds__instmap__instmap_delta_bind_var_1_f_0(check_hlds__simplify__format_call__ResultVar_13);
    }
    {
      hlds__hlds_goal__goal_info_init_6_p_0(check_hlds__simplify__format_call__NonLocals_22, check_hlds__simplify__format_call__InstMapDelta_23, (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__Context_12, &check_hlds__simplify__format_call__GoalInfo_24);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__simplify__format_call__AllGoals_20, check_hlds__simplify__format_call__GoalInfo_24, check_hlds__simplify__format_call__ReplacementGoal_14);
    }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__replace_string_format_11_p_0(
  MR_Word check_hlds__simplify__format_call__ModuleInfo_12,
  MR_Word check_hlds__simplify__format_call__Specs_13,
  MR_Word check_hlds__simplify__format_call__Context_14,
  MR_Word check_hlds__simplify__format_call__MaybeResultVar_15,
  MR_Word * check_hlds__simplify__format_call__ResultVar_16,
  MR_Word * check_hlds__simplify__format_call__Goals_17,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_24,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_25,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_26,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_27,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_28)
{
  {
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_29_29;

    {
      parse_tree__set_of_var__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_29_29);
    }
    if ((check_hlds__simplify__format_call__Specs_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word check_hlds__simplify__format_call__Goal_21;

        {
          check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(check_hlds__simplify__format_call__MaybeResultVar_15, check_hlds__simplify__format_call__ResultVar_16, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_25, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_26, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_27, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_28);
        }
        {
          hlds__make_goal__make_string_const_construction_3_p_0(*check_hlds__simplify__format_call__ResultVar_16, (MR_String) "", &check_hlds__simplify__format_call__Goal_21);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__simplify__format_call__Goals_17 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Goal_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        *check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_24 = check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_29_29;
      }
    else
      {
        MR_Word check_hlds__simplify__format_call__HeadSpec_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Specs_13, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__TailSpecs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Specs_13, (MR_Integer) 1)));

        {
          check_hlds__simplify__format_call__replace_string_format_nonempty_13_p_0(check_hlds__simplify__format_call__ModuleInfo_12, check_hlds__simplify__format_call__HeadSpec_22, check_hlds__simplify__format_call__TailSpecs_23, check_hlds__simplify__format_call__Context_14, check_hlds__simplify__format_call__MaybeResultVar_15, check_hlds__simplify__format_call__ResultVar_16, check_hlds__simplify__format_call__Goals_17, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_29_29, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_24, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_25, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_26, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_27, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_28);
        }
      }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__replace_string_format_nonempty_13_p_0(
  MR_Word check_hlds__simplify__format_call__ModuleInfo_14,
  MR_Word check_hlds__simplify__format_call__HeadSpec_15,
  MR_Word check_hlds__simplify__format_call__TailSpecs_16,
  MR_Word check_hlds__simplify__format_call__Context_17,
  MR_Word check_hlds__simplify__format_call__MaybeResultVar_18,
  MR_Word * check_hlds__simplify__format_call__ResultVar_19,
  MR_Word * check_hlds__simplify__format_call__Goals_20,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_32,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_33,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_34,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_35,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_36,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_37)
{
  if ((check_hlds__simplify__format_call__TailSpecs_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word check_hlds__simplify__format_call___HeadSpecContext_24;

      {
        check_hlds__simplify__format_call__represent_spec_12_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__HeadSpec_15, check_hlds__simplify__format_call__MaybeResultVar_18, check_hlds__simplify__format_call__ResultVar_19, check_hlds__simplify__format_call__Goals_20, &check_hlds__simplify__format_call___HeadSpecContext_24, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_32, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_33, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_34, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_35, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_36, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_37);
      }
    }
  else
    {
      MR_Word check_hlds__simplify__format_call__TypeCtorInfo_74_74;
      MR_Word check_hlds__simplify__format_call__FirstTailSpec_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TailSpecs_16, (MR_Integer) 0)));
      MR_Word check_hlds__simplify__format_call__LaterTailSpecs_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TailSpecs_16, (MR_Integer) 1)));
      MR_Word check_hlds__simplify__format_call__TailSpecsVar_27;
      MR_Word check_hlds__simplify__format_call__TailSpecsGoals_28;
      MR_Word check_hlds__simplify__format_call__HeadSpecVar_29;
      MR_Word check_hlds__simplify__format_call__HeadSpecGoals_30;
      MR_Word check_hlds__simplify__format_call__AppendGoal_31;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_39_39;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_40_40;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_41_41;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_44_44;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_45_45;
      MR_Word check_hlds__simplify__format_call__Var_48;
      MR_Word check_hlds__simplify__format_call__Var_54;
      MR_Word check_hlds__simplify__format_call__Var_56;
      MR_Word check_hlds__simplify__format_call__Var_57;
      MR_Word check_hlds__simplify__format_call__Var_58;
      MR_Word check_hlds__simplify__format_call__Var_60;
      MR_Word check_hlds__simplify__format_call__Var_61;
      MR_Word check_hlds__simplify__format_call__Var_66;
      MR_Word check_hlds__simplify__format_call__Var_67;
      MR_Word check_hlds__simplify__format_call___HeadSpecContext_72;

      {
        check_hlds__simplify__format_call__replace_string_format_nonempty_13_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__FirstTailSpec_25, check_hlds__simplify__format_call__LaterTailSpecs_26, check_hlds__simplify__format_call__Context_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__TailSpecsVar_27, &check_hlds__simplify__format_call__TailSpecsGoals_28, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_32, &check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_39_39, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_34, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_40_40, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_36, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_41_41);
      }
      {
        check_hlds__simplify__format_call__represent_spec_12_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__HeadSpec_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__HeadSpecVar_29, &check_hlds__simplify__format_call__HeadSpecGoals_30, &check_hlds__simplify__format_call___HeadSpecContext_72, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_39_39, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_33, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_40_40, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_44_44, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_41_41, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_45_45);
      }
      {
        check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(check_hlds__simplify__format_call__MaybeResultVar_18, check_hlds__simplify__format_call__ResultVar_19, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_44_44, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_35, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_45_45, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_37);
      }
      {
        check_hlds__simplify__format_call__Var_48 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
      }
      {
        check_hlds__simplify__format_call__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_58, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_19));
        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        check_hlds__simplify__format_call__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_57, 0) = ((MR_Box) (check_hlds__simplify__format_call__TailSpecsVar_27));
        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_57, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_58));
      }
      {
        check_hlds__simplify__format_call__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_54, 0) = ((MR_Box) (check_hlds__simplify__format_call__HeadSpecVar_29));
        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_54, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_57));
      }
      {
        check_hlds__simplify__format_call__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_61, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_19));
        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[9])));
      }
      {
        check_hlds__simplify__format_call__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_60, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_61));
        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        check_hlds__simplify__format_call__Var_56 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__format_call__Var_60);
      }
      {
        hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__format_call__Var_48, (MR_String) "++", (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__Var_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__Var_56, check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__Context_17, &check_hlds__simplify__format_call__AppendGoal_31);
      }
      check_hlds__simplify__format_call__TypeCtorInfo_74_74 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
      {
        check_hlds__simplify__format_call__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_67, 0) = ((MR_Box) (check_hlds__simplify__format_call__AppendGoal_31));
        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        check_hlds__simplify__format_call__Var_66 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_74_74, check_hlds__simplify__format_call__HeadSpecGoals_30, check_hlds__simplify__format_call__Var_67);
      }
      {
        *check_hlds__simplify__format_call__Goals_20 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_74_74, check_hlds__simplify__format_call__TailSpecsGoals_28, check_hlds__simplify__format_call__Var_66);
      }
    }
}

void MR_CALL 
check_hlds__simplify__format_call__represent_spec_12_p_0(
  MR_Word check_hlds__simplify__format_call__ModuleInfo_13,
  MR_Word check_hlds__simplify__format_call__Spec_14,
  MR_Word check_hlds__simplify__format_call__MaybeResultVar_15,
  MR_Word * check_hlds__simplify__format_call__ResultVar_16,
  MR_Word * check_hlds__simplify__format_call__Goals_17,
  MR_Word * check_hlds__simplify__format_call__Context_18,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_44,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_45,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_46,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_47,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_48,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_49)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    switch (MR_tag((MR_Word) check_hlds__simplify__format_call__Spec_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String check_hlds__simplify__format_call__StringConstant_22;
          MR_Word check_hlds__simplify__format_call__Goal_23;

          *check_hlds__simplify__format_call__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 0)));
          check_hlds__simplify__format_call__StringConstant_22 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 1)));
          {
            check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(check_hlds__simplify__format_call__MaybeResultVar_15, check_hlds__simplify__format_call__ResultVar_16, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_46, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_47, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_48, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_49);
          }
          {
            hlds__make_goal__make_string_const_construction_3_p_0(*check_hlds__simplify__format_call__ResultVar_16, check_hlds__simplify__format_call__StringConstant_22, &check_hlds__simplify__format_call__Goal_23);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__simplify__format_call__Goals_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Goal_23));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          *check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_45 = check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_44;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__simplify__format_call__TypeInfo_311_311;
          MR_Word check_hlds__simplify__format_call__TypeCtorInfo_312_312;
          MR_Word check_hlds__simplify__format_call__Flags_24;
          MR_Word check_hlds__simplify__format_call__MaybeWidth_25;
          MR_Word check_hlds__simplify__format_call__ValueVar_26;
          MR_Word check_hlds__simplify__format_call__FlagsVar_27;
          MR_Word check_hlds__simplify__format_call__FlagsGoals_28;
          MR_String check_hlds__simplify__format_call__WidthSuffix_29;
          MR_Word check_hlds__simplify__format_call__WidthVars_30;
          MR_Word check_hlds__simplify__format_call__WidthGoals_31;
          MR_Word check_hlds__simplify__format_call__CallGoal_32;
          MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_216_216;
          MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_217_217;
          MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_218_218;
          MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_219_219;
          MR_Word check_hlds__simplify__format_call__Var_222;
          MR_String check_hlds__simplify__format_call__Var_223;
          MR_Word check_hlds__simplify__format_call__Var_228;
          MR_Word check_hlds__simplify__format_call__Var_230;
          MR_Word check_hlds__simplify__format_call__Var_232;
          MR_Word check_hlds__simplify__format_call__Var_234;
          MR_Word check_hlds__simplify__format_call__Var_235;
          MR_Word check_hlds__simplify__format_call__Var_236;
          MR_Word check_hlds__simplify__format_call__Var_238;
          MR_Word check_hlds__simplify__format_call__Var_239;
          MR_Word check_hlds__simplify__format_call__Var_244;
          MR_Word check_hlds__simplify__format_call__Var_245;

          *check_hlds__simplify__format_call__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 0)));
          check_hlds__simplify__format_call__Flags_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 1)));
          check_hlds__simplify__format_call__MaybeWidth_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 2)));
          check_hlds__simplify__format_call__ValueVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 3)));
          {
            parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__ValueVar_26, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_44, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_45);
          }
          {
            check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(check_hlds__simplify__format_call__MaybeResultVar_15, check_hlds__simplify__format_call__ResultVar_16, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_46, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_216_216, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_48, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_217_217);
          }
          {
            check_hlds__simplify__format_call__build_flags_arg_7_p_0(check_hlds__simplify__format_call__Flags_24, &check_hlds__simplify__format_call__FlagsVar_27, &check_hlds__simplify__format_call__FlagsGoals_28, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_216_216, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_218_218, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_217_217, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_219_219);
          }
          {
            check_hlds__simplify__format_call__maybe_build_width_arg_8_p_0(check_hlds__simplify__format_call__MaybeWidth_25, &check_hlds__simplify__format_call__WidthSuffix_29, &check_hlds__simplify__format_call__WidthVars_30, &check_hlds__simplify__format_call__WidthGoals_31, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_218_218, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_47, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_219_219, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_49);
          }
          {
            check_hlds__simplify__format_call__Var_222 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
          }
          {
            check_hlds__simplify__format_call__Var_223 = mercury__string__f_43_43_2_f_0((MR_String) "format_char_component", check_hlds__simplify__format_call__WidthSuffix_29);
          }
          check_hlds__simplify__format_call__TypeInfo_311_311 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
          {
            check_hlds__simplify__format_call__Var_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_232, 0) = ((MR_Box) (check_hlds__simplify__format_call__FlagsVar_27));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_232, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__simplify__format_call__Var_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_236, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_16));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_236, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__simplify__format_call__Var_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_235, 0) = ((MR_Box) (check_hlds__simplify__format_call__ValueVar_26));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_235, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_236));
          }
          {
            check_hlds__simplify__format_call__Var_234 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_311_311, check_hlds__simplify__format_call__WidthVars_30, check_hlds__simplify__format_call__Var_235);
          }
          {
            check_hlds__simplify__format_call__Var_228 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_311_311, check_hlds__simplify__format_call__Var_232, check_hlds__simplify__format_call__Var_234);
          }
          {
            check_hlds__simplify__format_call__Var_239 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_239, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_16));
            MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_239, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[9])));
          }
          {
            check_hlds__simplify__format_call__Var_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_238, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_239));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_238, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__simplify__format_call__Var_230 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__format_call__Var_238);
          }
          {
            hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__format_call__Var_222, check_hlds__simplify__format_call__Var_223, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__Var_228, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__Var_230, check_hlds__simplify__format_call__ModuleInfo_13, *check_hlds__simplify__format_call__Context_18, &check_hlds__simplify__format_call__CallGoal_32);
          }
          check_hlds__simplify__format_call__TypeCtorInfo_312_312 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
          {
            check_hlds__simplify__format_call__Var_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_245, 0) = ((MR_Box) (check_hlds__simplify__format_call__CallGoal_32));
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_245, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__simplify__format_call__Var_244 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_312_312, check_hlds__simplify__format_call__WidthGoals_31, check_hlds__simplify__format_call__Var_245);
          }
          {
            *check_hlds__simplify__format_call__Goals_17 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_312_312, check_hlds__simplify__format_call__FlagsGoals_28, check_hlds__simplify__format_call__Var_244);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__simplify__format_call__MaybePrec_33;
          MR_Word check_hlds__simplify__format_call__Flags_262;
          MR_Word check_hlds__simplify__format_call__MaybeWidth_263;
          MR_Word check_hlds__simplify__format_call__ValueVar_264;
          MR_Word check_hlds__simplify__format_call__Var_170;
          MR_Word check_hlds__simplify__format_call__Var_171;
          MR_Word check_hlds__simplify__format_call__Var_172;
          MR_Word check_hlds__simplify__format_call__Var_173;
          MR_Word check_hlds__simplify__format_call__Var_174;

          *check_hlds__simplify__format_call__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 0)));
          check_hlds__simplify__format_call__Flags_262 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 1)));
          check_hlds__simplify__format_call__MaybeWidth_263 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 2)));
          check_hlds__simplify__format_call__MaybePrec_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 3)));
          check_hlds__simplify__format_call__ValueVar_264 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 4)));
          {
            parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__ValueVar_264, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_44, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_45);
          }
          check_hlds__simplify__format_call__Var_170 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Flags_262, (MR_Integer) 0)))) & (MR_Integer) 1);
          check_hlds__simplify__format_call__Var_171 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Flags_262, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          check_hlds__simplify__format_call__Var_172 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Flags_262, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          check_hlds__simplify__format_call__Var_173 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Flags_262, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          check_hlds__simplify__format_call__Var_174 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Flags_262, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
          check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_170 == (MR_Integer) 0);
          if (check_hlds__simplify__format_call__succeeded)
            {
              check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_171 == (MR_Integer) 0);
              if (check_hlds__simplify__format_call__succeeded)
                {
                  check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_172 == (MR_Integer) 0);
                  if (check_hlds__simplify__format_call__succeeded)
                    {
                      check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_173 == (MR_Integer) 0);
                      if (check_hlds__simplify__format_call__succeeded)
                        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_174 == (MR_Integer) 0);
                    }
                }
            }
          if (check_hlds__simplify__format_call__succeeded)
            {
              check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__MaybeWidth_263 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (check_hlds__simplify__format_call__succeeded)
                check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__MaybePrec_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          if (check_hlds__simplify__format_call__succeeded)
            {
              if ((check_hlds__simplify__format_call__MaybeResultVar_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  *check_hlds__simplify__format_call__ResultVar_16 = check_hlds__simplify__format_call__ValueVar_264;
                  *check_hlds__simplify__format_call__Goals_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
              else
                {
                  MR_Word check_hlds__simplify__format_call__AssignGoal_34;

                  *check_hlds__simplify__format_call__ResultVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeResultVar_15, (MR_Integer) 0)));
                  {
                    hlds__make_goal__make_simple_assign_5_p_0(*check_hlds__simplify__format_call__ResultVar_16, check_hlds__simplify__format_call__ValueVar_264, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_3[1]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__AssignGoal_34);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__simplify__format_call__Goals_17 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__AssignGoal_34));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
              *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_49 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_48;
              *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_47 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_46;
            }
          else
            {
              MR_Word check_hlds__simplify__format_call__TypeInfo_314_314;
              MR_Word check_hlds__simplify__format_call__TypeCtorInfo_315_315;
              MR_String check_hlds__simplify__format_call__PrecSuffix_35;
              MR_Word check_hlds__simplify__format_call__PrecVars_36;
              MR_Word check_hlds__simplify__format_call__PrecGoals_37;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_179_179;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_180_180;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_181_181;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_182_182;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_183_183;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_184_184;
              MR_Word check_hlds__simplify__format_call__Var_187;
              MR_String check_hlds__simplify__format_call__Var_188;
              MR_Word check_hlds__simplify__format_call__Var_193;
              MR_Word check_hlds__simplify__format_call__Var_195;
              MR_String check_hlds__simplify__format_call__Var_197;
              MR_Word check_hlds__simplify__format_call__Var_198;
              MR_Word check_hlds__simplify__format_call__Var_200;
              MR_Word check_hlds__simplify__format_call__Var_201;
              MR_Word check_hlds__simplify__format_call__Var_202;
              MR_Word check_hlds__simplify__format_call__Var_203;
              MR_Word check_hlds__simplify__format_call__Var_205;
              MR_Word check_hlds__simplify__format_call__Var_206;
              MR_Word check_hlds__simplify__format_call__Var_211;
              MR_Word check_hlds__simplify__format_call__Var_212;
              MR_Word check_hlds__simplify__format_call__Var_213;
              MR_Word check_hlds__simplify__format_call__FlagsVar_250;
              MR_Word check_hlds__simplify__format_call__FlagsGoals_251;
              MR_String check_hlds__simplify__format_call__WidthSuffix_252;
              MR_Word check_hlds__simplify__format_call__WidthVars_253;
              MR_Word check_hlds__simplify__format_call__WidthGoals_254;
              MR_Word check_hlds__simplify__format_call__CallGoal_255;

              {
                check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(check_hlds__simplify__format_call__MaybeResultVar_15, check_hlds__simplify__format_call__ResultVar_16, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_46, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_179_179, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_48, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_180_180);
              }
              {
                check_hlds__simplify__format_call__build_flags_arg_7_p_0(check_hlds__simplify__format_call__Flags_262, &check_hlds__simplify__format_call__FlagsVar_250, &check_hlds__simplify__format_call__FlagsGoals_251, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_179_179, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_181_181, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_180_180, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_182_182);
              }
              {
                check_hlds__simplify__format_call__maybe_build_width_arg_8_p_0(check_hlds__simplify__format_call__MaybeWidth_263, &check_hlds__simplify__format_call__WidthSuffix_252, &check_hlds__simplify__format_call__WidthVars_253, &check_hlds__simplify__format_call__WidthGoals_254, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_181_181, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_183_183, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_182_182, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_184_184);
              }
              {
                check_hlds__simplify__format_call__maybe_build_prec_arg_8_p_0(check_hlds__simplify__format_call__MaybePrec_33, &check_hlds__simplify__format_call__PrecSuffix_35, &check_hlds__simplify__format_call__PrecVars_36, &check_hlds__simplify__format_call__PrecGoals_37, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_183_183, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_47, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_184_184, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_49);
              }
              {
                check_hlds__simplify__format_call__Var_187 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
              }
              {
                check_hlds__simplify__format_call__Var_197 = mercury__string__f_43_43_2_f_0(check_hlds__simplify__format_call__WidthSuffix_252, check_hlds__simplify__format_call__PrecSuffix_35);
              }
              {
                check_hlds__simplify__format_call__Var_188 = mercury__string__f_43_43_2_f_0((MR_String) "format_string_component", check_hlds__simplify__format_call__Var_197);
              }
              check_hlds__simplify__format_call__TypeInfo_314_314 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
              {
                check_hlds__simplify__format_call__Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_198, 0) = ((MR_Box) (check_hlds__simplify__format_call__FlagsVar_250));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_198, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__format_call__Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_203, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_16));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_203, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__format_call__Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_202, 0) = ((MR_Box) (check_hlds__simplify__format_call__ValueVar_264));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_202, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_203));
              }
              {
                check_hlds__simplify__format_call__Var_201 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_314_314, check_hlds__simplify__format_call__PrecVars_36, check_hlds__simplify__format_call__Var_202);
              }
              {
                check_hlds__simplify__format_call__Var_200 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_314_314, check_hlds__simplify__format_call__WidthVars_253, check_hlds__simplify__format_call__Var_201);
              }
              {
                check_hlds__simplify__format_call__Var_193 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_314_314, check_hlds__simplify__format_call__Var_198, check_hlds__simplify__format_call__Var_200);
              }
              {
                check_hlds__simplify__format_call__Var_206 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_206, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_16));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_206, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[9])));
              }
              {
                check_hlds__simplify__format_call__Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_205, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_206));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__format_call__Var_195 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__format_call__Var_205);
              }
              {
                hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__format_call__Var_187, check_hlds__simplify__format_call__Var_188, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__Var_193, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__Var_195, check_hlds__simplify__format_call__ModuleInfo_13, *check_hlds__simplify__format_call__Context_18, &check_hlds__simplify__format_call__CallGoal_255);
              }
              check_hlds__simplify__format_call__TypeCtorInfo_315_315 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                check_hlds__simplify__format_call__Var_213 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_213, 0) = ((MR_Box) (check_hlds__simplify__format_call__CallGoal_255));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_213, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__format_call__Var_212 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_315_315, check_hlds__simplify__format_call__PrecGoals_37, check_hlds__simplify__format_call__Var_213);
              }
              {
                check_hlds__simplify__format_call__Var_211 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_315_315, check_hlds__simplify__format_call__WidthGoals_254, check_hlds__simplify__format_call__Var_212);
              }
              {
                *check_hlds__simplify__format_call__Goals_17 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_315_315, check_hlds__simplify__format_call__FlagsGoals_251, check_hlds__simplify__format_call__Var_211);
              }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__simplify__format_call__TypeInfo_317_317;
              MR_Word check_hlds__simplify__format_call__TypeCtorInfo_318_318;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_133_133;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_134_134;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_135_135;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_136_136;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_137_137;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_138_138;
              MR_Word check_hlds__simplify__format_call__Var_141;
              MR_String check_hlds__simplify__format_call__Var_142;
              MR_Word check_hlds__simplify__format_call__Var_147;
              MR_Word check_hlds__simplify__format_call__Var_149;
              MR_String check_hlds__simplify__format_call__Var_151;
              MR_Word check_hlds__simplify__format_call__Var_152;
              MR_Word check_hlds__simplify__format_call__Var_154;
              MR_Word check_hlds__simplify__format_call__Var_155;
              MR_Word check_hlds__simplify__format_call__Var_156;
              MR_Word check_hlds__simplify__format_call__Var_157;
              MR_Word check_hlds__simplify__format_call__Var_159;
              MR_Word check_hlds__simplify__format_call__Var_160;
              MR_Word check_hlds__simplify__format_call__Var_165;
              MR_Word check_hlds__simplify__format_call__Var_166;
              MR_Word check_hlds__simplify__format_call__Var_167;
              MR_Word check_hlds__simplify__format_call__Flags_271;
              MR_Word check_hlds__simplify__format_call__MaybeWidth_272;
              MR_Word check_hlds__simplify__format_call__ValueVar_273;
              MR_Word check_hlds__simplify__format_call__FlagsVar_274;
              MR_Word check_hlds__simplify__format_call__FlagsGoals_275;
              MR_String check_hlds__simplify__format_call__WidthSuffix_276;
              MR_Word check_hlds__simplify__format_call__WidthVars_277;
              MR_Word check_hlds__simplify__format_call__WidthGoals_278;
              MR_Word check_hlds__simplify__format_call__CallGoal_279;
              MR_Word check_hlds__simplify__format_call__MaybePrec_280;
              MR_String check_hlds__simplify__format_call__PrecSuffix_281;
              MR_Word check_hlds__simplify__format_call__PrecVars_282;
              MR_Word check_hlds__simplify__format_call__PrecGoals_283;

              *check_hlds__simplify__format_call__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 1)));
              check_hlds__simplify__format_call__Flags_271 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 2)));
              check_hlds__simplify__format_call__MaybeWidth_272 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 3)));
              check_hlds__simplify__format_call__MaybePrec_280 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 4)));
              check_hlds__simplify__format_call__ValueVar_273 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 5)));
              {
                parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__ValueVar_273, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_44, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_45);
              }
              {
                check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(check_hlds__simplify__format_call__MaybeResultVar_15, check_hlds__simplify__format_call__ResultVar_16, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_46, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_133_133, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_48, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_134_134);
              }
              {
                check_hlds__simplify__format_call__build_flags_arg_7_p_0(check_hlds__simplify__format_call__Flags_271, &check_hlds__simplify__format_call__FlagsVar_274, &check_hlds__simplify__format_call__FlagsGoals_275, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_133_133, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_135_135, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_134_134, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_136_136);
              }
              {
                check_hlds__simplify__format_call__maybe_build_width_arg_8_p_0(check_hlds__simplify__format_call__MaybeWidth_272, &check_hlds__simplify__format_call__WidthSuffix_276, &check_hlds__simplify__format_call__WidthVars_277, &check_hlds__simplify__format_call__WidthGoals_278, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_135_135, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_137_137, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_136_136, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_138_138);
              }
              {
                check_hlds__simplify__format_call__maybe_build_prec_arg_8_p_0(check_hlds__simplify__format_call__MaybePrec_280, &check_hlds__simplify__format_call__PrecSuffix_281, &check_hlds__simplify__format_call__PrecVars_282, &check_hlds__simplify__format_call__PrecGoals_283, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_137_137, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_47, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_138_138, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_49);
              }
              {
                check_hlds__simplify__format_call__Var_141 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
              }
              {
                check_hlds__simplify__format_call__Var_151 = mercury__string__f_43_43_2_f_0(check_hlds__simplify__format_call__WidthSuffix_276, check_hlds__simplify__format_call__PrecSuffix_281);
              }
              {
                check_hlds__simplify__format_call__Var_142 = mercury__string__f_43_43_2_f_0((MR_String) "format_signed_int_component", check_hlds__simplify__format_call__Var_151);
              }
              check_hlds__simplify__format_call__TypeInfo_317_317 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
              {
                check_hlds__simplify__format_call__Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_152, 0) = ((MR_Box) (check_hlds__simplify__format_call__FlagsVar_274));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__format_call__Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_157, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_16));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__format_call__Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_156, 0) = ((MR_Box) (check_hlds__simplify__format_call__ValueVar_273));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_156, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_157));
              }
              {
                check_hlds__simplify__format_call__Var_155 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_317_317, check_hlds__simplify__format_call__PrecVars_282, check_hlds__simplify__format_call__Var_156);
              }
              {
                check_hlds__simplify__format_call__Var_154 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_317_317, check_hlds__simplify__format_call__WidthVars_277, check_hlds__simplify__format_call__Var_155);
              }
              {
                check_hlds__simplify__format_call__Var_147 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_317_317, check_hlds__simplify__format_call__Var_152, check_hlds__simplify__format_call__Var_154);
              }
              {
                check_hlds__simplify__format_call__Var_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_160, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_16));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_160, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[9])));
              }
              {
                check_hlds__simplify__format_call__Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_159, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_160));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__format_call__Var_149 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__format_call__Var_159);
              }
              {
                hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__format_call__Var_141, check_hlds__simplify__format_call__Var_142, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__Var_147, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__Var_149, check_hlds__simplify__format_call__ModuleInfo_13, *check_hlds__simplify__format_call__Context_18, &check_hlds__simplify__format_call__CallGoal_279);
              }
              check_hlds__simplify__format_call__TypeCtorInfo_318_318 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                check_hlds__simplify__format_call__Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_167, 0) = ((MR_Box) (check_hlds__simplify__format_call__CallGoal_279));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__format_call__Var_166 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_318_318, check_hlds__simplify__format_call__PrecGoals_283, check_hlds__simplify__format_call__Var_167);
              }
              {
                check_hlds__simplify__format_call__Var_165 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_318_318, check_hlds__simplify__format_call__WidthGoals_278, check_hlds__simplify__format_call__Var_166);
              }
              {
                *check_hlds__simplify__format_call__Goals_17 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_318_318, check_hlds__simplify__format_call__FlagsGoals_275, check_hlds__simplify__format_call__Var_165);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__simplify__format_call__TypeInfo_320_320;
              MR_Word check_hlds__simplify__format_call__TypeCtorInfo_321_321;
              MR_Word check_hlds__simplify__format_call__Base_38;
              MR_Word check_hlds__simplify__format_call__BaseVar_39;
              MR_Word check_hlds__simplify__format_call__BaseGoal_40;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_92_92;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_93_93;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_94_94;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_95_95;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_96_96;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_97_97;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_98_98;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_99_99;
              MR_Word check_hlds__simplify__format_call__Var_102;
              MR_String check_hlds__simplify__format_call__Var_103;
              MR_Word check_hlds__simplify__format_call__Var_108;
              MR_Word check_hlds__simplify__format_call__Var_110;
              MR_String check_hlds__simplify__format_call__Var_112;
              MR_Word check_hlds__simplify__format_call__Var_113;
              MR_Word check_hlds__simplify__format_call__Var_115;
              MR_Word check_hlds__simplify__format_call__Var_116;
              MR_Word check_hlds__simplify__format_call__Var_117;
              MR_Word check_hlds__simplify__format_call__Var_118;
              MR_Word check_hlds__simplify__format_call__Var_119;
              MR_Word check_hlds__simplify__format_call__Var_121;
              MR_Word check_hlds__simplify__format_call__Var_122;
              MR_Word check_hlds__simplify__format_call__Var_127;
              MR_Word check_hlds__simplify__format_call__Var_128;
              MR_Word check_hlds__simplify__format_call__Var_129;
              MR_Word check_hlds__simplify__format_call__Var_130;
              MR_Word check_hlds__simplify__format_call__Flags_284;
              MR_Word check_hlds__simplify__format_call__MaybeWidth_285;
              MR_Word check_hlds__simplify__format_call__ValueVar_286;
              MR_Word check_hlds__simplify__format_call__FlagsVar_287;
              MR_Word check_hlds__simplify__format_call__FlagsGoals_288;
              MR_String check_hlds__simplify__format_call__WidthSuffix_289;
              MR_Word check_hlds__simplify__format_call__WidthVars_290;
              MR_Word check_hlds__simplify__format_call__WidthGoals_291;
              MR_Word check_hlds__simplify__format_call__CallGoal_292;
              MR_Word check_hlds__simplify__format_call__MaybePrec_293;
              MR_String check_hlds__simplify__format_call__PrecSuffix_294;
              MR_Word check_hlds__simplify__format_call__PrecVars_295;
              MR_Word check_hlds__simplify__format_call__PrecGoals_296;

              *check_hlds__simplify__format_call__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 1)));
              check_hlds__simplify__format_call__Flags_284 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 2)));
              check_hlds__simplify__format_call__MaybeWidth_285 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 3)));
              check_hlds__simplify__format_call__MaybePrec_293 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 4)));
              check_hlds__simplify__format_call__Base_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 5)));
              check_hlds__simplify__format_call__ValueVar_286 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 6)));
              {
                parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__ValueVar_286, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_44, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_45);
              }
              {
                check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(check_hlds__simplify__format_call__MaybeResultVar_15, check_hlds__simplify__format_call__ResultVar_16, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_46, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_92_92, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_48, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_93_93);
              }
              {
                check_hlds__simplify__format_call__build_flags_arg_7_p_0(check_hlds__simplify__format_call__Flags_284, &check_hlds__simplify__format_call__FlagsVar_287, &check_hlds__simplify__format_call__FlagsGoals_288, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_92_92, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_94_94, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_93_93, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_95_95);
              }
              {
                check_hlds__simplify__format_call__maybe_build_width_arg_8_p_0(check_hlds__simplify__format_call__MaybeWidth_285, &check_hlds__simplify__format_call__WidthSuffix_289, &check_hlds__simplify__format_call__WidthVars_290, &check_hlds__simplify__format_call__WidthGoals_291, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_94_94, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_96_96, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_95_95, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_97_97);
              }
              {
                check_hlds__simplify__format_call__maybe_build_prec_arg_8_p_0(check_hlds__simplify__format_call__MaybePrec_293, &check_hlds__simplify__format_call__PrecSuffix_294, &check_hlds__simplify__format_call__PrecVars_295, &check_hlds__simplify__format_call__PrecGoals_296, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_96_96, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_98_98, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_97_97, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_99_99);
              }
              {
                check_hlds__simplify__format_call__build_int_base_arg_7_p_0(check_hlds__simplify__format_call__Base_38, &check_hlds__simplify__format_call__BaseVar_39, &check_hlds__simplify__format_call__BaseGoal_40, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_98_98, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_47, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_99_99, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_49);
              }
              {
                check_hlds__simplify__format_call__Var_102 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
              }
              {
                check_hlds__simplify__format_call__Var_112 = mercury__string__f_43_43_2_f_0(check_hlds__simplify__format_call__WidthSuffix_289, check_hlds__simplify__format_call__PrecSuffix_294);
              }
              {
                check_hlds__simplify__format_call__Var_103 = mercury__string__f_43_43_2_f_0((MR_String) "format_unsigned_int_component", check_hlds__simplify__format_call__Var_112);
              }
              check_hlds__simplify__format_call__TypeInfo_320_320 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
              {
                check_hlds__simplify__format_call__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_113, 0) = ((MR_Box) (check_hlds__simplify__format_call__FlagsVar_287));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__format_call__Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_119, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_16));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__format_call__Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_118, 0) = ((MR_Box) (check_hlds__simplify__format_call__ValueVar_286));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_118, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_119));
              }
              {
                check_hlds__simplify__format_call__Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_117, 0) = ((MR_Box) (check_hlds__simplify__format_call__BaseVar_39));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_117, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_118));
              }
              {
                check_hlds__simplify__format_call__Var_116 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_320_320, check_hlds__simplify__format_call__PrecVars_295, check_hlds__simplify__format_call__Var_117);
              }
              {
                check_hlds__simplify__format_call__Var_115 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_320_320, check_hlds__simplify__format_call__WidthVars_290, check_hlds__simplify__format_call__Var_116);
              }
              {
                check_hlds__simplify__format_call__Var_108 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_320_320, check_hlds__simplify__format_call__Var_113, check_hlds__simplify__format_call__Var_115);
              }
              {
                check_hlds__simplify__format_call__Var_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_122, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_16));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[9])));
              }
              {
                check_hlds__simplify__format_call__Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_121, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_122));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__format_call__Var_110 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__format_call__Var_121);
              }
              {
                hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__format_call__Var_102, check_hlds__simplify__format_call__Var_103, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__Var_108, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__Var_110, check_hlds__simplify__format_call__ModuleInfo_13, *check_hlds__simplify__format_call__Context_18, &check_hlds__simplify__format_call__CallGoal_292);
              }
              check_hlds__simplify__format_call__TypeCtorInfo_321_321 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                check_hlds__simplify__format_call__Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_130, 0) = ((MR_Box) (check_hlds__simplify__format_call__CallGoal_292));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__format_call__Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_129, 0) = ((MR_Box) (check_hlds__simplify__format_call__BaseGoal_40));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_129, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_130));
              }
              {
                check_hlds__simplify__format_call__Var_128 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_321_321, check_hlds__simplify__format_call__PrecGoals_296, check_hlds__simplify__format_call__Var_129);
              }
              {
                check_hlds__simplify__format_call__Var_127 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_321_321, check_hlds__simplify__format_call__WidthGoals_291, check_hlds__simplify__format_call__Var_128);
              }
              {
                *check_hlds__simplify__format_call__Goals_17 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_321_321, check_hlds__simplify__format_call__FlagsGoals_288, check_hlds__simplify__format_call__Var_127);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__simplify__format_call__TypeInfo_323_323;
              MR_Word check_hlds__simplify__format_call__TypeCtorInfo_324_324;
              MR_Word check_hlds__simplify__format_call__Kind_41;
              MR_Word check_hlds__simplify__format_call__KindVar_42;
              MR_Word check_hlds__simplify__format_call__KindGoal_43;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_51_51;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_52_52;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_53_53;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_54_54;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_55_55;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_56_56;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_57_57;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_58_58;
              MR_Word check_hlds__simplify__format_call__Var_61;
              MR_String check_hlds__simplify__format_call__Var_62;
              MR_Word check_hlds__simplify__format_call__Var_67;
              MR_Word check_hlds__simplify__format_call__Var_69;
              MR_String check_hlds__simplify__format_call__Var_71;
              MR_Word check_hlds__simplify__format_call__Var_72;
              MR_Word check_hlds__simplify__format_call__Var_74;
              MR_Word check_hlds__simplify__format_call__Var_75;
              MR_Word check_hlds__simplify__format_call__Var_76;
              MR_Word check_hlds__simplify__format_call__Var_77;
              MR_Word check_hlds__simplify__format_call__Var_78;
              MR_Word check_hlds__simplify__format_call__Var_80;
              MR_Word check_hlds__simplify__format_call__Var_81;
              MR_Word check_hlds__simplify__format_call__Var_86;
              MR_Word check_hlds__simplify__format_call__Var_87;
              MR_Word check_hlds__simplify__format_call__Var_88;
              MR_Word check_hlds__simplify__format_call__Var_89;
              MR_Word check_hlds__simplify__format_call__Flags_297;
              MR_Word check_hlds__simplify__format_call__MaybeWidth_298;
              MR_Word check_hlds__simplify__format_call__ValueVar_299;
              MR_Word check_hlds__simplify__format_call__FlagsVar_300;
              MR_Word check_hlds__simplify__format_call__FlagsGoals_301;
              MR_String check_hlds__simplify__format_call__WidthSuffix_302;
              MR_Word check_hlds__simplify__format_call__WidthVars_303;
              MR_Word check_hlds__simplify__format_call__WidthGoals_304;
              MR_Word check_hlds__simplify__format_call__CallGoal_305;
              MR_Word check_hlds__simplify__format_call__MaybePrec_306;
              MR_String check_hlds__simplify__format_call__PrecSuffix_307;
              MR_Word check_hlds__simplify__format_call__PrecVars_308;
              MR_Word check_hlds__simplify__format_call__PrecGoals_309;

              *check_hlds__simplify__format_call__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 1)));
              check_hlds__simplify__format_call__Flags_297 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 2)));
              check_hlds__simplify__format_call__MaybeWidth_298 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 3)));
              check_hlds__simplify__format_call__MaybePrec_306 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 4)));
              check_hlds__simplify__format_call__Kind_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 5)));
              check_hlds__simplify__format_call__ValueVar_299 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Spec_14, (MR_Integer) 6)));
              {
                parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__ValueVar_299, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_0_44, check_hlds__simplify__format_call__STATE_VARIABLE_ValueVars_45);
              }
              {
                check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(check_hlds__simplify__format_call__MaybeResultVar_15, check_hlds__simplify__format_call__ResultVar_16, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_46, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_51_51, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_48, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_52_52);
              }
              {
                check_hlds__simplify__format_call__build_flags_arg_7_p_0(check_hlds__simplify__format_call__Flags_297, &check_hlds__simplify__format_call__FlagsVar_300, &check_hlds__simplify__format_call__FlagsGoals_301, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_51_51, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_53_53, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_52_52, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_54_54);
              }
              {
                check_hlds__simplify__format_call__maybe_build_width_arg_8_p_0(check_hlds__simplify__format_call__MaybeWidth_298, &check_hlds__simplify__format_call__WidthSuffix_302, &check_hlds__simplify__format_call__WidthVars_303, &check_hlds__simplify__format_call__WidthGoals_304, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_53_53, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_55_55, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_54_54, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_56_56);
              }
              {
                check_hlds__simplify__format_call__maybe_build_prec_arg_8_p_0(check_hlds__simplify__format_call__MaybePrec_306, &check_hlds__simplify__format_call__PrecSuffix_307, &check_hlds__simplify__format_call__PrecVars_308, &check_hlds__simplify__format_call__PrecGoals_309, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_55_55, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_57_57, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_56_56, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_58_58);
              }
              {
                check_hlds__simplify__format_call__build_float_kind_arg_7_p_0(check_hlds__simplify__format_call__Kind_41, &check_hlds__simplify__format_call__KindVar_42, &check_hlds__simplify__format_call__KindGoal_43, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_57_57, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_47, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_58_58, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_49);
              }
              {
                check_hlds__simplify__format_call__Var_61 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
              }
              {
                check_hlds__simplify__format_call__Var_71 = mercury__string__f_43_43_2_f_0(check_hlds__simplify__format_call__WidthSuffix_302, check_hlds__simplify__format_call__PrecSuffix_307);
              }
              {
                check_hlds__simplify__format_call__Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "format_float_component", check_hlds__simplify__format_call__Var_71);
              }
              check_hlds__simplify__format_call__TypeInfo_323_323 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
              {
                check_hlds__simplify__format_call__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_72, 0) = ((MR_Box) (check_hlds__simplify__format_call__FlagsVar_300));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__format_call__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_78, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_16));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__format_call__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_77, 0) = ((MR_Box) (check_hlds__simplify__format_call__ValueVar_299));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_77, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_78));
              }
              {
                check_hlds__simplify__format_call__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_76, 0) = ((MR_Box) (check_hlds__simplify__format_call__KindVar_42));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_76, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_77));
              }
              {
                check_hlds__simplify__format_call__Var_75 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_323_323, check_hlds__simplify__format_call__PrecVars_308, check_hlds__simplify__format_call__Var_76);
              }
              {
                check_hlds__simplify__format_call__Var_74 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_323_323, check_hlds__simplify__format_call__WidthVars_303, check_hlds__simplify__format_call__Var_75);
              }
              {
                check_hlds__simplify__format_call__Var_67 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_323_323, check_hlds__simplify__format_call__Var_72, check_hlds__simplify__format_call__Var_74);
              }
              {
                check_hlds__simplify__format_call__Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_81, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_16));
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[9])));
              }
              {
                check_hlds__simplify__format_call__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_80, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_81));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__format_call__Var_69 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__format_call__Var_80);
              }
              {
                hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__format_call__Var_61, check_hlds__simplify__format_call__Var_62, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__Var_67, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__Var_69, check_hlds__simplify__format_call__ModuleInfo_13, *check_hlds__simplify__format_call__Context_18, &check_hlds__simplify__format_call__CallGoal_305);
              }
              check_hlds__simplify__format_call__TypeCtorInfo_324_324 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              {
                check_hlds__simplify__format_call__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_89, 0) = ((MR_Box) (check_hlds__simplify__format_call__CallGoal_305));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                check_hlds__simplify__format_call__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_88, 0) = ((MR_Box) (check_hlds__simplify__format_call__KindGoal_43));
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_88, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_89));
              }
              {
                check_hlds__simplify__format_call__Var_87 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_324_324, check_hlds__simplify__format_call__PrecGoals_309, check_hlds__simplify__format_call__Var_88);
              }
              {
                check_hlds__simplify__format_call__Var_86 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_324_324, check_hlds__simplify__format_call__WidthGoals_304, check_hlds__simplify__format_call__Var_87);
              }
              {
                *check_hlds__simplify__format_call__Goals_17 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_324_324, check_hlds__simplify__format_call__FlagsGoals_301, check_hlds__simplify__format_call__Var_86);
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(
  MR_Word check_hlds__simplify__format_call__MaybeResultVar_7,
  MR_Word * check_hlds__simplify__format_call__ResultVar_8,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_11,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_12,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_13,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_14)
{
  if ((check_hlds__simplify__format_call__MaybeResultVar_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word check_hlds__simplify__format_call__Var_16;

      {
        mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__ResultVar_8, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_11, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_12);
      }
      {
        check_hlds__simplify__format_call__Var_16 = parse_tree__builtin_lib_types__string_type_0_f_0();
      }
      {
        hlds__vartypes__add_var_type_4_p_0(*check_hlds__simplify__format_call__ResultVar_8, check_hlds__simplify__format_call__Var_16, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_13, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_14);
      }
    }
  else
    {
      *check_hlds__simplify__format_call__ResultVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeResultVar_7, (MR_Integer) 0)));
      *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_12 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_11;
      *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_14 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_13;
    }
}

void MR_CALL 
check_hlds__simplify__format_call__build_float_kind_arg_7_p_0(
  MR_Word check_hlds__simplify__format_call__Kind_8,
  MR_Word * check_hlds__simplify__format_call__Var_9,
  MR_Word * check_hlds__simplify__format_call__Goal_10,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_19,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_20,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_21,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_22)
{
  {
    MR_Word check_hlds__simplify__format_call__ParseUtil_13;
    MR_Word check_hlds__simplify__format_call__TypeName_14;
    MR_Word check_hlds__simplify__format_call__TypeCtor_15;
    MR_Word check_hlds__simplify__format_call__Type_16;
    MR_String check_hlds__simplify__format_call__ConsName_17;
    MR_Word check_hlds__simplify__format_call__ConsId_18;
    MR_Word check_hlds__simplify__format_call__Var_27;

    {
      check_hlds__simplify__format_call__ParseUtil_13 = mdbcomp__builtin_modules__mercury_string_parse_util_module_0_f_0();
    }
    {
      check_hlds__simplify__format_call__TypeName_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeName_14, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_13));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeName_14, 1) = ((MR_Box) ((MR_String) "string_format_float_kind"));
    }
    {
      check_hlds__simplify__format_call__TypeCtor_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtor_15, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeName_14));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtor_15, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__simplify__format_call__Type_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Type_16, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeName_14));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Type_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Type_16, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    check_hlds__simplify__format_call__ConsName_17 = ((&check_hlds__simplify__format_call_vector_common_8[5 + check_hlds__simplify__format_call__Kind_8]))->check_hlds__simplify__format_call__vector_common_type_8_0__vct_8_f_0;
    {
      check_hlds__simplify__format_call__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_27, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_13));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_27, 1) = ((MR_Box) (check_hlds__simplify__format_call__ConsName_17));
    }
    {
      check_hlds__simplify__format_call__ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_18, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_27));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_18, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_18, 3) = ((MR_Box) (check_hlds__simplify__format_call__TypeCtor_15));
    }
    {
      hlds__make_goal__make_const_construction_alloc_9_p_0(check_hlds__simplify__format_call__ConsId_18, check_hlds__simplify__format_call__Type_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__Goal_10, check_hlds__simplify__format_call__Var_9, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_19, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_20, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_21, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_22);
    }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__build_int_base_arg_7_p_0(
  MR_Word check_hlds__simplify__format_call__Base_8,
  MR_Word * check_hlds__simplify__format_call__Var_9,
  MR_Word * check_hlds__simplify__format_call__Goal_10,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_19,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_20,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_21,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_22)
{
  {
    MR_Word check_hlds__simplify__format_call__ParseUtil_13;
    MR_Word check_hlds__simplify__format_call__TypeName_14;
    MR_Word check_hlds__simplify__format_call__TypeCtor_15;
    MR_Word check_hlds__simplify__format_call__Type_16;
    MR_String check_hlds__simplify__format_call__ConsName_17;
    MR_Word check_hlds__simplify__format_call__ConsId_18;
    MR_Word check_hlds__simplify__format_call__Var_27;

    {
      check_hlds__simplify__format_call__ParseUtil_13 = mdbcomp__builtin_modules__mercury_string_parse_util_module_0_f_0();
    }
    {
      check_hlds__simplify__format_call__TypeName_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeName_14, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_13));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeName_14, 1) = ((MR_Box) ((MR_String) "string_format_int_base"));
    }
    {
      check_hlds__simplify__format_call__TypeCtor_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtor_15, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeName_14));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtor_15, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__simplify__format_call__Type_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Type_16, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeName_14));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Type_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Type_16, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    check_hlds__simplify__format_call__ConsName_17 = ((&check_hlds__simplify__format_call_vector_common_8[0 + check_hlds__simplify__format_call__Base_8]))->check_hlds__simplify__format_call__vector_common_type_8_0__vct_8_f_0;
    {
      check_hlds__simplify__format_call__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_27, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_13));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_27, 1) = ((MR_Box) (check_hlds__simplify__format_call__ConsName_17));
    }
    {
      check_hlds__simplify__format_call__ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_18, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_27));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_18, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_18, 3) = ((MR_Box) (check_hlds__simplify__format_call__TypeCtor_15));
    }
    {
      hlds__make_goal__make_const_construction_alloc_9_p_0(check_hlds__simplify__format_call__ConsId_18, check_hlds__simplify__format_call__Type_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__Goal_10, check_hlds__simplify__format_call__Var_9, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_19, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_20, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_21, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_22);
    }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__maybe_build_prec_arg_8_p_0(
  MR_Word check_hlds__simplify__format_call__MaybePrec_9,
  MR_String * check_hlds__simplify__format_call__PredNameSuffix_10,
  MR_Word * check_hlds__simplify__format_call__MaybePrecVar_11,
  MR_Word * check_hlds__simplify__format_call__MaybePrecGoals_12,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_18,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_19,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_20,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_21)
{
  switch (MR_tag((MR_Word) check_hlds__simplify__format_call__MaybePrec_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *check_hlds__simplify__format_call__PredNameSuffix_10 = (MR_String) "_noprec";
        *check_hlds__simplify__format_call__MaybePrecVar_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__simplify__format_call__MaybePrecGoals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_19 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_18;
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_21 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_20;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer check_hlds__simplify__format_call__PrecInt_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybePrec_9, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__PrecGoal_16;
        MR_Word check_hlds__simplify__format_call__PrecVar_17;

        *check_hlds__simplify__format_call__PredNameSuffix_10 = (MR_String) "_prec";
        {
          hlds__make_goal__make_int_const_construction_alloc_8_p_0(check_hlds__simplify__format_call__PrecInt_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__PrecGoal_16, &check_hlds__simplify__format_call__PrecVar_17, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_18, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_19, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_20, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_21);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__simplify__format_call__MaybePrecVar_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__PrecVar_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__simplify__format_call__MaybePrecGoals_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__PrecGoal_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word check_hlds__simplify__format_call__PrecVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__MaybePrec_9, (MR_Integer) 0)));

        *check_hlds__simplify__format_call__PredNameSuffix_10 = (MR_String) "_prec";
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__simplify__format_call__MaybePrecVar_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__PrecVar_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        *check_hlds__simplify__format_call__MaybePrecGoals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_19 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_18;
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_21 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_20;
      }
      break;
  }
}

void MR_CALL 
check_hlds__simplify__format_call__maybe_build_width_arg_8_p_0(
  MR_Word check_hlds__simplify__format_call__MaybeWidth_9,
  MR_String * check_hlds__simplify__format_call__PredNameSuffix_10,
  MR_Word * check_hlds__simplify__format_call__MaybeWidthVar_11,
  MR_Word * check_hlds__simplify__format_call__MaybeWidthGoals_12,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_18,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_19,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_20,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_21)
{
  switch (MR_tag((MR_Word) check_hlds__simplify__format_call__MaybeWidth_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *check_hlds__simplify__format_call__PredNameSuffix_10 = (MR_String) "_nowidth";
        *check_hlds__simplify__format_call__MaybeWidthVar_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__simplify__format_call__MaybeWidthGoals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_19 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_18;
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_21 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_20;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer check_hlds__simplify__format_call__WidthInt_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeWidth_9, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__WidthGoal_16;
        MR_Word check_hlds__simplify__format_call__WidthVar_17;

        *check_hlds__simplify__format_call__PredNameSuffix_10 = (MR_String) "_width";
        {
          hlds__make_goal__make_int_const_construction_alloc_8_p_0(check_hlds__simplify__format_call__WidthInt_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__WidthGoal_16, &check_hlds__simplify__format_call__WidthVar_17, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_18, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_19, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_20, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_21);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__simplify__format_call__MaybeWidthVar_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__WidthVar_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__simplify__format_call__MaybeWidthGoals_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__WidthGoal_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word check_hlds__simplify__format_call__WidthVar_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__MaybeWidth_9, (MR_Integer) 0)));

        *check_hlds__simplify__format_call__PredNameSuffix_10 = (MR_String) "_width";
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__simplify__format_call__MaybeWidthVar_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__WidthVar_28));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        *check_hlds__simplify__format_call__MaybeWidthGoals_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_19 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_18;
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_21 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_20;
      }
      break;
  }
}

void MR_CALL 
check_hlds__simplify__format_call__build_flags_arg_7_p_0(
  MR_Word check_hlds__simplify__format_call__Flags_8,
  MR_Word * check_hlds__simplify__format_call__Var_9,
  MR_Word * check_hlds__simplify__format_call__Goals_10,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_61,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_62,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_63,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_64)
{
  {
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_124_124 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word check_hlds__simplify__format_call__FlagHash_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Flags_8, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__format_call__FlagSpace_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Flags_8, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__format_call__FlagZero_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Flags_8, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__format_call__FlagMinus_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Flags_8, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__format_call__FlagPlus_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Flags_8, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__format_call__VarHash_18;
    MR_Word check_hlds__simplify__format_call__VarSpace_19;
    MR_Word check_hlds__simplify__format_call__VarZero_20;
    MR_Word check_hlds__simplify__format_call__VarMinus_21;
    MR_Word check_hlds__simplify__format_call__VarPlus_22;
    MR_Word check_hlds__simplify__format_call__ParseUtil_23;
    MR_Word check_hlds__simplify__format_call__TypeSymNameHash_24;
    MR_Word check_hlds__simplify__format_call__TypeSymNameSpace_25;
    MR_Word check_hlds__simplify__format_call__TypeSymNameZero_26;
    MR_Word check_hlds__simplify__format_call__TypeSymNameMinus_27;
    MR_Word check_hlds__simplify__format_call__TypeSymNamePlus_28;
    MR_Word check_hlds__simplify__format_call__TypeCtorHash_29;
    MR_Word check_hlds__simplify__format_call__TypeCtorSpace_30;
    MR_Word check_hlds__simplify__format_call__TypeCtorZero_31;
    MR_Word check_hlds__simplify__format_call__TypeCtorMinus_32;
    MR_Word check_hlds__simplify__format_call__TypeCtorPlus_33;
    MR_Word check_hlds__simplify__format_call__TypeHash_34;
    MR_Word check_hlds__simplify__format_call__TypeSpace_35;
    MR_Word check_hlds__simplify__format_call__TypeZero_36;
    MR_Word check_hlds__simplify__format_call__TypeMinus_37;
    MR_Word check_hlds__simplify__format_call__TypePlus_38;
    MR_String check_hlds__simplify__format_call__ConsNameHash_39;
    MR_String check_hlds__simplify__format_call__ConsNameSpace_40;
    MR_String check_hlds__simplify__format_call__ConsNameZero_41;
    MR_String check_hlds__simplify__format_call__ConsNameMinus_42;
    MR_String check_hlds__simplify__format_call__ConsNamePlus_43;
    MR_Word check_hlds__simplify__format_call__ConsIdHash_44;
    MR_Word check_hlds__simplify__format_call__ConsIdSpace_45;
    MR_Word check_hlds__simplify__format_call__ConsIdZero_46;
    MR_Word check_hlds__simplify__format_call__ConsIdMinus_47;
    MR_Word check_hlds__simplify__format_call__ConsIdPlus_48;
    MR_Word check_hlds__simplify__format_call__GoalHash_49;
    MR_Word check_hlds__simplify__format_call__GoalSpace_50;
    MR_Word check_hlds__simplify__format_call__GoalZero_51;
    MR_Word check_hlds__simplify__format_call__GoalMinus_52;
    MR_Word check_hlds__simplify__format_call__GoalPlus_53;
    MR_Word check_hlds__simplify__format_call__TypeCombine_55;
    MR_Word check_hlds__simplify__format_call__TypeCtorCombine_56;
    MR_Word check_hlds__simplify__format_call__ConsSymNameCombine_57;
    MR_Word check_hlds__simplify__format_call__ConsIdCombine_58;
    MR_Word check_hlds__simplify__format_call__SpecVars_59;
    MR_Word check_hlds__simplify__format_call__GoalCombine_60;
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_65_65;
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_66_66;
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_67_67;
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_68_68;
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_69_69;
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_90_90;
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_91_91;
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_92_92;
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_93_93;
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_94_94;
    MR_Word check_hlds__simplify__format_call__Var_95;
    MR_Word check_hlds__simplify__format_call__Var_97;
    MR_Word check_hlds__simplify__format_call__Var_99;
    MR_Word check_hlds__simplify__format_call__Var_101;
    MR_Word check_hlds__simplify__format_call__Var_103;
    MR_Word check_hlds__simplify__format_call__Var_113;
    MR_Word check_hlds__simplify__format_call__Var_114;
    MR_Word check_hlds__simplify__format_call__Var_115;
    MR_Word check_hlds__simplify__format_call__Var_116;
    MR_Word check_hlds__simplify__format_call__Var_118;
    MR_Word check_hlds__simplify__format_call__Var_119;
    MR_Word check_hlds__simplify__format_call__Var_120;
    MR_Word check_hlds__simplify__format_call__Var_121;
    MR_Word check_hlds__simplify__format_call__Var_122;

    {
      mercury__varset__new_var_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_124_124, &check_hlds__simplify__format_call__VarHash_18, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_61, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_65_65);
    }
    {
      mercury__varset__new_var_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_124_124, &check_hlds__simplify__format_call__VarSpace_19, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_65_65, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_66_66);
    }
    {
      mercury__varset__new_var_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_124_124, &check_hlds__simplify__format_call__VarZero_20, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_66_66, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_67_67);
    }
    {
      mercury__varset__new_var_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_124_124, &check_hlds__simplify__format_call__VarMinus_21, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_67_67, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_68_68);
    }
    {
      mercury__varset__new_var_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_124_124, &check_hlds__simplify__format_call__VarPlus_22, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_68_68, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_69_69);
    }
    {
      check_hlds__simplify__format_call__ParseUtil_23 = mdbcomp__builtin_modules__mercury_string_parse_util_module_0_f_0();
    }
    {
      check_hlds__simplify__format_call__TypeSymNameHash_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSymNameHash_24, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_23));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSymNameHash_24, 1) = ((MR_Box) ((MR_String) "string_format_flag_hash"));
    }
    {
      check_hlds__simplify__format_call__TypeSymNameSpace_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSymNameSpace_25, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_23));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSymNameSpace_25, 1) = ((MR_Box) ((MR_String) "string_format_flag_space"));
    }
    {
      check_hlds__simplify__format_call__TypeSymNameZero_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSymNameZero_26, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_23));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSymNameZero_26, 1) = ((MR_Box) ((MR_String) "string_format_flag_zero"));
    }
    {
      check_hlds__simplify__format_call__TypeSymNameMinus_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSymNameMinus_27, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_23));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSymNameMinus_27, 1) = ((MR_Box) ((MR_String) "string_format_flag_minus"));
    }
    {
      check_hlds__simplify__format_call__TypeSymNamePlus_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSymNamePlus_28, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_23));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSymNamePlus_28, 1) = ((MR_Box) ((MR_String) "string_format_flag_plus"));
    }
    {
      check_hlds__simplify__format_call__TypeCtorHash_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorHash_29, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeSymNameHash_24));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorHash_29, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__simplify__format_call__TypeCtorSpace_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorSpace_30, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeSymNameSpace_25));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorSpace_30, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__simplify__format_call__TypeCtorZero_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorZero_31, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeSymNameZero_26));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorZero_31, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__simplify__format_call__TypeCtorMinus_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorMinus_32, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeSymNameMinus_27));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorMinus_32, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__simplify__format_call__TypeCtorPlus_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorPlus_33, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeSymNamePlus_28));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorPlus_33, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__simplify__format_call__TypeHash_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeHash_34, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeSymNameHash_24));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeHash_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeHash_34, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__format_call__TypeSpace_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSpace_35, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeSymNameSpace_25));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSpace_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeSpace_35, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__format_call__TypeZero_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeZero_36, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeSymNameZero_26));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeZero_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeZero_36, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__format_call__TypeMinus_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeMinus_37, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeSymNameMinus_27));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeMinus_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeMinus_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__format_call__TypePlus_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypePlus_38, 0) = ((MR_Box) (check_hlds__simplify__format_call__TypeSymNamePlus_28));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypePlus_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypePlus_38, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__vartypes__add_var_type_4_p_0(check_hlds__simplify__format_call__VarHash_18, check_hlds__simplify__format_call__TypeHash_34, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_63, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_90_90);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(check_hlds__simplify__format_call__VarSpace_19, check_hlds__simplify__format_call__TypeSpace_35, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_90_90, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_91_91);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(check_hlds__simplify__format_call__VarZero_20, check_hlds__simplify__format_call__TypeZero_36, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_91_91, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_92_92);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(check_hlds__simplify__format_call__VarMinus_21, check_hlds__simplify__format_call__TypeMinus_37, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_92_92, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_93_93);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(check_hlds__simplify__format_call__VarPlus_22, check_hlds__simplify__format_call__TypePlus_38, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_93_93, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_94_94);
    }
    switch (check_hlds__simplify__format_call__FlagHash_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__simplify__format_call__ConsNameHash_39 = (MR_String) "flag_hash_clear";
        break;
      case (MR_Integer) 1:
        check_hlds__simplify__format_call__ConsNameHash_39 = (MR_String) "flag_hash_set";
        break;
    }
    switch (check_hlds__simplify__format_call__FlagSpace_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__simplify__format_call__ConsNameSpace_40 = (MR_String) "flag_space_clear";
        break;
      case (MR_Integer) 1:
        check_hlds__simplify__format_call__ConsNameSpace_40 = (MR_String) "flag_space_set";
        break;
    }
    switch (check_hlds__simplify__format_call__FlagZero_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__simplify__format_call__ConsNameZero_41 = (MR_String) "flag_zero_clear";
        break;
      case (MR_Integer) 1:
        check_hlds__simplify__format_call__ConsNameZero_41 = (MR_String) "flag_zero_set";
        break;
    }
    switch (check_hlds__simplify__format_call__FlagMinus_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__simplify__format_call__ConsNameMinus_42 = (MR_String) "flag_minus_clear";
        break;
      case (MR_Integer) 1:
        check_hlds__simplify__format_call__ConsNameMinus_42 = (MR_String) "flag_minus_set";
        break;
    }
    switch (check_hlds__simplify__format_call__FlagPlus_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__simplify__format_call__ConsNamePlus_43 = (MR_String) "flag_plus_clear";
        break;
      case (MR_Integer) 1:
        check_hlds__simplify__format_call__ConsNamePlus_43 = (MR_String) "flag_plus_set";
        break;
    }
    {
      check_hlds__simplify__format_call__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_95, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_23));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_95, 1) = ((MR_Box) (check_hlds__simplify__format_call__ConsNameHash_39));
    }
    {
      check_hlds__simplify__format_call__ConsIdHash_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdHash_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdHash_44, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_95));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdHash_44, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdHash_44, 3) = ((MR_Box) (check_hlds__simplify__format_call__TypeCtorHash_29));
    }
    {
      check_hlds__simplify__format_call__Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_97, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_23));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_97, 1) = ((MR_Box) (check_hlds__simplify__format_call__ConsNameSpace_40));
    }
    {
      check_hlds__simplify__format_call__ConsIdSpace_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdSpace_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdSpace_45, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_97));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdSpace_45, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdSpace_45, 3) = ((MR_Box) (check_hlds__simplify__format_call__TypeCtorSpace_30));
    }
    {
      check_hlds__simplify__format_call__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_99, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_23));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_99, 1) = ((MR_Box) (check_hlds__simplify__format_call__ConsNameZero_41));
    }
    {
      check_hlds__simplify__format_call__ConsIdZero_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdZero_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdZero_46, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_99));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdZero_46, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdZero_46, 3) = ((MR_Box) (check_hlds__simplify__format_call__TypeCtorZero_31));
    }
    {
      check_hlds__simplify__format_call__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_101, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_23));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_101, 1) = ((MR_Box) (check_hlds__simplify__format_call__ConsNameMinus_42));
    }
    {
      check_hlds__simplify__format_call__ConsIdMinus_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdMinus_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdMinus_47, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_101));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdMinus_47, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdMinus_47, 3) = ((MR_Box) (check_hlds__simplify__format_call__TypeCtorMinus_32));
    }
    {
      check_hlds__simplify__format_call__Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_103, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_23));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_103, 1) = ((MR_Box) (check_hlds__simplify__format_call__ConsNamePlus_43));
    }
    {
      check_hlds__simplify__format_call__ConsIdPlus_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdPlus_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdPlus_48, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_103));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdPlus_48, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdPlus_48, 3) = ((MR_Box) (check_hlds__simplify__format_call__TypeCtorPlus_33));
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__format_call__VarHash_18, check_hlds__simplify__format_call__ConsIdHash_44, &check_hlds__simplify__format_call__GoalHash_49);
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__format_call__VarSpace_19, check_hlds__simplify__format_call__ConsIdSpace_45, &check_hlds__simplify__format_call__GoalSpace_50);
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__format_call__VarZero_20, check_hlds__simplify__format_call__ConsIdZero_46, &check_hlds__simplify__format_call__GoalZero_51);
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__format_call__VarMinus_21, check_hlds__simplify__format_call__ConsIdMinus_47, &check_hlds__simplify__format_call__GoalMinus_52);
    }
    {
      hlds__make_goal__make_const_construction_3_p_0(check_hlds__simplify__format_call__VarPlus_22, check_hlds__simplify__format_call__ConsIdPlus_48, &check_hlds__simplify__format_call__GoalPlus_53);
    }
    {
      check_hlds__simplify__format_call__ConsSymNameCombine_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ConsSymNameCombine_57, 0) = ((MR_Box) (check_hlds__simplify__format_call__ParseUtil_23));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ConsSymNameCombine_57, 1) = ((MR_Box) ((MR_String) "string_format_flags"));
    }
    {
      check_hlds__simplify__format_call__TypeCombine_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeCombine_55, 0) = ((MR_Box) (check_hlds__simplify__format_call__ConsSymNameCombine_57));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeCombine_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TypeCombine_55, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__varset__new_var_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_124_124, check_hlds__simplify__format_call__Var_9, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_69_69, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_62);
    }
    {
      hlds__vartypes__add_var_type_4_p_0(*check_hlds__simplify__format_call__Var_9, check_hlds__simplify__format_call__TypeCombine_55, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_94_94, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_64);
    }
    {
      check_hlds__simplify__format_call__TypeCtorCombine_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorCombine_56, 0) = ((MR_Box) (check_hlds__simplify__format_call__ConsSymNameCombine_57));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__TypeCtorCombine_56, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      check_hlds__simplify__format_call__ConsIdCombine_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdCombine_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdCombine_58, 1) = ((MR_Box) (check_hlds__simplify__format_call__ConsSymNameCombine_57));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdCombine_58, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsIdCombine_58, 3) = ((MR_Box) (check_hlds__simplify__format_call__TypeCtorCombine_56));
    }
    {
      check_hlds__simplify__format_call__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_116, 0) = ((MR_Box) (check_hlds__simplify__format_call__VarPlus_22));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__format_call__Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_115, 0) = ((MR_Box) (check_hlds__simplify__format_call__VarMinus_21));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_115, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_116));
    }
    {
      check_hlds__simplify__format_call__Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_114, 0) = ((MR_Box) (check_hlds__simplify__format_call__VarZero_20));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_114, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_115));
    }
    {
      check_hlds__simplify__format_call__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_113, 0) = ((MR_Box) (check_hlds__simplify__format_call__VarSpace_19));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_113, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_114));
    }
    {
      check_hlds__simplify__format_call__SpecVars_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SpecVars_59, 0) = ((MR_Box) (check_hlds__simplify__format_call__VarHash_18));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SpecVars_59, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_113));
    }
    {
      hlds__make_goal__construct_functor_4_p_0(*check_hlds__simplify__format_call__Var_9, check_hlds__simplify__format_call__ConsIdCombine_58, check_hlds__simplify__format_call__SpecVars_59, &check_hlds__simplify__format_call__GoalCombine_60);
    }
    {
      check_hlds__simplify__format_call__Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_122, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalCombine_60));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__simplify__format_call__Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_121, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalPlus_53));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_121, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_122));
    }
    {
      check_hlds__simplify__format_call__Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_120, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalMinus_52));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_120, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_121));
    }
    {
      check_hlds__simplify__format_call__Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_119, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalZero_51));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_119, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_120));
    }
    {
      check_hlds__simplify__format_call__Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_118, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalSpace_50));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_118, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_119));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__simplify__format_call__Goals_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalHash_49));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_118));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__follow_format_string_5_p_0_1(
  MR_Box check_hlds__simplify__format_call__closure_arg,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_2)
{
  {
    MR_Box check_hlds__simplify__format_call__closure = check_hlds__simplify__format_call__closure_arg;
    MR_Word check_hlds__simplify__format_call__conv2_Result_10;

    {
      check_hlds__simplify__format_call__follow_format_string_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), &check_hlds__simplify__format_call__conv2_Result_10);
    }
    *check_hlds__simplify__format_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__format_call__conv2_Result_10));
  }
}

void MR_CALL 
check_hlds__simplify__format_call__follow_format_string_5_p_0(
  MR_Word check_hlds__simplify__format_call__ConjMaps_6,
  MR_Word check_hlds__simplify__format_call__PredMap_7,
  MR_Word check_hlds__simplify__format_call__CurId_8,
  MR_Word check_hlds__simplify__format_call__StringVar_9,
  MR_Word * check_hlds__simplify__format_call__Result_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__format_call__succeeded;
        MR_Word check_hlds__simplify__format_call__ConjMap_11;
        MR_Word check_hlds__simplify__format_call__StringMap_12;
        MR_Word check_hlds__simplify__format_call__EqvMap_15;
        MR_Word check_hlds__simplify__format_call__Var_13;
        MR_Word check_hlds__simplify__format_call__Var_14;
        MR_Word check_hlds__simplify__format_call__EqvVar_16;
        MR_Word check_hlds__simplify__format_call__TypeInfo_55_55;
        MR_Box check_hlds__simplify__format_call__conv0_EqvVar_16;

        {
          check_hlds__simplify__format_call__ConjMap_11 = check_hlds__simplify__format_call__get_conj_map_2_f_0(check_hlds__simplify__format_call__ConjMaps_6, check_hlds__simplify__format_call__CurId_8);
        }
        check_hlds__simplify__format_call__StringMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 0)));
        check_hlds__simplify__format_call__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 1)));
        check_hlds__simplify__format_call__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 2)));
        check_hlds__simplify__format_call__EqvMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 3)));
        check_hlds__simplify__format_call__TypeInfo_55_55 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
        {
          check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__format_call__TypeInfo_55_55, check_hlds__simplify__format_call__TypeInfo_55_55, check_hlds__simplify__format_call__EqvMap_15, ((MR_Box) (check_hlds__simplify__format_call__StringVar_9)), &check_hlds__simplify__format_call__conv0_EqvVar_16);
        }
        if (check_hlds__simplify__format_call__succeeded)
          {
            check_hlds__simplify__format_call__EqvVar_16 = ((MR_Word) check_hlds__simplify__format_call__conv0_EqvVar_16);
            check_hlds__simplify__format_call__succeeded = MR_TRUE;
          }
        if (check_hlds__simplify__format_call__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__simplify__format_call__next_value_of_StringVar_9 = check_hlds__simplify__format_call__EqvVar_16;

              check_hlds__simplify__format_call__StringVar_9 = check_hlds__simplify__format_call__next_value_of_StringVar_9;
            }
            continue;
          }
        else
          {
            MR_Word check_hlds__simplify__format_call__StringState_17;
            MR_Box check_hlds__simplify__format_call__conv1_StringState_17;

            {
              check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0, check_hlds__simplify__format_call__StringMap_12, ((MR_Box) (check_hlds__simplify__format_call__StringVar_9)), &check_hlds__simplify__format_call__conv1_StringState_17);
            }
            if (check_hlds__simplify__format_call__succeeded)
              {
                check_hlds__simplify__format_call__StringState_17 = ((MR_Word) check_hlds__simplify__format_call__conv1_StringState_17);
                check_hlds__simplify__format_call__succeeded = MR_TRUE;
              }
            if (check_hlds__simplify__format_call__succeeded)
              switch (MR_tag((MR_Word) check_hlds__simplify__format_call__StringState_17)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_String check_hlds__simplify__format_call__String_18 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__StringState_17, (MR_Integer) 0)));
                    MR_Word check_hlds__simplify__format_call__Var_48;

                    {
                      check_hlds__simplify__format_call__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_48, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringVar_9));
                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__simplify__format_call__Result_10 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__String_18));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_48));
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__simplify__format_call__AppendGoalId_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__StringState_17, (MR_Integer) 0)));
                    MR_Word check_hlds__simplify__format_call__StringVarA_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__StringState_17, (MR_Integer) 1)));
                    MR_Word check_hlds__simplify__format_call__StringVarB_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__StringState_17, (MR_Integer) 2)));
                    MR_Word check_hlds__simplify__format_call__ResultA_22;
                    MR_Word check_hlds__simplify__format_call__ResultB_23;
                    MR_String check_hlds__simplify__format_call__StringA_24;
                    MR_Word check_hlds__simplify__format_call__ToDeleteVarsA_25;
                    MR_Word check_hlds__simplify__format_call__ToDeleteGoalsA_26;
                    MR_String check_hlds__simplify__format_call__StringB_27;
                    MR_Word check_hlds__simplify__format_call__ToDeleteVarsB_28;
                    MR_Word check_hlds__simplify__format_call__ToDeleteGoalsB_29;

                    {
                      check_hlds__simplify__format_call__follow_format_string_5_p_0(check_hlds__simplify__format_call__ConjMaps_6, check_hlds__simplify__format_call__PredMap_7, check_hlds__simplify__format_call__CurId_8, check_hlds__simplify__format_call__StringVarA_20, &check_hlds__simplify__format_call__ResultA_22);
                    }
                    {
                      check_hlds__simplify__format_call__follow_format_string_5_p_0(check_hlds__simplify__format_call__ConjMaps_6, check_hlds__simplify__format_call__PredMap_7, check_hlds__simplify__format_call__CurId_8, check_hlds__simplify__format_call__StringVarB_21, &check_hlds__simplify__format_call__ResultB_23);
                    }
                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__ResultA_22)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__simplify__format_call__succeeded)
                      {
                        check_hlds__simplify__format_call__StringA_24 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ResultA_22, (MR_Integer) 0)));
                        check_hlds__simplify__format_call__ToDeleteVarsA_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ResultA_22, (MR_Integer) 1)));
                        check_hlds__simplify__format_call__ToDeleteGoalsA_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ResultA_22, (MR_Integer) 2)));
                        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__ResultB_23)) == (MR_mktag((MR_Integer) 1)));
                        if (check_hlds__simplify__format_call__succeeded)
                          {
                            check_hlds__simplify__format_call__StringB_27 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ResultB_23, (MR_Integer) 0)));
                            check_hlds__simplify__format_call__ToDeleteVarsB_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ResultB_23, (MR_Integer) 1)));
                            check_hlds__simplify__format_call__ToDeleteGoalsB_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ResultB_23, (MR_Integer) 2)));
                          }
                      }
                    if (check_hlds__simplify__format_call__succeeded)
                      {
                        MR_Word check_hlds__simplify__format_call__TypeCtorInfo_59_59;
                        MR_String check_hlds__simplify__format_call__Var_42;
                        MR_Word check_hlds__simplify__format_call__Var_43;
                        MR_Word check_hlds__simplify__format_call__Var_44;
                        MR_Word check_hlds__simplify__format_call__Var_45;
                        MR_Word check_hlds__simplify__format_call__Var_47;

                        {
                          check_hlds__simplify__format_call__Var_42 = mercury__string__f_43_43_2_f_0(check_hlds__simplify__format_call__StringA_24, check_hlds__simplify__format_call__StringB_27);
                        }
                        {
                          check_hlds__simplify__format_call__Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__ToDeleteVarsA_25, check_hlds__simplify__format_call__ToDeleteVarsB_28);
                        }
                        check_hlds__simplify__format_call__TypeCtorInfo_59_59 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
                        {
                          check_hlds__simplify__format_call__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_45, 0) = ((MR_Box) (check_hlds__simplify__format_call__AppendGoalId_19));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          check_hlds__simplify__format_call__Var_47 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_59_59, check_hlds__simplify__format_call__ToDeleteGoalsA_26, check_hlds__simplify__format_call__ToDeleteGoalsB_29);
                        }
                        {
                          check_hlds__simplify__format_call__Var_44 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_59_59, check_hlds__simplify__format_call__Var_45, check_hlds__simplify__format_call__Var_47);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          *check_hlds__simplify__format_call__Result_10 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_42));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_43));
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__simplify__format_call__Var_44));
                        }
                      }
                    else
                      *check_hlds__simplify__format_call__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__simplify__format_call__AppendListGoalId_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__StringState_17, (MR_Integer) 0)));
                    MR_Word check_hlds__simplify__format_call__SkeletonVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__StringState_17, (MR_Integer) 1)));
                    MR_Word check_hlds__simplify__format_call__SkeletonResult_32;

                    {
                      check_hlds__simplify__format_call__follow_list_skeleton_5_p_0(check_hlds__simplify__format_call__ConjMaps_6, check_hlds__simplify__format_call__PredMap_7, check_hlds__simplify__format_call__CurId_8, check_hlds__simplify__format_call__SkeletonVar_31, &check_hlds__simplify__format_call__SkeletonResult_32);
                    }
                    if ((check_hlds__simplify__format_call__SkeletonResult_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      *check_hlds__simplify__format_call__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    else
                      {
                        MR_Word check_hlds__simplify__format_call__TypeInfo_62_62;
                        MR_Word check_hlds__simplify__format_call__SubStringVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SkeletonResult_32, (MR_Integer) 0)));
                        MR_Word check_hlds__simplify__format_call__SkeletonVars_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SkeletonResult_32, (MR_Integer) 1)));
                        MR_Word check_hlds__simplify__format_call__SubStringResults_35;
                        MR_Word check_hlds__simplify__format_call__Var_39;
                        MR_Word check_hlds__simplify__format_call__SubStringToDeleteVars_36;
                        MR_Word check_hlds__simplify__format_call__SubStringToDeleteGoals_37;
                        MR_String check_hlds__simplify__format_call__String_51;

                        {
                          check_hlds__simplify__format_call__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_39, 0) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_7[0]));
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__follow_format_string_5_p_0_1));
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_39, 3) = ((MR_Box) (check_hlds__simplify__format_call__ConjMaps_6));
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_39, 4) = ((MR_Box) (check_hlds__simplify__format_call__PredMap_7));
                          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_39, 5) = ((MR_Box) (check_hlds__simplify__format_call__CurId_8));
                        }
                        check_hlds__simplify__format_call__TypeInfo_62_62 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
                        {
                          mercury__list__map_3_p_0(check_hlds__simplify__format_call__TypeInfo_62_62, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_follow_string_result_0, check_hlds__simplify__format_call__Var_39, check_hlds__simplify__format_call__SubStringVars_33, &check_hlds__simplify__format_call__SubStringResults_35);
                        }
                        {
                          check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call__project_all_follow_string_results_4_p_0(check_hlds__simplify__format_call__SubStringResults_35, &check_hlds__simplify__format_call__String_51, &check_hlds__simplify__format_call__SubStringToDeleteVars_36, &check_hlds__simplify__format_call__SubStringToDeleteGoals_37);
                        }
                        if (check_hlds__simplify__format_call__succeeded)
                          {
                            MR_Word check_hlds__simplify__format_call__Var_40;
                            MR_Word check_hlds__simplify__format_call__Var_41;

                            {
                              check_hlds__simplify__format_call__Var_40 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_62_62, check_hlds__simplify__format_call__SkeletonVars_34, check_hlds__simplify__format_call__SubStringToDeleteVars_36);
                            }
                            {
                              check_hlds__simplify__format_call__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_41, 0) = ((MR_Box) (check_hlds__simplify__format_call__AppendListGoalId_30));
                              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_41, 1) = ((MR_Box) (check_hlds__simplify__format_call__SubStringToDeleteGoals_37));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              *check_hlds__simplify__format_call__Result_10 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__String_51));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_40));
                              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__simplify__format_call__Var_41));
                            }
                          }
                        else
                          *check_hlds__simplify__format_call__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      }
                  }
                  break;
              }
            else
              {
                MR_Word check_hlds__simplify__format_call__PredId_38;
                MR_Word check_hlds__simplify__format_call__TypeCtorInfo_64_64 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
                MR_Box check_hlds__simplify__format_call__conv3_PredId_38;

                {
                  check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_64_64, check_hlds__simplify__format_call__TypeCtorInfo_64_64, check_hlds__simplify__format_call__PredMap_7, ((MR_Box) (check_hlds__simplify__format_call__CurId_8)), &check_hlds__simplify__format_call__conv3_PredId_38);
                }
                if (check_hlds__simplify__format_call__succeeded)
                  {
                    check_hlds__simplify__format_call__PredId_38 = ((MR_Word) check_hlds__simplify__format_call__conv3_PredId_38);
                    check_hlds__simplify__format_call__succeeded = MR_TRUE;
                  }
                if (check_hlds__simplify__format_call__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word check_hlds__simplify__format_call__next_value_of_CurId_8 = check_hlds__simplify__format_call__PredId_38;

                      check_hlds__simplify__format_call__CurId_8 = check_hlds__simplify__format_call__next_value_of_CurId_8;
                    }
                    continue;
                  }
                else
                  *check_hlds__simplify__format_call__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
          }
      }
      break;
    }
}

void MR_CALL 
check_hlds__simplify__format_call__follow_list_skeleton_5_p_0(
  MR_Word check_hlds__simplify__format_call__ConjMaps_6,
  MR_Word check_hlds__simplify__format_call__PredMap_7,
  MR_Word check_hlds__simplify__format_call__CurId_8,
  MR_Word check_hlds__simplify__format_call__ListVar_9,
  MR_Word * check_hlds__simplify__format_call__Result_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__format_call__succeeded;
        MR_Word check_hlds__simplify__format_call__ConjMap_11;
        MR_Word check_hlds__simplify__format_call__ListMap_13;
        MR_Word check_hlds__simplify__format_call__EqvMap_15;
        MR_Word check_hlds__simplify__format_call__Var_12;
        MR_Word check_hlds__simplify__format_call__Var_14;
        MR_Word check_hlds__simplify__format_call__EqvVar_16;
        MR_Word check_hlds__simplify__format_call__TypeInfo_32_32;
        MR_Box check_hlds__simplify__format_call__conv0_EqvVar_16;

        {
          check_hlds__simplify__format_call__ConjMap_11 = check_hlds__simplify__format_call__get_conj_map_2_f_0(check_hlds__simplify__format_call__ConjMaps_6, check_hlds__simplify__format_call__CurId_8);
        }
        check_hlds__simplify__format_call__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 0)));
        check_hlds__simplify__format_call__ListMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 1)));
        check_hlds__simplify__format_call__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 2)));
        check_hlds__simplify__format_call__EqvMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 3)));
        check_hlds__simplify__format_call__TypeInfo_32_32 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
        {
          check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__format_call__TypeInfo_32_32, check_hlds__simplify__format_call__TypeInfo_32_32, check_hlds__simplify__format_call__EqvMap_15, ((MR_Box) (check_hlds__simplify__format_call__ListVar_9)), &check_hlds__simplify__format_call__conv0_EqvVar_16);
        }
        if (check_hlds__simplify__format_call__succeeded)
          {
            check_hlds__simplify__format_call__EqvVar_16 = ((MR_Word) check_hlds__simplify__format_call__conv0_EqvVar_16);
            check_hlds__simplify__format_call__succeeded = MR_TRUE;
          }
        if (check_hlds__simplify__format_call__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__simplify__format_call__next_value_of_ListVar_9 = check_hlds__simplify__format_call__EqvVar_16;

              check_hlds__simplify__format_call__ListVar_9 = check_hlds__simplify__format_call__next_value_of_ListVar_9;
            }
            continue;
          }
        else
          {
            MR_Word check_hlds__simplify__format_call__ListState_17;
            MR_Box check_hlds__simplify__format_call__conv1_ListState_17;

            {
              check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0, check_hlds__simplify__format_call__ListMap_13, ((MR_Box) (check_hlds__simplify__format_call__ListVar_9)), &check_hlds__simplify__format_call__conv1_ListState_17);
            }
            if (check_hlds__simplify__format_call__succeeded)
              {
                check_hlds__simplify__format_call__ListState_17 = ((MR_Word) check_hlds__simplify__format_call__conv1_ListState_17);
                check_hlds__simplify__format_call__succeeded = MR_TRUE;
              }
            if (check_hlds__simplify__format_call__succeeded)
              if ((check_hlds__simplify__format_call__ListState_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word check_hlds__simplify__format_call__Var_30;

                  {
                    check_hlds__simplify__format_call__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_30, 0) = ((MR_Box) (check_hlds__simplify__format_call__ListVar_9));
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__simplify__format_call__Result_10 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_30));
                  }
                }
              else
                {
                  MR_Word check_hlds__simplify__format_call__HeadVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ListState_17, (MR_Integer) 0)));
                  MR_Word check_hlds__simplify__format_call__TailVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ListState_17, (MR_Integer) 1)));
                  MR_Word check_hlds__simplify__format_call__TailResult_20;

                  {
                    check_hlds__simplify__format_call__follow_list_skeleton_5_p_0(check_hlds__simplify__format_call__ConjMaps_6, check_hlds__simplify__format_call__PredMap_7, check_hlds__simplify__format_call__CurId_8, check_hlds__simplify__format_call__TailVar_19, &check_hlds__simplify__format_call__TailResult_20);
                  }
                  if ((check_hlds__simplify__format_call__TailResult_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *check_hlds__simplify__format_call__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                    {
                      MR_Word check_hlds__simplify__format_call__TailElementVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TailResult_20, (MR_Integer) 0)));
                      MR_Word check_hlds__simplify__format_call__TailSkeletonVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TailResult_20, (MR_Integer) 1)));
                      MR_Word check_hlds__simplify__format_call__ElementVars_23;
                      MR_Word check_hlds__simplify__format_call__SkeletonVars_24;

                      {
                        check_hlds__simplify__format_call__ElementVars_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ElementVars_23, 0) = ((MR_Box) (check_hlds__simplify__format_call__HeadVar_18));
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ElementVars_23, 1) = ((MR_Box) (check_hlds__simplify__format_call__TailElementVars_21));
                      }
                      {
                        check_hlds__simplify__format_call__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], ((MR_Box) (check_hlds__simplify__format_call__TailVar_19)), check_hlds__simplify__format_call__TailSkeletonVars_22);
                      }
                      if (check_hlds__simplify__format_call__succeeded)
                        {
                        }
                      else
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.format_call", (MR_String) "predicate \140check_hlds.simplify.format_call.follow_list_skeleton\'/5", (MR_String) "TailVar not in TailSkeletonVars");
                            return;
                          }
                        }
                      {
                        check_hlds__simplify__format_call__SkeletonVars_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SkeletonVars_24, 0) = ((MR_Box) (check_hlds__simplify__format_call__ListVar_9));
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SkeletonVars_24, 1) = ((MR_Box) (check_hlds__simplify__format_call__TailSkeletonVars_22));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *check_hlds__simplify__format_call__Result_10 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__ElementVars_23));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__SkeletonVars_24));
                      }
                    }
                }
            else
              {
                MR_Word check_hlds__simplify__format_call__PredId_25;
                MR_Word check_hlds__simplify__format_call__TypeCtorInfo_36_36 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
                MR_Box check_hlds__simplify__format_call__conv2_PredId_25;

                {
                  check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_36_36, check_hlds__simplify__format_call__TypeCtorInfo_36_36, check_hlds__simplify__format_call__PredMap_7, ((MR_Box) (check_hlds__simplify__format_call__CurId_8)), &check_hlds__simplify__format_call__conv2_PredId_25);
                }
                if (check_hlds__simplify__format_call__succeeded)
                  {
                    check_hlds__simplify__format_call__PredId_25 = ((MR_Word) check_hlds__simplify__format_call__conv2_PredId_25);
                    check_hlds__simplify__format_call__succeeded = MR_TRUE;
                  }
                if (check_hlds__simplify__format_call__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word check_hlds__simplify__format_call__next_value_of_CurId_8 = check_hlds__simplify__format_call__PredId_25;

                      check_hlds__simplify__format_call__CurId_8 = check_hlds__simplify__format_call__next_value_of_CurId_8;
                    }
                    continue;
                  }
                else
                  *check_hlds__simplify__format_call__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
          }
      }
      break;
    }
}

MR_Word MR_CALL 
check_hlds__simplify__format_call__get_conj_map_2_f_0(
  MR_Word check_hlds__simplify__format_call__ConjMaps_4,
  MR_Word check_hlds__simplify__format_call__ConjId_5)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Word check_hlds__simplify__format_call__ConjMap_6;
    MR_Word check_hlds__simplify__format_call__ConjMapPrime_7;
    MR_Box check_hlds__simplify__format_call__conv0_ConjMapPrime_7;

    {
      check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, check_hlds__simplify__format_call__ConjMaps_4, ((MR_Box) (check_hlds__simplify__format_call__ConjId_5)), &check_hlds__simplify__format_call__conv0_ConjMapPrime_7);
    }
    if (check_hlds__simplify__format_call__succeeded)
      {
        check_hlds__simplify__format_call__ConjMapPrime_7 = ((MR_Word) check_hlds__simplify__format_call__conv0_ConjMapPrime_7);
        check_hlds__simplify__format_call__succeeded = MR_TRUE;
      }
    if (check_hlds__simplify__format_call__succeeded)
      check_hlds__simplify__format_call__ConjMap_6 = check_hlds__simplify__format_call__ConjMapPrime_7;
    else
      {
        MR_Word check_hlds__simplify__format_call__TypeInfo_14_14 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
        MR_Word check_hlds__simplify__format_call__Var_8;
        MR_Word check_hlds__simplify__format_call__Var_9;
        MR_Word check_hlds__simplify__format_call__Var_10;
        MR_Word check_hlds__simplify__format_call__Var_11;

        {
          check_hlds__simplify__format_call__Var_8 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_14, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0);
        }
        {
          check_hlds__simplify__format_call__Var_9 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_14, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0);
        }
        {
          check_hlds__simplify__format_call__Var_10 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_14, (MR_Word) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0);
        }
        {
          check_hlds__simplify__format_call__Var_11 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_14, check_hlds__simplify__format_call__TypeInfo_14_14);
        }
        {
          check_hlds__simplify__format_call__ConjMap_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_6, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_8));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_6, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_9));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_6, 2) = ((MR_Box) (check_hlds__simplify__format_call__Var_10));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_6, 3) = ((MR_Box) (check_hlds__simplify__format_call__Var_11));
        }
      }
    return check_hlds__simplify__format_call__ConjMap_6;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call__project_all_follow_string_results_4_p_0(
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
  MR_String * check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word * check_hlds__simplify__format_call__HeadVar__3_3,
  MR_Word * check_hlds__simplify__format_call__HeadVar__4_4)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    if ((check_hlds__simplify__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__simplify__format_call__HeadVar__2_2 = (MR_String) "";
        *check_hlds__simplify__format_call__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__simplify__format_call__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        check_hlds__simplify__format_call__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word check_hlds__simplify__format_call__TypeInfo_16_16;
        MR_Word check_hlds__simplify__format_call__TypeCtorInfo_17_17;
        MR_Word check_hlds__simplify__format_call__HeadResult_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__TailResults_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
        MR_String check_hlds__simplify__format_call__HeadString_10;
        MR_Word check_hlds__simplify__format_call__HeadToDeleteVars_11;
        MR_Word check_hlds__simplify__format_call__HeadToDeleteGoals_12;
        MR_String check_hlds__simplify__format_call__TailString_13;
        MR_Word check_hlds__simplify__format_call__TailToDeleteVars_14;
        MR_Word check_hlds__simplify__format_call__TailToDeleteGoals_15;

        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadResult_5)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__simplify__format_call__succeeded)
          {
            check_hlds__simplify__format_call__HeadString_10 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadResult_5, (MR_Integer) 0)));
            check_hlds__simplify__format_call__HeadToDeleteVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadResult_5, (MR_Integer) 1)));
            check_hlds__simplify__format_call__HeadToDeleteGoals_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadResult_5, (MR_Integer) 2)));
            {
              check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call__project_all_follow_string_results_4_p_0(check_hlds__simplify__format_call__TailResults_6, &check_hlds__simplify__format_call__TailString_13, &check_hlds__simplify__format_call__TailToDeleteVars_14, &check_hlds__simplify__format_call__TailToDeleteGoals_15);
            }
            if (check_hlds__simplify__format_call__succeeded)
              {
                {
                  *check_hlds__simplify__format_call__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(check_hlds__simplify__format_call__HeadString_10, check_hlds__simplify__format_call__TailString_13);
                }
                check_hlds__simplify__format_call__TypeInfo_16_16 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
                {
                  *check_hlds__simplify__format_call__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_16_16, check_hlds__simplify__format_call__HeadToDeleteVars_11, check_hlds__simplify__format_call__TailToDeleteVars_14);
                }
                check_hlds__simplify__format_call__TypeCtorInfo_17_17 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
                {
                  *check_hlds__simplify__format_call__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_17_17, check_hlds__simplify__format_call__HeadToDeleteGoals_12, check_hlds__simplify__format_call__TailToDeleteGoals_15);
                }
                check_hlds__simplify__format_call__succeeded = MR_TRUE;
              }
          }
      }
    return check_hlds__simplify__format_call__succeeded;
  }
}

MR_Word MR_CALL 
check_hlds__simplify__format_call__string_format_error_to_words_1_f_0(
  MR_Word check_hlds__simplify__format_call__Error_3)
{
  {
    MR_Word check_hlds__simplify__format_call__HeadVar__2_2;
    MR_String check_hlds__simplify__format_call__Var_4;

    {
      check_hlds__simplify__format_call__Var_4 = mercury__string__parse_util__string_format_error_to_msg_1_f_0(check_hlds__simplify__format_call__Error_3);
    }
    {
      check_hlds__simplify__format_call__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_4));
    }
    return check_hlds__simplify__format_call__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call__project_all_yes_2_p_0(
  MR_Word check_hlds__simplify__format_call__TypeInfo_for_T_7,
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word * check_hlds__simplify__format_call__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    if ((check_hlds__simplify__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__simplify__format_call__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        check_hlds__simplify__format_call__succeeded = MR_TRUE;
      }
    else
      {
        MR_Box check_hlds__simplify__format_call__Value_3;
        MR_Word check_hlds__simplify__format_call__TailMaybes_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__Tail_5;
        MR_Word check_hlds__simplify__format_call__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));

        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_6)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__simplify__format_call__succeeded)
          {
            check_hlds__simplify__format_call__Value_3 = (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_6, (MR_Integer) 0));
            {
              check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call__project_all_yes_2_p_0(check_hlds__simplify__format_call__TypeInfo_for_T_7, check_hlds__simplify__format_call__TailMaybes_4, &check_hlds__simplify__format_call__Tail_5);
            }
            if (check_hlds__simplify__format_call__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__simplify__format_call__HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = check_hlds__simplify__format_call__Value_3;
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__Tail_5));
                }
                check_hlds__simplify__format_call__succeeded = MR_TRUE;
              }
          }
      }
    return check_hlds__simplify__format_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__analyze_and_optimize_format_calls_9_p_0_1(
  MR_Box check_hlds__simplify__format_call__closure_arg,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_3,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_4,
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_5,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_6,
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_7,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_8,
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_9)
{
  {
    MR_Box check_hlds__simplify__format_call__closure = check_hlds__simplify__format_call__closure_arg;
    MR_Word check_hlds__simplify__format_call__conv3_STATE_VARIABLE_GoalIdMap_77;
    MR_Word check_hlds__simplify__format_call__conv2_STATE_VARIABLE_Specs_79;
    MR_Word check_hlds__simplify__format_call__conv1_STATE_VARIABLE_VarSet_81;
    MR_Word check_hlds__simplify__format_call__conv0_STATE_VARIABLE_VarTypes_83;

    {
      check_hlds__simplify__format_call__check_format_call_site_14_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 7))), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), &check_hlds__simplify__format_call__conv3_STATE_VARIABLE_GoalIdMap_77, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_4), &check_hlds__simplify__format_call__conv2_STATE_VARIABLE_Specs_79, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_6), &check_hlds__simplify__format_call__conv1_STATE_VARIABLE_VarSet_81, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_8), &check_hlds__simplify__format_call__conv0_STATE_VARIABLE_VarTypes_83);
    }
    *check_hlds__simplify__format_call__wrapper_arg_3 = ((MR_Box) (check_hlds__simplify__format_call__conv3_STATE_VARIABLE_GoalIdMap_77));
    *check_hlds__simplify__format_call__wrapper_arg_5 = ((MR_Box) (check_hlds__simplify__format_call__conv2_STATE_VARIABLE_Specs_79));
    *check_hlds__simplify__format_call__wrapper_arg_7 = ((MR_Box) (check_hlds__simplify__format_call__conv1_STATE_VARIABLE_VarSet_81));
    *check_hlds__simplify__format_call__wrapper_arg_9 = ((MR_Box) (check_hlds__simplify__format_call__conv0_STATE_VARIABLE_VarTypes_83));
  }
}

void MR_CALL 
check_hlds__simplify__format_call__analyze_and_optimize_format_calls_9_p_0(
  MR_Word check_hlds__simplify__format_call__ModuleInfo_10,
  MR_Word check_hlds__simplify__format_call__GenImplicitStreamWarnings_11,
  MR_Word check_hlds__simplify__format_call__Goal0_12,
  MR_Word * check_hlds__simplify__format_call__MaybeGoal_13,
  MR_Word * check_hlds__simplify__format_call__Specs_14,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_46,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_47,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_48,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_49)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_79_79 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_81_81;
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_91_91;
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_92_92;
    MR_Word check_hlds__simplify__format_call__ConjMaps0_17;
    MR_Word check_hlds__simplify__format_call__Counter0_18;
    MR_Word check_hlds__simplify__format_call__Goal1_20;
    MR_Word check_hlds__simplify__format_call__Globals0_21;
    MR_Word check_hlds__simplify__format_call__Globals_22;
    MR_Word check_hlds__simplify__format_call__FormatCallSites_26;
    MR_Word check_hlds__simplify__format_call__ConjMaps_28;
    MR_Word check_hlds__simplify__format_call__PredMap_29;
    MR_Word check_hlds__simplify__format_call__OptFormatCalls_31;
    MR_Word check_hlds__simplify__format_call__ExecTrace_32;
    MR_Word check_hlds__simplify__format_call__ShouldOptFormatCalls_33;
    MR_Word check_hlds__simplify__format_call__GoalIdMap_34;
    MR_Word check_hlds__simplify__format_call__Var_63;
    MR_Word check_hlds__simplify__format_call__Var_64;
    MR_Word check_hlds__simplify__format_call__Var_67;
    MR_Word check_hlds__simplify__format_call__Var_68;
    MR_Word check_hlds__simplify__format_call__Var_19;
    MR_Word check_hlds__simplify__format_call__OutInfo_23;
    MR_Word check_hlds__simplify__format_call__Var_25;
    MR_Word check_hlds__simplify__format_call___Counter_27;
    MR_Word check_hlds__simplify__format_call__Var_30;
    MR_Box check_hlds__simplify__format_call__conv7_GoalIdMap_34;
    MR_Box check_hlds__simplify__format_call__conv6_Specs_14;
    MR_Box check_hlds__simplify__format_call__conv5_STATE_VARIABLE_VarSet_47;
    MR_Box check_hlds__simplify__format_call__conv4_STATE_VARIABLE_VarTypes_49;

    {
      mercury__map__init_1_p_0(check_hlds__simplify__format_call__TypeCtorInfo_79_79, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, &check_hlds__simplify__format_call__ConjMaps0_17);
    }
    {
      mercury__counter__init_2_p_0((MR_Integer) 0, &check_hlds__simplify__format_call__Counter0_18);
    }
    {
      hlds__goal_path__fill_goal_id_slots_in_proc_body_5_p_0(check_hlds__simplify__format_call__ModuleInfo_10, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_48, &check_hlds__simplify__format_call__Var_19, check_hlds__simplify__format_call__Goal0_12, &check_hlds__simplify__format_call__Goal1_20);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__format_call__ModuleInfo_10, &check_hlds__simplify__format_call__Globals0_21);
    }
    {
      libs__globals__set_option_4_p_0((MR_Integer) 164, (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[12]), check_hlds__simplify__format_call__Globals0_21, &check_hlds__simplify__format_call__Globals_22);
    }
    {
      check_hlds__simplify__format_call__OutInfo_23 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(check_hlds__simplify__format_call__Globals_22, (MR_Integer) 1);
    }
    {
      check_hlds__simplify__format_call__Var_63 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeCtorInfo_79_79, check_hlds__simplify__format_call__TypeCtorInfo_79_79);
    }
    check_hlds__simplify__format_call__TypeCtorInfo_81_81 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      check_hlds__simplify__format_call__Var_64 = parse_tree__set_of_var__init_0_f_0(check_hlds__simplify__format_call__TypeCtorInfo_81_81);
    }
    {
      check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(check_hlds__simplify__format_call__ModuleInfo_10, check_hlds__simplify__format_call__Goal1_20, &check_hlds__simplify__format_call__Var_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__FormatCallSites_26, check_hlds__simplify__format_call__Counter0_18, &check_hlds__simplify__format_call___Counter_27, check_hlds__simplify__format_call__ConjMaps0_17, &check_hlds__simplify__format_call__ConjMaps_28, check_hlds__simplify__format_call__Var_63, &check_hlds__simplify__format_call__PredMap_29, check_hlds__simplify__format_call__Var_64, &check_hlds__simplify__format_call__Var_30);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__format_call__Globals_22, (MR_Integer) 377, &check_hlds__simplify__format_call__OptFormatCalls_31);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__format_call__Globals_22, (MR_Integer) 197, &check_hlds__simplify__format_call__ExecTrace_32);
    }
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__OptFormatCalls_31 == (MR_Integer) 1);
    if (check_hlds__simplify__format_call__succeeded)
      check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__ExecTrace_32 == (MR_Integer) 0);
    if (check_hlds__simplify__format_call__succeeded)
      check_hlds__simplify__format_call__ShouldOptFormatCalls_33 = (MR_Integer) 1;
    else
      check_hlds__simplify__format_call__ShouldOptFormatCalls_33 = (MR_Integer) 0;
    {
      check_hlds__simplify__format_call__Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_67, 0) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_67, 1) = ((MR_Box) (check_hlds__simplify__format_call__analyze_and_optimize_format_calls_9_p_0_1));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_67, 3) = ((MR_Box) (check_hlds__simplify__format_call__ModuleInfo_10));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_67, 4) = ((MR_Box) (check_hlds__simplify__format_call__GenImplicitStreamWarnings_11));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_67, 5) = ((MR_Box) (check_hlds__simplify__format_call__ShouldOptFormatCalls_33));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_67, 6) = ((MR_Box) (check_hlds__simplify__format_call__ConjMaps_28));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_67, 7) = ((MR_Box) (check_hlds__simplify__format_call__PredMap_29));
    }
    check_hlds__simplify__format_call__TypeCtorInfo_91_91 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
    check_hlds__simplify__format_call__TypeCtorInfo_92_92 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0;
    {
      check_hlds__simplify__format_call__Var_68 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeCtorInfo_91_91, check_hlds__simplify__format_call__TypeCtorInfo_92_92);
    }
    {
      mercury__list__foldl4_10_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_site_0, (MR_Word) &check_hlds__simplify__format_call_scalar_common_1[0], (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[0], (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[1], (MR_Word) &check_hlds__simplify__format_call_scalar_common_1[1], check_hlds__simplify__format_call__Var_67, check_hlds__simplify__format_call__FormatCallSites_26, ((MR_Box) (check_hlds__simplify__format_call__Var_68)), &check_hlds__simplify__format_call__conv7_GoalIdMap_34, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__simplify__format_call__conv6_Specs_14, ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_46)), &check_hlds__simplify__format_call__conv5_STATE_VARIABLE_VarSet_47, ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_48)), &check_hlds__simplify__format_call__conv4_STATE_VARIABLE_VarTypes_49);
    }
    check_hlds__simplify__format_call__GoalIdMap_34 = ((MR_Word) check_hlds__simplify__format_call__conv7_GoalIdMap_34);
    *check_hlds__simplify__format_call__Specs_14 = ((MR_Word) check_hlds__simplify__format_call__conv6_Specs_14);
    *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_47 = ((MR_Word) check_hlds__simplify__format_call__conv5_STATE_VARIABLE_VarSet_47);
    *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_49 = ((MR_Word) check_hlds__simplify__format_call__conv4_STATE_VARIABLE_VarTypes_49);
    {
      check_hlds__simplify__format_call__succeeded = mercury__map__is_empty_1_p_0(check_hlds__simplify__format_call__TypeCtorInfo_91_91, check_hlds__simplify__format_call__TypeCtorInfo_92_92, check_hlds__simplify__format_call__GoalIdMap_34);
    }
    if (check_hlds__simplify__format_call__succeeded)
      *check_hlds__simplify__format_call__MaybeGoal_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__simplify__format_call__GoalInfo1_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Goal1_20, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__InstMapDelta_37;
        MR_Word check_hlds__simplify__format_call__NeededVars0_38;
        MR_Word check_hlds__simplify__format_call__ToDeleteVars0_39;
        MR_Word check_hlds__simplify__format_call__ToDeleteGoals0_40;
        MR_Word check_hlds__simplify__format_call__Goal_41;
        MR_Word check_hlds__simplify__format_call__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Goal1_20, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__Var_42;
        MR_Word check_hlds__simplify__format_call___NeededVars_43;
        MR_Word check_hlds__simplify__format_call___ToDeleteVars_44;
        MR_Word check_hlds__simplify__format_call___ToDeleteGoals_45;

        {
          check_hlds__simplify__format_call__InstMapDelta_37 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__format_call__GoalInfo1_36);
        }
        {
          hlds__instmap__instmap_delta_changed_vars_2_p_0(check_hlds__simplify__format_call__InstMapDelta_37, &check_hlds__simplify__format_call__NeededVars0_38);
        }
        {
          check_hlds__simplify__format_call__ToDeleteVars0_39 = parse_tree__set_of_var__init_0_f_0(check_hlds__simplify__format_call__TypeCtorInfo_81_81);
        }
        {
          check_hlds__simplify__format_call__ToDeleteGoals0_40 = mercury__set_tree234__init_0_f_0(check_hlds__simplify__format_call__TypeCtorInfo_91_91);
        }
        {
          check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(check_hlds__simplify__format_call__Goal1_20, &check_hlds__simplify__format_call__Goal_41, check_hlds__simplify__format_call__GoalIdMap_34, &check_hlds__simplify__format_call__Var_42, check_hlds__simplify__format_call__NeededVars0_38, &check_hlds__simplify__format_call___NeededVars_43, check_hlds__simplify__format_call__ToDeleteVars0_39, &check_hlds__simplify__format_call___ToDeleteVars_44, check_hlds__simplify__format_call__ToDeleteGoals0_40, &check_hlds__simplify__format_call___ToDeleteGoals_45);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__simplify__format_call__MaybeGoal_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Goal_41));
        }
      }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__opt_format_call_sites_in_switch_13_p_0(
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word * check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4,
  MR_Word check_hlds__simplify__format_call__NeededVars0_5,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_0_6,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_7,
  MR_Word check_hlds__simplify__format_call__ToDeleteVars0_8,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_10,
  MR_Word check_hlds__simplify__format_call__ToDeleteGoals0_11,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoalSets_0_12,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoalSets_13)
{
  if ((check_hlds__simplify__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *check_hlds__simplify__format_call__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoalSets_13 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoalSets_0_12;
      *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_10 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9;
      *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_7 = check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_0_6;
      *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3;
    }
  else
    {
      MR_Word check_hlds__simplify__format_call__Case0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word check_hlds__simplify__format_call__Cases0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word check_hlds__simplify__format_call__Case_31;
      MR_Word check_hlds__simplify__format_call__Cases_32;
      MR_Word check_hlds__simplify__format_call__FirstConsId_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Case0_29, (MR_Integer) 0)));
      MR_Word check_hlds__simplify__format_call__LaterConsIds_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Case0_29, (MR_Integer) 1)));
      MR_Word check_hlds__simplify__format_call__Goal0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Case0_29, (MR_Integer) 2)));
      MR_Word check_hlds__simplify__format_call__Goal_43;
      MR_Word check_hlds__simplify__format_call__NeededVars_44;
      MR_Word check_hlds__simplify__format_call__ToDeleteVars_45;
      MR_Word check_hlds__simplify__format_call__ToDeleteGoals_46;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_55_55;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_56_56;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_57_57;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoalSets_58_58;

      {
        check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(check_hlds__simplify__format_call__Goal0_42, &check_hlds__simplify__format_call__Goal_43, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3, &check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_55_55, check_hlds__simplify__format_call__NeededVars0_5, &check_hlds__simplify__format_call__NeededVars_44, check_hlds__simplify__format_call__ToDeleteVars0_8, &check_hlds__simplify__format_call__ToDeleteVars_45, check_hlds__simplify__format_call__ToDeleteGoals0_11, &check_hlds__simplify__format_call__ToDeleteGoals_46);
      }
      {
        check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_56_56, 0) = ((MR_Box) (check_hlds__simplify__format_call__NeededVars_44));
        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_56_56, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_0_6));
      }
      {
        check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_57_57, 0) = ((MR_Box) (check_hlds__simplify__format_call__ToDeleteVars_45));
        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_57_57, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9));
      }
      {
        check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoalSets_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoalSets_58_58, 0) = ((MR_Box) (check_hlds__simplify__format_call__ToDeleteGoals_46));
        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoalSets_58_58, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoalSets_0_12));
      }
      {
        check_hlds__simplify__format_call__Case_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Case_31, 0) = ((MR_Box) (check_hlds__simplify__format_call__FirstConsId_40));
        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Case_31, 1) = ((MR_Box) (check_hlds__simplify__format_call__LaterConsIds_41));
        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Case_31, 2) = ((MR_Box) (check_hlds__simplify__format_call__Goal_43));
      }
      {
        check_hlds__simplify__format_call__opt_format_call_sites_in_switch_13_p_0(check_hlds__simplify__format_call__Cases0_30, &check_hlds__simplify__format_call__Cases_32, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_55_55, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4, check_hlds__simplify__format_call__NeededVars0_5, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_56_56, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_7, check_hlds__simplify__format_call__ToDeleteVars0_8, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_57_57, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_10, check_hlds__simplify__format_call__ToDeleteGoals0_11, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoalSets_58_58, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoalSets_13);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *check_hlds__simplify__format_call__HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Case_31));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__Cases_32));
      }
    }
}

void MR_CALL 
check_hlds__simplify__format_call__opt_format_call_sites_in_disj_13_p_0(
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word * check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4,
  MR_Word check_hlds__simplify__format_call__NeededVars0_5,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_0_6,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_7,
  MR_Word check_hlds__simplify__format_call__ToDeleteVars0_8,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_10,
  MR_Word check_hlds__simplify__format_call__ToDeleteGoals0_11,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoalSets_0_12,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoalSets_13)
{
  if ((check_hlds__simplify__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *check_hlds__simplify__format_call__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoalSets_13 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoalSets_0_12;
      *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_10 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9;
      *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_7 = check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_0_6;
      *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3;
    }
  else
    {
      MR_Word check_hlds__simplify__format_call__Goal0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word check_hlds__simplify__format_call__Goals0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word check_hlds__simplify__format_call__Goal_31;
      MR_Word check_hlds__simplify__format_call__Goals_32;
      MR_Word check_hlds__simplify__format_call__NeededVars_40;
      MR_Word check_hlds__simplify__format_call__ToDeleteVars_41;
      MR_Word check_hlds__simplify__format_call__ToDeleteGoals_42;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_51_51;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_52_52;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_53_53;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoalSets_54_54;

      {
        check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(check_hlds__simplify__format_call__Goal0_29, &check_hlds__simplify__format_call__Goal_31, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3, &check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_51_51, check_hlds__simplify__format_call__NeededVars0_5, &check_hlds__simplify__format_call__NeededVars_40, check_hlds__simplify__format_call__ToDeleteVars0_8, &check_hlds__simplify__format_call__ToDeleteVars_41, check_hlds__simplify__format_call__ToDeleteGoals0_11, &check_hlds__simplify__format_call__ToDeleteGoals_42);
      }
      {
        check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_52_52, 0) = ((MR_Box) (check_hlds__simplify__format_call__NeededVars_40));
        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_52_52, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_0_6));
      }
      {
        check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_53_53, 0) = ((MR_Box) (check_hlds__simplify__format_call__ToDeleteVars_41));
        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_53_53, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9));
      }
      {
        check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoalSets_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoalSets_54_54, 0) = ((MR_Box) (check_hlds__simplify__format_call__ToDeleteGoals_42));
        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoalSets_54_54, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoalSets_0_12));
      }
      {
        check_hlds__simplify__format_call__opt_format_call_sites_in_disj_13_p_0(check_hlds__simplify__format_call__Goals0_30, &check_hlds__simplify__format_call__Goals_32, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_51_51, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4, check_hlds__simplify__format_call__NeededVars0_5, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_52_52, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_7, check_hlds__simplify__format_call__ToDeleteVars0_8, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_53_53, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_10, check_hlds__simplify__format_call__ToDeleteGoals0_11, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoalSets_54_54, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoalSets_13);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *check_hlds__simplify__format_call__HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Goal_31));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__Goals_32));
      }
    }
}

void MR_CALL 
check_hlds__simplify__format_call__opt_format_call_sites_in_conj_10_p_0(
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word * check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_5,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_6,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_7,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_8,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_0_9,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_10)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    if ((check_hlds__simplify__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__simplify__format_call__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_10 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_0_9;
        *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_8 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_7;
        *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_6 = check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_5;
        *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3;
      }
    else
      {
        MR_Word check_hlds__simplify__format_call__HeadGoal0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__TailGoals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__TailGoals_30;
        MR_Word check_hlds__simplify__format_call__HeadGoal_31;
        MR_Word check_hlds__simplify__format_call__HeadGoalExpr_32;
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_43_43;
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_44_44;
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_45_45;
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_46_46;
        MR_Word check_hlds__simplify__format_call__Var_33;
        MR_Word check_hlds__simplify__format_call__HeadSubGoals_34;
        MR_Word check_hlds__simplify__format_call__Var_51;

        {
          check_hlds__simplify__format_call__opt_format_call_sites_in_conj_10_p_0(check_hlds__simplify__format_call__TailGoals0_24, &check_hlds__simplify__format_call__TailGoals_30, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3, &check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_43_43, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_5, &check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_44_44, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_7, &check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_45_45, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_0_9, &check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_46_46);
        }
        {
          check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(check_hlds__simplify__format_call__HeadGoal0_23, &check_hlds__simplify__format_call__HeadGoal_31, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_43_43, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_44_44, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_6, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_45_45, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_8, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_46_46, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_10);
        }
        check_hlds__simplify__format_call__HeadGoalExpr_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadGoal_31, (MR_Integer) 0)));
        check_hlds__simplify__format_call__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadGoal_31, (MR_Integer) 1)));
        check_hlds__simplify__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadGoalExpr_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadGoalExpr_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (check_hlds__simplify__format_call__succeeded)
          {
            check_hlds__simplify__format_call__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadGoalExpr_32, (MR_Integer) 1)));
            check_hlds__simplify__format_call__HeadSubGoals_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadGoalExpr_32, (MR_Integer) 2)));
            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_51 == (MR_Integer) 0);
          }
        if (check_hlds__simplify__format_call__succeeded)
          {
            {
              *check_hlds__simplify__format_call__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__format_call__HeadSubGoals_34, check_hlds__simplify__format_call__TailGoals_30);
            }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__simplify__format_call__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__HeadGoal_31));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__TailGoals_30));
          }
      }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(
  MR_Word check_hlds__simplify__format_call__Goal0_11,
  MR_Word * check_hlds__simplify__format_call__Goal_12,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_108,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_109,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_110,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_111,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_112,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_113,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_0_114,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_115)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__format_call__succeeded;
        MR_Word check_hlds__simplify__format_call__GoalExpr0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Goal0_11, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__GoalInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Goal0_11, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr0_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__simplify__format_call__SubGoal0_86 = (MR_Word) MR_body(((MR_Word) check_hlds__simplify__format_call__GoalExpr0_17), (MR_Integer) 0);
              MR_Word check_hlds__simplify__format_call__SubGoal_87;
              MR_Word check_hlds__simplify__format_call__GoalExpr_194;

              {
                check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(check_hlds__simplify__format_call__SubGoal0_86, &check_hlds__simplify__format_call__SubGoal_87, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_108, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_109, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_110, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_111, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_112, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_113, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_0_114, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_115);
              }
              check_hlds__simplify__format_call__GoalExpr_194 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__simplify__format_call__SubGoal_87);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *check_hlds__simplify__format_call__Goal_12 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_194));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_18));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__simplify__format_call__Unification_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr0_17, (MR_Integer) 3)));
              MR_Word check_hlds__simplify__format_call___LHS_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr0_17, (MR_Integer) 0)));
              MR_Word check_hlds__simplify__format_call___RHS_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr0_17, (MR_Integer) 1)));
              MR_Word check_hlds__simplify__format_call___UnifyModes_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr0_17, (MR_Integer) 2)));
              MR_Word check_hlds__simplify__format_call___UnifyContext_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr0_17, (MR_Integer) 4)));
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_172_172;
              MR_Word check_hlds__simplify__format_call__TypeCtorInfo_228_228;
              MR_Word check_hlds__simplify__format_call__LHSVar_50;
              MR_Word check_hlds__simplify__format_call___ConsId_51;
              MR_Word check_hlds__simplify__format_call___RHSVars_52;
              MR_Word check_hlds__simplify__format_call___ArgModes_53;
              MR_Word check_hlds__simplify__format_call___How_54;
              MR_Word check_hlds__simplify__format_call___Unique_55;
              MR_Word check_hlds__simplify__format_call___SubInfo_56;
              MR_Word check_hlds__simplify__format_call__TypeCtorInfo_227_227;

              check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Unification_48)) == (MR_mktag((MR_Integer) 0)));
              if (check_hlds__simplify__format_call__succeeded)
                {
                  check_hlds__simplify__format_call__LHSVar_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_48, (MR_Integer) 0)));
                  check_hlds__simplify__format_call___ConsId_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_48, (MR_Integer) 1)));
                  check_hlds__simplify__format_call___RHSVars_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_48, (MR_Integer) 2)));
                  check_hlds__simplify__format_call___ArgModes_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_48, (MR_Integer) 3)));
                  check_hlds__simplify__format_call___How_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_48, (MR_Integer) 4)));
                  check_hlds__simplify__format_call___Unique_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_48, (MR_Integer) 5)));
                  check_hlds__simplify__format_call___SubInfo_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_48, (MR_Integer) 6)));
                  check_hlds__simplify__format_call__TypeCtorInfo_227_227 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                  {
                    check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__simplify__format_call__TypeCtorInfo_227_227, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_110, check_hlds__simplify__format_call__LHSVar_50);
                  }
                  check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                  if (check_hlds__simplify__format_call__succeeded)
                    {
                      check_hlds__simplify__format_call__TypeCtorInfo_228_228 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                      {
                        check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__remove_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_228_228, check_hlds__simplify__format_call__LHSVar_50, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_112, &check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_172_172);
                      }
                    }
                }
              if (check_hlds__simplify__format_call__succeeded)
                {
                  *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_113 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_172_172;
                  {
                    *check_hlds__simplify__format_call__Goal_12 = hlds__make_goal__true_goal_0_f_0();
                  }
                  *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_111 = check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_110;
                }
              else
                {
                  MR_Word check_hlds__simplify__format_call__TypeCtorInfo_229_229;
                  MR_Word check_hlds__simplify__format_call__NonLocals_185;

                  *check_hlds__simplify__format_call__Goal_12 = check_hlds__simplify__format_call__Goal0_11;
                  {
                    check_hlds__simplify__format_call__NonLocals_185 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__format_call__GoalInfo_18);
                  }
                  check_hlds__simplify__format_call__TypeCtorInfo_229_229 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                  {
                    parse_tree__set_of_var__union_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_229_229, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_110, check_hlds__simplify__format_call__NonLocals_185, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_111);
                  }
                  {
                    parse_tree__set_of_var__difference_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_229_229, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_112, check_hlds__simplify__format_call__NonLocals_185, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_113);
                  }
                }
              *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_109 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_108;
              *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_115 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_0_114;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__simplify__format_call__GoalId_25;
              MR_Word check_hlds__simplify__format_call__OptGoalInfo_26;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_177_177;
              MR_Box check_hlds__simplify__format_call__conv0_OptGoalInfo_26;

              {
                check_hlds__simplify__format_call__GoalId_25 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__simplify__format_call__GoalInfo_18);
              }
              {
                check_hlds__simplify__format_call__succeeded = mercury__map__remove_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0, ((MR_Box) (check_hlds__simplify__format_call__GoalId_25)), &check_hlds__simplify__format_call__conv0_OptGoalInfo_26, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_108, &check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_177_177);
              }
              if (check_hlds__simplify__format_call__succeeded)
                {
                  check_hlds__simplify__format_call__OptGoalInfo_26 = ((MR_Word) check_hlds__simplify__format_call__conv0_OptGoalInfo_26);
                  check_hlds__simplify__format_call__succeeded = MR_TRUE;
                }
              if (check_hlds__simplify__format_call__succeeded)
                {
                  MR_Word check_hlds__simplify__format_call__GoalToDeleteVars_28;
                  MR_Word check_hlds__simplify__format_call__GoalToDeleteGoals_29;

                  *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_109 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_177_177;
                  *check_hlds__simplify__format_call__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__OptGoalInfo_26, (MR_Integer) 0)));
                  check_hlds__simplify__format_call__GoalToDeleteVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__OptGoalInfo_26, (MR_Integer) 1)));
                  check_hlds__simplify__format_call__GoalToDeleteGoals_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__OptGoalInfo_26, (MR_Integer) 2)));
                  {
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__GoalToDeleteVars_28, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_112, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_113);
                  }
                  {
                    mercury__set_tree234__insert_list_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, check_hlds__simplify__format_call__GoalToDeleteGoals_29, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_0_114, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_115);
                  }
                  *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_111 = check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_110;
                }
              else
                {
                  MR_Word check_hlds__simplify__format_call__NonLocals_30;
                  MR_Word check_hlds__simplify__format_call__NewToDeleteGoals_31;
                  MR_Word check_hlds__simplify__format_call__TypeCtorInfo_224_224;
                  MR_Word check_hlds__simplify__format_call__NeededNonLocals_32;

                  {
                    check_hlds__simplify__format_call__NonLocals_30 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__format_call__GoalInfo_18);
                  }
                  {
                    check_hlds__simplify__format_call__succeeded = mercury__set_tree234__remove_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, ((MR_Box) (check_hlds__simplify__format_call__GoalId_25)), check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_0_114, &check_hlds__simplify__format_call__NewToDeleteGoals_31);
                  }
                  if (check_hlds__simplify__format_call__succeeded)
                    {
                      check_hlds__simplify__format_call__TypeCtorInfo_224_224 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                      {
                        parse_tree__set_of_var__intersect_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_224_224, check_hlds__simplify__format_call__NonLocals_30, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_110, &check_hlds__simplify__format_call__NeededNonLocals_32);
                      }
                      {
                        check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__is_empty_1_p_0(check_hlds__simplify__format_call__TypeCtorInfo_224_224, check_hlds__simplify__format_call__NeededNonLocals_32);
                      }
                    }
                  if (check_hlds__simplify__format_call__succeeded)
                    {
                      *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_115 = check_hlds__simplify__format_call__NewToDeleteGoals_31;
                      {
                        *check_hlds__simplify__format_call__Goal_12 = hlds__make_goal__true_goal_0_f_0();
                      }
                      *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_113 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_112;
                      *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_111 = check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_110;
                    }
                  else
                    {
                      MR_Word check_hlds__simplify__format_call__TypeCtorInfo_225_225;

                      *check_hlds__simplify__format_call__Goal_12 = check_hlds__simplify__format_call__Goal0_11;
                      check_hlds__simplify__format_call__TypeCtorInfo_225_225 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                      {
                        parse_tree__set_of_var__union_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_225_225, check_hlds__simplify__format_call__NonLocals_30, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_110, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_111);
                      }
                      {
                        parse_tree__set_of_var__difference_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_225_225, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_112, check_hlds__simplify__format_call__NonLocals_30, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_113);
                      }
                      *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_115 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_0_114;
                    }
                  *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_109 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_108;
                }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_17, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__simplify__format_call__TypeCtorInfo_226_226;
                  MR_Word check_hlds__simplify__format_call__NonLocals_184;

                  *check_hlds__simplify__format_call__Goal_12 = check_hlds__simplify__format_call__Goal0_11;
                  {
                    check_hlds__simplify__format_call__NonLocals_184 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__format_call__GoalInfo_18);
                  }
                  check_hlds__simplify__format_call__TypeCtorInfo_226_226 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                  {
                    parse_tree__set_of_var__union_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_226_226, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_110, check_hlds__simplify__format_call__NonLocals_184, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_111);
                  }
                  {
                    parse_tree__set_of_var__difference_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_226_226, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_112, check_hlds__simplify__format_call__NonLocals_184, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_113);
                  }
                  *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_109 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_108;
                  *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_115 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_0_114;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__simplify__format_call__ConjType_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_17, (MR_Integer) 1)));
                  MR_Word check_hlds__simplify__format_call__Conjuncts0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_17, (MR_Integer) 2)));
                  MR_Word check_hlds__simplify__format_call__Conjuncts_59;
                  MR_Word check_hlds__simplify__format_call__GoalExpr_60;

                  {
                    check_hlds__simplify__format_call__opt_format_call_sites_in_conj_10_p_0(check_hlds__simplify__format_call__Conjuncts0_58, &check_hlds__simplify__format_call__Conjuncts_59, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_108, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_109, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_110, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_111, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_112, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_113, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_0_114, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_115);
                  }
                  {
                    check_hlds__simplify__format_call__GoalExpr_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_60, 1) = ((MR_Box) (check_hlds__simplify__format_call__ConjType_57));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_60, 2) = ((MR_Box) (check_hlds__simplify__format_call__Conjuncts_59));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *check_hlds__simplify__format_call__Goal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_60));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_18));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__simplify__format_call__TypeCtorInfo_230_230;
                  MR_Word check_hlds__simplify__format_call__Disjuncts0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_17, (MR_Integer) 1)));
                  MR_Word check_hlds__simplify__format_call__Disjuncts_62;
                  MR_Word check_hlds__simplify__format_call__NeededVarsSets_63;
                  MR_Word check_hlds__simplify__format_call__ToDeleteVarsSets_64;
                  MR_Word check_hlds__simplify__format_call__ToDeleteGoalsSets_65;
                  MR_Word check_hlds__simplify__format_call__GoalExpr_188;

                  {
                    check_hlds__simplify__format_call__opt_format_call_sites_in_disj_13_p_0(check_hlds__simplify__format_call__Disjuncts0_61, &check_hlds__simplify__format_call__Disjuncts_62, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_108, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_109, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_110, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__NeededVarsSets_63, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_112, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__ToDeleteVarsSets_64, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_0_114, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__ToDeleteGoalsSets_65);
                  }
                  check_hlds__simplify__format_call__TypeCtorInfo_230_230 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                  {
                    *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_111 = parse_tree__set_of_var__union_list_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_230_230, check_hlds__simplify__format_call__NeededVarsSets_63);
                  }
                  {
                    *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_113 = parse_tree__set_of_var__intersect_list_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_230_230, check_hlds__simplify__format_call__ToDeleteVarsSets_64);
                  }
                  {
                    *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_115 = mercury__set_tree234__union_list_1_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, check_hlds__simplify__format_call__ToDeleteGoalsSets_65);
                  }
                  {
                    check_hlds__simplify__format_call__GoalExpr_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_188, 1) = ((MR_Box) (check_hlds__simplify__format_call__Disjuncts_62));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *check_hlds__simplify__format_call__Goal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_188));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_18));
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__simplify__format_call__TypeCtorInfo_232_232;
                  MR_Word check_hlds__simplify__format_call__SwitchVar_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_17, (MR_Integer) 1)));
                  MR_Word check_hlds__simplify__format_call__CanFail_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_17, (MR_Integer) 2)));
                  MR_Word check_hlds__simplify__format_call__Cases0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_17, (MR_Integer) 3)));
                  MR_Word check_hlds__simplify__format_call__Cases_69;
                  MR_Word check_hlds__simplify__format_call__GoalExpr_189;
                  MR_Word check_hlds__simplify__format_call__NeededVarsSets_190;
                  MR_Word check_hlds__simplify__format_call__ToDeleteVarsSets_191;
                  MR_Word check_hlds__simplify__format_call__ToDeleteGoalsSets_192;

                  {
                    check_hlds__simplify__format_call__opt_format_call_sites_in_switch_13_p_0(check_hlds__simplify__format_call__Cases0_68, &check_hlds__simplify__format_call__Cases_69, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_108, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_109, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_110, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__NeededVarsSets_190, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_112, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__ToDeleteVarsSets_191, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_0_114, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__ToDeleteGoalsSets_192);
                  }
                  check_hlds__simplify__format_call__TypeCtorInfo_232_232 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                  {
                    *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_111 = parse_tree__set_of_var__union_list_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_232_232, check_hlds__simplify__format_call__NeededVarsSets_190);
                  }
                  {
                    *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_113 = parse_tree__set_of_var__intersect_list_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_232_232, check_hlds__simplify__format_call__ToDeleteVarsSets_191);
                  }
                  {
                    *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_115 = mercury__set_tree234__union_list_1_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, check_hlds__simplify__format_call__ToDeleteGoalsSets_192);
                  }
                  {
                    check_hlds__simplify__format_call__GoalExpr_189 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_189, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_189, 1) = ((MR_Box) (check_hlds__simplify__format_call__SwitchVar_66));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_189, 2) = ((MR_Box) (check_hlds__simplify__format_call__CanFail_67));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_189, 3) = ((MR_Box) (check_hlds__simplify__format_call__Cases_69));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *check_hlds__simplify__format_call__Goal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_189));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_18));
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word check_hlds__simplify__format_call__Reason_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_17, (MR_Integer) 1)));
                  MR_Word check_hlds__simplify__format_call__SubGoal0_200 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_17, (MR_Integer) 2)));
                  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_135_135;
                  MR_Word check_hlds__simplify__format_call__TypeCtorInfo_237_237;
                  MR_Word check_hlds__simplify__format_call__TermVar_89;
                  MR_Word check_hlds__simplify__format_call__Var_134;
                  MR_Word check_hlds__simplify__format_call__TypeCtorInfo_236_236;

                  check_hlds__simplify__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__Reason_88)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Reason_88, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (check_hlds__simplify__format_call__succeeded)
                    {
                      check_hlds__simplify__format_call__TermVar_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Reason_88, (MR_Integer) 1)));
                      check_hlds__simplify__format_call__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Reason_88, (MR_Integer) 2)));
                      check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_134 == (MR_Integer) 1);
                      if (check_hlds__simplify__format_call__succeeded)
                        {
                          check_hlds__simplify__format_call__TypeCtorInfo_236_236 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                          {
                            check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__simplify__format_call__TypeCtorInfo_236_236, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_110, check_hlds__simplify__format_call__TermVar_89);
                          }
                          check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                          if (check_hlds__simplify__format_call__succeeded)
                            {
                              check_hlds__simplify__format_call__TypeCtorInfo_237_237 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                              {
                                check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__remove_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_237_237, check_hlds__simplify__format_call__TermVar_89, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_112, &check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_135_135);
                              }
                            }
                        }
                    }
                  if (check_hlds__simplify__format_call__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word check_hlds__simplify__format_call__next_value_of_Goal0_11 = check_hlds__simplify__format_call__SubGoal0_200;
                        MR_Word check_hlds__simplify__format_call__next_value_of_STATE_VARIABLE_ToDeleteVars_0_112 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_135_135;

                        check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_112 = check_hlds__simplify__format_call__next_value_of_STATE_VARIABLE_ToDeleteVars_0_112;
                        check_hlds__simplify__format_call__Goal0_11 = check_hlds__simplify__format_call__next_value_of_Goal0_11;
                      }
                      continue;
                    }
                  else
                    {
                      MR_Word check_hlds__simplify__format_call__GoalExpr_195;
                      MR_Word check_hlds__simplify__format_call__SubGoal_196;

                      {
                        check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(check_hlds__simplify__format_call__SubGoal0_200, &check_hlds__simplify__format_call__SubGoal_196, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_108, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_109, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_110, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_111, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_112, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_113, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_0_114, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_115);
                      }
                      {
                        check_hlds__simplify__format_call__GoalExpr_195 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_195, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_195, 1) = ((MR_Box) (check_hlds__simplify__format_call__Reason_88));
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_195, 2) = ((MR_Box) (check_hlds__simplify__format_call__SubGoal_196));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        *check_hlds__simplify__format_call__Goal_12 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_195));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_18));
                      }
                    }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word check_hlds__simplify__format_call__TypeCtorInfo_234_234;
                  MR_Word check_hlds__simplify__format_call__Vars_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_17, (MR_Integer) 1)));
                  MR_Word check_hlds__simplify__format_call__Cond0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_17, (MR_Integer) 2)));
                  MR_Word check_hlds__simplify__format_call__Then0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_17, (MR_Integer) 3)));
                  MR_Word check_hlds__simplify__format_call__Else0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_17, (MR_Integer) 4)));
                  MR_Word check_hlds__simplify__format_call__Else_74;
                  MR_Word check_hlds__simplify__format_call__NeededVarsBeforeElse_75;
                  MR_Word check_hlds__simplify__format_call__ToDeleteVarsBeforeElse_76;
                  MR_Word check_hlds__simplify__format_call__ToDeleteGoalsBeforeElse_77;
                  MR_Word check_hlds__simplify__format_call__Then_78;
                  MR_Word check_hlds__simplify__format_call__NeededVarsBeforeThen_79;
                  MR_Word check_hlds__simplify__format_call__ToDeleteVarsBeforeThen_80;
                  MR_Word check_hlds__simplify__format_call__ToDeleteGoalsBeforeThen_81;
                  MR_Word check_hlds__simplify__format_call__Cond_82;
                  MR_Word check_hlds__simplify__format_call__NeededVarsBeforeCond_83;
                  MR_Word check_hlds__simplify__format_call__ToDeleteVarsBeforeCond_84;
                  MR_Word check_hlds__simplify__format_call__ToDeleteGoalsBeforeCond_85;
                  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_148_148;
                  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_149_149;
                  MR_Word check_hlds__simplify__format_call__GoalExpr_193;

                  {
                    check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(check_hlds__simplify__format_call__Else0_73, &check_hlds__simplify__format_call__Else_74, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_108, &check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_148_148, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_110, &check_hlds__simplify__format_call__NeededVarsBeforeElse_75, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_112, &check_hlds__simplify__format_call__ToDeleteVarsBeforeElse_76, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_0_114, &check_hlds__simplify__format_call__ToDeleteGoalsBeforeElse_77);
                  }
                  {
                    check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(check_hlds__simplify__format_call__Then0_72, &check_hlds__simplify__format_call__Then_78, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_148_148, &check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_149_149, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_110, &check_hlds__simplify__format_call__NeededVarsBeforeThen_79, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_112, &check_hlds__simplify__format_call__ToDeleteVarsBeforeThen_80, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_0_114, &check_hlds__simplify__format_call__ToDeleteGoalsBeforeThen_81);
                  }
                  {
                    check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(check_hlds__simplify__format_call__Cond0_71, &check_hlds__simplify__format_call__Cond_82, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_149_149, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_109, check_hlds__simplify__format_call__NeededVarsBeforeThen_79, &check_hlds__simplify__format_call__NeededVarsBeforeCond_83, check_hlds__simplify__format_call__ToDeleteVarsBeforeThen_80, &check_hlds__simplify__format_call__ToDeleteVarsBeforeCond_84, check_hlds__simplify__format_call__ToDeleteGoalsBeforeThen_81, &check_hlds__simplify__format_call__ToDeleteGoalsBeforeCond_85);
                  }
                  check_hlds__simplify__format_call__TypeCtorInfo_234_234 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                  {
                    parse_tree__set_of_var__union_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_234_234, check_hlds__simplify__format_call__NeededVarsBeforeCond_83, check_hlds__simplify__format_call__NeededVarsBeforeElse_75, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_111);
                  }
                  {
                    parse_tree__set_of_var__intersect_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_234_234, check_hlds__simplify__format_call__ToDeleteVarsBeforeCond_84, check_hlds__simplify__format_call__ToDeleteVarsBeforeElse_76, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_113);
                  }
                  {
                    mercury__set_tree234__union_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, check_hlds__simplify__format_call__ToDeleteGoalsBeforeCond_85, check_hlds__simplify__format_call__ToDeleteGoalsBeforeElse_77, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_115);
                  }
                  {
                    check_hlds__simplify__format_call__GoalExpr_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_193, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_193, 1) = ((MR_Box) (check_hlds__simplify__format_call__Vars_70));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_193, 2) = ((MR_Box) (check_hlds__simplify__format_call__Cond_82));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_193, 3) = ((MR_Box) (check_hlds__simplify__format_call__Then_78));
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_193, 4) = ((MR_Box) (check_hlds__simplify__format_call__Else_74));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *check_hlds__simplify__format_call__Goal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_193));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_18));
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word check_hlds__simplify__format_call__ShortHand0_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_17, (MR_Integer) 1)));
                  MR_Word check_hlds__simplify__format_call__GoalExpr_213;

                  switch (MR_tag((MR_Word) check_hlds__simplify__format_call__ShortHand0_90)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.format_call", (MR_String) "predicate \140check_hlds.simplify.format_call.opt_format_call_sites_in_goal\'/10", (MR_String) "bi_implication");
                          return;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word check_hlds__simplify__format_call__TypeCtorInfo_238_238;
                        MR_Word check_hlds__simplify__format_call__AtomicType_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand0_90, (MR_Integer) 0)));
                        MR_Word check_hlds__simplify__format_call__OuterVars_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand0_90, (MR_Integer) 1)));
                        MR_Word check_hlds__simplify__format_call__InnerVars_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand0_90, (MR_Integer) 2)));
                        MR_Word check_hlds__simplify__format_call__OutputVars_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand0_90, (MR_Integer) 3)));
                        MR_Word check_hlds__simplify__format_call__MainGoal0_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand0_90, (MR_Integer) 4)));
                        MR_Word check_hlds__simplify__format_call__OrElseGoals0_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand0_90, (MR_Integer) 5)));
                        MR_Word check_hlds__simplify__format_call__OrElseInners_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand0_90, (MR_Integer) 6)));
                        MR_Word check_hlds__simplify__format_call__MainGoal_98;
                        MR_Word check_hlds__simplify__format_call__NeededVarsMain_99;
                        MR_Word check_hlds__simplify__format_call__ToDeleteVarsMain_100;
                        MR_Word check_hlds__simplify__format_call__ToDeleteGoalsMain_101;
                        MR_Word check_hlds__simplify__format_call__OrElseGoals_102;
                        MR_Word check_hlds__simplify__format_call__ShortHand_103;
                        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_123_123;
                        MR_Word check_hlds__simplify__format_call__Var_129;
                        MR_Word check_hlds__simplify__format_call__Var_131;
                        MR_Word check_hlds__simplify__format_call__Var_133;
                        MR_Word check_hlds__simplify__format_call__NeededVarsSets_202;
                        MR_Word check_hlds__simplify__format_call__ToDeleteVarsSets_203;
                        MR_Word check_hlds__simplify__format_call__ToDeleteGoalsSets_204;

                        {
                          check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(check_hlds__simplify__format_call__MainGoal0_95, &check_hlds__simplify__format_call__MainGoal_98, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_108, &check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_123_123, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_110, &check_hlds__simplify__format_call__NeededVarsMain_99, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_112, &check_hlds__simplify__format_call__ToDeleteVarsMain_100, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_0_114, &check_hlds__simplify__format_call__ToDeleteGoalsMain_101);
                        }
                        {
                          check_hlds__simplify__format_call__opt_format_call_sites_in_disj_13_p_0(check_hlds__simplify__format_call__OrElseGoals0_96, &check_hlds__simplify__format_call__OrElseGoals_102, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_123_123, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_109, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_110, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__NeededVarsSets_202, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_112, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__ToDeleteVarsSets_203, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_0_114, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__ToDeleteGoalsSets_204);
                        }
                        check_hlds__simplify__format_call__TypeCtorInfo_238_238 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                        {
                          check_hlds__simplify__format_call__Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_129, 0) = ((MR_Box) (check_hlds__simplify__format_call__NeededVarsMain_99));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_129, 1) = ((MR_Box) (check_hlds__simplify__format_call__NeededVarsSets_202));
                        }
                        {
                          *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_111 = parse_tree__set_of_var__union_list_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_238_238, check_hlds__simplify__format_call__Var_129);
                        }
                        {
                          check_hlds__simplify__format_call__Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_131, 0) = ((MR_Box) (check_hlds__simplify__format_call__ToDeleteVarsMain_100));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_131, 1) = ((MR_Box) (check_hlds__simplify__format_call__ToDeleteVarsSets_203));
                        }
                        {
                          *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_113 = parse_tree__set_of_var__intersect_list_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_238_238, check_hlds__simplify__format_call__Var_131);
                        }
                        {
                          check_hlds__simplify__format_call__Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_133, 0) = ((MR_Box) (check_hlds__simplify__format_call__ToDeleteGoalsMain_101));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_133, 1) = ((MR_Box) (check_hlds__simplify__format_call__ToDeleteGoalsSets_204));
                        }
                        {
                          *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_115 = mercury__set_tree234__union_list_1_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, check_hlds__simplify__format_call__Var_133);
                        }
                        {
                          check_hlds__simplify__format_call__ShortHand_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_103, 0) = ((MR_Box) (check_hlds__simplify__format_call__AtomicType_91));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_103, 1) = ((MR_Box) (check_hlds__simplify__format_call__OuterVars_92));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_103, 2) = ((MR_Box) (check_hlds__simplify__format_call__InnerVars_93));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_103, 3) = ((MR_Box) (check_hlds__simplify__format_call__OutputVars_94));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_103, 4) = ((MR_Box) (check_hlds__simplify__format_call__MainGoal_98));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_103, 5) = ((MR_Box) (check_hlds__simplify__format_call__OrElseGoals_102));
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_103, 6) = ((MR_Box) (check_hlds__simplify__format_call__OrElseInners_97));
                        }
                        {
                          check_hlds__simplify__format_call__GoalExpr_213 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_213, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_213, 1) = ((MR_Box) (check_hlds__simplify__format_call__ShortHand_103));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word check_hlds__simplify__format_call__MaybeIO_104 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand0_90, (MR_Integer) 0)));
                        MR_Word check_hlds__simplify__format_call__ResultVar_105 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand0_90, (MR_Integer) 1)));
                        MR_Word check_hlds__simplify__format_call__SubGoal0_205 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand0_90, (MR_Integer) 2)));
                        MR_Word check_hlds__simplify__format_call__SubGoal_206;
                        MR_Word check_hlds__simplify__format_call__ShortHand_207;

                        {
                          check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(check_hlds__simplify__format_call__SubGoal0_205, &check_hlds__simplify__format_call__SubGoal_206, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_108, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_109, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_110, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_111, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_112, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_113, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_0_114, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteGoals_115);
                        }
                        {
                          check_hlds__simplify__format_call__ShortHand_207 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand_207, 0) = ((MR_Box) (check_hlds__simplify__format_call__MaybeIO_104));
                          MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand_207, 1) = ((MR_Box) (check_hlds__simplify__format_call__ResultVar_105));
                          MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand_207, 2) = ((MR_Box) (check_hlds__simplify__format_call__SubGoal_206));
                        }
                        {
                          check_hlds__simplify__format_call__GoalExpr_213 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_213, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                          MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_213, 1) = ((MR_Box) (check_hlds__simplify__format_call__ShortHand_207));
                        }
                      }
                      break;
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    *check_hlds__simplify__format_call__Goal_12 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_213));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_18));
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
  MR_Word check_hlds__simplify__format_call__ModuleInfo_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__ContainingId_3,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_4,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_6,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_8,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_10,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11,
  MR_Word * check_hlds__simplify__format_call__HeadVar__12_12)
{
  if ((check_hlds__simplify__format_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *check_hlds__simplify__format_call__HeadVar__12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_10;
      *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_8;
      *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_6;
      *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_4;
    }
  else
    {
      MR_Word check_hlds__simplify__format_call__TypeCtorInfo_58_58;
      MR_Word check_hlds__simplify__format_call__Goal_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word check_hlds__simplify__format_call__Goals_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word check_hlds__simplify__format_call__DisjId_36;
      MR_Word check_hlds__simplify__format_call__HeadRelevantVars_37;
      MR_Word check_hlds__simplify__format_call__TailRelevantVars_38;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_47_47;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_48_48;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_49_49;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_50_50;
      MR_Word check_hlds__simplify__format_call__Var_51;
      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_52_52;

      {
        check_hlds__simplify__format_call__Var_51 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      }
      {
        check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(check_hlds__simplify__format_call__ModuleInfo_1, check_hlds__simplify__format_call__Goal_28, &check_hlds__simplify__format_call__DisjId_36, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_4, &check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_47_47, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_6, &check_hlds__simplify__format_call__STATE_VARIABLE_Counter_48_48, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_8, &check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_49_49, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_10, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_50_50, check_hlds__simplify__format_call__Var_51, &check_hlds__simplify__format_call__HeadRelevantVars_37);
      }
      check_hlds__simplify__format_call__TypeCtorInfo_58_58 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
      {
        mercury__map__det_insert_4_p_0(check_hlds__simplify__format_call__TypeCtorInfo_58_58, check_hlds__simplify__format_call__TypeCtorInfo_58_58, ((MR_Box) (check_hlds__simplify__format_call__DisjId_36)), ((MR_Box) (check_hlds__simplify__format_call__ContainingId_3)), check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_50_50, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_52_52);
      }
      {
        check_hlds__simplify__format_call__format_call_traverse_disj_arms_12_p_0(check_hlds__simplify__format_call__ModuleInfo_1, check_hlds__simplify__format_call__Goals_29, check_hlds__simplify__format_call__ContainingId_3, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_47_47, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_48_48, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_49_49, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_52_52, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11, &check_hlds__simplify__format_call__TailRelevantVars_38);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *check_hlds__simplify__format_call__HeadVar__12_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__HeadRelevantVars_37));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__TailRelevantVars_38));
      }
    }
}

void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_disj_13_p_0(
  MR_Word check_hlds__simplify__format_call__ModuleInfo_14,
  MR_Word check_hlds__simplify__format_call__Disjuncts_15,
  MR_Word check_hlds__simplify__format_call__CurId_16,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_24,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_25,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_26,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Counter_27,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_28,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_29,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_30,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_31,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_32,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_33)
{
  {
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_39_39;
    MR_Word check_hlds__simplify__format_call__DisjRelevantVarSets_22;
    MR_Word check_hlds__simplify__format_call__DisjRelevantVars_23;

    {
      check_hlds__simplify__format_call__format_call_traverse_disj_arms_12_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__Disjuncts_15, check_hlds__simplify__format_call__CurId_16, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_24, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_25, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_26, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_27, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_28, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_29, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_30, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_31, &check_hlds__simplify__format_call__DisjRelevantVarSets_22);
    }
    check_hlds__simplify__format_call__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      check_hlds__simplify__format_call__DisjRelevantVars_23 = parse_tree__set_of_var__union_list_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_39_39, check_hlds__simplify__format_call__DisjRelevantVarSets_22);
    }
    {
      parse_tree__set_of_var__union_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_39_39, check_hlds__simplify__format_call__DisjRelevantVars_23, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_32, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_33);
    }
  }
}

static MR_Box MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0_1(
  MR_Box check_hlds__simplify__format_call__closure_arg,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1)
{
  {
    MR_Box check_hlds__simplify__format_call__wrapper_arg_2;
    MR_Box check_hlds__simplify__format_call__closure = check_hlds__simplify__format_call__closure_arg;
    MR_Word check_hlds__simplify__format_call__conv0_Goal_5;

    {
      check_hlds__simplify__format_call__conv0_Goal_5 = check_hlds__simplify__format_call__project_case_goal_1_f_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1));
    }
    check_hlds__simplify__format_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__format_call__conv0_Goal_5));
    return check_hlds__simplify__format_call__wrapper_arg_2;
  }
}

void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_4,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_6,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_8,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_10,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_12,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__simplify__format_call__succeeded;

        if ((check_hlds__simplify__format_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_12;
            *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_10;
            *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_8;
            *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_6;
            *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_4;
          }
        else
          {
            MR_Word check_hlds__simplify__format_call__Goal_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__simplify__format_call__Goals_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__simplify__format_call__GoalExpr_40;
            MR_Word check_hlds__simplify__format_call__GoalInfo_41;
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_134_134;
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_135_135;
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_136_136;
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_137_137;
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_138_138;

            {
              check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__Goals_33, check_hlds__simplify__format_call__HeadVar__3_3, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_4, &check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_134_134, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_6, &check_hlds__simplify__format_call__STATE_VARIABLE_Counter_135_135, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_8, &check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_136_136, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_10, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_137_137, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_12, &check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_138_138);
            }
            check_hlds__simplify__format_call__GoalExpr_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Goal_32, (MR_Integer) 0)));
            check_hlds__simplify__format_call__GoalInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Goal_32, (MR_Integer) 1)));
            switch (MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr_40)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__simplify__format_call__TypeCtorInfo_247_247;
                  MR_Word check_hlds__simplify__format_call__SubGoal_56 = (MR_Word) MR_body(((MR_Word) check_hlds__simplify__format_call__GoalExpr_40), (MR_Integer) 0);
                  MR_Word check_hlds__simplify__format_call__SubGoalId_57;
                  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_191_191;

                  {
                    check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__SubGoal_56, &check_hlds__simplify__format_call__SubGoalId_57, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_134_134, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_135_135, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_136_136, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_137_137, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_191_191, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_138_138, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
                  }
                  check_hlds__simplify__format_call__TypeCtorInfo_247_247 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
                  {
                    mercury__map__det_insert_4_p_0(check_hlds__simplify__format_call__TypeCtorInfo_247_247, check_hlds__simplify__format_call__TypeCtorInfo_247_247, ((MR_Box) (check_hlds__simplify__format_call__SubGoalId_57)), ((MR_Box) (check_hlds__simplify__format_call__HeadVar__3_3)), check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_191_191, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__simplify__format_call__RHS_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));
                  MR_Word check_hlds__simplify__format_call__Unification_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 3)));
                  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_154_154;
                  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_155_155;
                  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_156_156;
                  MR_Word check_hlds__simplify__format_call__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 0)));
                  MR_Word check_hlds__simplify__format_call__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 2)));
                  MR_Word check_hlds__simplify__format_call__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 4)));

                  {
                    check_hlds__simplify__format_call__format_call_traverse_unify_9_p_0(check_hlds__simplify__format_call__Unification_96, check_hlds__simplify__format_call__GoalInfo_41, check_hlds__simplify__format_call__HeadVar__3_3, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_136_136, &check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_154_154, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_137_137, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_155_155, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_138_138, &check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_156_156);
                  }
                  switch (MR_tag((MR_Word) check_hlds__simplify__format_call__RHS_94)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_134_134;
                        *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_135_135;
                        *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_154_154;
                        *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_155_155;
                        *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_156_156;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_134_134;
                        *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_135_135;
                        *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_154_154;
                        *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_155_155;
                        *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_156_156;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word check_hlds__simplify__format_call__TypeCtorInfo_254_254;
                        MR_Word check_hlds__simplify__format_call__LambdaGoal_106 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_94, (MR_Integer) 6)));
                        MR_Word check_hlds__simplify__format_call__LambdaGoalId_107;
                        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_160_160;
                        MR_Word check_hlds__simplify__format_call___Purity_98 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_94, (MR_Integer) 0)))) & (MR_Integer) 3);
                        MR_Word check_hlds__simplify__format_call___HOGroundness_99 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_94, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        MR_Word check_hlds__simplify__format_call___PredFunc_100 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_94, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                        MR_Word check_hlds__simplify__format_call___LambdaNonLocals_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_94, (MR_Integer) 2)));
                        MR_Word check_hlds__simplify__format_call___LambdaQuantVars_103 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_94, (MR_Integer) 3)));
                        MR_Word check_hlds__simplify__format_call___LambdaModes_104 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_94, (MR_Integer) 4)));
                        MR_Word check_hlds__simplify__format_call___LambdaDetism_105 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_94, (MR_Integer) 5)));

                        {
                          check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__LambdaGoal_106, &check_hlds__simplify__format_call__LambdaGoalId_107, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_134_134, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_135_135, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_154_154, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_155_155, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_160_160, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_156_156, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
                        }
                        check_hlds__simplify__format_call__TypeCtorInfo_254_254 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
                        {
                          mercury__map__det_insert_4_p_0(check_hlds__simplify__format_call__TypeCtorInfo_254_254, check_hlds__simplify__format_call__TypeCtorInfo_254_254, ((MR_Box) (check_hlds__simplify__format_call__LambdaGoalId_107)), ((MR_Box) (check_hlds__simplify__format_call__HeadVar__3_3)), check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_160_160, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11);
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__simplify__format_call__PredId_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 0)));
                  MR_Word check_hlds__simplify__format_call__ArgVars_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 2)));
                  MR_Word check_hlds__simplify__format_call__PredInfo_78;
                  MR_Word check_hlds__simplify__format_call__ModuleName_79;
                  MR_String check_hlds__simplify__format_call__Name_80;
                  MR_Integer check_hlds__simplify__format_call___ProcId_73 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));
                  MR_Word check_hlds__simplify__format_call__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 3)));
                  MR_Word check_hlds__simplify__format_call__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 4)));
                  MR_Word check_hlds__simplify__format_call__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 5)));
                  MR_Word check_hlds__simplify__format_call__Kind_81;
                  MR_Word check_hlds__simplify__format_call__StringVar_82;
                  MR_Word check_hlds__simplify__format_call__ValuesVar_83;

                  {
                    hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__PredId_72, &check_hlds__simplify__format_call__PredInfo_78);
                  }
                  {
                    check_hlds__simplify__format_call__ModuleName_79 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__simplify__format_call__PredInfo_78);
                  }
                  {
                    check_hlds__simplify__format_call__Name_80 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__simplify__format_call__PredInfo_78);
                  }
                  {
                    check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call__is_format_call_kind_and_vars_7_p_0(check_hlds__simplify__format_call__ModuleName_79, check_hlds__simplify__format_call__Name_80, check_hlds__simplify__format_call__ArgVars_74, check_hlds__simplify__format_call__GoalInfo_41, &check_hlds__simplify__format_call__Kind_81, &check_hlds__simplify__format_call__StringVar_82, &check_hlds__simplify__format_call__ValuesVar_83);
                  }
                  if (check_hlds__simplify__format_call__succeeded)
                    {
                      MR_Integer check_hlds__simplify__format_call__Arity_84;
                      MR_Word check_hlds__simplify__format_call__GoalId_85;
                      MR_Word check_hlds__simplify__format_call__Context_86;
                      MR_Word check_hlds__simplify__format_call__FormatCallSite_87;
                      MR_Word check_hlds__simplify__format_call__Var_164;
                      MR_Word check_hlds__simplify__format_call__Var_166;

                      {
                        check_hlds__simplify__format_call__Arity_84 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__simplify__format_call__PredInfo_78);
                      }
                      {
                        check_hlds__simplify__format_call__GoalId_85 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__simplify__format_call__GoalInfo_41);
                      }
                      {
                        check_hlds__simplify__format_call__Context_86 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__format_call__GoalInfo_41);
                      }
                      {
                        check_hlds__simplify__format_call__FormatCallSite_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalId_85));
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_41));
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 2) = ((MR_Box) (check_hlds__simplify__format_call__StringVar_82));
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 3) = ((MR_Box) (check_hlds__simplify__format_call__ValuesVar_83));
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 4) = ((MR_Box) (check_hlds__simplify__format_call__Kind_81));
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 5) = ((MR_Box) (check_hlds__simplify__format_call__PredId_72));
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 6) = ((MR_Box) (check_hlds__simplify__format_call__ModuleName_79));
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 7) = ((MR_Box) (check_hlds__simplify__format_call__Name_80));
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 8) = ((MR_Box) (check_hlds__simplify__format_call__Arity_84));
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 9) = ((MR_Box) (check_hlds__simplify__format_call__Context_86));
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 10) = ((MR_Box) (check_hlds__simplify__format_call__HeadVar__3_3));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__FormatCallSite_87));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_134_134));
                      }
                      {
                        check_hlds__simplify__format_call__Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_166, 0) = ((MR_Box) (check_hlds__simplify__format_call__ValuesVar_83));
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_166, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        check_hlds__simplify__format_call__Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_164, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringVar_82));
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_164, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_166));
                      }
                      {
                        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__Var_164, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_138_138, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
                      }
                      *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_136_136;
                    }
                  else
                    {
                      MR_Word check_hlds__simplify__format_call__Var_256;

                      {
                        check_hlds__simplify__format_call__Var_256 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
                      }
                      {
                        check_hlds__simplify__format_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__format_call__ModuleName_79, check_hlds__simplify__format_call__Var_256);
                      }
                      if (check_hlds__simplify__format_call__succeeded)
                        {
                          MR_Word check_hlds__simplify__format_call__ArgVarA_88;
                          MR_Word check_hlds__simplify__format_call__ArgVarB_89;
                          MR_Word check_hlds__simplify__format_call__ResultVar_90;
                          MR_Word check_hlds__simplify__format_call__TypeCtorInfo_250_250;
                          MR_Word check_hlds__simplify__format_call__Var_168;
                          MR_Word check_hlds__simplify__format_call__Var_169;
                          MR_Word check_hlds__simplify__format_call__Var_170;

                          if ((strcmp(check_hlds__simplify__format_call__Name_80, (MR_String) "++") == 0))
                            check_hlds__simplify__format_call__succeeded = MR_TRUE;
                          else
                          if ((strcmp(check_hlds__simplify__format_call__Name_80, (MR_String) "append") == 0))
                            check_hlds__simplify__format_call__succeeded = MR_TRUE;
                          else
                            check_hlds__simplify__format_call__succeeded = MR_FALSE;
                          if (check_hlds__simplify__format_call__succeeded)
                            {
                              check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__ArgVars_74)) == (MR_mktag((MR_Integer) 1)));
                              if (check_hlds__simplify__format_call__succeeded)
                                {
                                  check_hlds__simplify__format_call__ArgVarA_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_74, (MR_Integer) 0)));
                                  check_hlds__simplify__format_call__Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_74, (MR_Integer) 1)));
                                  check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_168)) == (MR_mktag((MR_Integer) 1)));
                                  if (check_hlds__simplify__format_call__succeeded)
                                    {
                                      check_hlds__simplify__format_call__ArgVarB_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_168, (MR_Integer) 0)));
                                      check_hlds__simplify__format_call__Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_168, (MR_Integer) 1)));
                                      check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_169)) == (MR_mktag((MR_Integer) 1)));
                                      if (check_hlds__simplify__format_call__succeeded)
                                        {
                                          check_hlds__simplify__format_call__ResultVar_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_169, (MR_Integer) 0)));
                                          check_hlds__simplify__format_call__Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_169, (MR_Integer) 1)));
                                          check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_170 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                          if (check_hlds__simplify__format_call__succeeded)
                                            {
                                              check_hlds__simplify__format_call__TypeCtorInfo_250_250 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                                              {
                                                check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__simplify__format_call__TypeCtorInfo_250_250, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_138_138, check_hlds__simplify__format_call__ResultVar_90);
                                              }
                                            }
                                        }
                                    }
                                }
                            }
                          if (check_hlds__simplify__format_call__succeeded)
                            {
                              MR_Word check_hlds__simplify__format_call__TypeCtorInfo_251_251 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                              MR_Word check_hlds__simplify__format_call__StringState_91;
                              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_171_171;
                              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_172_172;
                              MR_Word check_hlds__simplify__format_call__GoalId_226;

                              {
                                parse_tree__set_of_var__delete_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_251_251, check_hlds__simplify__format_call__ResultVar_90, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_138_138, &check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_171_171);
                              }
                              {
                                parse_tree__set_of_var__insert_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_251_251, check_hlds__simplify__format_call__ArgVarA_88, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_171_171, &check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_172_172);
                              }
                              {
                                parse_tree__set_of_var__insert_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_251_251, check_hlds__simplify__format_call__ArgVarB_89, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_172_172, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
                              }
                              {
                                check_hlds__simplify__format_call__GoalId_226 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__simplify__format_call__GoalInfo_41);
                              }
                              {
                                check_hlds__simplify__format_call__StringState_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__StringState_91, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalId_226));
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__StringState_91, 1) = ((MR_Box) (check_hlds__simplify__format_call__ArgVarA_88));
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__StringState_91, 2) = ((MR_Box) (check_hlds__simplify__format_call__ArgVarB_89));
                              }
                              {
                                check_hlds__simplify__format_call__add_to_string_map_5_p_0(check_hlds__simplify__format_call__HeadVar__3_3, check_hlds__simplify__format_call__ResultVar_90, check_hlds__simplify__format_call__StringState_91, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_136_136, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9);
                              }
                            }
                          else
                            {
                              MR_Word check_hlds__simplify__format_call__ListSkeletonVar_92;
                              MR_Word check_hlds__simplify__format_call__ResultVar_230;
                              MR_Word check_hlds__simplify__format_call__TypeCtorInfo_252_252;
                              MR_Word check_hlds__simplify__format_call__Var_175;
                              MR_Word check_hlds__simplify__format_call__Var_176;

                              check_hlds__simplify__format_call__succeeded = (strcmp(check_hlds__simplify__format_call__Name_80, (MR_String) "append_list") == 0);
                              if (check_hlds__simplify__format_call__succeeded)
                                {
                                  check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__ArgVars_74)) == (MR_mktag((MR_Integer) 1)));
                                  if (check_hlds__simplify__format_call__succeeded)
                                    {
                                      check_hlds__simplify__format_call__ListSkeletonVar_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_74, (MR_Integer) 0)));
                                      check_hlds__simplify__format_call__Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_74, (MR_Integer) 1)));
                                      check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_175)) == (MR_mktag((MR_Integer) 1)));
                                      if (check_hlds__simplify__format_call__succeeded)
                                        {
                                          check_hlds__simplify__format_call__ResultVar_230 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_175, (MR_Integer) 0)));
                                          check_hlds__simplify__format_call__Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_175, (MR_Integer) 1)));
                                          check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_176 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                          if (check_hlds__simplify__format_call__succeeded)
                                            {
                                              check_hlds__simplify__format_call__TypeCtorInfo_252_252 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                                              {
                                                check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__simplify__format_call__TypeCtorInfo_252_252, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_138_138, check_hlds__simplify__format_call__ResultVar_230);
                                              }
                                            }
                                        }
                                    }
                                }
                              if (check_hlds__simplify__format_call__succeeded)
                                {
                                  MR_Word check_hlds__simplify__format_call__TypeCtorInfo_253_253 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                                  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_177_177;
                                  MR_Word check_hlds__simplify__format_call__GoalId_227;
                                  MR_Word check_hlds__simplify__format_call__StringState_228;

                                  {
                                    parse_tree__set_of_var__delete_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_253_253, check_hlds__simplify__format_call__ResultVar_230, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_138_138, &check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_177_177);
                                  }
                                  {
                                    parse_tree__set_of_var__insert_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_253_253, check_hlds__simplify__format_call__ListSkeletonVar_92, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_177_177, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
                                  }
                                  {
                                    check_hlds__simplify__format_call__GoalId_227 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__simplify__format_call__GoalInfo_41);
                                  }
                                  {
                                    check_hlds__simplify__format_call__StringState_228 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__StringState_228, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalId_227));
                                    MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__StringState_228, 1) = ((MR_Box) (check_hlds__simplify__format_call__ListSkeletonVar_92));
                                  }
                                  {
                                    check_hlds__simplify__format_call__add_to_string_map_5_p_0(check_hlds__simplify__format_call__HeadVar__3_3, check_hlds__simplify__format_call__ResultVar_230, check_hlds__simplify__format_call__StringState_228, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_136_136, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9);
                                  }
                                }
                              else
                                {
                                  *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_138_138;
                                  *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_136_136;
                                }
                            }
                        }
                      else
                        {
                          *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_138_138;
                          *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_136_136;
                        }
                      *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_134_134;
                    }
                  *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_135_135;
                  *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_137_137;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_134_134;
                      *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_135_135;
                      *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_136_136;
                      *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_137_137;
                      *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_138_138;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_134_134;
                      *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_135_135;
                      *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_136_136;
                      *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_137_137;
                      *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_138_138;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word check_hlds__simplify__format_call__Conjuncts_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 2)));
                      MR_Word check_hlds__simplify__format_call__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word check_hlds__simplify__format_call__next_value_of_HeadVar__2_2 = check_hlds__simplify__format_call__Conjuncts_43;
                        MR_Word check_hlds__simplify__format_call__next_value_of_STATE_VARIABLE_FormatCallSites_0_4 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_134_134;
                        MR_Word check_hlds__simplify__format_call__next_value_of_STATE_VARIABLE_Counter_0_6 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_135_135;
                        MR_Word check_hlds__simplify__format_call__next_value_of_STATE_VARIABLE_ConjMaps_0_8 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_136_136;
                        MR_Word check_hlds__simplify__format_call__next_value_of_STATE_VARIABLE_PredMap_0_10 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_137_137;
                        MR_Word check_hlds__simplify__format_call__next_value_of_STATE_VARIABLE_RelevantVars_0_12 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_138_138;

                        check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_12 = check_hlds__simplify__format_call__next_value_of_STATE_VARIABLE_RelevantVars_0_12;
                        check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_10 = check_hlds__simplify__format_call__next_value_of_STATE_VARIABLE_PredMap_0_10;
                        check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_8 = check_hlds__simplify__format_call__next_value_of_STATE_VARIABLE_ConjMaps_0_8;
                        check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_6 = check_hlds__simplify__format_call__next_value_of_STATE_VARIABLE_Counter_0_6;
                        check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_4 = check_hlds__simplify__format_call__next_value_of_STATE_VARIABLE_FormatCallSites_0_4;
                        check_hlds__simplify__format_call__HeadVar__2_2 = check_hlds__simplify__format_call__next_value_of_HeadVar__2_2;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word check_hlds__simplify__format_call__Disjuncts_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));

                      {
                        check_hlds__simplify__format_call__format_call_traverse_disj_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__Disjuncts_44, check_hlds__simplify__format_call__HeadVar__3_3, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_134_134, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_135_135, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_136_136, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_137_137, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_138_138, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word check_hlds__simplify__format_call__Cases_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 3)));
                      MR_Word check_hlds__simplify__format_call__Disjuncts_224;
                      MR_Word check_hlds__simplify__format_call__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));
                      MR_Word check_hlds__simplify__format_call__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 2)));

                      {
                        check_hlds__simplify__format_call__Disjuncts_224 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__simplify__format_call_scalar_common_1[8], check_hlds__simplify__format_call__Cases_47);
                      }
                      {
                        check_hlds__simplify__format_call__format_call_traverse_disj_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__Disjuncts_224, check_hlds__simplify__format_call__HeadVar__3_3, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_134_134, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_135_135, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_136_136, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_137_137, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_138_138, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word check_hlds__simplify__format_call__Reason_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));
                      MR_Word check_hlds__simplify__format_call__SubGoal_225 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 2)));
                      MR_Word check_hlds__simplify__format_call__TermVar_59;
                      MR_Word check_hlds__simplify__format_call__Var_180;
                      MR_Word check_hlds__simplify__format_call__TypeCtorInfo_248_248;

                      check_hlds__simplify__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__Reason_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Reason_58, (MR_Integer) 0)))) == (MR_Integer) 6)));
                      if (check_hlds__simplify__format_call__succeeded)
                        {
                          check_hlds__simplify__format_call__TermVar_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Reason_58, (MR_Integer) 1)));
                          check_hlds__simplify__format_call__Var_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Reason_58, (MR_Integer) 2)));
                          check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_180 == (MR_Integer) 1);
                          if (check_hlds__simplify__format_call__succeeded)
                            {
                              check_hlds__simplify__format_call__TypeCtorInfo_248_248 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                              {
                                check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__simplify__format_call__TypeCtorInfo_248_248, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_138_138, check_hlds__simplify__format_call__TermVar_59);
                              }
                              check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
                            }
                        }
                      if (check_hlds__simplify__format_call__succeeded)
                        {
                          *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_138_138;
                          *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_137_137;
                          *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_136_136;
                          *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_135_135;
                          *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_134_134;
                        }
                      else
                        {
                          MR_Word check_hlds__simplify__format_call__Var_181;

                          {
                            check_hlds__simplify__format_call__Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_181, 0) = ((MR_Box) (check_hlds__simplify__format_call__SubGoal_225));
                            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          /* direct tailcall eliminated */
                          {
                            MR_Word check_hlds__simplify__format_call__next_value_of_HeadVar__2_2 = check_hlds__simplify__format_call__Var_181;
                            MR_Word check_hlds__simplify__format_call__next_value_of_STATE_VARIABLE_FormatCallSites_0_4 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_134_134;
                            MR_Word check_hlds__simplify__format_call__next_value_of_STATE_VARIABLE_Counter_0_6 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_135_135;
                            MR_Word check_hlds__simplify__format_call__next_value_of_STATE_VARIABLE_ConjMaps_0_8 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_136_136;
                            MR_Word check_hlds__simplify__format_call__next_value_of_STATE_VARIABLE_PredMap_0_10 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_137_137;
                            MR_Word check_hlds__simplify__format_call__next_value_of_STATE_VARIABLE_RelevantVars_0_12 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_138_138;

                            check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_12 = check_hlds__simplify__format_call__next_value_of_STATE_VARIABLE_RelevantVars_0_12;
                            check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_10 = check_hlds__simplify__format_call__next_value_of_STATE_VARIABLE_PredMap_0_10;
                            check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_8 = check_hlds__simplify__format_call__next_value_of_STATE_VARIABLE_ConjMaps_0_8;
                            check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_6 = check_hlds__simplify__format_call__next_value_of_STATE_VARIABLE_Counter_0_6;
                            check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_4 = check_hlds__simplify__format_call__next_value_of_STATE_VARIABLE_FormatCallSites_0_4;
                            check_hlds__simplify__format_call__HeadVar__2_2 = check_hlds__simplify__format_call__next_value_of_HeadVar__2_2;
                          }
                          continue;
                        }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word check_hlds__simplify__format_call__TypeCtorInfo_245_245;
                      MR_Word check_hlds__simplify__format_call__Cond_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 2)));
                      MR_Word check_hlds__simplify__format_call__Then_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 3)));
                      MR_Word check_hlds__simplify__format_call__Else_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 4)));
                      MR_Word check_hlds__simplify__format_call__ElseId_52;
                      MR_Word check_hlds__simplify__format_call__CondThenId_53;
                      MR_Word check_hlds__simplify__format_call__ThenConj_54;
                      MR_Word check_hlds__simplify__format_call__CondConj_55;
                      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_194_194;
                      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_195_195;
                      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_196_196;
                      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_197_197;
                      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_198_198;
                      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_199_199;
                      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_200_200;
                      MR_Word check_hlds__simplify__format_call__Var_201;
                      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_205_205;
                      MR_Word check_hlds__simplify__format_call__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));

                      {
                        check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__Else_51, &check_hlds__simplify__format_call__ElseId_52, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_134_134, &check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_194_194, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_135_135, &check_hlds__simplify__format_call__STATE_VARIABLE_Counter_195_195, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_136_136, &check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_196_196, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_137_137, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_197_197, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_138_138, &check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_198_198);
                      }
                      check_hlds__simplify__format_call__TypeCtorInfo_245_245 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
                      {
                        mercury__map__det_insert_4_p_0(check_hlds__simplify__format_call__TypeCtorInfo_245_245, check_hlds__simplify__format_call__TypeCtorInfo_245_245, ((MR_Box) (check_hlds__simplify__format_call__ElseId_52)), ((MR_Box) (check_hlds__simplify__format_call__HeadVar__3_3)), check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_197_197, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_199_199);
                      }
                      {
                        check_hlds__simplify__format_call__alloc_id_3_p_0(&check_hlds__simplify__format_call__CondThenId_53, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_195_195, &check_hlds__simplify__format_call__STATE_VARIABLE_Counter_200_200);
                      }
                      {
                        hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__simplify__format_call__Then_50, &check_hlds__simplify__format_call__ThenConj_54);
                      }
                      {
                        hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__simplify__format_call__Cond_49, &check_hlds__simplify__format_call__CondConj_55);
                      }
                      {
                        check_hlds__simplify__format_call__Var_201 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__format_call__CondConj_55, check_hlds__simplify__format_call__ThenConj_54);
                      }
                      {
                        check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__Var_201, check_hlds__simplify__format_call__CondThenId_53, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_194_194, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_200_200, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_196_196, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_199_199, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_205_205, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_198_198, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
                      }
                      {
                        mercury__map__det_insert_4_p_0(check_hlds__simplify__format_call__TypeCtorInfo_245_245, check_hlds__simplify__format_call__TypeCtorInfo_245_245, ((MR_Box) (check_hlds__simplify__format_call__CondThenId_53)), ((MR_Box) (check_hlds__simplify__format_call__HeadVar__3_3)), check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_205_205, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11);
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word check_hlds__simplify__format_call__ShortHand_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));

                      switch (MR_tag((MR_Word) check_hlds__simplify__format_call__ShortHand_112)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.format_call", (MR_String) "predicate \140check_hlds.simplify.format_call.format_call_traverse_conj\'/13", (MR_String) "bi_implication");
                              return;
                            }
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word check_hlds__simplify__format_call__MainGoal_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_112, (MR_Integer) 4)));
                            MR_Word check_hlds__simplify__format_call__OrElseGoals_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_112, (MR_Integer) 5)));
                            MR_Word check_hlds__simplify__format_call__Var_148;
                            MR_Word check_hlds__simplify__format_call__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_112, (MR_Integer) 0)));
                            MR_Word check_hlds__simplify__format_call__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_112, (MR_Integer) 1)));
                            MR_Word check_hlds__simplify__format_call__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_112, (MR_Integer) 2)));
                            MR_Word check_hlds__simplify__format_call__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_112, (MR_Integer) 3)));
                            MR_Word check_hlds__simplify__format_call__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_112, (MR_Integer) 6)));

                            {
                              check_hlds__simplify__format_call__Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_148, 0) = ((MR_Box) (check_hlds__simplify__format_call__MainGoal_117));
                              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_148, 1) = ((MR_Box) (check_hlds__simplify__format_call__OrElseGoals_118));
                            }
                            {
                              check_hlds__simplify__format_call__format_call_traverse_disj_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__Var_148, check_hlds__simplify__format_call__HeadVar__3_3, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_134_134, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_135_135, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_136_136, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_137_137, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_138_138, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word check_hlds__simplify__format_call__TypeCtorInfo_255_255;
                            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_145_145;
                            MR_Word check_hlds__simplify__format_call__SubGoal_235 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand_112, (MR_Integer) 2)));
                            MR_Word check_hlds__simplify__format_call__SubGoalId_236;
                            MR_Word check_hlds__simplify__format_call__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand_112, (MR_Integer) 0)));
                            MR_Word check_hlds__simplify__format_call__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand_112, (MR_Integer) 1)));

                            {
                              check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__SubGoal_235, &check_hlds__simplify__format_call__SubGoalId_236, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_134_134, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_135_135, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_136_136, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_137_137, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_145_145, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_138_138, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
                            }
                            check_hlds__simplify__format_call__TypeCtorInfo_255_255 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
                            {
                              mercury__map__det_insert_4_p_0(check_hlds__simplify__format_call__TypeCtorInfo_255_255, check_hlds__simplify__format_call__TypeCtorInfo_255_255, ((MR_Box) (check_hlds__simplify__format_call__SubGoalId_236)), ((MR_Box) (check_hlds__simplify__format_call__HeadVar__3_3)), check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_145_145, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11);
                            }
                          }
                          break;
                      }
                    }
                    break;
                }
                break;
            }
          }
      }
      break;
    }
}

void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(
  MR_Word check_hlds__simplify__format_call__ModuleInfo_14,
  MR_Word check_hlds__simplify__format_call__Goal_15,
  MR_Word * check_hlds__simplify__format_call__CurId_16,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_23,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_24,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_25,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Counter_26,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_27,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_28,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_29,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_30,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_31,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_32)
{
  {
    MR_Word check_hlds__simplify__format_call__GoalConj_22;
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_33_33;
    MR_Integer check_hlds__simplify__format_call__N_43;

    {
      mercury__counter__allocate_3_p_0(&check_hlds__simplify__format_call__N_43, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_25, &check_hlds__simplify__format_call__STATE_VARIABLE_Counter_33_33);
    }
    *check_hlds__simplify__format_call__CurId_16 = (MR_Word) check_hlds__simplify__format_call__N_43;
    {
      hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__simplify__format_call__Goal_15, &check_hlds__simplify__format_call__GoalConj_22);
    }
    {
      check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__GoalConj_22, *check_hlds__simplify__format_call__CurId_16, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_23, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_24, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_33_33, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_26, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_27, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_28, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_29, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_30, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_31, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_32);
    }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__alloc_id_3_p_0(
  MR_Word * check_hlds__simplify__format_call__ConjId_4,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_7,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Counter_8)
{
  {
    MR_Integer check_hlds__simplify__format_call__N_6;

    {
      mercury__counter__allocate_3_p_0(&check_hlds__simplify__format_call__N_6, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_7, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_8);
    }
    *check_hlds__simplify__format_call__ConjId_4 = (MR_Word) check_hlds__simplify__format_call__N_6;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_unify_9_p_0_1(
  MR_Box check_hlds__simplify__format_call__closure_arg)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Box check_hlds__simplify__format_call__closure = check_hlds__simplify__format_call__closure_arg;

    {
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call__IntroducedFrom__pred__format_call_traverse_unify__946__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 4))));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_unify_9_p_0(
  MR_Word check_hlds__simplify__format_call__Unification_10,
  MR_Word check_hlds__simplify__format_call__GoalInfo_11,
  MR_Word check_hlds__simplify__format_call__CurId_12,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_49,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_50,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_51,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_52,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_54)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    switch (MR_tag((MR_Word) check_hlds__simplify__format_call__Unification_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__simplify__format_call__CellVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_10, (MR_Integer) 0)));
          MR_Word check_hlds__simplify__format_call__ConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_10, (MR_Integer) 1)));
          MR_Word check_hlds__simplify__format_call__ArgVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_10, (MR_Integer) 2)));
          MR_Word check_hlds__simplify__format_call__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_10, (MR_Integer) 3)));
          MR_Word check_hlds__simplify__format_call__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_10, (MR_Integer) 4)));
          MR_Word check_hlds__simplify__format_call__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_10, (MR_Integer) 5)));
          MR_Word check_hlds__simplify__format_call__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_10, (MR_Integer) 6)));

          {
            check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53, check_hlds__simplify__format_call__CellVar_18);
          }
          if (check_hlds__simplify__format_call__succeeded)
            {
              MR_String check_hlds__simplify__format_call__StringConst_25;

              check_hlds__simplify__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__ConsId_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_19, (MR_Integer) 0)))) == (MR_Integer) 15)));
              if (check_hlds__simplify__format_call__succeeded)
                {
                  check_hlds__simplify__format_call__StringConst_25 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_19, (MR_Integer) 1)));
                  {
                    MR_Word check_hlds__simplify__format_call__Var_55;
                    MR_Word check_hlds__simplify__format_call__Var_61;

                    {
                      check_hlds__simplify__format_call__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_55, 0) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_4[0]));
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_55, 1) = ((MR_Box) (check_hlds__simplify__format_call__format_call_traverse_unify_9_p_0_1));
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_55, 3) = ((MR_Box) (check_hlds__simplify__format_call__ArgVars_20));
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_55, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      mercury__require__expect_4_p_0(check_hlds__simplify__format_call__Var_55, (MR_String) "check_hlds.simplify.format_call", (MR_String) "predicate \140check_hlds.simplify.format_call.format_call_traverse_unify\'/9", (MR_String) "string constant with args");
                    }
                    {
                      parse_tree__set_of_var__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__CellVar_18, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_54);
                    }
                    {
                      check_hlds__simplify__format_call__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Var_61, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringConst_25));
                    }
                    {
                      check_hlds__simplify__format_call__add_to_string_map_5_p_0(check_hlds__simplify__format_call__CurId_12, check_hlds__simplify__format_call__CellVar_18, check_hlds__simplify__format_call__Var_61, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_49, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_50);
                    }
                  }
                }
              else
                {
                  MR_Word check_hlds__simplify__format_call__SymName_26;
                  MR_Integer check_hlds__simplify__format_call__Arity_27;
                  MR_Word check_hlds__simplify__format_call__TypeCtor_28;
                  MR_Word check_hlds__simplify__format_call__Var_98;

                  check_hlds__simplify__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__ConsId_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (check_hlds__simplify__format_call__succeeded)
                    {
                      check_hlds__simplify__format_call__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_19, (MR_Integer) 1)));
                      check_hlds__simplify__format_call__Arity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_19, (MR_Integer) 2)));
                      check_hlds__simplify__format_call__TypeCtor_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_19, (MR_Integer) 3)));
                      {
                        check_hlds__simplify__format_call__Var_98 = parse_tree__builtin_lib_types__list_type_ctor_0_f_0();
                      }
                      {
                        check_hlds__simplify__format_call__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__simplify__format_call__TypeCtor_28, check_hlds__simplify__format_call__Var_98);
                      }
                    }
                  if (check_hlds__simplify__format_call__succeeded)
                    {
                      MR_Word check_hlds__simplify__format_call__TypeCtorInfo_96_96;
                      MR_String check_hlds__simplify__format_call__Functor_29;
                      MR_Word check_hlds__simplify__format_call__List_33;
                      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_68_68;
                      MR_Word check_hlds__simplify__format_call__ListPrime_32;

                      {
                        check_hlds__simplify__format_call__Functor_29 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__simplify__format_call__SymName_26);
                      }
                      if ((check_hlds__simplify__format_call__ArgVars_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          check_hlds__simplify__format_call__succeeded = (strcmp(check_hlds__simplify__format_call__Functor_29, (MR_String) "[]") == 0);
                          if (check_hlds__simplify__format_call__succeeded)
                            {
                              check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Arity_27 == (MR_Integer) 0);
                              if (check_hlds__simplify__format_call__succeeded)
                                {
                                  check_hlds__simplify__format_call__ListPrime_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                  check_hlds__simplify__format_call__succeeded = MR_TRUE;
                                }
                            }
                        }
                      else
                        {
                          MR_Word check_hlds__simplify__format_call__ArgVar1_30;
                          MR_Word check_hlds__simplify__format_call__ArgVar2_31;
                          MR_Word check_hlds__simplify__format_call__Var_63;
                          MR_Word check_hlds__simplify__format_call__Var_64;

                          check_hlds__simplify__format_call__succeeded = (strcmp(check_hlds__simplify__format_call__Functor_29, (MR_String) "[|]") == 0);
                          if (check_hlds__simplify__format_call__succeeded)
                            {
                              check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Arity_27 == (MR_Integer) 2);
                              if (check_hlds__simplify__format_call__succeeded)
                                {
                                  check_hlds__simplify__format_call__ArgVar1_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_20, (MR_Integer) 0)));
                                  check_hlds__simplify__format_call__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_20, (MR_Integer) 1)));
                                  check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_63)) == (MR_mktag((MR_Integer) 1)));
                                  if (check_hlds__simplify__format_call__succeeded)
                                    {
                                      check_hlds__simplify__format_call__ArgVar2_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_63, (MR_Integer) 0)));
                                      check_hlds__simplify__format_call__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_63, (MR_Integer) 1)));
                                      check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      if (check_hlds__simplify__format_call__succeeded)
                                        {
                                          {
                                            check_hlds__simplify__format_call__ListPrime_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ListPrime_32, 0) = ((MR_Box) (check_hlds__simplify__format_call__ArgVar1_30));
                                            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ListPrime_32, 1) = ((MR_Box) (check_hlds__simplify__format_call__ArgVar2_31));
                                          }
                                          check_hlds__simplify__format_call__succeeded = MR_TRUE;
                                        }
                                    }
                                }
                            }
                        }
                      if (check_hlds__simplify__format_call__succeeded)
                        check_hlds__simplify__format_call__List_33 = check_hlds__simplify__format_call__ListPrime_32;
                      else
                        {
                          {
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.format_call", (MR_String) "predicate \140check_hlds.simplify.format_call.format_call_traverse_unify\'/9", (MR_String) "unexpected list functor");
                            return;
                          }
                        }
                      check_hlds__simplify__format_call__TypeCtorInfo_96_96 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                      {
                        parse_tree__set_of_var__delete_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_96_96, check_hlds__simplify__format_call__CellVar_18, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53, &check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_68_68);
                      }
                      {
                        parse_tree__set_of_var__insert_list_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_96_96, check_hlds__simplify__format_call__ArgVars_20, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_68_68, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_54);
                      }
                      {
                        check_hlds__simplify__format_call__add_to_list_map_5_p_0(check_hlds__simplify__format_call__CurId_12, check_hlds__simplify__format_call__CellVar_18, check_hlds__simplify__format_call__List_33, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_49, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_50);
                      }
                    }
                  else
                    {
                      MR_Word check_hlds__simplify__format_call__SymName_87;
                      MR_Integer check_hlds__simplify__format_call__Arity_88;
                      MR_Word check_hlds__simplify__format_call__TypeCtor_83;
                      MR_Word check_hlds__simplify__format_call__Var_99;

                      check_hlds__simplify__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__ConsId_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
                      if (check_hlds__simplify__format_call__succeeded)
                        {
                          check_hlds__simplify__format_call__SymName_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_19, (MR_Integer) 1)));
                          check_hlds__simplify__format_call__Arity_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_19, (MR_Integer) 2)));
                          check_hlds__simplify__format_call__TypeCtor_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_19, (MR_Integer) 3)));
                          {
                            check_hlds__simplify__format_call__Var_99 = parse_tree__builtin_lib_types__poly_type_type_ctor_0_f_0();
                          }
                          {
                            check_hlds__simplify__format_call__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__simplify__format_call__TypeCtor_83, check_hlds__simplify__format_call__Var_99);
                          }
                        }
                      if (check_hlds__simplify__format_call__succeeded)
                        {
                          MR_Word check_hlds__simplify__format_call__TypeCtorInfo_97_97;
                          MR_Word check_hlds__simplify__format_call__VarPolyType_37;
                          MR_Word check_hlds__simplify__format_call__ArgVar_34;
                          MR_Word check_hlds__simplify__format_call__Var_71;

                          check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Arity_88 == (MR_Integer) 1);
                          if (check_hlds__simplify__format_call__succeeded)
                            {
                              check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__ArgVars_20)) == (MR_mktag((MR_Integer) 1)));
                              if (check_hlds__simplify__format_call__succeeded)
                                {
                                  check_hlds__simplify__format_call__ArgVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_20, (MR_Integer) 0)));
                                  check_hlds__simplify__format_call__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_20, (MR_Integer) 1)));
                                  check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                }
                            }
                          if (check_hlds__simplify__format_call__succeeded)
                            {
                              MR_Word check_hlds__simplify__format_call__Context_35;
                              MR_String check_hlds__simplify__format_call__Functor_84;
                              MR_Word check_hlds__simplify__format_call__VarPolyTypePrime_36;
                              MR_Integer check_hlds__simplify__format_call__lo_0;
                              MR_Integer check_hlds__simplify__format_call__hi_1;
                              MR_Integer check_hlds__simplify__format_call__mid_2;
                              MR_Integer check_hlds__simplify__format_call__result_3;

                              {
                                check_hlds__simplify__format_call__Context_35 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__format_call__GoalInfo_11);
                              }
                              {
                                check_hlds__simplify__format_call__Functor_84 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__simplify__format_call__SymName_87);
                              }
                              /* binary string jump switch */
                              check_hlds__simplify__format_call__lo_0 = (MR_Integer) 0;
                              check_hlds__simplify__format_call__hi_1 = (MR_Integer) 3;
                              do
                                {
                                  check_hlds__simplify__format_call__mid_2 = (((check_hlds__simplify__format_call__lo_0 + check_hlds__simplify__format_call__hi_1)) / (MR_Integer) 2);
                                  check_hlds__simplify__format_call__result_3 = MR_strcmp(check_hlds__simplify__format_call__Functor_84, ((&check_hlds__simplify__format_call_vector_common_5[0 + check_hlds__simplify__format_call__mid_2]))->check_hlds__simplify__format_call__vector_common_type_5_0__vct_5_f_0);
                                  if ((check_hlds__simplify__format_call__result_3 == (MR_Integer) 0))
                                    {
                                      switch (((&check_hlds__simplify__format_call_vector_common_5[0 + check_hlds__simplify__format_call__mid_2]))->check_hlds__simplify__format_call__vector_common_type_5_0__vct_5_f_1) {
                                        default: /*NOTREACHED*/ MR_assert(0);
                                        case (MR_Integer) 0:
                                          {
                                            /* case "c" */
                                            {
                                              check_hlds__simplify__format_call__VarPolyTypePrime_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__VarPolyTypePrime_36, 0) = ((MR_Box) (check_hlds__simplify__format_call__ArgVar_34));
                                              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__VarPolyTypePrime_36, 1) = ((MR_Box) (check_hlds__simplify__format_call__Context_35));
                                            }
                                            check_hlds__simplify__format_call__succeeded = MR_TRUE;
                                          }
                                          break;
                                        case (MR_Integer) 1:
                                          {
                                            /* case "f" */
                                            {
                                              check_hlds__simplify__format_call__VarPolyTypePrime_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__VarPolyTypePrime_36, 0) = ((MR_Box) (check_hlds__simplify__format_call__ArgVar_34));
                                              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__VarPolyTypePrime_36, 1) = ((MR_Box) (check_hlds__simplify__format_call__Context_35));
                                            }
                                            check_hlds__simplify__format_call__succeeded = MR_TRUE;
                                          }
                                          break;
                                        case (MR_Integer) 2:
                                          {
                                            /* case "i" */
                                            {
                                              check_hlds__simplify__format_call__VarPolyTypePrime_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__VarPolyTypePrime_36, 0) = ((MR_Box) (check_hlds__simplify__format_call__ArgVar_34));
                                              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__VarPolyTypePrime_36, 1) = ((MR_Box) (check_hlds__simplify__format_call__Context_35));
                                            }
                                            check_hlds__simplify__format_call__succeeded = MR_TRUE;
                                          }
                                          break;
                                        case (MR_Integer) 3:
                                          {
                                            /* case "s" */
                                            {
                                              check_hlds__simplify__format_call__VarPolyTypePrime_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__VarPolyTypePrime_36, 0) = ((MR_Box) (check_hlds__simplify__format_call__ArgVar_34));
                                              MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__VarPolyTypePrime_36, 1) = ((MR_Box) (check_hlds__simplify__format_call__Context_35));
                                            }
                                            check_hlds__simplify__format_call__succeeded = MR_TRUE;
                                          }
                                          break;
                                      }
                                      /* jump out of search loop */
                                      goto label_0;
                                    }
                                  else
                                  if ((check_hlds__simplify__format_call__result_3 < (MR_Integer) 0))
                                    check_hlds__simplify__format_call__hi_1 = (check_hlds__simplify__format_call__mid_2 - (MR_Integer) 1);
                                  else
                                    check_hlds__simplify__format_call__lo_0 = (check_hlds__simplify__format_call__mid_2 + (MR_Integer) 1);
                                }
                              while ((check_hlds__simplify__format_call__lo_0 <= check_hlds__simplify__format_call__hi_1));
                              check_hlds__simplify__format_call__succeeded = MR_FALSE;
                            label_0:;
                              if (check_hlds__simplify__format_call__succeeded)
                                check_hlds__simplify__format_call__VarPolyType_37 = check_hlds__simplify__format_call__VarPolyTypePrime_36;
                              else
                                {
                                  {
                                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.format_call", (MR_String) "predicate \140check_hlds.simplify.format_call.format_call_traverse_unify\'/9", (MR_String) "unexpected poly_type functor");
                                    return;
                                  }
                                }
                            }
                          else
                            {
                              {
                                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.format_call", (MR_String) "predicate \140check_hlds.simplify.format_call.format_call_traverse_unify\'/9", (MR_String) "poly_type arity mismatch");
                                return;
                              }
                            }
                          check_hlds__simplify__format_call__TypeCtorInfo_97_97 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                          {
                            parse_tree__set_of_var__delete_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_97_97, check_hlds__simplify__format_call__CellVar_18, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_54);
                          }
                          {
                            check_hlds__simplify__format_call__add_to_element_map_5_p_0(check_hlds__simplify__format_call__CurId_12, check_hlds__simplify__format_call__CellVar_18, check_hlds__simplify__format_call__VarPolyType_37, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_49, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_50);
                          }
                        }
                      else
                        {
                          *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_54 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53;
                          *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_50 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_49;
                        }
                    }
                }
            }
          else
            {
              *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_54 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53;
              *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_50 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_49;
            }
        }
        break;
      case (MR_Integer) 1:
        {
          *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_50 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_49;
          *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_54 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__simplify__format_call__TargetVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Unification_10, (MR_Integer) 0)));
          MR_Word check_hlds__simplify__format_call__SourceVar_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Unification_10, (MR_Integer) 1)));

          {
            check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53, check_hlds__simplify__format_call__TargetVar_16);
          }
          if (check_hlds__simplify__format_call__succeeded)
            {
              MR_Word check_hlds__simplify__format_call__TypeCtorInfo_92_92 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_80_80;

              {
                parse_tree__set_of_var__delete_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_92_92, check_hlds__simplify__format_call__TargetVar_16, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53, &check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_80_80);
              }
              {
                parse_tree__set_of_var__insert_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_92_92, check_hlds__simplify__format_call__SourceVar_17, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_80_80, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_54);
              }
              {
                check_hlds__simplify__format_call__add_to_fc_eqv_map_5_p_0(check_hlds__simplify__format_call__CurId_12, check_hlds__simplify__format_call__TargetVar_16, check_hlds__simplify__format_call__SourceVar_17, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_49, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_50);
              }
            }
          else
            {
              *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_54 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53;
              *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_50 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_49;
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Unification_10, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_50 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_49;
              *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_54 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53;
            }
            break;
          case (MR_Integer) 1:
            {
              *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_50 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_49;
              *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_54 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_53;
            }
            break;
        }
        break;
    }
    *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_52 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_51;
  }
}

void MR_CALL 
check_hlds__simplify__format_call__add_to_fc_eqv_map_5_p_0(
  MR_Word check_hlds__simplify__format_call__ConjId_6,
  MR_Word check_hlds__simplify__format_call__Var_7,
  MR_Word check_hlds__simplify__format_call__EqvVar_8,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_17,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_18)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Word check_hlds__simplify__format_call__ConjMap0_10;
    MR_Box check_hlds__simplify__format_call__conv0_ConjMap0_10;

    {
      check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_17, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), &check_hlds__simplify__format_call__conv0_ConjMap0_10);
    }
    if (check_hlds__simplify__format_call__succeeded)
      {
        check_hlds__simplify__format_call__ConjMap0_10 = ((MR_Word) check_hlds__simplify__format_call__conv0_ConjMap0_10);
        check_hlds__simplify__format_call__succeeded = MR_TRUE;
      }
    if (check_hlds__simplify__format_call__succeeded)
      {
        MR_Word check_hlds__simplify__format_call__TypeInfo_28_28 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
        MR_Word check_hlds__simplify__format_call__StringMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_10, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__ListMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_10, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__ElementMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_10, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__format_call__EqvMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_10, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__format_call__EqvMap_15;
        MR_Word check_hlds__simplify__format_call__ConjMap_16;

        {
          mercury__map__det_insert_4_p_0(check_hlds__simplify__format_call__TypeInfo_28_28, check_hlds__simplify__format_call__TypeInfo_28_28, ((MR_Box) (check_hlds__simplify__format_call__Var_7)), ((MR_Box) (check_hlds__simplify__format_call__EqvVar_8)), check_hlds__simplify__format_call__EqvMap0_14, &check_hlds__simplify__format_call__EqvMap_15);
        }
        {
          check_hlds__simplify__format_call__ConjMap_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_16, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringMap_11));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_16, 1) = ((MR_Box) (check_hlds__simplify__format_call__ListMap_12));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_16, 2) = ((MR_Box) (check_hlds__simplify__format_call__ElementMap_13));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_16, 3) = ((MR_Box) (check_hlds__simplify__format_call__EqvMap_15));
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), ((MR_Box) (check_hlds__simplify__format_call__ConjMap_16)), check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_17, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_18);
        }
      }
    else
      {
        MR_Word check_hlds__simplify__format_call__TypeInfo_31_31 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
        MR_Word check_hlds__simplify__format_call__Var_20;
        MR_Word check_hlds__simplify__format_call__Var_21;
        MR_Word check_hlds__simplify__format_call__Var_22;
        MR_Word check_hlds__simplify__format_call__EqvMap_24;
        MR_Word check_hlds__simplify__format_call__ConjMap_25;

        {
          check_hlds__simplify__format_call__EqvMap_24 = mercury__map__singleton_2_f_0(check_hlds__simplify__format_call__TypeInfo_31_31, check_hlds__simplify__format_call__TypeInfo_31_31, ((MR_Box) (check_hlds__simplify__format_call__Var_7)), ((MR_Box) (check_hlds__simplify__format_call__EqvVar_8)));
        }
        {
          check_hlds__simplify__format_call__Var_20 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_31_31, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0);
        }
        {
          check_hlds__simplify__format_call__Var_21 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_31_31, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0);
        }
        {
          check_hlds__simplify__format_call__Var_22 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_31_31, (MR_Word) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0);
        }
        {
          check_hlds__simplify__format_call__ConjMap_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_25, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_20));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_25, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_21));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_25, 2) = ((MR_Box) (check_hlds__simplify__format_call__Var_22));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_25, 3) = ((MR_Box) (check_hlds__simplify__format_call__EqvMap_24));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), ((MR_Box) (check_hlds__simplify__format_call__ConjMap_25)), check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_17, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_18);
        }
      }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__add_to_element_map_5_p_0(
  MR_Word check_hlds__simplify__format_call__ConjId_6,
  MR_Word check_hlds__simplify__format_call__Var_7,
  MR_Word check_hlds__simplify__format_call__Element_8,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_18,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_19)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Word check_hlds__simplify__format_call__ConjMap0_11;
    MR_Box check_hlds__simplify__format_call__conv0_ConjMap0_11;

    {
      check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_18, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), &check_hlds__simplify__format_call__conv0_ConjMap0_11);
    }
    if (check_hlds__simplify__format_call__succeeded)
      {
        check_hlds__simplify__format_call__ConjMap0_11 = ((MR_Word) check_hlds__simplify__format_call__conv0_ConjMap0_11);
        check_hlds__simplify__format_call__succeeded = MR_TRUE;
      }
    if (check_hlds__simplify__format_call__succeeded)
      {
        MR_Word check_hlds__simplify__format_call__StringMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_11, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__ListMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_11, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__ElementMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_11, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__format_call__EqvMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_11, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__format_call__ElementMap_16;
        MR_Word check_hlds__simplify__format_call__ConjMap_17;

        {
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], (MR_Word) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0, ((MR_Box) (check_hlds__simplify__format_call__Var_7)), ((MR_Box) (check_hlds__simplify__format_call__Element_8)), check_hlds__simplify__format_call__ElementMap0_14, &check_hlds__simplify__format_call__ElementMap_16);
        }
        {
          check_hlds__simplify__format_call__ConjMap_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_17, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringMap_12));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_17, 1) = ((MR_Box) (check_hlds__simplify__format_call__ListMap_13));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_17, 2) = ((MR_Box) (check_hlds__simplify__format_call__ElementMap_16));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_17, 3) = ((MR_Box) (check_hlds__simplify__format_call__EqvMap_15));
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), ((MR_Box) (check_hlds__simplify__format_call__ConjMap_17)), check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_18, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_19);
        }
      }
    else
      {
        MR_Word check_hlds__simplify__format_call__TypeInfo_43_43 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
        MR_Word check_hlds__simplify__format_call__Var_29;
        MR_Word check_hlds__simplify__format_call__Var_30;
        MR_Word check_hlds__simplify__format_call__Var_31;
        MR_Word check_hlds__simplify__format_call__ElementMap_33;
        MR_Word check_hlds__simplify__format_call__ConjMap_34;

        {
          check_hlds__simplify__format_call__ElementMap_33 = mercury__map__singleton_2_f_0(check_hlds__simplify__format_call__TypeInfo_43_43, (MR_Word) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0, ((MR_Box) (check_hlds__simplify__format_call__Var_7)), ((MR_Box) (check_hlds__simplify__format_call__Element_8)));
        }
        {
          check_hlds__simplify__format_call__Var_29 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_43_43, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0);
        }
        {
          check_hlds__simplify__format_call__Var_30 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_43_43, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0);
        }
        {
          check_hlds__simplify__format_call__Var_31 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_43_43, check_hlds__simplify__format_call__TypeInfo_43_43);
        }
        {
          check_hlds__simplify__format_call__ConjMap_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_34, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_29));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_34, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_30));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_34, 2) = ((MR_Box) (check_hlds__simplify__format_call__ElementMap_33));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_34, 3) = ((MR_Box) (check_hlds__simplify__format_call__Var_31));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), ((MR_Box) (check_hlds__simplify__format_call__ConjMap_34)), check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_18, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_19);
        }
      }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__add_to_list_map_5_p_0(
  MR_Word check_hlds__simplify__format_call__ConjId_6,
  MR_Word check_hlds__simplify__format_call__Var_7,
  MR_Word check_hlds__simplify__format_call__ListState_8,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_18,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_19)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Word check_hlds__simplify__format_call__ConjMap0_11;
    MR_Box check_hlds__simplify__format_call__conv0_ConjMap0_11;

    {
      check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_18, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), &check_hlds__simplify__format_call__conv0_ConjMap0_11);
    }
    if (check_hlds__simplify__format_call__succeeded)
      {
        check_hlds__simplify__format_call__ConjMap0_11 = ((MR_Word) check_hlds__simplify__format_call__conv0_ConjMap0_11);
        check_hlds__simplify__format_call__succeeded = MR_TRUE;
      }
    if (check_hlds__simplify__format_call__succeeded)
      {
        MR_Word check_hlds__simplify__format_call__StringMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_11, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__ListMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_11, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__ElementMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_11, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__format_call__EqvMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_11, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__format_call__ListMap_16;
        MR_Word check_hlds__simplify__format_call__ConjMap_17;

        {
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0, ((MR_Box) (check_hlds__simplify__format_call__Var_7)), ((MR_Box) (check_hlds__simplify__format_call__ListState_8)), check_hlds__simplify__format_call__ListMap0_13, &check_hlds__simplify__format_call__ListMap_16);
        }
        {
          check_hlds__simplify__format_call__ConjMap_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_17, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringMap_12));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_17, 1) = ((MR_Box) (check_hlds__simplify__format_call__ListMap_16));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_17, 2) = ((MR_Box) (check_hlds__simplify__format_call__ElementMap_14));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_17, 3) = ((MR_Box) (check_hlds__simplify__format_call__EqvMap_15));
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), ((MR_Box) (check_hlds__simplify__format_call__ConjMap_17)), check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_18, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_19);
        }
      }
    else
      {
        MR_Word check_hlds__simplify__format_call__TypeInfo_43_43 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
        MR_Word check_hlds__simplify__format_call__Var_29;
        MR_Word check_hlds__simplify__format_call__Var_30;
        MR_Word check_hlds__simplify__format_call__Var_31;
        MR_Word check_hlds__simplify__format_call__ListMap_33;
        MR_Word check_hlds__simplify__format_call__ConjMap_34;

        {
          check_hlds__simplify__format_call__ListMap_33 = mercury__map__singleton_2_f_0(check_hlds__simplify__format_call__TypeInfo_43_43, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0, ((MR_Box) (check_hlds__simplify__format_call__Var_7)), ((MR_Box) (check_hlds__simplify__format_call__ListState_8)));
        }
        {
          check_hlds__simplify__format_call__Var_29 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_43_43, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0);
        }
        {
          check_hlds__simplify__format_call__Var_30 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_43_43, (MR_Word) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0);
        }
        {
          check_hlds__simplify__format_call__Var_31 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_43_43, check_hlds__simplify__format_call__TypeInfo_43_43);
        }
        {
          check_hlds__simplify__format_call__ConjMap_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_34, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var_29));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_34, 1) = ((MR_Box) (check_hlds__simplify__format_call__ListMap_33));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_34, 2) = ((MR_Box) (check_hlds__simplify__format_call__Var_30));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_34, 3) = ((MR_Box) (check_hlds__simplify__format_call__Var_31));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), ((MR_Box) (check_hlds__simplify__format_call__ConjMap_34)), check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_18, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_19);
        }
      }
  }
}

void MR_CALL 
check_hlds__simplify__format_call__add_to_string_map_5_p_0(
  MR_Word check_hlds__simplify__format_call__ConjId_6,
  MR_Word check_hlds__simplify__format_call__Var_7,
  MR_Word check_hlds__simplify__format_call__StringState_8,
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_18,
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_19)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;
    MR_Word check_hlds__simplify__format_call__ConjMap0_11;
    MR_Box check_hlds__simplify__format_call__conv0_ConjMap0_11;

    {
      check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_18, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), &check_hlds__simplify__format_call__conv0_ConjMap0_11);
    }
    if (check_hlds__simplify__format_call__succeeded)
      {
        check_hlds__simplify__format_call__ConjMap0_11 = ((MR_Word) check_hlds__simplify__format_call__conv0_ConjMap0_11);
        check_hlds__simplify__format_call__succeeded = MR_TRUE;
      }
    if (check_hlds__simplify__format_call__succeeded)
      {
        MR_Word check_hlds__simplify__format_call__StringMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_11, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__format_call__ListMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_11, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__format_call__ElementMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_11, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__format_call__EqvMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_11, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__format_call__StringMap_16;
        MR_Word check_hlds__simplify__format_call__ConjMap_17;

        {
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0, ((MR_Box) (check_hlds__simplify__format_call__Var_7)), ((MR_Box) (check_hlds__simplify__format_call__StringState_8)), check_hlds__simplify__format_call__StringMap0_12, &check_hlds__simplify__format_call__StringMap_16);
        }
        {
          check_hlds__simplify__format_call__ConjMap_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_17, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringMap_16));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_17, 1) = ((MR_Box) (check_hlds__simplify__format_call__ListMap_13));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_17, 2) = ((MR_Box) (check_hlds__simplify__format_call__ElementMap_14));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_17, 3) = ((MR_Box) (check_hlds__simplify__format_call__EqvMap_15));
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), ((MR_Box) (check_hlds__simplify__format_call__ConjMap_17)), check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_18, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_19);
        }
      }
    else
      {
        MR_Word check_hlds__simplify__format_call__TypeInfo_43_43 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
        MR_Word check_hlds__simplify__format_call__Var_29;
        MR_Word check_hlds__simplify__format_call__Var_30;
        MR_Word check_hlds__simplify__format_call__Var_31;
        MR_Word check_hlds__simplify__format_call__StringMap_33;
        MR_Word check_hlds__simplify__format_call__ConjMap_34;

        {
          check_hlds__simplify__format_call__StringMap_33 = mercury__map__singleton_2_f_0(check_hlds__simplify__format_call__TypeInfo_43_43, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0, ((MR_Box) (check_hlds__simplify__format_call__Var_7)), ((MR_Box) (check_hlds__simplify__format_call__StringState_8)));
        }
        {
          check_hlds__simplify__format_call__Var_29 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_43_43, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0);
        }
        {
          check_hlds__simplify__format_call__Var_30 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_43_43, (MR_Word) &check_hlds__simplify__format_call__parse_string_format__check_hlds__simplify__format_call__parse_string_format__type_ctor_info_abstract_poly_type_0);
        }
        {
          check_hlds__simplify__format_call__Var_31 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_43_43, check_hlds__simplify__format_call__TypeInfo_43_43);
        }
        {
          check_hlds__simplify__format_call__ConjMap_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_34, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringMap_33));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_34, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_29));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_34, 2) = ((MR_Box) (check_hlds__simplify__format_call__Var_30));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_34, 3) = ((MR_Box) (check_hlds__simplify__format_call__Var_31));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, ((MR_Box) (check_hlds__simplify__format_call__ConjId_6)), ((MR_Box) (check_hlds__simplify__format_call__ConjMap_34)), check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_18, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_19);
        }
      }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call__is_format_call_kind_and_vars_7_p_0(
  MR_Word check_hlds__simplify__format_call__ModuleName_8,
  MR_String check_hlds__simplify__format_call__Name_9,
  MR_Word check_hlds__simplify__format_call__Args_10,
  MR_Word check_hlds__simplify__format_call__GoalInfo_11,
  MR_Word * check_hlds__simplify__format_call__Kind_12,
  MR_Word * check_hlds__simplify__format_call__FormatStringVar_13,
  MR_Word * check_hlds__simplify__format_call__FormattedValuesVar_14)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded = (strcmp(check_hlds__simplify__format_call__Name_9, (MR_String) "format") == 0);
    MR_Word check_hlds__simplify__format_call__Var_55;

    if (check_hlds__simplify__format_call__succeeded)
      {
        {
          check_hlds__simplify__format_call__Var_55 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
        }
        {
          check_hlds__simplify__format_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__format_call__ModuleName_8, check_hlds__simplify__format_call__Var_55);
        }
        if (check_hlds__simplify__format_call__succeeded)
          {
            MR_Word check_hlds__simplify__format_call__ResultVar_15;
            MR_Word check_hlds__simplify__format_call__Context_16;
            MR_Word check_hlds__simplify__format_call__Var_23;
            MR_Word check_hlds__simplify__format_call__Var_24;
            MR_Word check_hlds__simplify__format_call__Var_25;

            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Args_10)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__simplify__format_call__succeeded)
              {
                *check_hlds__simplify__format_call__FormatStringVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_10, (MR_Integer) 0)));
                check_hlds__simplify__format_call__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_10, (MR_Integer) 1)));
                check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_23)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__simplify__format_call__succeeded)
                  {
                    *check_hlds__simplify__format_call__FormattedValuesVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_23, (MR_Integer) 0)));
                    check_hlds__simplify__format_call__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_23, (MR_Integer) 1)));
                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_24)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__simplify__format_call__succeeded)
                      {
                        check_hlds__simplify__format_call__ResultVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_24, (MR_Integer) 0)));
                        check_hlds__simplify__format_call__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_24, (MR_Integer) 1)));
                        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (check_hlds__simplify__format_call__succeeded)
                          {
                            {
                              check_hlds__simplify__format_call__Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__format_call__GoalInfo_11);
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              *check_hlds__simplify__format_call__Kind_12 = base;
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Context_16));
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__ResultVar_15));
                            }
                            check_hlds__simplify__format_call__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
          }
        else
          {
            MR_Word check_hlds__simplify__format_call__Var_56;

            {
              check_hlds__simplify__format_call__Var_56 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
            }
            {
              check_hlds__simplify__format_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__format_call__ModuleName_8, check_hlds__simplify__format_call__Var_56);
            }
            if (check_hlds__simplify__format_call__succeeded)
              {
                MR_Word check_hlds__simplify__format_call__Var_59;
                MR_Word check_hlds__simplify__format_call__Var_60;
                MR_Word check_hlds__simplify__format_call__Var_61;
                MR_Word check_hlds__simplify__format_call__Var_62;
                MR_Word check_hlds__simplify__format_call__Var_63;
                MR_Word check_hlds__simplify__format_call__Var_64;
                MR_Word check_hlds__simplify__format_call__Var_65;
                MR_Word check_hlds__simplify__format_call__Var_66;

                check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Args_10)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__simplify__format_call__succeeded)
                  {
                    check_hlds__simplify__format_call__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_10, (MR_Integer) 0)));
                    check_hlds__simplify__format_call__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_10, (MR_Integer) 1)));
                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_59)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__simplify__format_call__succeeded)
                      {
                        check_hlds__simplify__format_call__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_59, (MR_Integer) 0)));
                        check_hlds__simplify__format_call__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_59, (MR_Integer) 1)));
                        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_61)) == (MR_mktag((MR_Integer) 1)));
                        if (check_hlds__simplify__format_call__succeeded)
                          {
                            check_hlds__simplify__format_call__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_61, (MR_Integer) 0)));
                            check_hlds__simplify__format_call__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_61, (MR_Integer) 1)));
                            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_63)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__simplify__format_call__succeeded)
                              {
                                check_hlds__simplify__format_call__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_63, (MR_Integer) 0)));
                                check_hlds__simplify__format_call__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_63, (MR_Integer) 1)));
                                if ((check_hlds__simplify__format_call__Var_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                  {
                                    MR_Word check_hlds__simplify__format_call__Context_45;

                                    *check_hlds__simplify__format_call__FormatStringVar_13 = check_hlds__simplify__format_call__Var_60;
                                    *check_hlds__simplify__format_call__FormattedValuesVar_14 = check_hlds__simplify__format_call__Var_62;
                                    {
                                      check_hlds__simplify__format_call__Context_45 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__format_call__GoalInfo_11);
                                    }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                      *check_hlds__simplify__format_call__Kind_12 = base;
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Context_45));
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_64));
                                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__simplify__format_call__Var_66));
                                    }
                                    check_hlds__simplify__format_call__succeeded = MR_TRUE;
                                  }
                                else
                                  {
                                    MR_Word check_hlds__simplify__format_call__Var_30;
                                    MR_Word check_hlds__simplify__format_call__Context_46;
                                    MR_Word check_hlds__simplify__format_call__IOOut_48;

                                    *check_hlds__simplify__format_call__FormatStringVar_13 = check_hlds__simplify__format_call__Var_62;
                                    *check_hlds__simplify__format_call__FormattedValuesVar_14 = check_hlds__simplify__format_call__Var_64;
                                    check_hlds__simplify__format_call__IOOut_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_65, (MR_Integer) 0)));
                                    check_hlds__simplify__format_call__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_65, (MR_Integer) 1)));
                                    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (check_hlds__simplify__format_call__succeeded)
                                      {
                                        {
                                          check_hlds__simplify__format_call__Context_46 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__format_call__GoalInfo_11);
                                        }
                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          *check_hlds__simplify__format_call__Kind_12 = base;
                                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Context_46));
                                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var_60));
                                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__simplify__format_call__Var_66));
                                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__simplify__format_call__IOOut_48));
                                        }
                                        check_hlds__simplify__format_call__succeeded = MR_TRUE;
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
            else
              {
                MR_Word check_hlds__simplify__format_call__TC_InfoVarForStream_20;
                MR_Word check_hlds__simplify__format_call__StateInVar_21;
                MR_Word check_hlds__simplify__format_call__StateOutVar_22;
                MR_Word check_hlds__simplify__format_call__Var_39;
                MR_Word check_hlds__simplify__format_call__Var_40;
                MR_Word check_hlds__simplify__format_call__Var_41;
                MR_Word check_hlds__simplify__format_call__Var_42;
                MR_Word check_hlds__simplify__format_call__Var_43;
                MR_Word check_hlds__simplify__format_call__Var_44;
                MR_Word check_hlds__simplify__format_call__Context_50;
                MR_Word check_hlds__simplify__format_call__StreamVar_51;
                MR_Word check_hlds__simplify__format_call__Var_58;

                {
                  check_hlds__simplify__format_call__Var_58 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[11]));
                }
                {
                  check_hlds__simplify__format_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__format_call__ModuleName_8, check_hlds__simplify__format_call__Var_58);
                }
                if (check_hlds__simplify__format_call__succeeded)
                  {
                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Args_10)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__simplify__format_call__succeeded)
                      {
                        check_hlds__simplify__format_call__TC_InfoVarForStream_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_10, (MR_Integer) 0)));
                        check_hlds__simplify__format_call__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_10, (MR_Integer) 1)));
                        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_39)) == (MR_mktag((MR_Integer) 1)));
                        if (check_hlds__simplify__format_call__succeeded)
                          {
                            check_hlds__simplify__format_call__StreamVar_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_39, (MR_Integer) 0)));
                            check_hlds__simplify__format_call__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_39, (MR_Integer) 1)));
                            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_40)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__simplify__format_call__succeeded)
                              {
                                *check_hlds__simplify__format_call__FormatStringVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_40, (MR_Integer) 0)));
                                check_hlds__simplify__format_call__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_40, (MR_Integer) 1)));
                                check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_41)) == (MR_mktag((MR_Integer) 1)));
                                if (check_hlds__simplify__format_call__succeeded)
                                  {
                                    *check_hlds__simplify__format_call__FormattedValuesVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_41, (MR_Integer) 0)));
                                    check_hlds__simplify__format_call__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_41, (MR_Integer) 1)));
                                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_42)) == (MR_mktag((MR_Integer) 1)));
                                    if (check_hlds__simplify__format_call__succeeded)
                                      {
                                        check_hlds__simplify__format_call__StateInVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_42, (MR_Integer) 0)));
                                        check_hlds__simplify__format_call__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_42, (MR_Integer) 1)));
                                        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_43)) == (MR_mktag((MR_Integer) 1)));
                                        if (check_hlds__simplify__format_call__succeeded)
                                          {
                                            check_hlds__simplify__format_call__StateOutVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_43, (MR_Integer) 0)));
                                            check_hlds__simplify__format_call__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_43, (MR_Integer) 1)));
                                            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (check_hlds__simplify__format_call__succeeded)
                                              {
                                                {
                                                  check_hlds__simplify__format_call__Context_50 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__format_call__GoalInfo_11);
                                                }
                                                {
                                                  MR_Word base;
                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                                                  *check_hlds__simplify__format_call__Kind_12 = base;
                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Context_50));
                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__TC_InfoVarForStream_20));
                                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__format_call__StreamVar_51));
                                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__simplify__format_call__StateInVar_21));
                                                  MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__simplify__format_call__StateOutVar_22));
                                                }
                                                check_hlds__simplify__format_call__succeeded = MR_TRUE;
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
    return check_hlds__simplify__format_call__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__format_call__is_format_call_3_p_0(
  MR_Word check_hlds__simplify__format_call__ModuleName_4,
  MR_String check_hlds__simplify__format_call__Name_5,
  MR_Word check_hlds__simplify__format_call__Args_6)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded = (strcmp(check_hlds__simplify__format_call__Name_5, (MR_String) "format") == 0);
    MR_Word check_hlds__simplify__format_call__Var_63;

    if (check_hlds__simplify__format_call__succeeded)
      {
        {
          check_hlds__simplify__format_call__Var_63 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
        }
        {
          check_hlds__simplify__format_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__format_call__ModuleName_4, check_hlds__simplify__format_call__Var_63);
        }
        if (check_hlds__simplify__format_call__succeeded)
          {
            MR_Word check_hlds__simplify__format_call__Var_16;
            MR_Word check_hlds__simplify__format_call__Var_17;
            MR_Word check_hlds__simplify__format_call__Var_18;
            MR_Word check_hlds__simplify__format_call___FormatStringVar_7;
            MR_Word check_hlds__simplify__format_call___FormattedValuesVar_8;
            MR_Word check_hlds__simplify__format_call___ResultVar_9;

            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Args_6)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__simplify__format_call__succeeded)
              {
                check_hlds__simplify__format_call___FormatStringVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_6, (MR_Integer) 0)));
                check_hlds__simplify__format_call__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_6, (MR_Integer) 1)));
                check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_16)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__simplify__format_call__succeeded)
                  {
                    check_hlds__simplify__format_call___FormattedValuesVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_16, (MR_Integer) 0)));
                    check_hlds__simplify__format_call__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_16, (MR_Integer) 1)));
                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_17)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__simplify__format_call__succeeded)
                      {
                        check_hlds__simplify__format_call___ResultVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_17, (MR_Integer) 0)));
                        check_hlds__simplify__format_call__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_17, (MR_Integer) 1)));
                        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
        else
          {
            MR_Word check_hlds__simplify__format_call__Var_64;

            {
              check_hlds__simplify__format_call__Var_64 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
            }
            {
              check_hlds__simplify__format_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__format_call__ModuleName_4, check_hlds__simplify__format_call__Var_64);
            }
            if (check_hlds__simplify__format_call__succeeded)
              {
                MR_Word check_hlds__simplify__format_call__Var_67;
                MR_Word check_hlds__simplify__format_call__Var_69;
                MR_Word check_hlds__simplify__format_call__Var_71;
                MR_Word check_hlds__simplify__format_call__Var_73;
                MR_Word check_hlds__simplify__format_call__Var_68;
                MR_Word check_hlds__simplify__format_call__Var_70;
                MR_Word check_hlds__simplify__format_call__Var_72;
                MR_Word check_hlds__simplify__format_call__Var_74;

                check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Args_6)) == (MR_mktag((MR_Integer) 1)));
                if (check_hlds__simplify__format_call__succeeded)
                  {
                    check_hlds__simplify__format_call__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_6, (MR_Integer) 0)));
                    check_hlds__simplify__format_call__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_6, (MR_Integer) 1)));
                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_67)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__simplify__format_call__succeeded)
                      {
                        check_hlds__simplify__format_call__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_67, (MR_Integer) 0)));
                        check_hlds__simplify__format_call__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_67, (MR_Integer) 1)));
                        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_69)) == (MR_mktag((MR_Integer) 1)));
                        if (check_hlds__simplify__format_call__succeeded)
                          {
                            check_hlds__simplify__format_call__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_69, (MR_Integer) 0)));
                            check_hlds__simplify__format_call__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_69, (MR_Integer) 1)));
                            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_71)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__simplify__format_call__succeeded)
                              {
                                check_hlds__simplify__format_call__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_71, (MR_Integer) 0)));
                                check_hlds__simplify__format_call__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_71, (MR_Integer) 1)));
                                if ((check_hlds__simplify__format_call__Var_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                  check_hlds__simplify__format_call__succeeded = MR_TRUE;
                                else
                                  {
                                    MR_Word check_hlds__simplify__format_call__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_73, (MR_Integer) 1)));
                                    MR_Word check_hlds__simplify__format_call___IOOut_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_73, (MR_Integer) 0)));

                                    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  }
                              }
                          }
                      }
                  }
              }
            else
              {
                MR_Word check_hlds__simplify__format_call__Var_32;
                MR_Word check_hlds__simplify__format_call__Var_33;
                MR_Word check_hlds__simplify__format_call__Var_34;
                MR_Word check_hlds__simplify__format_call__Var_35;
                MR_Word check_hlds__simplify__format_call__Var_36;
                MR_Word check_hlds__simplify__format_call__Var_37;
                MR_Word check_hlds__simplify__format_call__Var_66;
                MR_Word check_hlds__simplify__format_call___TC_InfoVarForStream_13;
                MR_Word check_hlds__simplify__format_call___StreamVar_52;
                MR_Word check_hlds__simplify__format_call___FormatStringVar_53;
                MR_Word check_hlds__simplify__format_call___FormattedValuesVar_54;
                MR_Word check_hlds__simplify__format_call___StateInVar_14;
                MR_Word check_hlds__simplify__format_call___StateOutVar_15;

                {
                  check_hlds__simplify__format_call__Var_66 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[11]));
                }
                {
                  check_hlds__simplify__format_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__format_call__ModuleName_4, check_hlds__simplify__format_call__Var_66);
                }
                if (check_hlds__simplify__format_call__succeeded)
                  {
                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Args_6)) == (MR_mktag((MR_Integer) 1)));
                    if (check_hlds__simplify__format_call__succeeded)
                      {
                        check_hlds__simplify__format_call___TC_InfoVarForStream_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_6, (MR_Integer) 0)));
                        check_hlds__simplify__format_call__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_6, (MR_Integer) 1)));
                        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_32)) == (MR_mktag((MR_Integer) 1)));
                        if (check_hlds__simplify__format_call__succeeded)
                          {
                            check_hlds__simplify__format_call___StreamVar_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_32, (MR_Integer) 0)));
                            check_hlds__simplify__format_call__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_32, (MR_Integer) 1)));
                            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_33)) == (MR_mktag((MR_Integer) 1)));
                            if (check_hlds__simplify__format_call__succeeded)
                              {
                                check_hlds__simplify__format_call___FormatStringVar_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_33, (MR_Integer) 0)));
                                check_hlds__simplify__format_call__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_33, (MR_Integer) 1)));
                                check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_34)) == (MR_mktag((MR_Integer) 1)));
                                if (check_hlds__simplify__format_call__succeeded)
                                  {
                                    check_hlds__simplify__format_call___FormattedValuesVar_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_34, (MR_Integer) 0)));
                                    check_hlds__simplify__format_call__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_34, (MR_Integer) 1)));
                                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_35)) == (MR_mktag((MR_Integer) 1)));
                                    if (check_hlds__simplify__format_call__succeeded)
                                      {
                                        check_hlds__simplify__format_call___StateInVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_35, (MR_Integer) 0)));
                                        check_hlds__simplify__format_call__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_35, (MR_Integer) 1)));
                                        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Var_36)) == (MR_mktag((MR_Integer) 1)));
                                        if (check_hlds__simplify__format_call__succeeded)
                                          {
                                            check_hlds__simplify__format_call___StateOutVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_36, (MR_Integer) 0)));
                                            check_hlds__simplify__format_call__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Var_36, (MR_Integer) 1)));
                                            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Var_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
    return check_hlds__simplify__format_call__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_id_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    {
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____conj_id_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_id_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__format_call____Compare____conj_id_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_map_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    {
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____conj_map_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_map_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__format_call____Compare____conj_map_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_maps_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    {
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____conj_maps_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_maps_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__format_call____Compare____conj_maps_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_pred_map_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    {
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____conj_pred_map_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_pred_map_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__format_call____Compare____conj_pred_map_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    {
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    {
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    {
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    {
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_string_result_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    {
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____follow_string_result_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_string_result_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__format_call____Compare____follow_string_result_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_kind_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    {
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____format_call_kind_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_kind_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__format_call____Compare____format_call_kind_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_site_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    {
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____format_call_site_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_site_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__format_call____Compare____format_call_site_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_element_map_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    {
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____list_element_map_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_element_map_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__format_call____Compare____list_element_map_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    {
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    {
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____maybe_generate_implicit_stream_warnings_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    {
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____maybe_generate_implicit_stream_warnings_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____maybe_generate_implicit_stream_warnings_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__format_call____Compare____maybe_generate_implicit_stream_warnings_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____maybe_opt_format_calls_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    {
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____maybe_opt_format_calls_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____maybe_opt_format_calls_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__format_call____Compare____maybe_opt_format_calls_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_map_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    {
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____string_map_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_map_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__format_call____Compare____string_map_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_state_0_0_10001(
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__format_call__succeeded;

    {
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____string_state_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
    return check_hlds__simplify__format_call__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_state_0_0_10001(
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__format_call____Compare____string_state_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
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

/* :- end_module check_hlds.simplify.format_call. */
