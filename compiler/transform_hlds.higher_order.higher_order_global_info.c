/*
** Automatically generated from `higher_order.higher_order_global_info.m'
** by the Mercury compiler,
** version rotd-2025-07-04
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


// :- module transform_hlds.higher_order.higher_order_global_info.
// :- implementation.

/*
INIT mercury__transform_hlds__higher_order__higher_order_global_info__init
ENDINIT
*/

#include "transform_hlds.higher_order.higher_order_global_info.mih"


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
#include "check_hlds.mode_util.mih"
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
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.higher_order.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0_s {
  MR_Word transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__HeadVar__1_1;
  MR_bool transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded;
  jmp_buf transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__commit_0;
  MR_Word transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__Var_10;
  MR_Word transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__RequestArg_11;
  MR_Box transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__conv0_RequestArg_11;
};


static const MR_FA_TypeInfo_Struct2 transform_hlds__higher_order__higher_order_global_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_global_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_global_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_global_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_global_info__list__ti_list_1hlds__hlds_rtti__type_ctor_info_rtti_var_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_global_info__list__ti_list_1transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0;

static const MR_PseudoTypeInfo transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_higher_order_arg_0_0[8];

static const MR_ConstString transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_names_higher_order_arg_0_0[8];

static const MR_DuArgLocn transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_locns_higher_order_arg_0_0[8];

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_higher_order_arg_0_0;

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_higher_order_arg_0_0[1];

static const MR_DuPtagLayout transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_higher_order_arg_0[1];

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_higher_order_arg_0[1];

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_higher_order_arg_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_global_info__set_ordlist__ti_set_ordlist_1transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__higher_order__higher_order_global_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__higher_order__higher_order_global_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0;

static const MR_PseudoTypeInfo transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_higher_order_global_info_0_0[6];

static const MR_ConstString transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_names_higher_order_global_info_0_0[6];

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_higher_order_global_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_higher_order_global_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_higher_order_global_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_higher_order_global_info_0[1];

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_higher_order_global_info_0[1];

static const MR_PseudoTypeInfo transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_ho_params_0_0[5];

static const MR_ConstString transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_names_ho_params_0_0[5];

static const MR_DuArgLocn transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_locns_ho_params_0_0[5];

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_ho_params_0_0;

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_ho_params_0_0[1];

static const MR_DuPtagLayout transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_ho_params_0[1];

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_ho_params_0[1];

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_ho_params_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__higher_order__higher_order_global_info__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_global_info__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_global_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_global_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_global_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_ho_request_0_0[8];

static const MR_ConstString transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_names_ho_request_0_0[8];

static const MR_DuArgLocn transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_locns_ho_request_0_0[8];

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_ho_request_0_0;

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_ho_request_0_0[1];

static const MR_DuPtagLayout transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_ho_request_0[1];

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_ho_request_0[1];

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_ho_request_0[1];

static const MR_EnumFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_ho_request_kind_0_0;

static const MR_EnumFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_ho_request_kind_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_ordinal_ordered_ho_request_kind_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_name_ordered_ho_request_kind_0[2];

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_ho_request_kind_0[2];

static const MR_EnumFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_is_arg_const_0_0;

static const MR_EnumFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_is_arg_const_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_ordinal_ordered_is_arg_const_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_name_ordered_is_arg_const_0[2];

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_is_arg_const_0[2];

static const MR_PseudoTypeInfo transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_known_const_0_0[2];

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_known_const_0_0;

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_known_const_0_0[1];

static const MR_DuPtagLayout transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_known_const_0[1];

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_known_const_0[1];

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_known_const_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__higher_order__higher_order_global_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0;

static const MR_PseudoTypeInfo transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_match_0_0[4];

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_match_0_0;

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_match_0_0[1];

static const MR_DuPtagLayout transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_match_0[1];

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_match_0[1];

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_match_0[1];

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_match_completeness_0_0;

static const MR_PseudoTypeInfo transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_match_completeness_0_1[1];

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_match_completeness_0_1;

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_match_completeness_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_match_completeness_0_1[1];

static const MR_DuPtagLayout transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_match_completeness_0[2];

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_match_completeness_0[2];

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_match_completeness_0[2];

static const MR_EnumFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_match_is_full_0_0;

static const MR_EnumFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_match_is_full_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_ordinal_ordered_match_is_full_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_name_ordered_match_is_full_0[2];

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_match_is_full_0[2];

static const MR_EnumFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_must_recompute_0_0;

static const MR_EnumFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_must_recompute_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_ordinal_ordered_must_recompute_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_name_ordered_must_recompute_0[2];

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_must_recompute_0[2];

static const MR_PseudoTypeInfo transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_new_pred_0_0[9];

static const MR_ConstString transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_names_new_pred_0_0[9];

static const MR_DuArgLocn transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_locns_new_pred_0_0[9];

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_new_pred_0_0;

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_new_pred_0_0[1];

static const MR_DuPtagLayout transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_new_pred_0[1];

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_new_pred_0[1];

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_new_pred_0[1];

static const MR_PseudoTypeInfo transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_parent_version_info_0_0[2];

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_parent_version_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_parent_version_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_parent_version_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_parent_version_info_0[1];

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_parent_version_info_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_global_info__list__ti_list_1transform_hlds__higher_order__higher_order_global_info__type_ctor_info_parent_version_info_0;

static const MR_PseudoTypeInfo transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_version_info_0_0[4];

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_version_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_version_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_version_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_version_info_0[1];

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_version_info_0[1];

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____match_is_full_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____match_is_full_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_arg_depth_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_arg_depth_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_max_args_depth_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_max_args_depth_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_arg_size_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_arg_size_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_max_args_size_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_max_args_size_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info__get_extra_arguments_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_99_111_110_115_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_97_114_103_115_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
  MR_Integer Index_1,
  MR_Word HOArgs_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____goal_size_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____goal_size_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____higher_order_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____higher_order_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____higher_order_global_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____higher_order_global_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____ho_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____ho_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____ho_request_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____ho_request_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____ho_request_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____ho_request_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____is_arg_const_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____is_arg_const_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____known_const_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____known_const_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____known_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____known_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____match_completeness_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____match_completeness_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____match_is_full_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____match_is_full_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____must_recompute_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____must_recompute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____new_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____new_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____new_pred_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____new_pred_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____parent_version_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____parent_version_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____version_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____version_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____version_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____version_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__higher_order__higher_order_global_info_scalar_common_1[11][2];

static /* final */ const MR_Box transform_hlds__higher_order__higher_order_global_info_scalar_common_2[13][3];

static /* final */ const MR_Box transform_hlds__higher_order__higher_order_global_info_scalar_common_3[1][6];

static /* final */ const MR_Box transform_hlds__higher_order__higher_order_global_info_scalar_common_4[1][5];




static /* final */ const MR_Box transform_hlds__higher_order__higher_order_global_info_scalar_common_1[11][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[1]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[3]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[2]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_parent_version_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__higher_order_global_info_scalar_common_2[13][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[1])),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__higher_order__higher_order_global_info__higher_order_max_args_size_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__higher_order__higher_order_global_info__higher_order_max_args_size_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__higher_order__higher_order_global_info__higher_order_arg_size_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__higher_order__higher_order_global_info__higher_order_arg_size_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__higher_order__higher_order_global_info__higher_order_max_args_depth_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__higher_order__higher_order_global_info__higher_order_max_args_depth_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__higher_order__higher_order_global_info__higher_order_arg_depth_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__higher_order__higher_order_global_info__higher_order_arg_depth_1_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__higher_order_global_info_scalar_common_3[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__higher_order_global_info_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct2 transform_hlds__higher_order__higher_order_global_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_goal_size_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Unify____goal_size_map_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Compare____goal_size_map_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.higher_order_global_info",
  (MR_String) "goal_size_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_global_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_global_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__higher_order__higher_order_global_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_global_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_global_info__list__ti_list_1hlds__hlds_rtti__type_ctor_info_rtti_var_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_global_info__list__ti_list_1transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0) }
};

static const MR_PseudoTypeInfo transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_higher_order_arg_0_0[8] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__list__ti_list_1hlds__hlds_rtti__type_ctor_info_rtti_var_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__list__ti_list_1transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_is_arg_const_0)
};

static const MR_ConstString transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_names_higher_order_arg_0_0[8] = {
  (MR_String) "hoa_cons_id",
  (MR_String) "hoa_index",
  (MR_String) "hoa_num_curried_args",
  (MR_String) "hoa_curry_arg_in_caller",
  (MR_String) "hoa_curry_type_in_caller",
  (MR_String) "hoa_curry_rtti_type",
  (MR_String) "hoa_known_curry_args",
  (MR_String) "hoa_is_constant"
};

static const MR_DuArgLocn transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_locns_higher_order_arg_0_0[8] = {
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_higher_order_arg_0_0 = {
  (MR_String) "higher_order_arg",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_higher_order_arg_0_0,
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_names_higher_order_arg_0_0,
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_locns_higher_order_arg_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_higher_order_arg_0_0[1] = { &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_higher_order_arg_0_0 };

static const MR_DuPtagLayout transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_higher_order_arg_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_higher_order_arg_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_higher_order_arg_0[1] = { &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_higher_order_arg_0_0 };

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_higher_order_arg_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Unify____higher_order_arg_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Compare____higher_order_arg_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.higher_order_global_info",
  (MR_String) "higher_order_arg",
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_higher_order_arg_0 },
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_higher_order_arg_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_higher_order_arg_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_global_info__set_ordlist__ti_set_ordlist_1transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__higher_order__higher_order_global_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__higher_order__higher_order_global_info__set_ordlist__ti_set_ordlist_1transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__higher_order__higher_order_global_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_higher_order_global_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_params_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0)
};

static const MR_ConstString transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_names_higher_order_global_info_0_0[6] = {
  (MR_String) "hogi_params",
  (MR_String) "hogi_module_info",
  (MR_String) "hogi_goal_size_map",
  (MR_String) "hogi_new_pred_map",
  (MR_String) "hogi_version_info_map",
  (MR_String) "hogi_next_id_counter"
};

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_higher_order_global_info_0_0 = {
  (MR_String) "higher_order_global_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_higher_order_global_info_0_0,
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_names_higher_order_global_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_higher_order_global_info_0_0[1] = { &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_higher_order_global_info_0_0 };

static const MR_DuPtagLayout transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_higher_order_global_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_higher_order_global_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_higher_order_global_info_0[1] = { &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_higher_order_global_info_0_0 };

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_higher_order_global_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Unify____higher_order_global_info_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Compare____higher_order_global_info_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.higher_order_global_info",
  (MR_String) "higher_order_global_info",
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_higher_order_global_info_0 },
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_higher_order_global_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_higher_order_global_info_0,

};

static const MR_PseudoTypeInfo transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_ho_params_0_0[5] = {
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_opt_higher_order_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_spec_types_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_spec_types_user_guided_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_names_ho_params_0_0[5] = {
  (MR_String) "param_do_higher_order_spec",
  (MR_String) "param_do_type_spec",
  (MR_String) "param_do_user_type_spec",
  (MR_String) "param_size_limit",
  (MR_String) "param_arg_limit"
};

static const MR_DuArgLocn transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_locns_ho_params_0_0[5] = {
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
  }
};

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_ho_params_0_0 = {
  (MR_String) "ho_params",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_ho_params_0_0,
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_names_ho_params_0_0,
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_locns_ho_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_ho_params_0_0[1] = { &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_ho_params_0_0 };

static const MR_DuPtagLayout transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_ho_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_ho_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_ho_params_0[1] = { &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_ho_params_0_0 };

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_ho_params_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Unify____ho_params_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Compare____ho_params_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.higher_order_global_info",
  (MR_String) "ho_params",
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_ho_params_0 },
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_ho_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_ho_params_0,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__higher_order__higher_order_global_info__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&transform_hlds__higher_order__higher_order_global_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_global_info__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__higher_order__higher_order_global_info__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_global_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_global_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__higher_order__higher_order_global_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_global_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_PseudoTypeInfo transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_ho_request_0_0[8] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__list__ti_list_1transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_kind_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_ConstString transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_names_ho_request_0_0[8] = {
  (MR_String) "rq_caller",
  (MR_String) "rq_callee",
  (MR_String) "rq_args",
  (MR_String) "rq_tvars",
  (MR_String) "rq_ho_args",
  (MR_String) "rq_caller_tvarset",
  (MR_String) "rq_request_kind",
  (MR_String) "rq_call_context"
};

static const MR_DuArgLocn transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_locns_ho_request_0_0[8] = {
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
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_ho_request_0_0 = {
  (MR_String) "ho_request",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_ho_request_0_0,
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_names_ho_request_0_0,
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_locns_ho_request_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_ho_request_0_0[1] = { &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_ho_request_0_0 };

static const MR_DuPtagLayout transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_ho_request_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_ho_request_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_ho_request_0[1] = { &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_ho_request_0_0 };

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_ho_request_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Unify____ho_request_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Compare____ho_request_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.higher_order_global_info",
  (MR_String) "ho_request",
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_ho_request_0 },
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_ho_request_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_ho_request_0,

};

static const MR_EnumFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_ho_request_kind_0_0 = {
  (MR_String) "non_user_type_spec",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_ho_request_kind_0_1 = {
  (MR_String) "user_type_spec",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_ordinal_ordered_ho_request_kind_0[2] = {
  &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_ho_request_kind_0_0,
  &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_ho_request_kind_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_name_ordered_ho_request_kind_0[2] = {
  &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_ho_request_kind_0_0,
  &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_ho_request_kind_0_1
};

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_ho_request_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Unify____ho_request_kind_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Compare____ho_request_kind_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.higher_order_global_info",
  (MR_String) "ho_request_kind",
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_name_ordered_ho_request_kind_0 },
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_ordinal_ordered_ho_request_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_ho_request_kind_0,

};

static const MR_EnumFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_is_arg_const_0_0 = {
  (MR_String) "arg_is_not_const",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_is_arg_const_0_1 = {
  (MR_String) "arg_is_const",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_ordinal_ordered_is_arg_const_0[2] = {
  &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_is_arg_const_0_0,
  &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_is_arg_const_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_name_ordered_is_arg_const_0[2] = {
  &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_is_arg_const_0_1,
  &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_is_arg_const_0_0
};

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_is_arg_const_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_is_arg_const_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Unify____is_arg_const_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Compare____is_arg_const_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.higher_order_global_info",
  (MR_String) "is_arg_const",
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_name_ordered_is_arg_const_0 },
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_ordinal_ordered_is_arg_const_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_is_arg_const_0,

};

static const MR_PseudoTypeInfo transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_known_const_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_known_const_0_0 = {
  (MR_String) "known_const",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_known_const_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_known_const_0_0[1] = { &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_known_const_0_0 };

static const MR_DuPtagLayout transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_known_const_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_known_const_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_known_const_0[1] = { &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_known_const_0_0 };

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_known_const_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Unify____known_const_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Compare____known_const_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.higher_order_global_info",
  (MR_String) "known_const",
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_known_const_0 },
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_known_const_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_known_const_0,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__higher_order__higher_order_global_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__higher_order__higher_order_global_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_var_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Unify____known_var_map_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Compare____known_var_map_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.higher_order_global_info",
  (MR_String) "known_var_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_match_0_0[4] = {
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_match_completeness_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_match_0_0 = {
  (MR_String) "match",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_match_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_match_0_0[1] = { &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_match_0_0 };

static const MR_DuPtagLayout transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_match_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_match_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_match_0[1] = { &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_match_0_0 };

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_match_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_match_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Unify____match_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Compare____match_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.higher_order_global_info",
  (MR_String) "match",
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_match_0 },
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_match_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_match_0,

};

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_match_completeness_0_0 = {
  (MR_String) "complete_match",
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

static const MR_PseudoTypeInfo transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_match_completeness_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_match_completeness_0_1 = {
  (MR_String) "partial_match",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_match_completeness_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_match_completeness_0_0[1] = { &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_match_completeness_0_0 };

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_match_completeness_0_1[1] = { &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_match_completeness_0_1 };

static const MR_DuPtagLayout transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_match_completeness_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_match_completeness_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_match_completeness_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_match_completeness_0[2] = {
  &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_match_completeness_0_0,
  &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_match_completeness_0_1
};

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_match_completeness_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_match_completeness_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Unify____match_completeness_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Compare____match_completeness_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.higher_order_global_info",
  (MR_String) "match_completeness",
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_match_completeness_0 },
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_match_completeness_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_match_completeness_0,

};

static const MR_EnumFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_match_is_full_0_0 = {
  (MR_String) "match_is_full",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_match_is_full_0_1 = {
  (MR_String) "match_is_partial",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_ordinal_ordered_match_is_full_0[2] = {
  &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_match_is_full_0_0,
  &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_match_is_full_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_name_ordered_match_is_full_0[2] = {
  &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_match_is_full_0_0,
  &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_match_is_full_0_1
};

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_match_is_full_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_match_is_full_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Unify____match_is_full_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Compare____match_is_full_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.higher_order_global_info",
  (MR_String) "match_is_full",
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_name_ordered_match_is_full_0 },
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_ordinal_ordered_match_is_full_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_match_is_full_0,

};

static const MR_EnumFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_must_recompute_0_0 = {
  (MR_String) "must_recompute",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_must_recompute_0_1 = {
  (MR_String) "need_not_recompute",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_ordinal_ordered_must_recompute_0[2] = {
  &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_must_recompute_0_0,
  &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_must_recompute_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_name_ordered_must_recompute_0[2] = {
  &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_must_recompute_0_0,
  &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_functor_desc_must_recompute_0_1
};

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_must_recompute_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_must_recompute_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Unify____must_recompute_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Compare____must_recompute_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.higher_order_global_info",
  (MR_String) "must_recompute",
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_name_ordered_must_recompute_0 },
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__enum_ordinal_ordered_must_recompute_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_must_recompute_0,

};

static const MR_PseudoTypeInfo transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_new_pred_0_0[9] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__list__ti_list_1transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_kind_0)
};

static const MR_ConstString transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_names_new_pred_0_0[9] = {
  (MR_String) "np_version_ppid",
  (MR_String) "np_old_ppid",
  (MR_String) "np_req_ppid",
  (MR_String) "np_name",
  (MR_String) "np_spec_args",
  (MR_String) "np_unspec_actuals",
  (MR_String) "np_extra_act_ti_vars",
  (MR_String) "np_call_tvarset",
  (MR_String) "np_is_user_spec"
};

static const MR_DuArgLocn transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_locns_new_pred_0_0[9] = {
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_new_pred_0_0 = {
  (MR_String) "new_pred",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_new_pred_0_0,
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_names_new_pred_0_0,
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_locns_new_pred_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_new_pred_0_0[1] = { &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_new_pred_0_0 };

static const MR_DuPtagLayout transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_new_pred_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_new_pred_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_new_pred_0[1] = { &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_new_pred_0_0 };

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_new_pred_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Unify____new_pred_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Compare____new_pred_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.higher_order_global_info",
  (MR_String) "new_pred",
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_new_pred_0 },
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_new_pred_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_new_pred_0,

};

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Unify____new_pred_map_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Compare____new_pred_map_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.higher_order_global_info",
  (MR_String) "new_pred_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_parent_version_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_parent_version_info_0_0 = {
  (MR_String) "parent_version_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_parent_version_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_parent_version_info_0_0[1] = { &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_parent_version_info_0_0 };

static const MR_DuPtagLayout transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_parent_version_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_parent_version_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_parent_version_info_0[1] = { &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_parent_version_info_0_0 };

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_parent_version_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_parent_version_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Unify____parent_version_info_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Compare____parent_version_info_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.higher_order_global_info",
  (MR_String) "parent_version_info",
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_parent_version_info_0 },
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_parent_version_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_parent_version_info_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__higher_order__higher_order_global_info__list__ti_list_1transform_hlds__higher_order__higher_order_global_info__type_ctor_info_parent_version_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_parent_version_info_0) }
};

static const MR_PseudoTypeInfo transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_version_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0),
  (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__list__ti_list_1transform_hlds__higher_order__higher_order_global_info__type_ctor_info_parent_version_info_0)
};

static const MR_DuFunctorDesc transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_version_info_0_0 = {
  (MR_String) "version_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__field_types_version_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_version_info_0_0[1] = { &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_version_info_0_0 };

static const MR_DuPtagLayout transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_version_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_stag_ordered_version_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_version_info_0[1] = { &transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_functor_desc_version_info_0_0 };

static const MR_Integer transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_version_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Unify____version_info_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Compare____version_info_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.higher_order_global_info",
  (MR_String) "version_info",
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_name_ordered_version_info_0 },
  { transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__du_ptag_ordered_version_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__functor_number_map_version_info_0,

};

const MR_TypeCtorInfo_Struct transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Unify____version_info_map_0_0_10001)),
  ((MR_Box) (transform_hlds__higher_order__higher_order_global_info____Compare____version_info_map_0_0_10001)),
  (MR_String) "transform_hlds.higher_order.higher_order_global_info",
  (MR_String) "version_info_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__higher_order__higher_order_global_info__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____version_info_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____version_info_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____version_info_0_0(
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
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[10]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____version_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[10]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____parent_version_info_0_0(
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
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____parent_version_info_0_0(
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
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____new_pred_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____new_pred_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____must_recompute_0_0(
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
transform_hlds__higher_order__higher_order_global_info____Unify____must_recompute_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____match_is_full_0_0(
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
transform_hlds__higher_order__higher_order_global_info____Unify____match_is_full_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____match_0_0(
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

    transform_hlds__higher_order__higher_order_global_info____Compare____new_pred_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      transform_hlds__higher_order__higher_order_global_info____Compare____match_completeness_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____new_pred_0_0(
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
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX9_28 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 8))) & (MR_Integer) 1);
    MR_Word ArgY9_29 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 8))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[6]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[7]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[8]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[9]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Integer Var_41 = (MR_Integer) (ArgX9_28);
                    MR_Integer Var_42 = (MR_Integer) (ArgY9_29);

                    succeeded = (Var_41 < Var_42);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_41 > Var_42);
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

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____match_completeness_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));

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

MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____match_0_0(
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
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_14_14;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____new_pred_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____match_completeness_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____new_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_27_27;
    MR_Word TypeInfo_28_28;
    MR_Word TypeInfo_29_29;
    MR_Word TypeInfo_30_30;
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
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgX9_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 8))) & (MR_Integer) 1);
    MR_Word ArgY9_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 8))) & (MR_Integer) 1);

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeInfo_27_27 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[6]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_28_28 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[7]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_29_29 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[8]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_30_30 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[9]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                    succeeded = (ArgX9_19 == ArgY9_20);
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

MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____match_completeness_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____known_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____known_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____known_const_0_0(
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

    parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____known_const_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____is_arg_const_0_0(
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
transform_hlds__higher_order__higher_order_global_info____Unify____is_arg_const_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____ho_request_kind_0_0(
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
transform_hlds__higher_order__higher_order_global_info____Unify____ho_request_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____ho_request_0_0(
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
    MR_Word ArgX7_22 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) & (MR_Integer) 1);
    MR_Word ArgY7_23 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 6))) & (MR_Integer) 1);
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[7]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[8]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[6]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[9]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;
                MR_Integer Var_37 = (MR_Integer) (ArgX7_22);
                MR_Integer Var_38 = (MR_Integer) (ArgY7_23);

                succeeded = (Var_37 < Var_38);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_37 > Var_38);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult7_24 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                  mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX8_25, ArgY8_26);
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____ho_request_0_0(
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
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_25_25;
    MR_Word TypeInfo_26_26;
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
    MR_Word ArgX7_15 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 6))) & (MR_Integer) 1);
    MR_Word ArgY7_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))) & (MR_Integer) 1);
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_23_23 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_24_24 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[8]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_25_25 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[6]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_26_26 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[9]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                succeeded = (ArgX7_15 == ArgY7_16);
                if (succeeded)
                  succeeded = mercury__term_context____Unify____term_context_0_0(ArgX8_17, ArgY8_18);
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
transform_hlds__higher_order__higher_order_global_info____Compare____higher_order_global_info_0_0(
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

    transform_hlds__higher_order__higher_order_global_info____Compare____ho_params_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[0]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[2]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__counter____Compare____counter_0_0(HeadVar__1_1, ArgX6_19, ArgY6_20);
          }
        }
      }
    }
  }
}

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____ho_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;
    MR_Integer Var_25 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_26 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_25 < Var_26);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_25 > Var_26);
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
      MR_Integer Var_27 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_28 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_27 < Var_28);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_27 > Var_28);
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

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
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
            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (ArgX5_16 > ArgY5_17);
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

MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____higher_order_global_info_0_0(
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

    succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____ho_params_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_18_18 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
              succeeded = mercury__counter____Unify____counter_0_0(ArgX6_13, ArgY6_14);
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____ho_params_0_0(
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
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
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

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____higher_order_arg_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 7))) & (MR_Integer) 1);
    MR_Word ArgY8_26 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 7))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
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

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[3]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[4]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[5]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[6]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Integer Var_37 = (MR_Integer) (ArgX8_25);
                  MR_Integer Var_38 = (MR_Integer) (ArgY8_26);

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
}

MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____higher_order_arg_0_0(
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
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_25_25;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 7))) & (MR_Integer) 1);
    MR_Word ArgY8_18 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 7))) & (MR_Integer) 1);

    succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_22_22 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_23_23 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_24_24 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_25_25 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[6]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                  succeeded = (ArgX8_17 == ArgY8_18);
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
transform_hlds__higher_order__higher_order_global_info____Compare____goal_size_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____goal_size_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static MR_Box MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_arg_depth_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = transform_hlds__higher_order__higher_order_global_info__higher_order_arg_depth_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_arg_depth_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__int__max_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

MR_Integer MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_arg_depth_1_f_0(
  MR_Word HOArg_3)
{
  MR_Integer HeadVar__2_2;
  MR_Integer Var_5;
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, HOArg_3, 6))));
  MR_Word Var_15;
  MR_Box conv2_Var_5;

  Var_15 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[12]), Var_6);
  conv2_Var_5 = mercury__list__foldl_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[11]), Var_15, ((MR_Box) ((MR_Integer) 0)));
  Var_5 = ((MR_Integer) (conv2_Var_5));
  HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_5);
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_max_args_depth_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = transform_hlds__higher_order__higher_order_global_info__higher_order_arg_depth_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_max_args_depth_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__int__max_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

MR_Integer MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_max_args_depth_1_f_0(
  MR_Word Args_3)
{
  MR_Integer HeadVar__2_2;
  MR_Word Var_5;
  MR_Box conv2_HeadVar__2_2;

  Var_5 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[10]), Args_3);
  conv2_HeadVar__2_2 = mercury__list__foldl_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[9]), Var_5, ((MR_Box) ((MR_Integer) 0)));
  HeadVar__2_2 = ((MR_Integer) (conv2_HeadVar__2_2));
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_arg_size_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = transform_hlds__higher_order__higher_order_global_info__higher_order_arg_size_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_arg_size_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__int__plus_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

MR_Integer MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_arg_size_1_f_0(
  MR_Word HOArg_3)
{
  MR_Integer HeadVar__2_2;
  MR_Integer Var_5;
  MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, HOArg_3, 6))));
  MR_Word Var_15;
  MR_Box conv2_Var_5;

  Var_15 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[8]), Var_6);
  conv2_Var_5 = mercury__list__foldl_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[7]), Var_15, ((MR_Box) ((MR_Integer) 0)));
  Var_5 = ((MR_Integer) (conv2_Var_5));
  HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_5);
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_max_args_size_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = transform_hlds__higher_order__higher_order_global_info__higher_order_arg_size_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_max_args_size_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = mercury__int__max_2_f_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

MR_Integer MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_max_args_size_1_f_0(
  MR_Word Args_3)
{
  MR_Integer HeadVar__2_2;
  MR_Word Var_5;
  MR_Box conv2_HeadVar__2_2;

  Var_5 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[6]), Args_3);
  conv2_HeadVar__2_2 = mercury__list__foldl_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_2[5]), Var_5, ((MR_Box) ((MR_Integer) 0)));
  HeadVar__2_2 = ((MR_Integer) (conv2_HeadVar__2_2));
  return HeadVar__2_2;
}

MR_Word MR_CALL 
transform_hlds__higher_order__higher_order_global_info__mode_to_unify_mode_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Mode_5)
{
  MR_Word UnifyMode_6;
  MR_Word InitInst_7;
  MR_Word FinalInst_8;

  check_hlds__mode_util__mode_get_insts_4_p_0(ModuleInfo_4, Mode_5, &InitInst_7, &FinalInst_8);
  {
    UnifyMode_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UnifyMode_6, 0) = ((MR_Box) (InitInst_7));
    MR_hl_field(0, UnifyMode_6, 1) = ((MR_Box) (FinalInst_8));
    MR_hl_field(0, UnifyMode_6, 2) = ((MR_Box) (InitInst_7));
    MR_hl_field(0, UnifyMode_6, 3) = ((MR_Box) (FinalInst_8));
  }
  return UnifyMode_6;
}

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info__remove_const_higher_order_args_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HOArgs_4,
  MR_Word Args0_5,
  MR_Word * Args_6)
{
  transform_hlds__higher_order__higher_order_global_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_99_111_110_115_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_97_114_103_115_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, HOArgs_4, Args0_5, Args_6);
}

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info__get_extra_arguments_3_p_0(
  MR_Word HOArgs_4,
  MR_Word Args0_5,
  MR_Word * HeadVar__3_3)
{
  MR_Word ExtraArgs_6;
  MR_Word Args_7;

  transform_hlds__higher_order__higher_order_global_info__get_extra_arguments_2_2_p_0(HOArgs_4, &ExtraArgs_6);
  transform_hlds__higher_order__higher_order_global_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_99_111_110_115_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_97_114_103_115_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, HOArgs_4, Args0_5, &Args_7);
  *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[1]), ExtraArgs_6, Args_7);
}

MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info__version_matches_5_p_0(
  MR_Word Params_6,
  MR_Word ModuleInfo_7,
  MR_Word Request_8,
  MR_Word Version_9,
  MR_Word * Match_10)
{
  MR_bool succeeded;
  MR_Word TypeInfo_56_56;
  MR_Word TypeCtorInfo_57_57;
  MR_Word TypeInfo_58_58;
  MR_Word TypeCtorInfo_59_59;
  MR_Word TypeInfo_8_62;
  MR_Word CalleePredProcId_12 = ((MR_Word) ((MR_hl_field(0, Request_8, 1))));
  MR_Word ArgsTypes0_13 = ((MR_Word) ((MR_hl_field(0, Request_8, 2))));
  MR_Word RequestHigherOrderArgs_15 = ((MR_Word) ((MR_hl_field(0, Request_8, 4))));
  MR_Word RequestTVarSet_16 = ((MR_Word) ((MR_hl_field(0, Request_8, 5))));
  MR_Word CalleePredId_19 = ((MR_Word) ((MR_hl_field(0, CalleePredProcId_12, 0))));
  MR_Word CalleePredInfo_21;
  MR_Word VersionHigherOrderArgs_26;
  MR_Word VersionArgsTypes0_27;
  MR_Word VersionExtraTypeInfoTVars_28;
  MR_Word VersionTVarSet_29;
  MR_Word HigherOrderArgs_31;
  MR_Word FullOrPartial_32;
  MR_Word MatchCompleteness_33;
  MR_Word TVarRenaming_37;
  MR_Word VersionArgTypes0_38;
  MR_Word VersionArgTypes_39;
  MR_Word Args0_40;
  MR_Word ArgTypes_41;
  MR_Word TypeSubn_42;
  MR_Word KindMap_43;
  MR_Word RenamedKindMap_44;
  MR_Word ExtraTypeInfoTVars0_45;
  MR_Word ExtraTypeInfoTypes_46;
  MR_Word Args_47;
  MR_Word ExtraArgs_60;
  MR_Word Args_61;
  MR_Integer Var_63;
  MR_Word Var_36;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, CalleePredId_19, &CalleePredInfo_21);
  VersionHigherOrderArgs_26 = ((MR_Word) ((MR_hl_field(0, Version_9, 4))));
  VersionArgsTypes0_27 = ((MR_Word) ((MR_hl_field(0, Version_9, 5))));
  VersionExtraTypeInfoTVars_28 = ((MR_Word) ((MR_hl_field(0, Version_9, 6))));
  VersionTVarSet_29 = ((MR_Word) ((MR_hl_field(0, Version_9, 7))));
  succeeded = transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0(RequestHigherOrderArgs_15, VersionHigherOrderArgs_26, &HigherOrderArgs_31, &FullOrPartial_32);
  if (succeeded)
  {
    switch (FullOrPartial_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_55_55;
          MR_Word Markers_34;
          MR_Integer NumHOArgs_35;
          MR_Word Var_49;

          hlds__hlds_pred__pred_info_get_markers_2_p_0(CalleePredInfo_21, &Markers_34);
          succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_34, (MR_Integer) 12);
          succeeded = !(succeeded);
          if (succeeded)
          {
            Var_49 = (MR_Integer) 13;
            succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_34, Var_49);
            succeeded = !(succeeded);
            if (succeeded)
            {
              {
                MR_Word Var_50 = ((((MR_Unsigned) ((MR_hl_field(0, Params_6, 0))) >> 1)) & (MR_Integer) 1);

                succeeded = (Var_50 == (MR_Integer) 1);
              }
              if (!(succeeded))
                succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(CalleePredInfo_21);
              if (succeeded)
              {
                TypeCtorInfo_55_55 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0);
                mercury__list__length_2_p_0(TypeCtorInfo_55_55, HigherOrderArgs_31, &NumHOArgs_35);
                {
                  MatchCompleteness_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MatchCompleteness_33, 0) = ((MR_Box) (NumHOArgs_35));
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MatchCompleteness_33 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(RequestTVarSet_16, VersionTVarSet_29, &Var_36, &TVarRenaming_37);
      TypeInfo_56_56 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[1]);
      TypeCtorInfo_57_57 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      mercury__assoc_list__values_2_p_0(TypeInfo_56_56, TypeCtorInfo_57_57, VersionArgsTypes0_27, &VersionArgTypes0_38);
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(TVarRenaming_37, VersionArgTypes0_38, &VersionArgTypes_39);
      mercury__assoc_list__keys_and_values_3_p_0(TypeInfo_56_56, TypeCtorInfo_57_57, ArgsTypes0_13, &Args0_40, &ArgTypes_41);
      succeeded = parse_tree__prog_type_unify__type_list_subsumes_3_p_0(VersionArgTypes_39, ArgTypes_41, &TypeSubn_42);
      if (succeeded)
      {
        TypeInfo_58_58 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[2]);
        TypeCtorInfo_59_59 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        mercury__map__init_1_p_0(TypeInfo_58_58, TypeCtorInfo_59_59, &KindMap_43);
        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_kind_map_3_p_0(TVarRenaming_37, KindMap_43, &RenamedKindMap_44);
        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(TVarRenaming_37, VersionExtraTypeInfoTVars_28, &ExtraTypeInfoTVars0_45);
        parse_tree__prog_type_subst__apply_rec_subst_to_tvar_list_4_p_0(RenamedKindMap_44, TypeSubn_42, ExtraTypeInfoTVars0_45, &ExtraTypeInfoTypes_46);
        TypeInfo_8_62 = (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[1]);
        transform_hlds__higher_order__higher_order_global_info__get_extra_arguments_2_2_p_0(HigherOrderArgs_31, &ExtraArgs_60);
        Var_63 = (MR_Integer) 1;
        transform_hlds__higher_order__higher_order_global_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_99_111_110_115_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_97_114_103_115_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(Var_63, HigherOrderArgs_31, Args0_40, &Args_61);
        Args_47 = mercury__list__f_43_43_2_f_0(TypeInfo_8_62, ExtraArgs_60, Args_61);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *Match_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Version_9));
          MR_hl_field(0, base, 1) = ((MR_Box) (MatchCompleteness_33));
          MR_hl_field(0, base, 2) = ((MR_Box) (Args_47));
          MR_hl_field(0, base, 3) = ((MR_Box) (ExtraTypeInfoTypes_46));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info__get_extra_arguments_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word HOArg_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word HOArgs_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word CurriedArgs0_9 = ((MR_Word) ((MR_hl_field(0, HOArg_3, 3))));
      MR_Word HOCurriedArgs_12 = ((MR_Word) ((MR_hl_field(0, HOArg_3, 6))));
      MR_Word IsConst_13 = ((MR_Unsigned) ((MR_hl_field(0, HOArg_3, 7))) & (MR_Integer) 1);

      switch (IsConst_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__1_1 = HOArgs_4;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word CurriedArgs_14;
            MR_Word ExtraCurriedArgs_15;
            MR_Word Args1_16;
            MR_Word Var_17;
            MR_Word Var_18;
            MR_Word Var_19;

            transform_hlds__higher_order__higher_order_global_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_99_111_110_115_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_97_114_103_115_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0((MR_Integer) 1, HOCurriedArgs_12, CurriedArgs0_9, &CurriedArgs_14);
            transform_hlds__higher_order__higher_order_global_info__get_extra_arguments_2_2_p_0(HOCurriedArgs_12, &ExtraCurriedArgs_15);
            transform_hlds__higher_order__higher_order_global_info__get_extra_arguments_2_2_p_0(HOArgs_4, &Args1_16);
            {
              Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_19, 0) = ((MR_Box) (Args1_16));
              MR_hl_field(1, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_18, 0) = ((MR_Box) (ExtraCurriedArgs_15));
              MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_19));
            }
            {
              Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_17, 0) = ((MR_Box) (CurriedArgs_14));
              MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_18));
            }
            mercury__list__condense_2_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[1]), Var_17, HeadVar__2_2);
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_99_111_110_115_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_97_114_103_115_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(
  MR_Integer Index_1,
  MR_Word HOArgs_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box HeadArg0_9 = (MR_hl_field(1, HeadVar__3_3, 0));
    MR_Word TailArgs0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));

    if ((HOArgs_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word HeadHOArg_12 = ((MR_Word) ((MR_hl_field(1, HOArgs_2, 0))));
      MR_Word TailHOArgs_13 = ((MR_Word) ((MR_hl_field(1, HOArgs_2, 1))));
      MR_Integer HeadHOIndex_15 = ((MR_Integer) ((MR_hl_field(0, HeadHOArg_12, 1))));
      MR_Word HeadIsConst_21 = ((MR_Unsigned) ((MR_hl_field(0, HeadHOArg_12, 7))) & (MR_Integer) 1);

      succeeded = (HeadHOIndex_15 == Index_1);
      if (succeeded)
      {
        MR_Word TailArgs_22;
        MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) Index_1 + (MR_Unsigned) 1);

        transform_hlds__higher_order__higher_order_global_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_99_111_110_115_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_97_114_103_115_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(Var_23, TailHOArgs_13, TailArgs0_10, &TailArgs_22);
        switch (HeadIsConst_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *HeadVar__4_4 = TailArgs_22;
            break;
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(1, base, 0) = HeadArg0_9;
              MR_hl_field(1, base, 1) = ((MR_Box) (TailArgs_22));
            }
            break;
        }
      }
      else
      {
        succeeded = (HeadHOIndex_15 > Index_1);
        if (succeeded)
        {
          MR_Integer Var_25 = (MR_Integer) ((MR_Unsigned) Index_1 + (MR_Unsigned) 1);
          MR_Word TailArgs_29;

          transform_hlds__higher_order__higher_order_global_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_99_111_110_115_116_95_104_105_103_104_101_114_95_111_114_100_101_114_95_97_114_103_115_95_108_111_111_112_95_95_91_49_93_95_48_4_p_0(Var_25, HOArgs_2, TailArgs0_10, &TailArgs_29);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(1, base, 0) = HeadArg0_9;
            MR_hl_field(1, base, 1) = ((MR_Box) (TailArgs_29));
          }
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.higher_order.higher_order_global_info.remove_const_higher_order_args_loop\'/4", (MR_String) "unordered indexes");
            return;
          }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__RequestArg_11 = ((MR_Word) ((env_ptr)->transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__conv0_RequestArg_11));
  transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Integer Var_57;
    MR_Integer Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_9;

    (env_ptr)->transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__Var_10 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__RequestArg_11, 0))));
    (env_ptr)->transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__Var_10)) == (MR_Integer) 2);
    if ((env_ptr)->transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded)
      transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0_s * env_ptr = (struct transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0), &(env_ptr)->transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__conv0_RequestArg_11, (env_ptr)->transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__HeadVar__1_1, transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_3, env_ptr);
      (env_ptr)->transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  struct transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0_s env;

  (env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__HeadVar__1_1 = HeadVar__1_1;
  if (((env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    (env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
    if ((env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded)
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Integer) 0;
      (env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Word Var_66 = ((MR_Word) ((MR_hl_field(1, (env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__HeadVar__1_1, 1))));
    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(1, (env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__HeadVar__1_1, 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Integer) 1;
      transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_4(&env);
      (env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded = !((env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded);
    }
    else
    {
      MR_Word VersionArg_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word VersionArgs_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ConsIdR_18 = ((MR_Word) ((MR_hl_field(0, Var_67, 0))));
      MR_Integer ArgNoR_19 = ((MR_Integer) ((MR_hl_field(0, Var_67, 1))));
      MR_Word RequestIsConst_25 = ((MR_Unsigned) ((MR_hl_field(0, Var_67, 7))) & (MR_Integer) 1);
      MR_Word ConsIdV_26 = ((MR_Word) ((MR_hl_field(0, VersionArg_14, 0))));
      MR_Integer ArgNoV_27 = ((MR_Integer) ((MR_hl_field(0, VersionArg_14, 1))));
      MR_Word VersionIsConst_33 = ((MR_Unsigned) ((MR_hl_field(0, VersionArg_14, 7))) & (MR_Integer) 1);
      MR_Integer Var_20;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_67, 7)));
      MR_Integer Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, VersionArg_14, 7)));

      (env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded = (ArgNoR_19 == ArgNoV_27);
      if ((env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded)
      {
        MR_Integer NumArgs_36;
        MR_Word CurriedArgs_37;
        MR_Word CurriedArgTypes_38;
        MR_Word CurriedArgRttiInfo_39;
        MR_Word HOCurriedRequestArgs_40;
        MR_Word HOCurriedVersionArgs_47;
        MR_Word NewHOCurriedArgs_49;
        MR_Word TailArgs_50;
        MR_Word NewRequestArg_52;
        MR_Word Var_55;
        MR_Integer Var_65;
        MR_Word Var_34;
        MR_Integer Var_35;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Integer Var_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_48;
        MR_Word Var_51;

        (env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsIdR_18, ConsIdV_26);
        if ((env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded)
        {
          NumArgs_36 = ((MR_Integer) ((MR_hl_field(0, Var_67, 2))));
          CurriedArgs_37 = ((MR_Word) ((MR_hl_field(0, Var_67, 3))));
          CurriedArgTypes_38 = ((MR_Word) ((MR_hl_field(0, Var_67, 4))));
          CurriedArgRttiInfo_39 = ((MR_Word) ((MR_hl_field(0, Var_67, 5))));
          HOCurriedRequestArgs_40 = ((MR_Word) ((MR_hl_field(0, Var_67, 6))));
          Var_65 = ((MR_Integer) ((MR_hl_field(0, VersionArg_14, 2))));
          HOCurriedVersionArgs_47 = ((MR_Word) ((MR_hl_field(0, VersionArg_14, 6))));
          (env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded = (NumArgs_36 == Var_65);
          if ((env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded)
          {
            (env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded = transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0(HOCurriedRequestArgs_40, HOCurriedVersionArgs_47, &NewHOCurriedArgs_49, HeadVar__4_4);
            if ((env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded)
            {
              (env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded = transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0(Var_66, VersionArgs_15, &TailArgs_50, &Var_51);
              if ((env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded)
              {
                (env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded = (RequestIsConst_25 == (MR_Integer) 1);
                if ((env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded)
                  (env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded = (VersionIsConst_33 == (MR_Integer) 1);
                if ((env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded)
                  Var_55 = (MR_Integer) 1;
                else
                  Var_55 = (MR_Integer) 0;
                {
                  NewRequestArg_52 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, NewRequestArg_52, 0) = ((MR_Box) (ConsIdR_18));
                  MR_hl_field(0, NewRequestArg_52, 1) = ((MR_Box) (ArgNoR_19));
                  MR_hl_field(0, NewRequestArg_52, 2) = ((MR_Box) (NumArgs_36));
                  MR_hl_field(0, NewRequestArg_52, 3) = ((MR_Box) (CurriedArgs_37));
                  MR_hl_field(0, NewRequestArg_52, 4) = ((MR_Box) (CurriedArgTypes_38));
                  MR_hl_field(0, NewRequestArg_52, 5) = ((MR_Box) (CurriedArgRttiInfo_39));
                  MR_hl_field(0, NewRequestArg_52, 6) = ((MR_Box) (NewHOCurriedArgs_49));
                  MR_hl_field(0, NewRequestArg_52, 7) = (MR_Box) ((MR_Unsigned) (Var_55));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (NewRequestArg_52));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailArgs_50));
                }
                (env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded = MR_TRUE;
              }
            }
          }
        }
      }
      else
      {
        MR_Word Var_53;
        MR_Word Var_54;

        (env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded = (ArgNoR_19 < ArgNoV_27);
        if ((env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded)
        {
          (env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) ConsIdR_18)) != (MR_Integer) 2);
          if ((env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded)
          {
            (env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded = transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0(Var_66, HeadVar__2_2, HeadVar__3_3, &Var_54);
            if ((env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded)
            {
              *HeadVar__4_4 = (MR_Integer) 1;
              (env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded = MR_TRUE;
            }
          }
        }
      }
    }
  }
  return (env).transform_hlds__higher_order__higher_order_global_info__higher_order_args_match_4_p_0_env_0__succeeded;
}

MR_Word MR_CALL 
transform_hlds__higher_order__higher_order_global_info__both_constants_2_f_0(
  MR_Word IsConstA_4,
  MR_Word IsConstB_5)
{
  MR_bool succeeded = (IsConstA_4 == (MR_Integer) 1);
  MR_Word IsConst_6;

  if (succeeded)
    succeeded = (IsConstB_5 == (MR_Integer) 1);
  if (succeeded)
    IsConst_6 = (MR_Integer) 1;
  else
    IsConst_6 = (MR_Integer) 0;
  return IsConst_6;
}

MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info__all_higher_order_args_are_constant_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Arg_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Args_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_4 = ((MR_Unsigned) ((MR_hl_field(0, Arg_2, 7))) & (MR_Integer) 1);
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = (Var_4 == (MR_Integer) 1);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Args_3;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info__hogi_allocate_id_3_p_0(
  MR_Integer * Id_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word Counter0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, 5))));
  MR_Word Counter_7;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;

  mercury__counter__allocate_3_p_0(Id_4, Counter0_6, &Counter_7);
  Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, 0))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, 1))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, 2))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, 3))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_8, 4))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (Counter_7));
  }
}

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info__hogi_add_version_4_p_0(
  MR_Word PredProcId_5,
  MR_Word Version_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  MR_Word VersionInfoMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, 4))));
  MR_Word VersionInfoMap_9;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_24;

  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0), ((MR_Box) (PredProcId_5)), ((MR_Box) (Version_6)), VersionInfoMap0_8, &VersionInfoMap_9);
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, 0))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, 1))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, 2))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, 3))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 4) = ((MR_Box) (VersionInfoMap_9));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_24));
  }
}

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info__hogi_add_goal_size_4_p_0(
  MR_Word PredId_5,
  MR_Integer GoalSize_6,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  MR_Word GoalSizeMap0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, 2))));
  MR_Word GoalSizeMap_9;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;

  mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (PredId_5)), ((MR_Box) (GoalSize_6)), GoalSizeMap0_8, &GoalSizeMap_9);
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, 0))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, 1))));
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, 3))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, 4))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_10, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (GoalSizeMap_9));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_24));
  }
}

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info__hogi_set_version_info_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
  }
}

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info__hogi_set_new_pred_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
  }
}

void MR_CALL 
transform_hlds__higher_order__higher_order_global_info__hogi_set_module_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 5))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
  }
}

MR_Word MR_CALL 
transform_hlds__higher_order__higher_order_global_info__hogi_get_version_info_map_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 4))));

  return X_4;
}

MR_Word MR_CALL 
transform_hlds__higher_order__higher_order_global_info__hogi_get_new_pred_map_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 3))));

  return X_4;
}

MR_Word MR_CALL 
transform_hlds__higher_order__higher_order_global_info__hogi_get_goal_size_map_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 2))));

  return X_4;
}

MR_Word MR_CALL 
transform_hlds__higher_order__higher_order_global_info__hogi_get_params_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 0))));

  return X_4;
}

MR_Word MR_CALL 
transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(
  MR_Word Info_3)
{
  MR_Word X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 1))));

  return X_4;
}

MR_Word MR_CALL 
transform_hlds__higher_order__higher_order_global_info__init_higher_order_global_info_2_f_0(
  MR_Word Params_4,
  MR_Word ModuleInfo_5)
{
  MR_Word Info_6;
  MR_Word GoalSizeMap_7;
  MR_Word NewPredMap_8;
  MR_Word VersionInfoMap_9;
  MR_Word NextIdCounter_10;

  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &GoalSizeMap_7);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info_scalar_common_1[0]), &NewPredMap_8);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0), &VersionInfoMap_9);
  NextIdCounter_10 = mercury__counter__init_1_f_0((MR_Integer) 1);
  {
    Info_6 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info_6, 0) = ((MR_Box) (Params_4));
    MR_hl_field(0, Info_6, 1) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, Info_6, 2) = ((MR_Box) (GoalSizeMap_7));
    MR_hl_field(0, Info_6, 3) = ((MR_Box) (NewPredMap_8));
    MR_hl_field(0, Info_6, 4) = ((MR_Box) (VersionInfoMap_9));
    MR_hl_field(0, Info_6, 5) = ((MR_Box) (NextIdCounter_10));
  }
  return Info_6;
}

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____goal_size_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____goal_size_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____goal_size_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__higher_order_global_info____Compare____goal_size_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____higher_order_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____higher_order_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____higher_order_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__higher_order_global_info____Compare____higher_order_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____higher_order_global_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____higher_order_global_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____higher_order_global_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__higher_order_global_info____Compare____higher_order_global_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____ho_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____ho_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____ho_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__higher_order_global_info____Compare____ho_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____ho_request_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____ho_request_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____ho_request_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__higher_order_global_info____Compare____ho_request_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____ho_request_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____ho_request_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____ho_request_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__higher_order_global_info____Compare____ho_request_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____is_arg_const_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____is_arg_const_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____is_arg_const_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__higher_order_global_info____Compare____is_arg_const_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____known_const_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____known_const_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____known_const_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__higher_order_global_info____Compare____known_const_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____known_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____known_var_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____known_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__higher_order_global_info____Compare____known_var_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____match_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__higher_order_global_info____Compare____match_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____match_completeness_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____match_completeness_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____match_completeness_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__higher_order_global_info____Compare____match_completeness_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____match_is_full_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____match_is_full_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____match_is_full_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__higher_order_global_info____Compare____match_is_full_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____must_recompute_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____must_recompute_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____must_recompute_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__higher_order_global_info____Compare____must_recompute_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____new_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____new_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____new_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__higher_order_global_info____Compare____new_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____new_pred_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____new_pred_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____new_pred_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__higher_order_global_info____Compare____new_pred_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____parent_version_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____parent_version_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____parent_version_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__higher_order_global_info____Compare____parent_version_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____version_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____version_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____version_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__higher_order_global_info____Compare____version_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Unify____version_info_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__higher_order__higher_order_global_info____Unify____version_info_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__higher_order__higher_order_global_info____Compare____version_info_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__higher_order__higher_order_global_info____Compare____version_info_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__higher_order__higher_order_global_info__init(void)
{
}

void mercury__transform_hlds__higher_order__higher_order_global_info__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_goal_size_map_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_arg_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_params_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_kind_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_is_arg_const_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_const_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_known_var_map_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_match_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_match_completeness_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_match_is_full_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_must_recompute_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_map_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_parent_version_info_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0);
  MR_register_type_ctor_info(&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_map_0);
}

void mercury__transform_hlds__higher_order__higher_order_global_info__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__higher_order__higher_order_global_info__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.higher_order.higher_order_global_info.
