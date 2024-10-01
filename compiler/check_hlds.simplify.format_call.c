/*
** Automatically generated from `format_call.m'
** by the Mercury compiler,
** version rotd-2024-10-01
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
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
#include "parse_tree.maybe_error.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.common.mih"
#include "check_hlds.simplify.format_call_errors.mih"
#include "check_hlds.simplify.parse_string_format.mih"
#include "check_hlds.simplify.simplify_goal_call.mih"
#include "check_hlds.simplify.simplify_info.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_map_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__maybe__pti_maybe_1__plain_check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__list__ti_list_1check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_spec_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct4 check_hlds__simplify__format_call__parse_tree__maybe_error__pti_maybe3_4__plain_list__ti_list_1check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_spec_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_id_0[1];

static const MR_NotagFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__notag_functor_desc_conj_id_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_string_state_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0;

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

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_fc_opt_goal_info_0_0[3];

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_fc_opt_goal_info_0_0[3];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_fc_opt_goal_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_fc_opt_goal_info_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_fc_opt_goal_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_fc_opt_goal_info_0[1];

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_fc_opt_goal_info_0[1];

static const MR_VA_TypeInfo_Struct3 check_hlds__simplify__format_call____vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__maybe__ti_maybe_1__vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_fmt_str_val_vars_0_0[3];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_fmt_str_val_vars_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_fmt_str_val_vars_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_fmt_str_val_vars_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_fmt_str_val_vars_0[1];

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_fmt_str_val_vars_0[1];

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

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_0[3];

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_0[3];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_0;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_1[4];

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_1[4];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_1;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_2[4];

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_2[4];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_2;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_3[5];

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_3[5];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_3;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_4[6];

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_4[6];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_4;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__one_or_more__ti_one_or_more_1check_hlds__simplify__format_call__type_ctor_info_fmt_str_val_vars_0;

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_5[2];

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_5[2];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_5;

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_3[3];

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_kind_0[4];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_kind_0[6];

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_kind_0[6];

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_site_0_0[7];

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_site_0_0[7];

static const MR_DuArgLocn check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_locns_format_call_site_0_0[7];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_site_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_site_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_site_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_site_0[1];

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_site_0[1];

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_traverse_params_0_0[2];

static const MR_DuArgLocn check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_locns_format_call_traverse_params_0_0[2];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_traverse_params_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_traverse_params_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_traverse_params_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_traverse_params_0[1];

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_traverse_params_0[1];

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

static const MR_EnumFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_ordinal_ordered_maybe_generate_implicit_stream_warnings_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_name_ordered_maybe_generate_implicit_stream_warnings_0[2];

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_maybe_generate_implicit_stream_warnings_0[2];

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_state_format_0_0[1];

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_state_format_0_0;

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_state_format_0_1;

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_state_format_0_2;

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_state_format_0_0[2];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_state_format_0_1[1];

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_state_format_0[2];

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_state_format_0[3];

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_state_format_0[3];

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
check_hlds__simplify__format_call__IntroducedFrom__pred__format_call_traverse_unify__1250__1_2_p_0(
  MR_Word ArgVars_20,
  MR_Word HeadVar__2_61);

static MR_Word MR_CALL 
check_hlds__simplify__format_call__IntroducedFrom__func__check_format_call_site__718__1_1_f_0(
  MR_Word HeadVar__1_92);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_state_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_state_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____state_format_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____state_format_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_element_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_element_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_traverse_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_traverse_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_site_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_site_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_string_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_string_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fmt_str_val_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fmt_str_val_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_pred_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_pred_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_maps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_maps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__simplify__format_call__project_case_goal_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
check_hlds__simplify__format_call__follow_poly_type_5_p_0(
  MR_Word ConjMaps_6,
  MR_Word PredMap_7,
  MR_Word CurId_8,
  MR_Word PolyTypeVar_9,
  MR_Word * MaybeAbstractPolyType_10);

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
check_hlds__simplify__format_call__check_format_call_site_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word PredInfo_16,
  MR_Word ProcInfo_17,
  MR_Word ImplicitStreamWarnings_18,
  MR_Word OptFormatCalls_19,
  MR_Word ConjMaps_20,
  MR_Word PredMap_21,
  MR_Word FormatCallSite_22,
  MR_Word STATE_VARIABLE_GoalIdMap_0_68,
  MR_Word * STATE_VARIABLE_GoalIdMap_69,
  MR_Word STATE_VARIABLE_Specs_0_70,
  MR_Word * STATE_VARIABLE_Specs_71,
  MR_Word STATE_VARIABLE_VarTable_0_72,
  MR_Word * STATE_VARIABLE_VarTable_73);

static void MR_CALL 
check_hlds__simplify__format_call__create_replacement_goal_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word GoalId_12,
  MR_Word CallKind_13,
  MR_Word Specs_14,
  MR_Word ToDeleteVars_15,
  MR_Word ToDeleteGoals_16,
  MR_Word STATE_VARIABLE_GoalIdMap_0_29,
  MR_Word * STATE_VARIABLE_GoalIdMap_30,
  MR_Word STATE_VARIABLE_VarTable_0_31,
  MR_Word * STATE_VARIABLE_VarTable_32);

static void MR_CALL 
check_hlds__simplify__format_call__create_stream_string_writer_format_replacement_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Specs_12,
  MR_Word Context_13,
  MR_Word TC_InfoVarForStream_14,
  MR_Word StreamVar_15,
  MR_Word StateInVar_16,
  MR_Word StateOutVar_17,
  MR_Word * ReplacementGoal_18,
  MR_Word STATE_VARIABLE_VarTable_0_28,
  MR_Word * STATE_VARIABLE_VarTable_29);

static void MR_CALL 
check_hlds__simplify__format_call__create_state_update_replacement_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Specs_11,
  MR_Word Context_12,
  MR_Word StateFormat_13,
  MR_Word StateInVar_14,
  MR_Word StateOutVar_15,
  MR_Word * ReplacementGoal_16,
  MR_Word STATE_VARIABLE_VarTable_0_23,
  MR_Word * STATE_VARIABLE_VarTable_24);

static void MR_CALL 
check_hlds__simplify__format_call__replace_state_format_nonempty_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word HeadSpec_13,
  MR_Word TailSpecs_14,
  MR_Word StateFormat_15,
  MR_Word StateInVar_16,
  MR_Word StateOutVar_17,
  MR_Word * Goals_18,
  MR_Word STATE_VARIABLE_ValueVars_0_28,
  MR_Word * STATE_VARIABLE_ValueVars_29,
  MR_Word STATE_VARIABLE_VarTable_0_30,
  MR_Word * STATE_VARIABLE_VarTable_31);

static void MR_CALL 
check_hlds__simplify__format_call__replace_one_state_format_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Spec_12,
  MR_Word StateFormat_13,
  MR_Word StateInVar_14,
  MR_Word StateOutVar_15,
  MR_Word * Goals_16,
  MR_Word STATE_VARIABLE_ValueVars_0_27,
  MR_Word * STATE_VARIABLE_ValueVars_28,
  MR_Word STATE_VARIABLE_VarTable_0_29,
  MR_Word * STATE_VARIABLE_VarTable_30);

static void MR_CALL 
check_hlds__simplify__format_call__replace_string_format_nonempty_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word HeadSpec_13,
  MR_Word TailSpecs_14,
  MR_Word Context_15,
  MR_Word MaybeResultVar_16,
  MR_Word * ResultVar_17,
  MR_Word * Goals_18,
  MR_Word STATE_VARIABLE_ValueVars_0_29,
  MR_Word * STATE_VARIABLE_ValueVars_30,
  MR_Word STATE_VARIABLE_VarTable_0_31,
  MR_Word * STATE_VARIABLE_VarTable_32);

static void MR_CALL 
check_hlds__simplify__format_call__represent_spec_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Spec_12,
  MR_Word MaybeResultVar_13,
  MR_Word * ResultVar_14,
  MR_Word * Goals_15,
  MR_Word * Context_16,
  MR_Word STATE_VARIABLE_ValueVars_0_46,
  MR_Word * STATE_VARIABLE_ValueVars_47,
  MR_Word STATE_VARIABLE_VarTable_0_48,
  MR_Word * STATE_VARIABLE_VarTable_49);

static void MR_CALL 
check_hlds__simplify__format_call__make_result_var_if_needed_4_p_0(
  MR_Word MaybeResultVar_5,
  MR_Word * ResultVar_6,
  MR_Word STATE_VARIABLE_VarTable_0_9,
  MR_Word * STATE_VARIABLE_VarTable_10);

static void MR_CALL 
check_hlds__simplify__format_call__build_float_kind_arg_5_p_0(
  MR_Word Kind_6,
  MR_Word * Var_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_VarTable_0_16,
  MR_Word * STATE_VARIABLE_VarTable_17);

static void MR_CALL 
check_hlds__simplify__format_call__build_int_base_arg_5_p_0(
  MR_Word Base_6,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarTable_0_16,
  MR_Word * STATE_VARIABLE_VarTable_17);

static void MR_CALL 
check_hlds__simplify__format_call__maybe_build_prec_arg_6_p_0(
  MR_Word MaybePrec_7,
  MR_String * PredNameSuffix_8,
  MR_Word * MaybePrecVar_9,
  MR_Word * MaybePrecGoals_10,
  MR_Word STATE_VARIABLE_VarTable_0_15,
  MR_Word * STATE_VARIABLE_VarTable_16);

static void MR_CALL 
check_hlds__simplify__format_call__maybe_build_width_arg_6_p_0(
  MR_Word MaybeWidth_7,
  MR_String * PredNameSuffix_8,
  MR_Word * MaybeWidthVar_9,
  MR_Word * MaybeWidthGoals_10,
  MR_Word STATE_VARIABLE_VarTable_0_15,
  MR_Word * STATE_VARIABLE_VarTable_16);

static void MR_CALL 
check_hlds__simplify__format_call__build_flags_arg_6_p_0(
  MR_Word Context_7,
  MR_Word Flags_8,
  MR_Word * Var_9,
  MR_Word * Goals_10,
  MR_Word STATE_VARIABLE_VarTable_0_77,
  MR_Word * STATE_VARIABLE_VarTable_78);

static void MR_CALL 
check_hlds__simplify__format_call__cast_uint_value_var_if_needed_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Context_11,
  MR_Word UIntSize_12,
  MR_Word OrigValueVar_13,
  MR_String * FormatPredBase_14,
  MR_Word * ValueVar_15,
  MR_Word * ValueCastGoals_16,
  MR_Word STATE_VARIABLE_VarTable_0_21,
  MR_Word * STATE_VARIABLE_VarTable_22);

static void MR_CALL 
check_hlds__simplify__format_call__cast_int_value_var_to_uint_if_needed_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Context_11,
  MR_Word IntSize_12,
  MR_Word OrigValueVar_13,
  MR_String * FormatPredBase_14,
  MR_Word * ValueVar_15,
  MR_Word * ValueCastGoals_16,
  MR_Word STATE_VARIABLE_VarTable_0_21,
  MR_Word * STATE_VARIABLE_VarTable_22);

static void MR_CALL 
check_hlds__simplify__format_call__cast_int_value_var_if_needed_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Context_11,
  MR_Word IntSize_12,
  MR_Word OrigValueVar_13,
  MR_String * FormatPredBase_14,
  MR_Word * ValueVar_15,
  MR_Word * ValueCastGoals_16,
  MR_Word STATE_VARIABLE_VarTable_0_21,
  MR_Word * STATE_VARIABLE_VarTable_22);

static void MR_CALL 
check_hlds__simplify__format_call__check_fmt_str_val_vars_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call__check_fmt_str_val_vars_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredInfo_10,
  MR_Word ProcInfo_11,
  MR_Word ConjMaps_12,
  MR_Word PredMap_13,
  MR_Word FormatCallSite_14,
  MR_Word FmtStrValVars_15,
  MR_Word * Result_16);

static MR_bool MR_CALL 
check_hlds__simplify__format_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__simplify__format_call__format_call_is_checked_in_parent_loop_4_p_0(
  MR_Word HeadVars_1,
  MR_Word HeadVar__2_2,
  MR_Word VarFS_3,
  MR_Word VarVL_4);

static void MR_CALL 
check_hlds__simplify__format_call__follow_format_string_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call__follow_format_string_5_p_0(
  MR_Word ConjMaps_6,
  MR_Word PredMap_7,
  MR_Word CurId_8,
  MR_Word StringVar_9,
  MR_Word * Result_10);

static void MR_CALL 
check_hlds__simplify__format_call__follow_list_skeleton_5_p_0(
  MR_Word ConjMaps_6,
  MR_Word PredMap_7,
  MR_Word CurId_8,
  MR_Word ListVar_9,
  MR_Word * Result_10);

static MR_bool MR_CALL 
check_hlds__simplify__format_call__project_all_follow_string_results_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__simplify__format_call__arg_nums_to_vars_6_p_0(
  MR_Word ArgVars_7,
  MR_Integer NumFormatStringValues_8,
  MR_Word FormatStringValues_9,
  MR_Word * FmtStrVal_10,
  MR_Integer STATE_VARIABLE_Pos_0_19,
  MR_Integer * STATE_VARIABLE_Pos_20);

static MR_Word MR_CALL 
check_hlds__simplify__format_call__get_relevant_vars_from_fmt_str_val_vars_1_f_0(
  MR_Word FmtStrVal_3);

static void MR_CALL 
check_hlds__simplify__format_call__analyze_and_optimize_format_calls_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
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
  MR_Word * STATE_VARIABLE_ToDeleteGoals_115);

static void MR_CALL 
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
  MR_Word * STATE_VARIABLE_ToDeleteGoalSets_13);

static void MR_CALL 
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
  MR_Word * STATE_VARIABLE_ToDeleteGoalSets_13);

static void MR_CALL 
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
  MR_Word * STATE_VARIABLE_ToDeleteGoals_10);

static MR_Box MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(
  MR_Word Params_1,
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
  MR_Word * STATE_VARIABLE_RelevantVars_13);

static void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_disj_arms_12_p_0(
  MR_Word Params_1,
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
  MR_Word * HeadVar__12_12);

static void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_disj_13_p_0(
  MR_Word Params_14,
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
  MR_Word * STATE_VARIABLE_RelevantVars_33);

static void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(
  MR_Word Params_14,
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
  MR_Word * STATE_VARIABLE_RelevantVars_32);

static void MR_CALL 
check_hlds__simplify__format_call__alloc_id_3_p_0(
  MR_Word * ConjId_4,
  MR_Word STATE_VARIABLE_Counter_0_7,
  MR_Word * STATE_VARIABLE_Counter_8);

static MR_bool MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_unify_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_unify_9_p_0(
  MR_Word Unification_10,
  MR_Word GoalInfo_11,
  MR_Word CurId_12,
  MR_Word STATE_VARIABLE_ConjMaps_0_49,
  MR_Word * STATE_VARIABLE_ConjMaps_50,
  MR_Word STATE_VARIABLE_PredMap_0_51,
  MR_Word * STATE_VARIABLE_PredMap_52,
  MR_Word STATE_VARIABLE_RelevantVars_0_53,
  MR_Word * STATE_VARIABLE_RelevantVars_54);

static void MR_CALL 
check_hlds__simplify__format_call__add_to_element_map_5_p_0(
  MR_Word ConjId_6,
  MR_Word Var_7,
  MR_Word Element_8,
  MR_Word STATE_VARIABLE_ConjMaps_0_19,
  MR_Word * STATE_VARIABLE_ConjMaps_20);

static void MR_CALL 
check_hlds__simplify__format_call__add_to_list_map_5_p_0(
  MR_Word ConjId_6,
  MR_Word Var_7,
  MR_Word ListState_8,
  MR_Word STATE_VARIABLE_ConjMaps_0_19,
  MR_Word * STATE_VARIABLE_ConjMaps_20);

static void MR_CALL 
check_hlds__simplify__format_call__add_to_string_map_5_p_0(
  MR_Word ConjId_6,
  MR_Word Var_7,
  MR_Word StringState_8,
  MR_Word STATE_VARIABLE_ConjMaps_0_19,
  MR_Word * STATE_VARIABLE_ConjMaps_20);

static void MR_CALL 
check_hlds__simplify__format_call__is_format_call_kind_and_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
check_hlds__simplify__format_call__is_format_call_kind_and_vars_6_p_0(
  MR_Word PredInfo_7,
  MR_Word ModuleName_8,
  MR_String Name_9,
  MR_Word ArgVars_10,
  MR_Word GoalInfo_11,
  MR_Word * Kind_12);

static MR_bool MR_CALL 
check_hlds__simplify__format_call__is_builtin_format_call_kind_and_vars_5_p_0(
  MR_Word WrappedModuleName_6,
  MR_String Name_7,
  MR_Word ArgVars_8,
  MR_Word GoalInfo_9,
  MR_Word * Kind_10);

static MR_Box MR_CALL 
check_hlds__simplify__format_call__get_relevant_vars_from_format_call_kind_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__simplify__format_call__get_relevant_vars_from_format_call_kind_1_f_0(
  MR_Word Kind_3);

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
check_hlds__simplify__format_call____Unify____fmt_str_val_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fmt_str_val_vars_0_0_10001(
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
check_hlds__simplify__format_call____Unify____format_call_traverse_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_traverse_params_0_0_10001(
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
check_hlds__simplify__format_call____Unify____state_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__format_call____Compare____state_format_0_0_10001(
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


static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_1[10][3];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_2[15][2];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_3[6][5];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_4[3][1];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_5[1][9];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_7[1][17];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_8[2][8];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_9[1][4];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_10[1][11];


struct check_hlds__simplify__format_call__vector_common_type_6_0_s {
  const MR_String check_hlds__simplify__format_call__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct check_hlds__simplify__format_call__vector_common_type_6_0_s check_hlds__simplify__format_call_vector_common_6[43];



static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_1[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2])),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2])),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2])),
    ((MR_Box) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2])),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_3[2])),
    ((MR_Box) (check_hlds__simplify__format_call__get_relevant_vars_from_format_call_kind_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_3[4])),
    ((MR_Box) (check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_3[5])),
    ((MR_Box) (check_hlds__simplify__format_call__check_format_call_site_14_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_2[15][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_spec_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_3[1]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fmt_str_val_vars_0))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "vxP"))
  },
  /* row  11 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    (MR_Box) ((MR_Unsigned) 3U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__simplify__format_call_scalar_common_4[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Integer) 26)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_3[6][5] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe3_4)),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[3])),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[4])),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[5])),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fmt_str_val_vars_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__simplify__format_call__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__simplify__format_call__parse_tree__maybe_error__pti_maybe3_4__plain_list__ti_list_1check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_spec_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_4[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "replace_string_format")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "replace_io_format")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "represent_spec")) },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_5[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__simplify__format_call__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fmt_str_val_vars_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_7[1][17] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_maybe_generate_implicit_stream_warnings_0)),
    ((MR_Box) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_opt_format_calls_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_map_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_site_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_8[2][8] = {
  /* row   0 */
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
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_map_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__maybe__pti_maybe_1__plain_check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_9[1][4] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_scalar_common_2[12])))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_10[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_map_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_site_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fmt_str_val_vars_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__parse_tree__maybe_error__pti_maybe3_4__plain_list__ti_list_1check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_spec_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};


static /* final */ const struct check_hlds__simplify__format_call__vector_common_type_6_0_s check_hlds__simplify__format_call_vector_common_6[43] = {
  /* row   0 */   { NULL },
  /* row   1 */   { NULL },
  /* row   2 */   { (MR_String) "c" },
  /* row   3 */   { (MR_String) "i16" },
  /* row   4 */   { NULL },
  /* row   5 */   { NULL },
  /* row   6 */   { NULL },
  /* row   7 */   { (MR_String) "f" },
  /* row   8 */   { (MR_String) "i" },
  /* row   9 */   { (MR_String) "u32" },
  /* row  10 */   { NULL },
  /* row  11 */   { NULL },
  /* row  12 */   { NULL },
  /* row  13 */   { NULL },
  /* row  14 */   { NULL },
  /* row  15 */   { (MR_String) "u16" },
  /* row  16 */   { (MR_String) "i64" },
  /* row  17 */   { NULL },
  /* row  18 */   { (MR_String) "s" },
  /* row  19 */   { (MR_String) "i8" },
  /* row  20 */   { (MR_String) "u" },
  /* row  21 */   { NULL },
  /* row  22 */   { NULL },
  /* row  23 */   { NULL },
  /* row  24 */   { NULL },
  /* row  25 */   { NULL },
  /* row  26 */   { NULL },
  /* row  27 */   { NULL },
  /* row  28 */   { (MR_String) "u64" },
  /* row  29 */   { (MR_String) "i32" },
  /* row  30 */   { NULL },
  /* row  31 */   { (MR_String) "u8" },
  /* row  32 */   { (MR_String) "base_octal" },
  /* row  33 */   { (MR_String) "base_decimal" },
  /* row  34 */   { (MR_String) "base_hex_lc" },
  /* row  35 */   { (MR_String) "base_hex_uc" },
  /* row  36 */   { (MR_String) "base_hex_p" },
  /* row  37 */   { (MR_String) "kind_e_scientific_lc" },
  /* row  38 */   { (MR_String) "kind_e_scientific_uc" },
  /* row  39 */   { (MR_String) "kind_f_plain_lc" },
  /* row  40 */   { (MR_String) "kind_f_plain_uc" },
  /* row  41 */   { (MR_String) "kind_g_flexible_lc" },
  /* row  42 */   { (MR_String) "kind_g_flexible_uc" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
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

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__maybe__pti_maybe_1__plain_check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__list__ti_list_1check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct4 check_hlds__simplify__format_call__parse_tree__maybe_error__pti_maybe3_4__plain_list__ti_list_1check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_spec_0__plain_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe3_4,
  {
    (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__list__ti_list_1check_hlds__simplify__parse_string_format__type_ctor_info_compiler_format_spec_0),
    (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__list__ti_list_1mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_id_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__notag_functor_desc_conj_id_0 = {
  (MR_String) "conj_id",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____conj_id_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____conj_id_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "conj_id",
  { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__notag_functor_desc_conj_id_0 },
  { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__notag_functor_desc_conj_id_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_id_0,

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

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0)
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
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0),
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

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_conj_map_0_0[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_conj_map_0_0 };

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_conj_map_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_conj_map_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_conj_map_0[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_conj_map_0_0 };

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_map_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____conj_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____conj_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "conj_map",
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_conj_map_0 },
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_conj_map_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_map_0,

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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____conj_maps_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____conj_maps_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "conj_maps",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__tree234__ti_tree234_2check_hlds__simplify__format_call__type_ctor_info_conj_id_0check_hlds__simplify__format_call__type_ctor_info_conj_map_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____conj_pred_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____conj_pred_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "conj_pred_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__tree234__ti_tree234_2check_hlds__simplify__format_call__type_ctor_info_conj_id_0check_hlds__simplify__format_call__type_ctor_info_conj_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_eqv_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "fc_eqv_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "fc_goal_id_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_fc_opt_goal_info_0_0[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_fc_opt_goal_info_0_0 };

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_fc_opt_goal_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_fc_opt_goal_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_fc_opt_goal_info_0[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_fc_opt_goal_info_0_0 };

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_fc_opt_goal_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "fc_opt_goal_info",
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_fc_opt_goal_info_0 },
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_fc_opt_goal_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_fc_opt_goal_info_0,

};

static const MR_VA_TypeInfo_Struct3 check_hlds__simplify__format_call____vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__maybe__ti_maybe_1__vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&check_hlds__simplify__format_call____vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_fmt_str_val_vars_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__maybe__ti_maybe_1__vti_tuple_3builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_fmt_str_val_vars_0_0 = {
  (MR_String) "fmt_str_val_vars",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_fmt_str_val_vars_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_fmt_str_val_vars_0_0[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_fmt_str_val_vars_0_0 };

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_fmt_str_val_vars_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_fmt_str_val_vars_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_fmt_str_val_vars_0[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_fmt_str_val_vars_0_0 };

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_fmt_str_val_vars_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fmt_str_val_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____fmt_str_val_vars_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____fmt_str_val_vars_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "fmt_str_val_vars",
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_fmt_str_val_vars_0 },
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_fmt_str_val_vars_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_fmt_str_val_vars_0,

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

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_0[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_0 };

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_1[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_1 };

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_follow_skeleton_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "follow_skeleton_result",
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_follow_skeleton_result_0 },
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_follow_skeleton_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_follow_skeleton_result_0,

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

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_string_result_0_0[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_string_result_0_0 };

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_string_result_0_1[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_string_result_0_1 };

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_follow_string_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_string_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_string_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____follow_string_result_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____follow_string_result_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "follow_string_result",
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_follow_string_result_0 },
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_follow_string_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_follow_string_result_0,

};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fmt_str_val_vars_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_0[3] = {
  (MR_String) "sf_context",
  (MR_String) "sf_fmt_str_values",
  (MR_String) "sf_result_var"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_0 = {
  (MR_String) "kind_string_format",
  INT16_C(3),
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

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_1[4] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fmt_str_val_vars_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_1[4] = {
  (MR_String) "sb_context",
  (MR_String) "sb_fmt_str_values",
  (MR_String) "sb_state_in_var",
  (MR_String) "sb_state_out_var"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_1 = {
  (MR_String) "kind_string_builder",
  INT16_C(4),
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
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fmt_str_val_vars_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_2[4] = {
  (MR_String) "iofns_context",
  (MR_String) "iofns_fmt_str_values",
  (MR_String) "iofns_io_in_var",
  (MR_String) "iofns_io_out_var"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_2 = {
  (MR_String) "kind_io_format_nostream",
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
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fmt_str_val_vars_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_3[5] = {
  (MR_String) "iofs_context",
  (MR_String) "iofs_stream_var",
  (MR_String) "iofs_fmt_str_values",
  (MR_String) "iofs_io_in_var",
  (MR_String) "iofs_io_out_var"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_3 = {
  (MR_String) "kind_io_format_stream",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_3,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_3,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_4[6] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fmt_str_val_vars_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_4[6] = {
  (MR_String) "ssw_context",
  (MR_String) "ssw_tc_info_var",
  (MR_String) "ssw_stream_var",
  (MR_String) "ssw_fmt_str_values",
  (MR_String) "ssw_in_var",
  (MR_String) "ssw_out_var"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_4 = {
  (MR_String) "kind_stream_string_writer",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_4,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_4,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__one_or_more__ti_one_or_more_1check_hlds__simplify__format_call__type_ctor_info_fmt_str_val_vars_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fmt_str_val_vars_0) }
};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_5[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__one_or_more__ti_one_or_more_1check_hlds__simplify__format_call__type_ctor_info_fmt_str_val_vars_0)
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_5[2] = {
  (MR_String) "p_context",
  (MR_String) "p_fmt_str_values"
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_5 = {
  (MR_String) "kind_pragma",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_5,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_5,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_0[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_0 };

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_1[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_1 };

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_2[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_2 };

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_3[3] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_3,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_4,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_5
};

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_kind_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(3),
    MR_SECTAG_REMOTE_FULL_WORD,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_kind_0[6] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_2,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_3,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_5,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_4,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_1,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_0
};

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_kind_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____format_call_kind_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____format_call_kind_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "format_call_kind",
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_kind_0 },
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_kind_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_kind_0,

};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_site_0_0[7] = {
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_kind_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__type_ctor_info_maybe_warn_unknown_format_0)
};

static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_site_0_0[7] = {
  (MR_String) "fcs_goal_id",
  (MR_String) "fcs_goal_info",
  (MR_String) "fcs_call_kind",
  (MR_String) "fcs_called_pred_id",
  (MR_String) "fcs_call_context",
  (MR_String) "fcs_containing_conj",
  (MR_String) "fcs_warn_unknown_format"
};

static const MR_DuArgLocn check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_locns_format_call_site_0_0[7] = {
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_site_0_0 = {
  (MR_String) "format_call_site",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_site_0_0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_site_0_0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_locns_format_call_site_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_site_0_0[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_site_0_0 };

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_site_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_site_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_site_0[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_site_0_0 };

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_site_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_site_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____format_call_site_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____format_call_site_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "format_call_site",
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_site_0 },
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_site_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_site_0,

};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_traverse_params_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call_errors__check_hlds__simplify__format_call_errors__type_ctor_info_maybe_warn_unknown_format_0)
};

static const MR_DuArgLocn check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_locns_format_call_traverse_params_0_0[2] = {
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

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_traverse_params_0_0 = {
  (MR_String) "format_call_traverse_params",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_traverse_params_0_0,
  NULL,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_locns_format_call_traverse_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_traverse_params_0_0[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_traverse_params_0_0 };

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_traverse_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_traverse_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_traverse_params_0[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_traverse_params_0_0 };

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_traverse_params_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_traverse_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____format_call_traverse_params_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____format_call_traverse_params_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "format_call_traverse_params",
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_traverse_params_0 },
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_traverse_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_traverse_params_0,

};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_element_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____list_element_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____list_element_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "list_element_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "list_skeleton_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_0[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_0 };

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_1[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_1 };

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_list_skeleton_state_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "list_skeleton_state",
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_list_skeleton_state_0 },
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_list_skeleton_state_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_list_skeleton_state_0,

};

static const MR_EnumFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_functor_desc_maybe_generate_implicit_stream_warnings_0_0 = {
  (MR_String) "do_not_generate_implicit_stream_warnings",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_functor_desc_maybe_generate_implicit_stream_warnings_0_1 = {
  (MR_String) "generate_implicit_stream_warnings",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_ordinal_ordered_maybe_generate_implicit_stream_warnings_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____maybe_generate_implicit_stream_warnings_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____maybe_generate_implicit_stream_warnings_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "maybe_generate_implicit_stream_warnings",
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_name_ordered_maybe_generate_implicit_stream_warnings_0 },
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__enum_ordinal_ordered_maybe_generate_implicit_stream_warnings_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_maybe_generate_implicit_stream_warnings_0,

};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_state_format_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_state_format_0_0 = {
  (MR_String) "io_state_stream",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_state_format_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_state_format_0_1 = {
  (MR_String) "io_state_no_stream",
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

static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_state_format_0_2 = {
  (MR_String) "string_builder_state",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_state_format_0_0[2] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_state_format_0_1,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_state_format_0_2
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_state_format_0_1[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_state_format_0_0 };

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_state_format_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_state_format_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_state_format_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_state_format_0[3] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_state_format_0_1,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_state_format_0_0,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_state_format_0_2
};

static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_state_format_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_state_format_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____state_format_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____state_format_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "state_format",
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_state_format_0 },
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_state_format_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_state_format_0,

};

const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____string_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____string_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "string_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_string_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_state_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

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

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_state_0_0[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_state_0_0 };

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_state_0_1[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_state_0_1 };

static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_state_0_2[1] = { &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_state_0_2 };

static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_string_state_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_state_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_state_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_state_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____string_state_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____string_state_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "string_state",
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_string_state_0 },
  { check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_string_state_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_string_state_0,

};

static MR_bool MR_CALL 
check_hlds__simplify__format_call__IntroducedFrom__pred__format_call_traverse_unify__1250__1_2_p_0(
  MR_Word ArgVars_20,
  MR_Word HeadVar__2_61)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[4]), ((MR_Box) (ArgVars_20)), ((MR_Box) (HeadVar__2_61)));
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__simplify__format_call__IntroducedFrom__func__check_format_call_site__718__1_1_f_0(
  MR_Word HeadVar__1_92)
{
  MR_Word HeadVar__2_93;

  HeadVar__2_93 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[3]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[4]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[5]), HeadVar__1_92);
  return HeadVar__2_93;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_state_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

              mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
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
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word ArgX3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word ArgY3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
              MR_Word SubResult1_8;
              MR_Unsigned Var_29 = (MR_Unsigned) (ArgX1_6);
              MR_Unsigned Var_30 = (MR_Unsigned) (ArgY1_7);

              succeeded = (Var_29 < Var_30);
              if (succeeded)
              {
                SubResult1_8 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_29 > Var_30);
                if (succeeded)
                {
                  SubResult1_8 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult1_8 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult1_8;
              else
              {
                MR_Word SubResult2_11;

                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), &SubResult2_11, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
                succeeded = (SubResult2_11 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_11;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX3_12)), ((MR_Box) (ArgY3_13)));
              }
            }
            break;
          case (MR_Integer) 2:
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
              MR_Word ArgX1_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word SubResult1_16;
              MR_Unsigned Var_27 = (MR_Unsigned) (ArgX1_14);
              MR_Unsigned Var_28 = (MR_Unsigned) (ArgY1_15);

              succeeded = (Var_27 < Var_28);
              if (succeeded)
              {
                SubResult1_16 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_27 > Var_28);
                if (succeeded)
                {
                  SubResult1_16 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult1_16 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult1_16;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX2_17)), ((MR_Box) (ArgY2_18)));
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_state_0_0(
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
        {
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_18_18;
          MR_Word TypeInfo_19_19;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_8;
          MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_10;
          MR_Unsigned Var_22;
          MR_Unsigned Var_23;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            Var_22 = (MR_Unsigned) (ArgX1_5);
            Var_23 = (MR_Unsigned) (ArgY1_6);
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
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_12;
          MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_14;
          MR_Unsigned Var_24;
          MR_Unsigned Var_25;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            Var_24 = (MR_Unsigned) (ArgX1_11);
            Var_25 = (MR_Unsigned) (ArgY1_12);
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

static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____state_format_0_0(
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
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
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
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____state_format_0_0(
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
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_6 == CastX_5);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_11_11;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_11_11 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
check_hlds__simplify__format_call____Compare____maybe_generate_implicit_stream_warnings_0_0(
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
check_hlds__simplify__format_call____Unify____maybe_generate_implicit_stream_warnings_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0(
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
    MR_Word TypeInfo_11_11;
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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

static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_element_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_element_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_traverse_params_0_0(
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
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
check_hlds__simplify__format_call____Unify____format_call_traverse_params_0_0(
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
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_site_0_0(
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
    MR_Word ArgX7_22 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Word ArgY7_23 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Word SubResult1_6;
    MR_Unsigned Var_33 = (MR_Unsigned) (ArgX1_4);
    MR_Unsigned Var_34 = (MR_Unsigned) (ArgY1_5);

    succeeded = (Var_33 < Var_34);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_33 > Var_34);
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

        check_hlds__simplify__format_call____Compare____format_call_kind_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          hlds__hlds_pred____Compare____pred_id_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__term_context____Compare____term_context_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;
              MR_Integer Var_35 = (MR_Integer) (ArgX6_19);
              MR_Integer Var_36 = (MR_Integer) (ArgY6_20);

              succeeded = (Var_35 < Var_36);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_35 > Var_36);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Integer Var_37 = (MR_Integer) (ArgX7_22);
                MR_Integer Var_38 = (MR_Integer) (ArgY7_23);

                succeeded = (Var_37 < Var_38);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_37 > Var_38);
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

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_site_0_0(
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
    MR_Word ArgX7_15 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Word ArgY7_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Unsigned Var_23 = (MR_Unsigned) (ArgX1_3);
    MR_Unsigned Var_24 = (MR_Unsigned) (ArgY1_4);
    MR_Integer CastX_27;
    MR_Integer CastY_28;

    succeeded = (Var_23 == Var_24);
    if (succeeded)
    {
      succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = check_hlds__simplify__format_call____Unify____format_call_kind_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              CastX_27 = (MR_Integer) (ArgX6_13);
              CastY_28 = (MR_Integer) (ArgY6_14);
              succeeded = (CastX_27 == CastY_28);
              if (succeeded)
                succeeded = MR_TRUE;
              else
              {
                MR_Integer ArgX1_25 = (MR_Integer) (ArgX6_13);
                MR_Integer ArgY1_26 = (MR_Integer) (ArgY6_14);

                succeeded = (ArgX1_25 == ArgY1_26);
              }
              if (succeeded)
                succeeded = (ArgX7_15 == ArgY7_16);
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_70 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_71 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_70 == CastY_71);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
              MR_Word SubResult1_6;

              mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
              {
                MR_Word SubResult2_9;

                check_hlds__simplify__format_call____Compare____fmt_str_val_vars_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
                succeeded = (SubResult2_9 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_9;
                else
                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
              }
            }
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
              MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word ArgX3_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word ArgY3_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
              MR_Word ArgX4_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
              MR_Word ArgY4_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 3))));
              MR_Word SubResult1_14;

              mercury__term_context____Compare____term_context_0_0(&SubResult1_14, ArgX1_12, ArgY1_13);
              succeeded = (SubResult1_14 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_14;
              else
              {
                MR_Word SubResult2_17;

                check_hlds__simplify__format_call____Compare____fmt_str_val_vars_0_0(&SubResult2_17, ArgX2_15, ArgY2_16);
                succeeded = (SubResult2_17 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_17;
                else
                {
                  MR_Word SubResult3_20;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), &SubResult3_20, ((MR_Box) (ArgX3_18)), ((MR_Box) (ArgY3_19)));
                  succeeded = (SubResult3_20 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_20;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX4_21)), ((MR_Box) (ArgY4_22)));
                }
              }
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
              MR_Word ArgX1_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_26 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_27 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word ArgX3_29 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
              MR_Word ArgY3_30 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
              MR_Word ArgX4_32 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
              MR_Word ArgY4_33 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 3))));
              MR_Word SubResult1_25;

              mercury__term_context____Compare____term_context_0_0(&SubResult1_25, ArgX1_23, ArgY1_24);
              succeeded = (SubResult1_25 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_25;
              else
              {
                MR_Word SubResult2_28;

                check_hlds__simplify__format_call____Compare____fmt_str_val_vars_0_0(&SubResult2_28, ArgX2_26, ArgY2_27);
                succeeded = (SubResult2_28 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_28;
                else
                {
                  MR_Word SubResult3_31;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), &SubResult3_31, ((MR_Box) (ArgX3_29)), ((MR_Box) (ArgY3_30)));
                  succeeded = (SubResult3_31 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_31;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX4_32)), ((MR_Box) (ArgY4_33)));
                }
              }
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Word ArgY1_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                      MR_Word ArgX2_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                      MR_Word ArgY2_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                      MR_Word ArgX3_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                      MR_Word ArgY3_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                      MR_Word ArgX4_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))));
                      MR_Word ArgY4_44 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 4))));
                      MR_Word ArgX5_46 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 5))));
                      MR_Word ArgY5_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 5))));
                      MR_Word SubResult1_36;

                      mercury__term_context____Compare____term_context_0_0(&SubResult1_36, ArgX1_34, ArgY1_35);
                      succeeded = (SubResult1_36 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_36;
                      else
                      {
                        MR_Word SubResult2_39;

                        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), &SubResult2_39, ((MR_Box) (ArgX2_37)), ((MR_Box) (ArgY2_38)));
                        succeeded = (SubResult2_39 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_39;
                        else
                        {
                          MR_Word SubResult3_42;

                          check_hlds__simplify__format_call____Compare____fmt_str_val_vars_0_0(&SubResult3_42, ArgX3_40, ArgY3_41);
                          succeeded = (SubResult3_42 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_42;
                          else
                          {
                            MR_Word SubResult4_45;

                            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), &SubResult4_45, ((MR_Box) (ArgX4_43)), ((MR_Box) (ArgY4_44)));
                            succeeded = (SubResult4_45 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult4_45;
                            else
                              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX5_46)), ((MR_Box) (ArgY5_47)));
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
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
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Word ArgY1_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                      MR_Word ArgX2_51 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                      MR_Word ArgY2_52 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                      MR_Word ArgX3_54 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                      MR_Word ArgY3_55 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 3))));
                      MR_Word ArgX4_57 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))));
                      MR_Word ArgY4_58 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 4))));
                      MR_Word ArgX5_60 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 5))));
                      MR_Word ArgY5_61 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 5))));
                      MR_Word ArgX6_63 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 6))));
                      MR_Word ArgY6_64 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 6))));
                      MR_Word SubResult1_50;

                      mercury__term_context____Compare____term_context_0_0(&SubResult1_50, ArgX1_48, ArgY1_49);
                      succeeded = (SubResult1_50 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_50;
                      else
                      {
                        MR_Word SubResult2_53;

                        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), &SubResult2_53, ((MR_Box) (ArgX2_51)), ((MR_Box) (ArgY2_52)));
                        succeeded = (SubResult2_53 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_53;
                        else
                        {
                          MR_Word SubResult3_56;

                          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), &SubResult3_56, ((MR_Box) (ArgX3_54)), ((MR_Box) (ArgY3_55)));
                          succeeded = (SubResult3_56 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult3_56;
                          else
                          {
                            MR_Word SubResult4_59;

                            check_hlds__simplify__format_call____Compare____fmt_str_val_vars_0_0(&SubResult4_59, ArgX4_57, ArgY4_58);
                            succeeded = (SubResult4_59 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult4_59;
                            else
                            {
                              MR_Word SubResult5_62;

                              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), &SubResult5_62, ((MR_Box) (ArgX5_60)), ((MR_Box) (ArgY5_61)));
                              succeeded = (SubResult5_62 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult5_62;
                              else
                                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX6_63)), ((MR_Box) (ArgY6_64)));
                            }
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ArgX1_65 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Word ArgY1_66 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                      MR_Word ArgX2_68 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                      MR_Word ArgY2_69 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                      MR_Word SubResult1_67;

                      mercury__term_context____Compare____term_context_0_0(&SubResult1_67, ArgX1_65, ArgY1_66);
                      succeeded = (SubResult1_67 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_67;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[9]), HeadVar__1_1, ((MR_Box) (ArgX2_68)), ((MR_Box) (ArgY2_69)));
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

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_51 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_52 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_51 == CastY_52);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeInfo_71_71;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
            {
              succeeded = check_hlds__simplify__format_call____Unify____fmt_str_val_vars_0_0(ArgX2_5, ArgY2_6);
              if (succeeded)
              {
                TypeInfo_71_71 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_71_71, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
              }
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_68_68;
          MR_Word TypeInfo_69_69;
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_10;
          MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_12;
          MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_14;
          MR_Word ArgX4_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 3))));
          MR_Word ArgY4_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_9, ArgY1_10);
            if (succeeded)
            {
              succeeded = check_hlds__simplify__format_call____Unify____fmt_str_val_vars_0_0(ArgX2_11, ArgY2_12);
              if (succeeded)
              {
                TypeInfo_68_68 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_68_68, ((MR_Box) (ArgX3_13)), ((MR_Box) (ArgY3_14)));
                if (succeeded)
                {
                  TypeInfo_69_69 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_69_69, ((MR_Box) (ArgX4_15)), ((MR_Box) (ArgY4_16)));
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_54_54;
          MR_Word TypeInfo_55_55;
          MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_18;
          MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_20;
          MR_Word ArgX3_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_22;
          MR_Word ArgX4_23 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 3))));
          MR_Word ArgY4_24;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_20 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_22 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_17, ArgY1_18);
            if (succeeded)
            {
              succeeded = check_hlds__simplify__format_call____Unify____fmt_str_val_vars_0_0(ArgX2_19, ArgY2_20);
              if (succeeded)
              {
                TypeInfo_54_54 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_54_54, ((MR_Box) (ArgX3_21)), ((MR_Box) (ArgY3_22)));
                if (succeeded)
                {
                  TypeInfo_55_55 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_55_55, ((MR_Box) (ArgX4_23)), ((MR_Box) (ArgY4_24)));
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_57_57;
              MR_Word TypeInfo_58_58;
              MR_Word TypeInfo_59_59;
              MR_Word ArgX1_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_26;
              MR_Word ArgX2_27 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_28;
              MR_Word ArgX3_29 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_30;
              MR_Word ArgX4_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 4))));
              MR_Word ArgY4_32;
              MR_Word ArgX5_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 5))));
              MR_Word ArgY5_34;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_28 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_30 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                ArgY4_32 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))));
                ArgY5_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 5))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_25, ArgY1_26);
                if (succeeded)
                {
                  TypeInfo_57_57 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_57_57, ((MR_Box) (ArgX2_27)), ((MR_Box) (ArgY2_28)));
                  if (succeeded)
                  {
                    succeeded = check_hlds__simplify__format_call____Unify____fmt_str_val_vars_0_0(ArgX3_29, ArgY3_30);
                    if (succeeded)
                    {
                      TypeInfo_58_58 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_58_58, ((MR_Box) (ArgX4_31)), ((MR_Box) (ArgY4_32)));
                      if (succeeded)
                      {
                        TypeInfo_59_59 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_59_59, ((MR_Box) (ArgX5_33)), ((MR_Box) (ArgY5_34)));
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_63_63;
              MR_Word TypeInfo_64_64;
              MR_Word TypeInfo_65_65;
              MR_Word TypeInfo_66_66;
              MR_Word ArgX1_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_36;
              MR_Word ArgX2_37 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_38;
              MR_Word ArgX3_39 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_40;
              MR_Word ArgX4_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 4))));
              MR_Word ArgY4_42;
              MR_Word ArgX5_43 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 5))));
              MR_Word ArgY5_44;
              MR_Word ArgX6_45 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 6))));
              MR_Word ArgY6_46;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_36 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_40 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 3))));
                ArgY4_42 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 4))));
                ArgY5_44 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 5))));
                ArgY6_46 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 6))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_35, ArgY1_36);
                if (succeeded)
                {
                  TypeInfo_63_63 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_63_63, ((MR_Box) (ArgX2_37)), ((MR_Box) (ArgY2_38)));
                  if (succeeded)
                  {
                    TypeInfo_64_64 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_64_64, ((MR_Box) (ArgX3_39)), ((MR_Box) (ArgY3_40)));
                    if (succeeded)
                    {
                      succeeded = check_hlds__simplify__format_call____Unify____fmt_str_val_vars_0_0(ArgX4_41, ArgY4_42);
                      if (succeeded)
                      {
                        TypeInfo_65_65 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_65_65, ((MR_Box) (ArgX5_43)), ((MR_Box) (ArgY5_44)));
                        if (succeeded)
                        {
                          TypeInfo_66_66 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_66_66, ((MR_Box) (ArgX6_45)), ((MR_Box) (ArgY6_46)));
                        }
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_61_61;
              MR_Word ArgX1_47 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_48;
              MR_Word ArgX2_49 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_50;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_48 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_47, ArgY1_48);
                if (succeeded)
                {
                  TypeInfo_61_61 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[9]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_61_61, ((MR_Box) (ArgX2_49)), ((MR_Box) (ArgY2_50)));
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
check_hlds__simplify__format_call____Compare____follow_string_result_0_0(
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
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_string_result_0_0(
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
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_14_14;
    MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_10;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
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

static void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0(
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
    MR_Word TypeInfo_11_11;
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fmt_str_val_vars_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[8]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fmt_str_val_vars_0_0(
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
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[8]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0(
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

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0(
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
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

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

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_pred_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_pred_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_maps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_maps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_map_0_0(
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

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_map_0_0(
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

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_id_0_0(
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

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_id_0_0(
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
    MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__simplify__format_call__project_case_goal_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Goal_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));

  return Goal_5;
}

static void MR_CALL 
check_hlds__simplify__format_call__follow_poly_type_5_p_0(
  MR_Word ConjMaps_6,
  MR_Word PredMap_7,
  MR_Word CurId_8,
  MR_Word PolyTypeVar_9,
  MR_Word * MaybeAbstractPolyType_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ConjMap_11;
    MR_Word ElementMap_14;
    MR_Word EqvMap_15;
    MR_Word ConjMapPrime_23;
    MR_Box conv0_ConjMapPrime_23;
    MR_Word EqvVar_16;
    MR_Box conv1_EqvVar_16;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), ConjMaps_6, ((MR_Box) (CurId_8)), &conv0_ConjMapPrime_23);
    if (succeeded)
    {
      ConjMapPrime_23 = ((MR_Word) (conv0_ConjMapPrime_23));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      ConjMap_11 = ConjMapPrime_23;
    else
    {
      MR_Word Var_24;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_27;

      Var_24 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0));
      Var_25 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0));
      Var_26 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0));
      Var_27 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]));
      {
        ConjMap_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ConjMap_11, 0) = ((MR_Box) (Var_24));
        MR_hl_field(0, ConjMap_11, 1) = ((MR_Box) (Var_25));
        MR_hl_field(0, ConjMap_11, 2) = ((MR_Box) (Var_26));
        MR_hl_field(0, ConjMap_11, 3) = ((MR_Box) (Var_27));
      }
    }
    ElementMap_14 = ((MR_Word) ((MR_hl_field(0, ConjMap_11, (MR_Integer) 2))));
    EqvMap_15 = ((MR_Word) ((MR_hl_field(0, ConjMap_11, (MR_Integer) 3))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), EqvMap_15, ((MR_Box) (PolyTypeVar_9)), &conv1_EqvVar_16);
    if (succeeded)
    {
      EqvVar_16 = ((MR_Word) (conv1_EqvVar_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word next_value_of_PolyTypeVar_9 = EqvVar_16;

      // direct tailcall eliminated
      ;
      PolyTypeVar_9 = next_value_of_PolyTypeVar_9;
      continue;
    }
    else
    {
      MR_Word AbstractPolyType_17;
      MR_Box conv2_AbstractPolyType_17;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0), ElementMap_14, ((MR_Box) (PolyTypeVar_9)), &conv2_AbstractPolyType_17);
      if (succeeded)
      {
        AbstractPolyType_17 = ((MR_Word) (conv2_AbstractPolyType_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeAbstractPolyType_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (AbstractPolyType_17));
        }
      else
      {
        MR_Word PredId_18;
        MR_Box conv3_PredId_18;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), PredMap_7, ((MR_Box) (CurId_8)), &conv3_PredId_18);
        if (succeeded)
        {
          PredId_18 = ((MR_Word) (conv3_PredId_18));
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
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_93;

  conv1_HeadVar__2_93 = check_hlds__simplify__format_call__IntroducedFrom__func__check_format_call_site__718__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_93));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_16;

  check_hlds__simplify__format_call__check_fmt_str_val_vars_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), &conv0_Result_16);
  *wrapper_arg_2 = ((MR_Box) (conv0_Result_16));
}

static void MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word PredInfo_16,
  MR_Word ProcInfo_17,
  MR_Word ImplicitStreamWarnings_18,
  MR_Word OptFormatCalls_19,
  MR_Word ConjMaps_20,
  MR_Word PredMap_21,
  MR_Word FormatCallSite_22,
  MR_Word STATE_VARIABLE_GoalIdMap_0_68,
  MR_Word * STATE_VARIABLE_GoalIdMap_69,
  MR_Word STATE_VARIABLE_Specs_0_70,
  MR_Word * STATE_VARIABLE_Specs_71,
  MR_Word STATE_VARIABLE_VarTable_0_72,
  MR_Word * STATE_VARIABLE_VarTable_73)
{
  MR_Word GoalId_26 = ((MR_Word) ((MR_hl_field(0, FormatCallSite_22, (MR_Integer) 0))));
  MR_Word GoalInfo_27 = ((MR_Word) ((MR_hl_field(0, FormatCallSite_22, (MR_Integer) 1))));
  MR_Word Kind_28 = ((MR_Word) ((MR_hl_field(0, FormatCallSite_22, (MR_Integer) 2))));
  MR_Word CalleePredId_29 = ((MR_Word) ((MR_hl_field(0, FormatCallSite_22, (MR_Integer) 3))));
  MR_Word STATE_VARIABLE_Specs_74_74;

  switch (ImplicitStreamWarnings_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Specs_74_74 = STATE_VARIABLE_Specs_0_70;
      break;
    case (MR_Integer) 1:
      {
        MR_Word CalleePredInfo_33;
        MR_Word MaybeImplicitStreamSpec_34;

        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_15, CalleePredId_29, &CalleePredInfo_33);
        check_hlds__simplify__simplify_goal_call__maybe_generate_warning_for_implicit_stream_predicate_5_p_0(ModuleInfo_15, CalleePredId_29, CalleePredInfo_33, GoalInfo_27, &MaybeImplicitStreamSpec_34);
        if ((MaybeImplicitStreamSpec_34 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_Specs_74_74 = STATE_VARIABLE_Specs_0_70;
        else
        {
          MR_Word ImplicitStreamSpec_35 = ((MR_Word) ((MR_hl_field(1, MaybeImplicitStreamSpec_34, (MR_Integer) 0))));

          {
            STATE_VARIABLE_Specs_74_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Specs_74_74, 0) = ((MR_Box) (ImplicitStreamSpec_35));
            MR_hl_field(1, STATE_VARIABLE_Specs_74_74, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_70));
          }
        }
      }
      break;
  }
  switch (MR_tag((MR_Word) Kind_28)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FmtStrVal_178 = ((MR_Word) ((MR_hl_field(0, Kind_28, (MR_Integer) 1))));
        MR_Word CheckResult_179;

        check_hlds__simplify__format_call__check_fmt_str_val_vars_8_p_0(ModuleInfo_15, PredInfo_16, ProcInfo_17, ConjMaps_20, PredMap_21, FormatCallSite_22, FmtStrVal_178, &CheckResult_179);
        if (((MR_tag((MR_Word) CheckResult_179)) == (MR_Integer) 0))
        {
          MR_Word CheckSpecs_164 = ((MR_Word) ((MR_hl_field(0, CheckResult_179, (MR_Integer) 0))));

          *STATE_VARIABLE_Specs_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), CheckSpecs_164, STATE_VARIABLE_Specs_74_74);
          *STATE_VARIABLE_GoalIdMap_69 = STATE_VARIABLE_GoalIdMap_0_68;
          *STATE_VARIABLE_VarTable_73 = STATE_VARIABLE_VarTable_0_72;
        }
        else
        {
          MR_Word FormatSpecs_168 = ((MR_Word) ((MR_hl_field(1, CheckResult_179, (MR_Integer) 0))));
          MR_Word ToDeleteVars_169 = ((MR_Word) ((MR_hl_field(1, CheckResult_179, (MR_Integer) 1))));
          MR_Word ToDeleteGoals_170 = ((MR_Word) ((MR_hl_field(1, CheckResult_179, (MR_Integer) 2))));

          switch (OptFormatCalls_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                *STATE_VARIABLE_GoalIdMap_69 = STATE_VARIABLE_GoalIdMap_0_68;
                *STATE_VARIABLE_VarTable_73 = STATE_VARIABLE_VarTable_0_72;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word FormatSpecsOpt_166;

                check_hlds__simplify__parse_string_format__merge_adjacent_const_strs_2_p_0(FormatSpecs_168, &FormatSpecsOpt_166);
                check_hlds__simplify__format_call__create_replacement_goal_10_p_0(ModuleInfo_15, GoalId_26, Kind_28, FormatSpecsOpt_166, ToDeleteVars_169, ToDeleteGoals_170, STATE_VARIABLE_GoalIdMap_0_68, STATE_VARIABLE_GoalIdMap_69, STATE_VARIABLE_VarTable_0_72, STATE_VARIABLE_VarTable_73);
              }
              break;
          }
          *STATE_VARIABLE_Specs_71 = STATE_VARIABLE_Specs_74_74;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word FmtStrVal_156 = ((MR_Word) ((MR_hl_field(1, Kind_28, (MR_Integer) 1))));
        MR_Word CheckResult_157;

        check_hlds__simplify__format_call__check_fmt_str_val_vars_8_p_0(ModuleInfo_15, PredInfo_16, ProcInfo_17, ConjMaps_20, PredMap_21, FormatCallSite_22, FmtStrVal_156, &CheckResult_157);
        if (((MR_tag((MR_Word) CheckResult_157)) == (MR_Integer) 0))
        {
          MR_Word CheckSpecs_142 = ((MR_Word) ((MR_hl_field(0, CheckResult_157, (MR_Integer) 0))));

          *STATE_VARIABLE_Specs_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), CheckSpecs_142, STATE_VARIABLE_Specs_74_74);
          *STATE_VARIABLE_GoalIdMap_69 = STATE_VARIABLE_GoalIdMap_0_68;
          *STATE_VARIABLE_VarTable_73 = STATE_VARIABLE_VarTable_0_72;
        }
        else
        {
          MR_Word FormatSpecs_146 = ((MR_Word) ((MR_hl_field(1, CheckResult_157, (MR_Integer) 0))));
          MR_Word ToDeleteVars_147 = ((MR_Word) ((MR_hl_field(1, CheckResult_157, (MR_Integer) 1))));
          MR_Word ToDeleteGoals_148 = ((MR_Word) ((MR_hl_field(1, CheckResult_157, (MR_Integer) 2))));

          switch (OptFormatCalls_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                *STATE_VARIABLE_GoalIdMap_69 = STATE_VARIABLE_GoalIdMap_0_68;
                *STATE_VARIABLE_VarTable_73 = STATE_VARIABLE_VarTable_0_72;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word FormatSpecsOpt_144;

                check_hlds__simplify__parse_string_format__merge_adjacent_const_strs_2_p_0(FormatSpecs_146, &FormatSpecsOpt_144);
                check_hlds__simplify__format_call__create_replacement_goal_10_p_0(ModuleInfo_15, GoalId_26, Kind_28, FormatSpecsOpt_144, ToDeleteVars_147, ToDeleteGoals_148, STATE_VARIABLE_GoalIdMap_0_68, STATE_VARIABLE_GoalIdMap_69, STATE_VARIABLE_VarTable_0_72, STATE_VARIABLE_VarTable_73);
              }
              break;
          }
          *STATE_VARIABLE_Specs_71 = STATE_VARIABLE_Specs_74_74;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FmtStrVal_37 = ((MR_Word) ((MR_hl_field(2, Kind_28, (MR_Integer) 1))));
        MR_Word CheckResult_54;

        check_hlds__simplify__format_call__check_fmt_str_val_vars_8_p_0(ModuleInfo_15, PredInfo_16, ProcInfo_17, ConjMaps_20, PredMap_21, FormatCallSite_22, FmtStrVal_37, &CheckResult_54);
        if (((MR_tag((MR_Word) CheckResult_54)) == (MR_Integer) 0))
        {
          MR_Word CheckSpecs_59 = ((MR_Word) ((MR_hl_field(0, CheckResult_54, (MR_Integer) 0))));

          *STATE_VARIABLE_Specs_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), CheckSpecs_59, STATE_VARIABLE_Specs_74_74);
          *STATE_VARIABLE_GoalIdMap_69 = STATE_VARIABLE_GoalIdMap_0_68;
          *STATE_VARIABLE_VarTable_73 = STATE_VARIABLE_VarTable_0_72;
        }
        else
        {
          MR_Word FormatSpecs_55 = ((MR_Word) ((MR_hl_field(1, CheckResult_54, (MR_Integer) 0))));
          MR_Word ToDeleteVars_56 = ((MR_Word) ((MR_hl_field(1, CheckResult_54, (MR_Integer) 1))));
          MR_Word ToDeleteGoals_57 = ((MR_Word) ((MR_hl_field(1, CheckResult_54, (MR_Integer) 2))));

          switch (OptFormatCalls_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                *STATE_VARIABLE_GoalIdMap_69 = STATE_VARIABLE_GoalIdMap_0_68;
                *STATE_VARIABLE_VarTable_73 = STATE_VARIABLE_VarTable_0_72;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word FormatSpecsOpt_58;

                check_hlds__simplify__parse_string_format__merge_adjacent_const_strs_2_p_0(FormatSpecs_55, &FormatSpecsOpt_58);
                check_hlds__simplify__format_call__create_replacement_goal_10_p_0(ModuleInfo_15, GoalId_26, Kind_28, FormatSpecsOpt_58, ToDeleteVars_56, ToDeleteGoals_57, STATE_VARIABLE_GoalIdMap_0_68, STATE_VARIABLE_GoalIdMap_69, STATE_VARIABLE_VarTable_0_72, STATE_VARIABLE_VarTable_73);
              }
              break;
          }
          *STATE_VARIABLE_Specs_71 = STATE_VARIABLE_Specs_74_74;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Kind_28, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word FmtStrVal_112 = ((MR_Word) ((MR_hl_field(3, Kind_28, (MR_Integer) 3))));
            MR_Word CheckResult_113;

            check_hlds__simplify__format_call__check_fmt_str_val_vars_8_p_0(ModuleInfo_15, PredInfo_16, ProcInfo_17, ConjMaps_20, PredMap_21, FormatCallSite_22, FmtStrVal_112, &CheckResult_113);
            if (((MR_tag((MR_Word) CheckResult_113)) == (MR_Integer) 0))
            {
              MR_Word CheckSpecs_98 = ((MR_Word) ((MR_hl_field(0, CheckResult_113, (MR_Integer) 0))));

              *STATE_VARIABLE_Specs_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), CheckSpecs_98, STATE_VARIABLE_Specs_74_74);
              *STATE_VARIABLE_GoalIdMap_69 = STATE_VARIABLE_GoalIdMap_0_68;
              *STATE_VARIABLE_VarTable_73 = STATE_VARIABLE_VarTable_0_72;
            }
            else
            {
              MR_Word FormatSpecs_102 = ((MR_Word) ((MR_hl_field(1, CheckResult_113, (MR_Integer) 0))));
              MR_Word ToDeleteVars_103 = ((MR_Word) ((MR_hl_field(1, CheckResult_113, (MR_Integer) 1))));
              MR_Word ToDeleteGoals_104 = ((MR_Word) ((MR_hl_field(1, CheckResult_113, (MR_Integer) 2))));

              switch (OptFormatCalls_19) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    *STATE_VARIABLE_GoalIdMap_69 = STATE_VARIABLE_GoalIdMap_0_68;
                    *STATE_VARIABLE_VarTable_73 = STATE_VARIABLE_VarTable_0_72;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word FormatSpecsOpt_100;

                    check_hlds__simplify__parse_string_format__merge_adjacent_const_strs_2_p_0(FormatSpecs_102, &FormatSpecsOpt_100);
                    check_hlds__simplify__format_call__create_replacement_goal_10_p_0(ModuleInfo_15, GoalId_26, Kind_28, FormatSpecsOpt_100, ToDeleteVars_103, ToDeleteGoals_104, STATE_VARIABLE_GoalIdMap_0_68, STATE_VARIABLE_GoalIdMap_69, STATE_VARIABLE_VarTable_0_72, STATE_VARIABLE_VarTable_73);
                  }
                  break;
              }
              *STATE_VARIABLE_Specs_71 = STATE_VARIABLE_Specs_74_74;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word FmtStrVal_134 = ((MR_Word) ((MR_hl_field(3, Kind_28, (MR_Integer) 4))));
            MR_Word CheckResult_135;

            check_hlds__simplify__format_call__check_fmt_str_val_vars_8_p_0(ModuleInfo_15, PredInfo_16, ProcInfo_17, ConjMaps_20, PredMap_21, FormatCallSite_22, FmtStrVal_134, &CheckResult_135);
            if (((MR_tag((MR_Word) CheckResult_135)) == (MR_Integer) 0))
            {
              MR_Word CheckSpecs_120 = ((MR_Word) ((MR_hl_field(0, CheckResult_135, (MR_Integer) 0))));

              *STATE_VARIABLE_Specs_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), CheckSpecs_120, STATE_VARIABLE_Specs_74_74);
              *STATE_VARIABLE_GoalIdMap_69 = STATE_VARIABLE_GoalIdMap_0_68;
              *STATE_VARIABLE_VarTable_73 = STATE_VARIABLE_VarTable_0_72;
            }
            else
            {
              MR_Word FormatSpecs_124 = ((MR_Word) ((MR_hl_field(1, CheckResult_135, (MR_Integer) 0))));
              MR_Word ToDeleteVars_125 = ((MR_Word) ((MR_hl_field(1, CheckResult_135, (MR_Integer) 1))));
              MR_Word ToDeleteGoals_126 = ((MR_Word) ((MR_hl_field(1, CheckResult_135, (MR_Integer) 2))));

              switch (OptFormatCalls_19) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    *STATE_VARIABLE_GoalIdMap_69 = STATE_VARIABLE_GoalIdMap_0_68;
                    *STATE_VARIABLE_VarTable_73 = STATE_VARIABLE_VarTable_0_72;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word FormatSpecsOpt_122;

                    check_hlds__simplify__parse_string_format__merge_adjacent_const_strs_2_p_0(FormatSpecs_124, &FormatSpecsOpt_122);
                    check_hlds__simplify__format_call__create_replacement_goal_10_p_0(ModuleInfo_15, GoalId_26, Kind_28, FormatSpecsOpt_122, ToDeleteVars_125, ToDeleteGoals_126, STATE_VARIABLE_GoalIdMap_0_68, STATE_VARIABLE_GoalIdMap_69, STATE_VARIABLE_VarTable_0_72, STATE_VARIABLE_VarTable_73);
                  }
                  break;
              }
              *STATE_VARIABLE_Specs_71 = STATE_VARIABLE_Specs_74_74;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word OoMFmtStrVars_61 = ((MR_Word) ((MR_hl_field(3, Kind_28, (MR_Integer) 2))));
            MR_Word HeadFmtStrVal_62 = ((MR_Word) ((MR_hl_field(0, OoMFmtStrVars_61, (MR_Integer) 0))));
            MR_Word TailFmtStrVals_63 = ((MR_Word) ((MR_hl_field(0, OoMFmtStrVars_61, (MR_Integer) 1))));
            MR_Word HeadCheckResult_64;
            MR_Word TailCheckResults_65;
            MR_Word HeadCheckSpecs_66;
            MR_Word TailCheckSpecLists_67;
            MR_Word Var_78;
            MR_Word Var_80;
            MR_Word CheckSpecs_82;

            check_hlds__simplify__format_call__check_fmt_str_val_vars_8_p_0(ModuleInfo_15, PredInfo_16, ProcInfo_17, ConjMaps_20, PredMap_21, FormatCallSite_22, HeadFmtStrVal_62, &HeadCheckResult_64);
            {
              Var_78 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_78, 0) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_10[0]));
              MR_hl_field(0, Var_78, 1) = ((MR_Box) (check_hlds__simplify__format_call__check_format_call_site_14_p_0_1));
              MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 6));
              MR_hl_field(0, Var_78, 3) = ((MR_Box) (ModuleInfo_15));
              MR_hl_field(0, Var_78, 4) = ((MR_Box) (PredInfo_16));
              MR_hl_field(0, Var_78, 5) = ((MR_Box) (ProcInfo_17));
              MR_hl_field(0, Var_78, 6) = ((MR_Box) (ConjMaps_20));
              MR_hl_field(0, Var_78, 7) = ((MR_Box) (PredMap_21));
              MR_hl_field(0, Var_78, 8) = ((MR_Box) (FormatCallSite_22));
            }
            mercury__list__map_3_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fmt_str_val_vars_0), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_3[0]), Var_78, TailFmtStrVals_63, &TailCheckResults_65);
            HeadCheckSpecs_66 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[3]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[4]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[5]), HeadCheckResult_64);
            TailCheckSpecLists_67 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_3[0]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[0]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[9]), TailCheckResults_65);
            Var_80 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TailCheckSpecLists_67);
            CheckSpecs_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), HeadCheckSpecs_66, Var_80);
            *STATE_VARIABLE_Specs_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), CheckSpecs_82, STATE_VARIABLE_Specs_74_74);
            *STATE_VARIABLE_GoalIdMap_69 = STATE_VARIABLE_GoalIdMap_0_68;
            *STATE_VARIABLE_VarTable_73 = STATE_VARIABLE_VarTable_0_72;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__create_replacement_goal_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word GoalId_12,
  MR_Word CallKind_13,
  MR_Word Specs_14,
  MR_Word ToDeleteVars_15,
  MR_Word ToDeleteGoals_16,
  MR_Word STATE_VARIABLE_GoalIdMap_0_29,
  MR_Word * STATE_VARIABLE_GoalIdMap_30,
  MR_Word STATE_VARIABLE_VarTable_0_31,
  MR_Word * STATE_VARIABLE_VarTable_32)
{
  MR_bool succeeded;
  MR_Word ReplacementGoal_22;
  MR_Word FCOptGoalInfo_28;
  MR_Word Var_36;
  MR_Word Var_37;

  switch (MR_tag((MR_Word) CallKind_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Context_19 = ((MR_Word) ((MR_hl_field(0, CallKind_13, (MR_Integer) 0))));
        MR_Word ResultVar_21 = ((MR_Word) ((MR_hl_field(0, CallKind_13, (MR_Integer) 2))));
        MR_Word ActualResultVar_65;
        MR_Word Goals_66;
        MR_Word ValueVars_67;
        MR_Word AllGoals_68;
        MR_Word NonLocals_70;
        MR_Word InstMapDelta_71;
        MR_Word GoalInfo_72;
        MR_Word Var_73;
        MR_Word STATE_VARIABLE_ValueVars_24_87;

        {
          Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_73, 0) = ((MR_Box) (ResultVar_21));
        }
        parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_ValueVars_24_87);
        if ((Specs_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Goal_84;

          ActualResultVar_65 = ((MR_Word) ((MR_hl_field(1, Var_73, (MR_Integer) 0))));
          *STATE_VARIABLE_VarTable_32 = STATE_VARIABLE_VarTable_0_31;
          hlds__make_goal__make_string_const_construction_4_p_0(Context_19, ActualResultVar_65, (MR_String) "", &Goal_84);
          {
            Goals_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Goals_66, 0) = ((MR_Box) (Goal_84));
            MR_hl_field(1, Goals_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ValueVars_67 = STATE_VARIABLE_ValueVars_24_87;
        }
        else
        {
          MR_Word HeadSpec_85 = ((MR_Word) ((MR_hl_field(1, Specs_14, (MR_Integer) 0))));
          MR_Word TailSpecs_86 = ((MR_Word) ((MR_hl_field(1, Specs_14, (MR_Integer) 1))));

          check_hlds__simplify__format_call__replace_string_format_nonempty_11_p_0(ModuleInfo_11, HeadSpec_85, TailSpecs_86, Context_19, Var_73, &ActualResultVar_65, &Goals_66, STATE_VARIABLE_ValueVars_24_87, &ValueVars_67, STATE_VARIABLE_VarTable_0_31, STATE_VARIABLE_VarTable_32);
        }
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), ((MR_Box) (ActualResultVar_65)), ((MR_Box) (ResultVar_21)));
        if (succeeded)
          AllGoals_68 = Goals_66;
        else
        {
          MR_Word AssignGoal_69;
          MR_Word Var_77;

          hlds__make_goal__make_simple_assign_5_p_0(ResultVar_21, ActualResultVar_65, (MR_Word) (MR_mkword(3, &check_hlds__simplify__format_call_scalar_common_4[0])), (MR_Word) ((MR_Unsigned) 0U), &AssignGoal_69);
          {
            Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_77, 0) = ((MR_Box) (AssignGoal_69));
            MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          AllGoals_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals_66, Var_77);
        }
        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResultVar_21, ValueVars_67, &NonLocals_70);
        InstMapDelta_71 = hlds__instmap__instmap_delta_bind_var_1_f_0(ResultVar_21);
        hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_70, InstMapDelta_71, (MR_Integer) 0, (MR_Integer) 0, Context_19, &GoalInfo_72);
        hlds__hlds_goal__conj_list_to_goal_3_p_0(AllGoals_68, GoalInfo_72, &ReplacementGoal_22);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word StateInVar_61 = ((MR_Word) ((MR_hl_field(1, CallKind_13, (MR_Integer) 2))));
        MR_Word StateOutVar_62 = ((MR_Word) ((MR_hl_field(1, CallKind_13, (MR_Integer) 3))));
        MR_Word Context_64 = ((MR_Word) ((MR_hl_field(1, CallKind_13, (MR_Integer) 0))));

        check_hlds__simplify__format_call__create_state_update_replacement_9_p_0(ModuleInfo_11, Specs_14, Context_64, (MR_Word) ((MR_Unsigned) 4U), StateInVar_61, StateOutVar_62, &ReplacementGoal_22, STATE_VARIABLE_VarTable_0_31, STATE_VARIABLE_VarTable_32);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word StateInVar_23 = ((MR_Word) ((MR_hl_field(2, CallKind_13, (MR_Integer) 2))));
        MR_Word StateOutVar_24 = ((MR_Word) ((MR_hl_field(2, CallKind_13, (MR_Integer) 3))));
        MR_Word Context_46 = ((MR_Word) ((MR_hl_field(2, CallKind_13, (MR_Integer) 0))));

        check_hlds__simplify__format_call__create_state_update_replacement_9_p_0(ModuleInfo_11, Specs_14, Context_46, (MR_Word) ((MR_Unsigned) 0U), StateInVar_23, StateOutVar_24, &ReplacementGoal_22, STATE_VARIABLE_VarTable_0_31, STATE_VARIABLE_VarTable_32);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, CallKind_13, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word StreamVar_26 = ((MR_Word) ((MR_hl_field(3, CallKind_13, (MR_Integer) 2))));
            MR_Word StateInVar_57 = ((MR_Word) ((MR_hl_field(3, CallKind_13, (MR_Integer) 4))));
            MR_Word StateOutVar_58 = ((MR_Word) ((MR_hl_field(3, CallKind_13, (MR_Integer) 5))));
            MR_Word StateUpdate_59;
            MR_Word Context_60 = ((MR_Word) ((MR_hl_field(3, CallKind_13, (MR_Integer) 1))));

            {
              StateUpdate_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, StateUpdate_59, 0) = ((MR_Box) (StreamVar_26));
            }
            check_hlds__simplify__format_call__create_state_update_replacement_9_p_0(ModuleInfo_11, Specs_14, Context_60, StateUpdate_59, StateInVar_57, StateOutVar_58, &ReplacementGoal_22, STATE_VARIABLE_VarTable_0_31, STATE_VARIABLE_VarTable_32);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeClassInfoVarForStream_27 = ((MR_Word) ((MR_hl_field(3, CallKind_13, (MR_Integer) 2))));
            MR_Word Context_49 = ((MR_Word) ((MR_hl_field(3, CallKind_13, (MR_Integer) 1))));
            MR_Word StateInVar_51 = ((MR_Word) ((MR_hl_field(3, CallKind_13, (MR_Integer) 5))));
            MR_Word StateOutVar_52 = ((MR_Word) ((MR_hl_field(3, CallKind_13, (MR_Integer) 6))));
            MR_Word StreamVar_53 = ((MR_Word) ((MR_hl_field(3, CallKind_13, (MR_Integer) 3))));

            check_hlds__simplify__format_call__create_stream_string_writer_format_replacement_10_p_0(ModuleInfo_11, Specs_14, Context_49, TypeClassInfoVarForStream_27, StreamVar_53, StateInVar_51, StateOutVar_52, &ReplacementGoal_22, STATE_VARIABLE_VarTable_0_31, STATE_VARIABLE_VarTable_32);
          }
          break;
      }
      break;
  }
  Var_36 = mercury__list__sort_1_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), ToDeleteVars_15);
  Var_37 = mercury__list__sort_1_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), ToDeleteGoals_16);
  {
    FCOptGoalInfo_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FCOptGoalInfo_28, 0) = ((MR_Box) (ReplacementGoal_22));
    MR_hl_field(0, FCOptGoalInfo_28, 1) = ((MR_Box) (Var_36));
    MR_hl_field(0, FCOptGoalInfo_28, 2) = ((MR_Box) (Var_37));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0), ((MR_Box) (GoalId_12)), ((MR_Box) (FCOptGoalInfo_28)), STATE_VARIABLE_GoalIdMap_0_29, STATE_VARIABLE_GoalIdMap_30);
}

static void MR_CALL 
check_hlds__simplify__format_call__create_stream_string_writer_format_replacement_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Specs_12,
  MR_Word Context_13,
  MR_Word TC_InfoVarForStream_14,
  MR_Word StreamVar_15,
  MR_Word StateInVar_16,
  MR_Word StateOutVar_17,
  MR_Word * ReplacementGoal_18,
  MR_Word STATE_VARIABLE_VarTable_0_28,
  MR_Word * STATE_VARIABLE_VarTable_29)
{
  MR_Word ResultVar_20;
  MR_Word StringFormatGoals_21;
  MR_Word ValueVars_22;
  MR_Word InstMapDelta_23;
  MR_Word CallGoal_24;
  MR_Word Goals_25;
  MR_Word NonLocals_26;
  MR_Word GoalInfo_27;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word STATE_VARIABLE_ValueVars_24_62;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_79;

  parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_ValueVars_24_62);
  if ((Specs_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Goal_59;
    MR_Word Entry_66;
    MR_Word Var_68;

    Var_68 = parse_tree__builtin_lib_types__string_type_0_f_0();
    {
      Entry_66 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_66, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(0, Entry_66, 1) = ((MR_Box) (Var_68));
      MR_hl_field(0, Entry_66, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    parse_tree__var_table__add_var_entry_4_p_0(Entry_66, &ResultVar_20, STATE_VARIABLE_VarTable_0_28, STATE_VARIABLE_VarTable_29);
    hlds__make_goal__make_string_const_construction_4_p_0(Context_13, ResultVar_20, (MR_String) "", &Goal_59);
    {
      StringFormatGoals_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, StringFormatGoals_21, 0) = ((MR_Box) (Goal_59));
      MR_hl_field(1, StringFormatGoals_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ValueVars_22 = STATE_VARIABLE_ValueVars_24_62;
  }
  else
  {
    MR_Word HeadSpec_60 = ((MR_Word) ((MR_hl_field(1, Specs_12, (MR_Integer) 0))));
    MR_Word TailSpecs_61 = ((MR_Word) ((MR_hl_field(1, Specs_12, (MR_Integer) 1))));

    check_hlds__simplify__format_call__replace_string_format_nonempty_11_p_0(ModuleInfo_11, HeadSpec_60, TailSpecs_61, Context_13, (MR_Word) ((MR_Unsigned) 0U), &ResultVar_20, &StringFormatGoals_21, STATE_VARIABLE_ValueVars_24_62, &ValueVars_22, STATE_VARIABLE_VarTable_0_28, STATE_VARIABLE_VarTable_29);
  }
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_77, 0) = ((MR_Box) (StateInVar_16));
    MR_hl_field(0, Var_77, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_scalar_common_2[12])));
  }
  {
    Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_79, 0) = ((MR_Box) (StateOutVar_17));
    MR_hl_field(0, Var_79, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_scalar_common_2[11])));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_78));
  }
  InstMapDelta_23 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_76);
  Var_33 = mdbcomp__builtin_modules__mercury_stream_module_0_f_0();
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (TC_InfoVarForStream_14));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (StateOutVar_17));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (StateInVar_16));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_44));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (ResultVar_20));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_43));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (StreamVar_15));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_42));
  }
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_11, (MR_Integer) 0, Var_33, (MR_String) "put", Var_35, Var_36, InstMapDelta_23, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_scalar_common_2[14])), Context_13, &CallGoal_24);
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (CallGoal_24));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Goals_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), StringFormatGoals_21, Var_48);
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (StreamVar_15));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_43));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (TC_InfoVarForStream_14));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_51));
  }
  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_50, ValueVars_22, &NonLocals_26);
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_26, InstMapDelta_23, (MR_Integer) 0, (MR_Integer) 0, Context_13, &GoalInfo_27);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_25, GoalInfo_27, ReplacementGoal_18);
}

static void MR_CALL 
check_hlds__simplify__format_call__create_state_update_replacement_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Specs_11,
  MR_Word Context_12,
  MR_Word StateFormat_13,
  MR_Word StateInVar_14,
  MR_Word StateOutVar_15,
  MR_Word * ReplacementGoal_16,
  MR_Word STATE_VARIABLE_VarTable_0_23,
  MR_Word * STATE_VARIABLE_VarTable_24)
{
  MR_Word Goals_18;
  MR_Word ValueVars_19;
  MR_Word InstMapDelta_20;
  MR_Word NonLocals_21;
  MR_Word GoalInfo_22;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word STATE_VARIABLE_ValueVars_33_44;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;

  parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &STATE_VARIABLE_ValueVars_33_44);
  if ((Specs_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Unification_32;
    MR_Word GoalExpr_38;
    MR_Word InstMapDelta_39;
    MR_Word GoalInfo_40;
    MR_Word Goal_41;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;

    {
      Unification_32 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Unification_32, 0) = ((MR_Box) (StateOutVar_15));
      MR_hl_field(2, Unification_32, 1) = ((MR_Box) (StateInVar_14));
    }
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_53, 0) = ((MR_Box) (StateInVar_14));
    }
    {
      GoalExpr_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GoalExpr_38, 0) = ((MR_Box) (StateOutVar_15));
      MR_hl_field(1, GoalExpr_38, 1) = ((MR_Box) (Var_53));
      MR_hl_field(1, GoalExpr_38, 2) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_9[0]));
      MR_hl_field(1, GoalExpr_38, 3) = ((MR_Box) (Unification_32));
      MR_hl_field(1, GoalExpr_38, 4) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[13]));
    }
    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_69, 0) = ((MR_Box) (StateInVar_14));
      MR_hl_field(0, Var_69, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_scalar_common_2[12])));
    }
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_71, 0) = ((MR_Box) (StateOutVar_15));
      MR_hl_field(0, Var_71, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_scalar_common_2[11])));
    }
    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
      MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_70));
    }
    InstMapDelta_39 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_68);
    {
      Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_58, 0) = ((MR_Box) (StateOutVar_15));
      MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (StateInVar_14));
      MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_58));
    }
    Var_54 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_57);
    hlds__hlds_goal__goal_info_init_5_p_0(Var_54, InstMapDelta_39, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_40);
    {
      Goal_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_41, 0) = ((MR_Box) (GoalExpr_38));
      MR_hl_field(0, Goal_41, 1) = ((MR_Box) (GoalInfo_40));
    }
    {
      Goals_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Goals_18, 0) = ((MR_Box) (Goal_41));
      MR_hl_field(1, Goals_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ValueVars_19 = STATE_VARIABLE_ValueVars_33_44;
    *STATE_VARIABLE_VarTable_24 = STATE_VARIABLE_VarTable_0_23;
  }
  else
  {
    MR_Word HeadSpec_42 = ((MR_Word) ((MR_hl_field(1, Specs_11, (MR_Integer) 0))));
    MR_Word TailSpecs_43 = ((MR_Word) ((MR_hl_field(1, Specs_11, (MR_Integer) 1))));

    check_hlds__simplify__format_call__replace_state_format_nonempty_11_p_0(ModuleInfo_10, HeadSpec_42, TailSpecs_43, StateFormat_13, StateInVar_14, StateOutVar_15, &Goals_18, STATE_VARIABLE_ValueVars_33_44, &ValueVars_19, STATE_VARIABLE_VarTable_0_23, STATE_VARIABLE_VarTable_24);
  }
  {
    Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_80, 0) = ((MR_Box) (StateInVar_14));
    MR_hl_field(0, Var_80, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_scalar_common_2[12])));
  }
  {
    Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_82, 0) = ((MR_Box) (StateOutVar_15));
    MR_hl_field(0, Var_82, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_scalar_common_2[11])));
  }
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
    MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_81));
  }
  InstMapDelta_20 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_79);
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (StateOutVar_15));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (StateInVar_14));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_27));
  }
  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_26, ValueVars_19, &NonLocals_21);
  hlds__hlds_goal__goal_info_init_6_p_0(NonLocals_21, InstMapDelta_20, (MR_Integer) 0, (MR_Integer) 0, Context_12, &GoalInfo_22);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_18, GoalInfo_22, ReplacementGoal_16);
}

static void MR_CALL 
check_hlds__simplify__format_call__replace_state_format_nonempty_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word HeadSpec_13,
  MR_Word TailSpecs_14,
  MR_Word StateFormat_15,
  MR_Word StateInVar_16,
  MR_Word StateOutVar_17,
  MR_Word * Goals_18,
  MR_Word STATE_VARIABLE_ValueVars_0_28,
  MR_Word * STATE_VARIABLE_ValueVars_29,
  MR_Word STATE_VARIABLE_VarTable_0_30,
  MR_Word * STATE_VARIABLE_VarTable_31)
{
  if ((TailSpecs_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word SpecVar_44;
    MR_Word SpecGoals_45;
    MR_Word SpecContext_46;
    MR_Word InstMapDelta_47;
    MR_Word ArgVars_48;
    MR_Word CallGoal_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_74;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;

    check_hlds__simplify__format_call__represent_spec_10_p_0(ModuleInfo_12, HeadSpec_13, (MR_Word) ((MR_Unsigned) 0U), &SpecVar_44, &SpecGoals_45, &SpecContext_46, STATE_VARIABLE_ValueVars_0_28, STATE_VARIABLE_ValueVars_29, STATE_VARIABLE_VarTable_0_30, STATE_VARIABLE_VarTable_31);
    {
      Var_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_95, 0) = ((MR_Box) (StateInVar_16));
      MR_hl_field(0, Var_95, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_scalar_common_2[12])));
    }
    {
      Var_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_97, 0) = ((MR_Box) (StateOutVar_17));
      MR_hl_field(0, Var_97, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_scalar_common_2[11])));
    }
    {
      Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_97));
      MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
      MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_96));
    }
    InstMapDelta_47 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_94);
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (StateOutVar_17));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (StateInVar_16));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
    }
    {
      ArgVars_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ArgVars_48, 0) = ((MR_Box) (SpecVar_44));
      MR_hl_field(1, ArgVars_48, 1) = ((MR_Box) (Var_53));
    }
    switch (MR_tag((MR_Word) StateFormat_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(StateFormat_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_57;

              Var_57 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
              hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_12, (MR_Integer) 0, Var_57, (MR_String) "write_string", (MR_Word) ((MR_Unsigned) 0U), ArgVars_48, InstMapDelta_47, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_scalar_common_2[14])), SpecContext_46, &CallGoal_51);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_67;

              Var_67 = mdbcomp__builtin_modules__mercury_string_builder_module_0_f_0();
              hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_12, (MR_Integer) 0, Var_67, (MR_String) "append_string", (MR_Word) ((MR_Unsigned) 0U), ArgVars_48, InstMapDelta_47, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), SpecContext_46, &CallGoal_51);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word StreamVar_49 = ((MR_Word) ((MR_hl_field(1, StateFormat_15, (MR_Integer) 0))));
          MR_Word ArgVarsIO_77;
          MR_Word Var_79;

          {
            ArgVarsIO_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, ArgVarsIO_77, 0) = ((MR_Box) (StreamVar_49));
            MR_hl_field(1, ArgVarsIO_77, 1) = ((MR_Box) (ArgVars_48));
          }
          Var_79 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
          hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_12, (MR_Integer) 0, Var_79, (MR_String) "write_string", (MR_Word) ((MR_Unsigned) 0U), ArgVarsIO_77, InstMapDelta_47, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_scalar_common_2[14])), SpecContext_46, &CallGoal_51);
        }
        break;
    }
    {
      Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_74, 0) = ((MR_Box) (CallGoal_51));
      MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *Goals_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SpecGoals_45, Var_74);
  }
  else
  {
    MR_Word FirstTailSpec_21 = ((MR_Word) ((MR_hl_field(1, TailSpecs_14, (MR_Integer) 0))));
    MR_Word LaterTailSpecs_22 = ((MR_Word) ((MR_hl_field(1, TailSpecs_14, (MR_Integer) 1))));
    MR_Word StateMidVarEntry_24;
    MR_Word StateMidVar_25;
    MR_Word HeadSpecGoals_26;
    MR_Word TailSpecsGoals_27;
    MR_Word STATE_VARIABLE_VarTable_40_40;
    MR_Word STATE_VARIABLE_ValueVars_41_41;
    MR_Word STATE_VARIABLE_VarTable_42_42;

    switch (MR_tag((MR_Word) StateFormat_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(StateFormat_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_35;

              Var_35 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
              {
                StateMidVarEntry_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, StateMidVarEntry_24, 0) = ((MR_Box) ((MR_String) ""));
                MR_hl_field(0, StateMidVarEntry_24, 1) = ((MR_Box) (Var_35));
                MR_hl_field(0, StateMidVarEntry_24, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_38;

              Var_38 = parse_tree__builtin_lib_types__string_builder_state_type_0_f_0();
              {
                StateMidVarEntry_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, StateMidVarEntry_24, 0) = ((MR_Box) ((MR_String) ""));
                MR_hl_field(0, StateMidVarEntry_24, 1) = ((MR_Box) (Var_38));
                MR_hl_field(0, StateMidVarEntry_24, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_35;

          Var_35 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          {
            StateMidVarEntry_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, StateMidVarEntry_24, 0) = ((MR_Box) ((MR_String) ""));
            MR_hl_field(0, StateMidVarEntry_24, 1) = ((MR_Box) (Var_35));
            MR_hl_field(0, StateMidVarEntry_24, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
        }
        break;
    }
    parse_tree__var_table__add_var_entry_4_p_0(StateMidVarEntry_24, &StateMidVar_25, STATE_VARIABLE_VarTable_0_30, &STATE_VARIABLE_VarTable_40_40);
    check_hlds__simplify__format_call__replace_one_state_format_10_p_0(ModuleInfo_12, HeadSpec_13, StateFormat_15, StateInVar_16, StateMidVar_25, &HeadSpecGoals_26, STATE_VARIABLE_ValueVars_0_28, &STATE_VARIABLE_ValueVars_41_41, STATE_VARIABLE_VarTable_40_40, &STATE_VARIABLE_VarTable_42_42);
    check_hlds__simplify__format_call__replace_state_format_nonempty_11_p_0(ModuleInfo_12, FirstTailSpec_21, LaterTailSpecs_22, StateFormat_15, StateMidVar_25, StateOutVar_17, &TailSpecsGoals_27, STATE_VARIABLE_ValueVars_41_41, STATE_VARIABLE_ValueVars_29, STATE_VARIABLE_VarTable_42_42, STATE_VARIABLE_VarTable_31);
    *Goals_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadSpecGoals_26, TailSpecsGoals_27);
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__replace_one_state_format_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Spec_12,
  MR_Word StateFormat_13,
  MR_Word StateInVar_14,
  MR_Word StateOutVar_15,
  MR_Word * Goals_16,
  MR_Word STATE_VARIABLE_ValueVars_0_27,
  MR_Word * STATE_VARIABLE_ValueVars_28,
  MR_Word STATE_VARIABLE_VarTable_0_29,
  MR_Word * STATE_VARIABLE_VarTable_30)
{
  MR_Word SpecVar_19;
  MR_Word SpecGoals_20;
  MR_Word SpecContext_21;
  MR_Word InstMapDelta_22;
  MR_Word ArgVars_23;
  MR_Word CallGoal_26;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_55;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;

  check_hlds__simplify__format_call__represent_spec_10_p_0(ModuleInfo_11, Spec_12, (MR_Word) ((MR_Unsigned) 0U), &SpecVar_19, &SpecGoals_20, &SpecContext_21, STATE_VARIABLE_ValueVars_0_27, STATE_VARIABLE_ValueVars_28, STATE_VARIABLE_VarTable_0_29, STATE_VARIABLE_VarTable_30);
  {
    Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_76, 0) = ((MR_Box) (StateInVar_14));
    MR_hl_field(0, Var_76, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_scalar_common_2[12])));
  }
  {
    Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_78, 0) = ((MR_Box) (StateOutVar_15));
    MR_hl_field(0, Var_78, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_scalar_common_2[11])));
  }
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_77));
  }
  InstMapDelta_22 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_75);
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (StateOutVar_15));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (StateInVar_14));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_35));
  }
  {
    ArgVars_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArgVars_23, 0) = ((MR_Box) (SpecVar_19));
    MR_hl_field(1, ArgVars_23, 1) = ((MR_Box) (Var_34));
  }
  switch (MR_tag((MR_Word) StateFormat_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(StateFormat_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_38;

            Var_38 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
            hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_11, (MR_Integer) 0, Var_38, (MR_String) "write_string", (MR_Word) ((MR_Unsigned) 0U), ArgVars_23, InstMapDelta_22, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_scalar_common_2[14])), SpecContext_21, &CallGoal_26);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_48;

            Var_48 = mdbcomp__builtin_modules__mercury_string_builder_module_0_f_0();
            hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_11, (MR_Integer) 0, Var_48, (MR_String) "append_string", (MR_Word) ((MR_Unsigned) 0U), ArgVars_23, InstMapDelta_22, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), SpecContext_21, &CallGoal_26);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word StreamVar_24 = ((MR_Word) ((MR_hl_field(1, StateFormat_13, (MR_Integer) 0))));
        MR_Word ArgVarsIO_58;
        MR_Word Var_60;

        {
          ArgVarsIO_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ArgVarsIO_58, 0) = ((MR_Box) (StreamVar_24));
          MR_hl_field(1, ArgVarsIO_58, 1) = ((MR_Box) (ArgVars_23));
        }
        Var_60 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_11, (MR_Integer) 0, Var_60, (MR_String) "write_string", (MR_Word) ((MR_Unsigned) 0U), ArgVarsIO_58, InstMapDelta_22, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__simplify__format_call_scalar_common_2[14])), SpecContext_21, &CallGoal_26);
      }
      break;
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (CallGoal_26));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  *Goals_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), SpecGoals_20, Var_55);
}

static void MR_CALL 
check_hlds__simplify__format_call__replace_string_format_nonempty_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word HeadSpec_13,
  MR_Word TailSpecs_14,
  MR_Word Context_15,
  MR_Word MaybeResultVar_16,
  MR_Word * ResultVar_17,
  MR_Word * Goals_18,
  MR_Word STATE_VARIABLE_ValueVars_0_29,
  MR_Word * STATE_VARIABLE_ValueVars_30,
  MR_Word STATE_VARIABLE_VarTable_0_31,
  MR_Word * STATE_VARIABLE_VarTable_32)
{
  if ((TailSpecs_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word _HeadSpecContext_21;

    check_hlds__simplify__format_call__represent_spec_10_p_0(ModuleInfo_12, HeadSpec_13, MaybeResultVar_16, ResultVar_17, Goals_18, &_HeadSpecContext_21, STATE_VARIABLE_ValueVars_0_29, STATE_VARIABLE_ValueVars_30, STATE_VARIABLE_VarTable_0_31, STATE_VARIABLE_VarTable_32);
  }
  else
  {
    MR_Word FirstTailSpec_22 = ((MR_Word) ((MR_hl_field(1, TailSpecs_14, (MR_Integer) 0))));
    MR_Word LaterTailSpecs_23 = ((MR_Word) ((MR_hl_field(1, TailSpecs_14, (MR_Integer) 1))));
    MR_Word TailSpecsVar_24;
    MR_Word TailSpecsGoals_25;
    MR_Word HeadSpecVar_26;
    MR_Word HeadSpecGoals_27;
    MR_Word AppendGoal_28;
    MR_Word STATE_VARIABLE_ValueVars_36_36;
    MR_Word STATE_VARIABLE_VarTable_37_37;
    MR_Word STATE_VARIABLE_VarTable_40_40;
    MR_Word Var_43;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word _HeadSpecContext_64;

    check_hlds__simplify__format_call__replace_string_format_nonempty_11_p_0(ModuleInfo_12, FirstTailSpec_22, LaterTailSpecs_23, Context_15, (MR_Word) ((MR_Unsigned) 0U), &TailSpecsVar_24, &TailSpecsGoals_25, STATE_VARIABLE_ValueVars_0_29, &STATE_VARIABLE_ValueVars_36_36, STATE_VARIABLE_VarTable_0_31, &STATE_VARIABLE_VarTable_37_37);
    check_hlds__simplify__format_call__represent_spec_10_p_0(ModuleInfo_12, HeadSpec_13, (MR_Word) ((MR_Unsigned) 0U), &HeadSpecVar_26, &HeadSpecGoals_27, &_HeadSpecContext_64, STATE_VARIABLE_ValueVars_36_36, STATE_VARIABLE_ValueVars_30, STATE_VARIABLE_VarTable_37_37, &STATE_VARIABLE_VarTable_40_40);
    if ((MaybeResultVar_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Entry_66;
      MR_Word Var_68;

      Var_68 = parse_tree__builtin_lib_types__string_type_0_f_0();
      {
        Entry_66 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Entry_66, 0) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(0, Entry_66, 1) = ((MR_Box) (Var_68));
        MR_hl_field(0, Entry_66, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      }
      parse_tree__var_table__add_var_entry_4_p_0(Entry_66, ResultVar_17, STATE_VARIABLE_VarTable_40_40, STATE_VARIABLE_VarTable_32);
    }
    else
    {
      *ResultVar_17 = ((MR_Word) ((MR_hl_field(1, MaybeResultVar_16, (MR_Integer) 0))));
      *STATE_VARIABLE_VarTable_32 = STATE_VARIABLE_VarTable_40_40;
    }
    Var_43 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (*ResultVar_17));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (TailSpecsVar_24));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (HeadSpecVar_26));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_52));
    }
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_56, 0) = ((MR_Box) (*ResultVar_17));
      MR_hl_field(0, Var_56, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__simplify__format_call_scalar_common_2[11])));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_47 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_55);
    hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_12, (MR_Integer) 1, Var_43, (MR_String) "++", (MR_Word) ((MR_Unsigned) 0U), Var_46, Var_47, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_15, &AppendGoal_28);
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) (AppendGoal_28));
      MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadSpecGoals_27, Var_62);
    *Goals_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), TailSpecsGoals_25, Var_61);
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__represent_spec_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Spec_12,
  MR_Word MaybeResultVar_13,
  MR_Word * ResultVar_14,
  MR_Word * Goals_15,
  MR_Word * Context_16,
  MR_Word STATE_VARIABLE_ValueVars_0_46,
  MR_Word * STATE_VARIABLE_ValueVars_47,
  MR_Word STATE_VARIABLE_VarTable_0_48,
  MR_Word * STATE_VARIABLE_VarTable_49)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Spec_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String StringConstant_19;
        MR_Word Goal_20;

        *Context_16 = ((MR_Word) ((MR_hl_field(0, Spec_12, (MR_Integer) 0))));
        StringConstant_19 = ((MR_String) ((MR_hl_field(0, Spec_12, (MR_Integer) 1))));
        check_hlds__simplify__format_call__make_result_var_if_needed_4_p_0(MaybeResultVar_13, ResultVar_14, STATE_VARIABLE_VarTable_0_48, STATE_VARIABLE_VarTable_49);
        hlds__make_goal__make_string_const_construction_4_p_0(*Context_16, *ResultVar_14, StringConstant_19, &Goal_20);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Goals_15 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal_20));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *STATE_VARIABLE_ValueVars_47 = STATE_VARIABLE_ValueVars_0_46;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Flags_21;
        MR_Word MaybeWidth_22;
        MR_Word ValueVar_23;
        MR_Word FlagsVar_24;
        MR_Word FlagsGoals_25;
        MR_String WidthSuffix_26;
        MR_Word WidthVars_27;
        MR_Word WidthGoals_28;
        MR_Word CallGoal_29;
        MR_Word STATE_VARIABLE_VarTable_53_53;
        MR_Word STATE_VARIABLE_VarTable_54_54;
        MR_Word Var_57;
        MR_String Var_58;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_67;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_73;
        MR_Word Var_74;

        *Context_16 = ((MR_Word) ((MR_hl_field(1, Spec_12, (MR_Integer) 0))));
        Flags_21 = ((MR_Word) ((MR_hl_field(1, Spec_12, (MR_Integer) 1))));
        MaybeWidth_22 = ((MR_Word) ((MR_hl_field(1, Spec_12, (MR_Integer) 2))));
        ValueVar_23 = ((MR_Word) ((MR_hl_field(1, Spec_12, (MR_Integer) 3))));
        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ValueVar_23, STATE_VARIABLE_ValueVars_0_46, STATE_VARIABLE_ValueVars_47);
        check_hlds__simplify__format_call__make_result_var_if_needed_4_p_0(MaybeResultVar_13, ResultVar_14, STATE_VARIABLE_VarTable_0_48, &STATE_VARIABLE_VarTable_53_53);
        check_hlds__simplify__format_call__build_flags_arg_6_p_0(*Context_16, Flags_21, &FlagsVar_24, &FlagsGoals_25, STATE_VARIABLE_VarTable_53_53, &STATE_VARIABLE_VarTable_54_54);
        check_hlds__simplify__format_call__maybe_build_width_arg_6_p_0(MaybeWidth_22, &WidthSuffix_26, &WidthVars_27, &WidthGoals_28, STATE_VARIABLE_VarTable_54_54, STATE_VARIABLE_VarTable_49);
        Var_57 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
        Var_58 = mercury__string__f_43_43_2_f_0((MR_String) "format_char_component", WidthSuffix_26);
        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (FlagsVar_24));
          MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (*ResultVar_14));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_70, 0) = ((MR_Box) (ValueVar_23));
          MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_71));
        }
        Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), WidthVars_27, Var_70);
        Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), Var_67, Var_69);
        Var_61 = hlds__instmap__instmap_delta_bind_var_1_f_0(*ResultVar_14);
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_11, (MR_Integer) 0, Var_57, Var_58, (MR_Word) ((MR_Unsigned) 0U), Var_60, Var_61, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), *Context_16, &CallGoal_29);
        {
          Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_74, 0) = ((MR_Box) (CallGoal_29));
          MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), WidthGoals_28, Var_74);
        *Goals_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FlagsGoals_25, Var_73);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MaybePrec_30;
        MR_Word Flags_191;
        MR_Word MaybeWidth_192;
        MR_Word ValueVar_193;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_81;

        *Context_16 = ((MR_Word) ((MR_hl_field(2, Spec_12, (MR_Integer) 0))));
        Flags_191 = ((MR_Word) ((MR_hl_field(2, Spec_12, (MR_Integer) 1))));
        MaybeWidth_192 = ((MR_Word) ((MR_hl_field(2, Spec_12, (MR_Integer) 2))));
        MaybePrec_30 = ((MR_Word) ((MR_hl_field(2, Spec_12, (MR_Integer) 3))));
        ValueVar_193 = ((MR_Word) ((MR_hl_field(2, Spec_12, (MR_Integer) 4))));
        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ValueVar_193, STATE_VARIABLE_ValueVars_0_46, STATE_VARIABLE_ValueVars_47);
        Var_77 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_191, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
        Var_78 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_191, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
        Var_79 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_191, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
        Var_80 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_191, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        Var_81 = ((MR_Unsigned) ((MR_hl_field(0, Flags_191, (MR_Integer) 0))) & (MR_Integer) 1);
        succeeded = (Var_77 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (Var_78 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Var_79 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Var_80 == (MR_Integer) 0);
              if (succeeded)
                succeeded = (Var_81 == (MR_Integer) 0);
            }
          }
        }
        if (succeeded)
        {
          succeeded = (MaybeWidth_192 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (MaybePrec_30 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          if ((MaybeResultVar_13 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *ResultVar_14 = ValueVar_193;
            *Goals_15 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word AssignGoal_31;

            *ResultVar_14 = ((MR_Word) ((MR_hl_field(1, MaybeResultVar_13, (MR_Integer) 0))));
            hlds__make_goal__make_simple_assign_5_p_0(*ResultVar_14, ValueVar_193, (MR_Word) (MR_mkword(3, &check_hlds__simplify__format_call_scalar_common_4[2])), (MR_Word) ((MR_Unsigned) 0U), &AssignGoal_31);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Goals_15 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (AssignGoal_31));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          *STATE_VARIABLE_VarTable_49 = STATE_VARIABLE_VarTable_0_48;
        }
        else
        {
          MR_String PrecSuffix_32;
          MR_Word PrecVars_33;
          MR_Word PrecGoals_34;
          MR_Word STATE_VARIABLE_VarTable_86_86;
          MR_Word STATE_VARIABLE_VarTable_87_87;
          MR_Word STATE_VARIABLE_VarTable_88_88;
          MR_Word Var_91;
          MR_String Var_92;
          MR_Word Var_94;
          MR_Word Var_95;
          MR_String Var_101;
          MR_Word Var_102;
          MR_Word Var_104;
          MR_Word Var_105;
          MR_Word Var_106;
          MR_Word Var_107;
          MR_Word Var_109;
          MR_Word Var_110;
          MR_Word Var_111;
          MR_Word FlagsVar_179;
          MR_Word FlagsGoals_180;
          MR_String WidthSuffix_181;
          MR_Word WidthVars_182;
          MR_Word WidthGoals_183;
          MR_Word CallGoal_184;

          check_hlds__simplify__format_call__make_result_var_if_needed_4_p_0(MaybeResultVar_13, ResultVar_14, STATE_VARIABLE_VarTable_0_48, &STATE_VARIABLE_VarTable_86_86);
          check_hlds__simplify__format_call__build_flags_arg_6_p_0(*Context_16, Flags_191, &FlagsVar_179, &FlagsGoals_180, STATE_VARIABLE_VarTable_86_86, &STATE_VARIABLE_VarTable_87_87);
          check_hlds__simplify__format_call__maybe_build_width_arg_6_p_0(MaybeWidth_192, &WidthSuffix_181, &WidthVars_182, &WidthGoals_183, STATE_VARIABLE_VarTable_87_87, &STATE_VARIABLE_VarTable_88_88);
          check_hlds__simplify__format_call__maybe_build_prec_arg_6_p_0(MaybePrec_30, &PrecSuffix_32, &PrecVars_33, &PrecGoals_34, STATE_VARIABLE_VarTable_88_88, STATE_VARIABLE_VarTable_49);
          Var_91 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
          Var_101 = mercury__string__f_43_43_2_f_0(WidthSuffix_181, PrecSuffix_32);
          Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "format_string_component", Var_101);
          {
            Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_102, 0) = ((MR_Box) (FlagsVar_179));
            MR_hl_field(1, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_107, 0) = ((MR_Box) (*ResultVar_14));
            MR_hl_field(1, Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_106, 0) = ((MR_Box) (ValueVar_193));
            MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_107));
          }
          Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), PrecVars_33, Var_106);
          Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), WidthVars_182, Var_105);
          Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), Var_102, Var_104);
          Var_95 = hlds__instmap__instmap_delta_bind_var_1_f_0(*ResultVar_14);
          hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_11, (MR_Integer) 0, Var_91, Var_92, (MR_Word) ((MR_Unsigned) 0U), Var_94, Var_95, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), *Context_16, &CallGoal_184);
          {
            Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_111, 0) = ((MR_Box) (CallGoal_184));
            MR_hl_field(1, Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), PrecGoals_34, Var_111);
          Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), WidthGoals_183, Var_110);
          *Goals_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FlagsGoals_180, Var_109);
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Spec_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word IntSize_35;
            MR_Word OrigValueVar_36;
            MR_String FormatPredBase_39;
            MR_Word ValueCastGoals_40;
            MR_Word STATE_VARIABLE_VarTable_113_113;
            MR_Word STATE_VARIABLE_VarTable_119_119;
            MR_Word STATE_VARIABLE_VarTable_120_120;
            MR_Word STATE_VARIABLE_VarTable_121_121;
            MR_Word Var_124;
            MR_String Var_125;
            MR_Word Var_127;
            MR_Word Var_128;
            MR_String Var_133;
            MR_Word Var_134;
            MR_Word Var_136;
            MR_Word Var_137;
            MR_Word Var_138;
            MR_Word Var_139;
            MR_Word Var_140;
            MR_Word Var_142;
            MR_Word Var_143;
            MR_Word Var_144;
            MR_Word Var_145;
            MR_Word Var_146;
            MR_Word Flags_202;
            MR_Word MaybeWidth_203;
            MR_Word ValueVar_204;
            MR_Word FlagsVar_205;
            MR_Word FlagsGoals_206;
            MR_String WidthSuffix_207;
            MR_Word WidthVars_208;
            MR_Word WidthGoals_209;
            MR_Word CallGoal_210;
            MR_Word MaybePrec_211;
            MR_String PrecSuffix_212;
            MR_Word PrecVars_213;
            MR_Word PrecGoals_214;

            *Context_16 = ((MR_Word) ((MR_hl_field(3, Spec_12, (MR_Integer) 1))));
            Flags_202 = ((MR_Word) ((MR_hl_field(3, Spec_12, (MR_Integer) 2))));
            MaybeWidth_203 = ((MR_Word) ((MR_hl_field(3, Spec_12, (MR_Integer) 3))));
            MaybePrec_211 = ((MR_Word) ((MR_hl_field(3, Spec_12, (MR_Integer) 4))));
            IntSize_35 = ((MR_Unsigned) ((MR_hl_field(3, Spec_12, (MR_Integer) 5))) & (MR_Integer) 7);
            OrigValueVar_36 = ((MR_Word) ((MR_hl_field(3, Spec_12, (MR_Integer) 6))));
            check_hlds__simplify__format_call__cast_int_value_var_if_needed_9_p_0(ModuleInfo_11, *Context_16, IntSize_35, OrigValueVar_36, &FormatPredBase_39, &ValueVar_204, &ValueCastGoals_40, STATE_VARIABLE_VarTable_0_48, &STATE_VARIABLE_VarTable_113_113);
            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OrigValueVar_36, STATE_VARIABLE_ValueVars_0_46, STATE_VARIABLE_ValueVars_47);
            check_hlds__simplify__format_call__make_result_var_if_needed_4_p_0(MaybeResultVar_13, ResultVar_14, STATE_VARIABLE_VarTable_113_113, &STATE_VARIABLE_VarTable_119_119);
            check_hlds__simplify__format_call__build_flags_arg_6_p_0(*Context_16, Flags_202, &FlagsVar_205, &FlagsGoals_206, STATE_VARIABLE_VarTable_119_119, &STATE_VARIABLE_VarTable_120_120);
            check_hlds__simplify__format_call__maybe_build_width_arg_6_p_0(MaybeWidth_203, &WidthSuffix_207, &WidthVars_208, &WidthGoals_209, STATE_VARIABLE_VarTable_120_120, &STATE_VARIABLE_VarTable_121_121);
            check_hlds__simplify__format_call__maybe_build_prec_arg_6_p_0(MaybePrec_211, &PrecSuffix_212, &PrecVars_213, &PrecGoals_214, STATE_VARIABLE_VarTable_121_121, STATE_VARIABLE_VarTable_49);
            Var_124 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
            Var_133 = mercury__string__f_43_43_2_f_0(WidthSuffix_207, PrecSuffix_212);
            Var_125 = mercury__string__f_43_43_2_f_0(FormatPredBase_39, Var_133);
            {
              Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_134, 0) = ((MR_Box) (FlagsVar_205));
              MR_hl_field(1, Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_140, 0) = ((MR_Box) (*ResultVar_14));
              MR_hl_field(1, Var_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_139, 0) = ((MR_Box) (ValueVar_204));
              MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_140));
            }
            Var_138 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) ((MR_Unsigned) 0U), Var_139);
            Var_137 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), PrecVars_213, Var_138);
            Var_136 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), WidthVars_208, Var_137);
            Var_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), Var_134, Var_136);
            Var_128 = hlds__instmap__instmap_delta_bind_var_1_f_0(*ResultVar_14);
            hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_11, (MR_Integer) 0, Var_124, Var_125, (MR_Word) ((MR_Unsigned) 0U), Var_127, Var_128, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), *Context_16, &CallGoal_210);
            {
              Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_146, 0) = ((MR_Box) (CallGoal_210));
              MR_hl_field(1, Var_146, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_145 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) ((MR_Unsigned) 0U), Var_146);
            Var_144 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), PrecGoals_214, Var_145);
            Var_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), WidthGoals_209, Var_144);
            Var_142 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FlagsGoals_206, Var_143);
            *Goals_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ValueCastGoals_40, Var_142);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Base_41;
            MR_Word STATE_VARIABLE_VarTable_114_114;
            MR_Word IntSize_200;
            MR_Word OrigValueVar_290;
            MR_Word BaseVars_291;
            MR_Word BaseGoals_292;
            MR_String FormatPredBase_293;
            MR_Word ValueCastGoals_294;
            MR_Word STATE_VARIABLE_VarTable_113_295;
            MR_Word STATE_VARIABLE_VarTable_119_296;
            MR_Word STATE_VARIABLE_VarTable_120_297;
            MR_Word STATE_VARIABLE_VarTable_121_298;
            MR_Word Var_300;
            MR_String Var_301;
            MR_Word Var_303;
            MR_Word Var_304;
            MR_String Var_309;
            MR_Word Var_310;
            MR_Word Var_312;
            MR_Word Var_313;
            MR_Word Var_314;
            MR_Word Var_315;
            MR_Word Var_316;
            MR_Word Var_318;
            MR_Word Var_319;
            MR_Word Var_320;
            MR_Word Var_321;
            MR_Word Var_322;
            MR_Word Flags_324;
            MR_Word MaybeWidth_325;
            MR_Word ValueVar_326;
            MR_Word FlagsVar_327;
            MR_Word FlagsGoals_328;
            MR_String WidthSuffix_329;
            MR_Word WidthVars_330;
            MR_Word WidthGoals_331;
            MR_Word CallGoal_332;
            MR_Word MaybePrec_333;
            MR_String PrecSuffix_334;
            MR_Word PrecVars_335;
            MR_Word PrecGoals_336;

            *Context_16 = ((MR_Word) ((MR_hl_field(3, Spec_12, (MR_Integer) 1))));
            Flags_324 = ((MR_Word) ((MR_hl_field(3, Spec_12, (MR_Integer) 2))));
            MaybeWidth_325 = ((MR_Word) ((MR_hl_field(3, Spec_12, (MR_Integer) 3))));
            MaybePrec_333 = ((MR_Word) ((MR_hl_field(3, Spec_12, (MR_Integer) 4))));
            Base_41 = ((((MR_Unsigned) ((MR_hl_field(3, Spec_12, (MR_Integer) 5))) >> 3)) & (MR_Integer) 7);
            IntSize_200 = ((MR_Unsigned) ((MR_hl_field(3, Spec_12, (MR_Integer) 5))) & (MR_Integer) 7);
            OrigValueVar_290 = ((MR_Word) ((MR_hl_field(3, Spec_12, (MR_Integer) 6))));
            check_hlds__simplify__format_call__build_int_base_arg_5_p_0(Base_41, &BaseVars_291, &BaseGoals_292, STATE_VARIABLE_VarTable_0_48, &STATE_VARIABLE_VarTable_114_114);
            check_hlds__simplify__format_call__cast_int_value_var_to_uint_if_needed_9_p_0(ModuleInfo_11, *Context_16, IntSize_200, OrigValueVar_290, &FormatPredBase_293, &ValueVar_326, &ValueCastGoals_294, STATE_VARIABLE_VarTable_114_114, &STATE_VARIABLE_VarTable_113_295);
            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OrigValueVar_290, STATE_VARIABLE_ValueVars_0_46, STATE_VARIABLE_ValueVars_47);
            check_hlds__simplify__format_call__make_result_var_if_needed_4_p_0(MaybeResultVar_13, ResultVar_14, STATE_VARIABLE_VarTable_113_295, &STATE_VARIABLE_VarTable_119_296);
            check_hlds__simplify__format_call__build_flags_arg_6_p_0(*Context_16, Flags_324, &FlagsVar_327, &FlagsGoals_328, STATE_VARIABLE_VarTable_119_296, &STATE_VARIABLE_VarTable_120_297);
            check_hlds__simplify__format_call__maybe_build_width_arg_6_p_0(MaybeWidth_325, &WidthSuffix_329, &WidthVars_330, &WidthGoals_331, STATE_VARIABLE_VarTable_120_297, &STATE_VARIABLE_VarTable_121_298);
            check_hlds__simplify__format_call__maybe_build_prec_arg_6_p_0(MaybePrec_333, &PrecSuffix_334, &PrecVars_335, &PrecGoals_336, STATE_VARIABLE_VarTable_121_298, STATE_VARIABLE_VarTable_49);
            Var_300 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
            Var_309 = mercury__string__f_43_43_2_f_0(WidthSuffix_329, PrecSuffix_334);
            Var_301 = mercury__string__f_43_43_2_f_0(FormatPredBase_293, Var_309);
            {
              Var_310 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_310, 0) = ((MR_Box) (FlagsVar_327));
              MR_hl_field(1, Var_310, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_316 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_316, 0) = ((MR_Box) (*ResultVar_14));
              MR_hl_field(1, Var_316, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_315 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_315, 0) = ((MR_Box) (ValueVar_326));
              MR_hl_field(1, Var_315, 1) = ((MR_Box) (Var_316));
            }
            Var_314 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), BaseVars_291, Var_315);
            Var_313 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), PrecVars_335, Var_314);
            Var_312 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), WidthVars_330, Var_313);
            Var_303 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), Var_310, Var_312);
            Var_304 = hlds__instmap__instmap_delta_bind_var_1_f_0(*ResultVar_14);
            hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_11, (MR_Integer) 0, Var_300, Var_301, (MR_Word) ((MR_Unsigned) 0U), Var_303, Var_304, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), *Context_16, &CallGoal_332);
            {
              Var_322 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_322, 0) = ((MR_Box) (CallGoal_332));
              MR_hl_field(1, Var_322, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_321 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), BaseGoals_292, Var_322);
            Var_320 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), PrecGoals_336, Var_321);
            Var_319 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), WidthGoals_331, Var_320);
            Var_318 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FlagsGoals_328, Var_319);
            *Goals_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ValueCastGoals_294, Var_318);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word UIntSize_42;
            MR_Word STATE_VARIABLE_VarTable_116_116;
            MR_Word Base_201;
            MR_Word OrigValueVar_240;
            MR_Word BaseVars_241;
            MR_Word BaseGoals_242;
            MR_String FormatPredBase_243;
            MR_Word ValueCastGoals_244;
            MR_Word STATE_VARIABLE_VarTable_113_245;
            MR_Word STATE_VARIABLE_VarTable_119_246;
            MR_Word STATE_VARIABLE_VarTable_120_247;
            MR_Word STATE_VARIABLE_VarTable_121_248;
            MR_Word Var_250;
            MR_String Var_251;
            MR_Word Var_253;
            MR_Word Var_254;
            MR_String Var_259;
            MR_Word Var_260;
            MR_Word Var_262;
            MR_Word Var_263;
            MR_Word Var_264;
            MR_Word Var_265;
            MR_Word Var_266;
            MR_Word Var_268;
            MR_Word Var_269;
            MR_Word Var_270;
            MR_Word Var_271;
            MR_Word Var_272;
            MR_Word Flags_274;
            MR_Word MaybeWidth_275;
            MR_Word ValueVar_276;
            MR_Word FlagsVar_277;
            MR_Word FlagsGoals_278;
            MR_String WidthSuffix_279;
            MR_Word WidthVars_280;
            MR_Word WidthGoals_281;
            MR_Word CallGoal_282;
            MR_Word MaybePrec_283;
            MR_String PrecSuffix_284;
            MR_Word PrecVars_285;
            MR_Word PrecGoals_286;

            *Context_16 = ((MR_Word) ((MR_hl_field(3, Spec_12, (MR_Integer) 1))));
            Flags_274 = ((MR_Word) ((MR_hl_field(3, Spec_12, (MR_Integer) 2))));
            MaybeWidth_275 = ((MR_Word) ((MR_hl_field(3, Spec_12, (MR_Integer) 3))));
            MaybePrec_283 = ((MR_Word) ((MR_hl_field(3, Spec_12, (MR_Integer) 4))));
            Base_201 = ((((MR_Unsigned) ((MR_hl_field(3, Spec_12, (MR_Integer) 5))) >> 3)) & (MR_Integer) 7);
            UIntSize_42 = ((MR_Unsigned) ((MR_hl_field(3, Spec_12, (MR_Integer) 5))) & (MR_Integer) 7);
            OrigValueVar_240 = ((MR_Word) ((MR_hl_field(3, Spec_12, (MR_Integer) 6))));
            check_hlds__simplify__format_call__build_int_base_arg_5_p_0(Base_201, &BaseVars_241, &BaseGoals_242, STATE_VARIABLE_VarTable_0_48, &STATE_VARIABLE_VarTable_116_116);
            check_hlds__simplify__format_call__cast_uint_value_var_if_needed_9_p_0(ModuleInfo_11, *Context_16, UIntSize_42, OrigValueVar_240, &FormatPredBase_243, &ValueVar_276, &ValueCastGoals_244, STATE_VARIABLE_VarTable_116_116, &STATE_VARIABLE_VarTable_113_245);
            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OrigValueVar_240, STATE_VARIABLE_ValueVars_0_46, STATE_VARIABLE_ValueVars_47);
            check_hlds__simplify__format_call__make_result_var_if_needed_4_p_0(MaybeResultVar_13, ResultVar_14, STATE_VARIABLE_VarTable_113_245, &STATE_VARIABLE_VarTable_119_246);
            check_hlds__simplify__format_call__build_flags_arg_6_p_0(*Context_16, Flags_274, &FlagsVar_277, &FlagsGoals_278, STATE_VARIABLE_VarTable_119_246, &STATE_VARIABLE_VarTable_120_247);
            check_hlds__simplify__format_call__maybe_build_width_arg_6_p_0(MaybeWidth_275, &WidthSuffix_279, &WidthVars_280, &WidthGoals_281, STATE_VARIABLE_VarTable_120_247, &STATE_VARIABLE_VarTable_121_248);
            check_hlds__simplify__format_call__maybe_build_prec_arg_6_p_0(MaybePrec_283, &PrecSuffix_284, &PrecVars_285, &PrecGoals_286, STATE_VARIABLE_VarTable_121_248, STATE_VARIABLE_VarTable_49);
            Var_250 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
            Var_259 = mercury__string__f_43_43_2_f_0(WidthSuffix_279, PrecSuffix_284);
            Var_251 = mercury__string__f_43_43_2_f_0(FormatPredBase_243, Var_259);
            {
              Var_260 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_260, 0) = ((MR_Box) (FlagsVar_277));
              MR_hl_field(1, Var_260, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_266 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_266, 0) = ((MR_Box) (*ResultVar_14));
              MR_hl_field(1, Var_266, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_265 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_265, 0) = ((MR_Box) (ValueVar_276));
              MR_hl_field(1, Var_265, 1) = ((MR_Box) (Var_266));
            }
            Var_264 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), BaseVars_241, Var_265);
            Var_263 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), PrecVars_285, Var_264);
            Var_262 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), WidthVars_280, Var_263);
            Var_253 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), Var_260, Var_262);
            Var_254 = hlds__instmap__instmap_delta_bind_var_1_f_0(*ResultVar_14);
            hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_11, (MR_Integer) 0, Var_250, Var_251, (MR_Word) ((MR_Unsigned) 0U), Var_253, Var_254, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), *Context_16, &CallGoal_282);
            {
              Var_272 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_272, 0) = ((MR_Box) (CallGoal_282));
              MR_hl_field(1, Var_272, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_271 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), BaseGoals_242, Var_272);
            Var_270 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), PrecGoals_286, Var_271);
            Var_269 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), WidthGoals_281, Var_270);
            Var_268 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FlagsGoals_278, Var_269);
            *Goals_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), ValueCastGoals_244, Var_268);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Kind_43;
            MR_Word KindVar_44;
            MR_Word KindGoal_45;
            MR_Word STATE_VARIABLE_VarTable_149_149;
            MR_Word STATE_VARIABLE_VarTable_150_150;
            MR_Word STATE_VARIABLE_VarTable_151_151;
            MR_Word STATE_VARIABLE_VarTable_152_152;
            MR_Word Var_155;
            MR_String Var_156;
            MR_Word Var_158;
            MR_Word Var_159;
            MR_String Var_165;
            MR_Word Var_166;
            MR_Word Var_168;
            MR_Word Var_169;
            MR_Word Var_170;
            MR_Word Var_171;
            MR_Word Var_172;
            MR_Word Var_174;
            MR_Word Var_175;
            MR_Word Var_176;
            MR_Word Var_177;
            MR_Word Flags_215;
            MR_Word MaybeWidth_216;
            MR_Word ValueVar_217;
            MR_Word FlagsVar_218;
            MR_Word FlagsGoals_219;
            MR_String WidthSuffix_220;
            MR_Word WidthVars_221;
            MR_Word WidthGoals_222;
            MR_Word CallGoal_223;
            MR_Word MaybePrec_224;
            MR_String PrecSuffix_225;
            MR_Word PrecVars_226;
            MR_Word PrecGoals_227;

            *Context_16 = ((MR_Word) ((MR_hl_field(3, Spec_12, (MR_Integer) 1))));
            Flags_215 = ((MR_Word) ((MR_hl_field(3, Spec_12, (MR_Integer) 2))));
            MaybeWidth_216 = ((MR_Word) ((MR_hl_field(3, Spec_12, (MR_Integer) 3))));
            MaybePrec_224 = ((MR_Word) ((MR_hl_field(3, Spec_12, (MR_Integer) 4))));
            Kind_43 = ((MR_Unsigned) ((MR_hl_field(3, Spec_12, (MR_Integer) 5))) & (MR_Integer) 7);
            ValueVar_217 = ((MR_Word) ((MR_hl_field(3, Spec_12, (MR_Integer) 6))));
            parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ValueVar_217, STATE_VARIABLE_ValueVars_0_46, STATE_VARIABLE_ValueVars_47);
            check_hlds__simplify__format_call__make_result_var_if_needed_4_p_0(MaybeResultVar_13, ResultVar_14, STATE_VARIABLE_VarTable_0_48, &STATE_VARIABLE_VarTable_149_149);
            check_hlds__simplify__format_call__build_flags_arg_6_p_0(*Context_16, Flags_215, &FlagsVar_218, &FlagsGoals_219, STATE_VARIABLE_VarTable_149_149, &STATE_VARIABLE_VarTable_150_150);
            check_hlds__simplify__format_call__maybe_build_width_arg_6_p_0(MaybeWidth_216, &WidthSuffix_220, &WidthVars_221, &WidthGoals_222, STATE_VARIABLE_VarTable_150_150, &STATE_VARIABLE_VarTable_151_151);
            check_hlds__simplify__format_call__maybe_build_prec_arg_6_p_0(MaybePrec_224, &PrecSuffix_225, &PrecVars_226, &PrecGoals_227, STATE_VARIABLE_VarTable_151_151, &STATE_VARIABLE_VarTable_152_152);
            check_hlds__simplify__format_call__build_float_kind_arg_5_p_0(Kind_43, &KindVar_44, &KindGoal_45, STATE_VARIABLE_VarTable_152_152, STATE_VARIABLE_VarTable_49);
            Var_155 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
            Var_165 = mercury__string__f_43_43_2_f_0(WidthSuffix_220, PrecSuffix_225);
            Var_156 = mercury__string__f_43_43_2_f_0((MR_String) "format_float_component", Var_165);
            {
              Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_166, 0) = ((MR_Box) (FlagsVar_218));
              MR_hl_field(1, Var_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_172, 0) = ((MR_Box) (*ResultVar_14));
              MR_hl_field(1, Var_172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_171, 0) = ((MR_Box) (ValueVar_217));
              MR_hl_field(1, Var_171, 1) = ((MR_Box) (Var_172));
            }
            {
              Var_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_170, 0) = ((MR_Box) (KindVar_44));
              MR_hl_field(1, Var_170, 1) = ((MR_Box) (Var_171));
            }
            Var_169 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), PrecVars_226, Var_170);
            Var_168 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), WidthVars_221, Var_169);
            Var_158 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), Var_166, Var_168);
            Var_159 = hlds__instmap__instmap_delta_bind_var_1_f_0(*ResultVar_14);
            hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_11, (MR_Integer) 0, Var_155, Var_156, (MR_Word) ((MR_Unsigned) 0U), Var_158, Var_159, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), *Context_16, &CallGoal_223);
            {
              Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_177, 0) = ((MR_Box) (CallGoal_223));
              MR_hl_field(1, Var_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_176, 0) = ((MR_Box) (KindGoal_45));
              MR_hl_field(1, Var_176, 1) = ((MR_Box) (Var_177));
            }
            Var_175 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), PrecGoals_227, Var_176);
            Var_174 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), WidthGoals_222, Var_175);
            *Goals_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FlagsGoals_219, Var_174);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__make_result_var_if_needed_4_p_0(
  MR_Word MaybeResultVar_5,
  MR_Word * ResultVar_6,
  MR_Word STATE_VARIABLE_VarTable_0_9,
  MR_Word * STATE_VARIABLE_VarTable_10)
{
  if ((MaybeResultVar_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Entry_8;
    MR_Word Var_12;

    Var_12 = parse_tree__builtin_lib_types__string_type_0_f_0();
    {
      Entry_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_8, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(0, Entry_8, 1) = ((MR_Box) (Var_12));
      MR_hl_field(0, Entry_8, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    parse_tree__var_table__add_var_entry_4_p_0(Entry_8, ResultVar_6, STATE_VARIABLE_VarTable_0_9, STATE_VARIABLE_VarTable_10);
  }
  else
  {
    *ResultVar_6 = ((MR_Word) ((MR_hl_field(1, MaybeResultVar_5, (MR_Integer) 0))));
    *STATE_VARIABLE_VarTable_10 = STATE_VARIABLE_VarTable_0_9;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__build_float_kind_arg_5_p_0(
  MR_Word Kind_6,
  MR_Word * Var_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_VarTable_0_16,
  MR_Word * STATE_VARIABLE_VarTable_17)
{
  MR_Word ParseUtil_10;
  MR_Word TypeName_11;
  MR_Word TypeCtor_12;
  MR_Word Type_13;
  MR_String ConsName_14;
  MR_Word ConsId_15;
  MR_Word Var_22;
  MR_Word Var_23;

  ParseUtil_10 = mdbcomp__builtin_modules__mercury_string_parse_util_module_0_f_0();
  {
    TypeName_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeName_11, 0) = ((MR_Box) (ParseUtil_10));
    MR_hl_field(1, TypeName_11, 1) = ((MR_Box) ((MR_String) "string_format_float_kind"));
  }
  {
    TypeCtor_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_12, 0) = ((MR_Box) (TypeName_11));
    MR_hl_field(0, TypeCtor_12, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    Type_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Type_13, 0) = ((MR_Box) (TypeName_11));
    MR_hl_field(1, Type_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Type_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ConsName_14 = ((&check_hlds__simplify__format_call_vector_common_6[37 + Kind_6]))->check_hlds__simplify__format_call__vector_common_type_6_0__vct_6_f_0;
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (ParseUtil_10));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (ConsName_14));
  }
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) (TypeCtor_12));
  }
  ConsId_15 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_22)));
  hlds__make_goal__make_const_construction_alloc_8_p_0(ConsId_15, Type_13, (MR_Integer) 1, (MR_String) "", Goal_8, Var_7, STATE_VARIABLE_VarTable_0_16, STATE_VARIABLE_VarTable_17);
}

static void MR_CALL 
check_hlds__simplify__format_call__build_int_base_arg_5_p_0(
  MR_Word Base_6,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_VarTable_0_16,
  MR_Word * STATE_VARIABLE_VarTable_17)
{
  MR_Word Var_7;
  MR_Word Goal_8;
  MR_Word ParseUtil_10;
  MR_Word TypeName_11;
  MR_Word TypeCtor_12;
  MR_Word Type_13;
  MR_String ConsName_14;
  MR_Word ConsId_15;
  MR_Word Var_24;
  MR_Word Var_25;

  ParseUtil_10 = mdbcomp__builtin_modules__mercury_string_parse_util_module_0_f_0();
  {
    TypeName_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeName_11, 0) = ((MR_Box) (ParseUtil_10));
    MR_hl_field(1, TypeName_11, 1) = ((MR_Box) ((MR_String) "string_format_int_base"));
  }
  {
    TypeCtor_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_12, 0) = ((MR_Box) (TypeName_11));
    MR_hl_field(0, TypeCtor_12, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    Type_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Type_13, 0) = ((MR_Box) (TypeName_11));
    MR_hl_field(1, Type_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Type_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ConsName_14 = ((&check_hlds__simplify__format_call_vector_common_6[32 + Base_6]))->check_hlds__simplify__format_call__vector_common_type_6_0__vct_6_f_0;
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (ParseUtil_10));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (ConsName_14));
  }
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) (TypeCtor_12));
  }
  ConsId_15 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_24)));
  hlds__make_goal__make_const_construction_alloc_8_p_0(ConsId_15, Type_13, (MR_Integer) 1, (MR_String) "", &Goal_8, &Var_7, STATE_VARIABLE_VarTable_0_16, STATE_VARIABLE_VarTable_17);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__2_2 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_7));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__3_3 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Goal_8));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__maybe_build_prec_arg_6_p_0(
  MR_Word MaybePrec_7,
  MR_String * PredNameSuffix_8,
  MR_Word * MaybePrecVar_9,
  MR_Word * MaybePrecGoals_10,
  MR_Word STATE_VARIABLE_VarTable_0_15,
  MR_Word * STATE_VARIABLE_VarTable_16)
{
  switch (MR_tag((MR_Word) MaybePrec_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *PredNameSuffix_8 = (MR_String) "_noprec";
        *MaybePrecVar_9 = (MR_Word) ((MR_Unsigned) 0U);
        *MaybePrecGoals_10 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_VarTable_16 = STATE_VARIABLE_VarTable_0_15;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer PrecInt_12 = ((MR_Integer) ((MR_hl_field(1, MaybePrec_7, (MR_Integer) 0))));
        MR_Word PrecGoal_13;
        MR_Word PrecVar_14;

        *PredNameSuffix_8 = (MR_String) "_prec";
        hlds__make_goal__make_int_const_construction_alloc_6_p_0(PrecInt_12, (MR_String) "", &PrecGoal_13, &PrecVar_14, STATE_VARIABLE_VarTable_0_15, STATE_VARIABLE_VarTable_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybePrecVar_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (PrecVar_14));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybePrecGoals_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (PrecGoal_13));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PrecVar_22 = ((MR_Word) ((MR_hl_field(2, MaybePrec_7, (MR_Integer) 0))));

        *PredNameSuffix_8 = (MR_String) "_prec";
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybePrecVar_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (PrecVar_22));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *MaybePrecGoals_10 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_VarTable_16 = STATE_VARIABLE_VarTable_0_15;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__maybe_build_width_arg_6_p_0(
  MR_Word MaybeWidth_7,
  MR_String * PredNameSuffix_8,
  MR_Word * MaybeWidthVar_9,
  MR_Word * MaybeWidthGoals_10,
  MR_Word STATE_VARIABLE_VarTable_0_15,
  MR_Word * STATE_VARIABLE_VarTable_16)
{
  switch (MR_tag((MR_Word) MaybeWidth_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *PredNameSuffix_8 = (MR_String) "_nowidth";
        *MaybeWidthVar_9 = (MR_Word) ((MR_Unsigned) 0U);
        *MaybeWidthGoals_10 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_VarTable_16 = STATE_VARIABLE_VarTable_0_15;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer WidthInt_12 = ((MR_Integer) ((MR_hl_field(1, MaybeWidth_7, (MR_Integer) 0))));
        MR_Word WidthGoal_13;
        MR_Word WidthVar_14;

        *PredNameSuffix_8 = (MR_String) "_width";
        hlds__make_goal__make_int_const_construction_alloc_6_p_0(WidthInt_12, (MR_String) "", &WidthGoal_13, &WidthVar_14, STATE_VARIABLE_VarTable_0_15, STATE_VARIABLE_VarTable_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeWidthVar_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (WidthVar_14));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeWidthGoals_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (WidthGoal_13));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word WidthVar_22 = ((MR_Word) ((MR_hl_field(2, MaybeWidth_7, (MR_Integer) 0))));

        *PredNameSuffix_8 = (MR_String) "_width";
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeWidthVar_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (WidthVar_22));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *MaybeWidthGoals_10 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_VarTable_16 = STATE_VARIABLE_VarTable_0_15;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__build_flags_arg_6_p_0(
  MR_Word Context_7,
  MR_Word Flags_8,
  MR_Word * Var_9,
  MR_Word * Goals_10,
  MR_Word STATE_VARIABLE_VarTable_0_77,
  MR_Word * STATE_VARIABLE_VarTable_78)
{
  MR_Word FlagHash_12 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_8, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
  MR_Word FlagSpace_13 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_8, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
  MR_Word FlagZero_14 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_8, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
  MR_Word FlagMinus_15 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_8, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  MR_Word FlagPlus_16 = ((MR_Unsigned) ((MR_hl_field(0, Flags_8, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word ParseUtil_17;
  MR_Word TypeSymNameHash_18;
  MR_Word TypeSymNameSpace_19;
  MR_Word TypeSymNameZero_20;
  MR_Word TypeSymNameMinus_21;
  MR_Word TypeSymNamePlus_22;
  MR_Word TypeCtorHash_23;
  MR_Word TypeCtorSpace_24;
  MR_Word TypeCtorZero_25;
  MR_Word TypeCtorMinus_26;
  MR_Word TypeCtorPlus_27;
  MR_Word TypeHash_28;
  MR_Word TypeSpace_29;
  MR_Word TypeZero_30;
  MR_Word TypeMinus_31;
  MR_Word TypePlus_32;
  MR_Word EntryHash_33;
  MR_Word EntrySpace_34;
  MR_Word EntryZero_35;
  MR_Word EntryMinus_36;
  MR_Word EntryPlus_37;
  MR_Word VarHash_38;
  MR_Word VarSpace_39;
  MR_Word VarZero_40;
  MR_Word VarMinus_41;
  MR_Word VarPlus_42;
  MR_String ConsNameHash_43;
  MR_String ConsNameSpace_44;
  MR_String ConsNameZero_45;
  MR_String ConsNameMinus_46;
  MR_String ConsNamePlus_47;
  MR_Word SymNameHash_48;
  MR_Word SymNameSpace_49;
  MR_Word SymNameZero_50;
  MR_Word SymNameMinus_51;
  MR_Word SymNamePlus_52;
  MR_Word DuCtorHash_53;
  MR_Word DuCtorSpace_54;
  MR_Word DuCtorZero_55;
  MR_Word DuCtorMinus_56;
  MR_Word DuCtorPlus_57;
  MR_Word ConsIdHash_58;
  MR_Word ConsIdSpace_59;
  MR_Word ConsIdZero_60;
  MR_Word ConsIdMinus_61;
  MR_Word ConsIdPlus_62;
  MR_Word GoalHash_63;
  MR_Word GoalSpace_64;
  MR_Word GoalZero_65;
  MR_Word GoalMinus_66;
  MR_Word GoalPlus_67;
  MR_Word TypeCombine_69;
  MR_Word CombineVarEntry_70;
  MR_Word TypeCtorCombine_71;
  MR_Word ConsSymNameCombine_72;
  MR_Word DuCtorCombine_73;
  MR_Word ConsIdCombine_74;
  MR_Word SpecVars_75;
  MR_Word GoalCombine_76;
  MR_Word STATE_VARIABLE_VarTable_109_109;
  MR_Word STATE_VARIABLE_VarTable_110_110;
  MR_Word STATE_VARIABLE_VarTable_111_111;
  MR_Word STATE_VARIABLE_VarTable_112_112;
  MR_Word STATE_VARIABLE_VarTable_113_113;
  MR_Word Var_128;
  MR_Word Var_129;
  MR_Word Var_130;
  MR_Word Var_131;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Word Var_135;
  MR_Word Var_136;
  MR_Word Var_137;

  ParseUtil_17 = mdbcomp__builtin_modules__mercury_string_parse_util_module_0_f_0();
  {
    TypeSymNameHash_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeSymNameHash_18, 0) = ((MR_Box) (ParseUtil_17));
    MR_hl_field(1, TypeSymNameHash_18, 1) = ((MR_Box) ((MR_String) "string_format_flag_hash"));
  }
  {
    TypeSymNameSpace_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeSymNameSpace_19, 0) = ((MR_Box) (ParseUtil_17));
    MR_hl_field(1, TypeSymNameSpace_19, 1) = ((MR_Box) ((MR_String) "string_format_flag_space"));
  }
  {
    TypeSymNameZero_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeSymNameZero_20, 0) = ((MR_Box) (ParseUtil_17));
    MR_hl_field(1, TypeSymNameZero_20, 1) = ((MR_Box) ((MR_String) "string_format_flag_zero"));
  }
  {
    TypeSymNameMinus_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeSymNameMinus_21, 0) = ((MR_Box) (ParseUtil_17));
    MR_hl_field(1, TypeSymNameMinus_21, 1) = ((MR_Box) ((MR_String) "string_format_flag_minus"));
  }
  {
    TypeSymNamePlus_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeSymNamePlus_22, 0) = ((MR_Box) (ParseUtil_17));
    MR_hl_field(1, TypeSymNamePlus_22, 1) = ((MR_Box) ((MR_String) "string_format_flag_plus"));
  }
  {
    TypeCtorHash_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtorHash_23, 0) = ((MR_Box) (TypeSymNameHash_18));
    MR_hl_field(0, TypeCtorHash_23, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    TypeCtorSpace_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtorSpace_24, 0) = ((MR_Box) (TypeSymNameSpace_19));
    MR_hl_field(0, TypeCtorSpace_24, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    TypeCtorZero_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtorZero_25, 0) = ((MR_Box) (TypeSymNameZero_20));
    MR_hl_field(0, TypeCtorZero_25, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    TypeCtorMinus_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtorMinus_26, 0) = ((MR_Box) (TypeSymNameMinus_21));
    MR_hl_field(0, TypeCtorMinus_26, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    TypeCtorPlus_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtorPlus_27, 0) = ((MR_Box) (TypeSymNamePlus_22));
    MR_hl_field(0, TypeCtorPlus_27, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    TypeHash_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeHash_28, 0) = ((MR_Box) (TypeSymNameHash_18));
    MR_hl_field(1, TypeHash_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, TypeHash_28, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    TypeSpace_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeSpace_29, 0) = ((MR_Box) (TypeSymNameSpace_19));
    MR_hl_field(1, TypeSpace_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, TypeSpace_29, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    TypeZero_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeZero_30, 0) = ((MR_Box) (TypeSymNameZero_20));
    MR_hl_field(1, TypeZero_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, TypeZero_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    TypeMinus_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeMinus_31, 0) = ((MR_Box) (TypeSymNameMinus_21));
    MR_hl_field(1, TypeMinus_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, TypeMinus_31, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    TypePlus_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypePlus_32, 0) = ((MR_Box) (TypeSymNamePlus_22));
    MR_hl_field(1, TypePlus_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, TypePlus_32, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    EntryHash_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, EntryHash_33, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, EntryHash_33, 1) = ((MR_Box) (TypeHash_28));
    MR_hl_field(0, EntryHash_33, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  {
    EntrySpace_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, EntrySpace_34, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, EntrySpace_34, 1) = ((MR_Box) (TypeSpace_29));
    MR_hl_field(0, EntrySpace_34, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  {
    EntryZero_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, EntryZero_35, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, EntryZero_35, 1) = ((MR_Box) (TypeZero_30));
    MR_hl_field(0, EntryZero_35, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  {
    EntryMinus_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, EntryMinus_36, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, EntryMinus_36, 1) = ((MR_Box) (TypeMinus_31));
    MR_hl_field(0, EntryMinus_36, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  {
    EntryPlus_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, EntryPlus_37, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, EntryPlus_37, 1) = ((MR_Box) (TypePlus_32));
    MR_hl_field(0, EntryPlus_37, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(EntryHash_33, &VarHash_38, STATE_VARIABLE_VarTable_0_77, &STATE_VARIABLE_VarTable_109_109);
  parse_tree__var_table__add_var_entry_4_p_0(EntrySpace_34, &VarSpace_39, STATE_VARIABLE_VarTable_109_109, &STATE_VARIABLE_VarTable_110_110);
  parse_tree__var_table__add_var_entry_4_p_0(EntryZero_35, &VarZero_40, STATE_VARIABLE_VarTable_110_110, &STATE_VARIABLE_VarTable_111_111);
  parse_tree__var_table__add_var_entry_4_p_0(EntryMinus_36, &VarMinus_41, STATE_VARIABLE_VarTable_111_111, &STATE_VARIABLE_VarTable_112_112);
  parse_tree__var_table__add_var_entry_4_p_0(EntryPlus_37, &VarPlus_42, STATE_VARIABLE_VarTable_112_112, &STATE_VARIABLE_VarTable_113_113);
  switch (FlagHash_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ConsNameHash_43 = (MR_String) "flag_hash_clear";
      break;
    case (MR_Integer) 1:
      ConsNameHash_43 = (MR_String) "flag_hash_set";
      break;
  }
  switch (FlagSpace_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ConsNameSpace_44 = (MR_String) "flag_space_clear";
      break;
    case (MR_Integer) 1:
      ConsNameSpace_44 = (MR_String) "flag_space_set";
      break;
  }
  switch (FlagZero_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ConsNameZero_45 = (MR_String) "flag_zero_clear";
      break;
    case (MR_Integer) 1:
      ConsNameZero_45 = (MR_String) "flag_zero_set";
      break;
  }
  switch (FlagMinus_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ConsNameMinus_46 = (MR_String) "flag_minus_clear";
      break;
    case (MR_Integer) 1:
      ConsNameMinus_46 = (MR_String) "flag_minus_set";
      break;
  }
  switch (FlagPlus_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ConsNamePlus_47 = (MR_String) "flag_plus_clear";
      break;
    case (MR_Integer) 1:
      ConsNamePlus_47 = (MR_String) "flag_plus_set";
      break;
  }
  {
    SymNameHash_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymNameHash_48, 0) = ((MR_Box) (ParseUtil_17));
    MR_hl_field(1, SymNameHash_48, 1) = ((MR_Box) (ConsNameHash_43));
  }
  {
    SymNameSpace_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymNameSpace_49, 0) = ((MR_Box) (ParseUtil_17));
    MR_hl_field(1, SymNameSpace_49, 1) = ((MR_Box) (ConsNameSpace_44));
  }
  {
    SymNameZero_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymNameZero_50, 0) = ((MR_Box) (ParseUtil_17));
    MR_hl_field(1, SymNameZero_50, 1) = ((MR_Box) (ConsNameZero_45));
  }
  {
    SymNameMinus_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymNameMinus_51, 0) = ((MR_Box) (ParseUtil_17));
    MR_hl_field(1, SymNameMinus_51, 1) = ((MR_Box) (ConsNameMinus_46));
  }
  {
    SymNamePlus_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymNamePlus_52, 0) = ((MR_Box) (ParseUtil_17));
    MR_hl_field(1, SymNamePlus_52, 1) = ((MR_Box) (ConsNamePlus_47));
  }
  {
    DuCtorHash_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DuCtorHash_53, 0) = ((MR_Box) (SymNameHash_48));
    MR_hl_field(0, DuCtorHash_53, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, DuCtorHash_53, 2) = ((MR_Box) (TypeCtorHash_23));
  }
  {
    DuCtorSpace_54 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DuCtorSpace_54, 0) = ((MR_Box) (SymNameSpace_49));
    MR_hl_field(0, DuCtorSpace_54, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, DuCtorSpace_54, 2) = ((MR_Box) (TypeCtorSpace_24));
  }
  {
    DuCtorZero_55 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DuCtorZero_55, 0) = ((MR_Box) (SymNameZero_50));
    MR_hl_field(0, DuCtorZero_55, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, DuCtorZero_55, 2) = ((MR_Box) (TypeCtorZero_25));
  }
  {
    DuCtorMinus_56 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DuCtorMinus_56, 0) = ((MR_Box) (SymNameMinus_51));
    MR_hl_field(0, DuCtorMinus_56, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, DuCtorMinus_56, 2) = ((MR_Box) (TypeCtorMinus_26));
  }
  {
    DuCtorPlus_57 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DuCtorPlus_57, 0) = ((MR_Box) (SymNamePlus_52));
    MR_hl_field(0, DuCtorPlus_57, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, DuCtorPlus_57, 2) = ((MR_Box) (TypeCtorPlus_27));
  }
  ConsIdHash_58 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtorHash_53)));
  ConsIdSpace_59 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtorSpace_54)));
  ConsIdZero_60 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtorZero_55)));
  ConsIdMinus_61 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtorMinus_56)));
  ConsIdPlus_62 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtorPlus_57)));
  hlds__make_goal__make_const_construction_4_p_0(Context_7, VarHash_38, ConsIdHash_58, &GoalHash_63);
  hlds__make_goal__make_const_construction_4_p_0(Context_7, VarSpace_39, ConsIdSpace_59, &GoalSpace_64);
  hlds__make_goal__make_const_construction_4_p_0(Context_7, VarZero_40, ConsIdZero_60, &GoalZero_65);
  hlds__make_goal__make_const_construction_4_p_0(Context_7, VarMinus_41, ConsIdMinus_61, &GoalMinus_66);
  hlds__make_goal__make_const_construction_4_p_0(Context_7, VarPlus_42, ConsIdPlus_62, &GoalPlus_67);
  {
    ConsSymNameCombine_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ConsSymNameCombine_72, 0) = ((MR_Box) (ParseUtil_17));
    MR_hl_field(1, ConsSymNameCombine_72, 1) = ((MR_Box) ((MR_String) "string_format_flags"));
  }
  {
    TypeCombine_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TypeCombine_69, 0) = ((MR_Box) (ConsSymNameCombine_72));
    MR_hl_field(1, TypeCombine_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, TypeCombine_69, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    CombineVarEntry_70 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CombineVarEntry_70, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, CombineVarEntry_70, 1) = ((MR_Box) (TypeCombine_69));
    MR_hl_field(0, CombineVarEntry_70, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(CombineVarEntry_70, Var_9, STATE_VARIABLE_VarTable_113_113, STATE_VARIABLE_VarTable_78);
  {
    TypeCtorCombine_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtorCombine_71, 0) = ((MR_Box) (ConsSymNameCombine_72));
    MR_hl_field(0, TypeCtorCombine_71, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    DuCtorCombine_73 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DuCtorCombine_73, 0) = ((MR_Box) (ConsSymNameCombine_72));
    MR_hl_field(0, DuCtorCombine_73, 1) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(0, DuCtorCombine_73, 2) = ((MR_Box) (TypeCtorCombine_71));
  }
  ConsIdCombine_74 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtorCombine_73)));
  {
    Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_131, 0) = ((MR_Box) (VarPlus_42));
    MR_hl_field(1, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_130, 0) = ((MR_Box) (VarMinus_41));
    MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_131));
  }
  {
    Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_129, 0) = ((MR_Box) (VarZero_40));
    MR_hl_field(1, Var_129, 1) = ((MR_Box) (Var_130));
  }
  {
    Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_128, 0) = ((MR_Box) (VarSpace_39));
    MR_hl_field(1, Var_128, 1) = ((MR_Box) (Var_129));
  }
  {
    SpecVars_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SpecVars_75, 0) = ((MR_Box) (VarHash_38));
    MR_hl_field(1, SpecVars_75, 1) = ((MR_Box) (Var_128));
  }
  hlds__make_goal__construct_functor_4_p_0(*Var_9, ConsIdCombine_74, SpecVars_75, &GoalCombine_76);
  {
    Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_137, 0) = ((MR_Box) (GoalCombine_76));
    MR_hl_field(1, Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_136, 0) = ((MR_Box) (GoalPlus_67));
    MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_137));
  }
  {
    Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_135, 0) = ((MR_Box) (GoalMinus_66));
    MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_136));
  }
  {
    Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_134, 0) = ((MR_Box) (GoalZero_65));
    MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_135));
  }
  {
    Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_133, 0) = ((MR_Box) (GoalSpace_64));
    MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_134));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Goals_10 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (GoalHash_63));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_133));
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__cast_uint_value_var_if_needed_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Context_11,
  MR_Word UIntSize_12,
  MR_Word OrigValueVar_13,
  MR_String * FormatPredBase_14,
  MR_Word * ValueVar_15,
  MR_Word * ValueCastGoals_16,
  MR_Word STATE_VARIABLE_VarTable_0_21,
  MR_Word * STATE_VARIABLE_VarTable_22)
{
  switch (UIntSize_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Word ValueVarEntry_19;
        MR_Word ValueCastGoal_20;
        MR_Word Var_24;
        MR_Word Var_28;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_36;

        *FormatPredBase_14 = (MR_String) "format_uint_component";
        Var_24 = parse_tree__builtin_lib_types__uint_type_0_f_0();
        {
          ValueVarEntry_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ValueVarEntry_19, 0) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(0, ValueVarEntry_19, 1) = ((MR_Box) (Var_24));
          MR_hl_field(0, ValueVarEntry_19, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        parse_tree__var_table__add_var_entry_4_p_0(ValueVarEntry_19, ValueVar_15, STATE_VARIABLE_VarTable_0_21, STATE_VARIABLE_VarTable_22);
        Var_28 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (*ValueVar_15));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_30, 0) = ((MR_Box) (OrigValueVar_13));
          MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_36));
        }
        Var_31 = hlds__instmap__instmap_delta_bind_var_1_f_0(*ValueVar_15);
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_10, (MR_Integer) 0, Var_28, (MR_String) "format_cast_uint16_to_uint", (MR_Word) ((MR_Unsigned) 0U), Var_30, Var_31, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_11, &ValueCastGoal_20);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ValueCastGoals_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ValueCastGoal_20));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ValueVarEntry_40;
        MR_Word ValueCastGoal_41;
        MR_Word Var_43;
        MR_Word Var_46;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_54;

        *FormatPredBase_14 = (MR_String) "format_uint_component";
        Var_43 = parse_tree__builtin_lib_types__uint_type_0_f_0();
        {
          ValueVarEntry_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ValueVarEntry_40, 0) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(0, ValueVarEntry_40, 1) = ((MR_Box) (Var_43));
          MR_hl_field(0, ValueVarEntry_40, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        parse_tree__var_table__add_var_entry_4_p_0(ValueVarEntry_40, ValueVar_15, STATE_VARIABLE_VarTable_0_21, STATE_VARIABLE_VarTable_22);
        Var_46 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (*ValueVar_15));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (OrigValueVar_13));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_54));
        }
        Var_49 = hlds__instmap__instmap_delta_bind_var_1_f_0(*ValueVar_15);
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_10, (MR_Integer) 0, Var_46, (MR_String) "format_cast_uint32_to_uint", (MR_Word) ((MR_Unsigned) 0U), Var_48, Var_49, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_11, &ValueCastGoal_41);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ValueCastGoals_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ValueCastGoal_41));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 4:
      {
        *FormatPredBase_14 = (MR_String) "format_uint64_component";
        *ValueVar_15 = OrigValueVar_13;
        *ValueCastGoals_16 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_VarTable_22 = STATE_VARIABLE_VarTable_0_21;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ValueVarEntry_58;
        MR_Word ValueCastGoal_59;
        MR_Word Var_61;
        MR_Word Var_64;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_72;

        *FormatPredBase_14 = (MR_String) "format_uint_component";
        Var_61 = parse_tree__builtin_lib_types__uint_type_0_f_0();
        {
          ValueVarEntry_58 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ValueVarEntry_58, 0) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(0, ValueVarEntry_58, 1) = ((MR_Box) (Var_61));
          MR_hl_field(0, ValueVarEntry_58, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        parse_tree__var_table__add_var_entry_4_p_0(ValueVarEntry_58, ValueVar_15, STATE_VARIABLE_VarTable_0_21, STATE_VARIABLE_VarTable_22);
        Var_64 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
        {
          Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_72, 0) = ((MR_Box) (*ValueVar_15));
          MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (OrigValueVar_13));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_72));
        }
        Var_67 = hlds__instmap__instmap_delta_bind_var_1_f_0(*ValueVar_15);
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_10, (MR_Integer) 0, Var_64, (MR_String) "format_cast_uint8_to_uint", (MR_Word) ((MR_Unsigned) 0U), Var_66, Var_67, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_11, &ValueCastGoal_59);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ValueCastGoals_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ValueCastGoal_59));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        *FormatPredBase_14 = (MR_String) "format_uint_component";
        *ValueVar_15 = OrigValueVar_13;
        *ValueCastGoals_16 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_VarTable_22 = STATE_VARIABLE_VarTable_0_21;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__cast_int_value_var_to_uint_if_needed_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Context_11,
  MR_Word IntSize_12,
  MR_Word OrigValueVar_13,
  MR_String * FormatPredBase_14,
  MR_Word * ValueVar_15,
  MR_Word * ValueCastGoals_16,
  MR_Word STATE_VARIABLE_VarTable_0_21,
  MR_Word * STATE_VARIABLE_VarTable_22)
{
  switch (IntSize_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Word ValueVarEntry_19;
        MR_Word ValueCastGoal_20;
        MR_Word Var_24;
        MR_Word Var_28;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_36;

        *FormatPredBase_14 = (MR_String) "format_uint_component";
        Var_24 = parse_tree__builtin_lib_types__uint_type_0_f_0();
        {
          ValueVarEntry_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ValueVarEntry_19, 0) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(0, ValueVarEntry_19, 1) = ((MR_Box) (Var_24));
          MR_hl_field(0, ValueVarEntry_19, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        parse_tree__var_table__add_var_entry_4_p_0(ValueVarEntry_19, ValueVar_15, STATE_VARIABLE_VarTable_0_21, STATE_VARIABLE_VarTable_22);
        Var_28 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (*ValueVar_15));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_30, 0) = ((MR_Box) (OrigValueVar_13));
          MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_36));
        }
        Var_31 = hlds__instmap__instmap_delta_bind_var_1_f_0(*ValueVar_15);
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_10, (MR_Integer) 0, Var_28, (MR_String) "format_cast_int16_to_uint", (MR_Word) ((MR_Unsigned) 0U), Var_30, Var_31, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_11, &ValueCastGoal_20);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ValueCastGoals_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ValueCastGoal_20));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ValueVarEntry_40;
        MR_Word ValueCastGoal_41;
        MR_Word Var_43;
        MR_Word Var_46;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_54;

        *FormatPredBase_14 = (MR_String) "format_uint_component";
        Var_43 = parse_tree__builtin_lib_types__uint_type_0_f_0();
        {
          ValueVarEntry_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ValueVarEntry_40, 0) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(0, ValueVarEntry_40, 1) = ((MR_Box) (Var_43));
          MR_hl_field(0, ValueVarEntry_40, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        parse_tree__var_table__add_var_entry_4_p_0(ValueVarEntry_40, ValueVar_15, STATE_VARIABLE_VarTable_0_21, STATE_VARIABLE_VarTable_22);
        Var_46 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (*ValueVar_15));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (OrigValueVar_13));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_54));
        }
        Var_49 = hlds__instmap__instmap_delta_bind_var_1_f_0(*ValueVar_15);
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_10, (MR_Integer) 0, Var_46, (MR_String) "format_cast_int32_to_uint", (MR_Word) ((MR_Unsigned) 0U), Var_48, Var_49, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_11, &ValueCastGoal_41);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ValueCastGoals_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ValueCastGoal_41));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 4:
      {
        *FormatPredBase_14 = (MR_String) "format_unsigned_int64_component";
        *ValueVar_15 = OrigValueVar_13;
        *ValueCastGoals_16 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_VarTable_22 = STATE_VARIABLE_VarTable_0_21;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ValueVarEntry_58;
        MR_Word ValueCastGoal_59;
        MR_Word Var_61;
        MR_Word Var_64;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_72;

        *FormatPredBase_14 = (MR_String) "format_uint_component";
        Var_61 = parse_tree__builtin_lib_types__uint_type_0_f_0();
        {
          ValueVarEntry_58 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ValueVarEntry_58, 0) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(0, ValueVarEntry_58, 1) = ((MR_Box) (Var_61));
          MR_hl_field(0, ValueVarEntry_58, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        parse_tree__var_table__add_var_entry_4_p_0(ValueVarEntry_58, ValueVar_15, STATE_VARIABLE_VarTable_0_21, STATE_VARIABLE_VarTable_22);
        Var_64 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
        {
          Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_72, 0) = ((MR_Box) (*ValueVar_15));
          MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (OrigValueVar_13));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_72));
        }
        Var_67 = hlds__instmap__instmap_delta_bind_var_1_f_0(*ValueVar_15);
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_10, (MR_Integer) 0, Var_64, (MR_String) "format_cast_int8_to_uint", (MR_Word) ((MR_Unsigned) 0U), Var_66, Var_67, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_11, &ValueCastGoal_59);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ValueCastGoals_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ValueCastGoal_59));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word ValueVarEntry_76;
        MR_Word ValueCastGoal_77;
        MR_Word Var_79;
        MR_Word Var_82;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_90;

        *FormatPredBase_14 = (MR_String) "format_uint_component";
        Var_79 = parse_tree__builtin_lib_types__uint_type_0_f_0();
        {
          ValueVarEntry_76 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ValueVarEntry_76, 0) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(0, ValueVarEntry_76, 1) = ((MR_Box) (Var_79));
          MR_hl_field(0, ValueVarEntry_76, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        parse_tree__var_table__add_var_entry_4_p_0(ValueVarEntry_76, ValueVar_15, STATE_VARIABLE_VarTable_0_21, STATE_VARIABLE_VarTable_22);
        Var_82 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
        {
          Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_90, 0) = ((MR_Box) (*ValueVar_15));
          MR_hl_field(1, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_84, 0) = ((MR_Box) (OrigValueVar_13));
          MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_90));
        }
        Var_85 = hlds__instmap__instmap_delta_bind_var_1_f_0(*ValueVar_15);
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_10, (MR_Integer) 0, Var_82, (MR_String) "format_cast_int_to_uint", (MR_Word) ((MR_Unsigned) 0U), Var_84, Var_85, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_11, &ValueCastGoal_77);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ValueCastGoals_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ValueCastGoal_77));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__cast_int_value_var_if_needed_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Context_11,
  MR_Word IntSize_12,
  MR_Word OrigValueVar_13,
  MR_String * FormatPredBase_14,
  MR_Word * ValueVar_15,
  MR_Word * ValueCastGoals_16,
  MR_Word STATE_VARIABLE_VarTable_0_21,
  MR_Word * STATE_VARIABLE_VarTable_22)
{
  switch (IntSize_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Word ValueVarEntry_19;
        MR_Word ValueCastGoal_20;
        MR_Word Var_24;
        MR_Word Var_28;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_36;

        *FormatPredBase_14 = (MR_String) "format_signed_int_component";
        Var_24 = parse_tree__builtin_lib_types__int_type_0_f_0();
        {
          ValueVarEntry_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ValueVarEntry_19, 0) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(0, ValueVarEntry_19, 1) = ((MR_Box) (Var_24));
          MR_hl_field(0, ValueVarEntry_19, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        parse_tree__var_table__add_var_entry_4_p_0(ValueVarEntry_19, ValueVar_15, STATE_VARIABLE_VarTable_0_21, STATE_VARIABLE_VarTable_22);
        Var_28 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (*ValueVar_15));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_30, 0) = ((MR_Box) (OrigValueVar_13));
          MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_36));
        }
        Var_31 = hlds__instmap__instmap_delta_bind_var_1_f_0(*ValueVar_15);
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_10, (MR_Integer) 0, Var_28, (MR_String) "format_cast_int16_to_int", (MR_Word) ((MR_Unsigned) 0U), Var_30, Var_31, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_11, &ValueCastGoal_20);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ValueCastGoals_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ValueCastGoal_20));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ValueVarEntry_40;
        MR_Word ValueCastGoal_41;
        MR_Word Var_43;
        MR_Word Var_46;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_54;

        *FormatPredBase_14 = (MR_String) "format_signed_int_component";
        Var_43 = parse_tree__builtin_lib_types__int_type_0_f_0();
        {
          ValueVarEntry_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ValueVarEntry_40, 0) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(0, ValueVarEntry_40, 1) = ((MR_Box) (Var_43));
          MR_hl_field(0, ValueVarEntry_40, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        parse_tree__var_table__add_var_entry_4_p_0(ValueVarEntry_40, ValueVar_15, STATE_VARIABLE_VarTable_0_21, STATE_VARIABLE_VarTable_22);
        Var_46 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (*ValueVar_15));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (OrigValueVar_13));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_54));
        }
        Var_49 = hlds__instmap__instmap_delta_bind_var_1_f_0(*ValueVar_15);
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_10, (MR_Integer) 0, Var_46, (MR_String) "format_cast_int32_to_int", (MR_Word) ((MR_Unsigned) 0U), Var_48, Var_49, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_11, &ValueCastGoal_41);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ValueCastGoals_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ValueCastGoal_41));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 4:
      {
        *FormatPredBase_14 = (MR_String) "format_signed_int64_component";
        *ValueVar_15 = OrigValueVar_13;
        *ValueCastGoals_16 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_VarTable_22 = STATE_VARIABLE_VarTable_0_21;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ValueVarEntry_58;
        MR_Word ValueCastGoal_59;
        MR_Word Var_61;
        MR_Word Var_64;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_72;

        *FormatPredBase_14 = (MR_String) "format_signed_int_component";
        Var_61 = parse_tree__builtin_lib_types__int_type_0_f_0();
        {
          ValueVarEntry_58 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ValueVarEntry_58, 0) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(0, ValueVarEntry_58, 1) = ((MR_Box) (Var_61));
          MR_hl_field(0, ValueVarEntry_58, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        }
        parse_tree__var_table__add_var_entry_4_p_0(ValueVarEntry_58, ValueVar_15, STATE_VARIABLE_VarTable_0_21, STATE_VARIABLE_VarTable_22);
        Var_64 = mdbcomp__builtin_modules__mercury_string_format_module_0_f_0();
        {
          Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_72, 0) = ((MR_Box) (*ValueVar_15));
          MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (OrigValueVar_13));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_72));
        }
        Var_67 = hlds__instmap__instmap_delta_bind_var_1_f_0(*ValueVar_15);
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_10, (MR_Integer) 0, Var_64, (MR_String) "format_cast_int8_to_int", (MR_Word) ((MR_Unsigned) 0U), Var_66, Var_67, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_11, &ValueCastGoal_59);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ValueCastGoals_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ValueCastGoal_59));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        *FormatPredBase_14 = (MR_String) "format_signed_int_component";
        *ValueVar_15 = OrigValueVar_13;
        *ValueCastGoals_16 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_VarTable_22 = STATE_VARIABLE_VarTable_0_21;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__check_fmt_str_val_vars_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeAbstractPolyType_10;

  check_hlds__simplify__format_call__follow_poly_type_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeAbstractPolyType_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeAbstractPolyType_10));
}

static void MR_CALL 
check_hlds__simplify__format_call__check_fmt_str_val_vars_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredInfo_10,
  MR_Word ProcInfo_11,
  MR_Word ConjMaps_12,
  MR_Word PredMap_13,
  MR_Word FormatCallSite_14,
  MR_Word FmtStrValVars_15,
  MR_Word * Result_16)
{
  MR_bool succeeded;
  MR_Word MaybePos_24 = ((MR_Word) ((MR_hl_field(0, FmtStrValVars_15, (MR_Integer) 0))));
  MR_Word StringVar_25 = ((MR_Word) ((MR_hl_field(0, FmtStrValVars_15, (MR_Integer) 1))));
  MR_Word ValuesVar_26 = ((MR_Word) ((MR_hl_field(0, FmtStrValVars_15, (MR_Integer) 2))));
  MR_Word FormatStringResult_27;
  MR_Word ValuesResult_28;
  MR_Word PredId_55 = ((MR_Word) ((MR_hl_field(0, FormatCallSite_14, (MR_Integer) 3))));
  MR_Word Context_56 = ((MR_Word) ((MR_hl_field(0, FormatCallSite_14, (MR_Integer) 4))));
  MR_Word CurId_57 = ((MR_Word) ((MR_hl_field(0, FormatCallSite_14, (MR_Integer) 5))));
  MR_Word WarnUnknownFormat_58 = ((MR_Unsigned) ((MR_hl_field(0, FormatCallSite_14, (MR_Integer) 6))) & (MR_Integer) 1);
  MR_Word FormatStringResult_59;
  MR_Word PredId_68;
  MR_Word Context_69;
  MR_Word CurId_70;
  MR_Word WarnUnknownFormat_71;
  MR_Word SkeletonResult_72;
  MR_Word PolyTypeVars_73;
  MR_Word SkeletonVars_74;
  MR_Word AbstractPolyTypes_76;
  MR_Word TypeInfo_31_81;
  MR_Word TypeInfo_32_82;
  MR_Word MaybeAbstractPolyTypes_75;
  MR_Word Var_79;
  MR_String FormatString_29;
  MR_Word ToDeleteVarsFS_30;
  MR_Word ToDeleteGoals_31;
  MR_Word AbstractPolyTypes_32;
  MR_Word ToDeleteVarsVL_33;

  check_hlds__simplify__format_call__follow_format_string_5_p_0(ConjMaps_12, PredMap_13, CurId_57, StringVar_25, &FormatStringResult_59);
  if ((FormatStringResult_59 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Specs_64;

    Specs_64 = check_hlds__simplify__format_call_errors__report_unknown_format_string_4_f_0(ModuleInfo_9, PredId_55, WarnUnknownFormat_58, Context_56);
    {
      FormatStringResult_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FormatStringResult_27, 0) = ((MR_Box) (Specs_64));
    }
  }
  else
  {
    MR_String FormatString_60 = ((MR_String) ((MR_hl_field(1, FormatStringResult_59, (MR_Integer) 0))));
    MR_Word ToDeleteVars0_61 = ((MR_Word) ((MR_hl_field(1, FormatStringResult_59, (MR_Integer) 1))));
    MR_Word ToDeleteGoals_62 = ((MR_Word) ((MR_hl_field(1, FormatStringResult_59, (MR_Integer) 2))));
    MR_Word ToDeleteVars_63;

    {
      ToDeleteVars_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ToDeleteVars_63, 0) = ((MR_Box) (StringVar_25));
      MR_hl_field(1, ToDeleteVars_63, 1) = ((MR_Box) (ToDeleteVars0_61));
    }
    {
      FormatStringResult_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FormatStringResult_27, 0) = ((MR_Box) (FormatString_60));
      MR_hl_field(1, FormatStringResult_27, 1) = ((MR_Box) (ToDeleteVars_63));
      MR_hl_field(1, FormatStringResult_27, 2) = ((MR_Box) (ToDeleteGoals_62));
    }
  }
  PredId_68 = ((MR_Word) ((MR_hl_field(0, FormatCallSite_14, (MR_Integer) 3))));
  Context_69 = ((MR_Word) ((MR_hl_field(0, FormatCallSite_14, (MR_Integer) 4))));
  CurId_70 = ((MR_Word) ((MR_hl_field(0, FormatCallSite_14, (MR_Integer) 5))));
  WarnUnknownFormat_71 = ((MR_Unsigned) ((MR_hl_field(0, FormatCallSite_14, (MR_Integer) 6))) & (MR_Integer) 1);
  check_hlds__simplify__format_call__follow_list_skeleton_5_p_0(ConjMaps_12, PredMap_13, CurId_70, ValuesVar_26, &SkeletonResult_72);
  succeeded = (SkeletonResult_72 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    PolyTypeVars_73 = ((MR_Word) ((MR_hl_field(1, SkeletonResult_72, (MR_Integer) 0))));
    SkeletonVars_74 = ((MR_Word) ((MR_hl_field(1, SkeletonResult_72, (MR_Integer) 1))));
    TypeInfo_31_81 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
    TypeInfo_32_82 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[7]);
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_79, 0) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_8[1]));
      MR_hl_field(0, Var_79, 1) = ((MR_Box) (check_hlds__simplify__format_call__check_fmt_str_val_vars_8_p_0_1));
      MR_hl_field(0, Var_79, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_79, 3) = ((MR_Box) (ConjMaps_12));
      MR_hl_field(0, Var_79, 4) = ((MR_Box) (PredMap_13));
      MR_hl_field(0, Var_79, 5) = ((MR_Box) (CurId_70));
    }
    mercury__list__map_3_p_0(TypeInfo_31_81, TypeInfo_32_82, Var_79, PolyTypeVars_73, &MaybeAbstractPolyTypes_75);
    succeeded = check_hlds__simplify__format_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_p_0(MaybeAbstractPolyTypes_75, &AbstractPolyTypes_76);
  }
  if (succeeded)
  {
    MR_Word PolyTypesToDeleteVars_77;
    MR_Word Var_80;

    {
      Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_80, 0) = ((MR_Box) (ValuesVar_26));
      MR_hl_field(1, Var_80, 1) = ((MR_Box) (SkeletonVars_74));
    }
    PolyTypesToDeleteVars_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), Var_80, PolyTypeVars_73);
    {
      ValuesResult_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ValuesResult_28, 0) = ((MR_Box) (AbstractPolyTypes_76));
      MR_hl_field(1, ValuesResult_28, 1) = ((MR_Box) (PolyTypesToDeleteVars_77));
    }
  }
  else
  {
    MR_Word Specs_78;

    Specs_78 = check_hlds__simplify__format_call_errors__report_unknown_format_values_4_f_0(ModuleInfo_9, PredId_68, WarnUnknownFormat_71, Context_69);
    {
      ValuesResult_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ValuesResult_28, 0) = ((MR_Box) (Specs_78));
    }
  }
  succeeded = ((MR_tag((MR_Word) FormatStringResult_27)) == (MR_Integer) 1);
  if (succeeded)
  {
    FormatString_29 = ((MR_String) ((MR_hl_field(1, FormatStringResult_27, (MR_Integer) 0))));
    ToDeleteVarsFS_30 = ((MR_Word) ((MR_hl_field(1, FormatStringResult_27, (MR_Integer) 1))));
    ToDeleteGoals_31 = ((MR_Word) ((MR_hl_field(1, FormatStringResult_27, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) ValuesResult_28)) == (MR_Integer) 1);
    if (succeeded)
    {
      AbstractPolyTypes_32 = ((MR_Word) ((MR_hl_field(1, ValuesResult_28, (MR_Integer) 0))));
      ToDeleteVarsVL_33 = ((MR_Word) ((MR_hl_field(1, ValuesResult_28, (MR_Integer) 1))));
    }
  }
  if (succeeded)
  {
    MR_Word FormatStringChars_34;
    MR_Word MaybeFormatSpecs_35;

    mercury__string__to_char_list_2_p_0(FormatString_29, &FormatStringChars_34);
    check_hlds__simplify__parse_string_format__parse_format_string_abstract_4_p_0(FormatStringChars_34, AbstractPolyTypes_32, Context_56, &MaybeFormatSpecs_35);
    if (((MR_tag((MR_Word) MaybeFormatSpecs_35)) == (MR_Integer) 1))
    {
      MR_Word HeadError_36 = ((MR_Word) ((MR_hl_field(1, MaybeFormatSpecs_35, (MR_Integer) 0))));
      MR_Word TailErrors_37 = ((MR_Word) ((MR_hl_field(1, MaybeFormatSpecs_35, (MR_Integer) 1))));
      MR_Word Specs_38;

      Specs_38 = check_hlds__simplify__format_call_errors__report_format_mismatch_6_f_0(ModuleInfo_9, PredId_55, MaybePos_24, HeadError_36, TailErrors_37, Context_56);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_16 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_38));
      }
    }
    else
    {
      MR_Word FormatSpecs_39 = ((MR_Word) ((MR_hl_field(0, MaybeFormatSpecs_35, (MR_Integer) 0))));
      MR_Word ToDeleteVars_40;

      ToDeleteVars_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), ToDeleteVarsFS_30, ToDeleteVarsVL_33);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Result_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FormatSpecs_39));
        MR_hl_field(1, base, 1) = ((MR_Box) (ToDeleteVars_40));
        MR_hl_field(1, base, 2) = ((MR_Box) (ToDeleteGoals_31));
      }
    }
  }
  else
  {
    MR_Word Specs_45;
    MR_Word TypeCtorInfo_15_91;
    MR_Word MaybeFormatCall_85;
    MR_Word FormatCall_86;
    MR_Word OoMFormatStringsValues_88;
    MR_Word FormatStringsValues_89;
    MR_Word HeadVars_90;

    succeeded = ((MR_tag((MR_Word) FormatStringResult_27)) == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) ValuesResult_28)) == (MR_Integer) 0);
      if (succeeded)
      {
        hlds__hlds_pred__pred_info_get_format_call_2_p_0(PredInfo_10, &MaybeFormatCall_85);
        succeeded = (MaybeFormatCall_85 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          FormatCall_86 = ((MR_Word) ((MR_hl_field(1, MaybeFormatCall_85, (MR_Integer) 0))));
          OoMFormatStringsValues_88 = ((MR_Word) ((MR_hl_field(0, FormatCall_86, (MR_Integer) 1))));
          TypeCtorInfo_15_91 = (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0);
          FormatStringsValues_89 = mercury__one_or_more__one_or_more_to_list_1_f_1(TypeCtorInfo_15_91, OoMFormatStringsValues_88);
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_11, &HeadVars_90);
          succeeded = check_hlds__simplify__format_call__format_call_is_checked_in_parent_loop_4_p_0(HeadVars_90, FormatStringsValues_89, StringVar_25, ValuesVar_26);
        }
      }
    }
    if (succeeded)
      Specs_45 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_43;
      MR_Word Var_44;

      Var_43 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[4]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[5]), FormatStringResult_27);
      Var_44 = parse_tree__maybe_error__get_any_errors2_1_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[6]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[4]), ValuesResult_28);
      Specs_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_43, Var_44);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_45));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
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
    MR_Word TailMaybes_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Tail_5;
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    succeeded = (Var_6 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Value_3 = (MR_hl_field(1, Var_6, (MR_Integer) 0));
      succeeded = check_hlds__simplify__format_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_p_0(TailMaybes_4, &Tail_5);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = Value_3;
          MR_hl_field(1, base, 1) = ((MR_Box) (Tail_5));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call__format_call_is_checked_in_parent_loop_4_p_0(
  MR_Word HeadVars_1,
  MR_Word HeadVar__2_2,
  MR_Word VarFS_3,
  MR_Word VarVL_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word TypeInfo_19_19;
    MR_Word FSV_9;
    MR_Word FSVs_10;
    MR_Integer CurArgNumFS_15;
    MR_Integer CurArgNumVL_16;
    MR_Word HeadArgVarFS_17;
    MR_Word HeadArgVarVL_18;
    MR_Box conv0_HeadArgVarFS_17;
    MR_Box conv1_HeadArgVarVL_18;
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_21_21;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      FSV_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      FSVs_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      CurArgNumFS_15 = ((MR_Integer) ((MR_hl_field(0, FSV_9, (MR_Integer) 2))));
      CurArgNumVL_16 = ((MR_Integer) ((MR_hl_field(0, FSV_9, (MR_Integer) 3))));
      TypeInfo_19_19 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
      mercury__list__det_index1_3_p_0(TypeInfo_19_19, HeadVars_1, CurArgNumFS_15, &conv0_HeadArgVarFS_17);
      HeadArgVarFS_17 = ((MR_Word) (conv0_HeadArgVarFS_17));
      mercury__list__det_index1_3_p_0(TypeInfo_19_19, HeadVars_1, CurArgNumVL_16, &conv1_HeadArgVarVL_18);
      HeadArgVarVL_18 = ((MR_Word) (conv1_HeadArgVarVL_18));
      TypeInfo_20_20 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (HeadArgVarFS_17)), ((MR_Box) (VarFS_3)));
      if (succeeded)
      {
        TypeInfo_21_21 = (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (HeadArgVarVL_18)), ((MR_Box) (VarVL_4)));
      }
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = FSVs_10;

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
check_hlds__simplify__format_call__follow_format_string_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Result_10;

  check_hlds__simplify__format_call__follow_format_string_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_Result_10);
  *wrapper_arg_2 = ((MR_Box) (conv3_Result_10));
}

static void MR_CALL 
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
    MR_Word ConjMapPrime_62;
    MR_Box conv0_ConjMapPrime_62;
    MR_Word EqvVar_16;
    MR_Box conv1_EqvVar_16;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), ConjMaps_6, ((MR_Box) (CurId_8)), &conv0_ConjMapPrime_62);
    if (succeeded)
    {
      ConjMapPrime_62 = ((MR_Word) (conv0_ConjMapPrime_62));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      ConjMap_11 = ConjMapPrime_62;
    else
    {
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;

      Var_63 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0));
      Var_64 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0));
      Var_65 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0));
      Var_66 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]));
      {
        ConjMap_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ConjMap_11, 0) = ((MR_Box) (Var_63));
        MR_hl_field(0, ConjMap_11, 1) = ((MR_Box) (Var_64));
        MR_hl_field(0, ConjMap_11, 2) = ((MR_Box) (Var_65));
        MR_hl_field(0, ConjMap_11, 3) = ((MR_Box) (Var_66));
      }
    }
    StringMap_12 = ((MR_Word) ((MR_hl_field(0, ConjMap_11, (MR_Integer) 0))));
    EqvMap_15 = ((MR_Word) ((MR_hl_field(0, ConjMap_11, (MR_Integer) 3))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), EqvMap_15, ((MR_Box) (StringVar_9)), &conv1_EqvVar_16);
    if (succeeded)
    {
      EqvVar_16 = ((MR_Word) (conv1_EqvVar_16));
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
      MR_Box conv2_StringState_17;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0), StringMap_12, ((MR_Box) (StringVar_9)), &conv2_StringState_17);
      if (succeeded)
      {
        StringState_17 = ((MR_Word) (conv2_StringState_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        switch (MR_tag((MR_Word) StringState_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String String_18 = ((MR_String) ((MR_hl_field(0, StringState_17, (MR_Integer) 0))));
              MR_Word Var_39;

              {
                Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_39, 0) = ((MR_Box) (StringVar_9));
                MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Result_10 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (String_18));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_39));
                MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word AppendGoalId_19 = ((MR_Word) ((MR_hl_field(1, StringState_17, (MR_Integer) 0))));
              MR_Word StringVarA_20 = ((MR_Word) ((MR_hl_field(1, StringState_17, (MR_Integer) 1))));
              MR_Word StringVarB_21 = ((MR_Word) ((MR_hl_field(1, StringState_17, (MR_Integer) 2))));
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
                StringA_24 = ((MR_String) ((MR_hl_field(1, ResultA_22, (MR_Integer) 0))));
                ToDeleteVarsA_25 = ((MR_Word) ((MR_hl_field(1, ResultA_22, (MR_Integer) 1))));
                ToDeleteGoalsA_26 = ((MR_Word) ((MR_hl_field(1, ResultA_22, (MR_Integer) 2))));
                succeeded = (ResultB_23 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  StringB_27 = ((MR_String) ((MR_hl_field(1, ResultB_23, (MR_Integer) 0))));
                  ToDeleteVarsB_28 = ((MR_Word) ((MR_hl_field(1, ResultB_23, (MR_Integer) 1))));
                  ToDeleteGoalsB_29 = ((MR_Word) ((MR_hl_field(1, ResultB_23, (MR_Integer) 2))));
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
                  Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_45, 0) = ((MR_Box) (AppendGoalId_19));
                  MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), ToDeleteGoalsA_26, ToDeleteGoalsB_29);
                Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), Var_45, Var_47);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Result_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_42));
                  MR_hl_field(1, base, 1) = ((MR_Box) (Var_43));
                  MR_hl_field(1, base, 2) = ((MR_Box) (Var_44));
                }
              }
              else
                *Result_10 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word AppendListGoalId_30 = ((MR_Word) ((MR_hl_field(2, StringState_17, (MR_Integer) 0))));
              MR_Word SkeletonVar_31 = ((MR_Word) ((MR_hl_field(2, StringState_17, (MR_Integer) 1))));
              MR_Word SkeletonResult_32;

              check_hlds__simplify__format_call__follow_list_skeleton_5_p_0(ConjMaps_6, PredMap_7, CurId_8, SkeletonVar_31, &SkeletonResult_32);
              if ((SkeletonResult_32 == (MR_Word) ((MR_Unsigned) 0U)))
                *Result_10 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word SubStringVars_33 = ((MR_Word) ((MR_hl_field(1, SkeletonResult_32, (MR_Integer) 0))));
                MR_Word SkeletonVars_34 = ((MR_Word) ((MR_hl_field(1, SkeletonResult_32, (MR_Integer) 1))));
                MR_Word SubStringResults_35;
                MR_Word Var_48;
                MR_Word SubStringToDeleteVars_36;
                MR_Word SubStringToDeleteGoals_37;
                MR_String String_51;

                {
                  Var_48 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_48, 0) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_8[0]));
                  MR_hl_field(0, Var_48, 1) = ((MR_Box) (check_hlds__simplify__format_call__follow_format_string_5_p_0_1));
                  MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 3));
                  MR_hl_field(0, Var_48, 3) = ((MR_Box) (ConjMaps_6));
                  MR_hl_field(0, Var_48, 4) = ((MR_Box) (PredMap_7));
                  MR_hl_field(0, Var_48, 5) = ((MR_Box) (CurId_8));
                }
                mercury__list__map_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_follow_string_result_0), Var_48, SubStringVars_33, &SubStringResults_35);
                succeeded = check_hlds__simplify__format_call__project_all_follow_string_results_4_p_0(SubStringResults_35, &String_51, &SubStringToDeleteVars_36, &SubStringToDeleteGoals_37);
                if (succeeded)
                {
                  MR_Word Var_49;
                  MR_Word Var_50;

                  Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), SkeletonVars_34, SubStringToDeleteVars_36);
                  {
                    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_50, 0) = ((MR_Box) (AppendListGoalId_30));
                    MR_hl_field(1, Var_50, 1) = ((MR_Box) (SubStringToDeleteGoals_37));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *Result_10 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (String_51));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Var_49));
                    MR_hl_field(1, base, 2) = ((MR_Box) (Var_50));
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
        MR_Box conv4_PredId_38;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), PredMap_7, ((MR_Box) (CurId_8)), &conv4_PredId_38);
        if (succeeded)
        {
          PredId_38 = ((MR_Word) (conv4_PredId_38));
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

static void MR_CALL 
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
    MR_Word ConjMapPrime_36;
    MR_Box conv0_ConjMapPrime_36;
    MR_Word EqvVar_16;
    MR_Box conv1_EqvVar_16;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), ConjMaps_6, ((MR_Box) (CurId_8)), &conv0_ConjMapPrime_36);
    if (succeeded)
    {
      ConjMapPrime_36 = ((MR_Word) (conv0_ConjMapPrime_36));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      ConjMap_11 = ConjMapPrime_36;
    else
    {
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;

      Var_37 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0));
      Var_38 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0));
      Var_39 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0));
      Var_40 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]));
      {
        ConjMap_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ConjMap_11, 0) = ((MR_Box) (Var_37));
        MR_hl_field(0, ConjMap_11, 1) = ((MR_Box) (Var_38));
        MR_hl_field(0, ConjMap_11, 2) = ((MR_Box) (Var_39));
        MR_hl_field(0, ConjMap_11, 3) = ((MR_Box) (Var_40));
      }
    }
    ListMap_13 = ((MR_Word) ((MR_hl_field(0, ConjMap_11, (MR_Integer) 1))));
    EqvMap_15 = ((MR_Word) ((MR_hl_field(0, ConjMap_11, (MR_Integer) 3))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), EqvMap_15, ((MR_Box) (ListVar_9)), &conv1_EqvVar_16);
    if (succeeded)
    {
      EqvVar_16 = ((MR_Word) (conv1_EqvVar_16));
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
      MR_Box conv2_ListState_17;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0), ListMap_13, ((MR_Box) (ListVar_9)), &conv2_ListState_17);
      if (succeeded)
      {
        ListState_17 = ((MR_Word) (conv2_ListState_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        if ((ListState_17 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_27;

          {
            Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_27, 0) = ((MR_Box) (ListVar_9));
            MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Result_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, base, 1) = ((MR_Box) (Var_27));
          }
        }
        else
        {
          MR_Word HeadVar_18 = ((MR_Word) ((MR_hl_field(1, ListState_17, (MR_Integer) 0))));
          MR_Word TailVar_19 = ((MR_Word) ((MR_hl_field(1, ListState_17, (MR_Integer) 1))));
          MR_Word TailResult_20;

          check_hlds__simplify__format_call__follow_list_skeleton_5_p_0(ConjMaps_6, PredMap_7, CurId_8, TailVar_19, &TailResult_20);
          if ((TailResult_20 == (MR_Word) ((MR_Unsigned) 0U)))
            *Result_10 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word TailElementVars_21 = ((MR_Word) ((MR_hl_field(1, TailResult_20, (MR_Integer) 0))));
            MR_Word TailSkeletonVars_22 = ((MR_Word) ((MR_hl_field(1, TailResult_20, (MR_Integer) 1))));
            MR_Word ElementVars_23;
            MR_Word SkeletonVars_24;

            {
              ElementVars_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ElementVars_23, 0) = ((MR_Box) (HeadVar_18));
              MR_hl_field(1, ElementVars_23, 1) = ((MR_Box) (TailElementVars_21));
            }
            succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), ((MR_Box) (TailVar_19)), TailSkeletonVars_22);
            if (!(succeeded))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.format_call.follow_list_skeleton\'/5", (MR_String) "TailVar not in TailSkeletonVars");
                return;
              }
            {
              SkeletonVars_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, SkeletonVars_24, 0) = ((MR_Box) (ListVar_9));
              MR_hl_field(1, SkeletonVars_24, 1) = ((MR_Box) (TailSkeletonVars_22));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Result_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ElementVars_23));
              MR_hl_field(1, base, 1) = ((MR_Box) (SkeletonVars_24));
            }
          }
        }
      else
      {
        MR_Word PredId_25;
        MR_Box conv3_PredId_25;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), PredMap_7, ((MR_Box) (CurId_8)), &conv3_PredId_25);
        if (succeeded)
        {
          PredId_25 = ((MR_Word) (conv3_PredId_25));
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

static MR_bool MR_CALL 
check_hlds__simplify__format_call__project_all_follow_string_results_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
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
    MR_Word HeadResult_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TailResults_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String HeadString_10;
    MR_Word HeadToDeleteVars_11;
    MR_Word HeadToDeleteGoals_12;
    MR_String TailString_13;
    MR_Word TailToDeleteVars_14;
    MR_Word TailToDeleteGoals_15;

    succeeded = (HeadResult_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      HeadString_10 = ((MR_String) ((MR_hl_field(1, HeadResult_5, (MR_Integer) 0))));
      HeadToDeleteVars_11 = ((MR_Word) ((MR_hl_field(1, HeadResult_5, (MR_Integer) 1))));
      HeadToDeleteGoals_12 = ((MR_Word) ((MR_hl_field(1, HeadResult_5, (MR_Integer) 2))));
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

static void MR_CALL 
check_hlds__simplify__format_call__arg_nums_to_vars_6_p_0(
  MR_Word ArgVars_7,
  MR_Integer NumFormatStringValues_8,
  MR_Word FormatStringValues_9,
  MR_Word * FmtStrVal_10,
  MR_Integer STATE_VARIABLE_Pos_0_19,
  MR_Integer * STATE_VARIABLE_Pos_20)
{
  MR_bool succeeded;
  MR_Integer OrigArgNumFS_12 = ((MR_Integer) ((MR_hl_field(0, FormatStringValues_9, (MR_Integer) 0))));
  MR_Integer OrigArgNumVL_13 = ((MR_Integer) ((MR_hl_field(0, FormatStringValues_9, (MR_Integer) 1))));
  MR_Integer CurArgNumFS_14 = ((MR_Integer) ((MR_hl_field(0, FormatStringValues_9, (MR_Integer) 2))));
  MR_Integer CurArgNumVL_15 = ((MR_Integer) ((MR_hl_field(0, FormatStringValues_9, (MR_Integer) 3))));
  MR_Word VarFS_16;
  MR_Word VarVL_17;
  MR_Word MaybePos_18;
  MR_Box conv0_VarFS_16;
  MR_Box conv1_VarVL_17;

  mercury__list__det_index1_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), ArgVars_7, CurArgNumFS_14, &conv0_VarFS_16);
  VarFS_16 = ((MR_Word) (conv0_VarFS_16));
  mercury__list__det_index1_3_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), ArgVars_7, CurArgNumVL_15, &conv1_VarVL_17);
  VarVL_17 = ((MR_Word) (conv1_VarVL_17));
  succeeded = (NumFormatStringValues_8 == (MR_Integer) 1);
  if (succeeded)
    MaybePos_18 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Tuple Var_21;

    {
      Var_21 = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (STATE_VARIABLE_Pos_0_19));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (OrigArgNumFS_12));
      MR_hl_field(0, Var_21, 2) = ((MR_Box) (OrigArgNumVL_13));
    }
    {
      MaybePos_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybePos_18, 0) = ((MR_Box) (Var_21));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *FmtStrVal_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MaybePos_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarFS_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (VarVL_17));
  }
  *STATE_VARIABLE_Pos_20 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Pos_0_19 + (MR_Unsigned) 1);
}

static MR_Word MR_CALL 
check_hlds__simplify__format_call__get_relevant_vars_from_fmt_str_val_vars_1_f_0(
  MR_Word FmtStrVal_3)
{
  MR_Word Vars_4;
  MR_Word VarFS_6 = ((MR_Word) ((MR_hl_field(0, FmtStrVal_3, (MR_Integer) 1))));
  MR_Word VarVL_7 = ((MR_Word) ((MR_hl_field(0, FmtStrVal_3, (MR_Integer) 2))));
  MR_Word Var_8;
  MR_Word Var_9;

  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (VarVL_7));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_8, 0) = ((MR_Box) (VarFS_6));
    MR_hl_field(1, Var_8, 1) = ((MR_Box) (Var_9));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_8, &Vars_4);
  return Vars_4;
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
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_GoalIdMap_69;
  MR_Word conv1_STATE_VARIABLE_Specs_71;
  MR_Word conv0_STATE_VARIABLE_VarTable_73;

  check_hlds__simplify__format_call__check_format_call_site_14_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_GoalIdMap_69, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Specs_71, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_VarTable_73);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_GoalIdMap_69));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_71));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_VarTable_73));
}

void MR_CALL 
check_hlds__simplify__format_call__analyze_and_optimize_format_calls_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word PredInfo_11,
  MR_Word ProcInfo_12,
  MR_Word GenImplicitStreamWarnings_13,
  MR_Word Goal0_14,
  MR_Word * MaybeGoal_15,
  MR_Word * Specs_16,
  MR_Word STATE_VARIABLE_VarTable_0_56,
  MR_Word * STATE_VARIABLE_VarTable_57)
{
  MR_bool succeeded;
  MR_Word ConjMaps0_18;
  MR_Word Counter0_19;
  MR_Word Goal1_21;
  MR_Word Globals0_22;
  MR_Word Globals_23;
  MR_Word WarnUnknownFormatBool_29;
  MR_Word Origin_30;
  MR_Word WarnUnknownFormat_32;
  MR_Word Params_33;
  MR_Word FormatCallSites_35;
  MR_Word ConjMaps_37;
  MR_Word PredMap_38;
  MR_Word OptTuple_40;
  MR_Word OptFormatCalls_41;
  MR_Word ExecTrace_42;
  MR_Word ShouldOptFormatCalls_43;
  MR_Word GoalIdMap_44;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_20;
  MR_Word OutInfo_24;
  MR_Word TVarSet_25;
  MR_Word InstVarSet_26;
  MR_Word Var_34;
  MR_Word _Counter_36;
  MR_Word Var_39;
  MR_Box conv5_GoalIdMap_44;
  MR_Box conv4_Specs_16;
  MR_Box conv3_STATE_VARIABLE_VarTable_57;

  mercury__map__init_1_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), &ConjMaps0_18);
  mercury__counter__init_2_p_0((MR_Integer) 0, &Counter0_19);
  hlds__goal_path__fill_goal_id_slots_in_proc_body_5_p_0(ModuleInfo_10, STATE_VARIABLE_VarTable_0_56, &Var_20, Goal0_14, &Goal1_21);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals0_22);
  libs__globals__set_option_4_p_0((MR_Integer) 220, (MR_Word) (MR_mkword(3, &check_hlds__simplify__format_call_scalar_common_2[10])), Globals0_22, &Globals_23);
  OutInfo_24 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_23, (MR_Integer) 1);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_11, &TVarSet_25);
  hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_12, &InstVarSet_26);
  libs__globals__lookup_bool_option_3_p_0(Globals_23, (MR_Integer) 48, &WarnUnknownFormatBool_29);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_11, &Origin_30);
  succeeded = (WarnUnknownFormatBool_29 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) Origin_30)) == (MR_Integer) 0);
    if (succeeded)
    {
    }
  }
  if (succeeded)
    WarnUnknownFormat_32 = (MR_Integer) 1;
  else
    WarnUnknownFormat_32 = (MR_Integer) 0;
  {
    Params_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_33, 0) = ((MR_Box) (ModuleInfo_10));
    MR_hl_field(0, Params_33, 1) = (MR_Box) ((MR_Unsigned) (WarnUnknownFormat_32));
  }
  Var_74 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0));
  Var_75 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(Params_33, Goal1_21, &Var_34, (MR_Word) ((MR_Unsigned) 0U), &FormatCallSites_35, Counter0_19, &_Counter_36, ConjMaps0_18, &ConjMaps_37, Var_74, &PredMap_38, Var_75, &Var_39);
  libs__globals__get_opt_tuple_2_p_0(Globals_23, &OptTuple_40);
  OptFormatCalls_41 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_40, (MR_Integer) 0))) >> 17)) & (MR_Integer) 1);
  libs__globals__lookup_bool_option_3_p_0(Globals_23, (MR_Integer) 257, &ExecTrace_42);
  succeeded = (OptFormatCalls_41 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (ExecTrace_42 == (MR_Integer) 0);
  if (succeeded)
    ShouldOptFormatCalls_43 = (MR_Integer) 0;
  else
    ShouldOptFormatCalls_43 = (MR_Integer) 1;
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_77, 0) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_7[0]));
    MR_hl_field(0, Var_77, 1) = ((MR_Box) (check_hlds__simplify__format_call__analyze_and_optimize_format_calls_9_p_0_1));
    MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 7));
    MR_hl_field(0, Var_77, 3) = ((MR_Box) (ModuleInfo_10));
    MR_hl_field(0, Var_77, 4) = ((MR_Box) (PredInfo_11));
    MR_hl_field(0, Var_77, 5) = ((MR_Box) (ProcInfo_12));
    MR_hl_field(0, Var_77, 6) = ((MR_Box) (GenImplicitStreamWarnings_13));
    MR_hl_field(0, Var_77, 7) = ((MR_Box) (ShouldOptFormatCalls_43));
    MR_hl_field(0, Var_77, 8) = ((MR_Box) (ConjMaps_37));
    MR_hl_field(0, Var_77, 9) = ((MR_Box) (PredMap_38));
  }
  Var_78 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0));
  mercury__list__foldl3_8_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_site_0), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[0]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[0]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), Var_77, FormatCallSites_35, ((MR_Box) (Var_78)), &conv5_GoalIdMap_44, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_Specs_16, ((MR_Box) (STATE_VARIABLE_VarTable_0_56)), &conv3_STATE_VARIABLE_VarTable_57);
  GoalIdMap_44 = ((MR_Word) (conv5_GoalIdMap_44));
  *Specs_16 = ((MR_Word) (conv4_Specs_16));
  *STATE_VARIABLE_VarTable_57 = ((MR_Word) (conv3_STATE_VARIABLE_VarTable_57));
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0), GoalIdMap_44);
  if (succeeded)
    *MaybeGoal_15 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word GoalInfo1_46 = ((MR_Word) ((MR_hl_field(0, Goal1_21, (MR_Integer) 1))));
    MR_Word InstMapDelta_47;
    MR_Word NeededVars0_48;
    MR_Word ToDeleteVars0_49;
    MR_Word ToDeleteGoals0_50;
    MR_Word Goal_51;
    MR_Word Var_52;
    MR_Word _NeededVars_53;
    MR_Word _ToDeleteVars_54;
    MR_Word _ToDeleteGoals_55;

    InstMapDelta_47 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo1_46);
    hlds__instmap__instmap_delta_changed_vars_2_p_0(InstMapDelta_47, &NeededVars0_48);
    ToDeleteVars0_49 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    ToDeleteGoals0_50 = mercury__set_tree234__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0));
    check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(Goal1_21, &Goal_51, GoalIdMap_44, &Var_52, NeededVars0_48, &_NeededVars_53, ToDeleteVars0_49, &_ToDeleteVars_54, ToDeleteGoals0_50, &_ToDeleteGoals_55);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeGoal_15 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_51));
    }
  }
}

static void MR_CALL 
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
    MR_Word GoalExpr0_17 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 0))));
    MR_Word GoalInfo_18 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 1))));

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
            MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_193));
            MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_18));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_48 = ((MR_Word) ((MR_hl_field(1, GoalExpr0_17, (MR_Integer) 3))));
          MR_Word STATE_VARIABLE_ToDeleteVars_125_125;
          MR_Word TypeCtorInfo_222_222;
          MR_Word LHSVar_50;
          MR_Word TypeCtorInfo_221_221;

          succeeded = ((MR_tag((MR_Word) Unification_48)) == (MR_Integer) 0);
          if (succeeded)
          {
            LHSVar_50 = ((MR_Word) ((MR_hl_field(0, Unification_48, (MR_Integer) 0))));
            TypeCtorInfo_221_221 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
            succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_221_221, STATE_VARIABLE_NeededVars_0_110, LHSVar_50);
            succeeded = !(succeeded);
            if (succeeded)
            {
              TypeCtorInfo_222_222 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              succeeded = parse_tree__set_of_var__remove_3_p_0(TypeCtorInfo_222_222, LHSVar_50, STATE_VARIABLE_ToDeleteVars_0_112, &STATE_VARIABLE_ToDeleteVars_125_125);
            }
          }
          if (succeeded)
          {
            *STATE_VARIABLE_ToDeleteVars_113 = STATE_VARIABLE_ToDeleteVars_125_125;
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
          MR_Word STATE_VARIABLE_GoalIdMap_116_116;
          MR_Box conv0_OptGoalInfo_26;

          GoalId_25 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_18);
          succeeded = mercury__map__remove_4_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0), ((MR_Box) (GoalId_25)), &conv0_OptGoalInfo_26, STATE_VARIABLE_GoalIdMap_0_108, &STATE_VARIABLE_GoalIdMap_116_116);
          if (succeeded)
          {
            OptGoalInfo_26 = ((MR_Word) (conv0_OptGoalInfo_26));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word GoalToDeleteVars_28;
            MR_Word GoalToDeleteGoals_29;

            *STATE_VARIABLE_GoalIdMap_109 = STATE_VARIABLE_GoalIdMap_116_116;
            *Goal_12 = ((MR_Word) ((MR_hl_field(0, OptGoalInfo_26, (MR_Integer) 0))));
            GoalToDeleteVars_28 = ((MR_Word) ((MR_hl_field(0, OptGoalInfo_26, (MR_Integer) 1))));
            GoalToDeleteGoals_29 = ((MR_Word) ((MR_hl_field(0, OptGoalInfo_26, (MR_Integer) 2))));
            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), GoalToDeleteVars_28, STATE_VARIABLE_ToDeleteVars_0_112, STATE_VARIABLE_ToDeleteVars_113);
            mercury__set_tree234__insert_list_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), GoalToDeleteGoals_29, STATE_VARIABLE_ToDeleteGoals_0_114, STATE_VARIABLE_ToDeleteGoals_115);
            *STATE_VARIABLE_NeededVars_111 = STATE_VARIABLE_NeededVars_0_110;
          }
          else
          {
            MR_Word NonLocals_30;
            MR_Word NewToDeleteGoals_31;
            MR_Word TypeCtorInfo_218_218;
            MR_Word NeededNonLocals_32;

            NonLocals_30 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_18);
            succeeded = mercury__set_tree234__remove_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), ((MR_Box) (GoalId_25)), STATE_VARIABLE_ToDeleteGoals_0_114, &NewToDeleteGoals_31);
            if (succeeded)
            {
              TypeCtorInfo_218_218 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
              parse_tree__set_of_var__intersect_3_p_0(TypeCtorInfo_218_218, NonLocals_30, STATE_VARIABLE_NeededVars_0_110, &NeededNonLocals_32);
              succeeded = parse_tree__set_of_var__is_empty_1_p_0(TypeCtorInfo_218_218, NeededNonLocals_32);
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
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 0))))) {
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
              MR_Word ConjType_57 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Conjuncts0_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))));
              MR_Word Conjuncts_59;
              MR_Word GoalExpr_60;

              check_hlds__simplify__format_call__opt_format_call_sites_in_conj_10_p_0(Conjuncts0_58, &Conjuncts_59, STATE_VARIABLE_GoalIdMap_0_108, STATE_VARIABLE_GoalIdMap_109, STATE_VARIABLE_NeededVars_0_110, STATE_VARIABLE_NeededVars_111, STATE_VARIABLE_ToDeleteVars_0_112, STATE_VARIABLE_ToDeleteVars_113, STATE_VARIABLE_ToDeleteGoals_0_114, STATE_VARIABLE_ToDeleteGoals_115);
              {
                GoalExpr_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_60, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, GoalExpr_60, 1) = (MR_Box) ((MR_Unsigned) (ConjType_57));
                MR_hl_field(3, GoalExpr_60, 2) = ((MR_Box) (Conjuncts_59));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_60));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_18));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts0_61 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
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
                GoalExpr_187 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_187, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, GoalExpr_187, 1) = ((MR_Box) (Disjuncts_62));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_187));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_18));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SwitchVar_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
              MR_Word CanFail_67 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 3))));
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
                GoalExpr_188 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_188, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, GoalExpr_188, 1) = ((MR_Box) (SwitchVar_66));
                MR_hl_field(3, GoalExpr_188, 2) = (MR_Box) ((MR_Unsigned) (CanFail_67));
                MR_hl_field(3, GoalExpr_188, 3) = ((MR_Box) (Cases_69));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_188));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_18));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_88 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
              MR_Word SubGoal0_199 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))));
              MR_Word STATE_VARIABLE_ToDeleteVars_157_157;
              MR_Word TypeCtorInfo_231_231;
              MR_Word TermVar_89;
              MR_Word Var_156;
              MR_Word TypeCtorInfo_230_230;

              succeeded = ((((MR_tag((MR_Word) Reason_88)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_88, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                TermVar_89 = ((MR_Word) ((MR_hl_field(3, Reason_88, (MR_Integer) 1))));
                Var_156 = ((MR_Unsigned) ((MR_hl_field(3, Reason_88, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_156 == (MR_Integer) 1);
                if (succeeded)
                {
                  TypeCtorInfo_230_230 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                  succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_230_230, STATE_VARIABLE_NeededVars_0_110, TermVar_89);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    TypeCtorInfo_231_231 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                    succeeded = parse_tree__set_of_var__remove_3_p_0(TypeCtorInfo_231_231, TermVar_89, STATE_VARIABLE_ToDeleteVars_0_112, &STATE_VARIABLE_ToDeleteVars_157_157);
                  }
                }
              }
              if (succeeded)
              {
                MR_Word next_value_of_Goal0_11 = SubGoal0_199;
                MR_Word next_value_of_STATE_VARIABLE_ToDeleteVars_0_112 = STATE_VARIABLE_ToDeleteVars_157_157;

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
                  GoalExpr_194 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, GoalExpr_194, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, GoalExpr_194, 1) = ((MR_Box) (Reason_88));
                  MR_hl_field(3, GoalExpr_194, 2) = ((MR_Box) (SubGoal_195));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_12 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_194));
                  MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_18));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_70 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
              MR_Word Cond0_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 2))));
              MR_Word Then0_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 3))));
              MR_Word Else0_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 4))));
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
              MR_Word STATE_VARIABLE_GoalIdMap_146_146;
              MR_Word STATE_VARIABLE_GoalIdMap_147_147;
              MR_Word GoalExpr_192;

              check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(Else0_73, &Else_74, STATE_VARIABLE_GoalIdMap_0_108, &STATE_VARIABLE_GoalIdMap_146_146, STATE_VARIABLE_NeededVars_0_110, &NeededVarsBeforeElse_75, STATE_VARIABLE_ToDeleteVars_0_112, &ToDeleteVarsBeforeElse_76, STATE_VARIABLE_ToDeleteGoals_0_114, &ToDeleteGoalsBeforeElse_77);
              check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(Then0_72, &Then_78, STATE_VARIABLE_GoalIdMap_146_146, &STATE_VARIABLE_GoalIdMap_147_147, STATE_VARIABLE_NeededVars_0_110, &NeededVarsBeforeThen_79, STATE_VARIABLE_ToDeleteVars_0_112, &ToDeleteVarsBeforeThen_80, STATE_VARIABLE_ToDeleteGoals_0_114, &ToDeleteGoalsBeforeThen_81);
              check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(Cond0_71, &Cond_82, STATE_VARIABLE_GoalIdMap_147_147, STATE_VARIABLE_GoalIdMap_109, NeededVarsBeforeThen_79, &NeededVarsBeforeCond_83, ToDeleteVarsBeforeThen_80, &ToDeleteVarsBeforeCond_84, ToDeleteGoalsBeforeThen_81, &ToDeleteGoalsBeforeCond_85);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NeededVarsBeforeCond_83, NeededVarsBeforeElse_75, STATE_VARIABLE_NeededVars_111);
              parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ToDeleteVarsBeforeCond_84, ToDeleteVarsBeforeElse_76, STATE_VARIABLE_ToDeleteVars_113);
              mercury__set_tree234__union_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), ToDeleteGoalsBeforeCond_85, ToDeleteGoalsBeforeElse_77, STATE_VARIABLE_ToDeleteGoals_115);
              {
                GoalExpr_192 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_192, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, GoalExpr_192, 1) = ((MR_Box) (Vars_70));
                MR_hl_field(3, GoalExpr_192, 2) = ((MR_Box) (Cond_82));
                MR_hl_field(3, GoalExpr_192, 3) = ((MR_Box) (Then_78));
                MR_hl_field(3, GoalExpr_192, 4) = ((MR_Box) (Else_74));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_192));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_18));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand0_90 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_17, (MR_Integer) 1))));
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
                    MR_Word AtomicType_91 = ((MR_Unsigned) ((MR_hl_field(1, ShortHand0_90, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word OuterVars_92 = ((MR_Word) ((MR_hl_field(1, ShortHand0_90, (MR_Integer) 1))));
                    MR_Word InnerVars_93 = ((MR_Word) ((MR_hl_field(1, ShortHand0_90, (MR_Integer) 2))));
                    MR_Word OutputVars_94 = ((MR_Word) ((MR_hl_field(1, ShortHand0_90, (MR_Integer) 3))));
                    MR_Word MainGoal0_95 = ((MR_Word) ((MR_hl_field(1, ShortHand0_90, (MR_Integer) 4))));
                    MR_Word OrElseGoals0_96 = ((MR_Word) ((MR_hl_field(1, ShortHand0_90, (MR_Integer) 5))));
                    MR_Word OrElseInners_97 = ((MR_Word) ((MR_hl_field(1, ShortHand0_90, (MR_Integer) 6))));
                    MR_Word MainGoal_98;
                    MR_Word NeededVarsMain_99;
                    MR_Word ToDeleteVarsMain_100;
                    MR_Word ToDeleteGoalsMain_101;
                    MR_Word OrElseGoals_102;
                    MR_Word ShortHand_103;
                    MR_Word STATE_VARIABLE_GoalIdMap_166_166;
                    MR_Word Var_172;
                    MR_Word Var_174;
                    MR_Word Var_176;
                    MR_Word NeededVarsSets_201;
                    MR_Word ToDeleteVarsSets_202;
                    MR_Word ToDeleteGoalsSets_203;

                    check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(MainGoal0_95, &MainGoal_98, STATE_VARIABLE_GoalIdMap_0_108, &STATE_VARIABLE_GoalIdMap_166_166, STATE_VARIABLE_NeededVars_0_110, &NeededVarsMain_99, STATE_VARIABLE_ToDeleteVars_0_112, &ToDeleteVarsMain_100, STATE_VARIABLE_ToDeleteGoals_0_114, &ToDeleteGoalsMain_101);
                    check_hlds__simplify__format_call__opt_format_call_sites_in_disj_13_p_0(OrElseGoals0_96, &OrElseGoals_102, STATE_VARIABLE_GoalIdMap_166_166, STATE_VARIABLE_GoalIdMap_109, STATE_VARIABLE_NeededVars_0_110, (MR_Word) ((MR_Unsigned) 0U), &NeededVarsSets_201, STATE_VARIABLE_ToDeleteVars_0_112, (MR_Word) ((MR_Unsigned) 0U), &ToDeleteVarsSets_202, STATE_VARIABLE_ToDeleteGoals_0_114, (MR_Word) ((MR_Unsigned) 0U), &ToDeleteGoalsSets_203);
                    {
                      Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_172, 0) = ((MR_Box) (NeededVarsMain_99));
                      MR_hl_field(1, Var_172, 1) = ((MR_Box) (NeededVarsSets_201));
                    }
                    *STATE_VARIABLE_NeededVars_111 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_172);
                    {
                      Var_174 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_174, 0) = ((MR_Box) (ToDeleteVarsMain_100));
                      MR_hl_field(1, Var_174, 1) = ((MR_Box) (ToDeleteVarsSets_202));
                    }
                    *STATE_VARIABLE_ToDeleteVars_113 = parse_tree__set_of_var__intersect_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_174);
                    {
                      Var_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_176, 0) = ((MR_Box) (ToDeleteGoalsMain_101));
                      MR_hl_field(1, Var_176, 1) = ((MR_Box) (ToDeleteGoalsSets_203));
                    }
                    *STATE_VARIABLE_ToDeleteGoals_115 = mercury__set_tree234__union_list_1_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), Var_176);
                    {
                      ShortHand_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, ShortHand_103, 0) = (MR_Box) ((MR_Unsigned) (AtomicType_91));
                      MR_hl_field(1, ShortHand_103, 1) = ((MR_Box) (OuterVars_92));
                      MR_hl_field(1, ShortHand_103, 2) = ((MR_Box) (InnerVars_93));
                      MR_hl_field(1, ShortHand_103, 3) = ((MR_Box) (OutputVars_94));
                      MR_hl_field(1, ShortHand_103, 4) = ((MR_Box) (MainGoal_98));
                      MR_hl_field(1, ShortHand_103, 5) = ((MR_Box) (OrElseGoals_102));
                      MR_hl_field(1, ShortHand_103, 6) = ((MR_Box) (OrElseInners_97));
                    }
                    {
                      GoalExpr_212 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, GoalExpr_212, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(3, GoalExpr_212, 1) = ((MR_Box) (ShortHand_103));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word MaybeIO_104 = ((MR_Word) ((MR_hl_field(2, ShortHand0_90, (MR_Integer) 0))));
                    MR_Word ResultVar_105 = ((MR_Word) ((MR_hl_field(2, ShortHand0_90, (MR_Integer) 1))));
                    MR_Word SubGoal0_204 = ((MR_Word) ((MR_hl_field(2, ShortHand0_90, (MR_Integer) 2))));
                    MR_Word SubGoal_205;
                    MR_Word ShortHand_206;

                    check_hlds__simplify__format_call__opt_format_call_sites_in_goal_10_p_0(SubGoal0_204, &SubGoal_205, STATE_VARIABLE_GoalIdMap_0_108, STATE_VARIABLE_GoalIdMap_109, STATE_VARIABLE_NeededVars_0_110, STATE_VARIABLE_NeededVars_111, STATE_VARIABLE_ToDeleteVars_0_112, STATE_VARIABLE_ToDeleteVars_113, STATE_VARIABLE_ToDeleteGoals_0_114, STATE_VARIABLE_ToDeleteGoals_115);
                    {
                      ShortHand_206 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, ShortHand_206, 0) = ((MR_Box) (MaybeIO_104));
                      MR_hl_field(2, ShortHand_206, 1) = ((MR_Box) (ResultVar_105));
                      MR_hl_field(2, ShortHand_206, 2) = ((MR_Box) (SubGoal_205));
                    }
                    {
                      GoalExpr_212 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, GoalExpr_212, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                      MR_hl_field(3, GoalExpr_212, 1) = ((MR_Box) (ShortHand_206));
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_212));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_18));
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
    MR_Word Case0_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_31;
    MR_Word Cases_32;
    MR_Word FirstConsId_40 = ((MR_Word) ((MR_hl_field(0, Case0_29, (MR_Integer) 0))));
    MR_Word LaterConsIds_41 = ((MR_Word) ((MR_hl_field(0, Case0_29, (MR_Integer) 1))));
    MR_Word Goal0_42 = ((MR_Word) ((MR_hl_field(0, Case0_29, (MR_Integer) 2))));
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
      STATE_VARIABLE_NeededVarsSets_56_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_NeededVarsSets_56_56, 0) = ((MR_Box) (NeededVars_44));
      MR_hl_field(1, STATE_VARIABLE_NeededVarsSets_56_56, 1) = ((MR_Box) (STATE_VARIABLE_NeededVarsSets_0_6));
    }
    {
      STATE_VARIABLE_ToDeleteVarsSets_57_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_ToDeleteVarsSets_57_57, 0) = ((MR_Box) (ToDeleteVars_45));
      MR_hl_field(1, STATE_VARIABLE_ToDeleteVarsSets_57_57, 1) = ((MR_Box) (STATE_VARIABLE_ToDeleteVarsSets_0_9));
    }
    {
      STATE_VARIABLE_ToDeleteGoalSets_58_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_ToDeleteGoalSets_58_58, 0) = ((MR_Box) (ToDeleteGoals_46));
      MR_hl_field(1, STATE_VARIABLE_ToDeleteGoalSets_58_58, 1) = ((MR_Box) (STATE_VARIABLE_ToDeleteGoalSets_0_12));
    }
    {
      Case_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_31, 0) = ((MR_Box) (FirstConsId_40));
      MR_hl_field(0, Case_31, 1) = ((MR_Box) (LaterConsIds_41));
      MR_hl_field(0, Case_31, 2) = ((MR_Box) (Goal_43));
    }
    check_hlds__simplify__format_call__opt_format_call_sites_in_switch_13_p_0(Cases0_30, &Cases_32, STATE_VARIABLE_GoalIdMap_55_55, STATE_VARIABLE_GoalIdMap_4, NeededVars0_5, STATE_VARIABLE_NeededVarsSets_56_56, STATE_VARIABLE_NeededVarsSets_7, ToDeleteVars0_8, STATE_VARIABLE_ToDeleteVarsSets_57_57, STATE_VARIABLE_ToDeleteVarsSets_10, ToDeleteGoals0_11, STATE_VARIABLE_ToDeleteGoalSets_58_58, STATE_VARIABLE_ToDeleteGoalSets_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_31));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_32));
    }
  }
}

static void MR_CALL 
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
    MR_Word Goal0_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
      STATE_VARIABLE_NeededVarsSets_52_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_NeededVarsSets_52_52, 0) = ((MR_Box) (NeededVars_40));
      MR_hl_field(1, STATE_VARIABLE_NeededVarsSets_52_52, 1) = ((MR_Box) (STATE_VARIABLE_NeededVarsSets_0_6));
    }
    {
      STATE_VARIABLE_ToDeleteVarsSets_53_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_ToDeleteVarsSets_53_53, 0) = ((MR_Box) (ToDeleteVars_41));
      MR_hl_field(1, STATE_VARIABLE_ToDeleteVarsSets_53_53, 1) = ((MR_Box) (STATE_VARIABLE_ToDeleteVarsSets_0_9));
    }
    {
      STATE_VARIABLE_ToDeleteGoalSets_54_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_ToDeleteGoalSets_54_54, 0) = ((MR_Box) (ToDeleteGoals_42));
      MR_hl_field(1, STATE_VARIABLE_ToDeleteGoalSets_54_54, 1) = ((MR_Box) (STATE_VARIABLE_ToDeleteGoalSets_0_12));
    }
    check_hlds__simplify__format_call__opt_format_call_sites_in_disj_13_p_0(Goals0_30, &Goals_32, STATE_VARIABLE_GoalIdMap_51_51, STATE_VARIABLE_GoalIdMap_4, NeededVars0_5, STATE_VARIABLE_NeededVarsSets_52_52, STATE_VARIABLE_NeededVarsSets_7, ToDeleteVars0_8, STATE_VARIABLE_ToDeleteVarsSets_53_53, STATE_VARIABLE_ToDeleteVarsSets_10, ToDeleteGoals0_11, STATE_VARIABLE_ToDeleteGoalSets_54_54, STATE_VARIABLE_ToDeleteGoalSets_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_31));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_32));
    }
  }
}

static void MR_CALL 
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
    MR_Word HeadGoal0_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TailGoals0_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
    HeadGoalExpr_32 = ((MR_Word) ((MR_hl_field(0, HeadGoal_31, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) HeadGoalExpr_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadGoalExpr_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_51 = ((MR_Unsigned) ((MR_hl_field(3, HeadGoalExpr_32, (MR_Integer) 1))) & (MR_Integer) 1);
      HeadSubGoals_34 = ((MR_Word) ((MR_hl_field(3, HeadGoalExpr_32, (MR_Integer) 2))));
      succeeded = (Var_51 == (MR_Integer) 0);
    }
    if (succeeded)
      *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadSubGoals_34, TailGoals_30);
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadGoal_31));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailGoals_30));
      }
  }
}

static MR_Box MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Goal_5;

  conv0_Goal_5 = check_hlds__simplify__format_call__project_case_goal_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Goal_5));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(
  MR_Word Params_1,
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
      MR_Word Goal_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GoalExpr_40;
      MR_Word GoalInfo_41;
      MR_Word STATE_VARIABLE_FormatCallSites_156_156;
      MR_Word STATE_VARIABLE_Counter_157_157;
      MR_Word STATE_VARIABLE_ConjMaps_158_158;
      MR_Word STATE_VARIABLE_PredMap_159_159;
      MR_Word STATE_VARIABLE_RelevantVars_160_160;

      check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(Params_1, Goals_33, HeadVar__3_3, STATE_VARIABLE_FormatCallSites_0_4, &STATE_VARIABLE_FormatCallSites_156_156, STATE_VARIABLE_Counter_0_6, &STATE_VARIABLE_Counter_157_157, STATE_VARIABLE_ConjMaps_0_8, &STATE_VARIABLE_ConjMaps_158_158, STATE_VARIABLE_PredMap_0_10, &STATE_VARIABLE_PredMap_159_159, STATE_VARIABLE_RelevantVars_0_12, &STATE_VARIABLE_RelevantVars_160_160);
      GoalExpr_40 = ((MR_Word) ((MR_hl_field(0, Goal_32, (MR_Integer) 0))));
      GoalInfo_41 = ((MR_Word) ((MR_hl_field(0, Goal_32, (MR_Integer) 1))));
      switch (MR_tag((MR_Word) GoalExpr_40)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_56 = (MR_Word) ((MR_Word) (GoalExpr_40));
            MR_Word SubGoalId_57;
            MR_Word STATE_VARIABLE_PredMap_194_194;

            check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(Params_1, SubGoal_56, &SubGoalId_57, STATE_VARIABLE_FormatCallSites_156_156, STATE_VARIABLE_FormatCallSites_5, STATE_VARIABLE_Counter_157_157, STATE_VARIABLE_Counter_7, STATE_VARIABLE_ConjMaps_158_158, STATE_VARIABLE_ConjMaps_9, STATE_VARIABLE_PredMap_159_159, &STATE_VARIABLE_PredMap_194_194, STATE_VARIABLE_RelevantVars_160_160, STATE_VARIABLE_RelevantVars_13);
            mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), ((MR_Box) (SubGoalId_57)), ((MR_Box) (HeadVar__3_3)), STATE_VARIABLE_PredMap_194_194, STATE_VARIABLE_PredMap_11);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RHS_118 = ((MR_Word) ((MR_hl_field(1, GoalExpr_40, (MR_Integer) 1))));
            MR_Word Unification_120 = ((MR_Word) ((MR_hl_field(1, GoalExpr_40, (MR_Integer) 3))));
            MR_Word STATE_VARIABLE_ConjMaps_242_242;
            MR_Word STATE_VARIABLE_PredMap_243_243;
            MR_Word STATE_VARIABLE_RelevantVars_244_244;

            check_hlds__simplify__format_call__format_call_traverse_unify_9_p_0(Unification_120, GoalInfo_41, HeadVar__3_3, STATE_VARIABLE_ConjMaps_158_158, &STATE_VARIABLE_ConjMaps_242_242, STATE_VARIABLE_PredMap_159_159, &STATE_VARIABLE_PredMap_243_243, STATE_VARIABLE_RelevantVars_160_160, &STATE_VARIABLE_RelevantVars_244_244);
            switch (MR_tag((MR_Word) RHS_118)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *STATE_VARIABLE_FormatCallSites_5 = STATE_VARIABLE_FormatCallSites_156_156;
                  *STATE_VARIABLE_Counter_7 = STATE_VARIABLE_Counter_157_157;
                  *STATE_VARIABLE_ConjMaps_9 = STATE_VARIABLE_ConjMaps_242_242;
                  *STATE_VARIABLE_PredMap_11 = STATE_VARIABLE_PredMap_243_243;
                  *STATE_VARIABLE_RelevantVars_13 = STATE_VARIABLE_RelevantVars_244_244;
                }
                break;
              case (MR_Integer) 1:
                {
                  *STATE_VARIABLE_FormatCallSites_5 = STATE_VARIABLE_FormatCallSites_156_156;
                  *STATE_VARIABLE_Counter_7 = STATE_VARIABLE_Counter_157_157;
                  *STATE_VARIABLE_ConjMaps_9 = STATE_VARIABLE_ConjMaps_242_242;
                  *STATE_VARIABLE_PredMap_11 = STATE_VARIABLE_PredMap_243_243;
                  *STATE_VARIABLE_RelevantVars_13 = STATE_VARIABLE_RelevantVars_244_244;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word LambdaGoal_128 = ((MR_Word) ((MR_hl_field(2, RHS_118, (MR_Integer) 4))));
                  MR_Word LambdaGoalId_129;
                  MR_Word STATE_VARIABLE_PredMap_248_248;

                  check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(Params_1, LambdaGoal_128, &LambdaGoalId_129, STATE_VARIABLE_FormatCallSites_156_156, STATE_VARIABLE_FormatCallSites_5, STATE_VARIABLE_Counter_157_157, STATE_VARIABLE_Counter_7, STATE_VARIABLE_ConjMaps_242_242, STATE_VARIABLE_ConjMaps_9, STATE_VARIABLE_PredMap_243_243, &STATE_VARIABLE_PredMap_248_248, STATE_VARIABLE_RelevantVars_244_244, STATE_VARIABLE_RelevantVars_13);
                  mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), ((MR_Box) (LambdaGoalId_129)), ((MR_Box) (HeadVar__3_3)), STATE_VARIABLE_PredMap_248_248, STATE_VARIABLE_PredMap_11);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_98 = ((MR_Word) ((MR_hl_field(2, GoalExpr_40, (MR_Integer) 0))));
            MR_Word ArgVars_100 = ((MR_Word) ((MR_hl_field(2, GoalExpr_40, (MR_Integer) 2))));
            MR_Word WarnUnknownFormat_104 = ((MR_Unsigned) ((MR_hl_field(0, Params_1, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word PredInfo_105;
            MR_Word ModuleName_106;
            MR_String Name_107;
            MR_Word ModuleInfo_276 = ((MR_Word) ((MR_hl_field(0, Params_1, (MR_Integer) 0))));
            MR_Word Kind_108;

            hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_276, PredId_98, &PredInfo_105);
            ModuleName_106 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_105);
            Name_107 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_105);
            succeeded = check_hlds__simplify__format_call__is_format_call_kind_and_vars_6_p_0(PredInfo_105, ModuleName_106, Name_107, ArgVars_100, GoalInfo_41, &Kind_108);
            if (succeeded)
            {
              MR_Word GoalId_109;
              MR_Word Context_110;
              MR_Word FormatCallSite_111;
              MR_Word Var_228;

              GoalId_109 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_41);
              Context_110 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_41);
              {
                FormatCallSite_111 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, FormatCallSite_111, 0) = ((MR_Box) (GoalId_109));
                MR_hl_field(0, FormatCallSite_111, 1) = ((MR_Box) (GoalInfo_41));
                MR_hl_field(0, FormatCallSite_111, 2) = ((MR_Box) (Kind_108));
                MR_hl_field(0, FormatCallSite_111, 3) = ((MR_Box) (PredId_98));
                MR_hl_field(0, FormatCallSite_111, 4) = ((MR_Box) (Context_110));
                MR_hl_field(0, FormatCallSite_111, 5) = ((MR_Box) (HeadVar__3_3));
                MR_hl_field(0, FormatCallSite_111, 6) = (MR_Box) ((MR_Unsigned) (WarnUnknownFormat_104));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_FormatCallSites_5 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (FormatCallSite_111));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_FormatCallSites_156_156));
              }
              Var_228 = check_hlds__simplify__format_call__get_relevant_vars_from_format_call_kind_1_f_0(Kind_108);
              parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_228, STATE_VARIABLE_RelevantVars_160_160, STATE_VARIABLE_RelevantVars_13);
              *STATE_VARIABLE_ConjMaps_9 = STATE_VARIABLE_ConjMaps_158_158;
            }
            else
            {
              MR_Word Var_295;

              Var_295 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_106, Var_295);
              if (succeeded)
              {
                MR_Word ArgVarA_112;
                MR_Word ArgVarB_113;
                MR_Word ResultVar_114;
                MR_Word TypeCtorInfo_289_289;
                MR_Word Var_230;
                MR_Word Var_231;
                MR_Word Var_232;

                if ((strcmp(Name_107, (MR_String) "++") == 0))
                  succeeded = MR_TRUE;
                else
                if ((strcmp(Name_107, (MR_String) "append") == 0))
                  succeeded = MR_TRUE;
                else
                  succeeded = MR_FALSE;
                if (succeeded)
                {
                  succeeded = (ArgVars_100 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    ArgVarA_112 = ((MR_Word) ((MR_hl_field(1, ArgVars_100, (MR_Integer) 0))));
                    Var_230 = ((MR_Word) ((MR_hl_field(1, ArgVars_100, (MR_Integer) 1))));
                    succeeded = (Var_230 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      ArgVarB_113 = ((MR_Word) ((MR_hl_field(1, Var_230, (MR_Integer) 0))));
                      Var_231 = ((MR_Word) ((MR_hl_field(1, Var_230, (MR_Integer) 1))));
                      succeeded = (Var_231 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ResultVar_114 = ((MR_Word) ((MR_hl_field(1, Var_231, (MR_Integer) 0))));
                        Var_232 = ((MR_Word) ((MR_hl_field(1, Var_231, (MR_Integer) 1))));
                        succeeded = (Var_232 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          TypeCtorInfo_289_289 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                          succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_289_289, STATE_VARIABLE_RelevantVars_160_160, ResultVar_114);
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  MR_Word StringState_115;
                  MR_Word STATE_VARIABLE_RelevantVars_233_233;
                  MR_Word STATE_VARIABLE_RelevantVars_234_234;
                  MR_Word GoalId_267;

                  parse_tree__set_of_var__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResultVar_114, STATE_VARIABLE_RelevantVars_160_160, &STATE_VARIABLE_RelevantVars_233_233);
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVarA_112, STATE_VARIABLE_RelevantVars_233_233, &STATE_VARIABLE_RelevantVars_234_234);
                  parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVarB_113, STATE_VARIABLE_RelevantVars_234_234, STATE_VARIABLE_RelevantVars_13);
                  GoalId_267 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_41);
                  {
                    StringState_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, StringState_115, 0) = ((MR_Box) (GoalId_267));
                    MR_hl_field(1, StringState_115, 1) = ((MR_Box) (ArgVarA_112));
                    MR_hl_field(1, StringState_115, 2) = ((MR_Box) (ArgVarB_113));
                  }
                  check_hlds__simplify__format_call__add_to_string_map_5_p_0(HeadVar__3_3, ResultVar_114, StringState_115, STATE_VARIABLE_ConjMaps_158_158, STATE_VARIABLE_ConjMaps_9);
                }
                else
                {
                  MR_Word ListSkeletonVar_116;
                  MR_Word ResultVar_271;
                  MR_Word TypeCtorInfo_291_291;
                  MR_Word Var_237;
                  MR_Word Var_238;

                  succeeded = (strcmp(Name_107, (MR_String) "append_list") == 0);
                  if (succeeded)
                  {
                    succeeded = (ArgVars_100 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      ListSkeletonVar_116 = ((MR_Word) ((MR_hl_field(1, ArgVars_100, (MR_Integer) 0))));
                      Var_237 = ((MR_Word) ((MR_hl_field(1, ArgVars_100, (MR_Integer) 1))));
                      succeeded = (Var_237 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ResultVar_271 = ((MR_Word) ((MR_hl_field(1, Var_237, (MR_Integer) 0))));
                        Var_238 = ((MR_Word) ((MR_hl_field(1, Var_237, (MR_Integer) 1))));
                        succeeded = (Var_238 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          TypeCtorInfo_291_291 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                          succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_291_291, STATE_VARIABLE_RelevantVars_160_160, ResultVar_271);
                        }
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word STATE_VARIABLE_RelevantVars_239_239;
                    MR_Word GoalId_268;
                    MR_Word StringState_269;

                    parse_tree__set_of_var__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResultVar_271, STATE_VARIABLE_RelevantVars_160_160, &STATE_VARIABLE_RelevantVars_239_239);
                    parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ListSkeletonVar_116, STATE_VARIABLE_RelevantVars_239_239, STATE_VARIABLE_RelevantVars_13);
                    GoalId_268 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(GoalInfo_41);
                    {
                      StringState_269 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, StringState_269, 0) = ((MR_Box) (GoalId_268));
                      MR_hl_field(2, StringState_269, 1) = ((MR_Box) (ListSkeletonVar_116));
                    }
                    check_hlds__simplify__format_call__add_to_string_map_5_p_0(HeadVar__3_3, ResultVar_271, StringState_269, STATE_VARIABLE_ConjMaps_158_158, STATE_VARIABLE_ConjMaps_9);
                  }
                  else
                  {
                    *STATE_VARIABLE_RelevantVars_13 = STATE_VARIABLE_RelevantVars_160_160;
                    *STATE_VARIABLE_ConjMaps_9 = STATE_VARIABLE_ConjMaps_158_158;
                  }
                }
              }
              else
              {
                *STATE_VARIABLE_RelevantVars_13 = STATE_VARIABLE_RelevantVars_160_160;
                *STATE_VARIABLE_ConjMaps_9 = STATE_VARIABLE_ConjMaps_158_158;
              }
              *STATE_VARIABLE_FormatCallSites_5 = STATE_VARIABLE_FormatCallSites_156_156;
            }
            *STATE_VARIABLE_Counter_7 = STATE_VARIABLE_Counter_157_157;
            *STATE_VARIABLE_PredMap_11 = STATE_VARIABLE_PredMap_159_159;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_40, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *STATE_VARIABLE_FormatCallSites_5 = STATE_VARIABLE_FormatCallSites_156_156;
                *STATE_VARIABLE_Counter_7 = STATE_VARIABLE_Counter_157_157;
                *STATE_VARIABLE_ConjMaps_9 = STATE_VARIABLE_ConjMaps_158_158;
                *STATE_VARIABLE_PredMap_11 = STATE_VARIABLE_PredMap_159_159;
                *STATE_VARIABLE_RelevantVars_13 = STATE_VARIABLE_RelevantVars_160_160;
              }
              break;
            case (MR_Integer) 1:
              {
                *STATE_VARIABLE_FormatCallSites_5 = STATE_VARIABLE_FormatCallSites_156_156;
                *STATE_VARIABLE_Counter_7 = STATE_VARIABLE_Counter_157_157;
                *STATE_VARIABLE_ConjMaps_9 = STATE_VARIABLE_ConjMaps_158_158;
                *STATE_VARIABLE_PredMap_11 = STATE_VARIABLE_PredMap_159_159;
                *STATE_VARIABLE_RelevantVars_13 = STATE_VARIABLE_RelevantVars_160_160;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Conjuncts_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_40, (MR_Integer) 2))));
                MR_Word next_value_of_HeadVar__2_2 = Conjuncts_43;
                MR_Word next_value_of_STATE_VARIABLE_FormatCallSites_0_4 = STATE_VARIABLE_FormatCallSites_156_156;
                MR_Word next_value_of_STATE_VARIABLE_Counter_0_6 = STATE_VARIABLE_Counter_157_157;
                MR_Word next_value_of_STATE_VARIABLE_ConjMaps_0_8 = STATE_VARIABLE_ConjMaps_158_158;
                MR_Word next_value_of_STATE_VARIABLE_PredMap_0_10 = STATE_VARIABLE_PredMap_159_159;
                MR_Word next_value_of_STATE_VARIABLE_RelevantVars_0_12 = STATE_VARIABLE_RelevantVars_160_160;

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
                MR_Word Disjuncts_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_40, (MR_Integer) 1))));

                check_hlds__simplify__format_call__format_call_traverse_disj_13_p_0(Params_1, Disjuncts_44, HeadVar__3_3, STATE_VARIABLE_FormatCallSites_156_156, STATE_VARIABLE_FormatCallSites_5, STATE_VARIABLE_Counter_157_157, STATE_VARIABLE_Counter_7, STATE_VARIABLE_ConjMaps_158_158, STATE_VARIABLE_ConjMaps_9, STATE_VARIABLE_PredMap_159_159, STATE_VARIABLE_PredMap_11, STATE_VARIABLE_RelevantVars_160_160, STATE_VARIABLE_RelevantVars_13);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_40, (MR_Integer) 3))));
                MR_Word Disjuncts_265;

                Disjuncts_265 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[8]), Cases_47);
                check_hlds__simplify__format_call__format_call_traverse_disj_13_p_0(Params_1, Disjuncts_265, HeadVar__3_3, STATE_VARIABLE_FormatCallSites_156_156, STATE_VARIABLE_FormatCallSites_5, STATE_VARIABLE_Counter_157_157, STATE_VARIABLE_Counter_7, STATE_VARIABLE_ConjMaps_158_158, STATE_VARIABLE_ConjMaps_9, STATE_VARIABLE_PredMap_159_159, STATE_VARIABLE_PredMap_11, STATE_VARIABLE_RelevantVars_160_160, STATE_VARIABLE_RelevantVars_13);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr_40, (MR_Integer) 1))));
                MR_Word SubGoal_266 = ((MR_Word) ((MR_hl_field(3, GoalExpr_40, (MR_Integer) 2))));

                switch (MR_tag((MR_Word) Reason_58)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_220;
                      MR_Word next_value_of_HeadVar__2_2;
                      MR_Word next_value_of_STATE_VARIABLE_FormatCallSites_0_4;
                      MR_Word next_value_of_STATE_VARIABLE_Counter_0_6;
                      MR_Word next_value_of_STATE_VARIABLE_ConjMaps_0_8;
                      MR_Word next_value_of_STATE_VARIABLE_PredMap_0_10;
                      MR_Word next_value_of_STATE_VARIABLE_RelevantVars_0_12;

                      {
                        Var_220 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_220, 0) = ((MR_Box) (SubGoal_266));
                        MR_hl_field(1, Var_220, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      // direct tailcall eliminated
                      ;
                      next_value_of_HeadVar__2_2 = Var_220;
                      next_value_of_STATE_VARIABLE_FormatCallSites_0_4 = STATE_VARIABLE_FormatCallSites_156_156;
                      next_value_of_STATE_VARIABLE_Counter_0_6 = STATE_VARIABLE_Counter_157_157;
                      next_value_of_STATE_VARIABLE_ConjMaps_0_8 = STATE_VARIABLE_ConjMaps_158_158;
                      next_value_of_STATE_VARIABLE_PredMap_0_10 = STATE_VARIABLE_PredMap_159_159;
                      next_value_of_STATE_VARIABLE_RelevantVars_0_12 = STATE_VARIABLE_RelevantVars_160_160;
                      HeadVar__2_2 = next_value_of_HeadVar__2_2;
                      STATE_VARIABLE_FormatCallSites_0_4 = next_value_of_STATE_VARIABLE_FormatCallSites_0_4;
                      STATE_VARIABLE_Counter_0_6 = next_value_of_STATE_VARIABLE_Counter_0_6;
                      STATE_VARIABLE_ConjMaps_0_8 = next_value_of_STATE_VARIABLE_ConjMaps_0_8;
                      STATE_VARIABLE_PredMap_0_10 = next_value_of_STATE_VARIABLE_PredMap_0_10;
                      STATE_VARIABLE_RelevantVars_0_12 = next_value_of_STATE_VARIABLE_RelevantVars_0_12;
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word HeadWarning_61 = ((MR_Unsigned) ((MR_hl_field(1, Reason_58, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word TailWarnings_62 = ((MR_Word) ((MR_hl_field(1, Reason_58, (MR_Integer) 1))));
                      MR_Word Warnings_63;

                      {
                        Warnings_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Warnings_63, 0) = ((MR_Box) (HeadWarning_61));
                        MR_hl_field(1, Warnings_63, 1) = ((MR_Box) (TailWarnings_62));
                      }
                      succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), ((MR_Box) ((MR_Integer) 5)), Warnings_63);
                      if (succeeded)
                      {
                        MR_Word ModuleInfo_64 = ((MR_Word) ((MR_hl_field(0, Params_1, (MR_Integer) 0))));
                        MR_Word NewParams_66;
                        MR_Word Var_206;
                        MR_Word next_value_of_Params_1;
                        MR_Word next_value_of_HeadVar__2_2;
                        MR_Word next_value_of_STATE_VARIABLE_FormatCallSites_0_4;
                        MR_Word next_value_of_STATE_VARIABLE_Counter_0_6;
                        MR_Word next_value_of_STATE_VARIABLE_ConjMaps_0_8;
                        MR_Word next_value_of_STATE_VARIABLE_PredMap_0_10;
                        MR_Word next_value_of_STATE_VARIABLE_RelevantVars_0_12;

                        {
                          NewParams_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(0, NewParams_66, 0) = ((MR_Box) (ModuleInfo_64));
                          MR_hl_field(0, NewParams_66, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                        }
                        {
                          Var_206 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_206, 0) = ((MR_Box) (SubGoal_266));
                          MR_hl_field(1, Var_206, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        // direct tailcall eliminated
                        ;
                        next_value_of_Params_1 = NewParams_66;
                        next_value_of_HeadVar__2_2 = Var_206;
                        next_value_of_STATE_VARIABLE_FormatCallSites_0_4 = STATE_VARIABLE_FormatCallSites_156_156;
                        next_value_of_STATE_VARIABLE_Counter_0_6 = STATE_VARIABLE_Counter_157_157;
                        next_value_of_STATE_VARIABLE_ConjMaps_0_8 = STATE_VARIABLE_ConjMaps_158_158;
                        next_value_of_STATE_VARIABLE_PredMap_0_10 = STATE_VARIABLE_PredMap_159_159;
                        next_value_of_STATE_VARIABLE_RelevantVars_0_12 = STATE_VARIABLE_RelevantVars_160_160;
                        Params_1 = next_value_of_Params_1;
                        HeadVar__2_2 = next_value_of_HeadVar__2_2;
                        STATE_VARIABLE_FormatCallSites_0_4 = next_value_of_STATE_VARIABLE_FormatCallSites_0_4;
                        STATE_VARIABLE_Counter_0_6 = next_value_of_STATE_VARIABLE_Counter_0_6;
                        STATE_VARIABLE_ConjMaps_0_8 = next_value_of_STATE_VARIABLE_ConjMaps_0_8;
                        STATE_VARIABLE_PredMap_0_10 = next_value_of_STATE_VARIABLE_PredMap_0_10;
                        STATE_VARIABLE_RelevantVars_0_12 = next_value_of_STATE_VARIABLE_RelevantVars_0_12;
                        continue;
                      }
                      else
                      {
                        MR_Word Var_213;
                        MR_Word next_value_of_HeadVar__2_2;
                        MR_Word next_value_of_STATE_VARIABLE_FormatCallSites_0_4;
                        MR_Word next_value_of_STATE_VARIABLE_Counter_0_6;
                        MR_Word next_value_of_STATE_VARIABLE_ConjMaps_0_8;
                        MR_Word next_value_of_STATE_VARIABLE_PredMap_0_10;
                        MR_Word next_value_of_STATE_VARIABLE_RelevantVars_0_12;

                        {
                          Var_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_213, 0) = ((MR_Box) (SubGoal_266));
                          MR_hl_field(1, Var_213, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                        // direct tailcall eliminated
                        ;
                        next_value_of_HeadVar__2_2 = Var_213;
                        next_value_of_STATE_VARIABLE_FormatCallSites_0_4 = STATE_VARIABLE_FormatCallSites_156_156;
                        next_value_of_STATE_VARIABLE_Counter_0_6 = STATE_VARIABLE_Counter_157_157;
                        next_value_of_STATE_VARIABLE_ConjMaps_0_8 = STATE_VARIABLE_ConjMaps_158_158;
                        next_value_of_STATE_VARIABLE_PredMap_0_10 = STATE_VARIABLE_PredMap_159_159;
                        next_value_of_STATE_VARIABLE_RelevantVars_0_12 = STATE_VARIABLE_RelevantVars_160_160;
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
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(3, Reason_58, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                      case (MR_Integer) 4:
                      case (MR_Integer) 5:
                      case (MR_Integer) 7:
                      case (MR_Integer) 8:
                        {
                          MR_Word Var_220;
                          MR_Word next_value_of_HeadVar__2_2;
                          MR_Word next_value_of_STATE_VARIABLE_FormatCallSites_0_4;
                          MR_Word next_value_of_STATE_VARIABLE_Counter_0_6;
                          MR_Word next_value_of_STATE_VARIABLE_ConjMaps_0_8;
                          MR_Word next_value_of_STATE_VARIABLE_PredMap_0_10;
                          MR_Word next_value_of_STATE_VARIABLE_RelevantVars_0_12;

                          {
                            Var_220 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_220, 0) = ((MR_Box) (SubGoal_266));
                            MR_hl_field(1, Var_220, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                          // direct tailcall eliminated
                          ;
                          next_value_of_HeadVar__2_2 = Var_220;
                          next_value_of_STATE_VARIABLE_FormatCallSites_0_4 = STATE_VARIABLE_FormatCallSites_156_156;
                          next_value_of_STATE_VARIABLE_Counter_0_6 = STATE_VARIABLE_Counter_157_157;
                          next_value_of_STATE_VARIABLE_ConjMaps_0_8 = STATE_VARIABLE_ConjMaps_158_158;
                          next_value_of_STATE_VARIABLE_PredMap_0_10 = STATE_VARIABLE_PredMap_159_159;
                          next_value_of_STATE_VARIABLE_RelevantVars_0_12 = STATE_VARIABLE_RelevantVars_160_160;
                          HeadVar__2_2 = next_value_of_HeadVar__2_2;
                          STATE_VARIABLE_FormatCallSites_0_4 = next_value_of_STATE_VARIABLE_FormatCallSites_0_4;
                          STATE_VARIABLE_Counter_0_6 = next_value_of_STATE_VARIABLE_Counter_0_6;
                          STATE_VARIABLE_ConjMaps_0_8 = next_value_of_STATE_VARIABLE_ConjMaps_0_8;
                          STATE_VARIABLE_PredMap_0_10 = next_value_of_STATE_VARIABLE_PredMap_0_10;
                          STATE_VARIABLE_RelevantVars_0_12 = next_value_of_STATE_VARIABLE_RelevantVars_0_12;
                          continue;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word TermVar_59 = ((MR_Word) ((MR_hl_field(3, Reason_58, (MR_Integer) 1))));
                          MR_Word FromGroundTermKind_60 = ((MR_Unsigned) ((MR_hl_field(3, Reason_58, (MR_Integer) 2))) & (MR_Integer) 3);
                          MR_Word TypeCtorInfo_286_286;

                          succeeded = (FromGroundTermKind_60 == (MR_Integer) 1);
                          if (succeeded)
                          {
                            TypeCtorInfo_286_286 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                            succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_286_286, STATE_VARIABLE_RelevantVars_160_160, TermVar_59);
                            succeeded = !(succeeded);
                          }
                          if (succeeded)
                          {
                            *STATE_VARIABLE_RelevantVars_13 = STATE_VARIABLE_RelevantVars_160_160;
                            *STATE_VARIABLE_PredMap_11 = STATE_VARIABLE_PredMap_159_159;
                            *STATE_VARIABLE_ConjMaps_9 = STATE_VARIABLE_ConjMaps_158_158;
                            *STATE_VARIABLE_Counter_7 = STATE_VARIABLE_Counter_157_157;
                            *STATE_VARIABLE_FormatCallSites_5 = STATE_VARIABLE_FormatCallSites_156_156;
                          }
                          else
                          {
                            MR_Word Var_197;
                            MR_Word next_value_of_HeadVar__2_2;
                            MR_Word next_value_of_STATE_VARIABLE_FormatCallSites_0_4;
                            MR_Word next_value_of_STATE_VARIABLE_Counter_0_6;
                            MR_Word next_value_of_STATE_VARIABLE_ConjMaps_0_8;
                            MR_Word next_value_of_STATE_VARIABLE_PredMap_0_10;
                            MR_Word next_value_of_STATE_VARIABLE_RelevantVars_0_12;

                            {
                              Var_197 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Var_197, 0) = ((MR_Box) (SubGoal_266));
                              MR_hl_field(1, Var_197, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                            }
                            // direct tailcall eliminated
                            ;
                            next_value_of_HeadVar__2_2 = Var_197;
                            next_value_of_STATE_VARIABLE_FormatCallSites_0_4 = STATE_VARIABLE_FormatCallSites_156_156;
                            next_value_of_STATE_VARIABLE_Counter_0_6 = STATE_VARIABLE_Counter_157_157;
                            next_value_of_STATE_VARIABLE_ConjMaps_0_8 = STATE_VARIABLE_ConjMaps_158_158;
                            next_value_of_STATE_VARIABLE_PredMap_0_10 = STATE_VARIABLE_PredMap_159_159;
                            next_value_of_STATE_VARIABLE_RelevantVars_0_12 = STATE_VARIABLE_RelevantVars_160_160;
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
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_40, (MR_Integer) 2))));
                MR_Word Then_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr_40, (MR_Integer) 3))));
                MR_Word Else_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr_40, (MR_Integer) 4))));
                MR_Word ElseId_52;
                MR_Word CondThenId_53;
                MR_Word ThenConj_54;
                MR_Word CondConj_55;
                MR_Word STATE_VARIABLE_FormatCallSites_177_177;
                MR_Word STATE_VARIABLE_Counter_178_178;
                MR_Word STATE_VARIABLE_ConjMaps_179_179;
                MR_Word STATE_VARIABLE_PredMap_180_180;
                MR_Word STATE_VARIABLE_RelevantVars_181_181;
                MR_Word STATE_VARIABLE_PredMap_182_182;
                MR_Word STATE_VARIABLE_Counter_183_183;
                MR_Word Var_184;
                MR_Word STATE_VARIABLE_PredMap_188_188;

                check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(Params_1, Else_51, &ElseId_52, STATE_VARIABLE_FormatCallSites_156_156, &STATE_VARIABLE_FormatCallSites_177_177, STATE_VARIABLE_Counter_157_157, &STATE_VARIABLE_Counter_178_178, STATE_VARIABLE_ConjMaps_158_158, &STATE_VARIABLE_ConjMaps_179_179, STATE_VARIABLE_PredMap_159_159, &STATE_VARIABLE_PredMap_180_180, STATE_VARIABLE_RelevantVars_160_160, &STATE_VARIABLE_RelevantVars_181_181);
                mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), ((MR_Box) (ElseId_52)), ((MR_Box) (HeadVar__3_3)), STATE_VARIABLE_PredMap_180_180, &STATE_VARIABLE_PredMap_182_182);
                check_hlds__simplify__format_call__alloc_id_3_p_0(&CondThenId_53, STATE_VARIABLE_Counter_178_178, &STATE_VARIABLE_Counter_183_183);
                hlds__hlds_goal__goal_to_conj_list_2_p_0(Then_50, &ThenConj_54);
                hlds__hlds_goal__goal_to_conj_list_2_p_0(Cond_49, &CondConj_55);
                Var_184 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), CondConj_55, ThenConj_54);
                check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(Params_1, Var_184, CondThenId_53, STATE_VARIABLE_FormatCallSites_177_177, STATE_VARIABLE_FormatCallSites_5, STATE_VARIABLE_Counter_183_183, STATE_VARIABLE_Counter_7, STATE_VARIABLE_ConjMaps_179_179, STATE_VARIABLE_ConjMaps_9, STATE_VARIABLE_PredMap_182_182, &STATE_VARIABLE_PredMap_188_188, STATE_VARIABLE_RelevantVars_181_181, STATE_VARIABLE_RelevantVars_13);
                mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), ((MR_Box) (CondThenId_53)), ((MR_Box) (HeadVar__3_3)), STATE_VARIABLE_PredMap_188_188, STATE_VARIABLE_PredMap_11);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_134 = ((MR_Word) ((MR_hl_field(3, GoalExpr_40, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_134)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.simplify.format_call.format_call_traverse_conj\'/13", (MR_String) "bi_implication");
                      return;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_139 = ((MR_Word) ((MR_hl_field(1, ShortHand_134, (MR_Integer) 4))));
                      MR_Word OrElseGoals_140 = ((MR_Word) ((MR_hl_field(1, ShortHand_134, (MR_Integer) 5))));
                      MR_Word Var_251;

                      {
                        Var_251 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_251, 0) = ((MR_Box) (MainGoal_139));
                        MR_hl_field(1, Var_251, 1) = ((MR_Box) (OrElseGoals_140));
                      }
                      check_hlds__simplify__format_call__format_call_traverse_disj_13_p_0(Params_1, Var_251, HeadVar__3_3, STATE_VARIABLE_FormatCallSites_156_156, STATE_VARIABLE_FormatCallSites_5, STATE_VARIABLE_Counter_157_157, STATE_VARIABLE_Counter_7, STATE_VARIABLE_ConjMaps_158_158, STATE_VARIABLE_ConjMaps_9, STATE_VARIABLE_PredMap_159_159, STATE_VARIABLE_PredMap_11, STATE_VARIABLE_RelevantVars_160_160, STATE_VARIABLE_RelevantVars_13);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word STATE_VARIABLE_PredMap_260_260;
                      MR_Word SubGoal_277 = ((MR_Word) ((MR_hl_field(2, ShortHand_134, (MR_Integer) 2))));
                      MR_Word SubGoalId_278;

                      check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(Params_1, SubGoal_277, &SubGoalId_278, STATE_VARIABLE_FormatCallSites_156_156, STATE_VARIABLE_FormatCallSites_5, STATE_VARIABLE_Counter_157_157, STATE_VARIABLE_Counter_7, STATE_VARIABLE_ConjMaps_158_158, STATE_VARIABLE_ConjMaps_9, STATE_VARIABLE_PredMap_159_159, &STATE_VARIABLE_PredMap_260_260, STATE_VARIABLE_RelevantVars_160_160, STATE_VARIABLE_RelevantVars_13);
                      mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), ((MR_Box) (SubGoalId_278)), ((MR_Box) (HeadVar__3_3)), STATE_VARIABLE_PredMap_260_260, STATE_VARIABLE_PredMap_11);
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
check_hlds__simplify__format_call__format_call_traverse_disj_arms_12_p_0(
  MR_Word Params_1,
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
    MR_Word Goal_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Goals_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word DisjId_36;
    MR_Word HeadRelevantVars_37;
    MR_Word TailRelevantVars_38;
    MR_Word STATE_VARIABLE_FormatCallSites_47_47;
    MR_Word STATE_VARIABLE_Counter_48_48;
    MR_Word STATE_VARIABLE_ConjMaps_49_49;
    MR_Word STATE_VARIABLE_PredMap_50_50;
    MR_Word Var_51;
    MR_Word STATE_VARIABLE_PredMap_52_52;
    MR_Word GoalConj_55;
    MR_Word STATE_VARIABLE_Counter_33_56;
    MR_Integer N_57;

    Var_51 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    mercury__counter__allocate_3_p_0(&N_57, STATE_VARIABLE_Counter_0_6, &STATE_VARIABLE_Counter_33_56);
    DisjId_36 = (MR_Word) (N_57);
    hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal_28, &GoalConj_55);
    check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(Params_1, GoalConj_55, DisjId_36, STATE_VARIABLE_FormatCallSites_0_4, &STATE_VARIABLE_FormatCallSites_47_47, STATE_VARIABLE_Counter_33_56, &STATE_VARIABLE_Counter_48_48, STATE_VARIABLE_ConjMaps_0_8, &STATE_VARIABLE_ConjMaps_49_49, STATE_VARIABLE_PredMap_0_10, &STATE_VARIABLE_PredMap_50_50, Var_51, &HeadRelevantVars_37);
    mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), ((MR_Box) (DisjId_36)), ((MR_Box) (ContainingId_3)), STATE_VARIABLE_PredMap_50_50, &STATE_VARIABLE_PredMap_52_52);
    check_hlds__simplify__format_call__format_call_traverse_disj_arms_12_p_0(Params_1, Goals_29, ContainingId_3, STATE_VARIABLE_FormatCallSites_47_47, STATE_VARIABLE_FormatCallSites_5, STATE_VARIABLE_Counter_48_48, STATE_VARIABLE_Counter_7, STATE_VARIABLE_ConjMaps_49_49, STATE_VARIABLE_ConjMaps_9, STATE_VARIABLE_PredMap_52_52, STATE_VARIABLE_PredMap_11, &TailRelevantVars_38);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__12_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadRelevantVars_37));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailRelevantVars_38));
    }
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_disj_13_p_0(
  MR_Word Params_14,
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
  MR_Word DisjRelevantVarSets_22;
  MR_Word DisjRelevantVars_23;

  check_hlds__simplify__format_call__format_call_traverse_disj_arms_12_p_0(Params_14, Disjuncts_15, CurId_16, STATE_VARIABLE_FormatCallSites_0_24, STATE_VARIABLE_FormatCallSites_25, STATE_VARIABLE_Counter_0_26, STATE_VARIABLE_Counter_27, STATE_VARIABLE_ConjMaps_0_28, STATE_VARIABLE_ConjMaps_29, STATE_VARIABLE_PredMap_0_30, STATE_VARIABLE_PredMap_31, &DisjRelevantVarSets_22);
  DisjRelevantVars_23 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DisjRelevantVarSets_22);
  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), DisjRelevantVars_23, STATE_VARIABLE_RelevantVars_0_32, STATE_VARIABLE_RelevantVars_33);
}

static void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(
  MR_Word Params_14,
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
  MR_Word GoalConj_22;
  MR_Word STATE_VARIABLE_Counter_33_33;
  MR_Integer N_34;

  mercury__counter__allocate_3_p_0(&N_34, STATE_VARIABLE_Counter_0_25, &STATE_VARIABLE_Counter_33_33);
  *CurId_16 = (MR_Word) (N_34);
  hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal_15, &GoalConj_22);
  check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(Params_14, GoalConj_22, *CurId_16, STATE_VARIABLE_FormatCallSites_0_23, STATE_VARIABLE_FormatCallSites_24, STATE_VARIABLE_Counter_33_33, STATE_VARIABLE_Counter_26, STATE_VARIABLE_ConjMaps_0_27, STATE_VARIABLE_ConjMaps_28, STATE_VARIABLE_PredMap_0_29, STATE_VARIABLE_PredMap_30, STATE_VARIABLE_RelevantVars_0_31, STATE_VARIABLE_RelevantVars_32);
}

static void MR_CALL 
check_hlds__simplify__format_call__alloc_id_3_p_0(
  MR_Word * ConjId_4,
  MR_Word STATE_VARIABLE_Counter_0_7,
  MR_Word * STATE_VARIABLE_Counter_8)
{
  MR_Integer N_6;

  mercury__counter__allocate_3_p_0(&N_6, STATE_VARIABLE_Counter_0_7, STATE_VARIABLE_Counter_8);
  *ConjId_4 = (MR_Word) (N_6);
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_unify_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__simplify__format_call__IntroducedFrom__pred__format_call_traverse_unify__1250__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
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
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Unification_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word CellVar_18 = ((MR_Word) ((MR_hl_field(0, Unification_10, (MR_Integer) 0))));
        MR_Word ConsId_19 = ((MR_Word) ((MR_hl_field(0, Unification_10, (MR_Integer) 1))));
        MR_Word ArgVars_20 = ((MR_Word) ((MR_hl_field(0, Unification_10, (MR_Integer) 2))));

        succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_RelevantVars_0_53, CellVar_18);
        if (succeeded)
        {
          MR_String StringConst_25;

          succeeded = ((((MR_tag((MR_Word) ConsId_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsId_19, (MR_Integer) 0)))) == (MR_Integer) 8)));
          if (succeeded)
          {
            StringConst_25 = ((MR_String) ((MR_hl_field(3, ConsId_19, (MR_Integer) 1))));
            {
              MR_Word Var_58;
              MR_Word Var_63;

              {
                Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_58, 0) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_3[3]));
                MR_hl_field(0, Var_58, 1) = ((MR_Box) (check_hlds__simplify__format_call__format_call_traverse_unify_9_p_0_1));
                MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_58, 3) = ((MR_Box) (ArgVars_20));
                MR_hl_field(0, Var_58, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_58, (MR_String) "predicate \140check_hlds.simplify.format_call.format_call_traverse_unify\'/9", (MR_String) "string constant with args");
              parse_tree__set_of_var__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CellVar_18, STATE_VARIABLE_RelevantVars_0_53, STATE_VARIABLE_RelevantVars_54);
              {
                Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_63, 0) = ((MR_Box) (StringConst_25));
              }
              check_hlds__simplify__format_call__add_to_string_map_5_p_0(CurId_12, CellVar_18, Var_63, STATE_VARIABLE_ConjMaps_0_49, STATE_VARIABLE_ConjMaps_50);
            }
          }
          else
          {
            MR_Word SymName_26;
            MR_Integer Arity_27;
            MR_Word TypeCtor_28;
            MR_Word Var_65;
            MR_Word Var_94;

            succeeded = ((MR_tag((MR_Word) ConsId_19)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_65 = (MR_Word) (MR_body((MR_Word) (ConsId_19), (MR_Integer) 1));
              SymName_26 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 0))));
              Arity_27 = ((MR_Integer) ((MR_hl_field(0, Var_65, (MR_Integer) 1))));
              TypeCtor_28 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 2))));
              Var_94 = parse_tree__builtin_lib_types__list_type_ctor_0_f_0();
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_28, Var_94);
            }
            if (succeeded)
            {
              MR_String Functor_29;
              MR_Word List_33;
              MR_Word STATE_VARIABLE_RelevantVars_70_70;
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
                MR_Word Var_66;
                MR_Word Var_67;

                succeeded = (strcmp(Functor_29, (MR_String) "[|]") == 0);
                if (succeeded)
                {
                  succeeded = (Arity_27 == (MR_Integer) 2);
                  if (succeeded)
                  {
                    ArgVar1_30 = ((MR_Word) ((MR_hl_field(1, ArgVars_20, (MR_Integer) 0))));
                    Var_66 = ((MR_Word) ((MR_hl_field(1, ArgVars_20, (MR_Integer) 1))));
                    succeeded = (Var_66 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      ArgVar2_31 = ((MR_Word) ((MR_hl_field(1, Var_66, (MR_Integer) 0))));
                      Var_67 = ((MR_Word) ((MR_hl_field(1, Var_66, (MR_Integer) 1))));
                      succeeded = (Var_67 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        {
                          ListPrime_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, ListPrime_32, 0) = ((MR_Box) (ArgVar1_30));
                          MR_hl_field(1, ListPrime_32, 1) = ((MR_Box) (ArgVar2_31));
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
              parse_tree__set_of_var__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CellVar_18, STATE_VARIABLE_RelevantVars_0_53, &STATE_VARIABLE_RelevantVars_70_70);
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_20, STATE_VARIABLE_RelevantVars_70_70, STATE_VARIABLE_RelevantVars_54);
              check_hlds__simplify__format_call__add_to_list_map_5_p_0(CurId_12, CellVar_18, List_33, STATE_VARIABLE_ConjMaps_0_49, STATE_VARIABLE_ConjMaps_50);
            }
            else
            {
              MR_Word SymName_85;
              MR_Integer Arity_86;
              MR_Word Var_73;
              MR_Word TypeCtor_81;
              MR_Word Var_95;

              succeeded = ((MR_tag((MR_Word) ConsId_19)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_73 = (MR_Word) (MR_body((MR_Word) (ConsId_19), (MR_Integer) 1));
                SymName_85 = ((MR_Word) ((MR_hl_field(0, Var_73, (MR_Integer) 0))));
                Arity_86 = ((MR_Integer) ((MR_hl_field(0, Var_73, (MR_Integer) 1))));
                TypeCtor_81 = ((MR_Word) ((MR_hl_field(0, Var_73, (MR_Integer) 2))));
                Var_95 = parse_tree__builtin_lib_types__poly_type_type_ctor_0_f_0();
                succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(TypeCtor_81, Var_95);
              }
              if (succeeded)
              {
                MR_Word TypeCtorInfo_93_93;
                MR_Word VarPolyType_37;
                MR_Word ArgVar_34;
                MR_Word Var_74;

                succeeded = (Arity_86 == (MR_Integer) 1);
                if (succeeded)
                {
                  succeeded = (ArgVars_20 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    ArgVar_34 = ((MR_Word) ((MR_hl_field(1, ArgVars_20, (MR_Integer) 0))));
                    Var_74 = ((MR_Word) ((MR_hl_field(1, ArgVars_20, (MR_Integer) 1))));
                    succeeded = (Var_74 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
                if (succeeded)
                {
                  MR_Word Context_35;
                  MR_String Functor_82;
                  MR_Word VarPolyTypePrime_36;
                  MR_Integer slot_0;
                  MR_String str_1;

                  Context_35 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                  Functor_82 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_85);
                  // hashed string jump switch
                  ;
                  // compute the hash value of the input string
                  ;
                  slot_0 = ((MR_hash_string6(Functor_82)) & (MR_Integer) 31);
                  // no collisions; no hash chain loop
                  ;
                  // lookup the string for this hash slot
                  ;
                  str_1 = ((&check_hlds__simplify__format_call_vector_common_6[0 + slot_0]))->check_hlds__simplify__format_call__vector_common_type_6_0__vct_6_f_0;
                  // did we find a match?
                  ;
                  if ((((str_1 != NULL)) && ((strcmp(str_1, Functor_82) == 0))))
                  {
                    // we found a match; dispatch to the corresponding code
                    ;
                    switch (slot_0) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 2:
                        {
                          // case "c"
                          ;
                          {
                            VarPolyTypePrime_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, VarPolyTypePrime_36, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                            MR_hl_field(3, VarPolyTypePrime_36, 1) = ((MR_Box) (ArgVar_34));
                            MR_hl_field(3, VarPolyTypePrime_36, 2) = ((MR_Box) (Context_35));
                          }
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          // case "i16"
                          ;
                          {
                            VarPolyTypePrime_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, VarPolyTypePrime_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(3, VarPolyTypePrime_36, 1) = ((MR_Box) (ArgVar_34));
                            MR_hl_field(3, VarPolyTypePrime_36, 2) = ((MR_Box) (Context_35));
                          }
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          // case "f"
                          ;
                          {
                            VarPolyTypePrime_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, VarPolyTypePrime_36, 0) = ((MR_Box) (ArgVar_34));
                            MR_hl_field(0, VarPolyTypePrime_36, 1) = ((MR_Box) (Context_35));
                          }
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          // case "i"
                          ;
                          {
                            VarPolyTypePrime_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, VarPolyTypePrime_36, 0) = ((MR_Box) (ArgVar_34));
                            MR_hl_field(1, VarPolyTypePrime_36, 1) = ((MR_Box) (Context_35));
                          }
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          // case "u32"
                          ;
                          {
                            VarPolyTypePrime_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, VarPolyTypePrime_36, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                            MR_hl_field(3, VarPolyTypePrime_36, 1) = ((MR_Box) (ArgVar_34));
                            MR_hl_field(3, VarPolyTypePrime_36, 2) = ((MR_Box) (Context_35));
                          }
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 15:
                        {
                          // case "u16"
                          ;
                          {
                            VarPolyTypePrime_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, VarPolyTypePrime_36, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                            MR_hl_field(3, VarPolyTypePrime_36, 1) = ((MR_Box) (ArgVar_34));
                            MR_hl_field(3, VarPolyTypePrime_36, 2) = ((MR_Box) (Context_35));
                          }
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 16:
                        {
                          // case "i64"
                          ;
                          {
                            VarPolyTypePrime_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, VarPolyTypePrime_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(3, VarPolyTypePrime_36, 1) = ((MR_Box) (ArgVar_34));
                            MR_hl_field(3, VarPolyTypePrime_36, 2) = ((MR_Box) (Context_35));
                          }
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 18:
                        {
                          // case "s"
                          ;
                          {
                            VarPolyTypePrime_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, VarPolyTypePrime_36, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                            MR_hl_field(3, VarPolyTypePrime_36, 1) = ((MR_Box) (ArgVar_34));
                            MR_hl_field(3, VarPolyTypePrime_36, 2) = ((MR_Box) (Context_35));
                          }
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 19:
                        {
                          // case "i8"
                          ;
                          {
                            VarPolyTypePrime_36 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, VarPolyTypePrime_36, 0) = ((MR_Box) (ArgVar_34));
                            MR_hl_field(2, VarPolyTypePrime_36, 1) = ((MR_Box) (Context_35));
                          }
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 20:
                        {
                          // case "u"
                          ;
                          {
                            VarPolyTypePrime_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, VarPolyTypePrime_36, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                            MR_hl_field(3, VarPolyTypePrime_36, 1) = ((MR_Box) (ArgVar_34));
                            MR_hl_field(3, VarPolyTypePrime_36, 2) = ((MR_Box) (Context_35));
                          }
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 28:
                        {
                          // case "u64"
                          ;
                          {
                            VarPolyTypePrime_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, VarPolyTypePrime_36, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                            MR_hl_field(3, VarPolyTypePrime_36, 1) = ((MR_Box) (ArgVar_34));
                            MR_hl_field(3, VarPolyTypePrime_36, 2) = ((MR_Box) (Context_35));
                          }
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 29:
                        {
                          // case "i32"
                          ;
                          {
                            VarPolyTypePrime_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, VarPolyTypePrime_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                            MR_hl_field(3, VarPolyTypePrime_36, 1) = ((MR_Box) (ArgVar_34));
                            MR_hl_field(3, VarPolyTypePrime_36, 2) = ((MR_Box) (Context_35));
                          }
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 31:
                        {
                          // case "u8"
                          ;
                          {
                            VarPolyTypePrime_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(3, VarPolyTypePrime_36, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                            MR_hl_field(3, VarPolyTypePrime_36, 1) = ((MR_Box) (ArgVar_34));
                            MR_hl_field(3, VarPolyTypePrime_36, 2) = ((MR_Box) (Context_35));
                          }
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    // jump out of search loop
                    ;
                    goto label_0;
                  }
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
        MR_Word TargetVar_16 = ((MR_Word) ((MR_hl_field(2, Unification_10, (MR_Integer) 0))));
        MR_Word SourceVar_17 = ((MR_Word) ((MR_hl_field(2, Unification_10, (MR_Integer) 1))));

        succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_RelevantVars_0_53, TargetVar_16);
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_RelevantVars_55_55;
          MR_Word ConjMap0_98;
          MR_Box conv0_ConjMap0_98;

          parse_tree__set_of_var__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TargetVar_16, STATE_VARIABLE_RelevantVars_0_53, &STATE_VARIABLE_RelevantVars_55_55);
          parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SourceVar_17, STATE_VARIABLE_RelevantVars_55_55, STATE_VARIABLE_RelevantVars_54);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), STATE_VARIABLE_ConjMaps_0_49, ((MR_Box) (CurId_12)), &conv0_ConjMap0_98);
          if (succeeded)
          {
            ConjMap0_98 = ((MR_Word) (conv0_ConjMap0_98));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word StringMap_99 = ((MR_Word) ((MR_hl_field(0, ConjMap0_98, (MR_Integer) 0))));
            MR_Word ListMap_100 = ((MR_Word) ((MR_hl_field(0, ConjMap0_98, (MR_Integer) 1))));
            MR_Word ElementMap_101 = ((MR_Word) ((MR_hl_field(0, ConjMap0_98, (MR_Integer) 2))));
            MR_Word EqvMap0_102 = ((MR_Word) ((MR_hl_field(0, ConjMap0_98, (MR_Integer) 3))));
            MR_Word EqvMap_103;
            MR_Word ConjMap_104;

            mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), ((MR_Box) (TargetVar_16)), ((MR_Box) (SourceVar_17)), EqvMap0_102, &EqvMap_103);
            {
              ConjMap_104 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ConjMap_104, 0) = ((MR_Box) (StringMap_99));
              MR_hl_field(0, ConjMap_104, 1) = ((MR_Box) (ListMap_100));
              MR_hl_field(0, ConjMap_104, 2) = ((MR_Box) (ElementMap_101));
              MR_hl_field(0, ConjMap_104, 3) = ((MR_Box) (EqvMap_103));
            }
            mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), ((MR_Box) (CurId_12)), ((MR_Box) (ConjMap_104)), STATE_VARIABLE_ConjMaps_0_49, STATE_VARIABLE_ConjMaps_50);
          }
          else
          {
            MR_Word Var_105;
            MR_Word Var_106;
            MR_Word Var_107;
            MR_Word EqvMap_108;
            MR_Word ConjMap_109;

            EqvMap_108 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), ((MR_Box) (TargetVar_16)), ((MR_Box) (SourceVar_17)));
            Var_105 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0));
            Var_106 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0));
            Var_107 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0));
            {
              ConjMap_109 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ConjMap_109, 0) = ((MR_Box) (Var_105));
              MR_hl_field(0, ConjMap_109, 1) = ((MR_Box) (Var_106));
              MR_hl_field(0, ConjMap_109, 2) = ((MR_Box) (Var_107));
              MR_hl_field(0, ConjMap_109, 3) = ((MR_Box) (EqvMap_108));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), ((MR_Box) (CurId_12)), ((MR_Box) (ConjMap_109)), STATE_VARIABLE_ConjMaps_0_49, STATE_VARIABLE_ConjMaps_50);
          }
        }
        else
        {
          *STATE_VARIABLE_RelevantVars_54 = STATE_VARIABLE_RelevantVars_0_53;
          *STATE_VARIABLE_ConjMaps_50 = STATE_VARIABLE_ConjMaps_0_49;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Unification_10, (MR_Integer) 0))))) {
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

static void MR_CALL 
check_hlds__simplify__format_call__add_to_element_map_5_p_0(
  MR_Word ConjId_6,
  MR_Word Var_7,
  MR_Word Element_8,
  MR_Word STATE_VARIABLE_ConjMaps_0_19,
  MR_Word * STATE_VARIABLE_ConjMaps_20)
{
  MR_bool succeeded;
  MR_Word ConjMap0_12;
  MR_Box conv0_ConjMap0_12;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), STATE_VARIABLE_ConjMaps_0_19, ((MR_Box) (ConjId_6)), &conv0_ConjMap0_12);
  if (succeeded)
  {
    ConjMap0_12 = ((MR_Word) (conv0_ConjMap0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word StringMap_13 = ((MR_Word) ((MR_hl_field(0, ConjMap0_12, (MR_Integer) 0))));
    MR_Word ListMap_14 = ((MR_Word) ((MR_hl_field(0, ConjMap0_12, (MR_Integer) 1))));
    MR_Word ElementMap0_15 = ((MR_Word) ((MR_hl_field(0, ConjMap0_12, (MR_Integer) 2))));
    MR_Word EqvMap_16 = ((MR_Word) ((MR_hl_field(0, ConjMap0_12, (MR_Integer) 3))));
    MR_Word ElementMap_17;
    MR_Word ConjMap_18;

    mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0), ((MR_Box) (Var_7)), ((MR_Box) (Element_8)), ElementMap0_15, &ElementMap_17);
    {
      ConjMap_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ConjMap_18, 0) = ((MR_Box) (StringMap_13));
      MR_hl_field(0, ConjMap_18, 1) = ((MR_Box) (ListMap_14));
      MR_hl_field(0, ConjMap_18, 2) = ((MR_Box) (ElementMap_17));
      MR_hl_field(0, ConjMap_18, 3) = ((MR_Box) (EqvMap_16));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), ((MR_Box) (ConjId_6)), ((MR_Box) (ConjMap_18)), STATE_VARIABLE_ConjMaps_0_19, STATE_VARIABLE_ConjMaps_20);
  }
  else
  {
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word ElementMap_35;
    MR_Word ConjMap_36;

    ElementMap_35 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0), ((MR_Box) (Var_7)), ((MR_Box) (Element_8)));
    Var_31 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0));
    Var_32 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0));
    Var_33 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]));
    {
      ConjMap_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ConjMap_36, 0) = ((MR_Box) (Var_31));
      MR_hl_field(0, ConjMap_36, 1) = ((MR_Box) (Var_32));
      MR_hl_field(0, ConjMap_36, 2) = ((MR_Box) (ElementMap_35));
      MR_hl_field(0, ConjMap_36, 3) = ((MR_Box) (Var_33));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), ((MR_Box) (ConjId_6)), ((MR_Box) (ConjMap_36)), STATE_VARIABLE_ConjMaps_0_19, STATE_VARIABLE_ConjMaps_20);
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__add_to_list_map_5_p_0(
  MR_Word ConjId_6,
  MR_Word Var_7,
  MR_Word ListState_8,
  MR_Word STATE_VARIABLE_ConjMaps_0_19,
  MR_Word * STATE_VARIABLE_ConjMaps_20)
{
  MR_bool succeeded;
  MR_Word ConjMap0_12;
  MR_Box conv0_ConjMap0_12;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), STATE_VARIABLE_ConjMaps_0_19, ((MR_Box) (ConjId_6)), &conv0_ConjMap0_12);
  if (succeeded)
  {
    ConjMap0_12 = ((MR_Word) (conv0_ConjMap0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word StringMap_13 = ((MR_Word) ((MR_hl_field(0, ConjMap0_12, (MR_Integer) 0))));
    MR_Word ListMap0_14 = ((MR_Word) ((MR_hl_field(0, ConjMap0_12, (MR_Integer) 1))));
    MR_Word ElementMap_15 = ((MR_Word) ((MR_hl_field(0, ConjMap0_12, (MR_Integer) 2))));
    MR_Word EqvMap_16 = ((MR_Word) ((MR_hl_field(0, ConjMap0_12, (MR_Integer) 3))));
    MR_Word ListMap_17;
    MR_Word ConjMap_18;

    mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0), ((MR_Box) (Var_7)), ((MR_Box) (ListState_8)), ListMap0_14, &ListMap_17);
    {
      ConjMap_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ConjMap_18, 0) = ((MR_Box) (StringMap_13));
      MR_hl_field(0, ConjMap_18, 1) = ((MR_Box) (ListMap_17));
      MR_hl_field(0, ConjMap_18, 2) = ((MR_Box) (ElementMap_15));
      MR_hl_field(0, ConjMap_18, 3) = ((MR_Box) (EqvMap_16));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), ((MR_Box) (ConjId_6)), ((MR_Box) (ConjMap_18)), STATE_VARIABLE_ConjMaps_0_19, STATE_VARIABLE_ConjMaps_20);
  }
  else
  {
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word ListMap_35;
    MR_Word ConjMap_36;

    ListMap_35 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0), ((MR_Box) (Var_7)), ((MR_Box) (ListState_8)));
    Var_31 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0));
    Var_32 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0));
    Var_33 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]));
    {
      ConjMap_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ConjMap_36, 0) = ((MR_Box) (Var_31));
      MR_hl_field(0, ConjMap_36, 1) = ((MR_Box) (ListMap_35));
      MR_hl_field(0, ConjMap_36, 2) = ((MR_Box) (Var_32));
      MR_hl_field(0, ConjMap_36, 3) = ((MR_Box) (Var_33));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), ((MR_Box) (ConjId_6)), ((MR_Box) (ConjMap_36)), STATE_VARIABLE_ConjMaps_0_19, STATE_VARIABLE_ConjMaps_20);
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__add_to_string_map_5_p_0(
  MR_Word ConjId_6,
  MR_Word Var_7,
  MR_Word StringState_8,
  MR_Word STATE_VARIABLE_ConjMaps_0_19,
  MR_Word * STATE_VARIABLE_ConjMaps_20)
{
  MR_bool succeeded;
  MR_Word ConjMap0_12;
  MR_Box conv0_ConjMap0_12;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), STATE_VARIABLE_ConjMaps_0_19, ((MR_Box) (ConjId_6)), &conv0_ConjMap0_12);
  if (succeeded)
  {
    ConjMap0_12 = ((MR_Word) (conv0_ConjMap0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word StringMap0_13 = ((MR_Word) ((MR_hl_field(0, ConjMap0_12, (MR_Integer) 0))));
    MR_Word ListMap_14 = ((MR_Word) ((MR_hl_field(0, ConjMap0_12, (MR_Integer) 1))));
    MR_Word ElementMap_15 = ((MR_Word) ((MR_hl_field(0, ConjMap0_12, (MR_Integer) 2))));
    MR_Word EqvMap_16 = ((MR_Word) ((MR_hl_field(0, ConjMap0_12, (MR_Integer) 3))));
    MR_Word StringMap_17;
    MR_Word ConjMap_18;

    mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0), ((MR_Box) (Var_7)), ((MR_Box) (StringState_8)), StringMap0_13, &StringMap_17);
    {
      ConjMap_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ConjMap_18, 0) = ((MR_Box) (StringMap_17));
      MR_hl_field(0, ConjMap_18, 1) = ((MR_Box) (ListMap_14));
      MR_hl_field(0, ConjMap_18, 2) = ((MR_Box) (ElementMap_15));
      MR_hl_field(0, ConjMap_18, 3) = ((MR_Box) (EqvMap_16));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), ((MR_Box) (ConjId_6)), ((MR_Box) (ConjMap_18)), STATE_VARIABLE_ConjMaps_0_19, STATE_VARIABLE_ConjMaps_20);
  }
  else
  {
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word StringMap_35;
    MR_Word ConjMap_36;

    StringMap_35 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_state_0), ((MR_Box) (Var_7)), ((MR_Box) (StringState_8)));
    Var_31 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0));
    Var_32 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__parse_string_format__check_hlds__simplify__parse_string_format__type_ctor_info_abstract_poly_type_0));
    Var_33 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[2]));
    {
      ConjMap_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ConjMap_36, 0) = ((MR_Box) (StringMap_35));
      MR_hl_field(0, ConjMap_36, 1) = ((MR_Box) (Var_31));
      MR_hl_field(0, ConjMap_36, 2) = ((MR_Box) (Var_32));
      MR_hl_field(0, ConjMap_36, 3) = ((MR_Box) (Var_33));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0), (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0), ((MR_Box) (ConjId_6)), ((MR_Box) (ConjMap_36)), STATE_VARIABLE_ConjMaps_0_19, STATE_VARIABLE_ConjMaps_20);
  }
}

static void MR_CALL 
check_hlds__simplify__format_call__is_format_call_kind_and_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_FmtStrVal_10;
  MR_Integer conv0_STATE_VARIABLE_Pos_20;

  check_hlds__simplify__format_call__arg_nums_to_vars_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_FmtStrVal_10, ((MR_Integer) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Pos_20);
  *wrapper_arg_2 = ((MR_Box) (conv1_FmtStrVal_10));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Pos_20));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call__is_format_call_kind_and_vars_6_p_0(
  MR_Word PredInfo_7,
  MR_Word ModuleName_8,
  MR_String Name_9,
  MR_Word ArgVars_10,
  MR_Word GoalInfo_11,
  MR_Word * Kind_12)
{
  MR_bool succeeded;
  MR_Word KindPrime_13;

  succeeded = check_hlds__simplify__format_call__is_builtin_format_call_kind_and_vars_5_p_0(ModuleName_8, Name_9, ArgVars_10, GoalInfo_11, &KindPrime_13);
  if (succeeded)
  {
    *Kind_12 = KindPrime_13;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word TypeCtorInfo_23_23;
    MR_Word TypeCtorInfo_28_28;
    MR_Word TypeCtorInfo_29_29;
    MR_Word MaybeFormatCall_14;
    MR_Word FormatCall_15;
    MR_Word Context_16;
    MR_Word OoMFmtStrValArgs_17;
    MR_Integer NumFmtStrValArgs_18;
    MR_Word OoMFmtStrValVars_19;
    MR_Word Var_21;
    MR_Integer Var_22;
    MR_Box conv2_Var_20;

    hlds__hlds_pred__pred_info_get_format_call_2_p_0(PredInfo_7, &MaybeFormatCall_14);
    succeeded = (MaybeFormatCall_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      FormatCall_15 = ((MR_Word) ((MR_hl_field(1, MaybeFormatCall_14, (MR_Integer) 0))));
      Context_16 = ((MR_Word) ((MR_hl_field(0, FormatCall_15, (MR_Integer) 0))));
      OoMFmtStrValArgs_17 = ((MR_Word) ((MR_hl_field(0, FormatCall_15, (MR_Integer) 1))));
      TypeCtorInfo_23_23 = (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_format_string_values_0);
      mercury__one_or_more__length_2_p_0(TypeCtorInfo_23_23, OoMFmtStrValArgs_17, &NumFmtStrValArgs_18);
      Var_22 = (MR_Integer) 1;
      TypeCtorInfo_28_28 = (MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fmt_str_val_vars_0);
      TypeCtorInfo_29_29 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_21, 0) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_5[0]));
        MR_hl_field(0, Var_21, 1) = ((MR_Box) (check_hlds__simplify__format_call__is_format_call_kind_and_vars_6_p_0_1));
        MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_21, 3) = ((MR_Box) (ArgVars_10));
        MR_hl_field(0, Var_21, 4) = ((MR_Box) (NumFmtStrValArgs_18));
      }
      mercury__one_or_more__map_foldl_5_p_0(TypeCtorInfo_23_23, TypeCtorInfo_28_28, TypeCtorInfo_29_29, Var_21, OoMFmtStrValArgs_17, &OoMFmtStrValVars_19, ((MR_Box) (Var_22)), &conv2_Var_20);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Kind_12 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, base, 1) = ((MR_Box) (Context_16));
        MR_hl_field(3, base, 2) = ((MR_Box) (OoMFmtStrValVars_19));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call__is_builtin_format_call_kind_and_vars_5_p_0(
  MR_Word WrappedModuleName_6,
  MR_String Name_7,
  MR_Word ArgVars_8,
  MR_Word GoalInfo_9,
  MR_Word * Kind_10)
{
  MR_bool succeeded = (strcmp(Name_7, (MR_String) "format") == 0);
  MR_Word ModuleName_11;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_107;
  MR_Word Var_108;
  MR_Word Var_115;
  MR_Word Var_116;

  if (succeeded)
  {
    mdbcomp__builtin_modules__maybe_remove_stdlib_wrapper_2_p_0(WrappedModuleName_6, &ModuleName_11);
    succeeded = (ArgVars_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_99 = ((MR_Word) ((MR_hl_field(1, ArgVars_8, (MR_Integer) 0))));
      Var_98 = ((MR_Word) ((MR_hl_field(1, ArgVars_8, (MR_Integer) 1))));
      succeeded = (Var_98 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_108 = ((MR_Word) ((MR_hl_field(1, Var_98, (MR_Integer) 0))));
        Var_107 = ((MR_Word) ((MR_hl_field(1, Var_98, (MR_Integer) 1))));
        succeeded = (Var_107 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_116 = ((MR_Word) ((MR_hl_field(1, Var_107, (MR_Integer) 0))));
          Var_115 = ((MR_Word) ((MR_hl_field(1, Var_107, (MR_Integer) 1))));
          if (((MR_tag((MR_Word) ModuleName_11)) == (MR_Integer) 1))
          {
            MR_String Var_90 = ((MR_String) ((MR_hl_field(1, ModuleName_11, (MR_Integer) 1))));
            MR_Word Var_91 = ((MR_Word) ((MR_hl_field(1, ModuleName_11, (MR_Integer) 0))));
            MR_String Var_100;
            MR_Word Var_109;
            MR_Word Var_110;

            succeeded = ((MR_tag((MR_Word) Var_91)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_100 = ((MR_String) ((MR_hl_field(0, Var_91, (MR_Integer) 0))));
              succeeded = (Var_115 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_110 = ((MR_Word) ((MR_hl_field(1, Var_115, (MR_Integer) 0))));
                Var_109 = ((MR_Word) ((MR_hl_field(1, Var_115, (MR_Integer) 1))));
                if ((strcmp(Var_90, (MR_String) "builder") == 0))
                {
                  MR_Word Var_45;
                  MR_Word Context_76;
                  MR_Word FmtStrValVars_77;

                  succeeded = (strcmp(Var_100, (MR_String) "string") == 0);
                  if (succeeded)
                  {
                    succeeded = (Var_109 == (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Context_76 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
                      Var_45 = (MR_Word) ((MR_Unsigned) 0U);
                      {
                        FmtStrValVars_77 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, FmtStrValVars_77, 0) = ((MR_Box) (Var_45));
                        MR_hl_field(0, FmtStrValVars_77, 1) = ((MR_Box) (Var_99));
                        MR_hl_field(0, FmtStrValVars_77, 2) = ((MR_Box) (Var_108));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        *Kind_10 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Context_76));
                        MR_hl_field(1, base, 1) = ((MR_Box) (FmtStrValVars_77));
                        MR_hl_field(1, base, 2) = ((MR_Box) (Var_116));
                        MR_hl_field(1, base, 3) = ((MR_Box) (Var_110));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                else
                if ((strcmp(Var_90, (MR_String) "string_writer") == 0))
                {
                  MR_Word Var_53;
                  MR_Word Var_54;
                  MR_Word Var_55;
                  MR_Word Context_82;
                  MR_Word FmtStrValVars_83;
                  MR_Word StateInVar_84;
                  MR_Word StateOutVar_85;

                  succeeded = (strcmp(Var_100, (MR_String) "stream") == 0);
                  if (succeeded)
                  {
                    succeeded = (Var_109 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      StateInVar_84 = ((MR_Word) ((MR_hl_field(1, Var_109, (MR_Integer) 0))));
                      Var_53 = ((MR_Word) ((MR_hl_field(1, Var_109, (MR_Integer) 1))));
                      succeeded = (Var_53 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        StateOutVar_85 = ((MR_Word) ((MR_hl_field(1, Var_53, (MR_Integer) 0))));
                        Var_54 = ((MR_Word) ((MR_hl_field(1, Var_53, (MR_Integer) 1))));
                        succeeded = (Var_54 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Context_82 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
                          Var_55 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            FmtStrValVars_83 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, FmtStrValVars_83, 0) = ((MR_Box) (Var_55));
                            MR_hl_field(0, FmtStrValVars_83, 1) = ((MR_Box) (Var_116));
                            MR_hl_field(0, FmtStrValVars_83, 2) = ((MR_Box) (Var_110));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                            *Kind_10 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                            MR_hl_field(3, base, 1) = ((MR_Box) (Context_82));
                            MR_hl_field(3, base, 2) = ((MR_Box) (Var_99));
                            MR_hl_field(3, base, 3) = ((MR_Box) (Var_108));
                            MR_hl_field(3, base, 4) = ((MR_Box) (FmtStrValVars_83));
                            MR_hl_field(3, base, 5) = ((MR_Box) (StateInVar_84));
                            MR_hl_field(3, base, 6) = ((MR_Box) (StateOutVar_85));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                  }
                }
                else
                  succeeded = MR_FALSE;
              }
            }
          }
          else
          {
            MR_String Var_89 = ((MR_String) ((MR_hl_field(0, ModuleName_11, (MR_Integer) 0))));

            if ((strcmp(Var_89, (MR_String) "io") == 0))
            {
              MR_Word Var_117;
              MR_Word Var_118;

              succeeded = (Var_115 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_118 = ((MR_Word) ((MR_hl_field(1, Var_115, (MR_Integer) 0))));
                Var_117 = ((MR_Word) ((MR_hl_field(1, Var_115, (MR_Integer) 1))));
                if ((Var_117 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Context_58;
                  MR_Word FmtStrValVars_59;

                  Context_58 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
                  {
                    FmtStrValVars_59 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, FmtStrValVars_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, FmtStrValVars_59, 1) = ((MR_Box) (Var_99));
                    MR_hl_field(0, FmtStrValVars_59, 2) = ((MR_Box) (Var_108));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *Kind_10 = base;
                    MR_hl_field(2, base, 0) = ((MR_Box) (Context_58));
                    MR_hl_field(2, base, 1) = ((MR_Box) (FmtStrValVars_59));
                    MR_hl_field(2, base, 2) = ((MR_Box) (Var_116));
                    MR_hl_field(2, base, 3) = ((MR_Box) (Var_118));
                  }
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, Var_117, (MR_Integer) 1))));
                  MR_Word Var_37;
                  MR_Word Context_62;
                  MR_Word FmtStrValVars_63;
                  MR_Word StateOutVar_65 = ((MR_Word) ((MR_hl_field(1, Var_117, (MR_Integer) 0))));

                  succeeded = (Var_36 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Context_62 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
                    Var_37 = (MR_Word) ((MR_Unsigned) 0U);
                    {
                      FmtStrValVars_63 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, FmtStrValVars_63, 0) = ((MR_Box) (Var_37));
                      MR_hl_field(0, FmtStrValVars_63, 1) = ((MR_Box) (Var_108));
                      MR_hl_field(0, FmtStrValVars_63, 2) = ((MR_Box) (Var_116));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                      *Kind_10 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (Context_62));
                      MR_hl_field(3, base, 2) = ((MR_Box) (Var_99));
                      MR_hl_field(3, base, 3) = ((MR_Box) (FmtStrValVars_63));
                      MR_hl_field(3, base, 4) = ((MR_Box) (Var_118));
                      MR_hl_field(3, base, 5) = ((MR_Box) (StateOutVar_65));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
            else
            if ((strcmp(Var_89, (MR_String) "string") == 0))
            {
              MR_Word Context_15;
              MR_Word FmtStrValVars_16;
              MR_Word Var_25;

              succeeded = (Var_115 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Context_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
                Var_25 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  FmtStrValVars_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, FmtStrValVars_16, 0) = ((MR_Box) (Var_25));
                  MR_hl_field(0, FmtStrValVars_16, 1) = ((MR_Box) (Var_99));
                  MR_hl_field(0, FmtStrValVars_16, 2) = ((MR_Box) (Var_108));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  *Kind_10 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Context_15));
                  MR_hl_field(0, base, 1) = ((MR_Box) (FmtStrValVars_16));
                  MR_hl_field(0, base, 2) = ((MR_Box) (Var_116));
                }
                succeeded = MR_TRUE;
              }
            }
            else
              succeeded = MR_FALSE;
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__simplify__format_call__get_relevant_vars_from_format_call_kind_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Vars_4;

  conv0_Vars_4 = check_hlds__simplify__format_call__get_relevant_vars_from_fmt_str_val_vars_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Vars_4));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
check_hlds__simplify__format_call__get_relevant_vars_from_format_call_kind_1_f_0(
  MR_Word Kind_3)
{
  MR_Word Vars_4;
  MR_Word FmtStrVal_5;
  MR_Word FmtStrVals_6;
  MR_Word BaseSet_7;
  MR_Word AddedSets_8;
  MR_Word Var_10;
  MR_Word VarFS_36;
  MR_Word VarVL_37;
  MR_Word Var_38;
  MR_Word Var_39;

  switch (MR_tag((MR_Word) Kind_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        FmtStrVal_5 = ((MR_Word) ((MR_hl_field(0, Kind_3, (MR_Integer) 1))));
        FmtStrVals_6 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        FmtStrVal_5 = ((MR_Word) ((MR_hl_field(1, Kind_3, (MR_Integer) 1))));
        FmtStrVals_6 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        FmtStrVal_5 = ((MR_Word) ((MR_hl_field(2, Kind_3, (MR_Integer) 1))));
        FmtStrVals_6 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Kind_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            FmtStrVal_5 = ((MR_Word) ((MR_hl_field(3, Kind_3, (MR_Integer) 3))));
            FmtStrVals_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 1:
          {
            FmtStrVal_5 = ((MR_Word) ((MR_hl_field(3, Kind_3, (MR_Integer) 4))));
            FmtStrVals_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word OoMFmtStrVals_34 = ((MR_Word) ((MR_hl_field(3, Kind_3, (MR_Integer) 2))));

            FmtStrVal_5 = ((MR_Word) ((MR_hl_field(0, OoMFmtStrVals_34, (MR_Integer) 0))));
            FmtStrVals_6 = ((MR_Word) ((MR_hl_field(0, OoMFmtStrVals_34, (MR_Integer) 1))));
          }
          break;
      }
      break;
  }
  VarFS_36 = ((MR_Word) ((MR_hl_field(0, FmtStrVal_5, (MR_Integer) 1))));
  VarVL_37 = ((MR_Word) ((MR_hl_field(0, FmtStrVal_5, (MR_Integer) 2))));
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (VarVL_37));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (VarFS_36));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_39));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_38, &BaseSet_7);
  AddedSets_8 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fmt_str_val_vars_0), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_2[1]), (MR_Word) (&check_hlds__simplify__format_call_scalar_common_1[7]), FmtStrVals_6);
  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (BaseSet_7));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) (AddedSets_8));
  }
  parse_tree__set_of_var__union_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_10, &Vars_4);
  return Vars_4;
}

MR_bool MR_CALL 
check_hlds__simplify__format_call__is_format_call_2_p_0(
  MR_Word PredInfo_3,
  MR_Word ArgVars_4)
{
  MR_bool succeeded;
  MR_Word ModuleName_5;
  MR_String Name_6;
  MR_Word ModuleName_10;
  MR_Word Var_74;
  MR_Word Var_83;
  MR_Word Var_91;

  ModuleName_5 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_3);
  Name_6 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_3);
  succeeded = (strcmp(Name_6, (MR_String) "format") == 0);
  if (succeeded)
  {
    mdbcomp__builtin_modules__maybe_remove_stdlib_wrapper_2_p_0(ModuleName_5, &ModuleName_10);
    succeeded = (ArgVars_4 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_74 = ((MR_Word) ((MR_hl_field(1, ArgVars_4, (MR_Integer) 1))));
      succeeded = (Var_74 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_83 = ((MR_Word) ((MR_hl_field(1, Var_74, (MR_Integer) 1))));
        succeeded = (Var_83 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_91 = ((MR_Word) ((MR_hl_field(1, Var_83, (MR_Integer) 1))));
          if (((MR_tag((MR_Word) ModuleName_10)) == (MR_Integer) 1))
          {
            MR_String Var_66 = ((MR_String) ((MR_hl_field(1, ModuleName_10, (MR_Integer) 1))));
            MR_Word Var_67 = ((MR_Word) ((MR_hl_field(1, ModuleName_10, (MR_Integer) 0))));
            MR_String Var_76;
            MR_Word Var_85;

            succeeded = ((MR_tag((MR_Word) Var_67)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_76 = ((MR_String) ((MR_hl_field(0, Var_67, (MR_Integer) 0))));
              succeeded = (Var_91 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_85 = ((MR_Word) ((MR_hl_field(1, Var_91, (MR_Integer) 1))));
                if ((strcmp(Var_66, (MR_String) "builder") == 0))
                {
                  succeeded = (strcmp(Var_76, (MR_String) "string") == 0);
                  if (succeeded)
                    succeeded = (Var_85 == (MR_Word) ((MR_Unsigned) 0U));
                }
                else
                if ((strcmp(Var_66, (MR_String) "string_writer") == 0))
                {
                  MR_Word Var_46;
                  MR_Word Var_47;

                  succeeded = (strcmp(Var_76, (MR_String) "stream") == 0);
                  if (succeeded)
                  {
                    succeeded = (Var_85 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_46 = ((MR_Word) ((MR_hl_field(1, Var_85, (MR_Integer) 1))));
                      succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Var_47 = ((MR_Word) ((MR_hl_field(1, Var_46, (MR_Integer) 1))));
                        succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
                      }
                    }
                  }
                }
                else
                  succeeded = MR_FALSE;
              }
            }
          }
          else
          {
            MR_String Var_65 = ((MR_String) ((MR_hl_field(0, ModuleName_10, (MR_Integer) 0))));

            if ((strcmp(Var_65, (MR_String) "io") == 0))
            {
              MR_Word Var_93;

              succeeded = (Var_91 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_93 = ((MR_Word) ((MR_hl_field(1, Var_91, (MR_Integer) 1))));
                if ((Var_93 == (MR_Word) ((MR_Unsigned) 0U)))
                  succeeded = MR_TRUE;
                else
                {
                  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, Var_93, (MR_Integer) 1))));

                  succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
            else
            if ((strcmp(Var_65, (MR_String) "string") == 0))
              succeeded = (Var_91 == (MR_Word) ((MR_Unsigned) 0U));
            else
              succeeded = MR_FALSE;
          }
        }
      }
    }
  }
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word MaybeFormatCall_7;

    hlds__hlds_pred__pred_info_get_format_call_2_p_0(PredInfo_3, &MaybeFormatCall_7);
    succeeded = (MaybeFormatCall_7 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__format_call____Unify____conj_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__format_call____Compare____conj_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__format_call____Unify____conj_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__format_call____Compare____conj_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__format_call____Unify____conj_maps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__format_call____Compare____conj_maps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_pred_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__format_call____Unify____conj_pred_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_pred_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__format_call____Compare____conj_pred_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fmt_str_val_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__format_call____Unify____fmt_str_val_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____fmt_str_val_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__format_call____Compare____fmt_str_val_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_string_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__format_call____Unify____follow_string_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_string_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__format_call____Compare____follow_string_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__format_call____Unify____format_call_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__format_call____Compare____format_call_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_site_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__format_call____Unify____format_call_site_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_site_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__format_call____Compare____format_call_site_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_traverse_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__format_call____Unify____format_call_traverse_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_traverse_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__format_call____Compare____format_call_traverse_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_element_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__format_call____Unify____list_element_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_element_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__format_call____Compare____list_element_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____maybe_generate_implicit_stream_warnings_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__format_call____Unify____maybe_generate_implicit_stream_warnings_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____maybe_generate_implicit_stream_warnings_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__format_call____Compare____maybe_generate_implicit_stream_warnings_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____state_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__format_call____Unify____state_format_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____state_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__format_call____Compare____state_format_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__format_call____Unify____string_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__format_call____Compare____string_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__simplify__format_call____Unify____string_state_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__simplify__format_call____Compare____string_state_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fmt_str_val_vars_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_follow_skeleton_result_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_follow_string_result_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_kind_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_site_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_traverse_params_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_element_map_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_map_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_maybe_generate_implicit_stream_warnings_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_state_format_0);
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
