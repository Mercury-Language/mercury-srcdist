/*
** Automatically generated from `code_loc_dep.m'
** by the Mercury compiler,
** version rotd-2019-08-21
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


// :- module ll_backend.code_loc_dep.
// :- implementation.

/*
INIT mercury__ll_backend__code_loc_dep__init
ENDINIT
*/

#include "ll_backend.code_loc_dep.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.code_util.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.livemap.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_debug.mih"
#include "ll_backend.trace_gen.mih"
#include "ll_backend.var_locn.mih"
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
#include "int.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0_s {
  MR_Word ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__FieldLvals_8;
  MR_bool ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__succeeded;
  MR_Word ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__Lvals_16;
  jmp_buf ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__commit_0;
  MR_Word ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__TypeCtorInfo_32_32;
  MR_Word ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__Lval_17;
  MR_Box ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__conv0_Lval_17;
};


static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_loc_dep__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_loc_dep__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_ite_region_info_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__code_loc_dep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_loc_dep__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_loc_dep__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_loc_dep__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_ptag_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_loc_dep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__code_loc_dep__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__code_loc_dep__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__code_loc_dep__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_pred__type_ctor_info_arg_info_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__code_loc_dep__maybe__ti_maybe_1ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0;

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_branch_end_info_0[1];

static const MR_NotagFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__notag_functor_desc_branch_end_info_0;

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_call_direction_0_0;

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_call_direction_0_1;

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_value_ordered_call_direction_0[2];

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_name_ordered_call_direction_0[2];

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_call_direction_0[2];

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_code_info_component_0_0;

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_code_info_component_0_1;

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_code_info_component_0_2;

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_code_info_component_0_3;

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_value_ordered_code_info_component_0[4];

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_name_ordered_code_info_component_0[4];

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_code_info_component_0[4];

static const MR_FA_TypeInfo_Struct1 ll_backend__code_loc_dep__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__code_loc_dep__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_code_loc_dep_0_0[7];

static const MR_ConstString ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_names_code_loc_dep_0_0[7];

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_code_loc_dep_0_0;

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_code_loc_dep_0_0[1];

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_code_loc_dep_0[1];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_code_loc_dep_0[1];

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_code_loc_dep_0[1];

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_commit_hijack_info_0_0[2];

static const MR_DuArgLocn ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_locns_commit_hijack_info_0_0[2];

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_commit_hijack_info_0_0;

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_commit_hijack_info_0_1;

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_commit_hijack_info_0_2[1];

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_commit_hijack_info_0_2;

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_commit_hijack_info_0_3[3];

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_commit_hijack_info_0_3;

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_commit_hijack_info_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_commit_hijack_info_0_1[1];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_commit_hijack_info_0_2[1];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_commit_hijack_info_0_3[1];

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_commit_hijack_info_0[4];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_commit_hijack_info_0[4];

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_commit_hijack_info_0[4];

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_condition_env_0_0;

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_condition_env_0_1;

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_value_ordered_condition_env_0[2];

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_name_ordered_condition_env_0[2];

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_condition_env_0[2];

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_curfr_vs_maxfr_0_0;

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_curfr_vs_maxfr_0_1;

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_value_ordered_curfr_vs_maxfr_0[2];

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_name_ordered_curfr_vs_maxfr_0[2];

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_curfr_vs_maxfr_0[2];

static const MR_FA_TypeInfo_Struct1 ll_backend__code_loc_dep__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__code_loc_dep__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__code_loc_dep__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__code_loc_dep__maybe__ti_maybe_1ll_backend__code_loc_dep__type_ctor_info_region_commit_stack_frame_0;

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_det_commit_info_0_0[3];

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_det_commit_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_det_commit_info_0_0[1];

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_det_commit_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_det_commit_info_0[1];

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_det_commit_info_0[1];

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_disj_hijack_info_0_0;

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_disj_hijack_info_0_1;

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_disj_hijack_info_0_2;

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_disj_hijack_info_0_3[1];

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_disj_hijack_info_0_3;

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_disj_hijack_info_0_4[2];

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_disj_hijack_info_0_4;

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_disj_hijack_info_0_0[3];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_disj_hijack_info_0_1[1];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_disj_hijack_info_0_2[1];

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_disj_hijack_info_0[3];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_disj_hijack_info_0[5];

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_disj_hijack_info_0[5];

static const MR_FA_TypeInfo_Struct1 ll_backend__code_loc_dep__stack__ti_stack_1ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0;

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_fail_info_0_0[5];

static const MR_DuArgLocn ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_locns_fail_info_0_0[5];

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_fail_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_fail_info_0_0[1];

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_fail_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_fail_info_0[1];

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_fail_info_0[1];

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_hijack_allowed_0_0;

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_hijack_allowed_0_1;

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_value_ordered_hijack_allowed_0[2];

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_name_ordered_hijack_allowed_0[2];

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_hijack_allowed_0[2];

static const MR_FA_TypeInfo_Struct1 ll_backend__code_loc_dep__maybe__ti_maybe_1ll_backend__code_loc_dep__type_ctor_info_ite_region_info_0;

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_ite_hijack_info_0_0[4];

static const MR_DuArgLocn ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_locns_ite_hijack_info_0_0[4];

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_ite_hijack_info_0_0[1];

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_ite_hijack_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_ite_hijack_info_0[1];

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_ite_hijack_info_0[1];

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_type_0_0;

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_ite_hijack_type_0_1[1];

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_type_0_1;

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_type_0_2;

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_ite_hijack_type_0_3[1];

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_type_0_3;

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_ite_hijack_type_0_4[3];

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_type_0_4;

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_ite_hijack_type_0_0[2];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_ite_hijack_type_0_1[1];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_ite_hijack_type_0_2[1];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_ite_hijack_type_0_3[1];

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_ite_hijack_type_0[4];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_ite_hijack_type_0[5];

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_ite_hijack_type_0[5];

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_ite_region_info_0_0[2];

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_region_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_ite_region_info_0_0[1];

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_ite_region_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_ite_region_info_0[1];

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_ite_region_info_0[1];

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_position_info_0[1];

static const MR_NotagFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__notag_functor_desc_position_info_0;

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_redoip_update_0_0;

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_redoip_update_0_1;

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_value_ordered_redoip_update_0[2];

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_name_ordered_redoip_update_0[2];

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_redoip_update_0[2];

static const MR_FA_TypeInfo_Struct1 ll_backend__code_loc_dep__list__ti_list_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_region_commit_stack_frame_0_0[2];

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_region_commit_stack_frame_0_0;

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_region_commit_stack_frame_0_0[1];

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_region_commit_stack_frame_0[1];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_region_commit_stack_frame_0[1];

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_region_commit_stack_frame_0[1];

static const MR_FA_TypeInfo_Struct2 ll_backend__code_loc_dep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_resume_point_info_0_0[2];

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_info_0_0;

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_resume_point_info_0_1[2];

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_info_0_1;

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_resume_point_info_0_2[4];

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_info_0_2;

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_resume_point_info_0_3[4];

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_info_0_3;

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_resume_point_info_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_resume_point_info_0_1[1];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_resume_point_info_0_2[1];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_resume_point_info_0_3[1];

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_resume_point_info_0[4];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_resume_point_info_0[4];

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_resume_point_info_0[4];

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_resume_point_known_0_0[1];

static const MR_DuArgLocn ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_locns_resume_point_known_0_0[1];

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_known_0_0;

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_known_0_1;

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_resume_point_known_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_resume_point_known_0_1[1];

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_resume_point_known_0[2];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_resume_point_known_0[2];

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_resume_point_known_0[2];

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_semi_commit_info_0_0[5];

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_semi_commit_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_semi_commit_info_0_0[1];

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_semi_commit_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_semi_commit_info_0[1];

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_semi_commit_info_0[1];

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_temp_slot_persistence_0_0;

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_temp_slot_persistence_0_1;

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_value_ordered_temp_slot_persistence_0[2];

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_name_ordered_temp_slot_persistence_0[2];

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_temp_slot_persistence_0[2];

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__release_temp_slot__3841__1_2_p_0(
  MR_Word IsInPersistentTemps0_14,
  MR_Word HeadVar__2_28);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__release_temp_slot__3847__1_2_p_0(
  MR_Word IsInPersistentTemps0_14,
  MR_Word HeadVar__2_24);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__effect_resume_point__1794__1_2_p_0(
  MR_Word OldKeySet_23,
  MR_Word NewKeySet_24);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__enter_simple_neg__1266__1_1_p_0(
  MR_Word Code_13);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__ite_enter_then__1198__1_2_p_0(
  MR_Word MaybeRegionInfo_26,
  MR_Word HeadVar__2_96);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__ite_enter_then__1148__1_2_p_0(
  MR_Word MaybeRegionInfo_26,
  MR_Word HeadVar__2_169);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__ite_enter_then__1214__1_2_p_0(
  MR_Word MaybeRegionInfo_26,
  MR_Word HeadVar__2_85);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__ite_enter_then__1223__1_2_p_0(
  MR_Word MaybeRegionInfo_26,
  MR_Word HeadVar__2_49);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__prepare_for_ite_hijack__1048__1_2_p_0(
  MR_Word MaybeEmbeddedFrameId_10,
  MR_Word HeadVar__2_135);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__undo_disj_hijack__947__1_2_p_0(
  MR_Word CurfrMaxfr_11,
  MR_Word HeadVar__2_62);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__undo_disj_hijack__961__1_2_p_0(
  MR_Word CurfrMaxfr_11,
  MR_Word HeadVar__2_51);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__undo_disj_hijack__959__1_2_p_0(
  MR_Word ResumeKnown_10,
  MR_Word HeadVar__2_47);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__undo_disj_hijack__970__1_2_p_0(
  MR_Word CurfrMaxfr_11,
  MR_Word HeadVar__2_26);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__generate_branch_end__516__1_2_p_0(
  MR_Word CondEnv0_26,
  MR_Word CondEnv1_31);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__generate_branch_end__496__1_2_p_0(
  MR_Word Redoip0_33,
  MR_Word Redoip1_34);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____resume_point_known_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____resume_point_known_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____region_commit_stack_frame_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____region_commit_stack_frame_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____redoip_update_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____redoip_update_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____ite_region_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____ite_region_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____ite_hijack_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____ite_hijack_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____hijack_allowed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____hijack_allowed_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____curfr_vs_maxfr_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____curfr_vs_maxfr_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____condition_env_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____condition_env_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____commit_hijack_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____commit_hijack_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__code_loc_dep__associate_stack_slot_3_p_0(
  MR_Word CI_4,
  MR_Word Var_5,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__call_arg_in_selected_dir_2_p_0(
  MR_Word Direction_3,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__valid_stack_slot_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word VarTypes_5,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__key_var_is_of_non_dummy_type_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word VarTypes_5,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__code_loc_dep__record_highest_used_reg_6_p_0(
  MR_Word HeadVar__1_7,
  MR_Word AbsLocn_8,
  MR_Integer STATE_VARIABLE_HighestUsedRegR_0_17,
  MR_Integer * STATE_VARIABLE_HighestUsedRegR_18,
  MR_Integer STATE_VARIABLE_HighestUsedRegF_0_19,
  MR_Integer * STATE_VARIABLE_HighestUsedRegF_20);

static void MR_CALL 
ll_backend__code_loc_dep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_104_105_103_104_101_115_116_95_117_115_101_100_95_114_101_103_95_95_91_49_93_95_48_6_p_0(
  MR_Word AbsLocn_8,
  MR_Integer STATE_VARIABLE_HighestUsedRegR_0_17,
  MR_Integer * STATE_VARIABLE_HighestUsedRegR_18,
  MR_Integer STATE_VARIABLE_HighestUsedRegF_0_19,
  MR_Integer * STATE_VARIABLE_HighestUsedRegF_20);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__is_var_field_3_p_0(
  MR_Word MaybeTag_4,
  MR_Word Var_5,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__generate_return_live_lvalues_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__generate_call_vn_livevals_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__code_loc_dep__generate_input_var_vn_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Vals_0_2,
  MR_Word * STATE_VARIABLE_Vals_3);

static void MR_CALL 
ll_backend__code_loc_dep__generate_call_temp_vn_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Vals_0_2,
  MR_Word * STATE_VARIABLE_Vals_3);

static void MR_CALL 
ll_backend__code_loc_dep__generate_stack_var_vn_4_p_0(
  MR_Word CI_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Vals_0_3,
  MR_Word * STATE_VARIABLE_Vals_4);

static void MR_CALL 
ll_backend__code_loc_dep__save_variables_on_stack_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep__save_variables_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__setup_return_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__code_loc_dep__which_variables_are_forward_live_4_p_0(
  MR_Word CLD_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_DeadVars_0_3,
  MR_Word * STATE_VARIABLE_DeadVars_4);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__setup_call_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__setup_call_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__code_loc_dep__setup_call_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep__var_arg_info_to_lval_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__code_loc_dep__compute_resume_var_stack_locs_2_p_0(
  MR_Word CLD_3,
  MR_Word * VarLocs_4);

static void MR_CALL 
ll_backend__code_loc_dep__set_var_locn_info_3_p_0(
  MR_Word EI_4,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7);

static void MR_CALL 
ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_5(
  void * env_ptr_arg);

static MR_Box MR_CALL 
ll_backend__code_loc_dep__make_resume_point_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__code_loc_dep__make_stack_resume_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__code_loc_dep__make_stack_resume_map_3_p_0(
  MR_Word ResumeVars_4,
  MR_Word StackSlots_5,
  MR_Word * StackMap_6);

static void MR_CALL 
ll_backend__code_loc_dep__maybe_restore_trail_info_7_p_0(
  MR_Word MaybeTrailSlots_8,
  MR_Word * CommitCode_9,
  MR_Word * RestoreCode_10,
  MR_Word STATE_VARIABLE_CI_0_15,
  MR_Word * STATE_VARIABLE_CI_16,
  MR_Word STATE_VARIABLE_CLD_0_17,
  MR_Word * STATE_VARIABLE_CLD_18);

static void MR_CALL 
ll_backend__code_loc_dep__maybe_generate_resume_layout_5_p_0(
  MR_Word Label_6,
  MR_Word ResumeMap_7,
  MR_Word STATE_VARIABLE_CI_0_17,
  MR_Word * STATE_VARIABLE_CI_18,
  MR_Word CLD_9);

static void MR_CALL 
ll_backend__code_loc_dep__set_var_locations_3_p_0(
  MR_Word Map_4,
  MR_Word STATE_VARIABLE_CLD_0_10,
  MR_Word * STATE_VARIABLE_CLD_11);

static void MR_CALL 
ll_backend__code_loc_dep__flatten_varlval_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__code_loc_dep__flatten_varlval_list_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ll_backend__code_loc_dep__place_resume_vars_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_CLD_0_4,
  MR_Word * STATE_VARIABLE_CLD_5);

static void MR_CALL 
ll_backend__code_loc_dep__place_resume_var_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_CLD_0_5,
  MR_Word * STATE_VARIABLE_CLD_6);

static void MR_CALL 
ll_backend__code_loc_dep__extract_label_from_code_addr_2_p_0(
  MR_Word CodeAddr_3,
  MR_Word * Label_4);

static void MR_CALL 
ll_backend__code_loc_dep__pick_and_place_vars_6_p_0(
  MR_Word VarLocSets_7,
  MR_Word * LiveLocs_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_14,
  MR_Word * STATE_VARIABLE_CLD_15);

static void MR_CALL 
ll_backend__code_loc_dep__pick_var_places_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__pick_matching_resume_addr_3_p_0(
  MR_Word CLD_4,
  MR_Word ResumeMaps_5,
  MR_Word * Addr_6);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__all_vars_match_resume_map_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__code_loc_dep__maybe_save_trail_info_7_p_0(
  MR_Word AddTrailOps_8,
  MR_Word * MaybeTrailSlots_9,
  MR_Word * SaveTrailCode_10,
  MR_Word STATE_VARIABLE_CI_0_15,
  MR_Word * STATE_VARIABLE_CI_16,
  MR_Word STATE_VARIABLE_CLD_0_17,
  MR_Word * STATE_VARIABLE_CLD_18);

static void MR_CALL 
ll_backend__code_loc_dep__clone_resume_point_4_p_0(
  MR_Word ResumePoint0_5,
  MR_Word * ResumePoint_6,
  MR_Word STATE_VARIABLE_CI_0_21,
  MR_Word * STATE_VARIABLE_CI_22);

static void MR_CALL 
ll_backend__code_loc_dep__maybe_restore_region_commit_frame_7_p_0(
  MR_Word MaybeRegionCommitFrameInfo_8,
  MR_Word * SuccessCode_9,
  MR_Word * FailureCode_10,
  MR_Word STATE_VARIABLE_CI_0_16,
  MR_Word * STATE_VARIABLE_CI_17,
  MR_Word STATE_VARIABLE_CLD_0_18,
  MR_Word * STATE_VARIABLE_CLD_19);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__release_temp_slot_6_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__release_temp_slot_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__code_loc_dep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_115_97_118_101_95_114_101_103_105_111_110_95_99_111_109_109_105_116_95_102_114_97_109_101_95_95_91_50_93_95_48_9_p_0(
  MR_Word AddRegionOps_10,
  MR_Word CommitGoalInfo_12,
  MR_Word * MaybeRegionCommitFrameInfo_13,
  MR_Word * Code_14,
  MR_Word STATE_VARIABLE_CI_0_43,
  MR_Word * STATE_VARIABLE_CI_44,
  MR_Word STATE_VARIABLE_CLD_0_45,
  MR_Word * STATE_VARIABLE_CLD_46);

static void MR_CALL 
ll_backend__code_loc_dep__save_unprotected_live_regions_8_p_0(
  MR_Word NumLval_1,
  MR_Word AddrLval_2,
  MR_Word EmbeddedStackFrame_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_CLD_0_7,
  MR_Word * STATE_VARIABLE_CLD_8);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__find_unused_slots_for_items_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadItem_11,
  MR_Word TailItems_12,
  MR_Word TempsInUse_13,
  MR_Word * ChosenStackVars_14,
  MR_Word * StackId_15,
  MR_Integer * FirstSlotNum_16,
  MR_Integer * LastSlotNum_17);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__find_next_slots_for_items_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word TempsInUse_3,
  MR_Word * HeadVar__4_4,
  MR_Word StackId_5,
  MR_Integer STATE_VARIABLE_SlotNum_0_6,
  MR_Integer * STATE_VARIABLE_SlotNum_7);

static void MR_CALL 
ll_backend__code_loc_dep__new_temp_slots_8_p_0(
  MR_Word HeadItem_9,
  MR_Word TailItems_10,
  MR_Word * StackVars_11,
  MR_Word * StackId_12,
  MR_Integer * FirstSlotNum_13,
  MR_Integer * LastSlotNum_14,
  MR_Word STATE_VARIABLE_CI_0_28,
  MR_Word * STATE_VARIABLE_CI_29);

static void MR_CALL 
ll_backend__code_loc_dep__record_new_temp_slots_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word StackId_2,
  MR_Integer STATE_VARIABLE_CurSlotNum_0_3,
  MR_Integer * STATE_VARIABLE_CurSlotNum_4,
  MR_Integer STATE_VARIABLE_TempSlotCount_0_5,
  MR_Integer * STATE_VARIABLE_TempSlotCount_6,
  MR_Word STATE_VARIABLE_TempContentMap_0_7,
  MR_Word * STATE_VARIABLE_TempContentMap_8,
  MR_Word * HeadVar__9_9);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__enter_simple_neg_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__code_loc_dep__make_fake_resume_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ResumeMap_0_2,
  MR_Word * STATE_VARIABLE_ResumeMap_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__effect_resume_point_5_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__ite_enter_then_8_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__ite_enter_then_8_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__ite_enter_then_8_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__ite_enter_then_8_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__maybe_pick_stack_resume_point_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Map_2,
  MR_Word * Addr_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__prepare_for_ite_hijack_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__code_loc_dep__inside_non_condition_2_p_0(
  MR_Word STATE_VARIABLE_CLD_0_11,
  MR_Word * STATE_VARIABLE_CLD_12);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__undo_disj_hijack_4_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__undo_disj_hijack_4_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__undo_disj_hijack_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__undo_disj_hijack_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ll_backend__code_loc_dep__pick_stack_resume_point_3_p_0(
  MR_Word ResumePoint_4,
  MR_Word * Map_5,
  MR_Word * Addr_6);

static void MR_CALL 
ll_backend__code_loc_dep__create_temp_frame_7_p_0(
  MR_Word Redoip_8,
  MR_String Comment_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CI_0_22,
  MR_Word * STATE_VARIABLE_CI_23,
  MR_Word STATE_VARIABLE_CLD_0_24,
  MR_Word * STATE_VARIABLE_CLD_25);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__find_unused_slot_for_item_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Item_8,
  MR_Word TempsInUse_9,
  MR_Word * ChosenStackVar_10,
  MR_Word * Remainder_11);

static MR_Box MR_CALL 
ll_backend__code_loc_dep__after_all_branches_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__generate_branch_end_6_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
ll_backend__code_loc_dep__generate_branch_end_6_p_0_2(
  MR_Box closure_arg);

static MR_Box MR_CALL 
ll_backend__code_loc_dep__generate_branch_end_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__code_loc_dep__place_vars_5_p_0(
  MR_Word VarLocs_6,
  MR_Word * Code_7,
  MR_Word CI_8,
  MR_Word STATE_VARIABLE_CLD_0_13,
  MR_Word * STATE_VARIABLE_CLD_14);

static MR_Box MR_CALL 
ll_backend__code_loc_dep__remake_with_store_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__code_loc_dep__remake_with_store_map_3_p_0(
  MR_Word StoreMap_4,
  MR_Word STATE_VARIABLE_CLD_0_10,
  MR_Word * STATE_VARIABLE_CLD_11);

static void MR_CALL 
ll_backend__code_loc_dep__set_fail_info_3_p_0(
  MR_Word FI_4,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7);

static void MR_CALL 
ll_backend__code_loc_dep__set_temps_in_use_3_p_0(
  MR_Word TI_4,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7);

static void MR_CALL 
ll_backend__code_loc_dep__get_fail_info_2_p_0(
  MR_Word CLD_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__code_loc_dep__get_temps_in_use_2_p_0(
  MR_Word CLD_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__code_loc_dep__make_vars_forward_live_4_p_0(
  MR_Word Vars_5,
  MR_Word CI_6,
  MR_Word STATE_VARIABLE_CLD_0_12,
  MR_Word * STATE_VARIABLE_CLD_13);

static void MR_CALL 
ll_backend__code_loc_dep__do_make_vars_forward_live_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word StackSlots_2,
  MR_Integer N0_3,
  MR_Word STATE_VARIABLE_VarLocnInfo_0_4,
  MR_Word * STATE_VARIABLE_VarLocnInfo_5);

static void MR_CALL 
ll_backend__code_loc_dep__find_unused_reg_4_p_0(
  MR_Word VLI_5,
  MR_Word RegType_6,
  MR_Integer N0_7,
  MR_Integer * N_8);

static void MR_CALL 
ll_backend__code_loc_dep__rem_forward_live_vars_3_p_0(
  MR_Word Deaths_4,
  MR_Word STATE_VARIABLE_CLD_0_8,
  MR_Word * STATE_VARIABLE_CLD_9);

static void MR_CALL 
ll_backend__code_loc_dep__maybe_make_vars_forward_dead_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word FirstTime_2,
  MR_Word STATE_VARIABLE_VLI_0_3,
  MR_Word * STATE_VARIABLE_VLI_4);

static MR_Box MR_CALL 
ll_backend__code_loc_dep__init_fail_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__code_loc_dep__init_fail_info_7_p_0(
  MR_Word CodeModel_8,
  MR_Word MaybeFailVars_9,
  MR_Word * ResumePoint_10,
  MR_Word STATE_VARIABLE_CI_0_34,
  MR_Word * STATE_VARIABLE_CI_35,
  MR_Word STATE_VARIABLE_CLD_0_36,
  MR_Word * STATE_VARIABLE_CLD_37);

static void MR_CALL 
ll_backend__code_loc_dep__make_singleton_sets_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____branch_end_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____branch_end_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____branch_end_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____branch_end_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____call_direction_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____call_direction_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____code_info_component_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____code_info_component_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____code_loc_dep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____code_loc_dep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____commit_hijack_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____commit_hijack_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____condition_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____condition_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____curfr_vs_maxfr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____curfr_vs_maxfr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____det_commit_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____det_commit_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____disj_hijack_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____disj_hijack_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____fail_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____fail_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____hijack_allowed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____hijack_allowed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____ite_hijack_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____ite_hijack_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____ite_hijack_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____ite_hijack_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____ite_region_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____ite_region_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____position_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____position_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____redoip_update_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____redoip_update_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____region_commit_stack_frame_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____region_commit_stack_frame_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____resume_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____resume_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____resume_point_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____resume_point_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____resume_point_known_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____resume_point_known_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____semi_commit_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____semi_commit_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____simple_neg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____simple_neg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____temp_slot_persistence_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_loc_dep____Compare____temp_slot_persistence_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__code_loc_dep_scalar_common_1[48][2];

static /* final */ const MR_Box ll_backend__code_loc_dep_scalar_common_2[14][3];

static /* final */ const MR_Box ll_backend__code_loc_dep_scalar_common_3[16][1];

static /* final */ const MR_Box ll_backend__code_loc_dep_scalar_common_4[11][5];

static /* final */ const MR_Box ll_backend__code_loc_dep_scalar_common_5[2][4];

static /* final */ const MR_Box ll_backend__code_loc_dep_scalar_common_6[5][6];

static /* final */ const MR_Box ll_backend__code_loc_dep_scalar_common_7[1][9];




static /* final */ const MR_Box ll_backend__code_loc_dep_scalar_common_1[48][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_ite_region_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_2[2]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_region_commit_stack_frame_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__stack__stack__type_ctor_info_stack_1)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_3[1]))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_2[4]))),
    ((MR_Box) ((MR_String) "prepare for full disj hijack"))
  },
  /* row 13 */
  {
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[12])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_3[1]))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_2[5]))),
    ((MR_Box) ((MR_String) "restore maxfr for temp frame disj"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_2[4]))),
    ((MR_Box) ((MR_String) "prepare for full ite hijack"))
  },
  /* row 17 */
  {
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[16])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_2[6]))),
    ((MR_Box) ((MR_String) "restore the value of maxfr - perform commit"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_2[4]))),
    ((MR_Box) ((MR_String) "hijack the redofr slot"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_2[6]))),
    ((MR_Box) ((MR_String) "restore maxfr for half commit hijack"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_2[6]))),
    ((MR_Box) ((MR_String) "restore maxfr for quarter commit hijack"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "Prune ticket stack"))
  },
  /* row 23 */
  {
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[22])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "Pop ticket stack"))
  },
  /* row 25 */
  {
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[24])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "restore ticket counter and high water mark"))
  },
  /* row 27 */
  {
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[26])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 28 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[6]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_Unsigned) 6U)),
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_3[1]))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_Unsigned) 7U)),
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_3[1]))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_Unsigned) 6U)),
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_3[0]))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[10]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[11]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[12]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[13]))),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[41]))),
    ((MR_Box) ((MR_String) "the condition succeeded, so don\'t execute else branch"))
  },
  /* row 43 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[14])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[45]))),
    ((MR_Box) ((MR_String) "fail"))
  },
  /* row 47 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ll_backend__code_loc_dep_scalar_common_2[14][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[0])),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[0])),
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[11]))),
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_3[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_3[2]))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_3[0]))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_4[0])),
    ((MR_Box) (ll_backend__code_loc_dep__init_fail_info_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_4[1])),
    ((MR_Box) (ll_backend__code_loc_dep__remake_with_store_map_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_4[1])),
    ((MR_Box) (ll_backend__code_loc_dep__generate_branch_end_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_4[1])),
    ((MR_Box) (ll_backend__code_loc_dep__after_all_branches_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_4[0])),
    ((MR_Box) (ll_backend__code_loc_dep__make_stack_resume_map_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_4[0])),
    ((MR_Box) (ll_backend__code_loc_dep__make_resume_point_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_7[0])),
    ((MR_Box) (ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__code_loc_dep_scalar_common_3[16][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[14])))
  },
  /* row 3 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 4 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "disj no hijack"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[30])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[31])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[32])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "disj quarter hijack"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "disj quarter hijack of do_fail"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "ite no hijack"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "ite quarter hijack"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box ll_backend__code_loc_dep_scalar_common_4[11][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_redoip_update_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_redoip_update_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_condition_env_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_condition_env_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_curfr_vs_maxfr_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_curfr_vs_maxfr_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_known_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_known_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__code_loc_dep__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__code_loc_dep__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_ite_region_info_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_ite_region_info_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__code_loc_dep__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_call_direction_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
};

static /* final */ const MR_Box ll_backend__code_loc_dep_scalar_common_5[2][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__code_loc_dep__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_4[10])),
    ((MR_Box) (ll_backend__code_loc_dep__setup_return_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ll_backend__code_loc_dep_scalar_common_6[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__code_loc_dep__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_ptag_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__code_info__ll_backend__code_info__type_ctor_info_code_info_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_pred__type_ctor_info_arg_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__code_loc_dep_scalar_common_7[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__code_loc_dep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_loc_dep__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_loc_dep__maybe__pti_maybe_1__plain_ll_backend__code_loc_dep__type_ctor_info_ite_region_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_ite_region_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_loc_dep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_loc_dep__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_loc_dep__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_loc_dep__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_ptag_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_loc_dep__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__code_loc_dep__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__code_loc_dep__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__code_loc_dep__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_pred__type_ctor_info_arg_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_loc_dep__maybe__ti_maybe_1ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____branch_end_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____branch_end_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "branch_end",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__maybe__ti_maybe_1ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_branch_end_info_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__notag_functor_desc_branch_end_info_0 = {
  (MR_String) "branch_end_info",
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____branch_end_info_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____branch_end_info_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "branch_end_info",
  {     &ll_backend__code_loc_dep__ll_backend__code_loc_dep__notag_functor_desc_branch_end_info_0 },
  {     &ll_backend__code_loc_dep__ll_backend__code_loc_dep__notag_functor_desc_branch_end_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_branch_end_info_0
};

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_call_direction_0_0 = {
  (MR_String) "caller",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_call_direction_0_1 = {
  (MR_String) "callee",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_value_ordered_call_direction_0[2] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_call_direction_0_0,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_call_direction_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_name_ordered_call_direction_0[2] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_call_direction_0_1,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_call_direction_0_0
};

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_call_direction_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_call_direction_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____call_direction_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____call_direction_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "call_direction",
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_name_ordered_call_direction_0 },
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_value_ordered_call_direction_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_call_direction_0
};

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_code_info_component_0_0 = {
  (MR_String) "cic_forward_live_vars",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_code_info_component_0_1 = {
  (MR_String) "cic_zombies",
  INT32_C(1)
};

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_code_info_component_0_2 = {
  (MR_String) "cic_temps_in_use",
  INT32_C(2)
};

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_code_info_component_0_3 = {
  (MR_String) "cic_par_conj_depth",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_value_ordered_code_info_component_0[4] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_code_info_component_0_0,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_code_info_component_0_1,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_code_info_component_0_2,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_code_info_component_0_3
};

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_name_ordered_code_info_component_0[4] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_code_info_component_0_0,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_code_info_component_0_3,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_code_info_component_0_2,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_code_info_component_0_1
};

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_code_info_component_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_info_component_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____code_info_component_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____code_info_component_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "code_info_component",
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_name_ordered_code_info_component_0 },
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_value_ordered_code_info_component_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_code_info_component_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_loc_dep__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&ll_backend__code_loc_dep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_loc_dep__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_code_loc_dep_0_0[7] = {
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__var_locn__ll_backend__var_locn__type_ctor_info_var_locn_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_fail_info_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_names_code_loc_dep_0_0[7] = {
  (MR_String) "cld_forward_live_vars",
  (MR_String) "cld_instmap",
  (MR_String) "cld_zombies",
  (MR_String) "cld_var_locn_info",
  (MR_String) "cld_temps_in_use",
  (MR_String) "cld_fail_info",
  (MR_String) "cld_par_conj_depth"
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_code_loc_dep_0_0 = {
  (MR_String) "code_loc_dep",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_code_loc_dep_0_0,
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_names_code_loc_dep_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_code_loc_dep_0_0[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_code_loc_dep_0_0
};

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_code_loc_dep_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_code_loc_dep_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_code_loc_dep_0[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_code_loc_dep_0_0
};

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_code_loc_dep_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____code_loc_dep_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____code_loc_dep_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "code_loc_dep",
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_code_loc_dep_0 },
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_code_loc_dep_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_code_loc_dep_0
};

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_commit_hijack_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_DuArgLocn ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_locns_commit_hijack_info_0_0[2] = {
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

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_commit_hijack_info_0_0 = {
  (MR_String) "commit_temp_frame",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_commit_hijack_info_0_0,
  NULL,
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_locns_commit_hijack_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_commit_hijack_info_0_1 = {
  (MR_String) "commit_quarter_hijack",
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

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_commit_hijack_info_0_2[1] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_commit_hijack_info_0_2 = {
  (MR_String) "commit_half_hijack",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_commit_hijack_info_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_commit_hijack_info_0_3[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_commit_hijack_info_0_3 = {
  (MR_String) "commit_full_hijack",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_commit_hijack_info_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_commit_hijack_info_0_0[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_commit_hijack_info_0_1
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_commit_hijack_info_0_1[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_commit_hijack_info_0_0
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_commit_hijack_info_0_2[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_commit_hijack_info_0_2
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_commit_hijack_info_0_3[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_commit_hijack_info_0_3
};

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_commit_hijack_info_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_commit_hijack_info_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_commit_hijack_info_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_commit_hijack_info_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_commit_hijack_info_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_commit_hijack_info_0[4] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_commit_hijack_info_0_3,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_commit_hijack_info_0_2,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_commit_hijack_info_0_1,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_commit_hijack_info_0_0
};

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_commit_hijack_info_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_commit_hijack_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____commit_hijack_info_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____commit_hijack_info_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "commit_hijack_info",
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_commit_hijack_info_0 },
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_commit_hijack_info_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_commit_hijack_info_0
};

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_condition_env_0_0 = {
  (MR_String) "inside_non_condition",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_condition_env_0_1 = {
  (MR_String) "not_inside_non_condition",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_value_ordered_condition_env_0[2] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_condition_env_0_0,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_condition_env_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_name_ordered_condition_env_0[2] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_condition_env_0_0,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_condition_env_0_1
};

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_condition_env_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_condition_env_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____condition_env_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____condition_env_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "condition_env",
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_name_ordered_condition_env_0 },
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_value_ordered_condition_env_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_condition_env_0
};

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_curfr_vs_maxfr_0_0 = {
  (MR_String) "must_be_equal",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_curfr_vs_maxfr_0_1 = {
  (MR_String) "may_be_different",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_value_ordered_curfr_vs_maxfr_0[2] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_curfr_vs_maxfr_0_0,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_curfr_vs_maxfr_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_name_ordered_curfr_vs_maxfr_0[2] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_curfr_vs_maxfr_0_1,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_curfr_vs_maxfr_0_0
};

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_curfr_vs_maxfr_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_curfr_vs_maxfr_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____curfr_vs_maxfr_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____curfr_vs_maxfr_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "curfr_vs_maxfr",
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_name_ordered_curfr_vs_maxfr_0 },
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_value_ordered_curfr_vs_maxfr_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_curfr_vs_maxfr_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_loc_dep__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__code_loc_dep__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_loc_dep__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&ll_backend__code_loc_dep__pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_loc_dep__maybe__ti_maybe_1ll_backend__code_loc_dep__type_ctor_info_region_commit_stack_frame_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_region_commit_stack_frame_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_det_commit_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__maybe__ti_maybe_1ll_backend__code_loc_dep__type_ctor_info_region_commit_stack_frame_0)
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_det_commit_info_0_0 = {
  (MR_String) "det_commit_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_det_commit_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_det_commit_info_0_0[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_det_commit_info_0_0
};

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_det_commit_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_det_commit_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_det_commit_info_0[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_det_commit_info_0_0
};

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_det_commit_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_det_commit_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____det_commit_info_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____det_commit_info_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "det_commit_info",
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_det_commit_info_0 },
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_det_commit_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_det_commit_info_0
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_disj_hijack_info_0_0 = {
  (MR_String) "disj_no_hijack",
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

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_disj_hijack_info_0_1 = {
  (MR_String) "disj_temp_frame",
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

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_disj_hijack_info_0_2 = {
  (MR_String) "disj_quarter_hijack",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_disj_hijack_info_0_3[1] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_disj_hijack_info_0_3 = {
  (MR_String) "disj_half_hijack",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(3),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_disj_hijack_info_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_disj_hijack_info_0_4[2] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_disj_hijack_info_0_4 = {
  (MR_String) "disj_full_hijack",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_disj_hijack_info_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_disj_hijack_info_0_0[3] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_disj_hijack_info_0_0,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_disj_hijack_info_0_1,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_disj_hijack_info_0_2
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_disj_hijack_info_0_1[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_disj_hijack_info_0_3
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_disj_hijack_info_0_2[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_disj_hijack_info_0_4
};

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_disj_hijack_info_0[3] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_disj_hijack_info_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_disj_hijack_info_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_disj_hijack_info_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_disj_hijack_info_0[5] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_disj_hijack_info_0_4,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_disj_hijack_info_0_3,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_disj_hijack_info_0_0,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_disj_hijack_info_0_2,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_disj_hijack_info_0_1
};

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_disj_hijack_info_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_disj_hijack_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____disj_hijack_info_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____disj_hijack_info_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "disj_hijack_info",
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_disj_hijack_info_0 },
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_disj_hijack_info_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_disj_hijack_info_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_loc_dep__stack__ti_stack_1ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0 = {
  &mercury__stack__stack__type_ctor_info_stack_1,
  {
    (MR_TypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_fail_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__stack__ti_stack_1ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_known_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_curfr_vs_maxfr_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_condition_env_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_hijack_allowed_0)
};

static const MR_DuArgLocn ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_locns_fail_info_0_0[5] = {
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
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_fail_info_0_0 = {
  (MR_String) "fail_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_fail_info_0_0,
  NULL,
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_locns_fail_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_fail_info_0_0[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_fail_info_0_0
};

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_fail_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_fail_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_fail_info_0[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_fail_info_0_0
};

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_fail_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_fail_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____fail_info_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____fail_info_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "fail_info",
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_fail_info_0 },
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_fail_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_fail_info_0
};

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_hijack_allowed_0_0 = {
  (MR_String) "allowed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_hijack_allowed_0_1 = {
  (MR_String) "not_allowed",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_value_ordered_hijack_allowed_0[2] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_hijack_allowed_0_0,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_hijack_allowed_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_name_ordered_hijack_allowed_0[2] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_hijack_allowed_0_0,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_hijack_allowed_0_1
};

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_hijack_allowed_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_hijack_allowed_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____hijack_allowed_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____hijack_allowed_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "hijack_allowed",
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_name_ordered_hijack_allowed_0 },
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_value_ordered_hijack_allowed_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_hijack_allowed_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_loc_dep__maybe__ti_maybe_1ll_backend__code_loc_dep__type_ctor_info_ite_region_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_ite_region_info_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_ite_hijack_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_known_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_condition_env_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_ite_hijack_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__maybe__ti_maybe_1ll_backend__code_loc_dep__type_ctor_info_ite_region_info_0)
};

static const MR_DuArgLocn ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_locns_ite_hijack_info_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_info_0_0 = {
  (MR_String) "ite_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_ite_hijack_info_0_0,
  NULL,
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_locns_ite_hijack_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_ite_hijack_info_0_0[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_info_0_0
};

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_ite_hijack_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_ite_hijack_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_ite_hijack_info_0[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_info_0_0
};

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_ite_hijack_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_ite_hijack_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____ite_hijack_info_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____ite_hijack_info_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "ite_hijack_info",
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_ite_hijack_info_0 },
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_ite_hijack_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_ite_hijack_info_0
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_type_0_0 = {
  (MR_String) "ite_no_hijack",
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

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_ite_hijack_type_0_1[1] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_type_0_1 = {
  (MR_String) "ite_temp_frame",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_ite_hijack_type_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_type_0_2 = {
  (MR_String) "ite_quarter_hijack",
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

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_ite_hijack_type_0_3[1] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_type_0_3 = {
  (MR_String) "ite_half_hijack",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(3),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_ite_hijack_type_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_ite_hijack_type_0_4[3] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_type_0_4 = {
  (MR_String) "ite_full_hijack",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_ite_hijack_type_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_ite_hijack_type_0_0[2] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_type_0_0,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_type_0_2
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_ite_hijack_type_0_1[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_type_0_1
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_ite_hijack_type_0_2[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_type_0_3
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_ite_hijack_type_0_3[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_type_0_4
};

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_ite_hijack_type_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_ite_hijack_type_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_ite_hijack_type_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_ite_hijack_type_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_ite_hijack_type_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_ite_hijack_type_0[5] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_type_0_4,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_type_0_3,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_type_0_0,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_type_0_2,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_hijack_type_0_1
};

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_ite_hijack_type_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_ite_hijack_type_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____ite_hijack_type_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____ite_hijack_type_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "ite_hijack_type",
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_ite_hijack_type_0 },
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_ite_hijack_type_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_ite_hijack_type_0
};

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_ite_region_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_region_info_0_0 = {
  (MR_String) "ite_region_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_ite_region_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_ite_region_info_0_0[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_region_info_0_0
};

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_ite_region_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_ite_region_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_ite_region_info_0[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_ite_region_info_0_0
};

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_ite_region_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_ite_region_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____ite_region_info_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____ite_region_info_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "ite_region_info",
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_ite_region_info_0 },
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_ite_region_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_ite_region_info_0
};

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_position_info_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__notag_functor_desc_position_info_0 = {
  (MR_String) "position_info",
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_position_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____position_info_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____position_info_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "position_info",
  {     &ll_backend__code_loc_dep__ll_backend__code_loc_dep__notag_functor_desc_position_info_0 },
  {     &ll_backend__code_loc_dep__ll_backend__code_loc_dep__notag_functor_desc_position_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_position_info_0
};

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_redoip_update_0_0 = {
  (MR_String) "has_been_done",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_redoip_update_0_1 = {
  (MR_String) "wont_be_done",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_value_ordered_redoip_update_0[2] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_redoip_update_0_0,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_redoip_update_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_name_ordered_redoip_update_0[2] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_redoip_update_0_0,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_redoip_update_0_1
};

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_redoip_update_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_redoip_update_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____redoip_update_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____redoip_update_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "redoip_update",
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_name_ordered_redoip_update_0 },
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_value_ordered_redoip_update_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_redoip_update_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_loc_dep__list__ti_list_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_region_commit_stack_frame_0_0[2] = {
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_embedded_stack_frame_id_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__list__ti_list_1ll_backend__llds__type_ctor_info_lval_0)
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_region_commit_stack_frame_0_0 = {
  (MR_String) "region_commit_stack_frame",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_region_commit_stack_frame_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_region_commit_stack_frame_0_0[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_region_commit_stack_frame_0_0
};

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_region_commit_stack_frame_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_region_commit_stack_frame_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_region_commit_stack_frame_0[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_region_commit_stack_frame_0_0
};

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_region_commit_stack_frame_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_region_commit_stack_frame_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____region_commit_stack_frame_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____region_commit_stack_frame_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "region_commit_stack_frame",
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_region_commit_stack_frame_0 },
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_region_commit_stack_frame_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_region_commit_stack_frame_0
};

static const MR_FA_TypeInfo_Struct2 ll_backend__code_loc_dep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__code_loc_dep__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&ll_backend__code_loc_dep__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)
  }
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____resume_map_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____resume_map_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "resume_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_resume_point_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0)
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_info_0_0 = {
  (MR_String) "orig_only",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_resume_point_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_resume_point_info_0_1[2] = {
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0)
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_info_0_1 = {
  (MR_String) "stack_only",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_resume_point_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_resume_point_info_0_2[4] = {
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0)
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_info_0_2 = {
  (MR_String) "orig_and_stack",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_resume_point_info_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_resume_point_info_0_3[4] = {
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0)
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_info_0_3 = {
  (MR_String) "stack_and_orig",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_resume_point_info_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_resume_point_info_0_0[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_info_0_0
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_resume_point_info_0_1[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_info_0_1
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_resume_point_info_0_2[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_info_0_2
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_resume_point_info_0_3[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_info_0_3
};

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_resume_point_info_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_resume_point_info_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_resume_point_info_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_resume_point_info_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_resume_point_info_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_resume_point_info_0[4] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_info_0_2,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_info_0_0,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_info_0_3,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_info_0_1
};

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_resume_point_info_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____resume_point_info_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____resume_point_info_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "resume_point_info",
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_resume_point_info_0 },
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_resume_point_info_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_resume_point_info_0
};

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_resume_point_known_0_0[1] = {
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_redoip_update_0)
};

static const MR_DuArgLocn ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_locns_resume_point_known_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_known_0_0 = {
  (MR_String) "resume_point_known",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_resume_point_known_0_0,
  NULL,
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_locns_resume_point_known_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_known_0_1 = {
  (MR_String) "resume_point_unknown",
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

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_resume_point_known_0_0[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_known_0_1
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_resume_point_known_0_1[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_known_0_0
};

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_resume_point_known_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_resume_point_known_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_resume_point_known_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_resume_point_known_0[2] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_known_0_0,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_resume_point_known_0_1
};

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_resume_point_known_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_known_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____resume_point_known_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____resume_point_known_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "resume_point_known",
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_resume_point_known_0 },
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_resume_point_known_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_resume_point_known_0
};

static const MR_PseudoTypeInfo ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_semi_commit_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_fail_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_commit_hijack_info_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__maybe__ti_maybe_1pair__ti_pair_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_lval_0),
  (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__maybe__ti_maybe_1ll_backend__code_loc_dep__type_ctor_info_region_commit_stack_frame_0)
};

static const MR_DuFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_semi_commit_info_0_0 = {
  (MR_String) "semi_commit_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__field_types_semi_commit_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_semi_commit_info_0_0[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_semi_commit_info_0_0
};

static const MR_DuPtagLayout ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_semi_commit_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_stag_ordered_semi_commit_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_semi_commit_info_0[1] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_functor_desc_semi_commit_info_0_0
};

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_semi_commit_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_semi_commit_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____semi_commit_info_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____semi_commit_info_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "semi_commit_info",
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_name_ordered_semi_commit_info_0 },
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__du_ptag_ordered_semi_commit_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_semi_commit_info_0
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_simple_neg_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____simple_neg_info_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____simple_neg_info_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "simple_neg_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_fail_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_temp_slot_persistence_0_0 = {
  (MR_String) "persistent_temp_slot",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_temp_slot_persistence_0_1 = {
  (MR_String) "non_persistent_temp_slot",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_value_ordered_temp_slot_persistence_0[2] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_temp_slot_persistence_0_0,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_temp_slot_persistence_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_name_ordered_temp_slot_persistence_0[2] = {
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_temp_slot_persistence_0_1,
  &ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_functor_desc_temp_slot_persistence_0_0
};

static const MR_Integer ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_temp_slot_persistence_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_temp_slot_persistence_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__code_loc_dep____Unify____temp_slot_persistence_0_0_10001)),
  ((MR_Box) (ll_backend__code_loc_dep____Compare____temp_slot_persistence_0_0_10001)),
  (MR_String) "ll_backend.code_loc_dep",
  (MR_String) "temp_slot_persistence",
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_name_ordered_temp_slot_persistence_0 },
  {     ll_backend__code_loc_dep__ll_backend__code_loc_dep__enum_value_ordered_temp_slot_persistence_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ll_backend__code_loc_dep__ll_backend__code_loc_dep__functor_number_map_temp_slot_persistence_0
};

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__release_temp_slot__3841__1_2_p_0(
  MR_Word IsInPersistentTemps0_14,
  MR_Word HeadVar__2_28)
{
  {
    MR_bool succeeded = (IsInPersistentTemps0_14 == HeadVar__2_28);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__release_temp_slot__3847__1_2_p_0(
  MR_Word IsInPersistentTemps0_14,
  MR_Word HeadVar__2_24)
{
  {
    MR_bool succeeded = (IsInPersistentTemps0_14 == HeadVar__2_24);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__effect_resume_point__1794__1_2_p_0(
  MR_Word OldKeySet_23,
  MR_Word NewKeySet_24)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set__subset_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), OldKeySet_23, NewKeySet_24);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__enter_simple_neg__1266__1_1_p_0(
  MR_Word Code_13)
{
  {
    MR_bool succeeded;

    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Code_13);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__ite_enter_then__1198__1_2_p_0(
  MR_Word MaybeRegionInfo_26,
  MR_Word HeadVar__2_96)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[3]), ((MR_Box) (MaybeRegionInfo_26)), ((MR_Box) (HeadVar__2_96)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__ite_enter_then__1148__1_2_p_0(
  MR_Word MaybeRegionInfo_26,
  MR_Word HeadVar__2_169)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[3]), ((MR_Box) (MaybeRegionInfo_26)), ((MR_Box) (HeadVar__2_169)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__ite_enter_then__1214__1_2_p_0(
  MR_Word MaybeRegionInfo_26,
  MR_Word HeadVar__2_85)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[3]), ((MR_Box) (MaybeRegionInfo_26)), ((MR_Box) (HeadVar__2_85)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__ite_enter_then__1223__1_2_p_0(
  MR_Word MaybeRegionInfo_26,
  MR_Word HeadVar__2_49)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[3]), ((MR_Box) (MaybeRegionInfo_26)), ((MR_Box) (HeadVar__2_49)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__prepare_for_ite_hijack__1048__1_2_p_0(
  MR_Word MaybeEmbeddedFrameId_10,
  MR_Word HeadVar__2_135)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[2]), ((MR_Box) (MaybeEmbeddedFrameId_10)), ((MR_Box) (HeadVar__2_135)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__undo_disj_hijack__947__1_2_p_0(
  MR_Word CurfrMaxfr_11,
  MR_Word HeadVar__2_62)
{
  {
    MR_bool succeeded = (CurfrMaxfr_11 == HeadVar__2_62);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__undo_disj_hijack__961__1_2_p_0(
  MR_Word CurfrMaxfr_11,
  MR_Word HeadVar__2_51)
{
  {
    MR_bool succeeded = (CurfrMaxfr_11 == HeadVar__2_51);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__undo_disj_hijack__959__1_2_p_0(
  MR_Word ResumeKnown_10,
  MR_Word HeadVar__2_47)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_95 = (MR_Integer) (ResumeKnown_10);
    MR_Integer CastY_96 = (MR_Integer) (HeadVar__2_47);

    succeeded = (CastX_95 == CastY_96);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer CastX_93;
      MR_Integer CastY_94;

      succeeded = (ResumeKnown_10 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        CastX_93 = (MR_Integer) (ResumeKnown_10);
        CastY_94 = (MR_Integer) (HeadVar__2_47);
        succeeded = (CastY_94 == CastX_93);
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__undo_disj_hijack__970__1_2_p_0(
  MR_Word CurfrMaxfr_11,
  MR_Word HeadVar__2_26)
{
  {
    MR_bool succeeded = (CurfrMaxfr_11 == HeadVar__2_26);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__generate_branch_end__516__1_2_p_0(
  MR_Word CondEnv0_26,
  MR_Word CondEnv1_31)
{
  {
    MR_bool succeeded = (CondEnv0_26 == CondEnv1_31);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__IntroducedFrom__pred__generate_branch_end__496__1_2_p_0(
  MR_Word Redoip0_33,
  MR_Word Redoip1_34)
{
  {
    MR_bool succeeded = (Redoip0_33 == Redoip1_34);

    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep____Compare____temp_slot_persistence_0_0(
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
ll_backend__code_loc_dep____Unify____temp_slot_persistence_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep____Compare____simple_neg_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    ll_backend__code_loc_dep____Compare____fail_info_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____simple_neg_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;
    MR_Integer CastX_15 = (MR_Integer) (Cast_HeadVar1_3);
    MR_Integer CastY_16 = (MR_Integer) (Cast_HeadVar2_4);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cast_HeadVar1_3, (MR_Integer) 0))));
      MR_Word ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cast_HeadVar2_4, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cast_HeadVar1_3, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cast_HeadVar2_4, (MR_Integer) 1))));
      MR_Word ArgX3_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Cast_HeadVar1_3, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY3_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Cast_HeadVar2_4, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX4_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Cast_HeadVar1_3, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY4_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Cast_HeadVar2_4, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX5_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Cast_HeadVar1_3, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY5_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Cast_HeadVar2_4, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Integer CastX_22;
      MR_Integer CastY_23;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[9]), ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
      {
        CastX_22 = (MR_Integer) (ArgX2_7);
        CastY_23 = (MR_Integer) (ArgY2_8);
        succeeded = (CastX_22 == CastY_23);
        if (succeeded)
          succeeded = MR_TRUE;
        else
        if ((ArgX2_7 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Integer CastX_20 = (MR_Integer) (ArgX2_7);
          MR_Integer CastY_21 = (MR_Integer) (ArgY2_8);

          succeeded = (CastY_21 == CastX_20);
        }
        else
        {
          MR_Word ArgX1_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArgX2_7, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_19;

          succeeded = (ArgY2_8 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ArgY1_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArgY2_8, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_18 == ArgY1_19);
          }
        }
        if (succeeded)
        {
          succeeded = (ArgX3_9 == ArgY3_10);
          if (succeeded)
          {
            succeeded = (ArgX4_11 == ArgY4_12);
            if (succeeded)
              succeeded = (ArgX5_13 == ArgY5_14);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep____Compare____semi_commit_info_0_0(
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
      MR_Word SubResult1_6;

      ll_backend__code_loc_dep____Compare____fail_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        ll_backend__code_loc_dep____Compare____resume_point_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer CastX_76 = (MR_Integer) (ArgX3_10);
          MR_Integer CastY_77 = (MR_Integer) (ArgY3_11);

          succeeded = (CastX_76 == CastY_77);
          if (succeeded)
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
          else
            switch (MR_tag((MR_Word) ArgX3_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_tag((MR_Word) ArgY3_11)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult3_12 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      SubResult3_12 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      SubResult3_12 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      SubResult3_12 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_88 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArgX3_10, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgX3_10, (MR_Integer) 0))));

                  switch (MR_tag((MR_Word) ArgY3_11)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        SubResult3_12 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ArgY1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgY3_11, (MR_Integer) 0))));
                        MR_Word ArgY2_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArgY3_11, (MR_Integer) 1))) & (MR_Integer) 1);
                        MR_Word SubResult1_27;

                        ll_backend__llds____Compare____lval_0_0(&SubResult1_27, Var_89, ArgY1_26);
                        succeeded = (SubResult1_27 != (MR_Integer) 0);
                        if (succeeded)
                        {
                          SubResult3_12 = SubResult1_27;
                          succeeded = (SubResult3_12 != (MR_Integer) 0);
                        }
                        else
                        {
                          MR_Integer Var_90 = (MR_Integer) (Var_88);
                          MR_Integer Var_91 = (MR_Integer) (ArgY2_29);

                          succeeded = (Var_90 < Var_91);
                          if (succeeded)
                          {
                            SubResult3_12 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_90 > Var_91);
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
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        SubResult3_12 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        SubResult3_12 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgX3_10, (MR_Integer) 0))));

                  switch (MR_tag((MR_Word) ArgY3_11)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        SubResult3_12 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        SubResult3_12 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ArgY1_51 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgY3_11, (MR_Integer) 0))));

                        ll_backend__llds____Compare____lval_0_0(&SubResult3_12, Var_87, ArgY1_51);
                        succeeded = (SubResult3_12 != (MR_Integer) 0);
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        SubResult3_12 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgX3_10, (MR_Integer) 2))));
                  MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgX3_10, (MR_Integer) 1))));
                  MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgX3_10, (MR_Integer) 0))));

                  switch (MR_tag((MR_Word) ArgY3_11)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        SubResult3_12 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        SubResult3_12 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        SubResult3_12 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word ArgY1_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgY3_11, (MR_Integer) 0))));
                        MR_Word ArgY2_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgY3_11, (MR_Integer) 1))));
                        MR_Word ArgY3_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgY3_11, (MR_Integer) 2))));
                        MR_Word SubResult1_70;

                        ll_backend__llds____Compare____lval_0_0(&SubResult1_70, Var_86, ArgY1_69);
                        succeeded = (SubResult1_70 != (MR_Integer) 0);
                        if (succeeded)
                        {
                          SubResult3_12 = SubResult1_70;
                          succeeded = (SubResult3_12 != (MR_Integer) 0);
                        }
                        else
                        {
                          MR_Word SubResult2_73;

                          ll_backend__llds____Compare____lval_0_0(&SubResult2_73, Var_85, ArgY2_72);
                          succeeded = (SubResult2_73 != (MR_Integer) 0);
                          if (succeeded)
                          {
                            SubResult3_12 = SubResult2_73;
                            succeeded = (SubResult3_12 != (MR_Integer) 0);
                          }
                          else
                          {
                            ll_backend__llds____Compare____lval_0_0(&SubResult3_12, Var_84, ArgY3_75);
                            succeeded = (SubResult3_12 != (MR_Integer) 0);
                          }
                        }
                      }
                      break;
                  }
                }
                break;
            }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[7]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____semi_commit_info_0_0(
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
    {
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
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer CastX_27 = (MR_Integer) (ArgX1_3);
      MR_Integer CastY_28 = (MR_Integer) (ArgY1_4);
      MR_Integer CastX_50;
      MR_Integer CastY_51;

      succeeded = (CastX_27 == CastY_28);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 0))));
        MR_Word ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 0))));
        MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 1))));
        MR_Word ArgY2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 1))));
        MR_Word ArgX3_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
        MR_Word ArgY3_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
        MR_Word ArgX4_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
        MR_Word ArgY4_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
        MR_Word ArgX5_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 2))) & (MR_Integer) 1);
        MR_Word ArgY5_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 2))) & (MR_Integer) 1);
        MR_Integer CastX_34;
        MR_Integer CastY_35;

        succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[9]), ((MR_Box) (ArgX1_17)), ((MR_Box) (ArgY1_18)));
        if (succeeded)
        {
          CastX_34 = (MR_Integer) (ArgX2_19);
          CastY_35 = (MR_Integer) (ArgY2_20);
          succeeded = (CastX_34 == CastY_35);
          if (succeeded)
            succeeded = MR_TRUE;
          else
          if ((ArgX2_19 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Integer CastX_32 = (MR_Integer) (ArgX2_19);
            MR_Integer CastY_33 = (MR_Integer) (ArgY2_20);

            succeeded = (CastY_33 == CastX_32);
          }
          else
          {
            MR_Word ArgX1_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArgX2_19, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ArgY1_31;

            succeeded = (ArgY2_20 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ArgY1_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArgY2_20, (MR_Integer) 0))) & (MR_Integer) 1);
              succeeded = (ArgX1_30 == ArgY1_31);
            }
          }
          if (succeeded)
          {
            succeeded = (ArgX3_21 == ArgY3_22);
            if (succeeded)
            {
              succeeded = (ArgX4_23 == ArgY4_24);
              if (succeeded)
                succeeded = (ArgX5_25 == ArgY5_26);
            }
          }
        }
      }
      if (succeeded)
      {
        succeeded = ll_backend__code_loc_dep____Unify____resume_point_info_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          CastX_50 = (MR_Integer) (ArgX3_7);
          CastY_51 = (MR_Integer) (ArgY3_8);
          succeeded = (CastX_50 == CastY_51);
          if (succeeded)
            succeeded = MR_TRUE;
          else
            switch (MR_tag((MR_Word) ArgX3_7)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer CastX_40 = (MR_Integer) (ArgX3_7);
                  MR_Integer CastY_41 = (MR_Integer) (ArgY3_8);

                  succeeded = (CastY_41 == CastX_40);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgX1_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgX3_7, (MR_Integer) 0))));
                  MR_Word ArgY1_37;
                  MR_Word ArgX2_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArgX3_7, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY2_39;

                  succeeded = ((MR_tag((MR_Word) ArgY3_8)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    ArgY1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgY3_8, (MR_Integer) 0))));
                    ArgY2_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArgY3_8, (MR_Integer) 1))) & (MR_Integer) 1);
                    succeeded = ll_backend__llds____Unify____lval_0_0(ArgX1_36, ArgY1_37);
                    if (succeeded)
                      succeeded = (ArgX2_38 == ArgY2_39);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgX1_42 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgX3_7, (MR_Integer) 0))));
                  MR_Word ArgY1_43;

                  succeeded = ((MR_tag((MR_Word) ArgY3_8)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    ArgY1_43 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgY3_8, (MR_Integer) 0))));
                    succeeded = ll_backend__llds____Unify____lval_0_0(ArgX1_42, ArgY1_43);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgX1_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgX3_7, (MR_Integer) 0))));
                  MR_Word ArgY1_45;
                  MR_Word ArgX2_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgX3_7, (MR_Integer) 1))));
                  MR_Word ArgY2_47;
                  MR_Word ArgX3_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgX3_7, (MR_Integer) 2))));
                  MR_Word ArgY3_49;

                  succeeded = ((MR_tag((MR_Word) ArgY3_8)) == (MR_Integer) 3);
                  if (succeeded)
                  {
                    ArgY1_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgY3_8, (MR_Integer) 0))));
                    ArgY2_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgY3_8, (MR_Integer) 1))));
                    ArgY3_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgY3_8, (MR_Integer) 2))));
                    succeeded = ll_backend__llds____Unify____lval_0_0(ArgX1_44, ArgY1_45);
                    if (succeeded)
                    {
                      succeeded = ll_backend__llds____Unify____lval_0_0(ArgX2_46, ArgY2_47);
                      if (succeeded)
                        succeeded = ll_backend__llds____Unify____lval_0_0(ArgX3_48, ArgY3_49);
                    }
                  }
                }
                break;
            }
          if (succeeded)
          {
            TypeInfo_15_15 = (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[7]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_16_16 = (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[8]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____resume_point_known_0_0(
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
ll_backend__code_loc_dep____Unify____resume_point_known_0_0(
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

void MR_CALL 
ll_backend__code_loc_dep____Compare____resume_point_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_108 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_109 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_108 == CastY_109);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_6;

                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[3]), &SubResult1_6, ((MR_Box) (Var_127)), ((MR_Box) (ArgY1_5)));
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_6;
                  else
                    ll_backend__llds____Compare____code_addr_0_0(HeadVar__1_1, Var_126, ArgY2_8);
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
            MR_Word Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_31;

                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[3]), &SubResult1_31, ((MR_Box) (Var_133)), ((MR_Box) (ArgY1_30)));
                  succeeded = (SubResult1_31 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_31;
                  else
                    ll_backend__llds____Compare____code_addr_0_0(HeadVar__1_1, Var_132, ArgY2_33);
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
            MR_Word Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
            MR_Word Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_59 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_62 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_65 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word ArgY4_68 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Word SubResult1_60;

                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[3]), &SubResult1_60, ((MR_Box) (Var_125)), ((MR_Box) (ArgY1_59)));
                  succeeded = (SubResult1_60 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_60;
                  else
                  {
                    MR_Word SubResult2_63;

                    ll_backend__llds____Compare____code_addr_0_0(&SubResult2_63, Var_124, ArgY2_62);
                    succeeded = (SubResult2_63 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_63;
                    else
                    {
                      MR_Word SubResult3_66;

                      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[3]), &SubResult3_66, ((MR_Box) (Var_123)), ((MR_Box) (ArgY3_65)));
                      succeeded = (SubResult3_66 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_66;
                      else
                        ll_backend__llds____Compare____code_addr_0_0(HeadVar__1_1, Var_122, ArgY4_68);
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
            MR_Word Var_128 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
            MR_Word Var_129 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_98 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word ArgY4_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Word SubResult1_99;

                  mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[3]), &SubResult1_99, ((MR_Box) (Var_131)), ((MR_Box) (ArgY1_98)));
                  succeeded = (SubResult1_99 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_99;
                  else
                  {
                    MR_Word SubResult2_102;

                    ll_backend__llds____Compare____code_addr_0_0(&SubResult2_102, Var_130, ArgY2_101);
                    succeeded = (SubResult2_102 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_102;
                    else
                    {
                      MR_Word SubResult3_105;

                      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[3]), &SubResult3_105, ((MR_Box) (Var_129)), ((MR_Box) (ArgY3_104)));
                      succeeded = (SubResult3_105 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_105;
                      else
                        ll_backend__llds____Compare____code_addr_0_0(HeadVar__1_1, Var_128, ArgY4_107);
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
ll_backend__code_loc_dep____Unify____resume_point_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_28 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeInfo_33_33;
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
              TypeInfo_33_33 = (MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
              if (succeeded)
                succeeded = ll_backend__llds____Unify____code_addr_0_0(ArgX2_5, ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_39_39;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              TypeInfo_39_39 = (MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_39_39, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
              if (succeeded)
                succeeded = ll_backend__llds____Unify____code_addr_0_0(ArgX2_9, ArgY2_10);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_29_29;
            MR_Word TypeInfo_31_31;
            MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_12;
            MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_14;
            MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_16;
            MR_Word ArgX4_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word ArgY4_18;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
              TypeInfo_29_29 = (MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
              if (succeeded)
              {
                succeeded = ll_backend__llds____Unify____code_addr_0_0(ArgX2_13, ArgY2_14);
                if (succeeded)
                {
                  TypeInfo_31_31 = (MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX3_15)), ((MR_Box) (ArgY3_16)));
                  if (succeeded)
                    succeeded = ll_backend__llds____Unify____code_addr_0_0(ArgX4_17, ArgY4_18);
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word TypeInfo_35_35;
            MR_Word TypeInfo_37_37;
            MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_20;
            MR_Word ArgX2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_22;
            MR_Word ArgX3_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_24;
            MR_Word ArgX4_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word ArgY4_26;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
              TypeInfo_35_35 = (MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX1_19)), ((MR_Box) (ArgY1_20)));
              if (succeeded)
              {
                succeeded = ll_backend__llds____Unify____code_addr_0_0(ArgX2_21, ArgY2_22);
                if (succeeded)
                {
                  TypeInfo_37_37 = (MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_37, ((MR_Box) (ArgX3_23)), ((MR_Box) (ArgY3_24)));
                  if (succeeded)
                    succeeded = ll_backend__llds____Unify____code_addr_0_0(ArgX4_25, ArgY4_26);
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
ll_backend__code_loc_dep____Compare____resume_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____resume_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____region_commit_stack_frame_0_0(
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

      ll_backend__llds____Compare____embedded_stack_frame_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[10]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____region_commit_stack_frame_0_0(
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

      succeeded = ll_backend__llds____Unify____embedded_stack_frame_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[10]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____redoip_update_0_0(
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
ll_backend__code_loc_dep____Unify____redoip_update_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep____Compare____position_info_0_0(
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
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      ll_backend__code_loc_dep____Compare____code_loc_dep_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____position_info_0_0(
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
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = ll_backend__code_loc_dep____Unify____code_loc_dep_0_0(ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____ite_region_info_0_0(
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

      ll_backend__llds____Compare____embedded_stack_frame_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        ll_backend__llds____Compare____lval_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____ite_region_info_0_0(
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

      succeeded = ll_backend__llds____Unify____embedded_stack_frame_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = ll_backend__llds____Unify____lval_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____ite_hijack_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_56 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_57 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_56 == CastY_57);
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
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
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
                  }
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
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  ll_backend__llds____Compare____lval_0_0(HeadVar__1_1, Var_67, ArgY1_11);
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
            MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  ll_backend__llds____Compare____lval_0_0(HeadVar__1_1, Var_66, ArgY1_29);
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
            MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

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
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgY1_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word SubResult1_50;

                  ll_backend__llds____Compare____lval_0_0(&SubResult1_50, Var_65, ArgY1_49);
                  succeeded = (SubResult1_50 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_50;
                  else
                  {
                    MR_Word SubResult2_53;

                    ll_backend__llds____Compare____lval_0_0(&SubResult2_53, Var_64, ArgY2_52);
                    succeeded = (SubResult2_53 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_53;
                    else
                      ll_backend__llds____Compare____lval_0_0(HeadVar__1_1, Var_63, ArgY3_55);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____ite_hijack_type_0_0(
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
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = ll_backend__llds____Unify____lval_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = ll_backend__llds____Unify____lval_0_0(ArgX1_9, ArgY1_10);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_12;
            MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_14;
            MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_16;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              succeeded = ll_backend__llds____Unify____lval_0_0(ArgX1_11, ArgY1_12);
              if (succeeded)
              {
                succeeded = ll_backend__llds____Unify____lval_0_0(ArgX2_13, ArgY2_14);
                if (succeeded)
                  succeeded = ll_backend__llds____Unify____lval_0_0(ArgX3_15, ArgY3_16);
              }
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep____Compare____ite_hijack_info_0_0(
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
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word SubResult1_6;
      MR_Integer CastX_27 = (MR_Integer) (ArgX1_4);
      MR_Integer CastY_28 = (MR_Integer) (ArgY1_5);

      succeeded = (CastX_27 == CastY_28);
      if (succeeded)
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
      else
      if ((ArgX1_4 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((ArgY1_5 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
        else
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      else
      {
        MR_Word Var_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArgX1_4, (MR_Integer) 0))) & (MR_Integer) 1);

        if ((ArgY1_5 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          SubResult1_6 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word ArgY1_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArgY1_5, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Integer Var_31 = (MR_Integer) (Var_30);
          MR_Integer Var_32 = (MR_Integer) (ArgY1_24);

          succeeded = (Var_31 < Var_32);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_31 > Var_32);
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
        }
      }
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
          MR_Integer CastX_85 = (MR_Integer) (ArgX3_10);
          MR_Integer CastY_86 = (MR_Integer) (ArgY3_11);

          succeeded = (CastX_85 == CastY_86);
          if (succeeded)
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
          else
            switch (MR_tag((MR_Word) ArgX3_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ArgX3_10)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_tag((MR_Word) ArgY3_11)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(ArgY3_11)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult3_12 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              SubResult3_12 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          SubResult3_12 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          SubResult3_12 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          SubResult3_12 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    switch (MR_tag((MR_Word) ArgY3_11)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(ArgY3_11)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              SubResult3_12 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult3_12 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          SubResult3_12 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          SubResult3_12 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          SubResult3_12 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgX3_10, (MR_Integer) 0))));

                  switch (MR_tag((MR_Word) ArgY3_11)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(ArgY3_11)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            SubResult3_12 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            SubResult3_12 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ArgY1_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgY3_11, (MR_Integer) 0))));

                        ll_backend__llds____Compare____lval_0_0(&SubResult3_12, Var_96, ArgY1_40);
                        succeeded = (SubResult3_12 != (MR_Integer) 0);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        SubResult3_12 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        SubResult3_12 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgX3_10, (MR_Integer) 0))));

                  switch (MR_tag((MR_Word) ArgY3_11)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(ArgY3_11)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            SubResult3_12 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            SubResult3_12 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        SubResult3_12 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ArgY1_58 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgY3_11, (MR_Integer) 0))));

                        ll_backend__llds____Compare____lval_0_0(&SubResult3_12, Var_95, ArgY1_58);
                        succeeded = (SubResult3_12 != (MR_Integer) 0);
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        SubResult3_12 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgX3_10, (MR_Integer) 2))));
                  MR_Word Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgX3_10, (MR_Integer) 1))));
                  MR_Word Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgX3_10, (MR_Integer) 0))));

                  switch (MR_tag((MR_Word) ArgY3_11)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(ArgY3_11)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            SubResult3_12 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            SubResult3_12 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        SubResult3_12 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        SubResult3_12 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word ArgY1_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgY3_11, (MR_Integer) 0))));
                        MR_Word ArgY2_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgY3_11, (MR_Integer) 1))));
                        MR_Word ArgY3_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgY3_11, (MR_Integer) 2))));
                        MR_Word SubResult1_79;

                        ll_backend__llds____Compare____lval_0_0(&SubResult1_79, Var_94, ArgY1_78);
                        succeeded = (SubResult1_79 != (MR_Integer) 0);
                        if (succeeded)
                        {
                          SubResult3_12 = SubResult1_79;
                          succeeded = (SubResult3_12 != (MR_Integer) 0);
                        }
                        else
                        {
                          MR_Word SubResult2_82;

                          ll_backend__llds____Compare____lval_0_0(&SubResult2_82, Var_93, ArgY2_81);
                          succeeded = (SubResult2_82 != (MR_Integer) 0);
                          if (succeeded)
                          {
                            SubResult3_12 = SubResult2_82;
                            succeeded = (SubResult3_12 != (MR_Integer) 0);
                          }
                          else
                          {
                            ll_backend__llds____Compare____lval_0_0(&SubResult3_12, Var_92, ArgY3_84);
                            succeeded = (SubResult3_12 != (MR_Integer) 0);
                          }
                        }
                      }
                      break;
                  }
                }
                break;
            }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____ite_hijack_info_0_0(
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
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer CastX_18 = (MR_Integer) (ArgX1_3);
      MR_Integer CastY_19 = (MR_Integer) (ArgY1_4);
      MR_Integer CastX_34;
      MR_Integer CastY_35;

      succeeded = (CastX_18 == CastY_19);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      if ((ArgX1_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer CastX_16 = (MR_Integer) (ArgX1_3);
        MR_Integer CastY_17 = (MR_Integer) (ArgY1_4);

        succeeded = (CastY_17 == CastX_16);
      }
      else
      {
        MR_Word ArgX1_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArgX1_3, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word ArgY1_15;

        succeeded = (ArgY1_4 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ArgY1_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArgY1_4, (MR_Integer) 0))) & (MR_Integer) 1);
          succeeded = (ArgX1_14 == ArgY1_15);
        }
      }
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          CastX_34 = (MR_Integer) (ArgX3_7);
          CastY_35 = (MR_Integer) (ArgY3_8);
          succeeded = (CastX_34 == CastY_35);
          if (succeeded)
            succeeded = MR_TRUE;
          else
            switch (MR_tag((MR_Word) ArgX3_7)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(ArgX3_7)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Integer CastX_20 = (MR_Integer) (ArgX3_7);
                      MR_Integer CastY_21 = (MR_Integer) (ArgY3_8);

                      succeeded = (CastY_21 == CastX_20);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer CastX_24 = (MR_Integer) (ArgX3_7);
                      MR_Integer CastY_25 = (MR_Integer) (ArgY3_8);

                      succeeded = (CastY_25 == CastX_24);
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgX1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgX3_7, (MR_Integer) 0))));
                  MR_Word ArgY1_23;

                  succeeded = ((MR_tag((MR_Word) ArgY3_8)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    ArgY1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgY3_8, (MR_Integer) 0))));
                    succeeded = ll_backend__llds____Unify____lval_0_0(ArgX1_22, ArgY1_23);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgX1_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgX3_7, (MR_Integer) 0))));
                  MR_Word ArgY1_27;

                  succeeded = ((MR_tag((MR_Word) ArgY3_8)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    ArgY1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgY3_8, (MR_Integer) 0))));
                    succeeded = ll_backend__llds____Unify____lval_0_0(ArgX1_26, ArgY1_27);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgX1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgX3_7, (MR_Integer) 0))));
                  MR_Word ArgY1_29;
                  MR_Word ArgX2_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgX3_7, (MR_Integer) 1))));
                  MR_Word ArgY2_31;
                  MR_Word ArgX3_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgX3_7, (MR_Integer) 2))));
                  MR_Word ArgY3_33;

                  succeeded = ((MR_tag((MR_Word) ArgY3_8)) == (MR_Integer) 3);
                  if (succeeded)
                  {
                    ArgY1_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgY3_8, (MR_Integer) 0))));
                    ArgY2_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgY3_8, (MR_Integer) 1))));
                    ArgY3_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgY3_8, (MR_Integer) 2))));
                    succeeded = ll_backend__llds____Unify____lval_0_0(ArgX1_28, ArgY1_29);
                    if (succeeded)
                    {
                      succeeded = ll_backend__llds____Unify____lval_0_0(ArgX2_30, ArgY2_31);
                      if (succeeded)
                        succeeded = ll_backend__llds____Unify____lval_0_0(ArgX3_32, ArgY3_33);
                    }
                  }
                }
                break;
            }
          if (succeeded)
          {
            TypeInfo_13_13 = (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____hijack_allowed_0_0(
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
ll_backend__code_loc_dep____Unify____hijack_allowed_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____fail_info_0_0(
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
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Integer CastX_20;
      MR_Integer CastY_21;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[9]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        CastX_20 = (MR_Integer) (ArgX2_5);
        CastY_21 = (MR_Integer) (ArgY2_6);
        succeeded = (CastX_20 == CastY_21);
        if (succeeded)
          succeeded = MR_TRUE;
        else
        if ((ArgX2_5 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Integer CastX_18 = (MR_Integer) (ArgX2_5);
          MR_Integer CastY_19 = (MR_Integer) (ArgY2_6);

          succeeded = (CastY_19 == CastX_18);
        }
        else
        {
          MR_Word ArgX1_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArgX2_5, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_17;

          succeeded = (ArgY2_6 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ArgY1_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArgY2_6, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_16 == ArgY1_17);
          }
        }
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
              succeeded = (ArgX5_11 == ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep____Compare____disj_hijack_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_35 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_36 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_35 == CastY_36);
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
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
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
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
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
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  ll_backend__llds____Compare____lval_0_0(HeadVar__1_1, Var_42, ArgY1_17);
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
            MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_32;

                  ll_backend__llds____Compare____lval_0_0(&SubResult1_32, Var_41, ArgY1_31);
                  succeeded = (SubResult1_32 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_32;
                  else
                    ll_backend__llds____Compare____lval_0_0(HeadVar__1_1, Var_40, ArgY2_34);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____disj_hijack_info_0_0(
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
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = ll_backend__llds____Unify____lval_0_0(ArgX1_9, ArgY1_10);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_12;
            MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = ll_backend__llds____Unify____lval_0_0(ArgX1_11, ArgY1_12);
              if (succeeded)
                succeeded = ll_backend__llds____Unify____lval_0_0(ArgX2_13, ArgY2_14);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep____Compare____det_commit_info_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[6]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[7]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____det_commit_info_0_0(
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[6]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[8]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____curfr_vs_maxfr_0_0(
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
ll_backend__code_loc_dep____Unify____curfr_vs_maxfr_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____condition_env_0_0(
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
ll_backend__code_loc_dep____Unify____condition_env_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____commit_hijack_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_55 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_56 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_55 == CastY_56);
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
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_67 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word SubResult1_6;

                  ll_backend__llds____Compare____lval_0_0(&SubResult1_6, Var_68, ArgY1_5);
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_6;
                  else
                  {
                    MR_Integer Var_69 = (MR_Integer) (Var_67);
                    MR_Integer Var_70 = (MR_Integer) (ArgY2_8);

                    succeeded = (Var_69 < Var_70);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_69 > Var_70);
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
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  ll_backend__llds____Compare____lval_0_0(HeadVar__1_1, Var_66, ArgY1_30);
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
            MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word SubResult1_49;

                  ll_backend__llds____Compare____lval_0_0(&SubResult1_49, Var_65, ArgY1_48);
                  succeeded = (SubResult1_49 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_49;
                  else
                  {
                    MR_Word SubResult2_52;

                    ll_backend__llds____Compare____lval_0_0(&SubResult2_52, Var_64, ArgY2_51);
                    succeeded = (SubResult2_52 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_52;
                    else
                      ll_backend__llds____Compare____lval_0_0(HeadVar__1_1, Var_63, ArgY3_54);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____commit_hijack_info_0_0(
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
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
              succeeded = ll_backend__llds____Unify____lval_0_0(ArgX1_3, ArgY1_4);
              if (succeeded)
                succeeded = (ArgX2_5 == ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = ll_backend__llds____Unify____lval_0_0(ArgX1_9, ArgY1_10);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_12;
            MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_14;
            MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_16;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              succeeded = ll_backend__llds____Unify____lval_0_0(ArgX1_11, ArgY1_12);
              if (succeeded)
              {
                succeeded = ll_backend__llds____Unify____lval_0_0(ArgX2_13, ArgY2_14);
                if (succeeded)
                  succeeded = ll_backend__llds____Unify____lval_0_0(ArgX3_15, ArgY3_16);
              }
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep____Compare____code_info_component_0_0(
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
ll_backend__code_loc_dep____Unify____code_info_component_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep____Compare____call_direction_0_0(
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
ll_backend__code_loc_dep____Unify____call_direction_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep____Compare____branch_end_info_0_0(
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
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      ll_backend__code_loc_dep____Compare____code_loc_dep_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep____Compare____code_loc_dep_0_0(
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
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[5]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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

          mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[5]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            ll_backend__var_locn____Compare____var_locn_info_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                ll_backend__code_loc_dep____Compare____fail_info_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  succeeded = (ArgX7_22 < ArgY7_23);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (ArgX7_22 > ArgY7_23);
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

void MR_CALL 
ll_backend__code_loc_dep____Compare____fail_info_0_0(
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
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[9]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Integer CastX_35 = (MR_Integer) (ArgX2_7);
        MR_Integer CastY_36 = (MR_Integer) (ArgY2_8);

        succeeded = (CastX_35 == CastY_36);
        if (succeeded)
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
        else
        if ((ArgX2_7 == (MR_Word) ((MR_Unsigned) 0U)))
          if ((ArgY2_8 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
          else
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        else
        {
          MR_Word Var_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArgX2_7, (MR_Integer) 0))) & (MR_Integer) 1);

          if ((ArgY2_8 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            SubResult2_9 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word ArgY1_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArgY2_8, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Integer Var_39 = (MR_Integer) (Var_38);
            MR_Integer Var_40 = (MR_Integer) (ArgY1_32);

            succeeded = (Var_39 < Var_40);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_39 > Var_40);
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
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_25 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_26 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_25 < Var_26);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_25 > Var_26);
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
            MR_Integer Var_27 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_28 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_27 < Var_28);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_27 > Var_28);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Integer Var_29 = (MR_Integer) (ArgX5_16);
              MR_Integer Var_30 = (MR_Integer) (ArgY5_17);

              succeeded = (Var_29 < Var_30);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_29 > Var_30);
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

MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____branch_end_info_0_0(
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
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = ll_backend__code_loc_dep____Unify____code_loc_dep_0_0(ArgX1_3, ArgY1_4);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____code_loc_dep_0_0(
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
      MR_Word TypeInfo_21_21;
      MR_Word TypeInfo_23_23;
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
      MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Integer CastX_34;
      MR_Integer CastY_35;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[5]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = hlds__instmap____Unify____instmap_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_21_21 = (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            succeeded = ll_backend__var_locn____Unify____var_locn_info_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              TypeInfo_23_23 = (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                CastX_34 = (MR_Integer) (ArgX6_13);
                CastY_35 = (MR_Integer) (ArgY6_14);
                succeeded = (CastX_34 == CastY_35);
                if (succeeded)
                  succeeded = MR_TRUE;
                else
                {
                  MR_Word ArgX1_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX6_13, (MR_Integer) 0))));
                  MR_Word ArgY1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY6_14, (MR_Integer) 0))));
                  MR_Word ArgX2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX6_13, (MR_Integer) 1))));
                  MR_Word ArgY2_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY6_14, (MR_Integer) 1))));
                  MR_Word ArgX3_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX6_13, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
                  MR_Word ArgY3_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY6_14, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
                  MR_Word ArgX4_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX6_13, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
                  MR_Word ArgY4_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY6_14, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
                  MR_Word ArgX5_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX6_13, (MR_Integer) 2))) & (MR_Integer) 1);
                  MR_Word ArgY5_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY6_14, (MR_Integer) 2))) & (MR_Integer) 1);
                  MR_Integer CastX_41;
                  MR_Integer CastY_42;

                  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[9]), ((MR_Box) (ArgX1_24)), ((MR_Box) (ArgY1_25)));
                  if (succeeded)
                  {
                    CastX_41 = (MR_Integer) (ArgX2_26);
                    CastY_42 = (MR_Integer) (ArgY2_27);
                    succeeded = (CastX_41 == CastY_42);
                    if (succeeded)
                      succeeded = MR_TRUE;
                    else
                    if ((ArgX2_26 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Integer CastX_39 = (MR_Integer) (ArgX2_26);
                      MR_Integer CastY_40 = (MR_Integer) (ArgY2_27);

                      succeeded = (CastY_40 == CastX_39);
                    }
                    else
                    {
                      MR_Word ArgX1_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArgX2_26, (MR_Integer) 0))) & (MR_Integer) 1);
                      MR_Word ArgY1_38;

                      succeeded = (ArgY2_27 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ArgY1_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArgY2_27, (MR_Integer) 0))) & (MR_Integer) 1);
                        succeeded = (ArgX1_37 == ArgY1_38);
                      }
                    }
                    if (succeeded)
                    {
                      succeeded = (ArgX3_28 == ArgY3_29);
                      if (succeeded)
                      {
                        succeeded = (ArgX4_30 == ArgY4_31);
                        if (succeeded)
                          succeeded = (ArgX5_32 == ArgY5_33);
                      }
                    }
                  }
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
}

void MR_CALL 
ll_backend__code_loc_dep____Compare____branch_end_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____branch_end_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__associate_stack_slot_3_p_0(
  MR_Word CI_4,
  MR_Word Var_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word Slot_6;

    ll_backend__code_info__get_variable_slot_3_p_0(CI_4, Var_5, &Slot_6);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Slot_6));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__call_arg_in_selected_dir_2_p_0(
  MR_Word Direction_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Mode_6;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    Mode_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 1))) & (MR_Integer) 3);
    switch (Direction_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        succeeded = (Mode_6 == (MR_Integer) 1);
        break;
      case (MR_Integer) 0:
        succeeded = (Mode_6 == (MR_Integer) 0);
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__valid_stack_slot_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word VarTypes_5,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Lval_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Type_8;
    MR_Word Var_10;
    MR_Integer N_9;
    MR_Integer Var_11;

    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_5, Var_6, &Type_8);
    Var_10 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_4, Type_8);
    succeeded = (Var_10 == (MR_Integer) 1);
    if (succeeded)
    {
      switch (MR_tag((MR_Word) Lval_7)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 0))))) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              {
                N_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1))));
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 1:
              {
                N_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1))));
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 2:
              {
                N_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1))));
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
      if (succeeded)
      {
        Var_11 = (MR_Integer) 0;
        succeeded = (N_9 < Var_11);
      }
      if (succeeded)
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_loc_dep.valid_stack_slot\'/3", (MR_String) "nondummy var in dummy stack slot");
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__key_var_is_of_non_dummy_type_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word VarTypes_5,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

    succeeded = hlds__hlds_pred__var_is_of_non_dummy_type_3_p_0(ModuleInfo_4, VarTypes_5, Var_6);
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__record_highest_used_reg_6_p_0(
  MR_Word HeadVar__1_7,
  MR_Word AbsLocn_8,
  MR_Integer STATE_VARIABLE_HighestUsedRegR_0_17,
  MR_Integer * STATE_VARIABLE_HighestUsedRegR_18,
  MR_Integer STATE_VARIABLE_HighestUsedRegF_0_19,
  MR_Integer * STATE_VARIABLE_HighestUsedRegF_20)
{
  ll_backend__code_loc_dep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_104_105_103_104_101_115_116_95_117_115_101_100_95_114_101_103_95_95_91_49_93_95_48_6_p_0(AbsLocn_8, STATE_VARIABLE_HighestUsedRegR_0_17, STATE_VARIABLE_HighestUsedRegR_18, STATE_VARIABLE_HighestUsedRegF_0_19, STATE_VARIABLE_HighestUsedRegF_20);
}

static void MR_CALL 
ll_backend__code_loc_dep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_104_105_103_104_101_115_116_95_117_115_101_100_95_114_101_103_95_95_91_49_93_95_48_6_p_0(
  MR_Word AbsLocn_8,
  MR_Integer STATE_VARIABLE_HighestUsedRegR_0_17,
  MR_Integer * STATE_VARIABLE_HighestUsedRegR_18,
  MR_Integer STATE_VARIABLE_HighestUsedRegF_0_19,
  MR_Integer * STATE_VARIABLE_HighestUsedRegF_20)
{
  switch (MR_tag((MR_Word) AbsLocn_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_HighestUsedRegR_18 = STATE_VARIABLE_HighestUsedRegR_0_17;
        *STATE_VARIABLE_HighestUsedRegF_20 = STATE_VARIABLE_HighestUsedRegF_0_19;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Var_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), AbsLocn_8, (MR_Integer) 1))));
        MR_Word Var_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), AbsLocn_8, (MR_Integer) 0))) & (MR_Integer) 1);

        switch (Var_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mercury__int__max_3_p_0(Var_26, STATE_VARIABLE_HighestUsedRegF_0_19, STATE_VARIABLE_HighestUsedRegF_20);
              *STATE_VARIABLE_HighestUsedRegR_18 = STATE_VARIABLE_HighestUsedRegR_0_17;
            }
            break;
          case (MR_Integer) 0:
            {
              mercury__int__max_3_p_0(Var_26, STATE_VARIABLE_HighestUsedRegR_0_17, STATE_VARIABLE_HighestUsedRegR_18);
              *STATE_VARIABLE_HighestUsedRegF_20 = STATE_VARIABLE_HighestUsedRegF_0_19;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        *STATE_VARIABLE_HighestUsedRegR_18 = STATE_VARIABLE_HighestUsedRegR_0_17;
        *STATE_VARIABLE_HighestUsedRegF_20 = STATE_VARIABLE_HighestUsedRegF_0_19;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), AbsLocn_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_HighestUsedRegR_18 = STATE_VARIABLE_HighestUsedRegR_0_17;
            *STATE_VARIABLE_HighestUsedRegF_20 = STATE_VARIABLE_HighestUsedRegF_0_19;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_HighestUsedRegR_18 = STATE_VARIABLE_HighestUsedRegR_0_17;
            *STATE_VARIABLE_HighestUsedRegF_20 = STATE_VARIABLE_HighestUsedRegF_0_19;
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__is_var_field_3_p_0(
  MR_Word MaybeTag_4,
  MR_Word Var_5,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
    MR_Word TypeInfo_10_10;
    MR_Word TypeInfo_11_11;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;

    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
      Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
      TypeInfo_10_10 = (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[28]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (MaybeTag_4)), ((MR_Box) (Var_8)));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_7, (MR_Integer) 0))));
          TypeInfo_11_11 = (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (Var_5)), ((MR_Box) (Var_9)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__output_code_info_5_p_0(
  MR_Word Components_6,
  MR_Word CI_7,
  MR_Word CLD_8)
{
  {
    MR_bool succeeded;
    MR_Word VarSet_10;
    MR_Word ForwardLiveVars_11;
    MR_Word Zombies_13;
    MR_Word TempsInUse_15;
    MR_Integer ParConjDepth_17;

    ll_backend__code_info__get_varset_2_p_0(CI_7, &VarSet_10);
    ForwardLiveVars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_8, (MR_Integer) 0))));
    Zombies_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_8, (MR_Integer) 2))));
    TempsInUse_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_8, (MR_Integer) 4))));
    ParConjDepth_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CLD_8, (MR_Integer) 6))));
    succeeded = mercury__list__member_2_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_info_component_0), ((MR_Box) ((MR_Integer) 0)), Components_6);
    if (succeeded)
    {
      MR_Word Var_24;

      mercury__io__write_string_3_p_0((MR_String) "forward live vars: ");
      Var_24 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ForwardLiveVars_11);
      parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, (MR_Integer) 1, Var_24);
      mercury__io__nl_2_p_0();
    }
    succeeded = mercury__list__member_2_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_info_component_0), ((MR_Box) ((MR_Integer) 1)), Components_6);
    if (succeeded)
    {
      MR_Word Var_31;

      mercury__io__write_string_3_p_0((MR_String) "zombies: ");
      Var_31 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Zombies_13);
      parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, (MR_Integer) 1, Var_31);
      mercury__io__nl_2_p_0();
    }
    succeeded = mercury__list__member_2_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_info_component_0), ((MR_Box) ((MR_Integer) 2)), Components_6);
    if (succeeded)
    {
      MR_String Var_37;
      MR_Word Var_40;

      mercury__io__write_string_3_p_0((MR_String) "temps_in_use: ");
      Var_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), TempsInUse_15);
      Var_37 = ll_backend__opt_debug__dump_lvals_2_f_0((MR_Word) ((MR_Unsigned) 0U), Var_40);
      mercury__io__write_string_3_p_0(Var_37);
      mercury__io__nl_2_p_0();
    }
    succeeded = mercury__list__member_2_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_info_component_0), ((MR_Box) ((MR_Integer) 3)), Components_6);
    if (succeeded)
    {
      MR_String Var_58;

      mercury__io__write_string_3_p_0((MR_String) "par_conj_depth: ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_3[15]), ParConjDepth_17, &Var_58);
      mercury__io__write_string_3_p_0(Var_58);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
  }
}

MR_bool MR_CALL 
ll_backend__code_loc_dep__should_trace_code_gen_1_p_0(
  MR_Word CI_2)
{
  {
    MR_bool succeeded;
    MR_Word PredId_3;
    MR_Integer PredIdInt_4;
    MR_Word ModuleInfo_5;
    MR_Word Globals_6;
    MR_Integer DebugPredIdInt_7;

    ll_backend__code_info__get_pred_id_2_p_0(CI_2, &PredId_3);
    hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_3, &PredIdInt_4);
    ll_backend__code_info__get_module_info_2_p_0(CI_2, &ModuleInfo_5);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_6);
    libs__globals__lookup_int_option_3_p_0(Globals_6, (MR_Integer) 83, &DebugPredIdInt_7);
    succeeded = (PredIdInt_4 == DebugPredIdInt_7);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__generate_return_live_lvalues_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__hlds_pred__var_is_of_non_dummy_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__generate_return_live_lvalues_6_p_0(
  MR_Word CI_7,
  MR_Word CLD_8,
  MR_Word OutputArgLocs_9,
  MR_Word ReturnInstMap_10,
  MR_Word OkToDeleteAny_11,
  MR_Word * LiveLvalues_12)
{
  {
    MR_bool succeeded;
    MR_Word VarLocs_13;
    MR_Word Vars0_14;
    MR_Word ModuleInfo_15;
    MR_Word VarTypes_16;
    MR_Word Vars_17;
    MR_Word Temps_18;
    MR_Word ProcInfo_19;
    MR_Word Globals_20;
    MR_Word Var_21;
    MR_Word VarLocnInfo_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_8, (MR_Integer) 3))));
    MR_Word ForwardLiveVars_36;
    MR_Word ResumeVars_37;
    MR_Word Vars_38;
    MR_Word TempsInUse_50;
    MR_Word TempContentMap_51;
    MR_Word TempsInUseContentMap_52;

    ll_backend__var_locn__var_locn_get_var_locations_2_p_0(VarLocnInfo_26, &VarLocs_13);
    ForwardLiveVars_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_8, (MR_Integer) 0))));
    ResumeVars_37 = ll_backend__code_loc_dep__current_resume_point_vars_1_f_0(CLD_8);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ForwardLiveVars_36, ResumeVars_37, &Vars_38);
    Vars0_14 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_38);
    ll_backend__code_info__get_module_info_2_p_0(CI_7, &ModuleInfo_15);
    ll_backend__code_info__get_vartypes_2_p_0(CI_7, &VarTypes_16);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_6[4]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ll_backend__code_loc_dep__generate_return_live_lvalues_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleInfo_15));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (VarTypes_16));
    }
    mercury__list__filter_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), Var_21, Vars0_14, &Vars_17);
    TempsInUse_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_8, (MR_Integer) 4))));
    ll_backend__code_info__get_temp_content_map_2_p_0(CI_7, &TempContentMap_51);
    mercury__map__select_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0), TempContentMap_51, TempsInUse_50, &TempsInUseContentMap_52);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0), TempsInUseContentMap_52, &Temps_18);
    ll_backend__code_info__get_proc_info_2_p_0(CI_7, &ProcInfo_19);
    ll_backend__code_info__get_globals_2_p_0(CI_7, &Globals_20);
    ll_backend__continuation_info__generate_return_live_lvalues_10_p_0(OutputArgLocs_9, ReturnInstMap_10, Vars_17, VarLocs_13, Temps_18, ProcInfo_19, ModuleInfo_15, Globals_20, OkToDeleteAny_11, LiveLvalues_12);
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__generate_call_vn_livevals_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__hlds_pred__var_is_of_non_dummy_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__generate_call_vn_livevals_5_p_0(
  MR_Word CI_6,
  MR_Word CLD_7,
  MR_Word InputArgLocs_8,
  MR_Word OutputArgs_9,
  MR_Word * LiveVals_10)
{
  {
    MR_bool succeeded;
    MR_Word StackLiveVals_11;
    MR_Word KnownVarList0_16;
    MR_Word ModuleInfo_17;
    MR_Word VarTypes_18;
    MR_Word KnownVarList_19;
    MR_Word KnownVars_20;
    MR_Word LiveVars_21;
    MR_Word LiveVarList_22;
    MR_Word LiveVals1_23;
    MR_Word Temps_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word ForwardLiveVars_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_7, (MR_Integer) 0))));
    MR_Word ResumeVars_34;
    MR_Word Vars_35;
    MR_Word TempsInUse_47;
    MR_Word TempContentMap_48;
    MR_Word TempsInUseContentMap_49;

    ResumeVars_34 = ll_backend__code_loc_dep__current_resume_point_vars_1_f_0(CLD_7);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ForwardLiveVars_33, ResumeVars_34, &Vars_35);
    KnownVarList0_16 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_35);
    ll_backend__code_info__get_module_info_2_p_0(CI_6, &ModuleInfo_17);
    ll_backend__code_info__get_vartypes_2_p_0(CI_6, &VarTypes_18);
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_6[4]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (ll_backend__code_loc_dep__generate_call_vn_livevals_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (ModuleInfo_17));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (VarTypes_18));
    }
    mercury__list__filter_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), Var_25, KnownVarList0_16, &KnownVarList_19);
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), KnownVarList_19, &KnownVars_20);
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), KnownVars_20, OutputArgs_9, &LiveVars_21);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveVars_21, &LiveVarList_22);
    Var_26 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
    ll_backend__code_loc_dep__generate_stack_var_vn_4_p_0(CI_6, LiveVarList_22, Var_26, &LiveVals1_23);
    TempsInUse_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_7, (MR_Integer) 4))));
    ll_backend__code_info__get_temp_content_map_2_p_0(CI_6, &TempContentMap_48);
    mercury__map__select_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0), TempContentMap_48, TempsInUse_47, &TempsInUseContentMap_49);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0), TempsInUseContentMap_49, &Temps_24);
    ll_backend__code_loc_dep__generate_call_temp_vn_3_p_0(Temps_24, LiveVals1_23, &StackLiveVals_11);
    ll_backend__code_loc_dep__generate_input_var_vn_3_p_0(InputArgLocs_8, StackLiveVals_11, LiveVals_10);
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__generate_input_var_vn_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Vals_0_2,
  MR_Word * STATE_VARIABLE_Vals_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Vals_3 = STATE_VARIABLE_Vals_0_2;
    else
    {
      MR_Word InputArgLoc_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word InputArgLocs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Lval_10;
      MR_Word STATE_VARIABLE_Vals_13_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Vals_0_2;

      ll_backend__code_util__arg_loc_to_register_2_p_0(InputArgLoc_7, &Lval_10);
      mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_10)), STATE_VARIABLE_Vals_0_2, &STATE_VARIABLE_Vals_13_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = InputArgLocs_8;
      next_value_of_STATE_VARIABLE_Vals_0_2 = STATE_VARIABLE_Vals_13_13;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Vals_0_2 = next_value_of_STATE_VARIABLE_Vals_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__generate_call_temp_vn_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Vals_0_2,
  MR_Word * STATE_VARIABLE_Vals_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Vals_3 = STATE_VARIABLE_Vals_0_2;
    else
    {
      MR_Word Lval_7;
      MR_Word Temps_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_Vals_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Vals_0_2;

      Lval_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
      mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_7)), STATE_VARIABLE_Vals_0_2, &STATE_VARIABLE_Vals_14_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Temps_9;
      next_value_of_STATE_VARIABLE_Vals_0_2 = STATE_VARIABLE_Vals_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Vals_0_2 = next_value_of_STATE_VARIABLE_Vals_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__generate_stack_var_vn_4_p_0(
  MR_Word CI_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Vals_0_3,
  MR_Word * STATE_VARIABLE_Vals_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Vals_4 = STATE_VARIABLE_Vals_0_3;
    else
    {
      MR_Word V_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Lval_13;
      MR_Word STATE_VARIABLE_Vals_16_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Vals_0_3;

      ll_backend__code_info__get_variable_slot_3_p_0(CI_1, V_10, &Lval_13);
      mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_13)), STATE_VARIABLE_Vals_0_3, &STATE_VARIABLE_Vals_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vs_11;
      next_value_of_STATE_VARIABLE_Vals_0_3 = STATE_VARIABLE_Vals_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Vals_0_3 = next_value_of_STATE_VARIABLE_Vals_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__magically_put_var_in_unused_reg_3_p_0(
  MR_Word Var_4,
  MR_Word STATE_VARIABLE_CLD_0_10,
  MR_Word * STATE_VARIABLE_CLD_11)
{
  {
    MR_bool succeeded;
    MR_Word VarLocnInfo0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 3))));
    MR_Word StackSlots_7;
    MR_Word VarLocnInfo_9;
    MR_Word Lval_31;
    MR_Word Slot_30;
    MR_Box conv0_Slot_30;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Integer Var_47;

    mercury__map__init_1_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), &StackSlots_7);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), StackSlots_7, ((MR_Box) (Var_4)), &conv0_Slot_30);
    if (succeeded)
    {
      Slot_30 = ((MR_Word) (conv0_Slot_30));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      Lval_31 = ll_backend__llds__stack_slot_to_lval_1_f_0(Slot_30);
    else
    {
      MR_Integer Var_48;

      ll_backend__code_loc_dep__find_unused_reg_4_p_0(VarLocnInfo0_6, (MR_Integer) 0, (MR_Integer) 1, &Var_48);
      {
        Lval_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Lval_31, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), Lval_31, 1) = ((MR_Box) (Var_48));
      }
    }
    ll_backend__var_locn__var_locn_set_magic_var_location_4_p_0(Var_4, Lval_31, VarLocnInfo0_6, &VarLocnInfo_9);
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 0))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 1))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 2))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 4))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 5))));
    Var_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_47));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__max_reg_in_use_3_p_0(
  MR_Word CLD_4,
  MR_Integer * MaxR_5,
  MR_Integer * MaxF_6)
{
  {
    MR_Word VarLocnInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_4, (MR_Integer) 3))));

    ll_backend__var_locn__var_locn_max_reg_in_use_3_p_0(VarLocnInfo_7, MaxR_5, MaxF_6);
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__save_variables_on_stack_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    ll_backend__code_loc_dep__associate_stack_slot_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
ll_backend__code_loc_dep__save_variables_on_stack_5_p_0(
  MR_Word Vars_6,
  MR_Word * Code_7,
  MR_Word CI_8,
  MR_Word STATE_VARIABLE_CLD_0_11,
  MR_Word * STATE_VARIABLE_CLD_12)
{
  {
    MR_Word VarLocs_10;
    MR_Word Var_13;
    MR_Word ModuleInfo_25;
    MR_Word VarLocnInfo0_26;
    MR_Word VarLocnInfo_27;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Integer Var_47;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (ll_backend__code_loc_dep__save_variables_on_stack_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (CI_8));
    }
    mercury__list__map_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[0]), Var_13, Vars_6, &VarLocs_10);
    ll_backend__code_info__get_module_info_2_p_0(CI_8, &ModuleInfo_25);
    VarLocnInfo0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_place_vars_5_p_0(ModuleInfo_25, VarLocs_10, Code_7, VarLocnInfo0_26, &VarLocnInfo_27);
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 0))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 1))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 2))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 4))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 5))));
    Var_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_27));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_47));
    }
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__save_variables_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    ll_backend__code_loc_dep__associate_stack_slot_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
ll_backend__code_loc_dep__save_variables_6_p_0(
  MR_Word OutArgs_7,
  MR_Word * SavedLocs_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_14,
  MR_Word * STATE_VARIABLE_CLD_15)
{
  {
    MR_Word VarLocs_12;
    MR_Word SavedLocList_13;
    MR_Word Variables0_23;
    MR_Word Vars0_24;
    MR_Word TypeInfoLiveness_25;
    MR_Word ProcInfo_26;
    MR_Word VarTypes_27;
    MR_Word RttiVarMaps_28;
    MR_Word Vars1_29;
    MR_Word Vars_30;
    MR_Word Variables_31;
    MR_Word Var_32;
    MR_Word ForwardLiveVars_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_14, (MR_Integer) 0))));
    MR_Word ResumeVars_41;
    MR_Word Vars_42;
    MR_Word ModuleInfo_57;
    MR_Word VarLocnInfo0_58;
    MR_Word VarLocnInfo_59;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Integer Var_79;

    ResumeVars_41 = ll_backend__code_loc_dep__current_resume_point_vars_1_f_0(STATE_VARIABLE_CLD_0_14);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ForwardLiveVars_40, ResumeVars_41, &Vars_42);
    Variables0_23 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_42);
    Vars0_24 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Variables0_23);
    TypeInfoLiveness_25 = ll_backend__code_info__body_typeinfo_liveness_1_f_0(CI_10);
    ll_backend__code_info__get_proc_info_2_p_0(CI_10, &ProcInfo_26);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_26, &VarTypes_27);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_26, &RttiVarMaps_28);
    hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(Vars0_24, TypeInfoLiveness_25, VarTypes_27, RttiVarMaps_28, &Vars1_29);
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars1_29, OutArgs_7, &Vars_30);
    Variables_31 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_30);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (ll_backend__code_loc_dep__save_variables_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (CI_10));
    }
    mercury__list__map_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[0]), Var_32, Variables_31, &VarLocs_12);
    mercury__assoc_list__values_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), VarLocs_12, &SavedLocList_13);
    mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), SavedLocList_13, SavedLocs_8);
    ll_backend__code_info__get_module_info_2_p_0(CI_10, &ModuleInfo_57);
    VarLocnInfo0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_14, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_place_vars_5_p_0(ModuleInfo_57, VarLocs_12, Code_9, VarLocnInfo0_58, &VarLocnInfo_59);
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_14, (MR_Integer) 0))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_14, (MR_Integer) 1))));
    Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_14, (MR_Integer) 2))));
    Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_14, (MR_Integer) 4))));
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_14, (MR_Integer) 5))));
    Var_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_14, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_59));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_79));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__clobber_regs_3_p_0(
  MR_Word Regs_4,
  MR_Word STATE_VARIABLE_CLD_0_8,
  MR_Word * STATE_VARIABLE_CLD_9)
{
  {
    MR_Word VarLocnInfo0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 3))));
    MR_Word VarLocnInfo_7;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Integer Var_29;

    ll_backend__var_locn__var_locn_clobber_regs_3_p_0(Regs_4, VarLocnInfo0_6, &VarLocnInfo_7);
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 0))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 1))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 2))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 4))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 5))));
    Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_7));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_29));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__clobber_reg_3_p_0(
  MR_Word Reg_4,
  MR_Word STATE_VARIABLE_CLD_0_8,
  MR_Word * STATE_VARIABLE_CLD_9)
{
  {
    MR_Word VarLocnInfo0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 3))));
    MR_Word VarLocnInfo_7;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Integer Var_29;

    ll_backend__var_locn__var_locn_clobber_reg_3_p_0(Reg_4, VarLocnInfo0_6, &VarLocnInfo_7);
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 0))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 1))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 2))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 4))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 5))));
    Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_7));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_29));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__clear_all_registers_3_p_0(
  MR_Word OkToDeleteAny_4,
  MR_Word STATE_VARIABLE_CLD_0_8,
  MR_Word * STATE_VARIABLE_CLD_9)
{
  {
    MR_Word VarLocnInfo0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 3))));
    MR_Word VarLocnInfo_7;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Integer Var_29;

    ll_backend__var_locn__var_locn_clobber_all_regs_3_p_0(OkToDeleteAny_4, VarLocnInfo0_6, &VarLocnInfo_7);
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 0))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 1))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 2))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 4))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 5))));
    Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_7));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_29));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__unlock_regs_2_p_0(
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7)
{
  {
    MR_Word VarLocnInfo0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 3))));
    MR_Word VarLocnInfo_5;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Integer Var_27;

    ll_backend__var_locn__var_locn_unlock_regs_2_p_0(VarLocnInfo0_4, &VarLocnInfo_5);
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 0))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 1))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 2))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 4))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 5))));
    Var_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_5));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_27));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__lock_regs_5_p_0(
  MR_Integer R_6,
  MR_Integer F_7,
  MR_Word Exceptions_8,
  MR_Word STATE_VARIABLE_CLD_0_12,
  MR_Word * STATE_VARIABLE_CLD_13)
{
  {
    MR_Word VarLocnInfo0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 3))));
    MR_Word VarLocnInfo_11;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Integer Var_33;

    ll_backend__var_locn__var_locn_lock_regs_5_p_0(R_6, F_7, Exceptions_8, VarLocnInfo0_10, &VarLocnInfo_11);
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 0))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 1))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 2))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 4))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 5))));
    Var_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_11));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_33));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__setup_return_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__code_loc_dep__call_arg_in_selected_dir_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__setup_return_6_p_0(
  MR_Word VarArgInfos_7,
  MR_Word * OutLocs_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_12,
  MR_Word * STATE_VARIABLE_CLD_13)
{
  {
    MR_bool succeeded;
    MR_Word ArgsInfos_24;
    MR_Word ArgsLocns_25;
    MR_Word ModuleInfo_26;
    MR_Word VarLocnInfo0_27;
    MR_Word VarLocnInfo1_28;
    MR_Word LiveLocList_29;
    MR_Word ArgVars_30;
    MR_Word DeadVars_31;
    MR_Word STATE_VARIABLE_CLD_25_33;
    MR_Word Var_34;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Integer Var_59;

    mercury__list__filter_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[1]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_5[1]), VarArgInfos_7, &ArgsInfos_24);
    ll_backend__code_loc_dep__var_arg_info_to_lval_2_p_0(ArgsInfos_24, &ArgsLocns_25);
    ll_backend__code_info__get_module_info_2_p_0(CI_10, &ModuleInfo_26);
    VarLocnInfo0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_place_vars_5_p_0(ModuleInfo_26, ArgsLocns_25, Code_9, VarLocnInfo0_27, &VarLocnInfo1_28);
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 0))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 1))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 2))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 4))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 5))));
    Var_59 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 6))));
    {
      STATE_VARIABLE_CLD_25_33 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_25_33, 0) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_25_33, 1) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_25_33, 2) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_25_33, 3) = ((MR_Box) (VarLocnInfo1_28));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_25_33, 4) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_25_33, 5) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_25_33, 6) = ((MR_Box) (Var_59));
    }
    mercury__assoc_list__values_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ArgsLocns_25, &LiveLocList_29);
    mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LiveLocList_29, OutLocs_8);
    mercury__assoc_list__keys_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ArgsLocns_25, &ArgVars_30);
    Var_34 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    ll_backend__code_loc_dep__which_variables_are_forward_live_4_p_0(STATE_VARIABLE_CLD_25_33, ArgVars_30, Var_34, &DeadVars_31);
    ll_backend__code_loc_dep__maybe_make_vars_forward_dead_4_p_0(DeadVars_31, (MR_Integer) 1, STATE_VARIABLE_CLD_25_33, STATE_VARIABLE_CLD_13);
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__which_variables_are_forward_live_4_p_0(
  MR_Word CLD_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_DeadVars_0_3,
  MR_Word * STATE_VARIABLE_DeadVars_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DeadVars_4 = STATE_VARIABLE_DeadVars_0_3;
    else
    {
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_DeadVars_15_15;
      MR_Word Liveness_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_1, (MR_Integer) 0))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_DeadVars_0_3;

      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness_20, Var_10);
      if (succeeded)
        STATE_VARIABLE_DeadVars_15_15 = STATE_VARIABLE_DeadVars_0_3;
      else
      {
        parse_tree__set_of_var__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_10, STATE_VARIABLE_DeadVars_0_3, &STATE_VARIABLE_DeadVars_15_15);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Vars_11;
      next_value_of_STATE_VARIABLE_DeadVars_0_3 = STATE_VARIABLE_DeadVars_15_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_DeadVars_0_3 = next_value_of_STATE_VARIABLE_DeadVars_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__setup_call_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__code_loc_dep__key_var_is_of_non_dummy_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__setup_call_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__code_loc_dep__valid_stack_slot_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__setup_call_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    ll_backend__code_loc_dep__associate_stack_slot_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
ll_backend__code_loc_dep__setup_call_7_p_0(
  MR_Word GoalInfo_8,
  MR_Word ArgInfos_9,
  MR_Word * LiveLocs_10,
  MR_Word * Code_11,
  MR_Word CI_12,
  MR_Word STATE_VARIABLE_CLD_0_36,
  MR_Word * STATE_VARIABLE_CLD_37)
{
  {
    MR_bool succeeded;
    MR_Word InArgInfos_14;
    MR_Word OutArgInfos_15;
    MR_Word OutVars_17;
    MR_Word OutVarSet_18;
    MR_Word Detism_19;
    MR_Word OptNoReturnCalls_20;
    MR_Word ModuleInfo_21;
    MR_Word VarTypes_22;
    MR_Word RealStackVarLocs_23;
    MR_Word DummyStackVarLocs_24;
    MR_Word VarLocnInfo0_29;
    MR_Word RealInArgInfos_30;
    MR_Word RealInArgLocs_31;
    MR_Word AllRealLocs_32;
    MR_Word AllLocs_33;
    MR_Word VarLocnInfo_34;
    MR_Word LiveLocList_35;
    MR_Word Var_40;
    MR_Word _UnusedArgInfos_16;

    hlds__arg_info__partition_args_4_p_0(ArgInfos_9, &InArgInfos_14, &OutArgInfos_15, &_UnusedArgInfos_16);
    mercury__assoc_list__keys_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0), OutArgInfos_15, &OutVars_17);
    mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), OutVars_17, &OutVarSet_18);
    Detism_19 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_8);
    ll_backend__code_info__get_opt_no_return_calls_2_p_0(CI_12, &OptNoReturnCalls_20);
    ll_backend__code_info__get_module_info_2_p_0(CI_12, &ModuleInfo_21);
    ll_backend__code_info__get_vartypes_2_p_0(CI_12, &VarTypes_22);
    succeeded = (Detism_19 == (MR_Integer) 6);
    if (succeeded)
      succeeded = (OptNoReturnCalls_20 == (MR_Integer) 1);
    if (succeeded)
    {
      RealStackVarLocs_23 = (MR_Word) ((MR_Unsigned) 0U);
      DummyStackVarLocs_24 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word ForwardVarLocs_25;
      MR_Word CodeModel_26;
      MR_Word StackVarLocs_28;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Variables0_56;
      MR_Word Vars0_57;
      MR_Word TypeInfoLiveness_58;
      MR_Word ProcInfo_59;
      MR_Word VarTypes_60;
      MR_Word RttiVarMaps_61;
      MR_Word Vars1_62;
      MR_Word Vars_63;
      MR_Word Variables_64;
      MR_Word Var_65;
      MR_Word ForwardLiveVars_73;
      MR_Word ResumeVars_74;
      MR_Word Vars_75;

      Var_38 = parse_tree__set_of_var__set_to_bitset_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OutVarSet_18);
      ForwardLiveVars_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_36, (MR_Integer) 0))));
      ResumeVars_74 = ll_backend__code_loc_dep__current_resume_point_vars_1_f_0(STATE_VARIABLE_CLD_0_36);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ForwardLiveVars_73, ResumeVars_74, &Vars_75);
      Variables0_56 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_75);
      Vars0_57 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Variables0_56);
      TypeInfoLiveness_58 = ll_backend__code_info__body_typeinfo_liveness_1_f_0(CI_12);
      ll_backend__code_info__get_proc_info_2_p_0(CI_12, &ProcInfo_59);
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_59, &VarTypes_60);
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_59, &RttiVarMaps_61);
      hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(Vars0_57, TypeInfoLiveness_58, VarTypes_60, RttiVarMaps_61, &Vars1_62);
      parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars1_62, Var_38, &Vars_63);
      Variables_64 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_63);
      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_6[1]));
        MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (ll_backend__code_loc_dep__setup_call_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (CI_12));
      }
      mercury__list__map_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[0]), Var_65, Variables_64, &ForwardVarLocs_25);
      CodeModel_26 = hlds__code_model__goal_info_get_code_model_1_f_0(GoalInfo_8);
      switch (CodeModel_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
          StackVarLocs_28 = ForwardVarLocs_25;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ResumeVarLocs_27;

            ll_backend__code_loc_dep__compute_resume_var_stack_locs_2_p_0(STATE_VARIABLE_CLD_0_36, &ResumeVarLocs_27);
            mercury__list__append_3_p_1((MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[0]), ResumeVarLocs_27, ForwardVarLocs_25, &StackVarLocs_28);
          }
          break;
      }
      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_6[2]));
        MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (ll_backend__code_loc_dep__setup_call_7_p_0_2));
        MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (ModuleInfo_21));
        MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (VarTypes_22));
      }
      mercury__list__filter_4_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[0]), Var_39, StackVarLocs_28, &RealStackVarLocs_23, &DummyStackVarLocs_24);
    }
    VarLocnInfo0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_36, (MR_Integer) 3))));
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (ll_backend__code_loc_dep__setup_call_7_p_0_3));
      MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (ModuleInfo_21));
      MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) (VarTypes_22));
    }
    mercury__list__filter_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[1]), Var_40, InArgInfos_14, &RealInArgInfos_30);
    ll_backend__code_loc_dep__var_arg_info_to_lval_2_p_0(RealInArgInfos_30, &RealInArgLocs_31);
    AllRealLocs_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[0]), RealStackVarLocs_23, RealInArgLocs_31);
    AllLocs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[0]), DummyStackVarLocs_24, AllRealLocs_32);
    ll_backend__var_locn__var_locn_place_vars_5_p_0(ModuleInfo_21, AllLocs_33, Code_11, VarLocnInfo0_29, &VarLocnInfo_34);
    ll_backend__code_loc_dep__set_var_locn_info_3_p_0(VarLocnInfo_34, STATE_VARIABLE_CLD_0_36, STATE_VARIABLE_CLD_37);
    mercury__assoc_list__values_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), AllRealLocs_32, &LiveLocList_35);
    mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LiveLocList_35, LiveLocs_10);
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__var_arg_info_to_lval_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_3;
    MR_Word ArgInfo_4;
    MR_Word RestInfos_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Lval_6;
    MR_Word RestLvals_7;
    MR_Word Loc_8;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_11;

    Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
    ArgInfo_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1))));
    Loc_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgInfo_4, (MR_Integer) 0))));
    ll_backend__code_util__arg_loc_to_register_2_p_0(Loc_8, &Lval_6);
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (Var_3));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (Lval_6));
    }
    ll_backend__code_loc_dep__var_arg_info_to_lval_2_p_0(RestInfos_5, &RestLvals_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RestLvals_7));
    }
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__compute_resume_var_stack_locs_2_p_0(
  MR_Word CLD_3,
  MR_Word * VarLocs_4)
{
  {
    MR_bool succeeded;
    MR_Word FailInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_3, (MR_Integer) 5))));
    MR_Word ResumePointStack_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo_5, (MR_Integer) 0))));
    MR_Word ResumePoint_11;
    MR_Word StackMap_12;
    MR_Word VarLocSets_14;
    MR_Box conv0_ResumePoint_11;
    MR_Word MapPrime_28;

    mercury__stack__det_top_2_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0), ResumePointStack_6, &conv0_ResumePoint_11);
    ResumePoint_11 = ((MR_Word) (conv0_ResumePoint_11));
    switch (MR_tag((MR_Word) ResumePoint_11)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MapPrime_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint_11, (MR_Integer) 0))));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MapPrime_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResumePoint_11, (MR_Integer) 2))));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        {
          MapPrime_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ResumePoint_11, (MR_Integer) 0))));
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
      StackMap_12 = MapPrime_28;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_loc_dep.pick_stack_resume_point\'/3", (MR_String) "no stack resume point");
        return;
      }
    }
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), StackMap_12, &VarLocSets_14);
    ll_backend__code_loc_dep__pick_var_places_2_p_0(VarLocSets_14, VarLocs_4);
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__set_var_locn_info_3_p_0(
  MR_Word EI_4,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 5))));
    MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (EI_4));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__clear_r1_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word STATE_VARIABLE_CLD_0_7,
  MR_Word * STATE_VARIABLE_CLD_8)
{
  {
    MR_Word VarLocnInfo0_5;
    MR_Word VarLocnInfo_6;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Integer Var_32;

    *HeadVar__1_1 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    VarLocnInfo0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_7, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_release_reg_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_1[47])), VarLocnInfo0_5, &VarLocnInfo_6);
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_7, (MR_Integer) 0))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_7, (MR_Integer) 1))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_7, (MR_Integer) 2))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_7, (MR_Integer) 4))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_7, (MR_Integer) 5))));
    Var_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_7, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_6));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_32));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__reserve_r1_4_p_0(
  MR_Word * Code_5,
  MR_Word CI_6,
  MR_Word STATE_VARIABLE_CLD_0_12,
  MR_Word * STATE_VARIABLE_CLD_13)
{
  {
    MR_Word ModuleInfo_8;
    MR_Word VarLocnInfo0_9;
    MR_Word VarLocnInfo1_10;
    MR_Word VarLocnInfo_11;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Integer Var_36;

    ll_backend__code_info__get_module_info_2_p_0(CI_6, &ModuleInfo_8);
    VarLocnInfo0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_clear_r1_4_p_0(ModuleInfo_8, Code_5, VarLocnInfo0_9, &VarLocnInfo1_10);
    ll_backend__var_locn__var_locn_acquire_reg_require_given_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_1[47])), VarLocnInfo1_10, &VarLocnInfo_11);
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 0))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 1))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 2))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 4))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 5))));
    Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_11));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_36));
    }
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv1_STATE_VARIABLE_HighestUsedRegR_18;
    MR_Integer conv0_STATE_VARIABLE_HighestUsedRegF_20;

    ll_backend__code_loc_dep__record_highest_used_reg_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv1_STATE_VARIABLE_HighestUsedRegR_18, ((MR_Integer) (wrapper_arg_5)), &conv0_STATE_VARIABLE_HighestUsedRegF_20);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_HighestUsedRegR_18));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_HighestUsedRegF_20));
  }
}

void MR_CALL 
ll_backend__code_loc_dep__acquire_reg_not_in_storemap_5_p_0(
  MR_Word StoreMap_6,
  MR_Word RegType_7,
  MR_Word * Lval_8,
  MR_Word STATE_VARIABLE_CLD_0_15,
  MR_Word * STATE_VARIABLE_CLD_16)
{
  {
    MR_Integer HighestUsedRegR_10;
    MR_Integer HighestUsedRegF_11;
    MR_Word VarLocnInfo0_12;
    MR_Integer NextRegNum_13;
    MR_Word VarLocnInfo_14;
    MR_Box conv3_HighestUsedRegR_10;
    MR_Box conv2_HighestUsedRegF_11;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Integer Var_50;

    mercury__map__foldl2_6_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[13]), StoreMap_6, ((MR_Box) ((MR_Integer) 0)), &conv3_HighestUsedRegR_10, ((MR_Box) ((MR_Integer) 0)), &conv2_HighestUsedRegF_11);
    HighestUsedRegR_10 = ((MR_Integer) (conv3_HighestUsedRegR_10));
    HighestUsedRegF_11 = ((MR_Integer) (conv2_HighestUsedRegF_11));
    VarLocnInfo0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 3))));
    switch (RegType_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          NextRegNum_13 = (MR_Integer) ((MR_Unsigned) HighestUsedRegF_11 + (MR_Unsigned) 1);
        }
        break;
      case (MR_Integer) 0:
        {
          NextRegNum_13 = (MR_Integer) ((MR_Unsigned) HighestUsedRegR_10 + (MR_Unsigned) 1);
        }
        break;
    }
    ll_backend__var_locn__var_locn_acquire_reg_start_at_given_5_p_0(RegType_7, NextRegNum_13, Lval_8, VarLocnInfo0_12, &VarLocnInfo_14);
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 0))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 1))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 2))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 4))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 5))));
    Var_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_50));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__acquire_reg_for_var_5_p_0(
  MR_Word Var_6,
  MR_Word RegType_7,
  MR_Word * Lval_8,
  MR_Word STATE_VARIABLE_CLD_0_16,
  MR_Word * STATE_VARIABLE_CLD_17)
{
  {
    MR_bool succeeded;
    MR_Word FollowVarsMap_10;
    MR_Integer NextNonReserved_11;
    MR_Word VarLocnInfo0_12;
    MR_Word VarLocnInfo_15;
    MR_Word VarLocnInfo_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 3))));
    MR_Word VarLocnInfo_36;
    MR_Integer PrefRegNum_14;
    MR_Word PrefLocn_13;
    MR_Integer Var_18;
    MR_Word Var_22;
    MR_Box conv0_PrefLocn_13;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Integer Var_62;

    ll_backend__var_locn__var_locn_get_follow_var_map_2_p_0(VarLocnInfo_25, &FollowVarsMap_10);
    VarLocnInfo_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_get_next_non_reserved_3_p_0(VarLocnInfo_36, RegType_7, &NextNonReserved_11);
    VarLocnInfo0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 3))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), FollowVarsMap_10, ((MR_Box) (Var_6)), &conv0_PrefLocn_13);
    if (succeeded)
    {
      PrefLocn_13 = ((MR_Word) (conv0_PrefLocn_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) PrefLocn_13)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), PrefLocn_13, (MR_Integer) 0))) & (MR_Integer) 1);
        PrefRegNum_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), PrefLocn_13, (MR_Integer) 1))));
        succeeded = (RegType_7 == Var_22);
        if (succeeded)
        {
          Var_18 = (MR_Integer) 1;
          succeeded = (PrefRegNum_14 >= Var_18);
        }
      }
    }
    if (succeeded)
      ll_backend__var_locn__var_locn_acquire_reg_prefer_given_5_p_0(RegType_7, PrefRegNum_14, Lval_8, VarLocnInfo0_12, &VarLocnInfo_15);
    else
      ll_backend__var_locn__var_locn_acquire_reg_start_at_given_5_p_0(RegType_7, NextNonReserved_11, Lval_8, VarLocnInfo0_12, &VarLocnInfo_15);
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 0))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 1))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 2))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 4))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 5))));
    Var_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_15));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_62));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__materialize_vars_in_rval_6_p_0(
  MR_Word Rval0_7,
  MR_Word * Rval_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_15,
  MR_Word * STATE_VARIABLE_CLD_16)
{
  {
    MR_Word ModuleInfo_12;
    MR_Word VarLocnInfo0_13;
    MR_Word VarLocnInfo_14;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Integer Var_36;

    ll_backend__code_info__get_module_info_2_p_0(CI_10, &ModuleInfo_12);
    VarLocnInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_materialize_vars_in_rval_6_p_0(ModuleInfo_12, Rval0_7, Rval_8, Code_9, VarLocnInfo0_13, &VarLocnInfo_14);
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 0))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 1))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 2))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 4))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 5))));
    Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_36));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__materialize_vars_in_lval_6_p_0(
  MR_Word Lval0_7,
  MR_Word * Lval_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_15,
  MR_Word * STATE_VARIABLE_CLD_16)
{
  {
    MR_Word ModuleInfo_12;
    MR_Word VarLocnInfo0_13;
    MR_Word VarLocnInfo_14;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Integer Var_36;

    ll_backend__code_info__get_module_info_2_p_0(CI_10, &ModuleInfo_12);
    VarLocnInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_materialize_vars_in_lval_6_p_0(ModuleInfo_12, Lval0_7, Lval_8, Code_9, VarLocnInfo0_13, &VarLocnInfo_14);
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 0))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 1))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 2))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 4))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 5))));
    Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_36));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__produce_variable_in_reg_or_stack_6_p_0(
  MR_Word Var_7,
  MR_Word * Code_8,
  MR_Word * Lval_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_15,
  MR_Word * STATE_VARIABLE_CLD_16)
{
  {
    MR_Word ModuleInfo_12;
    MR_Word VarLocnInfo0_13;
    MR_Word VarLocnInfo_14;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Integer Var_36;

    ll_backend__code_info__get_module_info_2_p_0(CI_10, &ModuleInfo_12);
    VarLocnInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_produce_var_in_reg_or_stack_6_p_0(ModuleInfo_12, Var_7, Lval_9, Code_8, VarLocnInfo0_13, &VarLocnInfo_14);
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 0))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 1))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 2))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 4))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 5))));
    Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_36));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__produce_variable_in_reg_6_p_0(
  MR_Word Var_7,
  MR_Word * Code_8,
  MR_Word * Lval_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_15,
  MR_Word * STATE_VARIABLE_CLD_16)
{
  {
    MR_Word ModuleInfo_12;
    MR_Word VarLocnInfo0_13;
    MR_Word VarLocnInfo_14;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Integer Var_36;

    ll_backend__code_info__get_module_info_2_p_0(CI_10, &ModuleInfo_12);
    VarLocnInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_produce_var_in_reg_6_p_0(ModuleInfo_12, Var_7, Lval_9, Code_8, VarLocnInfo0_13, &VarLocnInfo_14);
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 0))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 1))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 2))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 4))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 5))));
    Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_36));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__produce_variable_6_p_0(
  MR_Word Var_7,
  MR_Word * Code_8,
  MR_Word * Rval_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_15,
  MR_Word * STATE_VARIABLE_CLD_16)
{
  {
    MR_Word ModuleInfo_12;
    MR_Word VarLocnInfo0_13;
    MR_Word VarLocnInfo_14;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Integer Var_36;

    ll_backend__code_info__get_module_info_2_p_0(CI_10, &ModuleInfo_12);
    VarLocnInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_produce_var_6_p_0(ModuleInfo_12, Var_7, Rval_9, Code_8, VarLocnInfo0_13, &VarLocnInfo_14);
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 0))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 1))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 2))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 4))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 5))));
    Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_36));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__place_var_6_p_0(
  MR_Word Var_7,
  MR_Word Lval_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_15,
  MR_Word * STATE_VARIABLE_CLD_16)
{
  {
    MR_Word ModuleInfo_12;
    MR_Word VarLocnInfo0_13;
    MR_Word VarLocnInfo_14;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Integer Var_36;

    ll_backend__code_info__get_module_info_2_p_0(CI_10, &ModuleInfo_12);
    VarLocnInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_place_var_6_p_0(ModuleInfo_12, Var_7, Lval_8, Code_9, VarLocnInfo0_13, &VarLocnInfo_14);
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 0))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 1))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 2))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 4))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 5))));
    Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_36));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__save_reused_cell_fields_7_p_0(
  MR_Word Var_8,
  MR_Word Lval_9,
  MR_Word * Code_10,
  MR_Word * Regs_11,
  MR_Word CI_12,
  MR_Word STATE_VARIABLE_CLD_0_17,
  MR_Word * STATE_VARIABLE_CLD_18)
{
  {
    MR_Word ModuleInfo_14;
    MR_Word VarLocnInfo0_15;
    MR_Word VarLocnInfo_16;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Integer Var_38;

    ll_backend__code_info__get_module_info_2_p_0(CI_12, &ModuleInfo_14);
    VarLocnInfo0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_17, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_save_cell_fields_7_p_0(ModuleInfo_14, Var_8, Lval_9, Code_10, Regs_11, VarLocnInfo0_15, &VarLocnInfo_16);
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_17, (MR_Integer) 0))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_17, (MR_Integer) 1))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_17, (MR_Integer) 2))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_17, (MR_Integer) 4))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_17, (MR_Integer) 5))));
    Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_17, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_16));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_38));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__assign_cell_to_var_13_p_0(
  MR_Word Var_14,
  MR_Word ReserveWordAtStart_15,
  MR_Word Ptag_16,
  MR_Word CellArgs_17,
  MR_Word HowToConstruct_18,
  MR_Word MaybeSize_19,
  MR_Word MaybeAllocId_20,
  MR_Word MayUseAtomic_21,
  MR_Word * Code_22,
  MR_Word STATE_VARIABLE_CI_0_32,
  MR_Word * STATE_VARIABLE_CI_33,
  MR_Word STATE_VARIABLE_CLD_0_34,
  MR_Word * STATE_VARIABLE_CLD_35)
{
  {
    MR_Word ModuleInfo_25;
    MR_Word Label_26;
    MR_Word StaticCellInfo0_27;
    MR_Word ExprnOpts_28;
    MR_Word VarLocnInfo0_29;
    MR_Word StaticCellInfo_30;
    MR_Word VarLocnInfo_31;
    MR_Word STATE_VARIABLE_CI_36_36;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Integer Var_57;

    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_32, &ModuleInfo_25);
    ll_backend__code_info__get_next_label_3_p_0(&Label_26, STATE_VARIABLE_CI_0_32, &STATE_VARIABLE_CI_36_36);
    ll_backend__code_info__get_static_cell_info_2_p_0(STATE_VARIABLE_CI_36_36, &StaticCellInfo0_27);
    ll_backend__code_info__get_exprn_opts_2_p_0(STATE_VARIABLE_CI_36_36, &ExprnOpts_28);
    VarLocnInfo0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_34, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_assign_cell_to_var_16_p_0(ModuleInfo_25, ExprnOpts_28, Var_14, ReserveWordAtStart_15, Ptag_16, CellArgs_17, HowToConstruct_18, MaybeSize_19, MaybeAllocId_20, MayUseAtomic_21, Label_26, Code_22, StaticCellInfo0_27, &StaticCellInfo_30, VarLocnInfo0_29, &VarLocnInfo_31);
    ll_backend__code_info__set_static_cell_info_3_p_0(StaticCellInfo_30, STATE_VARIABLE_CI_36_36, STATE_VARIABLE_CI_33);
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_34, (MR_Integer) 0))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_34, (MR_Integer) 1))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_34, (MR_Integer) 2))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_34, (MR_Integer) 4))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_34, (MR_Integer) 5))));
    Var_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_34, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_35 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_31));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_57));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__code_loc_dep__is_var_field_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_2(
  void * env_ptr_arg)
{
  {
    struct ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0_s * env_ptr = (struct ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_4(
  void * env_ptr_arg)
{
  {
    struct ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0_s * env_ptr = (struct ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__Lval_17 = ((MR_Word) ((env_ptr)->ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__conv0_Lval_17));
    ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_3(env_ptr);
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_3(
  void * env_ptr_arg)
{
  {
    struct ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0_s * env_ptr = (struct ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__succeeded = mercury__list__member_2_p_0((env_ptr)->ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__TypeCtorInfo_32_32, ((MR_Box) ((env_ptr)->ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__Lval_17)), (env_ptr)->ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__FieldLvals_8);
    (env_ptr)->ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__succeeded = !((env_ptr)->ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__succeeded);
    if ((env_ptr)->ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__succeeded)
      ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_2(env_ptr);
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_5(
  void * env_ptr_arg)
{
  {
    struct ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0_s * env_ptr = (struct ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__commit_0) == 0)
      {
        (env_ptr)->ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__TypeCtorInfo_32_32 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        mercury__list__member_2_p_1((env_ptr)->ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__TypeCtorInfo_32_32, &(env_ptr)->ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__conv0_Lval_17, (env_ptr)->ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__Lvals_16, ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_4, env_ptr);
        (env_ptr)->ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(
  MR_Word Var_7,
  MR_Word FieldLvals_8,
  MR_Word Rval_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CLD_0_20,
  MR_Word * STATE_VARIABLE_CLD_21)
{
  {
    struct ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0_s env;

    (env).ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__FieldLvals_8 = FieldLvals_8;
    {
      MR_Word BaseVar_13;
      MR_Word TypeCtorInfo_31_31;
      MR_Word MaybeTag_12;
      MR_Word RestFieldLvals_15;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_14;

      (env).ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__succeeded = ((env).ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__FieldLvals_8 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env).ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__succeeded)
      {
        Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__FieldLvals_8, (MR_Integer) 0))));
        RestFieldLvals_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env).ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__FieldLvals_8, (MR_Integer) 1))));
        (env).ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Var_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if ((env).ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__succeeded)
        {
          MaybeTag_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 1))));
          Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 2))));
          Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 3))));
          (env).ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 1);
          if ((env).ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__succeeded)
          {
            BaseVar_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_23, (MR_Integer) 0))));
            TypeCtorInfo_31_31 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
            {
              Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_1));
              MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (MaybeTag_12));
              MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (BaseVar_13));
            }
            (env).ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_31_31, Var_24, RestFieldLvals_15);
          }
        }
      }
      if ((env).ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__succeeded)
      {
        (env).ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__Lvals_16 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval_9);
        ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_5(&env);
        (env).ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__succeeded = !((env).ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__succeeded);
        if ((env).ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0_env_0__succeeded)
        {
          MR_Word VarLocnInfo0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 3))));
          MR_Word VarLocnInfo_19;
          MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 0))));
          MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 1))));
          MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 2))));
          MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 4))));
          MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 5))));
          MR_Integer Var_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 6))));
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Integer Var_51;
          MR_Word Var_48;

          ll_backend__var_locn__var_locn_assign_field_lval_expr_to_var_6_p_0(Var_7, BaseVar_13, Rval_9, Code_10, VarLocnInfo0_18, &VarLocnInfo_19);
          Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 0))));
          Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 1))));
          Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 2))));
          Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 3))));
          Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 4))));
          Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 5))));
          Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 6))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_CLD_21 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_46));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_47));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_19));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_49));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_50));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_51));
          }
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_loc_dep.assign_field_lval_expr_to_var\'/6", (MR_String) "rval contains unexpected lval");
            return;
          }
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_loc_dep.assign_field_lval_expr_to_var\'/6", (MR_String) "FieldLvals not all fields of the same base variable");
          return;
        }
      }
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__reassign_tagword_var_7_p_0(
  MR_Word Var_8,
  MR_Unsigned ToOrMask_9,
  MR_Word ToOrRval_10,
  MR_Word * Code_11,
  MR_Word CI_12,
  MR_Word STATE_VARIABLE_CLD_0_20,
  MR_Word * STATE_VARIABLE_CLD_21)
{
  {
    MR_Word VarLocnInfo0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 3))));
    MR_Word Lvals_15;
    MR_Word VarLocnInfo_17;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Integer Var_43;

    Lvals_15 = ll_backend__code_util__lvals_in_rval_1_f_0(ToOrRval_10);
    if ((Lvals_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ModuleInfo_16;

      ll_backend__code_info__get_module_info_2_p_0(CI_12, &ModuleInfo_16);
      ll_backend__var_locn__var_locn_reassign_tagword_var_7_p_0(ModuleInfo_16, Var_8, ToOrMask_9, ToOrRval_10, Code_11, VarLocnInfo0_14, &VarLocnInfo_17);
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_loc_dep.reassign_tagword_var\'/7", (MR_String) "non-var lvals");
        return;
      }
    }
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 0))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 1))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 2))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 4))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 5))));
    Var_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_21 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_43));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__reassign_mkword_hole_var_6_p_0(
  MR_Word Var_7,
  MR_Word Ptag_8,
  MR_Word Rval_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CLD_0_17,
  MR_Word * STATE_VARIABLE_CLD_18)
{
  {
    MR_Word VarLocnInfo0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_17, (MR_Integer) 3))));
    MR_Word Lvals_13;
    MR_Word VarLocnInfo_14;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Integer Var_40;

    Lvals_13 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval_9);
    if ((Lvals_13 == (MR_Word) ((MR_Unsigned) 0U)))
      ll_backend__var_locn__var_locn_reassign_mkword_hole_var_6_p_0(Var_7, Ptag_8, Rval_9, Code_10, VarLocnInfo0_12, &VarLocnInfo_14);
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_loc_dep.reassign_mkword_hole_var\'/6", (MR_String) "non-var lvals");
        return;
      }
    }
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_17, (MR_Integer) 0))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_17, (MR_Integer) 1))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_17, (MR_Integer) 2))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_17, (MR_Integer) 4))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_17, (MR_Integer) 5))));
    Var_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_17, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_40));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(
  MR_Word Var_6,
  MR_Word Rval_7,
  MR_Word * Code_8,
  MR_Word STATE_VARIABLE_CLD_0_15,
  MR_Word * STATE_VARIABLE_CLD_16)
{
  {
    MR_Word VarLocnInfo0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 3))));
    MR_Word Lvals_11;
    MR_Word VarLocnInfo_12;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Integer Var_38;

    Lvals_11 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval_7);
    if ((Lvals_11 == (MR_Word) ((MR_Unsigned) 0U)))
      ll_backend__var_locn__var_locn_assign_expr_to_var_5_p_0(Var_6, Rval_7, Code_8, VarLocnInfo0_10, &VarLocnInfo_12);
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_loc_dep.assign_expr_to_var\'/5", (MR_String) "non-var lvals");
        return;
      }
    }
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 0))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 1))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 2))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 4))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 5))));
    Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_15, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_38));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__assign_const_to_var_5_p_0(
  MR_Word Var_6,
  MR_Word ConstRval_7,
  MR_Word CI_8,
  MR_Word STATE_VARIABLE_CLD_0_13,
  MR_Word * STATE_VARIABLE_CLD_14)
{
  {
    MR_Word ExprnOpts_10;
    MR_Word VarLocnInfo0_11;
    MR_Word VarLocnInfo_12;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Integer Var_34;

    ll_backend__code_info__get_exprn_opts_2_p_0(CI_8, &ExprnOpts_10);
    VarLocnInfo0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_assign_const_to_var_5_p_0(ExprnOpts_10, Var_6, ConstRval_7, VarLocnInfo0_11, &VarLocnInfo_12);
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 0))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 1))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 2))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 4))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 5))));
    Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_34));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__assign_lval_to_var_6_p_0(
  MR_Word Var_7,
  MR_Word Lval_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_16,
  MR_Word * STATE_VARIABLE_CLD_17)
{
  {
    MR_Word ModuleInfo_12;
    MR_Word StaticCellInfo_13;
    MR_Word VarLocnInfo0_14;
    MR_Word VarLocnInfo_15;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Integer Var_37;

    ll_backend__code_info__get_module_info_2_p_0(CI_10, &ModuleInfo_12);
    ll_backend__code_info__get_static_cell_info_2_p_0(CI_10, &StaticCellInfo_13);
    VarLocnInfo0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_assign_lval_to_var_7_p_0(ModuleInfo_12, Var_7, Lval_8, StaticCellInfo_13, Code_9, VarLocnInfo0_14, &VarLocnInfo_15);
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 0))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 1))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 2))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 4))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 5))));
    Var_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_15));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_37));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__assign_var_to_var_4_p_0(
  MR_Word Var_5,
  MR_Word AssignedVar_6,
  MR_Word STATE_VARIABLE_CLD_0_10,
  MR_Word * STATE_VARIABLE_CLD_11)
{
  {
    MR_Word VarLocnInfo0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 3))));
    MR_Word VarLocnInfo_9;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Integer Var_31;

    ll_backend__var_locn__var_locn_assign_var_to_var_4_p_0(Var_5, AssignedVar_6, VarLocnInfo0_8, &VarLocnInfo_9);
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 0))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 1))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 2))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 4))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 5))));
    Var_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_31));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__set_var_location_4_p_0(
  MR_Word Var_5,
  MR_Word Lval_6,
  MR_Word STATE_VARIABLE_CLD_0_10,
  MR_Word * STATE_VARIABLE_CLD_11)
{
  {
    MR_Word VarLocnInfo0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 3))));
    MR_Word VarLocnInfo_9;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Integer Var_31;

    ll_backend__var_locn__var_locn_check_and_set_magic_var_location_4_p_0(Var_5, Lval_6, VarLocnInfo0_8, &VarLocnInfo_9);
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 0))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 1))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 2))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 4))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 5))));
    Var_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_31));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__variable_locations_2_p_0(
  MR_Word CLD_3,
  MR_Word * Lvals_4)
{
  {
    MR_Word VarLocnInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_3, (MR_Integer) 3))));

    ll_backend__var_locn__var_locn_get_var_locations_2_p_0(VarLocnInfo_5, Lvals_4);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__maybe_discard_and_release_ticket_6_p_0(
  MR_Word MaybeTicketSlot_7,
  MR_Word * Code_8,
  MR_Word STATE_VARIABLE_CI_0_12,
  MR_Word * STATE_VARIABLE_CI_13,
  MR_Word STATE_VARIABLE_CLD_0_14,
  MR_Word * STATE_VARIABLE_CLD_15)
{
  if ((MaybeTicketSlot_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Code_8 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CI_13 = STATE_VARIABLE_CI_0_12;
    *STATE_VARIABLE_CLD_15 = STATE_VARIABLE_CLD_0_14;
  }
  else
  {
    MR_Word TicketSlot_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTicketSlot_7, (MR_Integer) 0))));

    *Code_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[24])));
    ll_backend__code_loc_dep__release_temp_slot_6_p_0(TicketSlot_11, (MR_Integer) 1, STATE_VARIABLE_CI_0_12, STATE_VARIABLE_CI_13, STATE_VARIABLE_CLD_0_14, STATE_VARIABLE_CLD_15);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__maybe_reset_discard_and_release_ticket_7_p_0(
  MR_Word MaybeTicketSlot_8,
  MR_Word Reason_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CI_0_14,
  MR_Word * STATE_VARIABLE_CI_15,
  MR_Word STATE_VARIABLE_CLD_0_16,
  MR_Word * STATE_VARIABLE_CLD_17)
{
  if ((MaybeTicketSlot_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Code_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CI_15 = STATE_VARIABLE_CI_0_14;
    *STATE_VARIABLE_CLD_17 = STATE_VARIABLE_CLD_0_16;
  }
  else
  {
    MR_Word TicketSlot_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTicketSlot_8, (MR_Integer) 0))));

    ll_backend__code_loc_dep__reset_discard_and_release_ticket_7_p_0(TicketSlot_13, Reason_9, Code_10, STATE_VARIABLE_CI_0_14, STATE_VARIABLE_CI_15, STATE_VARIABLE_CLD_0_16, STATE_VARIABLE_CLD_17);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__maybe_reset_and_discard_ticket_3_p_0(
  MR_Word MaybeTicketSlot_4,
  MR_Word Reason_5,
  MR_Word * Code_6)
{
  if ((MaybeTicketSlot_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Code_6 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
  }
  else
  {
    MR_Word TicketSlot_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTicketSlot_4, (MR_Integer) 0))));

    ll_backend__code_loc_dep__reset_and_discard_ticket_3_p_0(TicketSlot_7, Reason_5, Code_6);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__maybe_reset_prune_and_release_ticket_7_p_0(
  MR_Word MaybeTicketSlot_8,
  MR_Word Reason_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CI_0_14,
  MR_Word * STATE_VARIABLE_CI_15,
  MR_Word STATE_VARIABLE_CLD_0_16,
  MR_Word * STATE_VARIABLE_CLD_17)
{
  if ((MaybeTicketSlot_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Code_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CI_15 = STATE_VARIABLE_CI_0_14;
    *STATE_VARIABLE_CLD_17 = STATE_VARIABLE_CLD_0_16;
  }
  else
  {
    MR_Word TicketSlot_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTicketSlot_8, (MR_Integer) 0))));

    ll_backend__code_loc_dep__reset_prune_and_release_ticket_7_p_0(TicketSlot_13, Reason_9, Code_10, STATE_VARIABLE_CI_0_14, STATE_VARIABLE_CI_15, STATE_VARIABLE_CLD_0_16, STATE_VARIABLE_CLD_17);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__maybe_reset_and_prune_ticket_3_p_0(
  MR_Word MaybeTicketSlot_4,
  MR_Word Reason_5,
  MR_Word * Code_6)
{
  if ((MaybeTicketSlot_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Code_6 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
  }
  else
  {
    MR_Word TicketSlot_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTicketSlot_4, (MR_Integer) 0))));

    ll_backend__code_loc_dep__reset_and_prune_ticket_3_p_0(TicketSlot_7, Reason_5, Code_6);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__maybe_release_ticket_5_p_0(
  MR_Word MaybeTicketSlot_6,
  MR_Word STATE_VARIABLE_CI_0_10,
  MR_Word * STATE_VARIABLE_CI_11,
  MR_Word STATE_VARIABLE_CLD_0_12,
  MR_Word * STATE_VARIABLE_CLD_13)
{
  if ((MaybeTicketSlot_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_CI_11 = STATE_VARIABLE_CI_0_10;
    *STATE_VARIABLE_CLD_13 = STATE_VARIABLE_CLD_0_12;
  }
  else
  {
    MR_Word TicketSlot_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTicketSlot_6, (MR_Integer) 0))));

    ll_backend__code_loc_dep__release_temp_slot_6_p_0(TicketSlot_9, (MR_Integer) 1, STATE_VARIABLE_CI_0_10, STATE_VARIABLE_CI_11, STATE_VARIABLE_CLD_0_12, STATE_VARIABLE_CLD_13);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__maybe_reset_ticket_3_p_0(
  MR_Word MaybeTicketSlot_4,
  MR_Word Reason_5,
  MR_Word * Code_6)
{
  if ((MaybeTicketSlot_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Code_6 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
  }
  else
  {
    MR_Word TicketSlot_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTicketSlot_4, (MR_Integer) 0))));
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (TicketSlot_7));
    }
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(3), Var_13, 2) = (MR_Box) ((MR_Unsigned) (Reason_5));
    }
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) ((MR_String) "Reset trail"));
    }
    *Code_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_12)));
  }
}

void MR_CALL 
ll_backend__code_loc_dep__maybe_save_ticket_7_p_0(
  MR_Word AddTrailOps_8,
  MR_Word * Code_9,
  MR_Word * MaybeTicketSlot_10,
  MR_Word STATE_VARIABLE_CI_0_14,
  MR_Word * STATE_VARIABLE_CI_15,
  MR_Word STATE_VARIABLE_CLD_0_16,
  MR_Word * STATE_VARIABLE_CLD_17)
{
  switch (AddTrailOps_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TicketSlot_13;

        ll_backend__code_loc_dep__save_ticket_6_p_0(Code_9, &TicketSlot_13, STATE_VARIABLE_CI_0_14, STATE_VARIABLE_CI_15, STATE_VARIABLE_CLD_0_16, STATE_VARIABLE_CLD_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeTicketSlot_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TicketSlot_13));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *Code_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *MaybeTicketSlot_10 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_CI_15 = STATE_VARIABLE_CI_0_14;
        *STATE_VARIABLE_CLD_17 = STATE_VARIABLE_CLD_0_16;
      }
      break;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__discard_and_release_ticket_6_p_0(
  MR_Word TicketSlot_7,
  MR_Word * Code_8,
  MR_Word STATE_VARIABLE_CI_0_11,
  MR_Word * STATE_VARIABLE_CI_12,
  MR_Word STATE_VARIABLE_CLD_0_13,
  MR_Word * STATE_VARIABLE_CLD_14)
{
  {
    *Code_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[24])));
    ll_backend__code_loc_dep__release_temp_slot_6_p_0(TicketSlot_7, (MR_Integer) 1, STATE_VARIABLE_CI_0_11, STATE_VARIABLE_CI_12, STATE_VARIABLE_CLD_0_13, STATE_VARIABLE_CLD_14);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__reset_discard_and_release_ticket_7_p_0(
  MR_Word TicketSlot_8,
  MR_Word Reason_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CI_0_13,
  MR_Word * STATE_VARIABLE_CI_14,
  MR_Word STATE_VARIABLE_CLD_0_15,
  MR_Word * STATE_VARIABLE_CLD_16)
{
  {
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (TicketSlot_8));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(3), Var_19, 2) = (MR_Box) ((MR_Unsigned) (Reason_9));
    }
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) ((MR_String) "Release trail"));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_1[25])));
    }
    *Code_10 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_17);
    ll_backend__code_loc_dep__release_temp_slot_6_p_0(TicketSlot_8, (MR_Integer) 1, STATE_VARIABLE_CI_0_13, STATE_VARIABLE_CI_14, STATE_VARIABLE_CLD_0_15, STATE_VARIABLE_CLD_16);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__reset_and_discard_ticket_3_p_0(
  MR_Word TicketSlot_4,
  MR_Word Reason_5,
  MR_Word * Code_6)
{
  {
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (TicketSlot_4));
    }
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_9, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(MR_mktag(3), Var_9, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(3), Var_9, 2) = (MR_Box) ((MR_Unsigned) (Reason_5));
    }
    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) ((MR_String) "Restore trail"));
    }
    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_7, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), Var_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_1[25])));
    }
    *Code_6 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_7);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__reset_prune_and_release_ticket_7_p_0(
  MR_Word TicketSlot_8,
  MR_Word Reason_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CI_0_13,
  MR_Word * STATE_VARIABLE_CI_14,
  MR_Word STATE_VARIABLE_CLD_0_15,
  MR_Word * STATE_VARIABLE_CLD_16)
{
  {
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (TicketSlot_8));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(3), Var_19, 2) = (MR_Box) ((MR_Unsigned) (Reason_9));
    }
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) ((MR_String) "Release trail"));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_1[23])));
    }
    *Code_10 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_17);
    ll_backend__code_loc_dep__release_temp_slot_6_p_0(TicketSlot_8, (MR_Integer) 1, STATE_VARIABLE_CI_0_13, STATE_VARIABLE_CI_14, STATE_VARIABLE_CLD_0_15, STATE_VARIABLE_CLD_16);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__reset_and_prune_ticket_3_p_0(
  MR_Word TicketSlot_4,
  MR_Word Reason_5,
  MR_Word * Code_6)
{
  {
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (TicketSlot_4));
    }
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_9, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(MR_mktag(3), Var_9, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(3), Var_9, 2) = (MR_Box) ((MR_Unsigned) (Reason_5));
    }
    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) ((MR_String) "Restore trail"));
    }
    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_7, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), Var_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_1[23])));
    }
    *Code_6 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_7);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__release_ticket_5_p_0(
  MR_Word TicketSlot_6,
  MR_Word STATE_VARIABLE_CI_0_9,
  MR_Word * STATE_VARIABLE_CI_10,
  MR_Word STATE_VARIABLE_CLD_0_11,
  MR_Word * STATE_VARIABLE_CLD_12)
{
  {
    ll_backend__code_loc_dep__release_temp_slot_6_p_0(TicketSlot_6, (MR_Integer) 1, STATE_VARIABLE_CI_0_9, STATE_VARIABLE_CI_10, STATE_VARIABLE_CLD_0_11, STATE_VARIABLE_CLD_12);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__reset_ticket_3_p_0(
  MR_Word TicketSlot_4,
  MR_Word Reason_5,
  MR_Word * Code_6)
{
  {
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (TicketSlot_4));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_8, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(MR_mktag(3), Var_8, 1) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(3), Var_8, 2) = (MR_Box) ((MR_Unsigned) (Reason_5));
    }
    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) ((MR_String) "Reset trail"));
    }
    *Code_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_7)));
  }
}

void MR_CALL 
ll_backend__code_loc_dep__save_ticket_6_p_0(
  MR_Word * Code_7,
  MR_Word * TicketSlot_8,
  MR_Word STATE_VARIABLE_CI_0_11,
  MR_Word * STATE_VARIABLE_CI_12,
  MR_Word STATE_VARIABLE_CLD_0_13,
  MR_Word * STATE_VARIABLE_CLD_14)
{
  {
    MR_Word Var_19;
    MR_Word Var_20;

    ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, TicketSlot_8, STATE_VARIABLE_CI_0_11, STATE_VARIABLE_CI_12, STATE_VARIABLE_CLD_0_13, STATE_VARIABLE_CLD_14);
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (*TicketSlot_8));
    }
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) ((MR_String) "Save trail state"));
    }
    *Code_7 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_19)));
  }
}

void MR_CALL 
ll_backend__code_loc_dep__maybe_restore_and_release_hp_6_p_0(
  MR_Word MaybeHpSlot_7,
  MR_Word * Code_8,
  MR_Word STATE_VARIABLE_CI_0_12,
  MR_Word * STATE_VARIABLE_CI_13,
  MR_Word STATE_VARIABLE_CLD_0_14,
  MR_Word * STATE_VARIABLE_CLD_15)
{
  if ((MaybeHpSlot_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Code_8 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CI_13 = STATE_VARIABLE_CI_0_12;
    *STATE_VARIABLE_CLD_15 = STATE_VARIABLE_CLD_0_14;
  }
  else
  {
    MR_Word HpSlot_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHpSlot_7, (MR_Integer) 0))));

    ll_backend__code_loc_dep__restore_and_release_hp_6_p_0(HpSlot_11, Code_8, STATE_VARIABLE_CI_0_12, STATE_VARIABLE_CI_13, STATE_VARIABLE_CLD_0_14, STATE_VARIABLE_CLD_15);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__maybe_release_hp_5_p_0(
  MR_Word MaybeHpSlot_6,
  MR_Word STATE_VARIABLE_CI_0_10,
  MR_Word * STATE_VARIABLE_CI_11,
  MR_Word STATE_VARIABLE_CLD_0_12,
  MR_Word * STATE_VARIABLE_CLD_13)
{
  if ((MaybeHpSlot_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_CI_11 = STATE_VARIABLE_CI_0_10;
    *STATE_VARIABLE_CLD_13 = STATE_VARIABLE_CLD_0_12;
  }
  else
  {
    MR_Word HpSlot_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHpSlot_6, (MR_Integer) 0))));

    ll_backend__code_loc_dep__release_temp_slot_6_p_0(HpSlot_9, (MR_Integer) 1, STATE_VARIABLE_CI_0_10, STATE_VARIABLE_CI_11, STATE_VARIABLE_CLD_0_12, STATE_VARIABLE_CLD_13);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__maybe_restore_hp_2_p_0(
  MR_Word MaybeHpSlot_3,
  MR_Word * Code_4)
{
  if ((MaybeHpSlot_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Code_4 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
  }
  else
  {
    MR_Word HpSlot_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHpSlot_3, (MR_Integer) 0))));
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (HpSlot_5));
    }
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_10, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(MR_mktag(3), Var_10, 1) = ((MR_Box) (Var_11));
    }
    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) ((MR_String) "Restore heap pointer"));
    }
    *Code_4 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_9)));
  }
}

void MR_CALL 
ll_backend__code_loc_dep__maybe_save_hp_7_p_0(
  MR_Word Maybe_8,
  MR_Word * Code_9,
  MR_Word * MaybeHpSlot_10,
  MR_Word STATE_VARIABLE_CI_0_14,
  MR_Word * STATE_VARIABLE_CI_15,
  MR_Word STATE_VARIABLE_CLD_0_16,
  MR_Word * STATE_VARIABLE_CLD_17)
{
  switch (Maybe_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Code_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *MaybeHpSlot_10 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_CI_15 = STATE_VARIABLE_CI_0_14;
        *STATE_VARIABLE_CLD_17 = STATE_VARIABLE_CLD_0_16;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word HpSlot_13;

        ll_backend__code_loc_dep__save_hp_6_p_0(Code_9, &HpSlot_13, STATE_VARIABLE_CI_0_14, STATE_VARIABLE_CI_15, STATE_VARIABLE_CLD_0_16, STATE_VARIABLE_CLD_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeHpSlot_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HpSlot_13));
        }
      }
      break;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__restore_and_release_hp_6_p_0(
  MR_Word HpSlot_7,
  MR_Word * Code_8,
  MR_Word STATE_VARIABLE_CI_0_11,
  MR_Word * STATE_VARIABLE_CI_12,
  MR_Word STATE_VARIABLE_CLD_0_13,
  MR_Word * STATE_VARIABLE_CLD_14)
{
  {
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (HpSlot_7));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) ((MR_String) "Restore heap pointer"));
    }
    *Code_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_19)));
    ll_backend__code_loc_dep__release_temp_slot_6_p_0(HpSlot_7, (MR_Integer) 1, STATE_VARIABLE_CI_0_11, STATE_VARIABLE_CI_12, STATE_VARIABLE_CLD_0_13, STATE_VARIABLE_CLD_14);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__release_hp_5_p_0(
  MR_Word HpSlot_6,
  MR_Word STATE_VARIABLE_CI_0_9,
  MR_Word * STATE_VARIABLE_CI_10,
  MR_Word STATE_VARIABLE_CLD_0_11,
  MR_Word * STATE_VARIABLE_CLD_12)
{
  {
    ll_backend__code_loc_dep__release_temp_slot_6_p_0(HpSlot_6, (MR_Integer) 1, STATE_VARIABLE_CI_0_9, STATE_VARIABLE_CI_10, STATE_VARIABLE_CLD_0_11, STATE_VARIABLE_CLD_12);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__restore_hp_2_p_0(
  MR_Word HpSlot_3,
  MR_Word * Code_4)
{
  {
    MR_Word Var_5;
    MR_Word Var_6;
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (HpSlot_3));
    }
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_6, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(MR_mktag(3), Var_6, 1) = ((MR_Box) (Var_7));
    }
    {
      Var_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_5, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), Var_5, 1) = ((MR_Box) ((MR_String) "Restore heap pointer"));
    }
    *Code_4 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_5)));
  }
}

void MR_CALL 
ll_backend__code_loc_dep__pickup_zombies_3_p_0(
  MR_Word * Zombies_4,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7)
{
  {
    MR_Word Var_8;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Integer Var_29;

    *Zombies_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 2))));
    Var_8 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 0))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 1))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 3))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 4))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 5))));
    Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_29));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__make_vars_forward_dead_3_p_0(
  MR_Word Vars_4,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7)
{
  {
    ll_backend__code_loc_dep__maybe_make_vars_forward_dead_4_p_0(Vars_4, (MR_Integer) 1, STATE_VARIABLE_CLD_0_6, STATE_VARIABLE_CLD_7);
  }
}

MR_bool MR_CALL 
ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(
  MR_Word CLD_3,
  MR_Word Var_4)
{
  {
    MR_bool succeeded;
    MR_Word Liveness_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_3, (MR_Integer) 0))));

    succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness_5, Var_4);
    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__get_known_variables_2_p_0(
  MR_Word CLD_3,
  MR_Word * VarList_4)
{
  {
    MR_Word ForwardLiveVars_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_3, (MR_Integer) 0))));
    MR_Word ResumeVars_6;
    MR_Word Vars_7;

    ResumeVars_6 = ll_backend__code_loc_dep__current_resume_point_vars_1_f_0(CLD_3);
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ForwardLiveVars_5, ResumeVars_6, &Vars_7);
    *VarList_4 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_7);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__resume_point_vars_2_p_0(
  MR_Word ResumePoint_3,
  MR_Word * Vars_4)
{
  {
    MR_Word ResumeMap_5;

    switch (MR_tag((MR_Word) ResumePoint_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ResumeMap_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ResumePoint_3, (MR_Integer) 0))));
        break;
      case (MR_Integer) 1:
        ResumeMap_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint_3, (MR_Integer) 0))));
        break;
      case (MR_Integer) 2:
        ResumeMap_5 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResumePoint_3, (MR_Integer) 0))));
        break;
      case (MR_Integer) 3:
        ResumeMap_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ResumePoint_3, (MR_Integer) 0))));
        break;
    }
    mercury__map__keys_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), ResumeMap_5, Vars_4);
  }
}

static MR_Box MR_CALL 
ll_backend__code_loc_dep__make_resume_point_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ll_backend__llds__stack_slot_to_lval_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__make_resume_point_6_p_0(
  MR_Word ResumeVars_7,
  MR_Word ResumeLocs_8,
  MR_Word FullMap_9,
  MR_Word * ResumePoint_10,
  MR_Word STATE_VARIABLE_CI_0_21,
  MR_Word * STATE_VARIABLE_CI_22)
{
  {
    MR_Word StackSlots_12;
    MR_Word OrigMap_13;

    ll_backend__code_info__get_stack_slots_2_p_0(STATE_VARIABLE_CI_0_21, &StackSlots_12);
    mercury__map__select_sorted_list_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), FullMap_9, ResumeVars_7, &OrigMap_13);
    switch (ResumeLocs_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word STATE_VARIABLE_CI_35_35;
          MR_Word OrigLabel_68;
          MR_Word OrigAddr_69;
          MR_Word StackMap_70;
          MR_Word StackLabel_71;
          MR_Word StackAddr_72;
          MR_Word StackMap0_86;
          MR_Word AbsStackList_87;
          MR_Word StackList0_88;
          MR_Word StackList_89;

          mercury__map__select_sorted_list_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), StackSlots_12, ResumeVars_7, &StackMap0_86);
          mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), StackMap0_86, &AbsStackList_87);
          StackList0_88 = mercury__assoc_list__map_values_only_2_f_0((MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[12]), AbsStackList_87);
          ll_backend__code_loc_dep__make_singleton_sets_2_p_0(StackList0_88, &StackList_89);
          mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), StackList_89, &StackMap_70);
          ll_backend__code_info__get_next_label_3_p_0(&OrigLabel_68, STATE_VARIABLE_CI_0_21, &STATE_VARIABLE_CI_35_35);
          {
            OrigAddr_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), OrigAddr_69, 0) = ((MR_Box) (OrigLabel_68));
          }
          ll_backend__code_info__get_next_label_3_p_0(&StackLabel_71, STATE_VARIABLE_CI_35_35, STATE_VARIABLE_CI_22);
          {
            StackAddr_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), StackAddr_72, 0) = ((MR_Box) (StackLabel_71));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *ResumePoint_10 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (OrigMap_13));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (OrigAddr_69));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (StackMap_70));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (StackAddr_72));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word OrigLabel_14;
          MR_Word OrigAddr_15;

          ll_backend__code_info__get_next_label_3_p_0(&OrigLabel_14, STATE_VARIABLE_CI_0_21, STATE_VARIABLE_CI_22);
          {
            OrigAddr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), OrigAddr_15, 0) = ((MR_Box) (OrigLabel_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *ResumePoint_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OrigMap_13));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OrigAddr_15));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word STATE_VARIABLE_CI_23_23;
          MR_Word OrigLabel_76;
          MR_Word OrigAddr_77;
          MR_Word StackMap_78;
          MR_Word StackLabel_79;
          MR_Word StackAddr_80;

          ll_backend__code_loc_dep__make_stack_resume_map_3_p_0(ResumeVars_7, StackSlots_12, &StackMap_78);
          ll_backend__code_info__get_next_label_3_p_0(&StackLabel_79, STATE_VARIABLE_CI_0_21, &STATE_VARIABLE_CI_23_23);
          {
            StackAddr_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), StackAddr_80, 0) = ((MR_Box) (StackLabel_79));
          }
          ll_backend__code_info__get_next_label_3_p_0(&OrigLabel_76, STATE_VARIABLE_CI_23_23, STATE_VARIABLE_CI_22);
          {
            OrigAddr_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), OrigAddr_77, 0) = ((MR_Box) (OrigLabel_76));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *ResumePoint_10 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (StackMap_78));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (StackAddr_80));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (OrigMap_13));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (OrigAddr_77));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word StackMap_18;
          MR_Word StackLabel_19;
          MR_Word StackAddr_20;

          ll_backend__code_loc_dep__make_stack_resume_map_3_p_0(ResumeVars_7, StackSlots_12, &StackMap_18);
          ll_backend__code_info__get_next_label_3_p_0(&StackLabel_19, STATE_VARIABLE_CI_0_21, STATE_VARIABLE_CI_22);
          {
            StackAddr_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), StackAddr_20, 0) = ((MR_Box) (StackLabel_19));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *ResumePoint_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StackMap_18));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (StackAddr_20));
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
ll_backend__code_loc_dep__make_stack_resume_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ll_backend__llds__stack_slot_to_lval_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__make_stack_resume_map_3_p_0(
  MR_Word ResumeVars_4,
  MR_Word StackSlots_5,
  MR_Word * StackMap_6)
{
  {
    MR_Word StackMap0_7;
    MR_Word AbsStackList_8;
    MR_Word StackList0_9;
    MR_Word StackList_10;

    mercury__map__select_sorted_list_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), StackSlots_5, ResumeVars_4, &StackMap0_7);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), StackMap0_7, &AbsStackList_8);
    StackList0_9 = mercury__assoc_list__map_values_only_2_f_0((MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[11]), AbsStackList_8);
    ll_backend__code_loc_dep__make_singleton_sets_2_p_0(StackList0_9, &StackList_10);
    mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), StackList_10, StackMap_6);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__flush_resume_vars_to_stack_4_p_0(
  MR_Word * Code_5,
  MR_Word CI_6,
  MR_Word STATE_VARIABLE_CLD_0_9,
  MR_Word * STATE_VARIABLE_CLD_10)
{
  {
    MR_bool succeeded;
    MR_Word VarLocs_8;
    MR_Word FailInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_9, (MR_Integer) 5))));
    MR_Word ResumePointStack_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo_14, (MR_Integer) 0))));
    MR_Word ResumePoint_20;
    MR_Word StackMap_21;
    MR_Word VarLocSets_23;
    MR_Word ModuleInfo_57;
    MR_Word VarLocnInfo0_58;
    MR_Word VarLocnInfo_59;
    MR_Box conv0_ResumePoint_20;
    MR_Word MapPrime_37;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Integer Var_79;

    mercury__stack__det_top_2_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0), ResumePointStack_15, &conv0_ResumePoint_20);
    ResumePoint_20 = ((MR_Word) (conv0_ResumePoint_20));
    switch (MR_tag((MR_Word) ResumePoint_20)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MapPrime_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint_20, (MR_Integer) 0))));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MapPrime_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResumePoint_20, (MR_Integer) 2))));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        {
          MapPrime_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ResumePoint_20, (MR_Integer) 0))));
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
      StackMap_21 = MapPrime_37;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_loc_dep.pick_stack_resume_point\'/3", (MR_String) "no stack resume point");
        return;
      }
    }
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), StackMap_21, &VarLocSets_23);
    ll_backend__code_loc_dep__pick_var_places_2_p_0(VarLocSets_23, &VarLocs_8);
    ll_backend__code_info__get_module_info_2_p_0(CI_6, &ModuleInfo_57);
    VarLocnInfo0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_9, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_place_vars_5_p_0(ModuleInfo_57, VarLocs_8, Code_5, VarLocnInfo0_58, &VarLocnInfo_59);
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_9, (MR_Integer) 0))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_9, (MR_Integer) 1))));
    Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_9, (MR_Integer) 2))));
    Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_9, (MR_Integer) 4))));
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_9, (MR_Integer) 5))));
    Var_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_9, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_59));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_79));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__produce_vars_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Map_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_CLD_0_5,
  MR_Word * STATE_VARIABLE_CLD_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    mercury__map__init_1_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), Map_2);
    *STATE_VARIABLE_CLD_6 = STATE_VARIABLE_CLD_0_5;
  }
  else
  {
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Vars_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Map0_18;
    MR_Word CodeVars_19;
    MR_Word CodeVar_20;
    MR_Word Lval_21;
    MR_Word Lvals_22;
    MR_Word STATE_VARIABLE_CLD_25_25;
    MR_Word ModuleInfo_41;
    MR_Word VarLocnInfo0_42;
    MR_Word VarLocnInfo_43;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Integer Var_63;

    ll_backend__code_loc_dep__produce_vars_6_p_0(Vars_13, &Map0_18, &CodeVars_19, HeadVar__4_4, STATE_VARIABLE_CLD_0_5, &STATE_VARIABLE_CLD_25_25);
    ll_backend__code_info__get_module_info_2_p_0(HeadVar__4_4, &ModuleInfo_41);
    VarLocnInfo0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_25_25, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_produce_var_in_reg_or_stack_6_p_0(ModuleInfo_41, Var_12, &Lval_21, &CodeVar_20, VarLocnInfo0_42, &VarLocnInfo_43);
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_25_25, (MR_Integer) 0))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_25_25, (MR_Integer) 1))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_25_25, (MR_Integer) 2))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_25_25, (MR_Integer) 4))));
    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_25_25, (MR_Integer) 5))));
    Var_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_25_25, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_43));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_63));
    }
    Lvals_22 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_21)));
    mercury__map__set_4_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), ((MR_Box) (Var_12)), ((MR_Box) (Lvals_22)), Map0_18, Map_2);
    *HeadVar__3_3 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CodeVars_19, CodeVar_20);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__may_use_nondet_tailcall_2_p_0(
  MR_Word CLD_3,
  MR_Word * TailCallStatus_4)
{
  {
    MR_bool succeeded;
    MR_Word FailInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_3, (MR_Integer) 5))));
    MR_Word ResumePoints0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo_5, (MR_Integer) 0))));
    MR_Word ResumeKnown_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo_5, (MR_Integer) 1))));
    MR_Word ResumePoint1_11;
    MR_Word ResumePoints1_12;
    MR_Word Var_15;
    MR_Box conv0_ResumePoint1_11;

    succeeded = mercury__stack__pop_3_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0), &conv0_ResumePoint1_11, ResumePoints0_6, &ResumePoints1_12);
    if (succeeded)
    {
      ResumePoint1_11 = ((MR_Word) (conv0_ResumePoint1_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = mercury__stack__is_empty_1_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0), ResumePoints1_12);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) ResumePoint1_11)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint1_11, (MR_Integer) 1))));
          succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 8U));
        }
      }
    }
    if (succeeded)
      if ((ResumeKnown_7 == (MR_Word) ((MR_Unsigned) 0U)))
        *TailCallStatus_4 = (MR_Integer) 1;
      else
        *TailCallStatus_4 = (MR_Integer) 2;
    else
      *TailCallStatus_4 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
ll_backend__code_loc_dep__failure_is_direct_branch_2_p_0(
  MR_Word CLD_3,
  MR_Word * CodeAddr_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_13_13;
    MR_Word FailInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_3, (MR_Integer) 5))));
    MR_Word ResumePoints_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo_5, (MR_Integer) 0))));
    MR_Word TopResumePoint_11;
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo_5, (MR_Integer) 1))));
    MR_Box conv0_TopResumePoint_11;

    succeeded = (Var_12 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TypeCtorInfo_13_13 = (MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0);
      succeeded = mercury__stack__top_2_p_0(TypeCtorInfo_13_13, ResumePoints_6, &conv0_TopResumePoint_11);
      if (succeeded)
      {
        TopResumePoint_11 = ((MR_Word) (conv0_TopResumePoint_11));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        succeeded = ll_backend__code_loc_dep__pick_matching_resume_addr_3_p_0(CLD_3, TopResumePoint_11, CodeAddr_4);
    }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__fail_if_rval_is_false_6_p_0(
  MR_Word Rval0_7,
  MR_Word * Code_8,
  MR_Word STATE_VARIABLE_CI_0_32,
  MR_Word * STATE_VARIABLE_CI_33,
  MR_Word STATE_VARIABLE_CLD_0_34,
  MR_Word * STATE_VARIABLE_CLD_35)
{
  {
    MR_bool succeeded;
    MR_Word FailInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_34, (MR_Integer) 5))));
    MR_Word ResumePoints_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo_11, (MR_Integer) 0))));
    MR_Word ResumeKnown_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo_11, (MR_Integer) 1))));

    if ((ResumeKnown_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Rval_58;

      ll_backend__code_util__neg_rval_2_p_0(Rval0_7, &Rval_58);
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Rval_58));
        MR_hl_field(MR_mktag(3), Var_37, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      }
      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) ((MR_String) "Test for failure"));
      }
      *Code_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_36)));
      *STATE_VARIABLE_CI_33 = STATE_VARIABLE_CI_0_32;
      *STATE_VARIABLE_CLD_35 = STATE_VARIABLE_CLD_0_34;
    }
    else
    {
      MR_Word TopResumePoint_18;
      MR_Box conv0_TopResumePoint_18;
      MR_Word FailureAddress0_19;

      mercury__stack__det_top_2_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0), ResumePoints_12, &conv0_TopResumePoint_18);
      TopResumePoint_18 = ((MR_Word) (conv0_TopResumePoint_18));
      succeeded = ll_backend__code_loc_dep__pick_matching_resume_addr_3_p_0(STATE_VARIABLE_CLD_0_34, TopResumePoint_18, &FailureAddress0_19);
      if (succeeded)
      {
        MR_Word Rval_20;
        MR_Word Var_40;
        MR_Word Var_41;

        ll_backend__code_util__neg_rval_2_p_0(Rval0_7, &Rval_20);
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (Rval_20));
          MR_hl_field(MR_mktag(3), Var_41, 2) = ((MR_Box) (FailureAddress0_19));
        }
        {
          Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) ((MR_String) "Test for failure"));
        }
        *Code_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_40)));
        *STATE_VARIABLE_CLD_35 = STATE_VARIABLE_CLD_0_34;
        *STATE_VARIABLE_CI_33 = STATE_VARIABLE_CI_0_32;
      }
      else
      {
        MR_Word Map_21;
        MR_Word FailureAddress_22;
        MR_Word AssocList_23;
        MR_Word SuccessLabel_24;
        MR_Word CurPos_25;
        MR_Word PlaceCode_27;
        MR_Word SuccessAddress_29;
        MR_Word TestCode_30;
        MR_Word TailCode_31;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_57;
        MR_Word Var_26;
        MR_Word _AfterPlaceCLD_28;

        switch (MR_tag((MR_Word) TopResumePoint_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Map_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TopResumePoint_18, (MR_Integer) 0))));
              FailureAddress_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TopResumePoint_18, (MR_Integer) 1))));
            }
            break;
          case (MR_Integer) 1:
            {
              Map_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TopResumePoint_18, (MR_Integer) 0))));
              FailureAddress_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TopResumePoint_18, (MR_Integer) 1))));
            }
            break;
          case (MR_Integer) 2:
            {
              Map_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TopResumePoint_18, (MR_Integer) 0))));
              FailureAddress_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TopResumePoint_18, (MR_Integer) 1))));
            }
            break;
          case (MR_Integer) 3:
            {
              Map_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TopResumePoint_18, (MR_Integer) 0))));
              FailureAddress_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TopResumePoint_18, (MR_Integer) 1))));
            }
            break;
        }
        mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), Map_21, &AssocList_23);
        ll_backend__code_info__get_next_label_3_p_0(&SuccessLabel_24, STATE_VARIABLE_CI_0_32, STATE_VARIABLE_CI_33);
        CurPos_25 = (MR_Word) (STATE_VARIABLE_CLD_0_34);
        ll_backend__code_loc_dep__pick_and_place_vars_6_p_0(AssocList_23, &Var_26, &PlaceCode_27, *STATE_VARIABLE_CI_33, STATE_VARIABLE_CLD_0_34, &_AfterPlaceCLD_28);
        ll_backend__code_loc_dep__reset_to_position_3_p_0(CurPos_25, *STATE_VARIABLE_CI_33, STATE_VARIABLE_CLD_35);
        {
          SuccessAddress_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SuccessAddress_29, 0) = ((MR_Box) (SuccessLabel_24));
        }
        {
          Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (Rval0_7));
          MR_hl_field(MR_mktag(3), Var_46, 2) = ((MR_Box) (SuccessAddress_29));
        }
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (Var_46));
          MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) ((MR_String) "Test for failure"));
        }
        TestCode_30 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_45)));
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (FailureAddress_22));
        }
        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (Var_50));
          MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) ((MR_String) "Goto failure"));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (SuccessLabel_24));
        }
        {
          Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) ((MR_String) "Success continuation"));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_52));
        }
        TailCode_31 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_48);
        Var_57 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PlaceCode_27, TailCode_31);
        *Code_8 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TestCode_30, Var_57);
      }
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__set_resume_point_and_frame_to_unknown_2_p_0(
  MR_Word STATE_VARIABLE_CLD_0_11,
  MR_Word * STATE_VARIABLE_CLD_12)
{
  {
    MR_Word FailInfo0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 5))));
    MR_Word ResumePoints_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo0_4, (MR_Integer) 0))));
    MR_Word FailInfo_10;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 0))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 1))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 2))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 3))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 4))));
    MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 6))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo0_4, (MR_Integer) 2)));

    {
      FailInfo_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FailInfo_10, 0) = ((MR_Box) (ResumePoints_5));
      MR_hl_field(MR_mktag(0), FailInfo_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), FailInfo_10, 2) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 2))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (FailInfo_10));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_22));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__set_resume_point_to_unknown_2_p_0(
  MR_Word STATE_VARIABLE_CLD_0_11,
  MR_Word * STATE_VARIABLE_CLD_12)
{
  {
    MR_Word FailInfo0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 5))));
    MR_Word ResumePoints_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo0_4, (MR_Integer) 0))));
    MR_Word FailInfo_10;
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 0))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 1))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 2))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 3))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 4))));
    MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 6))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo0_4, (MR_Integer) 2)));

    {
      FailInfo_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FailInfo_10, 0) = ((MR_Box) (ResumePoints_5));
      MR_hl_field(MR_mktag(0), FailInfo_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), FailInfo_10, 2) = (MR_Box) (packed_word_0);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (FailInfo_10));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_21));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__top_resume_point_2_p_0(
  MR_Word CLD_3,
  MR_Word * ResumePoint_4)
{
  {
    MR_Word FailInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_3, (MR_Integer) 5))));
    MR_Word ResumePoints_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo_5, (MR_Integer) 0))));
    MR_Box conv0_ResumePoint_4;

    mercury__stack__det_top_2_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0), ResumePoints_6, &conv0_ResumePoint_4);
    *ResumePoint_4 = ((MR_Word) (conv0_ResumePoint_4));
  }
}

void MR_CALL 
ll_backend__code_loc_dep__pop_resume_point_2_p_0(
  MR_Word STATE_VARIABLE_CLD_0_13,
  MR_Word * STATE_VARIABLE_CLD_14)
{
  {
    MR_Word FailInfo0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 5))));
    MR_Word ResumePoints0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo0_4, (MR_Integer) 0))));
    MR_Word ResumeKnown_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo0_4, (MR_Integer) 1))));
    MR_Word ResumePoints_11;
    MR_Word FailInfo_12;
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo0_4, (MR_Integer) 2)));
    MR_Box conv0_Var_10;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Integer Var_35;

    mercury__stack__det_pop_3_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0), &conv0_Var_10, ResumePoints0_5, &ResumePoints_11);
    {
      FailInfo_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FailInfo_12, 0) = ((MR_Box) (ResumePoints_11));
      MR_hl_field(MR_mktag(0), FailInfo_12, 1) = ((MR_Box) (ResumeKnown_6));
      MR_hl_field(MR_mktag(0), FailInfo_12, 2) = (MR_Box) (packed_word_0);
    }
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 0))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 1))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 2))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 3))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 4))));
    Var_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (FailInfo_12));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_35));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__generate_semi_commit_6_p_0(
  MR_Word SemiCommitInfo_7,
  MR_Word * Code_8,
  MR_Word STATE_VARIABLE_CI_0_47,
  MR_Word * STATE_VARIABLE_CI_48,
  MR_Word STATE_VARIABLE_CLD_0_49,
  MR_Word * STATE_VARIABLE_CLD_50)
{
  {
    MR_Word FailInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SemiCommitInfo_7, (MR_Integer) 0))));
    MR_Word ResumePoint_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SemiCommitInfo_7, (MR_Integer) 1))));
    MR_Word HijackInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SemiCommitInfo_7, (MR_Integer) 2))));
    MR_Word MaybeTrailSlots_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SemiCommitInfo_7, (MR_Integer) 3))));
    MR_Word MaybeRegionCommitFrameInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SemiCommitInfo_7, (MR_Integer) 4))));
    MR_Word SuccessUndoCode_22;
    MR_Word FailureUndoCode_23;
    MR_Word AfterCommit_35;
    MR_Word ResumePointCode_36;
    MR_Word FailCode_37;
    MR_Word CommitTrailCode_38;
    MR_Word RestoreTrailCode_39;
    MR_Word SuccessRegionCode_40;
    MR_Word FailureRegionCode_41;
    MR_Word SuccLabel_42;
    MR_Word GotoSuccLabel_43;
    MR_Word SuccLabelCode_44;
    MR_Word SuccessCode_45;
    MR_Word FailureCode_46;
    MR_Word STATE_VARIABLE_CLD_51_51;
    MR_Word STATE_VARIABLE_CI_156_156;
    MR_Word STATE_VARIABLE_CLD_157_157;
    MR_Word STATE_VARIABLE_CI_158_158;
    MR_Word STATE_VARIABLE_CLD_159_159;
    MR_Word STATE_VARIABLE_CI_160_160;
    MR_Word STATE_VARIABLE_CLD_161_161;
    MR_Word STATE_VARIABLE_CI_162_162;
    MR_Word Var_165;
    MR_Word Var_166;
    MR_Word Var_167;
    MR_Word Var_169;
    MR_Word Var_170;
    MR_Word Var_172;
    MR_Word Var_173;
    MR_Word Var_174;
    MR_Word Var_175;
    MR_Word Var_176;
    MR_Word Var_177;

    ll_backend__code_loc_dep__set_fail_info_3_p_0(FailInfo_11, STATE_VARIABLE_CLD_0_49, &STATE_VARIABLE_CLD_51_51);
    switch (MR_tag((MR_Word) HijackInfo_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ResumePoints_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo_11, (MR_Integer) 0))));
          MR_Word TopResumePoint_29;
          MR_Word StackLabel_31;
          MR_Word StackLabelConst_32;
          MR_Word Var_113;
          MR_Word Var_114;
          MR_Word Var_121;
          MR_Word Var_122;
          MR_Word Var_123;
          MR_Box conv0_TopResumePoint_29;
          MR_Word Var_30;

          mercury__stack__det_top_2_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0), ResumePoints_24, &conv0_TopResumePoint_29);
          TopResumePoint_29 = ((MR_Word) (conv0_TopResumePoint_29));
          ll_backend__code_loc_dep__pick_stack_resume_point_3_p_0(TopResumePoint_29, &Var_30, &StackLabel_31);
          {
            Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (StackLabel_31));
          }
          {
            StackLabelConst_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), StackLabelConst_32, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), StackLabelConst_32, 1) = ((MR_Box) (Var_113));
          }
          {
            Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[30])));
            MR_hl_field(MR_mktag(3), Var_123, 2) = ((MR_Box) (StackLabelConst_32));
          }
          {
            Var_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_122, 0) = ((MR_Box) (Var_123));
            MR_hl_field(MR_mktag(0), Var_122, 1) = ((MR_Box) ((MR_String) "restore redoip for quarter commit hijack"));
          }
          {
            Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
            MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[21]));
            MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_121));
          }
          SuccessUndoCode_22 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_114);
          FailureUndoCode_23 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_122)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaxfrSlot_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HijackInfo_13, (MR_Integer) 0))));
          MR_Word UseMinimalModel_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HijackInfo_13, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Word MaxfrCode_18;
          MR_Word CutCode_21;
          MR_Word Var_135;
          MR_Word Var_136;

          {
            Var_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_136, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(MR_mktag(3), Var_136, 1) = ((MR_Box) (MaxfrSlot_16));
          }
          {
            Var_135 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_135, 0) = ((MR_Box) (Var_136));
            MR_hl_field(MR_mktag(0), Var_135, 1) = ((MR_Box) ((MR_String) "restore maxfr for temp frame hijack"));
          }
          MaxfrCode_18 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_135)));
          switch (UseMinimalModel_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              CutCode_21 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              break;
            case (MR_Integer) 1:
              {
                MR_Word Components_19;
                MR_Word Var_138;
                MR_Word Var_141;
                MR_Word Var_142;
                MR_Word Var_145;
                MR_Word Var_146;

                Var_142 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
                {
                  Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (Var_142));
                }
                {
                  Var_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_138, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Var_138, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
                  MR_hl_field(MR_mktag(3), Var_138, 2) = ((MR_Box) (Var_141));
                  MR_hl_field(MR_mktag(3), Var_138, 3) = ((MR_Box) ((MR_String) "\t\tMR_commit_cut();\n"));
                }
                {
                  Components_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Components_19, 0) = ((MR_Box) (Var_138));
                  MR_hl_field(MR_mktag(1), Components_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_146, 0) = ((MR_Box) ((MR_Unsigned) 27U));
                  MR_hl_field(MR_mktag(3), Var_146, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_146, 2) = ((MR_Box) (Components_19));
                  MR_hl_field(MR_mktag(3), Var_146, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Var_146, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_146, 5) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_146, 6) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_146, 7) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_146, 8) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_146, 9) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
                }
                {
                  Var_145 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_145, 0) = ((MR_Box) (Var_146));
                  MR_hl_field(MR_mktag(0), Var_145, 1) = ((MR_Box) ((MR_String) "commit for temp frame hijack"));
                }
                CutCode_21 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_145)));
              }
              break;
          }
          SuccessUndoCode_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaxfrCode_18, CutCode_21);
          FailureUndoCode_23 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaxfrCode_18, CutCode_21);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word RedoipSlot_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HijackInfo_13, (MR_Integer) 0))));
          MR_Word Var_90;
          MR_Word Var_97;
          MR_Word Var_98;
          MR_Word Var_99;
          MR_Word Var_103;

          {
            Var_103 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (RedoipSlot_33));
          }
          {
            Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[30])));
            MR_hl_field(MR_mktag(3), Var_99, 2) = ((MR_Box) (Var_103));
          }
          {
            Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (Var_99));
            MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) ((MR_String) "restore redoip for half commit hijack"));
          }
          {
            Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
            MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[20]));
            MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_97));
          }
          SuccessUndoCode_22 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_90);
          FailureUndoCode_23 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_98)));
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word RedofrSlot_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HijackInfo_13, (MR_Integer) 1))));
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_62;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_70;
          MR_Word MaxfrSlot_178 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HijackInfo_13, (MR_Integer) 2))));
          MR_Word RedoipSlot_179 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HijackInfo_13, (MR_Integer) 0))));

          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (MaxfrSlot_178));
          }
          {
            Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) ((MR_String) "restore maxfr for full commit hijack"));
          }
          {
            Var_62 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (RedoipSlot_179));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[30])));
            MR_hl_field(MR_mktag(3), Var_58, 2) = ((MR_Box) (Var_62));
          }
          {
            Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) ((MR_String) "restore redoip for full commit hijack"));
          }
          {
            Var_70 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (RedofrSlot_34));
          }
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[31])));
            MR_hl_field(MR_mktag(3), Var_66, 2) = ((MR_Box) (Var_70));
          }
          {
            Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) ((MR_String) "restore redofr for full commit hijack"));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
            MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
            MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_64));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_56));
          }
          SuccessUndoCode_22 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_52);
          FailureUndoCode_23 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_56);
        }
        break;
    }
    ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_51_51, &AfterCommit_35);
    ll_backend__code_loc_dep__generate_resume_point_6_p_0(ResumePoint_12, &ResumePointCode_36, STATE_VARIABLE_CI_0_47, &STATE_VARIABLE_CI_156_156, STATE_VARIABLE_CLD_51_51, &STATE_VARIABLE_CLD_157_157);
    ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_37, STATE_VARIABLE_CI_156_156, &STATE_VARIABLE_CI_158_158, STATE_VARIABLE_CLD_157_157);
    ll_backend__code_loc_dep__reset_to_position_3_p_0(AfterCommit_35, STATE_VARIABLE_CI_158_158, &STATE_VARIABLE_CLD_159_159);
    ll_backend__code_loc_dep__maybe_restore_trail_info_7_p_0(MaybeTrailSlots_14, &CommitTrailCode_38, &RestoreTrailCode_39, STATE_VARIABLE_CI_158_158, &STATE_VARIABLE_CI_160_160, STATE_VARIABLE_CLD_159_159, &STATE_VARIABLE_CLD_161_161);
    ll_backend__code_loc_dep__maybe_restore_region_commit_frame_7_p_0(MaybeRegionCommitFrameInfo_15, &SuccessRegionCode_40, &FailureRegionCode_41, STATE_VARIABLE_CI_160_160, &STATE_VARIABLE_CI_162_162, STATE_VARIABLE_CLD_161_161, STATE_VARIABLE_CLD_50);
    ll_backend__code_info__get_next_label_3_p_0(&SuccLabel_42, STATE_VARIABLE_CI_162_162, STATE_VARIABLE_CI_48);
    {
      Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (SuccLabel_42));
    }
    {
      Var_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_166, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_166, 1) = ((MR_Box) (Var_167));
    }
    {
      Var_165 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_165, 0) = ((MR_Box) (Var_166));
      MR_hl_field(MR_mktag(0), Var_165, 1) = ((MR_Box) ((MR_String) "Jump to success continuation"));
    }
    GotoSuccLabel_43 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_165)));
    {
      Var_170 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_170, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_170, 1) = ((MR_Box) (SuccLabel_42));
    }
    {
      Var_169 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_169, 0) = ((MR_Box) (Var_170));
      MR_hl_field(MR_mktag(0), Var_169, 1) = ((MR_Box) ((MR_String) "Success continuation"));
    }
    SuccLabelCode_44 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_169)));
    Var_172 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CommitTrailCode_38, SuccessRegionCode_40);
    SuccessCode_45 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SuccessUndoCode_22, Var_172);
    Var_175 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailureRegionCode_41, FailCode_37);
    Var_174 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreTrailCode_39, Var_175);
    Var_173 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailureUndoCode_23, Var_174);
    FailureCode_46 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ResumePointCode_36, Var_173);
    Var_177 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailureCode_46, SuccLabelCode_44);
    Var_176 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), GotoSuccLabel_43, Var_177);
    *Code_8 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SuccessCode_45, Var_176);
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__maybe_restore_trail_info_7_p_0(
  MR_Word MaybeTrailSlots_8,
  MR_Word * CommitCode_9,
  MR_Word * RestoreCode_10,
  MR_Word STATE_VARIABLE_CI_0_15,
  MR_Word * STATE_VARIABLE_CI_16,
  MR_Word STATE_VARIABLE_CLD_0_17,
  MR_Word * STATE_VARIABLE_CLD_18)
{
  if ((MaybeTrailSlots_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *CommitCode_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *RestoreCode_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CI_16 = STATE_VARIABLE_CI_0_15;
    *STATE_VARIABLE_CLD_18 = STATE_VARIABLE_CLD_0_17;
  }
  else
  {
    MR_Word CounterSlot_13;
    MR_Word TrailPtrSlot_14;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTrailSlots_8, (MR_Integer) 0))));
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word STATE_VARIABLE_CI_44_44;
    MR_Word STATE_VARIABLE_CLD_45_45;

    CounterSlot_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
    TrailPtrSlot_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1))));
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (TrailPtrSlot_14));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(3), Var_22, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) ((MR_String) "discard trail entries and restore trail ptr"));
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (CounterSlot_13));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 23U));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) ((MR_String) "restore ticket counter (but not high water mark)"));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_26));
    }
    *CommitCode_9 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_20);
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(3), Var_34, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) ((MR_String) "apply trail entries and restore trail ptr"));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_1[27])));
    }
    *RestoreCode_10 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_32);
    ll_backend__code_loc_dep__release_temp_slot_6_p_0(CounterSlot_13, (MR_Integer) 1, STATE_VARIABLE_CI_0_15, &STATE_VARIABLE_CI_44_44, STATE_VARIABLE_CLD_0_17, &STATE_VARIABLE_CLD_45_45);
    ll_backend__code_loc_dep__release_temp_slot_6_p_0(TrailPtrSlot_14, (MR_Integer) 1, STATE_VARIABLE_CI_44_44, STATE_VARIABLE_CI_16, STATE_VARIABLE_CLD_45_45, STATE_VARIABLE_CLD_18);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__generate_resume_point_6_p_0(
  MR_Word ResumePoint_7,
  MR_Word * Code_8,
  MR_Word STATE_VARIABLE_CI_0_21,
  MR_Word * STATE_VARIABLE_CI_22,
  MR_Word STATE_VARIABLE_CLD_0_23,
  MR_Word * STATE_VARIABLE_CLD_24)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) ResumePoint_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Map1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ResumePoint_7, (MR_Integer) 0))));
          MR_Word Addr1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ResumePoint_7, (MR_Integer) 1))));
          MR_Word Label1_13;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Label0_92;

          succeeded = ((MR_tag((MR_Word) Addr1_12)) == (MR_Integer) 1);
          if (succeeded)
          {
            Label0_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Addr1_12, (MR_Integer) 0))));
            Label1_13 = Label0_92;
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_loc_dep.extract_label_from_code_addr\'/2", (MR_String) "non-label");
              return;
            }
          }
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (Label1_13));
          }
          {
            Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) ((MR_String) "orig only failure continuation"));
          }
          *Code_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_52)));
          ll_backend__code_loc_dep__set_var_locations_3_p_0(Map1_11, STATE_VARIABLE_CLD_0_23, STATE_VARIABLE_CLD_24);
          *STATE_VARIABLE_CI_22 = STATE_VARIABLE_CI_0_21;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Map1_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint_7, (MR_Integer) 0))));
          MR_Word Addr1_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint_7, (MR_Integer) 1))));
          MR_Word Label1_58;

          ll_backend__code_loc_dep__extract_label_from_code_addr_2_p_0(Addr1_57, &Label1_58);
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (Label1_58));
          }
          {
            Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Var_48));
            MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) ((MR_String) "stack only failure continuation"));
          }
          *Code_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_47)));
          ll_backend__code_loc_dep__set_var_locations_3_p_0(Map1_56, STATE_VARIABLE_CLD_0_23, STATE_VARIABLE_CLD_24);
          ll_backend__code_loc_dep__maybe_generate_resume_layout_5_p_0(Label1_58, Map1_56, STATE_VARIABLE_CI_0_21, STATE_VARIABLE_CI_22, *STATE_VARIABLE_CLD_24);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_25;
          MR_Word Var_26;
          MR_Word STATE_VARIABLE_CLD_28_28;
          MR_Word STATE_VARIABLE_CLD_29_29;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_35;
          MR_Word Map1_62 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResumePoint_7, (MR_Integer) 0))));
          MR_Word Addr1_63 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResumePoint_7, (MR_Integer) 1))));
          MR_Word Label1_64;
          MR_Word Map2_65 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResumePoint_7, (MR_Integer) 2))));
          MR_Word Addr2_66 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResumePoint_7, (MR_Integer) 3))));
          MR_Word Label2_67;
          MR_Word Label1Code_68;
          MR_Word AssocList2_69;
          MR_Word PlaceCode_70;
          MR_Word Label2Code_71;
          MR_Word Label0_82;
          MR_Word Label0_87;

          succeeded = ((MR_tag((MR_Word) Addr1_63)) == (MR_Integer) 1);
          if (succeeded)
          {
            Label0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Addr1_63, (MR_Integer) 0))));
            Label1_64 = Label0_82;
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_loc_dep.extract_label_from_code_addr\'/2", (MR_String) "non-label");
              return;
            }
          }
          succeeded = ((MR_tag((MR_Word) Addr2_66)) == (MR_Integer) 1);
          if (succeeded)
          {
            Label0_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Addr2_66, (MR_Integer) 0))));
            Label2_67 = Label0_87;
          }
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_loc_dep.extract_label_from_code_addr\'/2", (MR_String) "non-label");
              return;
            }
          }
          {
            Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (Label1_64));
          }
          {
            Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) ((MR_String) "orig failure continuation before stack"));
          }
          Label1Code_68 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_25)));
          ll_backend__code_loc_dep__set_var_locations_3_p_0(Map1_62, STATE_VARIABLE_CLD_0_23, &STATE_VARIABLE_CLD_28_28);
          mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), Map2_65, &AssocList2_69);
          ll_backend__code_loc_dep__place_resume_vars_5_p_0(AssocList2_69, &PlaceCode_70, STATE_VARIABLE_CI_0_21, STATE_VARIABLE_CLD_28_28, &STATE_VARIABLE_CLD_29_29);
          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (Label2_67));
          }
          {
            Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Var_31));
            MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) ((MR_String) "stack failure continuation after orig"));
          }
          Label2Code_71 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_30)));
          ll_backend__code_loc_dep__set_var_locations_3_p_0(Map2_65, STATE_VARIABLE_CLD_29_29, STATE_VARIABLE_CLD_24);
          ll_backend__code_loc_dep__maybe_generate_resume_layout_5_p_0(Label2_67, Map2_65, STATE_VARIABLE_CI_0_21, STATE_VARIABLE_CI_22, *STATE_VARIABLE_CLD_24);
          Var_35 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PlaceCode_70, Label2Code_71);
          *Code_8 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Label1Code_68, Var_35);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Map2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ResumePoint_7, (MR_Integer) 2))));
          MR_Word Addr2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ResumePoint_7, (MR_Integer) 3))));
          MR_Word Label2_16;
          MR_Word Label1Code_17;
          MR_Word AssocList2_18;
          MR_Word PlaceCode_19;
          MR_Word Label2Code_20;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word STATE_VARIABLE_CLD_39_39;
          MR_Word STATE_VARIABLE_CLD_41_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_46;
          MR_Word Map1_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ResumePoint_7, (MR_Integer) 0))));
          MR_Word Addr1_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ResumePoint_7, (MR_Integer) 1))));
          MR_Word Label1_61;

          ll_backend__code_loc_dep__extract_label_from_code_addr_2_p_0(Addr1_60, &Label1_61);
          ll_backend__code_loc_dep__extract_label_from_code_addr_2_p_0(Addr2_15, &Label2_16);
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (Label1_61));
          }
          {
            Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Var_37));
            MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) ((MR_String) "stack failure continuation before orig"));
          }
          Label1Code_17 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_36)));
          ll_backend__code_loc_dep__set_var_locations_3_p_0(Map1_59, STATE_VARIABLE_CLD_0_23, &STATE_VARIABLE_CLD_39_39);
          ll_backend__code_loc_dep__maybe_generate_resume_layout_5_p_0(Label1_61, Map1_59, STATE_VARIABLE_CI_0_21, STATE_VARIABLE_CI_22, STATE_VARIABLE_CLD_39_39);
          mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), Map2_14, &AssocList2_18);
          ll_backend__code_loc_dep__place_resume_vars_5_p_0(AssocList2_18, &PlaceCode_19, *STATE_VARIABLE_CI_22, STATE_VARIABLE_CLD_39_39, &STATE_VARIABLE_CLD_41_41);
          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (Label2_16));
          }
          {
            Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Var_43));
            MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) ((MR_String) "orig failure continuation after stack"));
          }
          Label2Code_20 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_42)));
          ll_backend__code_loc_dep__set_var_locations_3_p_0(Map2_14, STATE_VARIABLE_CLD_41_41, STATE_VARIABLE_CLD_24);
          Var_46 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PlaceCode_19, Label2Code_20);
          *Code_8 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Label1Code_17, Var_46);
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__maybe_generate_resume_layout_5_p_0(
  MR_Word Label_6,
  MR_Word ResumeMap_7,
  MR_Word STATE_VARIABLE_CI_0_17,
  MR_Word * STATE_VARIABLE_CI_18,
  MR_Word CLD_9)
{
  {
    MR_Word Globals_10;
    MR_Word AgcStackLayout_11;

    ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_17, &Globals_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 290, &AgcStackLayout_11);
    switch (AgcStackLayout_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_CI_18 = STATE_VARIABLE_CI_0_17;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Temps_12;
          MR_Word InstMap_13;
          MR_Word ProcInfo_14;
          MR_Word ModuleInfo_15;
          MR_Word Layout_16;
          MR_Word TempsInUse_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_9, (MR_Integer) 4))));
          MR_Word TempContentMap_25;
          MR_Word TempsInUseContentMap_26;

          ll_backend__code_info__get_temp_content_map_2_p_0(STATE_VARIABLE_CI_0_17, &TempContentMap_25);
          mercury__map__select_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0), TempContentMap_25, TempsInUse_24, &TempsInUseContentMap_26);
          mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0), TempsInUseContentMap_26, &Temps_12);
          InstMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_9, (MR_Integer) 1))));
          ll_backend__code_info__get_proc_info_2_p_0(STATE_VARIABLE_CI_0_17, &ProcInfo_14);
          ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_17, &ModuleInfo_15);
          ll_backend__continuation_info__generate_resume_layout_6_p_0(ResumeMap_7, Temps_12, InstMap_13, ProcInfo_14, ModuleInfo_15, &Layout_16);
          ll_backend__code_info__add_resume_layout_for_label_4_p_0(Label_6, Layout_16, STATE_VARIABLE_CI_0_17, STATE_VARIABLE_CI_18);
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__set_var_locations_3_p_0(
  MR_Word Map_4,
  MR_Word STATE_VARIABLE_CLD_0_10,
  MR_Word * STATE_VARIABLE_CLD_11)
{
  {
    MR_Word LvalList0_6;
    MR_Word LvalList_7;
    MR_Word VarLocnInfo0_8;
    MR_Word VarLocnInfo_9;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Integer Var_33;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), Map_4, &LvalList0_6);
    ll_backend__code_loc_dep__flatten_varlval_list_2_p_0(LvalList0_6, &LvalList_7);
    VarLocnInfo0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 3))));
    ll_backend__var_locn__reinit_var_locn_state_3_p_0(LvalList_7, VarLocnInfo0_8, &VarLocnInfo_9);
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 0))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 1))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 2))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 4))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 5))));
    Var_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_33));
    }
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__flatten_varlval_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word V_3;
    MR_Word Rvals_4;
    MR_Word Rest0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Rest_7;
    MR_Word RvalList_8;
    MR_Word Rest1_9;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    V_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
    Rvals_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1))));
    ll_backend__code_loc_dep__flatten_varlval_list_2_p_0(Rest0_5, &Rest_7);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Rvals_4, &RvalList_8);
    ll_backend__code_loc_dep__flatten_varlval_list_2_3_p_0(RvalList_8, V_3, &Rest1_9);
    mercury__list__append_3_p_1((MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[0]), Rest1_9, Rest_7, HeadVar__2_2);
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__flatten_varlval_list_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word R_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Rs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Rest_8;
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (HeadVar__2_2));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (R_5));
    }
    ll_backend__code_loc_dep__flatten_varlval_list_2_3_p_0(Rs_6, HeadVar__2_2, &Rest_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Rest_8));
    }
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__place_resume_vars_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_CLD_0_4,
  MR_Word * STATE_VARIABLE_CLD_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CLD_5 = STATE_VARIABLE_CLD_0_4;
  }
  else
  {
    MR_Word Var_10;
    MR_Word TargetSet_11;
    MR_Word Rest_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Targets_16;
    MR_Word FirstCode_17;
    MR_Word RestCode_18;
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_CLD_22_22;

    Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0))));
    TargetSet_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1))));
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), TargetSet_11, &Targets_16);
    ll_backend__code_loc_dep__place_resume_var_6_p_0(Var_10, Targets_16, &FirstCode_17, HeadVar__3_3, STATE_VARIABLE_CLD_0_4, &STATE_VARIABLE_CLD_22_22);
    ll_backend__code_loc_dep__place_resume_vars_5_p_0(Rest_12, &RestCode_18, HeadVar__3_3, STATE_VARIABLE_CLD_22_22, STATE_VARIABLE_CLD_5);
    *HeadVar__2_2 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FirstCode_17, RestCode_18);
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__place_resume_var_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_CLD_0_5,
  MR_Word * STATE_VARIABLE_CLD_6)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CLD_6 = STATE_VARIABLE_CLD_0_5;
  }
  else
  {
    MR_Word Target_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Targets_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word FirstCode_18;
    MR_Word RestCode_19;
    MR_Word STATE_VARIABLE_CLD_22_22;
    MR_Word ModuleInfo_33;
    MR_Word VarLocnInfo0_34;
    MR_Word VarLocnInfo_35;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Integer Var_55;

    ll_backend__code_info__get_module_info_2_p_0(HeadVar__4_4, &ModuleInfo_33);
    VarLocnInfo0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_5, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_place_var_6_p_0(ModuleInfo_33, HeadVar__1_1, Target_13, &FirstCode_18, VarLocnInfo0_34, &VarLocnInfo_35);
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_5, (MR_Integer) 0))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_5, (MR_Integer) 1))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_5, (MR_Integer) 2))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_5, (MR_Integer) 4))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_5, (MR_Integer) 5))));
    Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_5, (MR_Integer) 6))));
    {
      STATE_VARIABLE_CLD_22_22 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_22_22, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_22_22, 1) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_22_22, 2) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_22_22, 3) = ((MR_Box) (VarLocnInfo_35));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_22_22, 4) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_22_22, 5) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_22_22, 6) = ((MR_Box) (Var_55));
    }
    ll_backend__code_loc_dep__place_resume_var_6_p_0(HeadVar__1_1, Targets_14, &RestCode_19, HeadVar__4_4, STATE_VARIABLE_CLD_22_22, STATE_VARIABLE_CLD_6);
    *HeadVar__3_3 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FirstCode_18, RestCode_19);
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__extract_label_from_code_addr_2_p_0(
  MR_Word CodeAddr_3,
  MR_Word * Label_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) CodeAddr_3)) == (MR_Integer) 1);
    MR_Word Label0_5;

    if (succeeded)
    {
      Label0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CodeAddr_3, (MR_Integer) 0))));
      *Label_4 = Label0_5;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_loc_dep.extract_label_from_code_addr\'/2", (MR_String) "non-label");
        return;
      }
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__generate_failure_4_p_0(
  MR_Word * Code_5,
  MR_Word STATE_VARIABLE_CI_0_24,
  MR_Word * STATE_VARIABLE_CI_25,
  MR_Word STATE_VARIABLE_CLD_0_26)
{
  {
    MR_bool succeeded;
    MR_Word FailInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_26, (MR_Integer) 5))));
    MR_Word ResumePoints_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo_8, (MR_Integer) 0))));
    MR_Word ResumeKnown_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo_8, (MR_Integer) 1))));

    if ((ResumeKnown_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Code_5 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[46])));
    }
    else
    {
      MR_Word TopResumePoint_15;
      MR_Word FailureAddress_17;
      MR_Word PlaceCode_18;
      MR_Word BranchCode_23;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Box conv0_TopResumePoint_15;
      MR_Word FailureAddress0_16;

      mercury__stack__det_top_2_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0), ResumePoints_9, &conv0_TopResumePoint_15);
      TopResumePoint_15 = ((MR_Word) (conv0_TopResumePoint_15));
      succeeded = ll_backend__code_loc_dep__pick_matching_resume_addr_3_p_0(STATE_VARIABLE_CLD_0_26, TopResumePoint_15, &FailureAddress0_16);
      if (succeeded)
      {
        FailureAddress_17 = FailureAddress0_16;
        PlaceCode_18 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      }
      else
      {
        MR_Word Map_19;
        MR_Word AssocList_20;
        MR_Word Var_21;
        MR_Word _AfterPlaceCLD_22;

        switch (MR_tag((MR_Word) TopResumePoint_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Map_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TopResumePoint_15, (MR_Integer) 0))));
              FailureAddress_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TopResumePoint_15, (MR_Integer) 1))));
            }
            break;
          case (MR_Integer) 1:
            {
              Map_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TopResumePoint_15, (MR_Integer) 0))));
              FailureAddress_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TopResumePoint_15, (MR_Integer) 1))));
            }
            break;
          case (MR_Integer) 2:
            {
              Map_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TopResumePoint_15, (MR_Integer) 0))));
              FailureAddress_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TopResumePoint_15, (MR_Integer) 1))));
            }
            break;
          case (MR_Integer) 3:
            {
              Map_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TopResumePoint_15, (MR_Integer) 0))));
              FailureAddress_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TopResumePoint_15, (MR_Integer) 1))));
            }
            break;
        }
        mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), Map_19, &AssocList_20);
        ll_backend__code_loc_dep__pick_and_place_vars_6_p_0(AssocList_20, &Var_21, &PlaceCode_18, STATE_VARIABLE_CI_0_24, STATE_VARIABLE_CLD_0_26, &_AfterPlaceCLD_22);
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (FailureAddress_17));
      }
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) ((MR_String) "fail"));
      }
      BranchCode_23 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_31)));
      *Code_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PlaceCode_18, BranchCode_23);
    }
    *STATE_VARIABLE_CI_25 = STATE_VARIABLE_CI_0_24;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__pick_and_place_vars_6_p_0(
  MR_Word VarLocSets_7,
  MR_Word * LiveLocs_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_14,
  MR_Word * STATE_VARIABLE_CLD_15)
{
  {
    MR_Word VarLocs_12;
    MR_Word Locs_13;
    MR_Word ModuleInfo_25;
    MR_Word VarLocnInfo0_26;
    MR_Word VarLocnInfo_27;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Integer Var_47;

    ll_backend__code_loc_dep__pick_var_places_2_p_0(VarLocSets_7, &VarLocs_12);
    mercury__assoc_list__values_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), VarLocs_12, &Locs_13);
    mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Locs_13, LiveLocs_8);
    ll_backend__code_info__get_module_info_2_p_0(CI_10, &ModuleInfo_25);
    VarLocnInfo0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_14, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_place_vars_5_p_0(ModuleInfo_25, VarLocs_12, Code_9, VarLocnInfo0_26, &VarLocnInfo_27);
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_14, (MR_Integer) 0))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_14, (MR_Integer) 1))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_14, (MR_Integer) 2))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_14, (MR_Integer) 4))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_14, (MR_Integer) 5))));
    Var_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_14, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_27));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_47));
    }
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__pick_var_places_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_3;
      MR_Word LvalSet_4;
      MR_Word VarLvalSets_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word VarLvals0_7;
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Lval_9;
      MR_Word LvalList_8;

      Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))));
      LvalSet_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
      ll_backend__code_loc_dep__pick_var_places_2_p_0(VarLvalSets_5, &VarLvals0_7);
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), LvalSet_4, &LvalList_8);
      succeeded = (LvalList_8 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Lval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LvalList_8, (MR_Integer) 0))));
        {
          MR_Word Var_12;

          {
            Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (Var_3));
            MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Lval_9));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VarLvals0_7));
          }
        }
      }
      else
        *HeadVar__2_2 = VarLvals0_7;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__pick_matching_resume_addr_3_p_0(
  MR_Word CLD_4,
  MR_Word ResumeMaps_5,
  MR_Word * Addr_6)
{
  {
    MR_bool succeeded;
    MR_Word CurLocs_7;
    MR_Word VarLocnInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_4, (MR_Integer) 3))));

    ll_backend__var_locn__var_locn_get_var_locations_2_p_0(VarLocnInfo_22, &CurLocs_7);
    switch (MR_tag((MR_Word) ResumeMaps_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Map1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ResumeMaps_5, (MR_Integer) 0))));
          MR_Word KeyList_48;
          MR_Word Keys_49;
          MR_Word Locations_50;
          MR_Word List_51;

          *Addr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ResumeMaps_5, (MR_Integer) 1))));
          mercury__map__keys_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), Map1_8, &KeyList_48);
          mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), KeyList_48, &Keys_49);
          mercury__map__select_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), CurLocs_7, Keys_49, &Locations_50);
          mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), Locations_50, &List_51);
          succeeded = ll_backend__code_loc_dep__all_vars_match_resume_map_2_p_0(Map1_8, List_51);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Map1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumeMaps_5, (MR_Integer) 0))));
          MR_Word KeyList_72;
          MR_Word Keys_73;
          MR_Word Locations_74;
          MR_Word List_75;

          *Addr_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumeMaps_5, (MR_Integer) 1))));
          mercury__map__keys_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), Map1_12, &KeyList_72);
          mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), KeyList_72, &Keys_73);
          mercury__map__select_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), CurLocs_7, Keys_73, &Locations_74);
          mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), Locations_74, &List_75);
          succeeded = ll_backend__code_loc_dep__all_vars_match_resume_map_2_p_0(Map1_12, List_75);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Map2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResumeMaps_5, (MR_Integer) 2))));
          MR_Word Addr2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResumeMaps_5, (MR_Integer) 3))));
          MR_Word Map1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResumeMaps_5, (MR_Integer) 0))));
          MR_Word Addr1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResumeMaps_5, (MR_Integer) 1))));
          MR_Word KeyList_32;
          MR_Word Keys_33;
          MR_Word Locations_34;
          MR_Word List_35;

          mercury__map__keys_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), Map1_14, &KeyList_32);
          mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), KeyList_32, &Keys_33);
          mercury__map__select_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), CurLocs_7, Keys_33, &Locations_34);
          mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), Locations_34, &List_35);
          succeeded = ll_backend__code_loc_dep__all_vars_match_resume_map_2_p_0(Map1_14, List_35);
          if (succeeded)
          {
            *Addr_6 = Addr1_15;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word KeyList_40;
            MR_Word Keys_41;
            MR_Word Locations_42;
            MR_Word List_43;

            mercury__map__keys_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), Map2_10, &KeyList_40);
            mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), KeyList_40, &Keys_41);
            mercury__map__select_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), CurLocs_7, Keys_41, &Locations_42);
            mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), Locations_42, &List_43);
            succeeded = ll_backend__code_loc_dep__all_vars_match_resume_map_2_p_0(Map2_10, List_43);
            if (succeeded)
            {
              *Addr_6 = Addr2_11;
              succeeded = MR_TRUE;
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Map1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ResumeMaps_5, (MR_Integer) 0))));
          MR_Word Addr1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ResumeMaps_5, (MR_Integer) 1))));
          MR_Word Map2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ResumeMaps_5, (MR_Integer) 2))));
          MR_Word Addr2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ResumeMaps_5, (MR_Integer) 3))));
          MR_Word KeyList_56;
          MR_Word Keys_57;
          MR_Word Locations_58;
          MR_Word List_59;

          mercury__map__keys_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), Map1_16, &KeyList_56);
          mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), KeyList_56, &Keys_57);
          mercury__map__select_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), CurLocs_7, Keys_57, &Locations_58);
          mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), Locations_58, &List_59);
          succeeded = ll_backend__code_loc_dep__all_vars_match_resume_map_2_p_0(Map1_16, List_59);
          if (succeeded)
          {
            *Addr_6 = Addr1_17;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word KeyList_64;
            MR_Word Keys_65;
            MR_Word Locations_66;
            MR_Word List_67;

            mercury__map__keys_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), Map2_18, &KeyList_64);
            mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), KeyList_64, &Keys_65);
            mercury__map__select_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), CurLocs_7, Keys_65, &Locations_66);
            mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), Locations_66, &List_67);
            succeeded = ll_backend__code_loc_dep__all_vars_match_resume_map_2_p_0(Map2_18, List_67);
            if (succeeded)
            {
              *Addr_6 = Addr2_19;
              succeeded = MR_TRUE;
            }
          }
        }
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__all_vars_match_resume_map_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_12_12;
      MR_Word Var_5;
      MR_Word Actual_6;
      MR_Word VarsActuals_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Lvals_8;
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box conv0_Lvals_8;
      MR_Word next_value_of_HeadVar__2_2;

      Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
      Actual_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_5)), &conv0_Lvals_8);
      if (succeeded)
      {
        Lvals_8 = ((MR_Word) (conv0_Lvals_8));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        TypeCtorInfo_12_12 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        succeeded = mercury__set__subset_2_p_0(TypeCtorInfo_12_12, Lvals_8, Actual_6);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = VarsActuals_7;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__prepare_for_semi_commit_10_p_0(
  MR_Word AddTrailOps_11,
  MR_Word AddRegionOps_12,
  MR_Word ForwardLiveVarsBeforeGoal_13,
  MR_Word CommitGoalInfo_14,
  MR_Word * SemiCommitInfo_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_48,
  MR_Word * STATE_VARIABLE_CI_49,
  MR_Word STATE_VARIABLE_CLD_0_50,
  MR_Word * STATE_VARIABLE_CLD_51)
{
  ll_backend__code_loc_dep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_112_97_114_101_95_102_111_114_95_115_101_109_105_95_99_111_109_109_105_116_95_95_91_51_93_95_48_10_p_0(AddTrailOps_11, AddRegionOps_12, CommitGoalInfo_14, SemiCommitInfo_15, Code_16, STATE_VARIABLE_CI_0_48, STATE_VARIABLE_CI_49, STATE_VARIABLE_CLD_0_50, STATE_VARIABLE_CLD_51);
}

void MR_CALL 
ll_backend__code_loc_dep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_112_97_114_101_95_102_111_114_95_115_101_109_105_95_99_111_109_109_105_116_95_95_91_51_93_95_48_10_p_0(
  MR_Word AddTrailOps_11,
  MR_Word AddRegionOps_12,
  MR_Word CommitGoalInfo_14,
  MR_Word * SemiCommitInfo_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_48,
  MR_Word * STATE_VARIABLE_CI_49,
  MR_Word STATE_VARIABLE_CLD_0_50,
  MR_Word * STATE_VARIABLE_CLD_51)
{
  {
    MR_bool succeeded;
    MR_Word FailInfo0_19;
    MR_Word ResumePoints0_20;
    MR_Word ResumeKnown_21;
    MR_Word CurfrMaxfr_22;
    MR_Word CondEnv_23;
    MR_Word Allow_24;
    MR_Word TopResumePoint_25;
    MR_Word NewResumePoint_26;
    MR_Word ResumePoints_27;
    MR_Word FailInfo_28;
    MR_Word StackLabel_30;
    MR_Word StackLabelConst_31;
    MR_Word HijackInfo_37;
    MR_Word HijackCode_41;
    MR_Word MaybeTrailSlots_44;
    MR_Word SaveTrailCode_45;
    MR_Word MaybeRegionCommitFrameInfo_46;
    MR_Word SaveRegionCommitFrameCode_47;
    MR_Word STATE_VARIABLE_CI_52_52;
    MR_Word STATE_VARIABLE_CLD_55_55;
    MR_Word Var_56;
    MR_Word STATE_VARIABLE_CI_66_66;
    MR_Word STATE_VARIABLE_CLD_67_67;
    MR_Word STATE_VARIABLE_CI_189_189;
    MR_Word STATE_VARIABLE_CLD_190_190;
    MR_Word Var_193;
    MR_Unsigned packed_word_0;
    MR_Box conv0_TopResumePoint_25;
    MR_Word Var_29;

    ll_backend__code_loc_dep__get_fail_info_2_p_0(STATE_VARIABLE_CLD_0_50, &FailInfo0_19);
    ResumePoints0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo0_19, (MR_Integer) 0))));
    ResumeKnown_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo0_19, (MR_Integer) 1))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo0_19, (MR_Integer) 2)));
    CurfrMaxfr_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo0_19, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
    CondEnv_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo0_19, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
    Allow_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo0_19, (MR_Integer) 2))) & (MR_Integer) 1);
    mercury__stack__det_top_2_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0), ResumePoints0_20, &conv0_TopResumePoint_25);
    TopResumePoint_25 = ((MR_Word) (conv0_TopResumePoint_25));
    ll_backend__code_loc_dep__clone_resume_point_4_p_0(TopResumePoint_25, &NewResumePoint_26, STATE_VARIABLE_CI_0_48, &STATE_VARIABLE_CI_52_52);
    mercury__stack__push_3_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0), ((MR_Box) (NewResumePoint_26)), ResumePoints0_20, &ResumePoints_27);
    {
      FailInfo_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FailInfo_28, 0) = ((MR_Box) (ResumePoints_27));
      MR_hl_field(MR_mktag(0), FailInfo_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[3])));
      MR_hl_field(MR_mktag(0), FailInfo_28, 2) = (MR_Box) (packed_word_0);
    }
    ll_backend__code_loc_dep__set_fail_info_3_p_0(FailInfo_28, STATE_VARIABLE_CLD_0_50, &STATE_VARIABLE_CLD_55_55);
    ll_backend__code_loc_dep__pick_stack_resume_point_3_p_0(NewResumePoint_26, &Var_29, &StackLabel_30);
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (StackLabel_30));
    }
    {
      StackLabelConst_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), StackLabelConst_31, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), StackLabelConst_31, 1) = ((MR_Box) (Var_56));
    }
    succeeded = (Allow_24 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (CondEnv_23 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word MaxfrSlot_32;
      MR_Word MaxfrCode_33;
      MR_Word TempFrameCode_34;
      MR_Word Globals_35;
      MR_Word UseMinimalModelStackCopyCut_36;
      MR_Word MarkCode_40;
      MR_Word STATE_VARIABLE_CI_59_59;
      MR_Word STATE_VARIABLE_CLD_60_60;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_101;

      ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[1])), (MR_Integer) 1, &MaxfrSlot_32, STATE_VARIABLE_CI_52_52, &STATE_VARIABLE_CI_59_59, STATE_VARIABLE_CLD_55_55, &STATE_VARIABLE_CLD_60_60);
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (MaxfrSlot_32));
      }
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) ((MR_String) "prepare for temp frame commit"));
      }
      MaxfrCode_33 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_62)));
      ll_backend__code_loc_dep__create_temp_frame_7_p_0(StackLabel_30, (MR_String) "prepare for temp frame commit", &TempFrameCode_34, STATE_VARIABLE_CI_59_59, &STATE_VARIABLE_CI_66_66, STATE_VARIABLE_CLD_60_60, &STATE_VARIABLE_CLD_67_67);
      ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_66_66, &Globals_35);
      libs__globals__lookup_bool_option_3_p_0(Globals_35, (MR_Integer) 308, &UseMinimalModelStackCopyCut_36);
      {
        HijackInfo_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HijackInfo_37, 0) = ((MR_Box) (MaxfrSlot_32));
        MR_hl_field(MR_mktag(1), HijackInfo_37, 1) = (MR_Box) ((MR_Unsigned) (UseMinimalModelStackCopyCut_36));
      }
      switch (UseMinimalModelStackCopyCut_36) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MarkCode_40 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          break;
        case (MR_Integer) 1:
          {
            MR_Word Components_38;
            MR_Word Var_69;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_79;
            MR_Word Var_80;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_86;
            MR_Word Var_87;
            MR_Word Var_90;
            MR_Word Var_91;

            Var_73 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
            {
              Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
            }
            {
              Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_69, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
              MR_hl_field(MR_mktag(3), Var_69, 2) = ((MR_Box) (Var_72));
              MR_hl_field(MR_mktag(3), Var_69, 3) = ((MR_Box) ((MR_String) "\t\tMR_save_transient_registers();\n"));
            }
            Var_80 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
            {
              Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
            }
            {
              Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_76, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 1)));
              MR_hl_field(MR_mktag(3), Var_76, 2) = ((MR_Box) (Var_79));
              MR_hl_field(MR_mktag(3), Var_76, 3) = ((MR_Box) ((MR_String) "\t\tMR_commit_mark();\n"));
            }
            Var_87 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
            {
              Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
            }
            {
              Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_83, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (MR_Unsigned) ((MR_Integer) 0)));
              MR_hl_field(MR_mktag(3), Var_83, 2) = ((MR_Box) (Var_86));
              MR_hl_field(MR_mktag(3), Var_83, 3) = ((MR_Box) ((MR_String) "\t\tMR_restore_transient_registers();\n"));
            }
            {
              Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
              MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
              MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_82));
            }
            {
              Components_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Components_38, 0) = ((MR_Box) (Var_69));
              MR_hl_field(MR_mktag(1), Components_38, 1) = ((MR_Box) (Var_75));
            }
            {
              Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_91, 0) = ((MR_Box) ((MR_Unsigned) 27U));
              MR_hl_field(MR_mktag(3), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_91, 2) = ((MR_Box) (Components_38));
              MR_hl_field(MR_mktag(3), Var_91, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_91, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_91, 5) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_91, 6) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_91, 7) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_91, 8) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_91, 9) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
            }
            {
              Var_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (Var_91));
              MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) ((MR_String) ""));
            }
            MarkCode_40 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_90)));
          }
          break;
      }
      Var_101 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TempFrameCode_34, MarkCode_40);
      HijackCode_41 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaxfrCode_33, Var_101);
    }
    else
      switch (CurfrMaxfr_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word RedofrSlot_43;
            MR_Word STATE_VARIABLE_CI_104_104;
            MR_Word STATE_VARIABLE_CLD_105_105;
            MR_Word STATE_VARIABLE_CI_111_111;
            MR_Word STATE_VARIABLE_CLD_112_112;
            MR_Word Var_121;
            MR_Word Var_122;
            MR_Word Var_123;
            MR_Word Var_129;
            MR_Word Var_130;
            MR_Word Var_131;
            MR_Word Var_137;
            MR_Word Var_138;
            MR_Word Var_139;
            MR_Word Var_141;
            MR_Word Var_150;
            MR_Word Var_151;
            MR_Word Var_152;
            MR_Word MaxfrSlot_194;
            MR_Word RedoipSlot_195;

            ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[7])), (MR_Integer) 1, &RedoipSlot_195, STATE_VARIABLE_CI_52_52, &STATE_VARIABLE_CI_104_104, STATE_VARIABLE_CLD_55_55, &STATE_VARIABLE_CLD_105_105);
            ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[8])), (MR_Integer) 1, &RedofrSlot_43, STATE_VARIABLE_CI_104_104, &STATE_VARIABLE_CI_111_111, STATE_VARIABLE_CLD_105_105, &STATE_VARIABLE_CLD_112_112);
            ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[1])), (MR_Integer) 1, &MaxfrSlot_194, STATE_VARIABLE_CI_111_111, &STATE_VARIABLE_CI_66_66, STATE_VARIABLE_CLD_112_112, &STATE_VARIABLE_CLD_67_67);
            {
              HijackInfo_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), HijackInfo_37, 0) = ((MR_Box) (RedoipSlot_195));
              MR_hl_field(MR_mktag(3), HijackInfo_37, 1) = ((MR_Box) (RedofrSlot_43));
              MR_hl_field(MR_mktag(3), HijackInfo_37, 2) = ((MR_Box) (MaxfrSlot_194));
            }
            {
              Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_123, 1) = ((MR_Box) (RedoipSlot_195));
              MR_hl_field(MR_mktag(3), Var_123, 2) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_3[7]));
            }
            {
              Var_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_122, 0) = ((MR_Box) (Var_123));
              MR_hl_field(MR_mktag(0), Var_122, 1) = ((MR_Box) ((MR_String) "prepare for full commit hijack"));
            }
            {
              Var_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_131, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_131, 1) = ((MR_Box) (RedofrSlot_43));
              MR_hl_field(MR_mktag(3), Var_131, 2) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_3[8]));
            }
            {
              Var_130 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) (Var_131));
              MR_hl_field(MR_mktag(0), Var_130, 1) = ((MR_Box) ((MR_String) "prepare for full commit hijack"));
            }
            {
              Var_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_139, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(MR_mktag(3), Var_139, 1) = ((MR_Box) (MaxfrSlot_194));
            }
            {
              Var_138 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_138, 0) = ((MR_Box) (Var_139));
              MR_hl_field(MR_mktag(0), Var_138, 1) = ((MR_Box) ((MR_String) "prepare for full commit hijack"));
            }
            {
              Var_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_152, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[30])));
              MR_hl_field(MR_mktag(3), Var_152, 2) = ((MR_Box) (StackLabelConst_31));
            }
            {
              Var_151 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_151, 0) = ((MR_Box) (Var_152));
              MR_hl_field(MR_mktag(0), Var_151, 1) = ((MR_Box) ((MR_String) "hijack the redoip slot"));
            }
            {
              Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Var_151));
              MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[19]));
              MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (Var_150));
            }
            {
              Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (Var_138));
              MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (Var_141));
            }
            {
              Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Var_130));
              MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_137));
            }
            {
              Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
              MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_129));
            }
            HijackCode_41 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_121);
          }
          break;
        case (MR_Integer) 0:
          if ((ResumeKnown_21 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word RedoipSlot_204;
            MR_Word Var_210;
            MR_Word Var_211;
            MR_Word Var_212;
            MR_Word Var_218;
            MR_Word Var_219;
            MR_Word Var_220;

            ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[9])), (MR_Integer) 1, &RedoipSlot_204, STATE_VARIABLE_CI_52_52, &STATE_VARIABLE_CI_66_66, STATE_VARIABLE_CLD_55_55, &STATE_VARIABLE_CLD_67_67);
            {
              HijackInfo_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), HijackInfo_37, 0) = ((MR_Box) (RedoipSlot_204));
            }
            {
              Var_212 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_212, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_212, 1) = ((MR_Box) (RedoipSlot_204));
              MR_hl_field(MR_mktag(3), Var_212, 2) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_3[9]));
            }
            {
              Var_211 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_211, 0) = ((MR_Box) (Var_212));
              MR_hl_field(MR_mktag(0), Var_211, 1) = ((MR_Box) ((MR_String) "prepare for half commit hijack"));
            }
            {
              Var_220 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_220, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_220, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[32])));
              MR_hl_field(MR_mktag(3), Var_220, 2) = ((MR_Box) (StackLabelConst_31));
            }
            {
              Var_219 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_219, 0) = ((MR_Box) (Var_220));
              MR_hl_field(MR_mktag(0), Var_219, 1) = ((MR_Box) ((MR_String) "hijack the redofr slot"));
            }
            {
              Var_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_218, 0) = ((MR_Box) (Var_219));
              MR_hl_field(MR_mktag(1), Var_218, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_210, 0) = ((MR_Box) (Var_211));
              MR_hl_field(MR_mktag(1), Var_210, 1) = ((MR_Box) (Var_218));
            }
            HijackCode_41 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_210);
          }
          else
          {
            MR_Word Var_227 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ResumeKnown_21, (MR_Integer) 0))) & (MR_Integer) 1);

            switch (Var_227) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_183;
                  MR_Word Var_184;

                  HijackInfo_37 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    Var_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_184, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), Var_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[32])));
                    MR_hl_field(MR_mktag(3), Var_184, 2) = ((MR_Box) (StackLabelConst_31));
                  }
                  {
                    Var_183 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_183, 0) = ((MR_Box) (Var_184));
                    MR_hl_field(MR_mktag(0), Var_183, 1) = ((MR_Box) ((MR_String) "hijack the redofr slot"));
                  }
                  HijackCode_41 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_183)));
                  STATE_VARIABLE_CI_66_66 = STATE_VARIABLE_CI_52_52;
                  STATE_VARIABLE_CLD_67_67 = STATE_VARIABLE_CLD_55_55;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word RedoipSlot_42;
                  MR_Word Var_166;
                  MR_Word Var_167;
                  MR_Word Var_168;
                  MR_Word Var_174;
                  MR_Word Var_175;
                  MR_Word Var_176;

                  ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[9])), (MR_Integer) 1, &RedoipSlot_42, STATE_VARIABLE_CI_52_52, &STATE_VARIABLE_CI_66_66, STATE_VARIABLE_CLD_55_55, &STATE_VARIABLE_CLD_67_67);
                  {
                    HijackInfo_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), HijackInfo_37, 0) = ((MR_Box) (RedoipSlot_42));
                  }
                  {
                    Var_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_168, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), Var_168, 1) = ((MR_Box) (RedoipSlot_42));
                    MR_hl_field(MR_mktag(3), Var_168, 2) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_3[9]));
                  }
                  {
                    Var_167 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_167, 0) = ((MR_Box) (Var_168));
                    MR_hl_field(MR_mktag(0), Var_167, 1) = ((MR_Box) ((MR_String) "prepare for half commit hijack"));
                  }
                  {
                    Var_176 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_176, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), Var_176, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[32])));
                    MR_hl_field(MR_mktag(3), Var_176, 2) = ((MR_Box) (StackLabelConst_31));
                  }
                  {
                    Var_175 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_175, 0) = ((MR_Box) (Var_176));
                    MR_hl_field(MR_mktag(0), Var_175, 1) = ((MR_Box) ((MR_String) "hijack the redofr slot"));
                  }
                  {
                    Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_174, 0) = ((MR_Box) (Var_175));
                    MR_hl_field(MR_mktag(1), Var_174, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (Var_167));
                    MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) (Var_174));
                  }
                  HijackCode_41 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_166);
                }
                break;
            }
          }
          break;
      }
    ll_backend__code_loc_dep__maybe_save_trail_info_7_p_0(AddTrailOps_11, &MaybeTrailSlots_44, &SaveTrailCode_45, STATE_VARIABLE_CI_66_66, &STATE_VARIABLE_CI_189_189, STATE_VARIABLE_CLD_67_67, &STATE_VARIABLE_CLD_190_190);
    ll_backend__code_loc_dep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_115_97_118_101_95_114_101_103_105_111_110_95_99_111_109_109_105_116_95_102_114_97_109_101_95_95_91_50_93_95_48_9_p_0(AddRegionOps_12, CommitGoalInfo_14, &MaybeRegionCommitFrameInfo_46, &SaveRegionCommitFrameCode_47, STATE_VARIABLE_CI_189_189, STATE_VARIABLE_CI_49, STATE_VARIABLE_CLD_190_190, STATE_VARIABLE_CLD_51);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *SemiCommitInfo_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FailInfo0_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NewResumePoint_26));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (HijackInfo_37));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeTrailSlots_44));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MaybeRegionCommitFrameInfo_46));
    }
    Var_193 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveTrailCode_45, SaveRegionCommitFrameCode_47);
    *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HijackCode_41, Var_193);
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__maybe_save_trail_info_7_p_0(
  MR_Word AddTrailOps_8,
  MR_Word * MaybeTrailSlots_9,
  MR_Word * SaveTrailCode_10,
  MR_Word STATE_VARIABLE_CI_0_15,
  MR_Word * STATE_VARIABLE_CI_16,
  MR_Word STATE_VARIABLE_CLD_0_17,
  MR_Word * STATE_VARIABLE_CLD_18)
{
  switch (AddTrailOps_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word CounterSlot_13;
        MR_Word TrailPtrSlot_14;
        MR_Word STATE_VARIABLE_CI_21_21;
        MR_Word STATE_VARIABLE_CLD_22_22;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;

        ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) ((MR_Unsigned) 4U), (MR_Integer) 1, &CounterSlot_13, STATE_VARIABLE_CI_0_15, &STATE_VARIABLE_CI_21_21, STATE_VARIABLE_CLD_0_17, &STATE_VARIABLE_CLD_22_22);
        ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, &TrailPtrSlot_14, STATE_VARIABLE_CI_21_21, STATE_VARIABLE_CI_16, STATE_VARIABLE_CLD_22_22, STATE_VARIABLE_CLD_18);
        {
          Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (CounterSlot_13));
          MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (TrailPtrSlot_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeTrailSlots_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_27));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 22U));
          MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (CounterSlot_13));
        }
        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Var_30));
          MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) ((MR_String) "save the ticket counter"));
        }
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (TrailPtrSlot_14));
        }
        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) ((MR_String) "save the trail pointer"));
        }
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
          MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_32));
        }
        *SaveTrailCode_10 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_28);
      }
      break;
    case (MR_Integer) 1:
      {
        *MaybeTrailSlots_9 = (MR_Word) ((MR_Unsigned) 0U);
        *SaveTrailCode_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_CI_16 = STATE_VARIABLE_CI_0_15;
        *STATE_VARIABLE_CLD_18 = STATE_VARIABLE_CLD_0_17;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__clone_resume_point_4_p_0(
  MR_Word ResumePoint0_5,
  MR_Word * ResumePoint_6,
  MR_Word STATE_VARIABLE_CI_0_21,
  MR_Word * STATE_VARIABLE_CI_22)
{
  switch (MR_tag((MR_Word) ResumePoint0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_loc_dep.clone_resume_point\'/4", (MR_String) "cloning orig_only resume point");
          return;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Map1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint0_5, (MR_Integer) 0))));
        MR_Word Label1_12;
        MR_Word Addr1_13;

        ll_backend__code_info__get_next_label_3_p_0(&Label1_12, STATE_VARIABLE_CI_0_21, STATE_VARIABLE_CI_22);
        {
          Addr1_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Addr1_13, 0) = ((MR_Box) (Label1_12));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ResumePoint_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Map1_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Addr1_13));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word STATE_VARIABLE_CI_23_23;
        MR_Word Map1_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResumePoint0_5, (MR_Integer) 0))));
        MR_Word Label1_34;
        MR_Word Addr1_35;
        MR_Word Map2_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResumePoint0_5, (MR_Integer) 2))));
        MR_Word Label2_37;
        MR_Word Addr2_38;

        ll_backend__code_info__get_next_label_3_p_0(&Label2_37, STATE_VARIABLE_CI_0_21, &STATE_VARIABLE_CI_23_23);
        {
          Addr2_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Addr2_38, 0) = ((MR_Box) (Label2_37));
        }
        ll_backend__code_info__get_next_label_3_p_0(&Label1_34, STATE_VARIABLE_CI_23_23, STATE_VARIABLE_CI_22);
        {
          Addr1_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Addr1_35, 0) = ((MR_Box) (Label1_34));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *ResumePoint_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Map2_36));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Addr2_38));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Map1_33));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Addr1_35));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Map2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ResumePoint0_5, (MR_Integer) 2))));
        MR_Word Label2_17;
        MR_Word Addr2_18;
        MR_Word STATE_VARIABLE_CI_25_25;
        MR_Word Map1_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ResumePoint0_5, (MR_Integer) 0))));
        MR_Word Label1_31;
        MR_Word Addr1_32;

        ll_backend__code_info__get_next_label_3_p_0(&Label1_31, STATE_VARIABLE_CI_0_21, &STATE_VARIABLE_CI_25_25);
        {
          Addr1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Addr1_32, 0) = ((MR_Box) (Label1_31));
        }
        ll_backend__code_info__get_next_label_3_p_0(&Label2_17, STATE_VARIABLE_CI_25_25, STATE_VARIABLE_CI_22);
        {
          Addr2_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Addr2_18, 0) = ((MR_Box) (Label2_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *ResumePoint_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Map1_30));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Addr1_32));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Map2_15));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Addr2_18));
        }
      }
      break;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__generate_det_commit_6_p_0(
  MR_Word DetCommitInfo_7,
  MR_Word * Code_8,
  MR_Word STATE_VARIABLE_CI_0_20,
  MR_Word * STATE_VARIABLE_CI_21,
  MR_Word STATE_VARIABLE_CLD_0_22,
  MR_Word * STATE_VARIABLE_CLD_23)
{
  {
    MR_Word MaybeMaxfrSlot_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetCommitInfo_7, (MR_Integer) 0))));
    MR_Word MaybeTrailSlots_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetCommitInfo_7, (MR_Integer) 1))));
    MR_Word MaybeRegionCommitFrameInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetCommitInfo_7, (MR_Integer) 2))));
    MR_Word RestoreMaxfrCode_15;
    MR_Word CommitTrailCode_16;
    MR_Word SuccessRegionCode_18;
    MR_Word STATE_VARIABLE_CI_34_34;
    MR_Word STATE_VARIABLE_CLD_35_35;
    MR_Word STATE_VARIABLE_CI_36_36;
    MR_Word STATE_VARIABLE_CLD_37_37;
    MR_Word Var_40;
    MR_Word _FailureRegionCode_19;

    if ((MaybeMaxfrSlot_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      RestoreMaxfrCode_15 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[18])));
      STATE_VARIABLE_CI_34_34 = STATE_VARIABLE_CI_0_20;
      STATE_VARIABLE_CLD_35_35 = STATE_VARIABLE_CLD_0_22;
    }
    else
    {
      MR_Word MaxfrSlot_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMaxfrSlot_11, (MR_Integer) 0))));
      MR_Word Var_30;
      MR_Word Var_31;

      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (MaxfrSlot_14));
      }
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) ((MR_String) "restore the value of maxfr - perform commit"));
      }
      RestoreMaxfrCode_15 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_30)));
      ll_backend__code_loc_dep__release_temp_slot_6_p_0(MaxfrSlot_14, (MR_Integer) 1, STATE_VARIABLE_CI_0_20, &STATE_VARIABLE_CI_34_34, STATE_VARIABLE_CLD_0_22, &STATE_VARIABLE_CLD_35_35);
    }
    if ((MaybeTrailSlots_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_17;

      CommitTrailCode_16 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      Var_17 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      STATE_VARIABLE_CI_36_36 = STATE_VARIABLE_CI_34_34;
      STATE_VARIABLE_CLD_37_37 = STATE_VARIABLE_CLD_35_35;
    }
    else
    {
      MR_Word CounterSlot_53;
      MR_Word TrailPtrSlot_54;
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTrailSlots_12, (MR_Integer) 0))));
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word STATE_VARIABLE_CI_44_80;
      MR_Word STATE_VARIABLE_CLD_45_81;
      MR_Word Var_87;

      CounterSlot_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 0))));
      TrailPtrSlot_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 1))));
      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (TrailPtrSlot_54));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 21U));
        MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(3), Var_58, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      }
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) ((MR_String) "discard trail entries and restore trail ptr"));
      }
      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (CounterSlot_53));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) ((MR_Unsigned) 23U));
        MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (Var_65));
      }
      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) ((MR_String) "restore ticket counter (but not high water mark)"));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_62));
      }
      CommitTrailCode_16 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_56);
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) ((MR_Unsigned) 21U));
        MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(3), Var_70, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      {
        Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) ((MR_String) "apply trail entries and restore trail ptr"));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_1[27])));
      }
      Var_87 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_68);
      ll_backend__code_loc_dep__release_temp_slot_6_p_0(CounterSlot_53, (MR_Integer) 1, STATE_VARIABLE_CI_34_34, &STATE_VARIABLE_CI_44_80, STATE_VARIABLE_CLD_35_35, &STATE_VARIABLE_CLD_45_81);
      ll_backend__code_loc_dep__release_temp_slot_6_p_0(TrailPtrSlot_54, (MR_Integer) 1, STATE_VARIABLE_CI_44_80, &STATE_VARIABLE_CI_36_36, STATE_VARIABLE_CLD_45_81, &STATE_VARIABLE_CLD_37_37);
    }
    ll_backend__code_loc_dep__maybe_restore_region_commit_frame_7_p_0(MaybeRegionCommitFrameInfo_13, &SuccessRegionCode_18, &_FailureRegionCode_19, STATE_VARIABLE_CI_36_36, STATE_VARIABLE_CI_21, STATE_VARIABLE_CLD_37_37, STATE_VARIABLE_CLD_23);
    Var_40 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CommitTrailCode_16, SuccessRegionCode_18);
    *Code_8 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), RestoreMaxfrCode_15, Var_40);
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__maybe_restore_region_commit_frame_7_p_0(
  MR_Word MaybeRegionCommitFrameInfo_8,
  MR_Word * SuccessCode_9,
  MR_Word * FailureCode_10,
  MR_Word STATE_VARIABLE_CI_0_16,
  MR_Word * STATE_VARIABLE_CI_17,
  MR_Word STATE_VARIABLE_CLD_0_18,
  MR_Word * STATE_VARIABLE_CLD_19)
{
  if ((MaybeRegionCommitFrameInfo_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *SuccessCode_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *FailureCode_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CI_17 = STATE_VARIABLE_CI_0_16;
    *STATE_VARIABLE_CLD_19 = STATE_VARIABLE_CLD_0_18;
  }
  else
  {
    MR_Word RegionCommitFrameInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRegionCommitFrameInfo_8, (MR_Integer) 0))));
    MR_Word EmbeddedStackFrame_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RegionCommitFrameInfo_13, (MR_Integer) 0))));
    MR_Word StackVars_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RegionCommitFrameInfo_13, (MR_Integer) 1))));
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_25;

    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 19U));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(3), Var_21, 2) = ((MR_Box) (EmbeddedStackFrame_14));
    }
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) ((MR_String) "Destroy removed regions protected by cut away disjunctions"));
    }
    *SuccessCode_9 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_20)));
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 19U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) ((MR_Unsigned) 20U));
      MR_hl_field(MR_mktag(3), Var_25, 2) = ((MR_Box) (EmbeddedStackFrame_14));
    }
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) ((MR_String) "Undo the creation of the commit frame"));
    }
    *FailureCode_10 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_24)));
    ll_backend__code_loc_dep__release_several_temp_slots_6_p_0(StackVars_15, (MR_Integer) 1, STATE_VARIABLE_CI_0_16, STATE_VARIABLE_CI_17, STATE_VARIABLE_CLD_0_18, STATE_VARIABLE_CLD_19);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__release_several_temp_slots_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_CI_0_3,
  MR_Word * STATE_VARIABLE_CI_4,
  MR_Word STATE_VARIABLE_CLD_0_5,
  MR_Word * STATE_VARIABLE_CLD_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CLD_6 = STATE_VARIABLE_CLD_0_5;
      *STATE_VARIABLE_CI_4 = STATE_VARIABLE_CI_0_3;
    }
    else
    {
      MR_Word StackVar_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word StackVars_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_CI_23_23;
      MR_Word STATE_VARIABLE_CLD_24_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CI_0_3;
      MR_Word next_value_of_STATE_VARIABLE_CLD_0_5;

      ll_backend__code_loc_dep__release_temp_slot_6_p_0(StackVar_14, HeadVar__2_2, STATE_VARIABLE_CI_0_3, &STATE_VARIABLE_CI_23_23, STATE_VARIABLE_CLD_0_5, &STATE_VARIABLE_CLD_24_24);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = StackVars_15;
      next_value_of_STATE_VARIABLE_CI_0_3 = STATE_VARIABLE_CI_23_23;
      next_value_of_STATE_VARIABLE_CLD_0_5 = STATE_VARIABLE_CLD_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CI_0_3 = next_value_of_STATE_VARIABLE_CI_0_3;
      STATE_VARIABLE_CLD_0_5 = next_value_of_STATE_VARIABLE_CLD_0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__release_temp_slot_6_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__code_loc_dep__IntroducedFrom__pred__release_temp_slot__3841__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__release_temp_slot_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__code_loc_dep__IntroducedFrom__pred__release_temp_slot__3847__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__release_temp_slot_6_p_0(
  MR_Word StackVar_7,
  MR_Word Persistence_8,
  MR_Word STATE_VARIABLE_CI_0_16,
  MR_Word * STATE_VARIABLE_CI_17,
  MR_Word STATE_VARIABLE_CLD_0_18,
  MR_Word * STATE_VARIABLE_CLD_19)
{
  {
    MR_bool succeeded;
    MR_Word TempsInUse0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_18, (MR_Integer) 4))));
    MR_Word TempsInUse_12;
    MR_Word PersistentTemps0_13;
    MR_Word IsInPersistentTemps0_14;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_Integer Var_51;

    mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (StackVar_7)), TempsInUse0_11, &TempsInUse_12);
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_18, (MR_Integer) 0))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_18, (MR_Integer) 1))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_18, (MR_Integer) 2))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_18, (MR_Integer) 3))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_18, (MR_Integer) 5))));
    Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_18, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_19 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TempsInUse_12));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_51));
    }
    ll_backend__code_info__get_persistent_temps_2_p_0(STATE_VARIABLE_CI_0_16, &PersistentTemps0_13);
    mercury__set__is_member_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (StackVar_7)), PersistentTemps0_13, &IsInPersistentTemps0_14);
    switch (Persistence_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_21;

          {
            Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_4[9]));
            MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ll_backend__code_loc_dep__release_temp_slot_6_p_0_1));
            MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (IsInPersistentTemps0_14));
            MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_21, (MR_String) "predicate \140ll_backend.code_loc_dep.release_temp_slot\'/6", (MR_String) "released stack slot should not be persistent");
          *STATE_VARIABLE_CI_17 = STATE_VARIABLE_CI_0_16;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word PersistentTemps_15;
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_4[9]));
            MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (ll_backend__code_loc_dep__release_temp_slot_6_p_0_2));
            MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (IsInPersistentTemps0_14));
            MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__require__expect_3_p_0(Var_25, (MR_String) "predicate \140ll_backend.code_loc_dep.release_temp_slot\'/6", (MR_String) "released stack slot should be persistent");
          mercury__set__delete_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (StackVar_7)), PersistentTemps0_13, &PersistentTemps_15);
          ll_backend__code_info__set_persistent_temps_3_p_0(PersistentTemps_15, STATE_VARIABLE_CI_0_16, STATE_VARIABLE_CI_17);
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__prepare_for_det_commit_10_p_0(
  MR_Word AddTrailOps_11,
  MR_Word AddRegionOps_12,
  MR_Word ForwardLiveVarsBeforeGoal_13,
  MR_Word CommitGoalInfo_14,
  MR_Word * DetCommitInfo_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_32,
  MR_Word * STATE_VARIABLE_CI_33,
  MR_Word STATE_VARIABLE_CLD_0_34,
  MR_Word * STATE_VARIABLE_CLD_35)
{
  ll_backend__code_loc_dep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_112_97_114_101_95_102_111_114_95_100_101_116_95_99_111_109_109_105_116_95_95_91_51_93_95_48_10_p_0(AddTrailOps_11, AddRegionOps_12, CommitGoalInfo_14, DetCommitInfo_15, Code_16, STATE_VARIABLE_CI_0_32, STATE_VARIABLE_CI_33, STATE_VARIABLE_CLD_0_34, STATE_VARIABLE_CLD_35);
}

void MR_CALL 
ll_backend__code_loc_dep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_112_97_114_101_95_102_111_114_95_100_101_116_95_99_111_109_109_105_116_95_95_91_51_93_95_48_10_p_0(
  MR_Word AddTrailOps_11,
  MR_Word AddRegionOps_12,
  MR_Word CommitGoalInfo_14,
  MR_Word * DetCommitInfo_15,
  MR_Word * Code_16,
  MR_Word STATE_VARIABLE_CI_0_32,
  MR_Word * STATE_VARIABLE_CI_33,
  MR_Word STATE_VARIABLE_CLD_0_34,
  MR_Word * STATE_VARIABLE_CLD_35)
{
  {
    MR_Word FailInfo0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_34, (MR_Integer) 5))));
    MR_Word CurfrMaxfr_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo0_19, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
    MR_Word SaveMaxfrCode_26;
    MR_Word MaybeMaxfrSlot_27;
    MR_Word MaybeTrailSlots_28;
    MR_Word SaveTrailCode_29;
    MR_Word MaybeRegionCommitFrameInfo_30;
    MR_Word SaveRegionCommitFrameCode_31;
    MR_Word STATE_VARIABLE_CI_38_38;
    MR_Word STATE_VARIABLE_CLD_39_39;
    MR_Word STATE_VARIABLE_CI_44_44;
    MR_Word STATE_VARIABLE_CLD_45_45;
    MR_Word Var_48;

    switch (CurfrMaxfr_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word MaxfrSlot_25;
          MR_Word Var_41;
          MR_Word Var_42;

          ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[1])), (MR_Integer) 1, &MaxfrSlot_25, STATE_VARIABLE_CI_0_32, &STATE_VARIABLE_CI_38_38, STATE_VARIABLE_CLD_0_34, &STATE_VARIABLE_CLD_39_39);
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 10U));
            MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (MaxfrSlot_25));
          }
          {
            Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (Var_42));
            MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) ((MR_String) "save the value of maxfr"));
          }
          SaveMaxfrCode_26 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_41)));
          {
            MaybeMaxfrSlot_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeMaxfrSlot_27, 0) = ((MR_Box) (MaxfrSlot_25));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          SaveMaxfrCode_26 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          MaybeMaxfrSlot_27 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_CI_38_38 = STATE_VARIABLE_CI_0_32;
          STATE_VARIABLE_CLD_39_39 = STATE_VARIABLE_CLD_0_34;
        }
        break;
    }
    switch (AddTrailOps_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word CounterSlot_68;
          MR_Word TrailPtrSlot_69;
          MR_Word STATE_VARIABLE_CI_21_72;
          MR_Word STATE_VARIABLE_CLD_22_73;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_85;

          ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) ((MR_Unsigned) 4U), (MR_Integer) 1, &CounterSlot_68, STATE_VARIABLE_CI_38_38, &STATE_VARIABLE_CI_21_72, STATE_VARIABLE_CLD_39_39, &STATE_VARIABLE_CLD_22_73);
          ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, &TrailPtrSlot_69, STATE_VARIABLE_CI_21_72, &STATE_VARIABLE_CI_44_44, STATE_VARIABLE_CLD_22_73, &STATE_VARIABLE_CLD_45_45);
          {
            Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (CounterSlot_68));
            MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (TrailPtrSlot_69));
          }
          {
            MaybeTrailSlots_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeTrailSlots_28, 0) = ((MR_Box) (Var_78));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 22U));
            MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (CounterSlot_68));
          }
          {
            Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) ((MR_String) "save the ticket counter"));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (TrailPtrSlot_69));
          }
          {
            Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (Var_85));
            MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) ((MR_String) "save the trail pointer"));
          }
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
            MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_83));
          }
          SaveTrailCode_29 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_79);
        }
        break;
      case (MR_Integer) 1:
        {
          MaybeTrailSlots_28 = (MR_Word) ((MR_Unsigned) 0U);
          SaveTrailCode_29 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          STATE_VARIABLE_CI_44_44 = STATE_VARIABLE_CI_38_38;
          STATE_VARIABLE_CLD_45_45 = STATE_VARIABLE_CLD_39_39;
        }
        break;
    }
    ll_backend__code_loc_dep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_115_97_118_101_95_114_101_103_105_111_110_95_99_111_109_109_105_116_95_102_114_97_109_101_95_95_91_50_93_95_48_9_p_0(AddRegionOps_12, CommitGoalInfo_14, &MaybeRegionCommitFrameInfo_30, &SaveRegionCommitFrameCode_31, STATE_VARIABLE_CI_44_44, STATE_VARIABLE_CI_33, STATE_VARIABLE_CLD_45_45, STATE_VARIABLE_CLD_35);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *DetCommitInfo_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeMaxfrSlot_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeTrailSlots_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeRegionCommitFrameInfo_30));
    }
    Var_48 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveTrailCode_29, SaveRegionCommitFrameCode_31);
    *Code_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveMaxfrCode_26, Var_48);
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_115_97_118_101_95_114_101_103_105_111_110_95_99_111_109_109_105_116_95_102_114_97_109_101_95_95_91_50_93_95_48_9_p_0(
  MR_Word AddRegionOps_10,
  MR_Word CommitGoalInfo_12,
  MR_Word * MaybeRegionCommitFrameInfo_13,
  MR_Word * Code_14,
  MR_Word STATE_VARIABLE_CI_0_43,
  MR_Word * STATE_VARIABLE_CI_44,
  MR_Word STATE_VARIABLE_CLD_0_45,
  MR_Word * STATE_VARIABLE_CLD_46)
{
  switch (AddRegionOps_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word MaybeRbmmInfo_17;

        MaybeRbmmInfo_17 = hlds__hlds_goal__goal_info_get_maybe_rbmm_1_f_0(CommitGoalInfo_12);
        if ((MaybeRbmmInfo_17 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *MaybeRegionCommitFrameInfo_13 = (MR_Word) ((MR_Unsigned) 0U);
          *Code_14 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CI_44 = STATE_VARIABLE_CI_0_43;
          *STATE_VARIABLE_CLD_46 = STATE_VARIABLE_CLD_0_45;
        }
        else
        {
          MR_Word RbmmInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRbmmInfo_17, (MR_Integer) 0))));
          MR_Word CommitRemovedRegionVars_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RbmmInfo_18, (MR_Integer) 1))));
          MR_Word RemovedRegionVarList_24;
          MR_Integer NumRemovedRegionVars_25;
          MR_Word Globals_26;
          MR_Integer FixedSize_27;
          MR_Integer EntrySize_28;
          MR_Integer FrameSize_29;
          MR_Word Items_30;
          MR_Word StackVars_31;
          MR_Word MainStackId_32;
          MR_Integer FirstSlotNum_33;
          MR_Integer LastSlotNum_34;
          MR_Word EmbeddedStackFrame_35;
          MR_Word FirstSavedRegionAddr_36;
          MR_Word NumRegLval_37;
          MR_Word AddrRegLval_38;
          MR_Word PushInitCode_39;
          MR_Word FillCode_40;
          MR_Word SetCode_41;
          MR_Word RegionCommitFrameInfo_42;
          MR_Integer Var_49;
          MR_Word STATE_VARIABLE_CLD_53_53;
          MR_Word STATE_VARIABLE_CLD_55_55;
          MR_Word STATE_VARIABLE_CLD_57_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word STATE_VARIABLE_CLD_77_77;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Var_81;
          MR_Word STATE_VARIABLE_CLD_83_83;
          MR_Word Var_85;

          RemovedRegionVarList_24 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), CommitRemovedRegionVars_20);
          NumRemovedRegionVars_25 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), RemovedRegionVarList_24);
          ll_backend__code_info__get_globals_2_p_0(STATE_VARIABLE_CI_0_43, &Globals_26);
          libs__globals__lookup_int_option_3_p_0(Globals_26, (MR_Integer) 313, &FixedSize_27);
          libs__globals__lookup_int_option_3_p_0(Globals_26, (MR_Integer) 318, &EntrySize_28);
          Var_49 = (MR_Integer) ((MR_Unsigned) EntrySize_28 * (MR_Unsigned) NumRemovedRegionVars_25);
          FrameSize_29 = (MR_Integer) ((MR_Unsigned) FixedSize_27 + (MR_Unsigned) Var_49);
          Items_30 = mercury__list__duplicate_2_f_0((MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0), FrameSize_29, ((MR_Box) ((MR_Unsigned) 36U)));
          ll_backend__code_loc_dep__acquire_several_temp_slots_10_p_0(Items_30, (MR_Integer) 1, &StackVars_31, &MainStackId_32, &FirstSlotNum_33, &LastSlotNum_34, STATE_VARIABLE_CI_0_43, STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_0_45, &STATE_VARIABLE_CLD_53_53);
          {
            EmbeddedStackFrame_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), EmbeddedStackFrame_35, 0) = (MR_Box) ((MR_Unsigned) (MainStackId_32));
            MR_hl_field(MR_mktag(0), EmbeddedStackFrame_35, 1) = ((MR_Box) (FirstSlotNum_33));
            MR_hl_field(MR_mktag(0), EmbeddedStackFrame_35, 2) = ((MR_Box) (LastSlotNum_34));
          }
          FirstSavedRegionAddr_36 = ll_backend__llds__first_nonfixed_embedded_slot_addr_2_f_0(EmbeddedStackFrame_35, FixedSize_27);
          ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &NumRegLval_37, STATE_VARIABLE_CLD_53_53, &STATE_VARIABLE_CLD_55_55);
          ll_backend__code_loc_dep__acquire_reg_4_p_0((MR_Integer) 0, &AddrRegLval_38, STATE_VARIABLE_CLD_55_55, &STATE_VARIABLE_CLD_57_57);
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(3), Var_60, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), Var_60, 2) = ((MR_Box) (EmbeddedStackFrame_35));
          }
          {
            Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) ((MR_String) "Save stack pointer of embedded region commit stack"));
          }
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (NumRegLval_37));
            MR_hl_field(MR_mktag(3), Var_65, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[44])));
          }
          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (Var_65));
            MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) ((MR_String) "Initialize number of unprotected live regions"));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (AddrRegLval_38));
            MR_hl_field(MR_mktag(3), Var_72, 2) = ((MR_Box) (FirstSavedRegionAddr_36));
          }
          {
            Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (Var_72));
            MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) ((MR_String) "Initialize pointer to the next unprotected live region slot"));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
            MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
            MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_70));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
            MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_63));
          }
          PushInitCode_39 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_58);
          ll_backend__code_loc_dep__save_unprotected_live_regions_8_p_0(NumRegLval_37, AddrRegLval_38, EmbeddedStackFrame_35, RemovedRegionVarList_24, &FillCode_40, *STATE_VARIABLE_CI_44, STATE_VARIABLE_CLD_57_57, &STATE_VARIABLE_CLD_77_77);
          {
            Var_81 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (NumRegLval_37));
          }
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 18U));
            MR_hl_field(MR_mktag(3), Var_79, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), Var_79, 2) = ((MR_Box) (EmbeddedStackFrame_35));
            MR_hl_field(MR_mktag(3), Var_79, 3) = ((MR_Box) (Var_81));
          }
          {
            Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (Var_79));
            MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) ((MR_String) "Store the number of unprotected live regions"));
          }
          SetCode_41 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_78)));
          ll_backend__code_loc_dep__release_reg_3_p_0(NumRegLval_37, STATE_VARIABLE_CLD_77_77, &STATE_VARIABLE_CLD_83_83);
          ll_backend__code_loc_dep__release_reg_3_p_0(AddrRegLval_38, STATE_VARIABLE_CLD_83_83, STATE_VARIABLE_CLD_46);
          {
            RegionCommitFrameInfo_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), RegionCommitFrameInfo_42, 0) = ((MR_Box) (EmbeddedStackFrame_35));
            MR_hl_field(MR_mktag(0), RegionCommitFrameInfo_42, 1) = ((MR_Box) (StackVars_31));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeRegionCommitFrameInfo_13 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RegionCommitFrameInfo_42));
          }
          Var_85 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FillCode_40, SetCode_41);
          *Code_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), PushInitCode_39, Var_85);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *MaybeRegionCommitFrameInfo_13 = (MR_Word) ((MR_Unsigned) 0U);
        *Code_14 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        *STATE_VARIABLE_CI_44 = STATE_VARIABLE_CI_0_43;
        *STATE_VARIABLE_CLD_46 = STATE_VARIABLE_CLD_0_45;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__save_unprotected_live_regions_8_p_0(
  MR_Word NumLval_1,
  MR_Word AddrLval_2,
  MR_Word EmbeddedStackFrame_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_CLD_0_7,
  MR_Word * STATE_VARIABLE_CLD_8)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    *STATE_VARIABLE_CLD_8 = STATE_VARIABLE_CLD_0_7;
  }
  else
  {
    MR_Word RegionVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word RegionVars_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Code_21;
    MR_Word Codes_22;
    MR_Word ProduceVarCode_25;
    MR_Word RegionVarRval_26;
    MR_Word SaveCode_27;
    MR_Word STATE_VARIABLE_CLD_30_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word ModuleInfo_45;
    MR_Word VarLocnInfo0_46;
    MR_Word VarLocnInfo_47;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Integer Var_67;

    ll_backend__code_info__get_module_info_2_p_0(HeadVar__6_6, &ModuleInfo_45);
    VarLocnInfo0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_7, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_produce_var_6_p_0(ModuleInfo_45, RegionVar_19, &RegionVarRval_26, &ProduceVarCode_25, VarLocnInfo0_46, &VarLocnInfo_47);
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_7, (MR_Integer) 0))));
    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_7, (MR_Integer) 1))));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_7, (MR_Integer) 2))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_7, (MR_Integer) 4))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_7, (MR_Integer) 5))));
    Var_67 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_7, (MR_Integer) 6))));
    {
      STATE_VARIABLE_CLD_30_30 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_30_30, 0) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_30_30, 1) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_30_30, 2) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_30_30, 3) = ((MR_Box) (VarLocnInfo_47));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_30_30, 4) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_30_30, 5) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_30_30, 6) = ((MR_Box) (Var_67));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), Var_32, 2) = ((MR_Box) (EmbeddedStackFrame_3));
      MR_hl_field(MR_mktag(3), Var_32, 3) = ((MR_Box) (RegionVarRval_26));
      MR_hl_field(MR_mktag(3), Var_32, 4) = ((MR_Box) (NumLval_1));
      MR_hl_field(MR_mktag(3), Var_32, 5) = ((MR_Box) (AddrLval_2));
    }
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) ((MR_String) "Save the region in the commit stack frame if it is unprotected"));
    }
    SaveCode_27 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_31)));
    Code_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceVarCode_25, SaveCode_27);
    ll_backend__code_loc_dep__save_unprotected_live_regions_8_p_0(NumLval_1, AddrLval_2, EmbeddedStackFrame_3, RegionVars_20, &Codes_22, HeadVar__6_6, STATE_VARIABLE_CLD_30_30, STATE_VARIABLE_CLD_8);
    *HeadVar__5_5 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Code_21, Codes_22);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__acquire_several_temp_slots_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Persistence_2,
  MR_Word * StackVars_3,
  MR_Word * StackId_4,
  MR_Integer * FirstSlotNum_5,
  MR_Integer * LastSlotNum_6,
  MR_Word STATE_VARIABLE_CI_0_7,
  MR_Word * STATE_VARIABLE_CI_8,
  MR_Word STATE_VARIABLE_CLD_0_9,
  MR_Word * STATE_VARIABLE_CLD_10)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_loc_dep.acquire_several_temp_slots\'/10", (MR_String) "[]");
        return;
      }
    }
    else
    {
      MR_Word HeadItem_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TailItems_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TempContentMap0_33;
      MR_Word TempContentList_34;
      MR_Word TempsInUse0_35;
      MR_Word TempsInUse_40;
      MR_Word STATE_VARIABLE_CI_47_47;
      MR_Word StackVarsPrime_36;
      MR_Word StackIdPrime_37;
      MR_Integer FirstSlotNumPrime_38;
      MR_Integer LastSlotNumPrime_39;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_69;
      MR_Integer Var_70;

      ll_backend__code_info__get_temp_content_map_2_p_0(STATE_VARIABLE_CI_0_7, &TempContentMap0_33);
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0), TempContentMap0_33, &TempContentList_34);
      TempsInUse0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_9, (MR_Integer) 4))));
      succeeded = ll_backend__code_loc_dep__find_unused_slots_for_items_8_p_0(TempContentList_34, HeadItem_24, TailItems_25, TempsInUse0_35, &StackVarsPrime_36, &StackIdPrime_37, &FirstSlotNumPrime_38, &LastSlotNumPrime_39);
      if (succeeded)
      {
        *StackVars_3 = StackVarsPrime_36;
        *StackId_4 = StackIdPrime_37;
        *FirstSlotNum_5 = FirstSlotNumPrime_38;
        *LastSlotNum_6 = LastSlotNumPrime_39;
        STATE_VARIABLE_CI_47_47 = STATE_VARIABLE_CI_0_7;
      }
      else
        ll_backend__code_loc_dep__new_temp_slots_8_p_0(HeadItem_24, TailItems_25, StackVars_3, StackId_4, FirstSlotNum_5, LastSlotNum_6, STATE_VARIABLE_CI_0_7, &STATE_VARIABLE_CI_47_47);
      mercury__set__insert_list_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), *StackVars_3, TempsInUse0_35, &TempsInUse_40);
      Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_9, (MR_Integer) 0))));
      Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_9, (MR_Integer) 1))));
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_9, (MR_Integer) 2))));
      Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_9, (MR_Integer) 3))));
      Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_9, (MR_Integer) 5))));
      Var_70 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_9, (MR_Integer) 6))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_CLD_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TempsInUse_40));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_70));
      }
      switch (Persistence_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *STATE_VARIABLE_CI_8 = STATE_VARIABLE_CI_47_47;
          break;
        case (MR_Integer) 0:
          {
            MR_Word PersistentTemps0_41;
            MR_Word PersistentTemps_42;

            ll_backend__code_info__get_persistent_temps_2_p_0(STATE_VARIABLE_CI_47_47, &PersistentTemps0_41);
            mercury__set__insert_list_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), *StackVars_3, PersistentTemps0_41, &PersistentTemps_42);
            ll_backend__code_info__set_persistent_temps_3_p_0(PersistentTemps_42, STATE_VARIABLE_CI_47_47, STATE_VARIABLE_CI_8);
          }
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__find_unused_slots_for_items_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadItem_11,
  MR_Word TailItems_12,
  MR_Word TempsInUse_13,
  MR_Word * ChosenStackVars_14,
  MR_Word * StackId_15,
  MR_Integer * FirstSlotNum_16,
  MR_Integer * LastSlotNum_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Tail_10;
    MR_Word ChosenHeadStackVar_18;
    MR_Word StackId1_23;
    MR_Integer FirstSlotNum1_24;
    MR_Word ChosenTailStackVars_25;
    MR_Integer LastSlotNum1_26;
    MR_Word Remainder_19;
    MR_Integer N_20;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Tail_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      succeeded = ll_backend__code_loc_dep__find_unused_slot_for_item_5_p_0(HeadVar__1_1, HeadItem_11, TempsInUse_13, &ChosenHeadStackVar_18, &Remainder_19);
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) ChosenHeadStackVar_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ChosenHeadStackVar_18, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          N_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ChosenHeadStackVar_18, (MR_Integer) 1))));
          StackId1_23 = (MR_Integer) 0;
          FirstSlotNum1_24 = N_20;
        }
        else
        {
          MR_Integer N_30;

          succeeded = ((((MR_tag((MR_Word) ChosenHeadStackVar_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ChosenHeadStackVar_18, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            N_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ChosenHeadStackVar_18, (MR_Integer) 1))));
            StackId1_23 = (MR_Integer) 1;
            FirstSlotNum1_24 = N_30;
          }
          else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_loc_dep.find_unused_slots_for_items\'/8", (MR_String) "not stackvar or framevar");
          }
        }
        succeeded = ll_backend__code_loc_dep__find_next_slots_for_items_7_p_0(Remainder_19, TailItems_12, TempsInUse_13, &ChosenTailStackVars_25, StackId1_23, FirstSlotNum1_24, &LastSlotNum1_26);
      }
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ChosenStackVars_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ChosenHeadStackVar_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ChosenTailStackVars_25));
        }
        *StackId_15 = StackId1_23;
        *FirstSlotNum_16 = FirstSlotNum1_24;
        *LastSlotNum_17 = LastSlotNum1_26;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Tail_10;

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

static MR_bool MR_CALL 
ll_backend__code_loc_dep__find_next_slots_for_items_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word TempsInUse_3,
  MR_Word * HeadVar__4_4,
  MR_Word StackId_5,
  MR_Integer STATE_VARIABLE_SlotNum_0_6,
  MR_Integer * STATE_VARIABLE_SlotNum_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_SlotNum_7 = STATE_VARIABLE_SlotNum_0_6;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word Head_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Tail_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word HeadItem_15;
      MR_Word TailItems_16;
      MR_Word HeadStackVar_18;
      MR_Word TailStackVars_19;
      MR_Word HeadSlotType_22;
      MR_Integer STATE_VARIABLE_SlotNum_25_25;
      MR_Integer Var_26;
      MR_Word Var_29;
      MR_Word TypeCtorInfo_28_28;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadItem_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TailItems_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        HeadStackVar_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Head_13, (MR_Integer) 0))));
        HeadSlotType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Head_13, (MR_Integer) 1))));
        Var_26 = (MR_Integer) 1;
        STATE_VARIABLE_SlotNum_25_25 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_SlotNum_0_6 + (MR_Unsigned) Var_26);
        Var_29 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(StackId_5, STATE_VARIABLE_SlotNum_25_25);
        succeeded = ll_backend__llds____Unify____lval_0_0(HeadStackVar_18, Var_29);
        if (succeeded)
        {
          succeeded = ll_backend__continuation_info____Unify____slot_contents_0_0(HeadSlotType_22, HeadItem_15);
          if (succeeded)
          {
            TypeCtorInfo_28_28 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
            succeeded = mercury__set__member_2_p_0(TypeCtorInfo_28_28, ((MR_Box) (HeadStackVar_18)), TempsInUse_3);
            succeeded = !(succeeded);
            if (succeeded)
            {
              succeeded = ll_backend__code_loc_dep__find_next_slots_for_items_7_p_0(Tail_14, TailItems_16, TempsInUse_3, &TailStackVars_19, StackId_5, STATE_VARIABLE_SlotNum_25_25, STATE_VARIABLE_SlotNum_7);
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadStackVar_18));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailStackVars_19));
                }
                succeeded = MR_TRUE;
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
ll_backend__code_loc_dep__new_temp_slots_8_p_0(
  MR_Word HeadItem_9,
  MR_Word TailItems_10,
  MR_Word * StackVars_11,
  MR_Word * StackId_12,
  MR_Integer * FirstSlotNum_13,
  MR_Integer * LastSlotNum_14,
  MR_Word STATE_VARIABLE_CI_0_28,
  MR_Word * STATE_VARIABLE_CI_29)
{
  {
    MR_Word CodeModel_16;
    MR_Integer VarSlotCount_17;
    MR_Integer TempSlotCount0_18;
    MR_Word TempContentMap0_19;
    MR_Integer NextSlotNum_20;
    MR_Integer TempSlotCount1_21;
    MR_Word TempContentMap1_22;
    MR_Word HeadStackVar_23;
    MR_Integer FirstUnusedSlotNum_24;
    MR_Integer TempSlotCount_25;
    MR_Word TempContentMap_26;
    MR_Word TailStackVars_27;
    MR_Integer Var_30;
    MR_Word STATE_VARIABLE_CI_33_33;

    CodeModel_16 = ll_backend__code_info__get_proc_model_1_f_0(STATE_VARIABLE_CI_0_28);
    *StackId_12 = ll_backend__llds__code_model_to_main_stack_1_f_0(CodeModel_16);
    ll_backend__code_info__get_var_slot_count_2_p_0(STATE_VARIABLE_CI_0_28, &VarSlotCount_17);
    ll_backend__code_info__get_max_temp_slot_count_2_p_0(STATE_VARIABLE_CI_0_28, &TempSlotCount0_18);
    Var_30 = (MR_Integer) ((MR_Unsigned) VarSlotCount_17 + (MR_Unsigned) TempSlotCount0_18);
    *FirstSlotNum_13 = (MR_Integer) ((MR_Unsigned) Var_30 + (MR_Unsigned) 1);
    ll_backend__code_info__get_temp_content_map_2_p_0(STATE_VARIABLE_CI_0_28, &TempContentMap0_19);
    HeadStackVar_23 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(*StackId_12, *FirstSlotNum_13);
    mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0), ((MR_Box) (HeadStackVar_23)), ((MR_Box) (HeadItem_9)), TempContentMap0_19, &TempContentMap1_22);
    NextSlotNum_20 = (MR_Integer) ((MR_Unsigned) *FirstSlotNum_13 + (MR_Unsigned) 1);
    TempSlotCount1_21 = (MR_Integer) ((MR_Unsigned) TempSlotCount0_18 + (MR_Unsigned) 1);
    ll_backend__code_loc_dep__record_new_temp_slots_9_p_0(TailItems_10, *StackId_12, NextSlotNum_20, &FirstUnusedSlotNum_24, TempSlotCount1_21, &TempSlotCount_25, TempContentMap1_22, &TempContentMap_26, &TailStackVars_27);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *StackVars_11 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadStackVar_23));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailStackVars_27));
    }
    *LastSlotNum_14 = (MR_Integer) ((MR_Unsigned) FirstUnusedSlotNum_24 - (MR_Unsigned) 1);
    ll_backend__code_info__set_max_temp_slot_count_3_p_0(TempSlotCount_25, STATE_VARIABLE_CI_0_28, &STATE_VARIABLE_CI_33_33);
    ll_backend__code_info__set_temp_content_map_3_p_0(TempContentMap_26, STATE_VARIABLE_CI_33_33, STATE_VARIABLE_CI_29);
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__record_new_temp_slots_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word StackId_2,
  MR_Integer STATE_VARIABLE_CurSlotNum_0_3,
  MR_Integer * STATE_VARIABLE_CurSlotNum_4,
  MR_Integer STATE_VARIABLE_TempSlotCount_0_5,
  MR_Integer * STATE_VARIABLE_TempSlotCount_6,
  MR_Word STATE_VARIABLE_TempContentMap_0_7,
  MR_Word * STATE_VARIABLE_TempContentMap_8,
  MR_Word * HeadVar__9_9)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_TempContentMap_8 = STATE_VARIABLE_TempContentMap_0_7;
    *STATE_VARIABLE_TempSlotCount_6 = STATE_VARIABLE_TempSlotCount_0_5;
    *STATE_VARIABLE_CurSlotNum_4 = STATE_VARIABLE_CurSlotNum_0_3;
  }
  else
  {
    MR_Word Item_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Items_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word StackVar_26;
    MR_Word StackVars_27;
    MR_Integer STATE_VARIABLE_CurSlotNum_34_34;
    MR_Integer STATE_VARIABLE_TempSlotCount_35_35;
    MR_Word STATE_VARIABLE_TempContentMap_36_36;

    StackVar_26 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(StackId_2, STATE_VARIABLE_CurSlotNum_0_3);
    mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0), ((MR_Box) (StackVar_26)), ((MR_Box) (Item_20)), STATE_VARIABLE_TempContentMap_0_7, &STATE_VARIABLE_TempContentMap_36_36);
    STATE_VARIABLE_CurSlotNum_34_34 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurSlotNum_0_3 + (MR_Unsigned) 1);
    STATE_VARIABLE_TempSlotCount_35_35 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TempSlotCount_0_5 + (MR_Unsigned) 1);
    ll_backend__code_loc_dep__record_new_temp_slots_9_p_0(Items_21, StackId_2, STATE_VARIABLE_CurSlotNum_34_34, STATE_VARIABLE_CurSlotNum_4, STATE_VARIABLE_TempSlotCount_35_35, STATE_VARIABLE_TempSlotCount_6, STATE_VARIABLE_TempContentMap_36_36, STATE_VARIABLE_TempContentMap_8, &StackVars_27);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__9_9 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StackVar_26));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (StackVars_27));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__release_reg_3_p_0(
  MR_Word Lval_4,
  MR_Word STATE_VARIABLE_CLD_0_8,
  MR_Word * STATE_VARIABLE_CLD_9)
{
  {
    MR_Word VarLocnInfo0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 3))));
    MR_Word VarLocnInfo_7;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Integer Var_29;

    ll_backend__var_locn__var_locn_release_reg_3_p_0(Lval_4, VarLocnInfo0_6, &VarLocnInfo_7);
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 0))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 1))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 2))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 4))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 5))));
    Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_7));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_29));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__acquire_reg_4_p_0(
  MR_Word Type_5,
  MR_Word * Lval_6,
  MR_Word STATE_VARIABLE_CLD_0_10,
  MR_Word * STATE_VARIABLE_CLD_11)
{
  {
    MR_Word VarLocnInfo0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 3))));
    MR_Word VarLocnInfo_9;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Integer Var_31;

    ll_backend__var_locn__var_locn_acquire_reg_4_p_0(Type_5, Lval_6, VarLocnInfo0_8, &VarLocnInfo_9);
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 0))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 1))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 2))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 4))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 5))));
    Var_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_31));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__leave_simple_neg_5_p_0(
  MR_Word GoalInfo_6,
  MR_Word FailInfo_7,
  MR_Word CI_8,
  MR_Word STATE_VARIABLE_CLD_0_10,
  MR_Word * STATE_VARIABLE_CLD_11)
{
  {
    MR_Word STATE_VARIABLE_CLD_12_12;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Integer Var_25;

    ll_backend__code_loc_dep__post_goal_update_4_p_0(GoalInfo_6, CI_8, STATE_VARIABLE_CLD_0_10, &STATE_VARIABLE_CLD_12_12);
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_12_12, (MR_Integer) 0))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_12_12, (MR_Integer) 1))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_12_12, (MR_Integer) 2))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_12_12, (MR_Integer) 3))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_12_12, (MR_Integer) 4))));
    Var_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_12_12, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (FailInfo_7));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_25));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__enter_simple_neg_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__code_loc_dep__IntroducedFrom__pred__enter_simple_neg__1266__1_1_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__enter_simple_neg_5_p_0(
  MR_Word ResumeVars_6,
  MR_Word GoalInfo_7,
  MR_Word * FailInfo0_8,
  MR_Word STATE_VARIABLE_CLD_0_14,
  MR_Word * STATE_VARIABLE_CLD_15)
{
  {
    MR_bool succeeded;
    MR_Word ResumeMap0_10;
    MR_Word ResumeMap_11;
    MR_Word ResumePoint_12;
    MR_Word Code_13;
    MR_Word STATE_VARIABLE_CLD_18_18;
    MR_Word Var_19;

    *FailInfo0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_14, (MR_Integer) 5))));
    mercury__map__init_1_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), &ResumeMap0_10);
    ll_backend__code_loc_dep__make_fake_resume_map_3_p_0(ResumeVars_6, ResumeMap0_10, &ResumeMap_11);
    {
      ResumePoint_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ResumePoint_12, 0) = ((MR_Box) (ResumeMap_11));
      MR_hl_field(MR_mktag(0), ResumePoint_12, 1) = ((MR_Box) ((MR_Unsigned) 4U));
    }
    ll_backend__code_loc_dep__effect_resume_point_5_p_0(ResumePoint_12, (MR_Integer) 1, &Code_13, STATE_VARIABLE_CLD_0_14, &STATE_VARIABLE_CLD_18_18);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ll_backend__code_loc_dep__enter_simple_neg_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (Code_13));
    }
    mercury__require__expect_3_p_0(Var_19, (MR_String) "predicate \140ll_backend.code_loc_dep.enter_simple_neg\'/5", (MR_String) "nonempty code for simple neg");
    ll_backend__code_loc_dep__pre_goal_update_4_p_0(GoalInfo_7, (MR_Integer) 1, STATE_VARIABLE_CLD_18_18, STATE_VARIABLE_CLD_15);
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__make_fake_resume_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ResumeMap_0_2,
  MR_Word * STATE_VARIABLE_ResumeMap_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ResumeMap_3 = STATE_VARIABLE_ResumeMap_0_2;
    else
    {
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Locns_10;
      MR_Word STATE_VARIABLE_ResumeMap_16_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ResumeMap_0_2;

      Locns_10 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_1[43]))));
      mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), ((MR_Box) (Var_7)), ((MR_Box) (Locns_10)), STATE_VARIABLE_ResumeMap_0_2, &STATE_VARIABLE_ResumeMap_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_8;
      next_value_of_STATE_VARIABLE_ResumeMap_0_2 = STATE_VARIABLE_ResumeMap_16_16;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ResumeMap_0_2 = next_value_of_STATE_VARIABLE_ResumeMap_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__effect_resume_point_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__code_loc_dep__IntroducedFrom__pred__effect_resume_point__1794__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__effect_resume_point_5_p_0(
  MR_Word ResumePoint_6,
  MR_Word CodeModel_7,
  MR_Word * Code_8,
  MR_Word STATE_VARIABLE_CLD_0_31,
  MR_Word * STATE_VARIABLE_CLD_32)
{
  {
    MR_bool succeeded;
    MR_Word FailInfo0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_31, (MR_Integer) 5))));
    MR_Word ResumePoints0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo0_10, (MR_Integer) 0))));
    MR_Word ResumePoints_25;
    MR_Word RedoipUpdate_29;
    MR_Word FailInfo_30;
    MR_Word Var_43;
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo0_10, (MR_Integer) 2)));
    MR_Word OldResumePoint_16;
    MR_Box conv0_OldResumePoint_16;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Integer Var_94;

    succeeded = mercury__stack__top_2_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0), ResumePoints0_11, &conv0_OldResumePoint_16);
    if (succeeded)
    {
      OldResumePoint_16 = ((MR_Word) (conv0_OldResumePoint_16));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word OldMap_17;
      MR_Word NewMap_19;
      MR_Word OldKeys_21;
      MR_Word NewKeys_22;
      MR_Word OldKeySet_23;
      MR_Word NewKeySet_24;
      MR_Word Var_33;

      switch (MR_tag((MR_Word) OldResumePoint_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          OldMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldResumePoint_16, (MR_Integer) 0))));
          break;
        case (MR_Integer) 1:
          OldMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OldResumePoint_16, (MR_Integer) 0))));
          break;
        case (MR_Integer) 2:
          OldMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OldResumePoint_16, (MR_Integer) 0))));
          break;
        case (MR_Integer) 3:
          OldMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OldResumePoint_16, (MR_Integer) 0))));
          break;
      }
      switch (MR_tag((MR_Word) ResumePoint_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          NewMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ResumePoint_6, (MR_Integer) 0))));
          break;
        case (MR_Integer) 1:
          NewMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint_6, (MR_Integer) 0))));
          break;
        case (MR_Integer) 2:
          NewMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResumePoint_6, (MR_Integer) 0))));
          break;
        case (MR_Integer) 3:
          NewMap_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ResumePoint_6, (MR_Integer) 0))));
          break;
      }
      mercury__map__keys_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), OldMap_17, &OldKeys_21);
      mercury__map__keys_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), NewMap_19, &NewKeys_22);
      mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), OldKeys_21, &OldKeySet_23);
      mercury__set__list_to_set_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), NewKeys_22, &NewKeySet_24);
      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_4[8]));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (ll_backend__code_loc_dep__effect_resume_point_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (OldKeySet_23));
        MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) (NewKeySet_24));
      }
      mercury__require__expect_3_p_0(Var_33, (MR_String) "predicate \140ll_backend.code_loc_dep.effect_resume_point\'/5", (MR_String) "non-nested resume point variable sets");
    }
    mercury__stack__push_3_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0), ((MR_Box) (ResumePoint_6)), ResumePoints0_11, &ResumePoints_25);
    switch (CodeModel_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          *Code_8 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          RedoipUpdate_29 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word StackLabel_27;
          MR_Word LabelConst_28;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_26;

          ll_backend__code_loc_dep__pick_stack_resume_point_3_p_0(ResumePoint_6, &Var_26, &StackLabel_27);
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (StackLabel_27));
          }
          {
            LabelConst_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), LabelConst_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), LabelConst_28, 1) = ((MR_Box) (Var_36));
          }
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[30])));
            MR_hl_field(MR_mktag(3), Var_38, 2) = ((MR_Box) (LabelConst_28));
          }
          {
            Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) ((MR_String) "hijack redoip to effect resume point"));
          }
          *Code_8 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_37)));
          RedoipUpdate_29 = (MR_Integer) 0;
        }
        break;
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = (MR_Box) ((MR_Unsigned) (RedoipUpdate_29));
    }
    {
      FailInfo_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FailInfo_30, 0) = ((MR_Box) (ResumePoints_25));
      MR_hl_field(MR_mktag(0), FailInfo_30, 1) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), FailInfo_30, 2) = (MR_Box) (packed_word_0);
    }
    Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_31, (MR_Integer) 0))));
    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_31, (MR_Integer) 1))));
    Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_31, (MR_Integer) 2))));
    Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_31, (MR_Integer) 3))));
    Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_31, (MR_Integer) 4))));
    Var_94 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_31, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_32 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (FailInfo_30));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_94));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__ite_enter_then_8_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__code_loc_dep__IntroducedFrom__pred__ite_enter_then__1198__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__ite_enter_then_8_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__code_loc_dep__IntroducedFrom__pred__ite_enter_then__1148__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__ite_enter_then_8_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__code_loc_dep__IntroducedFrom__pred__ite_enter_then__1214__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__ite_enter_then_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__code_loc_dep__IntroducedFrom__pred__ite_enter_then__1223__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__ite_enter_then_8_p_0(
  MR_Word HijackInfo_9,
  MR_Word ITEResumePoint_10,
  MR_Word * ThenCode_11,
  MR_Word * ElseCode_12,
  MR_Word STATE_VARIABLE_CI_0_42,
  MR_Word * STATE_VARIABLE_CI_43,
  MR_Word STATE_VARIABLE_CLD_0_44,
  MR_Word * STATE_VARIABLE_CLD_45)
{
  {
    MR_bool succeeded;
    MR_Word FailInfo0_15;
    MR_Word ResumePoints0_16;
    MR_Word ResumeKnown0_17;
    MR_Word ResumePoints_22;
    MR_Word HijackResumeKnown_23;
    MR_Word OldCondEnv_24;
    MR_Word HijackType_25;
    MR_Word MaybeRegionInfo_26;
    MR_Word ResumeKnown_39;
    MR_Word FailInfo_41;
    MR_Unsigned packed_word_0;
    MR_Box conv0_Var_21;

    ll_backend__code_loc_dep__get_fail_info_2_p_0(STATE_VARIABLE_CLD_0_44, &FailInfo0_15);
    ResumePoints0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo0_15, (MR_Integer) 0))));
    ResumeKnown0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo0_15, (MR_Integer) 1))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo0_15, (MR_Integer) 2)));
    mercury__stack__det_pop_3_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0), &conv0_Var_21, ResumePoints0_16, &ResumePoints_22);
    HijackResumeKnown_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HijackInfo_9, (MR_Integer) 0))));
    OldCondEnv_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HijackInfo_9, (MR_Integer) 1))) & (MR_Integer) 1);
    HijackType_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HijackInfo_9, (MR_Integer) 2))));
    MaybeRegionInfo_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HijackInfo_9, (MR_Integer) 3))));
    switch (MR_tag((MR_Word) HijackType_25)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HijackType_25)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_166;

              {
                Var_166 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_166, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_4[7]));
                MR_hl_field(MR_mktag(0), Var_166, 1) = ((MR_Box) (ll_backend__code_loc_dep__ite_enter_then_8_p_0_3));
                MR_hl_field(MR_mktag(0), Var_166, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_166, 3) = ((MR_Box) (MaybeRegionInfo_26));
                MR_hl_field(MR_mktag(0), Var_166, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_166, (MR_String) "predicate \140ll_backend.code_loc_dep.ite_enter_then\'/8", (MR_String) "MaybeRegionInfo ite_no_hijack");
              *ThenCode_11 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *ElseCode_12 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CI_43 = STATE_VARIABLE_CI_0_42;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ResumePoint_33;
              MR_Word Var_93;
              MR_Box conv1_ResumePoint_33;
              MR_Word StackLabel_35;
              MR_Word Var_34;

              {
                Var_93 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_4[7]));
                MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (ll_backend__code_loc_dep__ite_enter_then_8_p_0_4));
                MR_hl_field(MR_mktag(0), Var_93, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_93, 3) = ((MR_Box) (MaybeRegionInfo_26));
                MR_hl_field(MR_mktag(0), Var_93, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_93, (MR_String) "predicate \140ll_backend.code_loc_dep.ite_enter_then\'/8", (MR_String) "MaybeRegionInfo ite_quarter_hijack");
              mercury__stack__det_top_2_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0), ResumePoints_22, &conv1_ResumePoint_33);
              ResumePoint_33 = ((MR_Word) (conv1_ResumePoint_33));
              succeeded = ll_backend__code_loc_dep__maybe_pick_stack_resume_point_3_p_0(ResumePoint_33, &Var_34, &StackLabel_35);
              if (succeeded)
              {
                MR_Word LabelConst_36;
                MR_Word Var_97;
                MR_Word Var_98;
                MR_Word Var_99;

                {
                  Var_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_97, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(MR_mktag(3), Var_97, 1) = ((MR_Box) (StackLabel_35));
                }
                {
                  LabelConst_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), LabelConst_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), LabelConst_36, 1) = ((MR_Box) (Var_97));
                }
                {
                  Var_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_99, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[32])));
                  MR_hl_field(MR_mktag(3), Var_99, 2) = ((MR_Box) (LabelConst_36));
                }
                {
                  Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (Var_99));
                  MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) ((MR_String) "restore redoip for quarter ite hijack"));
                }
                *ThenCode_11 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_98)));
              }
              else
              {
                *ThenCode_11 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              }
              *ElseCode_12 = *ThenCode_11;
              *STATE_VARIABLE_CI_43 = STATE_VARIABLE_CI_0_42;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaxfrSlot_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HijackType_25, (MR_Integer) 0))));

          if ((MaybeRegionInfo_26 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_151;
            MR_Word Var_152;
            MR_Word Var_153;
            MR_Word Var_154;
            MR_Word Var_159;
            MR_Word Var_160;
            MR_Word Var_162;
            MR_Word Var_163;

            {
              Var_154 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_154, 0) = ((MR_Box) (MaxfrSlot_27));
            }
            {
              Var_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_153, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), Var_153, 1) = ((MR_Box) (Var_154));
            }
            {
              Var_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_152, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_152, 1) = ((MR_Box) (Var_153));
              MR_hl_field(MR_mktag(3), Var_152, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[39])));
            }
            {
              Var_151 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_151, 0) = ((MR_Box) (Var_152));
              MR_hl_field(MR_mktag(0), Var_151, 1) = ((MR_Box) ((MR_String) "soft cut for temp frame ite"));
            }
            *ThenCode_11 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_151)));
            {
              Var_163 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_163, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), Var_163, 1) = ((MR_Box) (Var_154));
            }
            {
              Var_162 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_162, 0) = ((MR_Box) (Var_163));
            }
            {
              Var_160 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_160, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_160, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Var_160, 2) = ((MR_Box) (Var_162));
            }
            {
              Var_159 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_159, 0) = ((MR_Box) (Var_160));
              MR_hl_field(MR_mktag(0), Var_159, 1) = ((MR_Box) ((MR_String) "restore maxfr for temp frame ite"));
            }
            *ElseCode_12 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_159)));
            *STATE_VARIABLE_CI_43 = STATE_VARIABLE_CI_0_42;
          }
          else
          {
            MR_Word RegionInfo_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRegionInfo_26, (MR_Integer) 0))));
            MR_Word EmbeddedStackFrameId_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RegionInfo_28, (MR_Integer) 0))));
            MR_Word SuccessRecordSlot_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RegionInfo_28, (MR_Integer) 1))));
            MR_Word ITEStackResumeCodeAddr_31;
            MR_Word AfterRegionOp_32;
            MR_Word Var_104;
            MR_Word Var_105;
            MR_Word Var_106;
            MR_Word Var_110;
            MR_Word Var_111;
            MR_Word Var_112;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_115;
            MR_Word Var_116;
            MR_Word Var_120;
            MR_Word Var_121;
            MR_Word Var_122;
            MR_Word Var_124;
            MR_Word Var_125;
            MR_Word Var_128;
            MR_Word Var_129;
            MR_Word Var_130;
            MR_Word Var_131;
            MR_Word Var_133;
            MR_Word Var_134;
            MR_Word Var_136;
            MR_Word Var_137;
            MR_Word Var_138;
            MR_Word Var_141;
            MR_Word Var_146;
            MR_Word Var_147;
            MR_Word Var_148;

            ll_backend__code_loc_dep__resume_point_stack_addr_2_p_0(ITEResumePoint_10, &ITEStackResumeCodeAddr_31);
            {
              Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (SuccessRecordSlot_30));
              MR_hl_field(MR_mktag(3), Var_106, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[40])));
            }
            {
              Var_105 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (Var_106));
              MR_hl_field(MR_mktag(0), Var_105, 1) = ((MR_Box) ((MR_String) "record success of the condition"));
            }
            {
              Var_114 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (MaxfrSlot_27));
            }
            {
              Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (Var_114));
            }
            {
              Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(MR_mktag(3), Var_116, 1) = ((MR_Box) (ITEStackResumeCodeAddr_31));
            }
            {
              Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (Var_116));
            }
            {
              Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_112, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_112, 1) = ((MR_Box) (Var_113));
              MR_hl_field(MR_mktag(3), Var_112, 2) = ((MR_Box) (Var_115));
            }
            {
              Var_111 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (Var_112));
              MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) ((MR_String) "redirect to cut for temp frame ite"));
            }
            {
              Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Var_111));
              MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Var_105));
              MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (Var_110));
            }
            *ThenCode_11 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_104);
            ll_backend__code_info__get_next_label_3_p_0(&AfterRegionOp_32, STATE_VARIABLE_CI_0_42, STATE_VARIABLE_CI_43);
            {
              Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_125, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), Var_125, 1) = ((MR_Box) (Var_114));
            }
            {
              Var_124 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (Var_125));
            }
            {
              Var_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_122, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Var_122, 2) = ((MR_Box) (Var_124));
            }
            {
              Var_121 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (Var_122));
              MR_hl_field(MR_mktag(0), Var_121, 1) = ((MR_Box) ((MR_String) "restore maxfr for temp frame ite"));
            }
            {
              Var_133 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_133, 0) = ((MR_Box) (SuccessRecordSlot_30));
            }
            {
              Var_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_131, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Var_131, 1) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(3), Var_131, 2) = ((MR_Box) (Var_133));
            }
            {
              Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (AfterRegionOp_32));
            }
            {
              Var_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_130, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), Var_130, 1) = ((MR_Box) (Var_131));
              MR_hl_field(MR_mktag(3), Var_130, 2) = ((MR_Box) (Var_134));
            }
            {
              Var_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (Var_130));
              MR_hl_field(MR_mktag(0), Var_129, 1) = ((MR_Box) ((MR_String) "jump around if the condition never succeeded"));
            }
            {
              Var_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_138, 0) = ((MR_Box) ((MR_Unsigned) 19U));
              MR_hl_field(MR_mktag(3), Var_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_138, 2) = ((MR_Box) (EmbeddedStackFrameId_29));
            }
            {
              Var_137 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_137, 0) = ((MR_Box) (Var_138));
              MR_hl_field(MR_mktag(0), Var_137, 1) = ((MR_Box) ((MR_String) "cleanup after the post-success failure of the condition"));
            }
            {
              Var_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_148, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_148, 1) = ((MR_Box) (AfterRegionOp_32));
            }
            {
              Var_147 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_147, 0) = ((MR_Box) (Var_148));
              MR_hl_field(MR_mktag(0), Var_147, 1) = ((MR_Box) ((MR_String) "after region op"));
            }
            {
              Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (Var_147));
              MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[42]));
              MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (Var_146));
            }
            {
              Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (Var_137));
              MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (Var_141));
            }
            {
              Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (Var_129));
              MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (Var_136));
            }
            {
              Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (Var_121));
              MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_128));
            }
            *ElseCode_12 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_120);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word RedoipSlot_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HijackType_25, (MR_Integer) 0))));
          MR_Word Var_82;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Var_91;

          {
            Var_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_4[7]));
            MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (ll_backend__code_loc_dep__ite_enter_then_8_p_0_2));
            MR_hl_field(MR_mktag(0), Var_82, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_82, 3) = ((MR_Box) (MaybeRegionInfo_26));
            MR_hl_field(MR_mktag(0), Var_82, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_82, (MR_String) "predicate \140ll_backend.code_loc_dep.ite_enter_then\'/8", (MR_String) "MaybeRegionInfo ite_half_hijack");
          {
            Var_91 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (RedoipSlot_37));
          }
          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[32])));
            MR_hl_field(MR_mktag(3), Var_87, 2) = ((MR_Box) (Var_91));
          }
          {
            Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (Var_87));
            MR_hl_field(MR_mktag(0), Var_86, 1) = ((MR_Box) ((MR_String) "restore redoip for half ite hijack"));
          }
          *ThenCode_11 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_86)));
          *ElseCode_12 = *ThenCode_11;
          *STATE_VARIABLE_CI_43 = STATE_VARIABLE_CI_0_42;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word RedofrSlot_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HijackType_25, (MR_Integer) 1))));
          MR_Word Var_46;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_62;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word MaxfrSlot_171 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HijackType_25, (MR_Integer) 2))));
          MR_Word RedoipSlot_172 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HijackType_25, (MR_Integer) 0))));

          {
            Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_4[7]));
            MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (ll_backend__code_loc_dep__ite_enter_then_8_p_0_1));
            MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (MaybeRegionInfo_26));
            MR_hl_field(MR_mktag(0), Var_46, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_46, (MR_String) "predicate \140ll_backend.code_loc_dep.ite_enter_then\'/8", (MR_String) "MaybeRegionInfo ite_full_hijack");
          {
            Var_54 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (MaxfrSlot_171));
          }
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (Var_54));
          }
          {
            Var_55 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (RedoipSlot_172));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(3), Var_52, 2) = ((MR_Box) (Var_55));
          }
          {
            Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (Var_52));
            MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) ((MR_String) "restore redoip for full ite hijack"));
          }
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Var_54));
          }
          {
            Var_62 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (RedofrSlot_38));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(3), Var_59, 2) = ((MR_Box) (Var_62));
          }
          {
            Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (Var_59));
            MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) ((MR_String) "restore redofr for full ite hijack"));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_57));
          }
          *ThenCode_11 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_50);
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[30])));
            MR_hl_field(MR_mktag(3), Var_67, 2) = ((MR_Box) (Var_55));
          }
          {
            Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (Var_67));
            MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) ((MR_String) "restore redoip for full ite hijack"));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[31])));
            MR_hl_field(MR_mktag(3), Var_75, 2) = ((MR_Box) (Var_62));
          }
          {
            Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (Var_75));
            MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) ((MR_String) "restore redofr for full ite hijack"));
          }
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
            MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_73));
          }
          *ElseCode_12 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_65);
          *STATE_VARIABLE_CI_43 = STATE_VARIABLE_CI_0_42;
        }
        break;
    }
    if ((ResumeKnown0_17 == (MR_Word) ((MR_Unsigned) 0U)))
      ResumeKnown_39 = (MR_Word) ((MR_Unsigned) 0U);
    else
      ResumeKnown_39 = HijackResumeKnown_23;
    {
      FailInfo_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FailInfo_41, 0) = ((MR_Box) (ResumePoints_22));
      MR_hl_field(MR_mktag(0), FailInfo_41, 1) = ((MR_Box) (ResumeKnown_39));
      MR_hl_field(MR_mktag(0), FailInfo_41, 2) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 2U)))) | (((MR_Unsigned) (OldCondEnv_24) << 1))));
    }
    ll_backend__code_loc_dep__set_fail_info_3_p_0(FailInfo_41, STATE_VARIABLE_CLD_0_44, STATE_VARIABLE_CLD_45);
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__maybe_pick_stack_resume_point_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Map_2,
  MR_Word * Addr_3)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          *Map_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          *Addr_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          *Map_2 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
          *Addr_3 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        {
          *Map_2 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
          *Addr_3 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__resume_point_stack_addr_2_p_0(
  MR_Word ResumePoint_3,
  MR_Word * StackAddr_4)
{
  {
    MR_bool succeeded;
    MR_Word AddrPrime_10;

    switch (MR_tag((MR_Word) ResumePoint_3)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          AddrPrime_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint_3, (MR_Integer) 1))));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          AddrPrime_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResumePoint_3, (MR_Integer) 3))));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        {
          AddrPrime_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ResumePoint_3, (MR_Integer) 1))));
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
      *StackAddr_4 = AddrPrime_10;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_loc_dep.pick_stack_resume_point\'/3", (MR_String) "no stack resume point");
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__prepare_for_ite_hijack_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__code_loc_dep__IntroducedFrom__pred__prepare_for_ite_hijack__1048__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__prepare_for_ite_hijack_8_p_0(
  MR_Word CondCodeModel_9,
  MR_Word MaybeEmbeddedFrameId_10,
  MR_Word * HijackInfo_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_CI_0_33,
  MR_Word * STATE_VARIABLE_CI_34,
  MR_Word STATE_VARIABLE_CLD_0_35,
  MR_Word * STATE_VARIABLE_CLD_36)
{
  {
    MR_bool succeeded;
    MR_Word FailInfo_15;
    MR_Word ResumeKnown_17;
    MR_Word CurfrMaxfr_18;
    MR_Word CondEnv_19;
    MR_Word Allow_20;
    MR_Word HijackType_21;
    MR_Word MaybeRegionInfo_22;

    ll_backend__code_loc_dep__get_fail_info_2_p_0(STATE_VARIABLE_CLD_0_35, &FailInfo_15);
    ResumeKnown_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo_15, (MR_Integer) 1))));
    CurfrMaxfr_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo_15, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
    CondEnv_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo_15, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
    Allow_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo_15, (MR_Integer) 2))) & (MR_Integer) 1);
    switch (CondCodeModel_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word Var_132;

          {
            Var_132 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_132, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_4[6]));
            MR_hl_field(MR_mktag(0), Var_132, 1) = ((MR_Box) (ll_backend__code_loc_dep__prepare_for_ite_hijack_8_p_0_1));
            MR_hl_field(MR_mktag(0), Var_132, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_132, 3) = ((MR_Box) (MaybeEmbeddedFrameId_10));
            MR_hl_field(MR_mktag(0), Var_132, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_132, (MR_String) "predicate \140ll_backend.code_loc_dep.prepare_for_ite_hijack\'/8", (MR_String) "MaybeEmbeddedFrameId in model_semi");
          HijackType_21 = (MR_Word) ((MR_Unsigned) 0U);
          *Code_12 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[35])));
          MaybeRegionInfo_22 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_CI_34 = STATE_VARIABLE_CI_0_33;
          *STATE_VARIABLE_CLD_36 = STATE_VARIABLE_CLD_0_35;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word STATE_VARIABLE_CLD_54_54;

          succeeded = (Allow_20 == (MR_Integer) 1);
          if (!(succeeded))
          {
            succeeded = (CondEnv_19 == (MR_Integer) 0);
            if (!(succeeded))
            {
              succeeded = (MaybeEmbeddedFrameId_10 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
              }
            }
          }
          if (succeeded)
          {
            MR_Word MaxfrSlot_24;
            MR_Word TempFrameCode_25;
            MR_Word MaxfrCode_26;
            MR_Word InitSuccessCode_29;
            MR_Word STATE_VARIABLE_CI_39_39;
            MR_Word STATE_VARIABLE_CLD_40_40;
            MR_Word STATE_VARIABLE_CI_44_44;
            MR_Word STATE_VARIABLE_CLD_45_45;
            MR_Word Var_46;
            MR_Word Var_47;
            MR_Word Var_61;

            ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[1])), (MR_Integer) 1, &MaxfrSlot_24, STATE_VARIABLE_CI_0_33, &STATE_VARIABLE_CI_39_39, STATE_VARIABLE_CLD_0_35, &STATE_VARIABLE_CLD_40_40);
            {
              HijackType_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), HijackType_21, 0) = ((MR_Box) (MaxfrSlot_24));
            }
            ll_backend__code_loc_dep__create_temp_frame_7_p_0((MR_Word) ((MR_Unsigned) 8U), (MR_String) "prepare for ite", &TempFrameCode_25, STATE_VARIABLE_CI_39_39, &STATE_VARIABLE_CI_44_44, STATE_VARIABLE_CLD_40_40, &STATE_VARIABLE_CLD_45_45);
            {
              Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (MaxfrSlot_24));
              MR_hl_field(MR_mktag(3), Var_47, 2) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_3[1]));
            }
            {
              Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Var_47));
              MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) ((MR_String) "prepare for ite"));
            }
            MaxfrCode_26 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_46)));
            if ((MaybeEmbeddedFrameId_10 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              InitSuccessCode_29 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              MaybeRegionInfo_22 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_CI_34 = STATE_VARIABLE_CI_44_44;
              STATE_VARIABLE_CLD_54_54 = STATE_VARIABLE_CLD_45_45;
            }
            else
            {
              MR_Word EmbeddedFrameId_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEmbeddedFrameId_10, (MR_Integer) 0))));
              MR_Word SuccessRecordSlot_28;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word Var_60;

              ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) ((MR_Unsigned) 40U), (MR_Integer) 0, &SuccessRecordSlot_28, STATE_VARIABLE_CI_44_44, STATE_VARIABLE_CI_34, STATE_VARIABLE_CLD_45_45, &STATE_VARIABLE_CLD_54_54);
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (SuccessRecordSlot_28));
                MR_hl_field(MR_mktag(3), Var_56, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[36])));
              }
              {
                Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Var_56));
                MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) ((MR_String) "record no success of the condition yes"));
              }
              InitSuccessCode_29 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_55)));
              {
                Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (EmbeddedFrameId_27));
                MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (SuccessRecordSlot_28));
              }
              {
                MaybeRegionInfo_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeRegionInfo_22, 0) = ((MR_Box) (Var_60));
              }
            }
            Var_61 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaxfrCode_26, InitSuccessCode_29);
            *Code_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TempFrameCode_25, Var_61);
          }
          else
          {
            switch (CurfrMaxfr_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word RedofrSlot_32;
                  MR_Word STATE_VARIABLE_CI_64_64;
                  MR_Word STATE_VARIABLE_CLD_65_65;
                  MR_Word STATE_VARIABLE_CI_71_71;
                  MR_Word STATE_VARIABLE_CLD_72_72;
                  MR_Word Var_81;
                  MR_Word Var_82;
                  MR_Word Var_83;
                  MR_Word Var_87;
                  MR_Word Var_88;
                  MR_Word Var_89;
                  MR_Word Var_95;
                  MR_Word Var_96;
                  MR_Word Var_97;
                  MR_Word MaxfrSlot_140;
                  MR_Word RedoipSlot_141;

                  ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[7])), (MR_Integer) 1, &RedoipSlot_141, STATE_VARIABLE_CI_0_33, &STATE_VARIABLE_CI_64_64, STATE_VARIABLE_CLD_0_35, &STATE_VARIABLE_CLD_65_65);
                  ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[8])), (MR_Integer) 1, &RedofrSlot_32, STATE_VARIABLE_CI_64_64, &STATE_VARIABLE_CI_71_71, STATE_VARIABLE_CLD_65_65, &STATE_VARIABLE_CLD_72_72);
                  ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[1])), (MR_Integer) 1, &MaxfrSlot_140, STATE_VARIABLE_CI_71_71, STATE_VARIABLE_CI_34, STATE_VARIABLE_CLD_72_72, &STATE_VARIABLE_CLD_54_54);
                  {
                    HijackType_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), HijackType_21, 0) = ((MR_Box) (RedoipSlot_141));
                    MR_hl_field(MR_mktag(3), HijackType_21, 1) = ((MR_Box) (RedofrSlot_32));
                    MR_hl_field(MR_mktag(3), HijackType_21, 2) = ((MR_Box) (MaxfrSlot_140));
                  }
                  {
                    Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (MaxfrSlot_140));
                    MR_hl_field(MR_mktag(3), Var_83, 2) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_3[1]));
                  }
                  {
                    Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Var_83));
                    MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) ((MR_String) "prepare for full ite hijack"));
                  }
                  {
                    Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), Var_89, 1) = ((MR_Box) (RedoipSlot_141));
                    MR_hl_field(MR_mktag(3), Var_89, 2) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_3[7]));
                  }
                  {
                    Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (Var_89));
                    MR_hl_field(MR_mktag(0), Var_88, 1) = ((MR_Box) ((MR_String) "prepare for full ite hijack"));
                  }
                  {
                    Var_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_97, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), Var_97, 1) = ((MR_Box) (RedofrSlot_32));
                    MR_hl_field(MR_mktag(3), Var_97, 2) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_3[8]));
                  }
                  {
                    Var_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (Var_97));
                    MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) ((MR_String) "prepare for full ite hijack"));
                  }
                  {
                    Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
                    MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_1[17])));
                  }
                  {
                    Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
                    MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_95));
                  }
                  {
                    Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
                    MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_87));
                  }
                  *Code_12 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_81);
                }
                break;
              case (MR_Integer) 0:
                if ((ResumeKnown_17 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word RedoipSlot_31;
                  MR_Word Var_120;
                  MR_Word Var_121;

                  ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[9])), (MR_Integer) 1, &RedoipSlot_31, STATE_VARIABLE_CI_0_33, STATE_VARIABLE_CI_34, STATE_VARIABLE_CLD_0_35, &STATE_VARIABLE_CLD_54_54);
                  {
                    HijackType_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), HijackType_21, 0) = ((MR_Box) (RedoipSlot_31));
                  }
                  {
                    Var_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_121, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), Var_121, 1) = ((MR_Box) (RedoipSlot_31));
                    MR_hl_field(MR_mktag(3), Var_121, 2) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_3[9]));
                  }
                  {
                    Var_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (Var_121));
                    MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) ((MR_String) "prepare for half ite hijack"));
                  }
                  *Code_12 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_120)));
                }
                else
                {
                  HijackType_21 = (MR_Word) ((MR_Unsigned) 4U);
                  *Code_12 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[37])));
                  *STATE_VARIABLE_CI_34 = STATE_VARIABLE_CI_0_33;
                  STATE_VARIABLE_CLD_54_54 = STATE_VARIABLE_CLD_0_35;
                }
                break;
            }
            MaybeRegionInfo_22 = (MR_Word) ((MR_Unsigned) 0U);
          }
          ll_backend__code_loc_dep__inside_non_condition_2_p_0(STATE_VARIABLE_CLD_54_54, STATE_VARIABLE_CLD_36);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *HijackInfo_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ResumeKnown_17));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) (CondEnv_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (HijackType_21));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeRegionInfo_22));
    }
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__inside_non_condition_2_p_0(
  MR_Word STATE_VARIABLE_CLD_0_11,
  MR_Word * STATE_VARIABLE_CLD_12)
{
  {
    MR_Word FailInfo0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 5))));
    MR_Word ResumePoints_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo0_4, (MR_Integer) 0))));
    MR_Word ResumeKnown_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo0_4, (MR_Integer) 1))));
    MR_Word FailInfo_10;
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 0))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 1))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 2))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 3))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 4))));
    MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_11, (MR_Integer) 6))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo0_4, (MR_Integer) 2)));

    {
      FailInfo_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FailInfo_10, 0) = ((MR_Box) (ResumePoints_5));
      MR_hl_field(MR_mktag(0), FailInfo_10, 1) = ((MR_Box) (ResumeKnown_6));
      MR_hl_field(MR_mktag(0), FailInfo_10, 2) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 2U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 1))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (FailInfo_10));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_21));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__undo_disj_hijack_4_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__code_loc_dep__IntroducedFrom__pred__undo_disj_hijack__947__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__undo_disj_hijack_4_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__code_loc_dep__IntroducedFrom__pred__undo_disj_hijack__961__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__undo_disj_hijack_4_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__code_loc_dep__IntroducedFrom__pred__undo_disj_hijack__959__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__undo_disj_hijack_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__code_loc_dep__IntroducedFrom__pred__undo_disj_hijack__970__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__undo_disj_hijack_4_p_0(
  MR_Word HijackInfo_5,
  MR_Word * Code_6,
  MR_Word STATE_VARIABLE_CLD_0_21,
  MR_Word * STATE_VARIABLE_CLD_22)
{
  {
    MR_bool succeeded;
    MR_Word FailInfo0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_21, (MR_Integer) 5))));
    MR_Word ResumePoints_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo0_8, (MR_Integer) 0))));
    MR_Word ResumeKnown_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo0_8, (MR_Integer) 1))));
    MR_Word CurfrMaxfr_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo0_8, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
    MR_Word CondEnv_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo0_8, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo0_8, (MR_Integer) 2)));

    switch (MR_tag((MR_Word) HijackInfo_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HijackInfo_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Code_6 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            }
            break;
          case (MR_Integer) 1:
            {
              *Code_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[15])));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ResumePoint_14;
              MR_Word StackLabel_16;
              MR_Word LabelConst_17;
              MR_Word Var_59;
              MR_Word Var_63;
              MR_Word Var_64;
              MR_Word Var_65;
              MR_Box conv0_ResumePoint_14;
              MR_Word Var_15;

              {
                Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_4[4]));
                MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (ll_backend__code_loc_dep__undo_disj_hijack_4_p_0_4));
                MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (CurfrMaxfr_11));
                MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) ((MR_Integer) 0));
              }
              mercury__require__expect_3_p_0(Var_59, (MR_String) "predicate \140ll_backend.code_loc_dep.undo_disj_hijack\'/4", (MR_String) "maxfr may differ from curfr in disj_quarter_hijack");
              mercury__stack__det_top_2_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0), ResumePoints_9, &conv0_ResumePoint_14);
              ResumePoint_14 = ((MR_Word) (conv0_ResumePoint_14));
              ll_backend__code_loc_dep__pick_stack_resume_point_3_p_0(ResumePoint_14, &Var_15, &StackLabel_16);
              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (StackLabel_16));
              }
              {
                LabelConst_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), LabelConst_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), LabelConst_17, 1) = ((MR_Box) (Var_63));
              }
              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[32])));
                MR_hl_field(MR_mktag(3), Var_65, 2) = ((MR_Box) (LabelConst_17));
              }
              {
                Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (Var_65));
                MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) ((MR_String) "restore redoip for quarter disj hijack (curfr==maxfr)"));
              }
              *Code_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_64)));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RedoipSlot_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HijackInfo_5, (MR_Integer) 0))));
          MR_Word Var_44;
          MR_Word Var_48;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_57;

          {
            Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_4[5]));
            MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (ll_backend__code_loc_dep__undo_disj_hijack_4_p_0_2));
            MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (ResumeKnown_10));
            MR_hl_field(MR_mktag(0), Var_44, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_44, (MR_String) "predicate \140ll_backend.code_loc_dep.undo_disj_hijack\'/4", (MR_String) "resume point known in disj_half_hijack");
          {
            Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_4[4]));
            MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (ll_backend__code_loc_dep__undo_disj_hijack_4_p_0_3));
            MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (CurfrMaxfr_11));
            MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_48, (MR_String) "predicate \140ll_backend.code_loc_dep.undo_disj_hijack\'/4", (MR_String) "maxfr may differ from curfr in disj_half_hijack");
          {
            Var_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (RedoipSlot_18));
          }
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[32])));
            MR_hl_field(MR_mktag(3), Var_53, 2) = ((MR_Box) (Var_57));
          }
          {
            Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) ((MR_String) "restore redoip for half disj hijack (curfr==maxfr)"));
          }
          *Code_6 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_52)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word RedofrSlot_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HijackInfo_5, (MR_Integer) 1))));
          MR_Word Var_23;
          MR_Word Var_27;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_33;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_41;
          MR_Word RedoipSlot_80 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HijackInfo_5, (MR_Integer) 0))));

          {
            Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_4[4]));
            MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ll_backend__code_loc_dep__undo_disj_hijack_4_p_0_1));
            MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (CurfrMaxfr_11));
            MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) ((MR_Integer) 1));
          }
          mercury__require__expect_3_p_0(Var_23, (MR_String) "predicate \140ll_backend.code_loc_dep.undo_disj_hijack\'/4", (MR_String) "maxfr same as curfr in disj_full_hijack");
          {
            Var_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (RedoipSlot_80));
          }
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[30])));
            MR_hl_field(MR_mktag(3), Var_29, 2) = ((MR_Box) (Var_33));
          }
          {
            Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (Var_29));
            MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) ((MR_String) "restore redoip for full disj hijack"));
          }
          {
            Var_41 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (RedofrSlot_19));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__code_loc_dep_scalar_common_1[31])));
            MR_hl_field(MR_mktag(3), Var_37, 2) = ((MR_Box) (Var_41));
          }
          {
            Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Var_37));
            MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) ((MR_String) "restore redofr for full disj hijack"));
          }
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
            MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_35));
          }
          *Code_6 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_27);
        }
        break;
    }
    succeeded = (HijackInfo_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (CondEnv_12 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word FailInfo_20;

      {
        FailInfo_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FailInfo_20, 0) = ((MR_Box) (ResumePoints_9));
        MR_hl_field(MR_mktag(0), FailInfo_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), FailInfo_20, 2) = (MR_Box) (packed_word_0);
      }
      ll_backend__code_loc_dep__set_fail_info_3_p_0(FailInfo_20, STATE_VARIABLE_CLD_0_21, STATE_VARIABLE_CLD_22);
    }
    else
      *STATE_VARIABLE_CLD_22 = STATE_VARIABLE_CLD_0_21;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__pick_stack_resume_point_3_p_0(
  MR_Word ResumePoint_4,
  MR_Word * Map_5,
  MR_Word * Addr_6)
{
  {
    MR_bool succeeded;
    MR_Word MapPrime_7;
    MR_Word AddrPrime_8;

    switch (MR_tag((MR_Word) ResumePoint_4)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MapPrime_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint_4, (MR_Integer) 0))));
          AddrPrime_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePoint_4, (MR_Integer) 1))));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MapPrime_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResumePoint_4, (MR_Integer) 2))));
          AddrPrime_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResumePoint_4, (MR_Integer) 3))));
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        {
          MapPrime_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ResumePoint_4, (MR_Integer) 0))));
          AddrPrime_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ResumePoint_4, (MR_Integer) 1))));
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      *Map_5 = MapPrime_7;
      *Addr_6 = AddrPrime_8;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_loc_dep.pick_stack_resume_point\'/3", (MR_String) "no stack resume point");
        return;
      }
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__prepare_for_disj_hijack_7_p_0(
  MR_Word CodeModel_8,
  MR_Word * HijackInfo_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CI_0_24,
  MR_Word * STATE_VARIABLE_CI_25,
  MR_Word STATE_VARIABLE_CLD_0_26,
  MR_Word * STATE_VARIABLE_CLD_27)
{
  {
    MR_bool succeeded;
    MR_Word FailInfo_13;
    MR_Word ResumePoints_14;
    MR_Word ResumeKnown_15;
    MR_Word CurfrMaxfr_16;
    MR_Word CondEnv_17;
    MR_Word Allow_18;

    ll_backend__code_loc_dep__get_fail_info_2_p_0(STATE_VARIABLE_CLD_0_26, &FailInfo_13);
    ResumePoints_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo_13, (MR_Integer) 0))));
    ResumeKnown_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo_13, (MR_Integer) 1))));
    CurfrMaxfr_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo_13, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
    CondEnv_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo_13, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
    Allow_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo_13, (MR_Integer) 2))) & (MR_Integer) 1);
    switch (CodeModel_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          *HijackInfo_9 = (MR_Word) ((MR_Unsigned) 0U);
          *Code_10 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[29])));
          *STATE_VARIABLE_CI_25 = STATE_VARIABLE_CI_0_24;
          *STATE_VARIABLE_CLD_27 = STATE_VARIABLE_CLD_0_26;
        }
        break;
      case (MR_Integer) 2:
        switch (CondEnv_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HijackInfo_9 = (MR_Word) ((MR_Unsigned) 4U);
              ll_backend__code_loc_dep__create_temp_frame_7_p_0((MR_Word) ((MR_Unsigned) 8U), (MR_String) "prepare for disjunction", Code_10, STATE_VARIABLE_CI_0_24, STATE_VARIABLE_CI_25, STATE_VARIABLE_CLD_0_26, STATE_VARIABLE_CLD_27);
            }
            break;
          case (MR_Integer) 1:
            switch (Allow_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (CurfrMaxfr_16) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word RedofrSlot_23;
                      MR_Word STATE_VARIABLE_CI_30_30;
                      MR_Word STATE_VARIABLE_CLD_31_31;
                      MR_Word Var_42;
                      MR_Word Var_43;
                      MR_Word Var_44;
                      MR_Word Var_50;
                      MR_Word Var_51;
                      MR_Word Var_52;
                      MR_Word RedoipSlot_106;

                      ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[7])), (MR_Integer) 1, &RedoipSlot_106, STATE_VARIABLE_CI_0_24, &STATE_VARIABLE_CI_30_30, STATE_VARIABLE_CLD_0_26, &STATE_VARIABLE_CLD_31_31);
                      ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[8])), (MR_Integer) 1, &RedofrSlot_23, STATE_VARIABLE_CI_30_30, STATE_VARIABLE_CI_25, STATE_VARIABLE_CLD_31_31, STATE_VARIABLE_CLD_27);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *HijackInfo_9 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (RedoipSlot_106));
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (RedofrSlot_23));
                      }
                      {
                        Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (RedoipSlot_106));
                        MR_hl_field(MR_mktag(3), Var_44, 2) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_3[7]));
                      }
                      {
                        Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Var_44));
                        MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) ((MR_String) "prepare for full disj hijack"));
                      }
                      {
                        Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (RedofrSlot_23));
                        MR_hl_field(MR_mktag(3), Var_52, 2) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_3[8]));
                      }
                      {
                        Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (Var_52));
                        MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) ((MR_String) "prepare for full disj hijack"));
                      }
                      {
                        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
                        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_1[13])));
                      }
                      {
                        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
                        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_50));
                      }
                      *Code_10 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_42);
                    }
                    break;
                  case (MR_Integer) 0:
                    if ((ResumeKnown_15 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word RedoipSlot_113;
                      MR_Word Var_119;
                      MR_Word Var_120;

                      ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[9])), (MR_Integer) 1, &RedoipSlot_113, STATE_VARIABLE_CI_0_24, STATE_VARIABLE_CI_25, STATE_VARIABLE_CLD_0_26, STATE_VARIABLE_CLD_27);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *HijackInfo_9 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RedoipSlot_113));
                      }
                      {
                        Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_120, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(MR_mktag(3), Var_120, 1) = ((MR_Box) (RedoipSlot_113));
                        MR_hl_field(MR_mktag(3), Var_120, 2) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_3[9]));
                      }
                      {
                        Var_119 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (Var_120));
                        MR_hl_field(MR_mktag(0), Var_119, 1) = ((MR_Box) ((MR_String) "prepare for half disj hijack"));
                      }
                      *Code_10 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_119)));
                    }
                    else
                    {
                      MR_Word Var_127 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ResumeKnown_15, (MR_Integer) 0))) & (MR_Integer) 1);

                      switch (Var_127) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            *HijackInfo_9 = (MR_Word) ((MR_Unsigned) 8U);
                            *Code_10 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[33])));
                            *STATE_VARIABLE_CI_25 = STATE_VARIABLE_CI_0_24;
                            *STATE_VARIABLE_CLD_27 = STATE_VARIABLE_CLD_0_26;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word RedoipSlot_22;
                            MR_Word Var_76;
                            MR_Word Var_77;

                            ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[9])), (MR_Integer) 1, &RedoipSlot_22, STATE_VARIABLE_CI_0_24, STATE_VARIABLE_CI_25, STATE_VARIABLE_CLD_0_26, STATE_VARIABLE_CLD_27);
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              *HijackInfo_9 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RedoipSlot_22));
                            }
                            {
                              Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                              MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (RedoipSlot_22));
                              MR_hl_field(MR_mktag(3), Var_77, 2) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_3[9]));
                            }
                            {
                              Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (Var_77));
                              MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) ((MR_String) "prepare for half disj hijack"));
                            }
                            *Code_10 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_76)));
                          }
                          break;
                      }
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word TypeCtorInfo_108_108;
                  MR_Word TopResumePoint_19;
                  MR_Word RestResumePoints_20;
                  MR_Word Var_88;
                  MR_Word Var_89;
                  MR_Box conv0_TopResumePoint_19;

                  succeeded = (CurfrMaxfr_16 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    succeeded = (ResumeKnown_15 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_88 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ResumeKnown_15, (MR_Integer) 0))) & (MR_Integer) 1);
                      succeeded = (Var_88 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        TypeCtorInfo_108_108 = (MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0);
                        succeeded = mercury__stack__pop_3_p_0(TypeCtorInfo_108_108, &conv0_TopResumePoint_19, ResumePoints_14, &RestResumePoints_20);
                        if (succeeded)
                        {
                          TopResumePoint_19 = ((MR_Word) (conv0_TopResumePoint_19));
                          succeeded = MR_TRUE;
                        }
                        if (succeeded)
                        {
                          succeeded = mercury__stack__is_empty_1_p_0(TypeCtorInfo_108_108, RestResumePoints_20);
                          if (succeeded)
                          {
                            succeeded = ((MR_tag((MR_Word) TopResumePoint_19)) == (MR_Integer) 1);
                            if (succeeded)
                            {
                              Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TopResumePoint_19, (MR_Integer) 1))));
                              succeeded = (Var_89 == (MR_Word) ((MR_Unsigned) 8U));
                            }
                          }
                        }
                      }
                    }
                  }
                  if (succeeded)
                  {
                    *HijackInfo_9 = (MR_Word) ((MR_Unsigned) 8U);
                    *Code_10 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_1[34])));
                    *STATE_VARIABLE_CLD_27 = STATE_VARIABLE_CLD_0_26;
                    *STATE_VARIABLE_CI_25 = STATE_VARIABLE_CI_0_24;
                  }
                  else
                  {
                    *HijackInfo_9 = (MR_Word) ((MR_Unsigned) 4U);
                    ll_backend__code_loc_dep__create_temp_frame_7_p_0((MR_Word) ((MR_Unsigned) 8U), (MR_String) "prepare for disjunction", Code_10, STATE_VARIABLE_CI_0_24, STATE_VARIABLE_CI_25, STATE_VARIABLE_CLD_0_26, STATE_VARIABLE_CLD_27);
                  }
                }
                break;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__create_temp_frame_7_p_0(
  MR_Word Redoip_8,
  MR_String Comment_9,
  MR_Word * Code_10,
  MR_Word STATE_VARIABLE_CI_0_22,
  MR_Word * STATE_VARIABLE_CI_23,
  MR_Word STATE_VARIABLE_CLD_0_24,
  MR_Word * STATE_VARIABLE_CLD_25)
{
  {
    MR_Word CodeModel_13;
    MR_Word Kind_14;
    MR_Word FailInfo0_15;
    MR_Word ResumePoints_16;
    MR_Word ResumeKnown_17;
    MR_Word FailInfo_21;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Integer Var_41;
    MR_Unsigned packed_word_0;

    CodeModel_13 = ll_backend__code_info__get_proc_model_1_f_0(STATE_VARIABLE_CI_0_22);
    switch (CodeModel_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        Kind_14 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        Kind_14 = (MR_Integer) 1;
        break;
    }
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = (MR_Box) ((MR_Unsigned) (Kind_14));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Redoip_8));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(3), Var_27, 2) = ((MR_Box) (Var_29));
    }
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (Comment_9));
    }
    *Code_10 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_26)));
    ll_backend__code_info__set_created_temp_frame_3_p_0((MR_Integer) 1, STATE_VARIABLE_CI_0_22, STATE_VARIABLE_CI_23);
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_24, (MR_Integer) 0))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_24, (MR_Integer) 1))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_24, (MR_Integer) 2))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_24, (MR_Integer) 3))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_24, (MR_Integer) 4))));
    FailInfo0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_24, (MR_Integer) 5))));
    Var_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_24, (MR_Integer) 6))));
    ResumePoints_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo0_15, (MR_Integer) 0))));
    ResumeKnown_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo0_15, (MR_Integer) 1))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo0_15, (MR_Integer) 2)));
    {
      FailInfo_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FailInfo_21, 0) = ((MR_Box) (ResumePoints_16));
      MR_hl_field(MR_mktag(0), FailInfo_21, 1) = ((MR_Box) (ResumeKnown_17));
      MR_hl_field(MR_mktag(0), FailInfo_21, 2) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 2))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_25 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (FailInfo_21));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_41));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__save_hp_in_branch_6_p_0(
  MR_Word * Code_7,
  MR_Word * Slot_8,
  MR_Word Pos0_9,
  MR_Word * Pos_10,
  MR_Word STATE_VARIABLE_CI_0_14,
  MR_Word * STATE_VARIABLE_CI_15)
{
  {
    MR_Word CLD0_12 = (MR_Word) (Pos0_9);
    MR_Word CLD_13;

    ll_backend__code_loc_dep__save_hp_6_p_0(Code_7, Slot_8, STATE_VARIABLE_CI_0_14, STATE_VARIABLE_CI_15, CLD0_12, &CLD_13);
    *Pos_10 = (MR_Word) (CLD_13);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__save_hp_6_p_0(
  MR_Word * Code_7,
  MR_Word * HpSlot_8,
  MR_Word STATE_VARIABLE_CI_0_11,
  MR_Word * STATE_VARIABLE_CI_12,
  MR_Word STATE_VARIABLE_CLD_0_13,
  MR_Word * STATE_VARIABLE_CLD_14)
{
  {
    MR_Word Var_20;
    MR_Word Var_21;

    ll_backend__code_loc_dep__acquire_temp_slot_7_p_0((MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[5])), (MR_Integer) 1, HpSlot_8, STATE_VARIABLE_CI_0_11, STATE_VARIABLE_CI_12, STATE_VARIABLE_CLD_0_13, STATE_VARIABLE_CLD_14);
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (*HpSlot_8));
    }
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) ((MR_String) "Save heap pointer"));
    }
    *Code_7 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_20)));
  }
}

void MR_CALL 
ll_backend__code_loc_dep__acquire_temp_slot_7_p_0(
  MR_Word Item_8,
  MR_Word Persistence_9,
  MR_Word * StackVar_10,
  MR_Word STATE_VARIABLE_CI_0_21,
  MR_Word * STATE_VARIABLE_CI_22,
  MR_Word STATE_VARIABLE_CLD_0_23,
  MR_Word * STATE_VARIABLE_CLD_24)
{
  {
    MR_bool succeeded;
    MR_Word TempContentMap0_13;
    MR_Word TempContentList_14;
    MR_Word TempsInUse0_15;
    MR_Word TempsInUse_18;
    MR_Word STATE_VARIABLE_CI_25_25;
    MR_Word ChosenStackVar_16;
    MR_Word Var_17;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_84;
    MR_Integer Var_85;

    ll_backend__code_info__get_temp_content_map_2_p_0(STATE_VARIABLE_CI_0_21, &TempContentMap0_13);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0), TempContentMap0_13, &TempContentList_14);
    TempsInUse0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_23, (MR_Integer) 4))));
    succeeded = ll_backend__code_loc_dep__find_unused_slot_for_item_5_p_0(TempContentList_14, Item_8, TempsInUse0_15, &ChosenStackVar_16, &Var_17);
    if (succeeded)
    {
      *StackVar_10 = ChosenStackVar_16;
      STATE_VARIABLE_CI_25_25 = STATE_VARIABLE_CI_0_21;
    }
    else
    {
      MR_Word CodeModel_42;
      MR_Word StackId_43;
      MR_Integer VarSlotCount_44;
      MR_Integer TempSlotCount0_45;
      MR_Integer FirstSlotNum_46;
      MR_Word TempContentMap0_47;
      MR_Integer TempSlotCount_49;
      MR_Word TempContentMap_50;
      MR_Integer Var_51;
      MR_Word STATE_VARIABLE_CI_21_53;

      CodeModel_42 = ll_backend__code_info__get_proc_model_1_f_0(STATE_VARIABLE_CI_0_21);
      StackId_43 = ll_backend__llds__code_model_to_main_stack_1_f_0(CodeModel_42);
      ll_backend__code_info__get_var_slot_count_2_p_0(STATE_VARIABLE_CI_0_21, &VarSlotCount_44);
      ll_backend__code_info__get_max_temp_slot_count_2_p_0(STATE_VARIABLE_CI_0_21, &TempSlotCount0_45);
      Var_51 = (MR_Integer) ((MR_Unsigned) VarSlotCount_44 + (MR_Unsigned) TempSlotCount0_45);
      FirstSlotNum_46 = (MR_Integer) ((MR_Unsigned) Var_51 + (MR_Unsigned) 1);
      ll_backend__code_info__get_temp_content_map_2_p_0(STATE_VARIABLE_CI_0_21, &TempContentMap0_47);
      *StackVar_10 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(StackId_43, FirstSlotNum_46);
      mercury__map__det_insert_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_slot_contents_0), ((MR_Box) (*StackVar_10)), ((MR_Box) (Item_8)), TempContentMap0_47, &TempContentMap_50);
      TempSlotCount_49 = (MR_Integer) ((MR_Unsigned) TempSlotCount0_45 + (MR_Unsigned) 1);
      ll_backend__code_info__set_max_temp_slot_count_3_p_0(TempSlotCount_49, STATE_VARIABLE_CI_0_21, &STATE_VARIABLE_CI_21_53);
      ll_backend__code_info__set_temp_content_map_3_p_0(TempContentMap_50, STATE_VARIABLE_CI_21_53, &STATE_VARIABLE_CI_25_25);
    }
    mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (*StackVar_10)), TempsInUse0_15, &TempsInUse_18);
    Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_23, (MR_Integer) 0))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_23, (MR_Integer) 1))));
    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_23, (MR_Integer) 2))));
    Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_23, (MR_Integer) 3))));
    Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_23, (MR_Integer) 5))));
    Var_85 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_23, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_24 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TempsInUse_18));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_85));
    }
    switch (Persistence_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_CI_22 = STATE_VARIABLE_CI_25_25;
        break;
      case (MR_Integer) 0:
        {
          MR_Word PersistentTemps0_19;
          MR_Word PersistentTemps_20;

          ll_backend__code_info__get_persistent_temps_2_p_0(STATE_VARIABLE_CI_25_25, &PersistentTemps0_19);
          mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (*StackVar_10)), PersistentTemps0_19, &PersistentTemps_20);
          ll_backend__code_info__set_persistent_temps_3_p_0(PersistentTemps_20, STATE_VARIABLE_CI_25_25, STATE_VARIABLE_CI_22);
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__find_unused_slot_for_item_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Item_8,
  MR_Word TempsInUse_9,
  MR_Word * ChosenStackVar_10,
  MR_Word * Remainder_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Head_6;
    MR_Word Tail_7;
    MR_Word HeadStackVar_12;
    MR_Word HeadSlotType_13;
    MR_Word TypeCtorInfo_14_14;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Head_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Tail_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      HeadStackVar_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Head_6, (MR_Integer) 0))));
      HeadSlotType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Head_6, (MR_Integer) 1))));
      succeeded = ll_backend__continuation_info____Unify____slot_contents_0_0(HeadSlotType_13, Item_8);
      if (succeeded)
      {
        TypeCtorInfo_14_14 = (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        succeeded = mercury__set__member_2_p_0(TypeCtorInfo_14_14, ((MR_Box) (HeadStackVar_12)), TempsInUse_9);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        *ChosenStackVar_10 = HeadStackVar_12;
        *Remainder_11 = Tail_7;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Tail_7;

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

static MR_Box MR_CALL 
ll_backend__code_loc_dep__after_all_branches_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ll_backend__llds__abs_locn_to_lval_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__after_all_branches_4_p_0(
  MR_Word StoreMap_5,
  MR_Word MaybeEnd_6,
  MR_Word CI_7,
  MR_Word * STATE_VARIABLE_CLD_11)
{
  if ((MaybeEnd_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_loc_dep.after_all_branches\'/4", (MR_String) "no branches in branched control structure");
      return;
    }
  }
  else
  {
    MR_Word BranchEnd_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEnd_6, (MR_Integer) 0))));
    MR_Word BranchEndCLD_10 = (MR_Word) (BranchEnd_9);
    MR_Word Var_14 = (MR_Word) (BranchEndCLD_10);
    MR_Word STATE_VARIABLE_CLD_15_15;
    MR_Word VarLocns_21;
    MR_Word VarLvals_22;
    MR_Word VarLocnInfo0_23;
    MR_Word VarLocnInfo_24;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Integer Var_50;

    ll_backend__code_loc_dep__reset_to_position_3_p_0(Var_14, CI_7, &STATE_VARIABLE_CLD_15_15);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), StoreMap_5, &VarLocns_21);
    VarLvals_22 = mercury__assoc_list__map_values_only_2_f_0((MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[10]), VarLocns_21);
    VarLocnInfo0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_15_15, (MR_Integer) 3))));
    ll_backend__var_locn__reinit_var_locn_state_3_p_0(VarLvals_22, VarLocnInfo0_23, &VarLocnInfo_24);
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_15_15, (MR_Integer) 0))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_15_15, (MR_Integer) 1))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_15_15, (MR_Integer) 2))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_15_15, (MR_Integer) 4))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_15_15, (MR_Integer) 5))));
    Var_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_15_15, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_24));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_50));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__generate_branch_end_6_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__code_loc_dep__IntroducedFrom__pred__generate_branch_end__516__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep__generate_branch_end_6_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__code_loc_dep__IntroducedFrom__pred__generate_branch_end__496__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_Box MR_CALL 
ll_backend__code_loc_dep__generate_branch_end_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ll_backend__llds__abs_locn_to_lval_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__generate_branch_end_6_p_0(
  MR_Word StoreMap_7,
  MR_Word MaybeEnd0_8,
  MR_Word * MaybeEnd_9,
  MR_Word * Code_10,
  MR_Word CI_11,
  MR_Word STATE_VARIABLE_CLD_0_44)
{
  {
    MR_bool succeeded;
    MR_Word AbsVarLocs_13;
    MR_Word AbsLocs_14;
    MR_Integer MaxRegR_15;
    MR_Integer MaxRegF_16;
    MR_Word InstMap_17;
    MR_Word EndCLD1_19;
    MR_Word Var_45;
    MR_Word STATE_VARIABLE_CLD_46_46;
    MR_Integer Var_47;
    MR_Integer Var_49;
    MR_Word VarLocnInfo0_76;
    MR_Word VarLocnInfo_77;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Integer Var_97;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), StoreMap_7, &AbsVarLocs_13);
    mercury__assoc_list__values_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), AbsVarLocs_13, &AbsLocs_14);
    ll_backend__code_util__max_mentioned_abs_regs_3_p_0(AbsLocs_14, &MaxRegR_15, &MaxRegF_16);
    Var_47 = (MR_Integer) ((MR_Unsigned) MaxRegR_15 + (MR_Unsigned) 1);
    Var_49 = (MR_Integer) ((MR_Unsigned) MaxRegF_16 + (MR_Unsigned) 1);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (StoreMap_7));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) (Var_49));
    }
    VarLocnInfo0_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_44, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_set_follow_vars_3_p_0(Var_45, VarLocnInfo0_76, &VarLocnInfo_77);
    Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_44, (MR_Integer) 0))));
    Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_44, (MR_Integer) 1))));
    Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_44, (MR_Integer) 2))));
    Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_44, (MR_Integer) 4))));
    Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_44, (MR_Integer) 5))));
    Var_97 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_44, (MR_Integer) 6))));
    {
      STATE_VARIABLE_CLD_46_46 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_46_46, 0) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_46_46, 1) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_46_46, 2) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_46_46, 3) = ((MR_Box) (VarLocnInfo_77));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_46_46, 4) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_46_46, 5) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_46_46, 6) = ((MR_Box) (Var_97));
    }
    ll_backend__code_loc_dep__get_instmap_2_p_0(STATE_VARIABLE_CLD_46_46, &InstMap_17);
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap_17);
    if (succeeded)
    {
      MR_Word VarLocs_18;

      VarLocs_18 = mercury__assoc_list__map_values_only_2_f_0((MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[9]), AbsVarLocs_13);
      ll_backend__code_loc_dep__place_vars_5_p_0(VarLocs_18, Code_10, CI_11, STATE_VARIABLE_CLD_46_46, &EndCLD1_19);
    }
    else
    {
      ll_backend__code_loc_dep__remake_with_store_map_3_p_0(StoreMap_7, STATE_VARIABLE_CLD_46_46, &EndCLD1_19);
      *Code_10 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
    }
    if ((MaybeEnd0_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_62 = (MR_Word) (EndCLD1_19);

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeEnd_9 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_62));
      }
    }
    else
    {
      MR_Word EndCLD0_20;
      MR_Word FailInfo0_21;
      MR_Word FailInfo1_22;
      MR_Word ResumeKnown0_24;
      MR_Word CurfrMaxfr0_25;
      MR_Word CondEnv0_26;
      MR_Word Hijack0_27;
      MR_Word R_28;
      MR_Word ResumeKnown1_29;
      MR_Word CurfrMaxfr1_30;
      MR_Word CondEnv1_31;
      MR_Word Hijack1_32;
      MR_Word ResumeKnown_35;
      MR_Word CurfrMaxfr_36;
      MR_Word Hijack_37;
      MR_Word FailInfo_38;
      MR_Word EndCLDA_39;
      MR_Word TempsInUse0_40;
      MR_Word TempsInUse1_41;
      MR_Word TempsInUse_42;
      MR_Word EndCLD_43;
      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEnd0_8, (MR_Integer) 0))));
      MR_Word Var_58;
      MR_Word Var_61;
      MR_Word Redoip0_33;
      MR_Word Redoip1_34;

      EndCLD0_20 = (MR_Word) (Var_54);
      ll_backend__code_loc_dep__get_fail_info_2_p_0(EndCLD0_20, &FailInfo0_21);
      ll_backend__code_loc_dep__get_fail_info_2_p_0(EndCLD1_19, &FailInfo1_22);
      ResumeKnown0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo0_21, (MR_Integer) 1))));
      CurfrMaxfr0_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo0_21, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
      CondEnv0_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo0_21, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      Hijack0_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo0_21, (MR_Integer) 2))) & (MR_Integer) 1);
      R_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo1_22, (MR_Integer) 0))));
      ResumeKnown1_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo1_22, (MR_Integer) 1))));
      CurfrMaxfr1_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo1_22, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
      CondEnv1_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo1_22, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      Hijack1_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo1_22, (MR_Integer) 2))) & (MR_Integer) 1);
      succeeded = (ResumeKnown0_24 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Redoip0_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ResumeKnown0_24, (MR_Integer) 0))) & (MR_Integer) 1);
        succeeded = (ResumeKnown1_29 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          Redoip1_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ResumeKnown1_29, (MR_Integer) 0))) & (MR_Integer) 1);
      }
      if (succeeded)
      {
        MR_Word Var_55;

        ResumeKnown_35 = ResumeKnown0_24;
        {
          Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (ll_backend__code_loc_dep__generate_branch_end_6_p_0_2));
          MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (Redoip0_33));
          MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (Redoip1_34));
        }
        mercury__require__expect_3_p_0(Var_55, (MR_String) "predicate \140ll_backend.code_loc_dep.generate_branch_end\'/6", (MR_String) "redoip mismatch");
      }
      else
        ResumeKnown_35 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = (CurfrMaxfr0_25 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (CurfrMaxfr1_30 == (MR_Integer) 0);
      if (succeeded)
        CurfrMaxfr_36 = (MR_Integer) 0;
      else
        CurfrMaxfr_36 = (MR_Integer) 1;
      succeeded = (Hijack0_27 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Hijack1_32 == (MR_Integer) 0);
      if (succeeded)
        Hijack_37 = (MR_Integer) 0;
      else
        Hijack_37 = (MR_Integer) 1;
      {
        Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&ll_backend__code_loc_dep_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (ll_backend__code_loc_dep__generate_branch_end_6_p_0_3));
        MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (CondEnv0_26));
        MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) (CondEnv1_31));
      }
      mercury__require__expect_3_p_0(Var_58, (MR_String) "predicate \140ll_backend.code_loc_dep.generate_branch_end\'/6", (MR_String) "some but not all branches inside a non condition");
      {
        FailInfo_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FailInfo_38, 0) = ((MR_Box) (R_28));
        MR_hl_field(MR_mktag(0), FailInfo_38, 1) = ((MR_Box) (ResumeKnown_35));
        MR_hl_field(MR_mktag(0), FailInfo_38, 2) = (MR_Box) (((((MR_Unsigned) (CurfrMaxfr_36) << 2)) | (((((MR_Unsigned) (CondEnv0_26) << 1)) | (MR_Unsigned) (Hijack_37)))));
      }
      ll_backend__code_loc_dep__set_fail_info_3_p_0(FailInfo_38, EndCLD1_19, &EndCLDA_39);
      ll_backend__code_loc_dep__get_temps_in_use_2_p_0(EndCLD0_20, &TempsInUse0_40);
      ll_backend__code_loc_dep__get_temps_in_use_2_p_0(EndCLD1_19, &TempsInUse1_41);
      mercury__set__union_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), TempsInUse0_40, TempsInUse1_41, &TempsInUse_42);
      ll_backend__code_loc_dep__set_temps_in_use_3_p_0(TempsInUse_42, EndCLDA_39, &EndCLD_43);
      Var_61 = (MR_Word) (EndCLD_43);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeEnd_9 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_61));
      }
    }
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__place_vars_5_p_0(
  MR_Word VarLocs_6,
  MR_Word * Code_7,
  MR_Word CI_8,
  MR_Word STATE_VARIABLE_CLD_0_13,
  MR_Word * STATE_VARIABLE_CLD_14)
{
  {
    MR_Word ModuleInfo_10;
    MR_Word VarLocnInfo0_11;
    MR_Word VarLocnInfo_12;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Integer Var_34;

    ll_backend__code_info__get_module_info_2_p_0(CI_8, &ModuleInfo_10);
    VarLocnInfo0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 3))));
    ll_backend__var_locn__var_locn_place_vars_5_p_0(ModuleInfo_10, VarLocs_6, Code_7, VarLocnInfo0_11, &VarLocnInfo_12);
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 0))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 1))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 2))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 4))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 5))));
    Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_34));
    }
  }
}

static MR_Box MR_CALL 
ll_backend__code_loc_dep__remake_with_store_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ll_backend__llds__abs_locn_to_lval_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__remake_with_store_map_3_p_0(
  MR_Word StoreMap_4,
  MR_Word STATE_VARIABLE_CLD_0_10,
  MR_Word * STATE_VARIABLE_CLD_11)
{
  {
    MR_Word VarLocns_6;
    MR_Word VarLvals_7;
    MR_Word VarLocnInfo0_8;
    MR_Word VarLocnInfo_9;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Integer Var_37;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), StoreMap_4, &VarLocns_6);
    VarLvals_7 = mercury__assoc_list__map_values_only_2_f_0((MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[8]), VarLocns_6);
    VarLocnInfo0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 3))));
    ll_backend__var_locn__reinit_var_locn_state_3_p_0(VarLvals_7, VarLocnInfo0_8, &VarLocnInfo_9);
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 0))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 1))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 2))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 4))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 5))));
    Var_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_10, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_9));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_37));
    }
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__set_fail_info_3_p_0(
  MR_Word FI_4,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 4))));
    MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (FI_4));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__set_temps_in_use_3_p_0(
  MR_Word TI_4,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 5))));
    MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TI_4));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__get_fail_info_2_p_0(
  MR_Word CLD_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_3, (MR_Integer) 5))));
}

static void MR_CALL 
ll_backend__code_loc_dep__get_temps_in_use_2_p_0(
  MR_Word CLD_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_3, (MR_Integer) 4))));
}

void MR_CALL 
ll_backend__code_loc_dep__reset_resume_known_3_p_0(
  MR_Word BranchStart_4,
  MR_Word STATE_VARIABLE_CLD_0_20,
  MR_Word * STATE_VARIABLE_CLD_21)
{
  {
    MR_Word BranchStartCLD_6 = (MR_Word) (BranchStart_4);
    MR_Word BranchStartFailInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BranchStartCLD_6, (MR_Integer) 5))));
    MR_Word CurFailInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 5))));
    MR_Word BSResumeKnown_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BranchStartFailInfo_7, (MR_Integer) 1))));
    MR_Word CurFailStack_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CurFailInfo_8, (MR_Integer) 0))));
    MR_Word NewFailInfo_19;
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 0))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 1))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 2))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 3))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 4))));
    MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_20, (MR_Integer) 6))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), CurFailInfo_8, (MR_Integer) 2)));

    {
      NewFailInfo_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), NewFailInfo_19, 0) = ((MR_Box) (CurFailStack_14));
      MR_hl_field(MR_mktag(0), NewFailInfo_19, 1) = ((MR_Box) (BSResumeKnown_10));
      MR_hl_field(MR_mktag(0), NewFailInfo_19, 2) = (MR_Box) (packed_word_1);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_21 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (NewFailInfo_19));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_36));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__reset_to_position_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CurCI_5,
  MR_Word * STATE_VARIABLE_CLD_10)
{
  {
    MR_Word PersistentTemps_6;
    MR_Word TempsInUse0_7;
    MR_Word TempsInUse_8;
    MR_Word STATE_VARIABLE_CLD_0_9 = (MR_Word) (HeadVar__1_1);
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Integer Var_31;

    ll_backend__code_info__get_persistent_temps_2_p_0(CurCI_5, &PersistentTemps_6);
    TempsInUse0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_9, (MR_Integer) 4))));
    mercury__set__union_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), PersistentTemps_6, TempsInUse0_7, &TempsInUse_8);
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_9, (MR_Integer) 0))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_9, (MR_Integer) 1))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_9, (MR_Integer) 2))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_9, (MR_Integer) 3))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_9, (MR_Integer) 5))));
    Var_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_9, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TempsInUse_8));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_31));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__remember_position_2_p_0(
  MR_Word CLD_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = (MR_Word) (CLD_3);
}

void MR_CALL 
ll_backend__code_loc_dep__post_goal_update_4_p_0(
  MR_Word GoalInfo_5,
  MR_Word CI_6,
  MR_Word STATE_VARIABLE_CLD_0_13,
  MR_Word * STATE_VARIABLE_CLD_14)
{
  {
    MR_Word PostDeaths_8;
    MR_Word PostBirths_9;
    MR_Word InstMapDelta_10;
    MR_Word InstMap0_11;
    MR_Word InstMap_12;
    MR_Word STATE_VARIABLE_CLD_15_15;
    MR_Word STATE_VARIABLE_CLD_17_17;
    MR_Word STATE_VARIABLE_CLD_18_18;
    MR_Word STATE_VARIABLE_CLD_19_19;
    MR_Word Liveness0_25;
    MR_Word Liveness_26;
    MR_Word Liveness0_52;
    MR_Word Liveness_53;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Integer Var_47;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Integer Var_74;
    MR_Word Var_87;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Integer Var_93;

    hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo_5, &PostDeaths_8);
    Liveness0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 0))));
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness0_25, PostDeaths_8, &Liveness_26);
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 1))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 2))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 3))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 4))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 5))));
    Var_47 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_13, (MR_Integer) 6))));
    {
      STATE_VARIABLE_CLD_15_15 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_15_15, 0) = ((MR_Box) (Liveness_26));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_15_15, 1) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_15_15, 2) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_15_15, 3) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_15_15, 4) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_15_15, 5) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_15_15, 6) = ((MR_Box) (Var_47));
    }
    ll_backend__code_loc_dep__maybe_make_vars_forward_dead_4_p_0(PostDeaths_8, (MR_Integer) 0, STATE_VARIABLE_CLD_15_15, &STATE_VARIABLE_CLD_17_17);
    hlds__hlds_llds__goal_info_get_post_births_2_p_0(GoalInfo_5, &PostBirths_9);
    Liveness0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_17_17, (MR_Integer) 0))));
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness0_52, PostBirths_9, &Liveness_53);
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_17_17, (MR_Integer) 1))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_17_17, (MR_Integer) 2))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_17_17, (MR_Integer) 3))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_17_17, (MR_Integer) 4))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_17_17, (MR_Integer) 5))));
    Var_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_17_17, (MR_Integer) 6))));
    {
      STATE_VARIABLE_CLD_18_18 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_18_18, 0) = ((MR_Box) (Liveness_53));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_18_18, 1) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_18_18, 2) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_18_18, 3) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_18_18, 4) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_18_18, 5) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_18_18, 6) = ((MR_Box) (Var_74));
    }
    ll_backend__code_loc_dep__make_vars_forward_live_4_p_0(PostBirths_9, CI_6, STATE_VARIABLE_CLD_18_18, &STATE_VARIABLE_CLD_19_19);
    InstMapDelta_10 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_5);
    InstMap0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_19_19, (MR_Integer) 1))));
    hlds__instmap__apply_instmap_delta_3_p_0(InstMap0_11, InstMapDelta_10, &InstMap_12);
    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_19_19, (MR_Integer) 0))));
    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_19_19, (MR_Integer) 2))));
    Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_19_19, (MR_Integer) 3))));
    Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_19_19, (MR_Integer) 4))));
    Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_19_19, (MR_Integer) 5))));
    Var_93 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_19_19, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (InstMap_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_93));
    }
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__make_vars_forward_live_4_p_0(
  MR_Word Vars_5,
  MR_Word CI_6,
  MR_Word STATE_VARIABLE_CLD_0_12,
  MR_Word * STATE_VARIABLE_CLD_13)
{
  {
    MR_Word StackSlots_8;
    MR_Word VarLocnInfo0_9;
    MR_Word VarList_10;
    MR_Word VarLocnInfo_11;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Integer Var_35;

    ll_backend__code_info__get_stack_slots_2_p_0(CI_6, &StackSlots_8);
    VarLocnInfo0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 3))));
    VarList_10 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_5);
    ll_backend__code_loc_dep__do_make_vars_forward_live_5_p_0(VarList_10, StackSlots_8, (MR_Integer) 1, VarLocnInfo0_9, &VarLocnInfo_11);
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 0))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 1))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 2))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 4))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 5))));
    Var_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_12, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_11));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_35));
    }
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__do_make_vars_forward_live_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word StackSlots_2,
  MR_Integer N0_3,
  MR_Word STATE_VARIABLE_VarLocnInfo_0_4,
  MR_Word * STATE_VARIABLE_VarLocnInfo_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VarLocnInfo_5 = STATE_VARIABLE_VarLocnInfo_0_4;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer N1_16;
      MR_Word STATE_VARIABLE_VarLocnInfo_19_19;
      MR_Word Lval_29;
      MR_Word Slot_28;
      MR_Box conv0_Slot_28;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_N0_3;
      MR_Word next_value_of_STATE_VARIABLE_VarLocnInfo_0_4;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), StackSlots_2, ((MR_Box) (Var_11)), &conv0_Slot_28);
      if (succeeded)
      {
        Slot_28 = ((MR_Word) (conv0_Slot_28));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        Lval_29 = ll_backend__llds__stack_slot_to_lval_1_f_0(Slot_28);
        N1_16 = N0_3;
      }
      else
      {
        ll_backend__code_loc_dep__find_unused_reg_4_p_0(STATE_VARIABLE_VarLocnInfo_0_4, (MR_Integer) 0, N0_3, &N1_16);
        {
          Lval_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Lval_29, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), Lval_29, 1) = ((MR_Box) (N1_16));
        }
      }
      ll_backend__var_locn__var_locn_set_magic_var_location_4_p_0(Var_11, Lval_29, STATE_VARIABLE_VarLocnInfo_0_4, &STATE_VARIABLE_VarLocnInfo_19_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_12;
      next_value_of_N0_3 = N1_16;
      next_value_of_STATE_VARIABLE_VarLocnInfo_0_4 = STATE_VARIABLE_VarLocnInfo_19_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      N0_3 = next_value_of_N0_3;
      STATE_VARIABLE_VarLocnInfo_0_4 = next_value_of_STATE_VARIABLE_VarLocnInfo_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__find_unused_reg_4_p_0(
  MR_Word VLI_5,
  MR_Word RegType_6,
  MR_Integer N0_7,
  MR_Integer * N_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Var_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = (MR_Box) ((MR_Unsigned) (RegType_6));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (N0_7));
    }
    succeeded = ll_backend__var_locn__var_locn_lval_in_use_2_p_0(VLI_5, Var_9);
    if (succeeded)
    {
      MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) N0_7 + (MR_Unsigned) 1);
      MR_Integer next_value_of_N0_7 = Var_10;

      // direct tailcall eliminated
      ;
      N0_7 = next_value_of_N0_7;
      continue;
    }
    else
      *N_8 = N0_7;
    break;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__pre_goal_update_4_p_0(
  MR_Word GoalInfo_5,
  MR_Word HasSubGoals_6,
  MR_Word STATE_VARIABLE_CLD_0_16,
  MR_Word * STATE_VARIABLE_CLD_17)
{
  {
    MR_Word ResumePoint_8;
    MR_Word MaybeFollowVars_11;
    MR_Word PreDeaths_13;
    MR_Word PreBirths_14;
    MR_Word STATE_VARIABLE_CLD_20_20;
    MR_Word STATE_VARIABLE_CLD_21_21;
    MR_Word STATE_VARIABLE_CLD_23_23;
    MR_Word STATE_VARIABLE_CLD_24_24;
    MR_Word Liveness0_56;
    MR_Word Liveness_57;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Integer Var_78;

    hlds__hlds_llds__goal_info_get_resume_point_2_p_0(GoalInfo_5, &ResumePoint_8);
    if (!((ResumePoint_8 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_loc_dep.pre_goal_update\'/4", (MR_String) "pre_goal_update with resume point");
        return;
      }
    }
    hlds__hlds_llds__goal_info_get_follow_vars_2_p_0(GoalInfo_5, &MaybeFollowVars_11);
    if ((MaybeFollowVars_11 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_CLD_20_20 = STATE_VARIABLE_CLD_0_16;
    else
    {
      MR_Word FollowVars_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFollowVars_11, (MR_Integer) 0))));
      MR_Word VarLocnInfo0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 3))));
      MR_Word VarLocnInfo_31;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Integer Var_51;

      ll_backend__var_locn__var_locn_set_follow_vars_3_p_0(FollowVars_12, VarLocnInfo0_30, &VarLocnInfo_31);
      Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 0))));
      Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 1))));
      Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 2))));
      Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 4))));
      Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 5))));
      Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 6))));
      {
        STATE_VARIABLE_CLD_20_20 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_20_20, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_20_20, 1) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_20_20, 2) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_20_20, 3) = ((MR_Box) (VarLocnInfo_31));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_20_20, 4) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_20_20, 5) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_20_20, 6) = ((MR_Box) (Var_51));
      }
    }
    hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(GoalInfo_5, &PreDeaths_13);
    Liveness0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_20_20, (MR_Integer) 0))));
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness0_56, PreDeaths_13, &Liveness_57);
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_20_20, (MR_Integer) 1))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_20_20, (MR_Integer) 2))));
    Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_20_20, (MR_Integer) 3))));
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_20_20, (MR_Integer) 4))));
    Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_20_20, (MR_Integer) 5))));
    Var_78 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_20_20, (MR_Integer) 6))));
    {
      STATE_VARIABLE_CLD_21_21 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_21_21, 0) = ((MR_Box) (Liveness_57));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_21_21, 1) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_21_21, 2) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_21_21, 3) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_21_21, 4) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_21_21, 5) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_21_21, 6) = ((MR_Box) (Var_78));
    }
    ll_backend__code_loc_dep__maybe_make_vars_forward_dead_4_p_0(PreDeaths_13, (MR_Integer) 0, STATE_VARIABLE_CLD_21_21, &STATE_VARIABLE_CLD_23_23);
    hlds__hlds_llds__goal_info_get_pre_births_2_p_0(GoalInfo_5, &PreBirths_14);
    ll_backend__code_loc_dep__add_forward_live_vars_3_p_0(PreBirths_14, STATE_VARIABLE_CLD_23_23, &STATE_VARIABLE_CLD_24_24);
    switch (HasSubGoals_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word PostDeaths_15;

          hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(GoalInfo_5, &PostDeaths_15);
          ll_backend__code_loc_dep__rem_forward_live_vars_3_p_0(PostDeaths_15, STATE_VARIABLE_CLD_24_24, STATE_VARIABLE_CLD_17);
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_CLD_17 = STATE_VARIABLE_CLD_24_24;
        break;
    }
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__rem_forward_live_vars_3_p_0(
  MR_Word Deaths_4,
  MR_Word STATE_VARIABLE_CLD_0_8,
  MR_Word * STATE_VARIABLE_CLD_9)
{
  {
    MR_Word Liveness0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 0))));
    MR_Word Liveness_7;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Integer Var_30;

    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness0_6, Deaths_4, &Liveness_7);
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 1))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 2))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 3))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 4))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 5))));
    Var_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Liveness_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_30));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__maybe_make_vars_forward_dead_4_p_0(
  MR_Word Vars0_5,
  MR_Word FirstTime_6,
  MR_Word STATE_VARIABLE_CLD_0_16,
  MR_Word * STATE_VARIABLE_CLD_17)
{
  {
    MR_Word ResumeVars_8;
    MR_Word FlushVars_9;
    MR_Word Zombies0_10;
    MR_Word Zombies_11;
    MR_Word Vars_12;
    MR_Word VarList_13;
    MR_Word VarLocnInfo0_14;
    MR_Word VarLocnInfo_15;
    MR_Word STATE_VARIABLE_CLD_18_18;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Integer Var_39;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Integer Var_58;

    ResumeVars_8 = ll_backend__code_loc_dep__current_resume_point_vars_1_f_0(STATE_VARIABLE_CLD_0_16);
    parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars0_5, ResumeVars_8, &FlushVars_9);
    Zombies0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 2))));
    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Zombies0_10, FlushVars_9, &Zombies_11);
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 0))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 1))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 3))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 4))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 5))));
    Var_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_16, (MR_Integer) 6))));
    {
      STATE_VARIABLE_CLD_18_18 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_18_18, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_18_18, 1) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_18_18, 2) = ((MR_Box) (Zombies_11));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_18_18, 3) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_18_18, 4) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_18_18, 5) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_18_18, 6) = ((MR_Box) (Var_39));
    }
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars0_5, Zombies_11, &Vars_12);
    VarList_13 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_12);
    VarLocnInfo0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_18_18, (MR_Integer) 3))));
    ll_backend__code_loc_dep__maybe_make_vars_forward_dead_2_4_p_0(VarList_13, FirstTime_6, VarLocnInfo0_14, &VarLocnInfo_15);
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_18_18, (MR_Integer) 0))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_18_18, (MR_Integer) 1))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_18_18, (MR_Integer) 2))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_18_18, (MR_Integer) 4))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_18_18, (MR_Integer) 5))));
    Var_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_18_18, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_15));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_58));
    }
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__maybe_make_vars_forward_dead_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word FirstTime_2,
  MR_Word STATE_VARIABLE_VLI_0_3,
  MR_Word * STATE_VARIABLE_VLI_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_VLI_4 = STATE_VARIABLE_VLI_0_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Vars_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_VLI_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_VLI_0_3;

      ll_backend__var_locn__var_locn_var_becomes_dead_4_p_0(Var_9, FirstTime_2, STATE_VARIABLE_VLI_0_3, &STATE_VARIABLE_VLI_15_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Vars_10;
      next_value_of_STATE_VARIABLE_VLI_0_3 = STATE_VARIABLE_VLI_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_VLI_0_3 = next_value_of_STATE_VARIABLE_VLI_0_3;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
ll_backend__code_loc_dep__current_resume_point_vars_1_f_0(
  MR_Word CLD_3)
{
  {
    MR_Word ResumeVars_4;
    MR_Word FailInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_3, (MR_Integer) 5))));
    MR_Word ResumePointStack_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailInfo_5, (MR_Integer) 0))));
    MR_Word ResumePointInfo_11;
    MR_Word ResumeMap_12;
    MR_Word ResumeMapVarList_14;
    MR_Box conv0_ResumePointInfo_11;

    mercury__stack__det_top_2_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0), ResumePointStack_6, &conv0_ResumePointInfo_11);
    ResumePointInfo_11 = ((MR_Word) (conv0_ResumePointInfo_11));
    switch (MR_tag((MR_Word) ResumePointInfo_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ResumeMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ResumePointInfo_11, (MR_Integer) 0))));
        break;
      case (MR_Integer) 1:
        ResumeMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResumePointInfo_11, (MR_Integer) 0))));
        break;
      case (MR_Integer) 2:
        ResumeMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResumePointInfo_11, (MR_Integer) 0))));
        break;
      case (MR_Integer) 3:
        ResumeMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ResumePointInfo_11, (MR_Integer) 0))));
        break;
    }
    mercury__map__keys_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), ResumeMap_12, &ResumeMapVarList_14);
    ResumeVars_4 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ResumeMapVarList_14);
    return ResumeVars_4;
  }
}

void MR_CALL 
ll_backend__code_loc_dep__add_forward_live_vars_3_p_0(
  MR_Word Births_4,
  MR_Word STATE_VARIABLE_CLD_0_8,
  MR_Word * STATE_VARIABLE_CLD_9)
{
  {
    MR_Word Liveness0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 0))));
    MR_Word Liveness_7;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Integer Var_30;

    parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness0_6, Births_4, &Liveness_7);
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 1))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 2))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 3))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 4))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 5))));
    Var_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Liveness_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_30));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__set_follow_vars_3_p_0(
  MR_Word FollowVars_4,
  MR_Word STATE_VARIABLE_CLD_0_8,
  MR_Word * STATE_VARIABLE_CLD_9)
{
  {
    MR_Word VarLocnInfo0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 3))));
    MR_Word VarLocnInfo_7;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Integer Var_29;

    ll_backend__var_locn__var_locn_set_follow_vars_3_p_0(FollowVars_4, VarLocnInfo0_6, &VarLocnInfo_7);
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 0))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 1))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 2))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 4))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 5))));
    Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_8, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarLocnInfo_7));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_29));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__get_next_non_reserved_3_p_0(
  MR_Word CLD_4,
  MR_Word RegType_5,
  MR_Integer * NextNonReserved_6)
{
  {
    MR_Word VarLocnInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_4, (MR_Integer) 3))));

    ll_backend__var_locn__var_locn_get_next_non_reserved_3_p_0(VarLocnInfo_7, RegType_5, NextNonReserved_6);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__get_follow_var_map_2_p_0(
  MR_Word CLD_3,
  MR_Word * FollowVarMap_4)
{
  {
    MR_Word VarLocnInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_3, (MR_Integer) 3))));

    ll_backend__var_locn__var_locn_get_follow_var_map_2_p_0(VarLocnInfo_5, FollowVarMap_4);
  }
}

void MR_CALL 
ll_backend__code_loc_dep__set_par_conj_depth_3_p_0(
  MR_Integer N_4,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 5))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (N_4));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__set_instmap_3_p_0(
  MR_Word IM_4,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 0))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 5))));
    MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (IM_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__set_forward_live_vars_3_p_0(
  MR_Word LV_4,
  MR_Word STATE_VARIABLE_CLD_0_6,
  MR_Word * STATE_VARIABLE_CLD_7)
{
  {
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 5))));
    MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_6, (MR_Integer) 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LV_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

void MR_CALL 
ll_backend__code_loc_dep__get_par_conj_depth_2_p_0(
  MR_Word CLD_3,
  MR_Integer * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CLD_3, (MR_Integer) 6))));
}

void MR_CALL 
ll_backend__code_loc_dep__get_instmap_2_p_0(
  MR_Word CLD_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_3, (MR_Integer) 1))));
}

void MR_CALL 
ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(
  MR_Word CLD_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CLD_3, (MR_Integer) 0))));
}

void MR_CALL 
ll_backend__code_loc_dep__code_loc_dep_init_5_p_0(
  MR_Word FollowVars_6,
  MR_Word * ResumePoint_7,
  MR_Word STATE_VARIABLE_CI_0_36,
  MR_Word * STATE_VARIABLE_CI_37,
  MR_Word * STATE_VARIABLE_CLD_38)
{
  {
    MR_Word ModuleInfo_10;
    MR_Word PredInfo_11;
    MR_Word ProcInfo_12;
    MR_Word Globals_13;
    MR_Word InstMap_14;
    MR_Word Liveness_15;
    MR_Word CodeModel_16;
    MR_Word ArgList_17;
    MR_Word VarSet_18;
    MR_Word VarTypes_19;
    MR_Word StackSlots_20;
    MR_Word UseFloatRegs_21;
    MR_Word FloatRegType_22;
    MR_Word TraceLevel_23;
    MR_Word TraceLevelIsNone_24;
    MR_Word MaybeFailVars_26;
    MR_Word EffLiveness_27;
    MR_Word VarLocnInfo_28;
    MR_Word ResumePoints_29;
    MR_Word AllowHijack_30;
    MR_Word Hijack_31;
    MR_Word DummyFailInfo_32;
    MR_Word TempsInUse_33;
    MR_Word Zombies_34;
    MR_Word STATE_VARIABLE_CLD_44_44;

    ll_backend__code_info__get_module_info_2_p_0(STATE_VARIABLE_CI_0_36, &ModuleInfo_10);
    ll_backend__code_info__get_pred_info_2_p_0(STATE_VARIABLE_CI_0_36, &PredInfo_11);
    ll_backend__code_info__get_proc_info_2_p_0(STATE_VARIABLE_CI_0_36, &ProcInfo_12);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_13);
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ProcInfo_12, ModuleInfo_10, &InstMap_14);
    hlds__hlds_pred__proc_info_get_liveness_info_2_p_0(ProcInfo_12, &Liveness_15);
    CodeModel_16 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_12);
    ll_backend__code_util__build_input_arg_list_2_p_0(ProcInfo_12, &ArgList_17);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_12, &VarSet_18);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_12, &VarTypes_19);
    hlds__hlds_pred__proc_info_get_stack_slots_2_p_0(ProcInfo_12, &StackSlots_20);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 280, &UseFloatRegs_21);
    switch (UseFloatRegs_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        FloatRegType_22 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        FloatRegType_22 = (MR_Integer) 1;
        break;
    }
    libs__globals__get_trace_level_2_p_0(Globals_13, &TraceLevel_23);
    TraceLevelIsNone_24 = libs__trace_params__eff_trace_level_is_none_4_f_0(ModuleInfo_10, PredInfo_11, ProcInfo_12, TraceLevel_23);
    switch (TraceLevelIsNone_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word FailVars_25;

          ll_backend__trace_gen__trace_fail_vars_3_p_0(ModuleInfo_10, ProcInfo_12, &FailVars_25);
          {
            MaybeFailVars_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeFailVars_26, 0) = ((MR_Box) (FailVars_25));
          }
          parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Liveness_15, FailVars_25, &EffLiveness_27);
        }
        break;
      case (MR_Integer) 1:
        {
          MaybeFailVars_26 = (MR_Word) ((MR_Unsigned) 0U);
          EffLiveness_27 = Liveness_15;
        }
        break;
    }
    ll_backend__var_locn__init_var_locn_state_9_p_0(ModuleInfo_10, ArgList_17, EffLiveness_27, VarSet_18, VarTypes_19, FloatRegType_22, StackSlots_20, FollowVars_6, &VarLocnInfo_28);
    mercury__stack__init_1_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0), &ResumePoints_29);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 481, &AllowHijack_30);
    switch (AllowHijack_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Hijack_31 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        Hijack_31 = (MR_Integer) 0;
        break;
    }
    {
      DummyFailInfo_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DummyFailInfo_32, 0) = ((MR_Box) (ResumePoints_29));
      MR_hl_field(MR_mktag(0), DummyFailInfo_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), DummyFailInfo_32, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (Hijack_31)))));
    }
    mercury__set__init_1_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), &TempsInUse_33);
    Zombies_34 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    {
      STATE_VARIABLE_CLD_44_44 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_44_44, 0) = ((MR_Box) (Liveness_15));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_44_44, 1) = ((MR_Box) (InstMap_14));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_44_44, 2) = ((MR_Box) (Zombies_34));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_44_44, 3) = ((MR_Box) (VarLocnInfo_28));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_44_44, 4) = ((MR_Box) (TempsInUse_33));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_44_44, 5) = ((MR_Box) (DummyFailInfo_32));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_44_44, 6) = ((MR_Box) ((MR_Integer) 0));
    }
    ll_backend__code_loc_dep__init_fail_info_7_p_0(CodeModel_16, MaybeFailVars_26, ResumePoint_7, STATE_VARIABLE_CI_0_36, STATE_VARIABLE_CI_37, STATE_VARIABLE_CLD_44_44, STATE_VARIABLE_CLD_38);
  }
}

static MR_Box MR_CALL 
ll_backend__code_loc_dep__init_fail_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ll_backend__llds__stack_slot_to_lval_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__init_fail_info_7_p_0(
  MR_Word CodeModel_8,
  MR_Word MaybeFailVars_9,
  MR_Word * ResumePoint_10,
  MR_Word STATE_VARIABLE_CI_0_34,
  MR_Word * STATE_VARIABLE_CI_35,
  MR_Word STATE_VARIABLE_CLD_0_36,
  MR_Word * STATE_VARIABLE_CLD_37)
{
  {
    MR_Word ResumeAddress_14;
    MR_Word ResumeKnown_15;
    MR_Word CurfrMaxfr_16;
    MR_Word StackMap_24;
    MR_Word ResumeStack0_25;
    MR_Word ResumeStack_26;
    MR_Word FailInfo0_27;
    MR_Word Allow_32;
    MR_Word FailInfo_33;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Integer Var_67;

    switch (CodeModel_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ResumeLabel_13;

          ll_backend__code_info__get_next_label_3_p_0(&ResumeLabel_13, STATE_VARIABLE_CI_0_34, STATE_VARIABLE_CI_35);
          {
            ResumeAddress_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ResumeAddress_14, 0) = ((MR_Box) (ResumeLabel_13));
          }
          ResumeKnown_15 = (MR_Word) ((MR_Unsigned) 0U);
          CurfrMaxfr_16 = (MR_Integer) 1;
        }
        break;
      case (MR_Integer) 2:
        {
          if ((MaybeFailVars_9 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            ResumeAddress_14 = (MR_Word) ((MR_Unsigned) 8U);
            *STATE_VARIABLE_CI_35 = STATE_VARIABLE_CI_0_34;
          }
          else
          {
            MR_Word ResumeLabel_48;

            ll_backend__code_info__get_next_label_3_p_0(&ResumeLabel_48, STATE_VARIABLE_CI_0_34, STATE_VARIABLE_CI_35);
            {
              ResumeAddress_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ResumeAddress_14, 0) = ((MR_Box) (ResumeLabel_48));
            }
          }
          ResumeKnown_15 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[3]));
          CurfrMaxfr_16 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ResumeLabel_47;

          ll_backend__code_info__get_next_label_3_p_0(&ResumeLabel_47, STATE_VARIABLE_CI_0_34, STATE_VARIABLE_CI_35);
          {
            ResumeAddress_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ResumeAddress_14, 0) = ((MR_Box) (ResumeLabel_47));
          }
          ResumeKnown_15 = (MR_Word) (MR_mkword(MR_mktag(1), &ll_backend__code_loc_dep_scalar_common_3[4]));
          CurfrMaxfr_16 = (MR_Integer) 1;
        }
        break;
    }
    if ((MaybeFailVars_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__map__init_1_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), &StackMap_24);
    }
    else
    {
      MR_Word FailVars_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFailVars_9, (MR_Integer) 0))));
      MR_Word StackSlots_19;
      MR_Word AbsStackMap_20;
      MR_Word AbsStackList_21;
      MR_Word StackList0_22;
      MR_Word StackList_23;
      MR_Word Var_43;

      ll_backend__code_info__get_stack_slots_2_p_0(*STATE_VARIABLE_CI_35, &StackSlots_19);
      Var_43 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), FailVars_18);
      mercury__map__select_sorted_list_3_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), StackSlots_19, Var_43, &AbsStackMap_20);
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), AbsStackMap_20, &AbsStackList_21);
      StackList0_22 = mercury__assoc_list__map_values_only_2_f_0((MR_Word) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_2[7]), AbsStackList_21);
      ll_backend__code_loc_dep__make_singleton_sets_2_p_0(StackList0_22, &StackList_23);
      mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[0]), (MR_Word) (&ll_backend__code_loc_dep_scalar_common_1[1]), StackList_23, &StackMap_24);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ResumePoint_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StackMap_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ResumeAddress_14));
    }
    mercury__stack__init_1_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0), &ResumeStack0_25);
    mercury__stack__push_3_p_0((MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0), ((MR_Box) (*ResumePoint_10)), ResumeStack0_25, &ResumeStack_26);
    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_36, (MR_Integer) 0))));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_36, (MR_Integer) 1))));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_36, (MR_Integer) 2))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_36, (MR_Integer) 3))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_36, (MR_Integer) 4))));
    FailInfo0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_36, (MR_Integer) 5))));
    Var_67 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_CLD_0_36, (MR_Integer) 6))));
    Allow_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), FailInfo0_27, (MR_Integer) 2))) & (MR_Integer) 1);
    {
      FailInfo_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FailInfo_33, 0) = ((MR_Box) (ResumeStack_26));
      MR_hl_field(MR_mktag(0), FailInfo_33, 1) = ((MR_Box) (ResumeKnown_15));
      MR_hl_field(MR_mktag(0), FailInfo_33, 2) = (MR_Box) (((((MR_Unsigned) (CurfrMaxfr_16) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (Allow_32)))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_CLD_37 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (FailInfo_33));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_67));
    }
  }
}

static void MR_CALL 
ll_backend__code_loc_dep__make_singleton_sets_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_3;
    MR_Word Lval_4;
    MR_Word Tail_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Lvals_6;
    MR_Word SetTail_7;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_9;

    Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
    Lval_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
    Lvals_6 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_4)));
    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (Var_3));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (Lvals_6));
    }
    ll_backend__code_loc_dep__make_singleton_sets_2_p_0(Tail_5, &SetTail_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SetTail_7));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____branch_end_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____branch_end_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____branch_end_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____branch_end_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____branch_end_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____branch_end_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____branch_end_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____branch_end_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____call_direction_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____call_direction_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____call_direction_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____call_direction_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____code_info_component_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____code_info_component_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____code_info_component_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____code_info_component_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____code_loc_dep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____code_loc_dep_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____code_loc_dep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____code_loc_dep_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____commit_hijack_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____commit_hijack_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____commit_hijack_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____commit_hijack_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____condition_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____condition_env_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____condition_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____condition_env_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____curfr_vs_maxfr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____curfr_vs_maxfr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____curfr_vs_maxfr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____curfr_vs_maxfr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____det_commit_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____det_commit_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____det_commit_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____det_commit_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____disj_hijack_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____disj_hijack_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____disj_hijack_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____disj_hijack_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____fail_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____fail_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____fail_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____fail_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____hijack_allowed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____hijack_allowed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____hijack_allowed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____hijack_allowed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____ite_hijack_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____ite_hijack_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____ite_hijack_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____ite_hijack_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____ite_hijack_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____ite_hijack_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____ite_hijack_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____ite_hijack_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____ite_region_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____ite_region_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____ite_region_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____ite_region_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____position_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____position_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____position_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____position_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____redoip_update_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____redoip_update_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____redoip_update_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____redoip_update_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____region_commit_stack_frame_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____region_commit_stack_frame_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____region_commit_stack_frame_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____region_commit_stack_frame_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____resume_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____resume_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____resume_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____resume_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____resume_point_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____resume_point_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____resume_point_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____resume_point_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____resume_point_known_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____resume_point_known_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____resume_point_known_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____resume_point_known_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____semi_commit_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____semi_commit_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____semi_commit_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____semi_commit_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____simple_neg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____simple_neg_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____simple_neg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____simple_neg_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__code_loc_dep____Unify____temp_slot_persistence_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_loc_dep____Unify____temp_slot_persistence_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_loc_dep____Compare____temp_slot_persistence_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_loc_dep____Compare____temp_slot_persistence_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__code_loc_dep__init(void)
{
}

void mercury__ll_backend__code_loc_dep__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_branch_end_info_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_call_direction_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_info_component_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_commit_hijack_info_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_condition_env_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_curfr_vs_maxfr_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_det_commit_info_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_disj_hijack_info_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_fail_info_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_hijack_allowed_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_ite_hijack_info_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_ite_hijack_type_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_ite_region_info_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_position_info_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_redoip_update_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_region_commit_stack_frame_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_map_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_info_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_resume_point_known_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_semi_commit_info_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_simple_neg_info_0);
	MR_register_type_ctor_info(&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_temp_slot_persistence_0);
}

void mercury__ll_backend__code_loc_dep__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__code_loc_dep__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.code_loc_dep.
