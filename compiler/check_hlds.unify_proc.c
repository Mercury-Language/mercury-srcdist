/*
** Automatically generated from `unify_proc.m'
** by the Mercury compiler,
** version rotd-2026-02-18
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


// :- module check_hlds.unify_proc.
// :- implementation.

/*
INIT mercury__check_hlds__unify_proc__init
ENDINIT
*/

#include "check_hlds.unify_proc.mih"


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
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.add_special_pred.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_goal.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "hlds.var_table_hlds.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0_s {
  MR_Word check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__Type_4;
  MR_bool check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__succeeded;
  MR_Word check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__ExistQTVars_5;
  jmp_buf check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__commit_0;
  MR_Word check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__TypeInfo_16_16;
  MR_Word check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__ExistQTVar_7;
  MR_Word check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__Var_15;
  MR_Box check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__conv0_ExistQTVar_7;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_constructor_repn_0;

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_args_locn_0_0;

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_args_locn_0_1[1];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_args_locn_0_1;

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_args_locn_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_args_locn_0_1[1];

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_args_locn_0[2];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_args_locn_0[2];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_args_locn_0[2];

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_bulk_comparability_0_0[1];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_bulk_comparability_0_0;

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_bulk_comparability_0_1;

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_bulk_comparability_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_bulk_comparability_0_1[1];

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_bulk_comparability_0[2];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_bulk_comparability_0[2];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_bulk_comparability_0[2];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_conjoin_kind_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__list__ti_list_1hlds__hlds_data__type_ctor_info_constructor_arg_repn_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_compare_conjoin_kind_0_1[3];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_conjoin_kind_0_1;

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_compare_conjoin_kind_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_compare_conjoin_kind_0_1[1];

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_compare_conjoin_kind_0[2];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_compare_conjoin_kind_0[2];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_compare_conjoin_kind_0[2];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_how_0_0;

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_how_0_1;

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_compare_how_0_2[4];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_how_0_2;

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_compare_how_0_3[4];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_how_0_3;

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_compare_how_0_0[2];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_compare_how_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_compare_how_0_2[1];

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_compare_how_0[3];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_compare_how_0[4];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_compare_how_0[4];

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_cons_ids_match_0_0;

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_cons_ids_match_0_1;

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_cons_ids_match_0[2];

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_cons_ids_match_0[2];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_cons_ids_match_0[2];

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_all_args_in_word_so_far_0_0;

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_all_args_in_word_so_far_0_1;

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_maybe_all_args_in_word_so_far_0[2];

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_maybe_all_args_in_word_so_far_0[2];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_maybe_all_args_in_word_so_far_0[2];

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_allow_packed_unify_compare_0_0;

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_allow_packed_unify_compare_0_1;

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_maybe_allow_packed_unify_compare_0[2];

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_maybe_allow_packed_unify_compare_0[2];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_maybe_allow_packed_unify_compare_0[2];

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_compare_constants_as_ints_0_0;

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_compare_constants_as_ints_0_1;

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_maybe_compare_constants_as_ints_0[2];

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_maybe_compare_constants_as_ints_0[2];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_maybe_compare_constants_as_ints_0[2];

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_give_vars_types_0_0;

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_give_vars_types_0_1;

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_maybe_give_vars_types_0[2];

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_maybe_give_vars_types_0[2];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_maybe_give_vars_types_0[2];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_maybe_packable_args_0_0;

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_maybe_packable_args_0_1[1];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_maybe_packable_args_0_1;

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_maybe_packable_args_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_maybe_packable_args_0_1[1];

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_maybe_packable_args_0[2];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_maybe_packable_args_0[2];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_maybe_packable_args_0[2];

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_packed_word_ops_0_0;

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_packed_word_ops_0_1;

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_maybe_packed_word_ops_0[2];

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_maybe_packed_word_ops_0[2];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_maybe_packed_word_ops_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_spec_pred_defn_info_0_0[8];

static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_spec_pred_defn_info_0_0[8];

static const MR_DuArgLocn check_hlds__unify_proc__check_hlds__unify_proc__field_locns_spec_pred_defn_info_0_0[8];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_spec_pred_defn_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_spec_pred_defn_info_0_0[1];

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_spec_pred_defn_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_spec_pred_defn_info_0[1];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_spec_pred_defn_info_0[1];

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_uc_options_0_0[2];

static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_uc_options_0_0[2];

static const MR_DuArgLocn check_hlds__unify_proc__check_hlds__unify_proc__field_locns_uc_options_0_0[2];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_uc_options_0_0;

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_uc_options_0_0[1];

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_uc_options_0[1];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_uc_options_0[1];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_uc_options_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_uc_params_0_0[7];

static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_uc_params_0_0[7];

static const MR_DuArgLocn check_hlds__unify_proc__check_hlds__unify_proc__field_locns_uc_params_0_0[7];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_uc_params_0_0;

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_uc_params_0_0[1];

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_uc_params_0[1];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_uc_params_0[1];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_uc_params_0[1];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_how_0_0;

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_how_0_1[2];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_how_0_1;

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_how_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_how_0_1[1];

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_how_0[2];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_how_0[2];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_how_0[2];

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_info_0_0[4];

static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_unify_proc_info_0_0[4];

static const MR_DuArgLocn check_hlds__unify_proc__check_hlds__unify_proc__field_locns_unify_proc_info_0_0[4];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0[1];

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_info_0[1];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_info_0[1];

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2462__2_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_138);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2454__1_2_p_0(
  MR_Integer ShiftInt0_63,
  MR_Integer HeadVar__2_103);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2462__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_58);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__is_ctor_with_all_locally_packed_unsigned_args__1404__1_1_p_0(
  MR_Word LambdaHeadVar__1_35);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_compare_proc_body_du__1289__1_2_p_0(
  MR_Word CtorRepns_10,
  MR_Word HeadVar__2_54);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_compare_proc_body__1052__1_2_p_0(
  MR_Word MaybeSuperType_36,
  MR_Word HeadVar__2_66);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_rest_of_word__941__2_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_91);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_rest_of_word__941__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_30);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body_du__677__1_2_p_0(
  MR_Word HeadVar__1_85,
  MR_Word HeadVar__2_86);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body_du__625__1_1_p_0(
  MR_Word LambdaHeadVar__1_49);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body__284__1_2_p_0(
  MR_Word MaybeSuperType_35,
  MR_Word HeadVar__2_71);

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_how_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_how_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____uc_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____uc_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____uc_options_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____uc_options_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_packed_word_ops_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_packed_word_ops_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_packable_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_packable_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_give_vars_types_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_give_vars_types_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_compare_constants_as_ints_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_compare_constants_as_ints_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_allow_packed_unify_compare_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_allow_packed_unify_compare_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_all_args_in_word_so_far_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_all_args_in_word_so_far_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____cons_ids_match_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____cons_ids_match_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____compare_how_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____compare_how_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____compare_conjoin_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____compare_conjoin_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____bulk_comparability_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____bulk_comparability_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____args_locn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____args_locn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc__generate_index_du_case_6_p_0(
  MR_Word SpecDefnInfo_7,
  MR_Word Index_8,
  MR_Word CtorRepn_9,
  MR_Word * Case_10,
  MR_Integer STATE_VARIABLE_N_0_23,
  MR_Integer * STATE_VARIABLE_N_24);

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_11_p_0(
  MR_Word SpecDefnInfo_12,
  MR_Word UCOptions_13,
  MR_Word X_14,
  MR_Word Y_15,
  MR_Word CtorRepn_16,
  MR_Word STATE_VARIABLE_IntEqConsIds_0_53,
  MR_Word * STATE_VARIABLE_IntEqConsIds_54,
  MR_Word STATE_VARIABLE_Cases_0_55,
  MR_Word * STATE_VARIABLE_Cases_56,
  MR_Word STATE_VARIABLE_Info_0_57,
  MR_Word * STATE_VARIABLE_Info_58);

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_arg_unify_goals_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__unify_proc__generate_arg_unify_goals_11_p_0(
  MR_Word UCParams_1,
  MR_Word TermType_2,
  MR_Word TermVarX_3,
  MR_Word TermVarY_4,
  MR_Integer ArgNum_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
check_hlds__unify_proc__unify_proc_info_set_packed_ops_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__unify_proc__may_we_start_packing_at_this_arg_unify_3_p_0(
  MR_Word UCParams_4,
  MR_Word CtorArgRepn_5,
  MR_Word * UnifyHow_6);

static MR_bool MR_CALL 
check_hlds__unify_proc__get_rest_of_word_10_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__unify_proc__get_rest_of_word_10_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__unify_proc__get_rest_of_word_10_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__unify_proc__get_rest_of_word_10_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__unify_proc__get_rest_of_word_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_ArgNum_0_3,
  MR_Integer * STATE_VARIABLE_ArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10);

static void MR_CALL 
check_hlds__unify_proc__build_bulk_unify_foreign_proc_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Ptag_13,
  MR_Word TermType_14,
  MR_Word TermVarX_15,
  MR_Word TermVarY_16,
  MR_Integer ArgNum_17,
  MR_Word CellOffset_18,
  MR_Word Context_19,
  MR_Word * Goals_20,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(
  MR_Word HeadVar__1_1,
  MR_String BaseName_2,
  MR_Integer Num_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_6_p_0(
  MR_Word SpecDefnInfo_7,
  MR_Word X_8,
  MR_Word Index_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32);

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_7_p_0(
  MR_Word SpecDefnInfo_8,
  MR_Word Res_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49);

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_du_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_du_8_p_0(
  MR_Word SpecDefnInfo_9,
  MR_Word CtorRepns_10,
  MR_Word Res_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_du_linear_9_p_0(
  MR_Word SpecDefnInfo_10,
  MR_Word UCOptions_11,
  MR_Word CtorRepns_12,
  MR_Word Res_13,
  MR_Word X_14,
  MR_Word Y_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_56,
  MR_Word * STATE_VARIABLE_Info_57);

static void MR_CALL 
check_hlds__unify_proc__unify_proc_info_set_module_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__unify_proc__unify_proc_info_get_module_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4);

static MR_Word MR_CALL 
check_hlds__unify_proc__compare_cons_id_1_f_0(
  MR_String Name_3);

static void MR_CALL 
check_hlds__unify_proc__build_spec_pred_call_8_p_0(
  MR_Word Info_9,
  MR_Word TypeCtor_10,
  MR_Word SpecialPredId_11,
  MR_Word ArgVars_12,
  MR_Word InstmapDelta_13,
  MR_Word Detism_14,
  MR_Word Context_15,
  MR_Word * Goal_16);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_linear_cases_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_EqConsIds_0_7,
  MR_Word * STATE_VARIABLE_EqConsIds_8,
  MR_Word STATE_VARIABLE_Cases_0_9,
  MR_Word * STATE_VARIABLE_Cases_10,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_du_quad_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_du_quad_9_p_0(
  MR_Word SpecDefnInfo_10,
  MR_Word UCOptions_11,
  MR_Word CtorRepns_12,
  MR_Word R_13,
  MR_Word X_14,
  MR_Word Y_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_quad_outer_switch_arms_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word HeadVar__10_10,
  MR_Word HeadVar__11_11,
  MR_Word STATE_VARIABLE_Cases_0_12,
  MR_Word * STATE_VARIABLE_Cases_13,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_goal_11_p_0(
  MR_Word SpecDefnInfo_12,
  MR_Word UCOptions_13,
  MR_Word ConsIdsMatch_14,
  MR_Word CtorRepn_15,
  MR_Word R_16,
  MR_Word X_17,
  MR_Word Y_18,
  MR_Word * FunctorConsId_19,
  MR_Word * Goal_20,
  MR_Word STATE_VARIABLE_Info_0_52,
  MR_Word * STATE_VARIABLE_Info_53);

static void MR_CALL 
check_hlds__unify_proc__unify_proc_info_get_var_table_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4);

static MR_Word MR_CALL 
check_hlds__unify_proc__compute_maybe_packable_args_locn_1_f_0(
  MR_Word ConsTag_3);

static void MR_CALL 
check_hlds__unify_proc__compute_exist_constraint_implications_3_p_0(
  MR_Word MaybeExistConstraints_4,
  MR_Word * ExistQTVars_5,
  MR_Word * GiveVarsTypes_6);

static void MR_CALL 
check_hlds__unify_proc__conjoin_arg_comparisons_14_p_0(
  MR_Word UCParams_15,
  MR_Word ConjoinKind_16,
  MR_Word TermType_17,
  MR_Word TermVarX_18,
  MR_Word TermVarY_19,
  MR_Word ResultVar_20,
  MR_Word MaybeAllArgs_21,
  MR_Integer NextArgNum_22,
  MR_Word SubCompareGoal_23,
  MR_Word * Goal_24,
  MR_Word * TailVarsX_25,
  MR_Word * TailVarsY_26,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42);

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_arg_compare_goals_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__unify_proc__generate_arg_compare_goals_13_p_0(
  MR_Word UCParams_1,
  MR_Word TermType_2,
  MR_Word TermVarX_3,
  MR_Word TermVarY_4,
  MR_Word ResultVar_5,
  MR_Word STATE_VARIABLE_MaybeAllArgs_0_6,
  MR_Integer ArgNum_7,
  MR_Word HeadVar__8_8,
  MR_Word * Goal_9,
  MR_Word * HeadVar__10_10,
  MR_Word * HeadVar__11_11,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static void MR_CALL 
check_hlds__unify_proc__generate_return_equal_3_p_0(
  MR_Word ResultVar_4,
  MR_Word Context_5,
  MR_Word * Goal_6);

static void MR_CALL 
check_hlds__unify_proc__may_we_start_packing_at_this_arg_compare_5_p_0(
  MR_Word UCParams_6,
  MR_Word CtorArgRepn_7,
  MR_Word * CompareHow_8,
  MR_Word STATE_VARIABLE_MaybeAllArgs_0_31,
  MR_Word * STATE_VARIABLE_MaybeAllArgs_32);

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_ArgNum_0_3,
  MR_Integer * STATE_VARIABLE_ArgNum_4,
  MR_Word STATE_VARIABLE_Shift_0_5,
  MR_Word * STATE_VARIABLE_Shift_6,
  MR_Word STATE_VARIABLE_NumBits_0_7,
  MR_Word * STATE_VARIABLE_NumBits_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_MaybeAllArgs_0_11,
  MR_Word * STATE_VARIABLE_MaybeAllArgs_12,
  MR_Word * HeadVar__13_13,
  MR_Word * HeadVar__14_14,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_var_pair_9_p_0(
  MR_Word GiveVarsTypes_10,
  MR_String PrefixX_11,
  MR_String PrefixY_12,
  MR_Integer Num_13,
  MR_Word Type_14,
  MR_Word * VarX_15,
  MR_Word * VarY_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
check_hlds__unify_proc__select_and_build_bulk_comparison_foreign_proc_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word ArgsLocn_17,
  MR_Word TermType_18,
  MR_Word TermVarX_19,
  MR_Word TermVarY_20,
  MR_Word CompareResultVar_21,
  MR_Word MaybeAllArgs_22,
  MR_Integer ArgNum_23,
  MR_Word CellOffset_24,
  MR_Word Shift_25,
  MR_Word NumBits_26,
  MR_Word Context_27,
  MR_Word * CompareConjGoal_28,
  MR_Word STATE_VARIABLE_Info_0_64,
  MR_Word * STATE_VARIABLE_Info_65);

static void MR_CALL 
check_hlds__unify_proc__select_and_build_signed_comparison_foreign_proc_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word ArgsLocn_16,
  MR_Word TermType_17,
  MR_Word TermVarX_18,
  MR_Word TermVarY_19,
  MR_Word CompareResultVar_20,
  MR_Integer ArgNum_21,
  MR_Word CellOffset_22,
  MR_Word Shift_23,
  MR_String SizeStr_24,
  MR_Word Context_25,
  MR_Word * CompareConjGoal_26,
  MR_Word STATE_VARIABLE_Info_0_52,
  MR_Word * STATE_VARIABLE_Info_53);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_int_var_and_arg_8_p_0(
  MR_Word Context_9,
  MR_String Name_10,
  MR_Integer SuffixInt_11,
  MR_Integer Value_12,
  MR_Word * Arg_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
check_hlds__unify_proc__make_ptag_and_cell_offset_args_8_p_0(
  MR_Integer ArgNum_9,
  MR_Word Ptag_10,
  MR_Word CellOffset_11,
  MR_Word Context_12,
  MR_Word * Args_13,
  MR_Word * Goals_14,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static MR_Word MR_CALL 
check_hlds__unify_proc__pure_proc_foreign_attributes_0_f_0(void);

static void MR_CALL 
check_hlds__unify_proc__prepare_for_conjoining_arg_comparisons_7_p_0(
  MR_Word CtorArgRepns_8,
  MR_Integer ArgNum_9,
  MR_Word ResultVar_10,
  MR_Word * CurCompareResultVar_11,
  MR_Word * ConjoinKind_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_5(
  void * env_ptr_arg);

static MR_bool MR_CALL 
check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(
  MR_Word UCParams_3,
  MR_Word Type_4);

static MR_Word MR_CALL 
check_hlds__unify_proc__ctor_repn_to_cons_id_2_f_0(
  MR_Word TypeCtor_4,
  MR_Word CtorRepn_5);

static MR_bool MR_CALL 
check_hlds__unify_proc__is_ctor_with_all_locally_packed_unsigned_args_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__unify_proc__is_ctor_with_all_locally_packed_unsigned_args_2_p_0(
  MR_Word CtorRepn_3,
  uint8_t * PtagUint8_4);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_enum_7_p_0(
  MR_Word Context_8,
  MR_Word Res_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_eqv_8_p_0(
  MR_Word Context_9,
  MR_Word EqvType_10,
  MR_Word Res_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_builtin_8_p_0(
  MR_Word CtorCat_9,
  MR_Word Context_10,
  MR_Word Res_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_user_8_p_0(
  MR_Word Context_9,
  MR_Word NonCanonical_10,
  MR_Word Res_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_dummy_7_p_0(
  MR_Word Context_8,
  MR_Word Res_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_6_p_0(
  MR_Word SpecDefnInfo_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word * Clauses_10,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48);

static void MR_CALL 
check_hlds__unify_proc__get_du_base_type_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TVarSet_6,
  MR_Word Type_7,
  MR_Word * BaseType_8);

static void MR_CALL 
check_hlds__unify_proc__get_du_base_type_loop_4_p_0(
  MR_Word TypeTable_5,
  MR_Word TVarSet_6,
  MR_Word Type_7,
  MR_Word * BaseType_8);

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0(
  MR_Word SpecDefnInfo_8,
  MR_Word CtorRepns_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clauses_12,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46);

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_cases_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_cases_8_p_0(
  MR_Word SpecDefnInfo_9,
  MR_Word UCOptions_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word CtorRepns_13,
  MR_Word * SwitchGoal_14,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static MR_Word MR_CALL 
check_hlds__unify_proc__lookup_unify_compare_options_1_f_0(
  MR_Word Info_3);

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_enum_6_p_0(
  MR_Word Context_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_solver_6_p_0(
  MR_Word Context_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_eqv_7_p_0(
  MR_Word Context_8,
  MR_Word EqvType_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_builtin_7_p_0(
  MR_Word CtorCat_8,
  MR_Word Context_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
check_hlds__unify_proc__build_simple_call_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ModuleName_8,
  MR_String PredName_9,
  MR_Word ArgVars_10,
  MR_Word Context_11,
  MR_Word * Goal_12);

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_user_7_p_0(
  MR_Word NonCanonical_8,
  MR_Word X_9,
  MR_Word Y_10,
  MR_Word Context_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static void MR_CALL 
check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(
  MR_Word Context_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word MaybeCompareRes_12,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_Info_0_39,
  MR_Word * STATE_VARIABLE_Info_40);

static void MR_CALL 
check_hlds__unify_proc__unify_proc_info_new_var_5_p_0(
  MR_String Name_6,
  MR_Word Type_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16);

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_dummy_6_p_0(
  MR_Word Context_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
check_hlds__unify_proc__quantify_clause_body_7_p_0(
  MR_Word ApplModes_8,
  MR_Word HeadVars_9,
  MR_Word Goal0_10,
  MR_Word Context_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

static void MR_CALL 
check_hlds__unify_proc__get_explicitly_typed_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevVarsTypes_0_2,
  MR_Word * STATE_VARIABLE_RevVarsTypes_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____args_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____args_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____bulk_comparability_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____bulk_comparability_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____compare_conjoin_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____compare_conjoin_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____compare_how_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____compare_how_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____cons_ids_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____cons_ids_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_all_args_in_word_so_far_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_all_args_in_word_so_far_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_allow_packed_unify_compare_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_allow_packed_unify_compare_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_compare_constants_as_ints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_compare_constants_as_ints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_give_vars_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_give_vars_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_packable_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_packable_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_packed_word_ops_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_packed_word_ops_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____spec_pred_defn_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____spec_pred_defn_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____uc_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____uc_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____uc_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____uc_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_how_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_how_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_1[8][2];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_2[5][1];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_4[1][14];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_5[2][4];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_6[2][3];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_7[6][5];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_8[1][6];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_9[1][9];


struct check_hlds__unify_proc__vector_common_type_3_0_s {
  const MR_String check_hlds__unify_proc__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct check_hlds__unify_proc__vector_common_type_3_0_s check_hlds__unify_proc_vector_common_3[20];



static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_1[8][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_2[5][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "16")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "32")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "8")) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   4 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_4[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_spec_pred_defn_info_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_uc_options_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&check_hlds__unify_proc__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__unify_proc__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__unify_proc__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&check_hlds__unify_proc__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_5[2][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_6[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_5[0])),
    ((MR_Box) (check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_5[1])),
    ((MR_Box) (check_hlds__unify_proc__is_ctor_with_all_locally_packed_unsigned_args_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_7[6][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_packed_word_ops_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_packed_word_ops_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_subtype_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_subtype_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_uc_params_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cell_offset_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cell_offset_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__unify_proc__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&check_hlds__unify_proc__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_8[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_9[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_spec_pred_defn_info_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};


static /* final */ const struct check_hlds__unify_proc__vector_common_type_3_0_s check_hlds__unify_proc_vector_common_3[20] = {
  /* row   0 */   { (MR_String) "builtin_unify_int" },
  /* row   1 */   { (MR_String) "builtin_unify_uint" },
  /* row   2 */   { (MR_String) "builtin_unify_int8" },
  /* row   3 */   { (MR_String) "builtin_unify_uint8" },
  /* row   4 */   { (MR_String) "builtin_unify_int16" },
  /* row   5 */   { (MR_String) "builtin_unify_uint16" },
  /* row   6 */   { (MR_String) "builtin_unify_int32" },
  /* row   7 */   { (MR_String) "builtin_unify_uint32" },
  /* row   8 */   { (MR_String) "builtin_unify_int64" },
  /* row   9 */   { (MR_String) "builtin_unify_uint64" },
  /* row  10 */   { (MR_String) "builtin_compare_int" },
  /* row  11 */   { (MR_String) "builtin_compare_uint" },
  /* row  12 */   { (MR_String) "builtin_compare_int8" },
  /* row  13 */   { (MR_String) "builtin_compare_uint8" },
  /* row  14 */   { (MR_String) "builtin_compare_int16" },
  /* row  15 */   { (MR_String) "builtin_compare_uint16" },
  /* row  16 */   { (MR_String) "builtin_compare_int32" },
  /* row  17 */   { (MR_String) "builtin_compare_uint32" },
  /* row  18 */   { (MR_String) "builtin_compare_int64" },
  /* row  19 */   { (MR_String) "builtin_compare_uint64" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_constructor_repn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0) }
};

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_args_locn_0_0 = {
  (MR_String) "args_local",
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

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_args_locn_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0) };

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_args_locn_0_1 = {
  (MR_String) "args_remote",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__unify_proc__check_hlds__unify_proc__field_types_args_locn_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_args_locn_0_0[1] = { &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_args_locn_0_0 };

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_args_locn_0_1[1] = { &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_args_locn_0_1 };

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_args_locn_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_args_locn_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_args_locn_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_args_locn_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_args_locn_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_args_locn_0_1
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_args_locn_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_args_locn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____args_locn_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____args_locn_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "args_locn",
  { check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_args_locn_0 },
  { check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_args_locn_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_args_locn_0,

};

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_bulk_comparability_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_bulk_comparability_0_0 = {
  (MR_String) "not_bulk_comparable",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__unify_proc__check_hlds__unify_proc__field_types_bulk_comparability_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_bulk_comparability_0_1 = {
  (MR_String) "bulk_comparable_unsigned",
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

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_bulk_comparability_0_0[1] = { &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_bulk_comparability_0_1 };

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_bulk_comparability_0_1[1] = { &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_bulk_comparability_0_0 };

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_bulk_comparability_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_bulk_comparability_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_bulk_comparability_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_bulk_comparability_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_bulk_comparability_0_1,
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_bulk_comparability_0_0
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_bulk_comparability_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_bulk_comparability_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____bulk_comparability_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____bulk_comparability_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "bulk_comparability",
  { check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_bulk_comparability_0 },
  { check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_bulk_comparability_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_bulk_comparability_0,

};

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_conjoin_kind_0_0 = {
  (MR_String) "no_more_comparisons",
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

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__list__ti_list_1hlds__hlds_data__type_ctor_info_constructor_arg_repn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_compare_conjoin_kind_0_1[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0),
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__list__ti_list_1hlds__hlds_data__type_ctor_info_constructor_arg_repn_0),
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_conjoin_kind_0_1 = {
  (MR_String) "more_comparisons",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__unify_proc__check_hlds__unify_proc__field_types_compare_conjoin_kind_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_compare_conjoin_kind_0_0[1] = { &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_conjoin_kind_0_0 };

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_compare_conjoin_kind_0_1[1] = { &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_conjoin_kind_0_1 };

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_compare_conjoin_kind_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_compare_conjoin_kind_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_compare_conjoin_kind_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_compare_conjoin_kind_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_conjoin_kind_0_1,
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_conjoin_kind_0_0
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_compare_conjoin_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_compare_conjoin_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____compare_conjoin_kind_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____compare_conjoin_kind_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "compare_conjoin_kind",
  { check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_compare_conjoin_kind_0 },
  { check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_compare_conjoin_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_compare_conjoin_kind_0,

};

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_how_0_0 = {
  (MR_String) "compare_unpacked",
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

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_how_0_1 = {
  (MR_String) "compare_noop",
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

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_compare_how_0_2[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_args_locn_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cell_offset_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_shift_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_how_0_2 = {
  (MR_String) "compare_subword_signed",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__unify_proc__check_hlds__unify_proc__field_types_compare_how_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_compare_how_0_3[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_args_locn_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cell_offset_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_shift_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_num_bits_0)
};

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_how_0_3 = {
  (MR_String) "compare_packed",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(3),
  check_hlds__unify_proc__check_hlds__unify_proc__field_types_compare_how_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_compare_how_0_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_how_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_how_0_1
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_compare_how_0_1[1] = { &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_how_0_2 };

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_compare_how_0_2[1] = { &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_how_0_3 };

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_compare_how_0[3] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_compare_how_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_compare_how_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_compare_how_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_compare_how_0[4] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_how_0_1,
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_how_0_3,
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_how_0_2,
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_how_0_0
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_compare_how_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_compare_how_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____compare_how_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____compare_how_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "compare_how",
  { check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_compare_how_0 },
  { check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_compare_how_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_compare_how_0,

};

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_cons_ids_match_0_0 = {
  (MR_String) "cons_ids_not_known_to_match",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_cons_ids_match_0_1 = {
  (MR_String) "cons_ids_known_to_match",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_cons_ids_match_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_cons_ids_match_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_cons_ids_match_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_cons_ids_match_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_cons_ids_match_0_1,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_cons_ids_match_0_0
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_cons_ids_match_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_cons_ids_match_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__unify_proc____Unify____cons_ids_match_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____cons_ids_match_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "cons_ids_match",
  { check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_cons_ids_match_0 },
  { check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_cons_ids_match_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_cons_ids_match_0,

};

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_all_args_in_word_so_far_0_0 = {
  (MR_String) "not_all_args_in_word_so_far",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_all_args_in_word_so_far_0_1 = {
  (MR_String) "all_args_in_word_so_far",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_maybe_all_args_in_word_so_far_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_all_args_in_word_so_far_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_all_args_in_word_so_far_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_maybe_all_args_in_word_so_far_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_all_args_in_word_so_far_0_1,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_all_args_in_word_so_far_0_0
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_maybe_all_args_in_word_so_far_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_all_args_in_word_so_far_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__unify_proc____Unify____maybe_all_args_in_word_so_far_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____maybe_all_args_in_word_so_far_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "maybe_all_args_in_word_so_far",
  { check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_maybe_all_args_in_word_so_far_0 },
  { check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_maybe_all_args_in_word_so_far_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_maybe_all_args_in_word_so_far_0,

};

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_allow_packed_unify_compare_0_0 = {
  (MR_String) "do_not_allow_packed_unify_compare",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_allow_packed_unify_compare_0_1 = {
  (MR_String) "allow_packed_unify_compare",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_maybe_allow_packed_unify_compare_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_allow_packed_unify_compare_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_allow_packed_unify_compare_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_maybe_allow_packed_unify_compare_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_allow_packed_unify_compare_0_1,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_allow_packed_unify_compare_0_0
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_maybe_allow_packed_unify_compare_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_allow_packed_unify_compare_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__unify_proc____Unify____maybe_allow_packed_unify_compare_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____maybe_allow_packed_unify_compare_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "maybe_allow_packed_unify_compare",
  { check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_maybe_allow_packed_unify_compare_0 },
  { check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_maybe_allow_packed_unify_compare_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_maybe_allow_packed_unify_compare_0,

};

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_compare_constants_as_ints_0_0 = {
  (MR_String) "do_not_compare_constants_as_ints",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_compare_constants_as_ints_0_1 = {
  (MR_String) "compare_constants_as_ints",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_maybe_compare_constants_as_ints_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_compare_constants_as_ints_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_compare_constants_as_ints_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_maybe_compare_constants_as_ints_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_compare_constants_as_ints_0_1,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_compare_constants_as_ints_0_0
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_maybe_compare_constants_as_ints_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_compare_constants_as_ints_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__unify_proc____Unify____maybe_compare_constants_as_ints_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____maybe_compare_constants_as_ints_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "maybe_compare_constants_as_ints",
  { check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_maybe_compare_constants_as_ints_0 },
  { check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_maybe_compare_constants_as_ints_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_maybe_compare_constants_as_ints_0,

};

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_give_vars_types_0_0 = {
  (MR_String) "do_not_give_vars_types",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_give_vars_types_0_1 = {
  (MR_String) "give_vars_types",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_maybe_give_vars_types_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_give_vars_types_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_give_vars_types_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_maybe_give_vars_types_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_give_vars_types_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_give_vars_types_0_1
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_maybe_give_vars_types_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_give_vars_types_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__unify_proc____Unify____maybe_give_vars_types_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____maybe_give_vars_types_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "maybe_give_vars_types",
  { check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_maybe_give_vars_types_0 },
  { check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_maybe_give_vars_types_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_maybe_give_vars_types_0,

};

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_maybe_packable_args_0_0 = {
  (MR_String) "unpackable_args",
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

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_maybe_packable_args_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_args_locn_0) };

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_maybe_packable_args_0_1 = {
  (MR_String) "packable_args",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__unify_proc__check_hlds__unify_proc__field_types_maybe_packable_args_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_maybe_packable_args_0_0[1] = { &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_maybe_packable_args_0_0 };

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_maybe_packable_args_0_1[1] = { &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_maybe_packable_args_0_1 };

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_maybe_packable_args_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_maybe_packable_args_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_maybe_packable_args_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_maybe_packable_args_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_maybe_packable_args_0_1,
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_maybe_packable_args_0_0
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_maybe_packable_args_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_packable_args_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____maybe_packable_args_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____maybe_packable_args_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "maybe_packable_args",
  { check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_maybe_packable_args_0 },
  { check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_maybe_packable_args_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_maybe_packable_args_0,

};

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_packed_word_ops_0_0 = {
  (MR_String) "used_no_packed_word_ops",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_packed_word_ops_0_1 = {
  (MR_String) "used_some_packed_word_ops",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_maybe_packed_word_ops_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_packed_word_ops_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_packed_word_ops_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_maybe_packed_word_ops_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_packed_word_ops_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_maybe_packed_word_ops_0_1
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_maybe_packed_word_ops_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_packed_word_ops_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__unify_proc____Unify____maybe_packed_word_ops_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____maybe_packed_word_ops_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "maybe_packed_word_ops",
  { check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_maybe_packed_word_ops_0 },
  { check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_maybe_packed_word_ops_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_maybe_packed_word_ops_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_spec_pred_defn_info_0_0[8] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_body_0),
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_type_status_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_spec_pred_defn_info_0_0[8] = {
  (MR_String) "spdi_spec_pred_id",
  (MR_String) "spdi_pred_id",
  (MR_String) "spdi_tvarset",
  (MR_String) "spdi_type",
  (MR_String) "spdi_type_ctor",
  (MR_String) "spdi_type_body",
  (MR_String) "spdi_orig_status",
  (MR_String) "spdi_context"
};

static const MR_DuArgLocn check_hlds__unify_proc__check_hlds__unify_proc__field_locns_spec_pred_defn_info_0_0[8] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
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
  }
};

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_spec_pred_defn_info_0_0 = {
  (MR_String) "spec_pred_defn_info",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__unify_proc__check_hlds__unify_proc__field_types_spec_pred_defn_info_0_0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_names_spec_pred_defn_info_0_0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_locns_spec_pred_defn_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_spec_pred_defn_info_0_0[1] = { &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_spec_pred_defn_info_0_0 };

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_spec_pred_defn_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_spec_pred_defn_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_spec_pred_defn_info_0[1] = { &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_spec_pred_defn_info_0_0 };

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_spec_pred_defn_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_spec_pred_defn_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____spec_pred_defn_info_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____spec_pred_defn_info_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "spec_pred_defn_info",
  { check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_spec_pred_defn_info_0 },
  { check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_spec_pred_defn_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_spec_pred_defn_info_0,

};

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_uc_options_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_compare_constants_as_ints_0),
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_allow_packed_unify_compare_0)
};

static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_uc_options_0_0[2] = {
  (MR_String) "uco_constants_as_ints",
  (MR_String) "uco_packed_unify_compare"
};

static const MR_DuArgLocn check_hlds__unify_proc__check_hlds__unify_proc__field_locns_uc_options_0_0[2] = {
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

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_uc_options_0_0 = {
  (MR_String) "uc_options",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__unify_proc__check_hlds__unify_proc__field_types_uc_options_0_0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_names_uc_options_0_0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_locns_uc_options_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_uc_options_0_0[1] = { &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_uc_options_0_0 };

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_uc_options_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_uc_options_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_uc_options_0[1] = { &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_uc_options_0_0 };

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_uc_options_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_uc_options_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____uc_options_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____uc_options_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "uc_options",
  { check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_uc_options_0 },
  { check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_uc_options_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_uc_options_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_uc_params_0_0[7] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_packable_args_0),
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_give_vars_types_0),
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_compare_constants_as_ints_0),
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_allow_packed_unify_compare_0)
};

static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_uc_params_0_0[7] = {
  (MR_String) "ucp_module_info",
  (MR_String) "ucp_context",
  (MR_String) "ucp_existq_tvars",
  (MR_String) "ucp_maybe_packable_args",
  (MR_String) "ucp_give_vars_types",
  (MR_String) "ucp_constants_as_ints",
  (MR_String) "ucp_packed_unify_compare"
};

static const MR_DuArgLocn check_hlds__unify_proc__check_hlds__unify_proc__field_locns_uc_params_0_0[7] = {
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
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_uc_params_0_0 = {
  (MR_String) "uc_params",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__unify_proc__check_hlds__unify_proc__field_types_uc_params_0_0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_names_uc_params_0_0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_locns_uc_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_uc_params_0_0[1] = { &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_uc_params_0_0 };

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_uc_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_uc_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_uc_params_0[1] = { &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_uc_params_0_0 };

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_uc_params_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_uc_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____uc_params_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____uc_params_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "uc_params",
  { check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_uc_params_0 },
  { check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_uc_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_uc_params_0,

};

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_how_0_0 = {
  (MR_String) "unify_unpacked",
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

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_how_0_1[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_args_locn_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cell_offset_0)
};

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_how_0_1 = {
  (MR_String) "unify_packed",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_how_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_how_0_0[1] = { &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_how_0_0 };

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_how_0_1[1] = { &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_how_0_1 };

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_how_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_how_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_how_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_how_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_how_0_1,
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_how_0_0
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_how_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_how_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____unify_how_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____unify_how_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "unify_how",
  { check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_how_0 },
  { check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_how_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_how_0,

};

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0),
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_packed_word_ops_0)
};

static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_unify_proc_info_0_0[4] = {
  (MR_String) "upi_module_info",
  (MR_String) "upi_var_table",
  (MR_String) "upi_rtti_varmaps",
  (MR_String) "upi_packed_ops"
};

static const MR_DuArgLocn check_hlds__unify_proc__check_hlds__unify_proc__field_locns_unify_proc_info_0_0[4] = {
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0 = {
  (MR_String) "unify_proc_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_info_0_0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_names_unify_proc_info_0_0,
  check_hlds__unify_proc__check_hlds__unify_proc__field_locns_unify_proc_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0[1] = { &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0 };

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_info_0[1] = { &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0 };

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____unify_proc_info_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____unify_proc_info_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "unify_proc_info",
  { check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_info_0 },
  { check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_info_0,

};

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2462__2_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_138)
{
  MR_bool succeeded;
  MR_Integer Var_150 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Var_151 = (MR_Integer) (ArgCellOffset_138);

  succeeded = (Var_150 == Var_151);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2454__1_2_p_0(
  MR_Integer ShiftInt0_63,
  MR_Integer HeadVar__2_103)
{
  MR_bool succeeded = (HeadVar__2_103 == ShiftInt0_63);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2462__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_58)
{
  MR_bool succeeded;
  MR_Integer Var_130 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Var_131 = (MR_Integer) (ArgCellOffset_58);

  succeeded = (Var_130 == Var_131);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__is_ctor_with_all_locally_packed_unsigned_args__1404__1_1_p_0(
  MR_Word LambdaHeadVar__1_35)
{
  MR_bool succeeded;
  MR_Word ArgPosWidth_19 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_35, 3))));

  switch (MR_tag((MR_Word) ArgPosWidth_19)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_19, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Fill_25 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_19, 6))) & (MR_Integer) 7);

            switch (Fill_25) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 7:
              case (MR_Integer) 0:
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 4:
                succeeded = MR_TRUE;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Fill_45 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_19, 6))) & (MR_Integer) 7);

            switch (Fill_45) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 7:
              case (MR_Integer) 0:
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 4:
                succeeded = MR_TRUE;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_compare_proc_body_du__1289__1_2_p_0(
  MR_Word CtorRepns_10,
  MR_Word HeadVar__2_54)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[4]), ((MR_Box) (CtorRepns_10)), ((MR_Box) (HeadVar__2_54)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_compare_proc_body__1052__1_2_p_0(
  MR_Word MaybeSuperType_36,
  MR_Word HeadVar__2_66)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____maybe_subtype_0_0(MaybeSuperType_36, HeadVar__2_66);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_rest_of_word__941__2_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_91)
{
  MR_bool succeeded;
  MR_Integer Var_101 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Var_102 = (MR_Integer) (ArgCellOffset_91);

  succeeded = (Var_101 == Var_102);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_rest_of_word__941__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_30)
{
  MR_bool succeeded;
  MR_Integer Var_83 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Var_84 = (MR_Integer) (ArgCellOffset_30);

  succeeded = (Var_83 == Var_84);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body_du__677__1_2_p_0(
  MR_Word HeadVar__1_85,
  MR_Word HeadVar__2_86)
{
  MR_bool succeeded = (HeadVar__1_85 == HeadVar__2_86);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body_du__625__1_1_p_0(
  MR_Word LambdaHeadVar__1_49)
{
  MR_bool succeeded;
  MR_Word ConsTag_21 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_49, 3))));
  MR_Word CtorArgRepns_22 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_49, 4))));

  if ((CtorArgRepns_22 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
    succeeded = ((((MR_tag((MR_Word) ConsTag_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsTag_21, 0)))) == (MR_Integer) 12)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body__284__1_2_p_0(
  MR_Word MaybeSuperType_35,
  MR_Word HeadVar__2_71)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____maybe_subtype_0_0(MaybeSuperType_35, HeadVar__2_71);
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0(
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
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__var_table____Compare____var_table_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Integer Var_21 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_22 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_21 < Var_22);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_21 > Var_22);
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

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_how_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    check_hlds__unify_proc____Compare____args_locn_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
check_hlds__unify_proc____Unify____unify_how_0_0(
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
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;
    MR_Integer Var_12;
    MR_Integer Var_13;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      succeeded = check_hlds__unify_proc____Unify____args_locn_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        Var_12 = (MR_Integer) (ArgX2_5);
        Var_13 = (MR_Integer) (ArgY2_6);
        succeeded = (Var_12 == Var_13);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____uc_params_0_0(
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
    MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 4))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX7_22 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) & (MR_Integer) 1);
    MR_Word ArgY7_23 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 4))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__term_context____Compare____term_context_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[7]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          check_hlds__unify_proc____Compare____maybe_packable_args_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;
            MR_Integer Var_33 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_34 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_33 < Var_34);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_33 > Var_34);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
            }
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
check_hlds__unify_proc____Unify____uc_params_0_0(
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
    MR_Word TypeInfo_21_21;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX7_15 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) & (MR_Integer) 1);
    MR_Word ArgY7_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) & (MR_Integer) 1);

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_21_21 = (MR_Word) (&check_hlds__unify_proc_scalar_common_1[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          succeeded = check_hlds__unify_proc____Unify____maybe_packable_args_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
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
check_hlds__unify_proc____Compare____uc_options_0_0(
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
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer Var_15 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_16 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_15 < Var_16);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_15 > Var_16);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____uc_options_0_0(
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
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
check_hlds__unify_proc____Compare____spec_pred_defn_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 3);
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
    MR_Word SubResult1_6;
    MR_Integer Var_37 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_38 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_37 < Var_38);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_37 > Var_38);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____pred_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[6]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          parse_tree__prog_data____Compare____mer_type_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              hlds__hlds_data____Compare____hlds_type_body_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                hlds__status____Compare____type_status_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
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
check_hlds__unify_proc____Unify____spec_pred_defn_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
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

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_22_22 = (MR_Word) (&check_hlds__unify_proc_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              succeeded = hlds__hlds_data____Unify____hlds_type_body_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                succeeded = hlds__status____Unify____type_status_0_0(ArgX7_15, ArgY7_16);
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

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_packed_word_ops_0_0(
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
check_hlds__unify_proc____Unify____maybe_packed_word_ops_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_packable_args_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    check_hlds__unify_proc____Compare____args_locn_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_packable_args_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = check_hlds__unify_proc____Unify____args_locn_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_give_vars_types_0_0(
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
check_hlds__unify_proc____Unify____maybe_give_vars_types_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_compare_constants_as_ints_0_0(
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
check_hlds__unify_proc____Unify____maybe_compare_constants_as_ints_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_allow_packed_unify_compare_0_0(
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
check_hlds__unify_proc____Unify____maybe_allow_packed_unify_compare_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_all_args_in_word_so_far_0_0(
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
check_hlds__unify_proc____Unify____maybe_all_args_in_word_so_far_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____cons_ids_match_0_0(
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
check_hlds__unify_proc____Unify____cons_ids_match_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____compare_how_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_26 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_27 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_26 == CastY_27);
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
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
              MR_String ArgX4_13 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 3))));
              MR_String ArgY4_14 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 3))));
              MR_Word SubResult1_6;

              check_hlds__unify_proc____Compare____args_locn_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_6;
              else
              {
                MR_Word SubResult2_9;
                MR_Integer Var_42 = (MR_Integer) (ArgX2_7);
                MR_Integer Var_43 = (MR_Integer) (ArgY2_8);

                succeeded = (Var_42 < Var_43);
                if (succeeded)
                {
                  SubResult2_9 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_42 > Var_43);
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
                  MR_Integer Var_44 = (MR_Integer) (ArgX3_10);
                  MR_Integer Var_45 = (MR_Integer) (ArgY3_11);

                  succeeded = (Var_44 < Var_45);
                  if (succeeded)
                  {
                    SubResult3_12 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_44 > Var_45);
                    if (succeeded)
                    {
                      SubResult3_12 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_12;
                  else
                    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
                }
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
              MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_16 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Word ArgX2_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Word ArgY2_19 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word ArgX3_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
              MR_Word ArgY3_22 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 2))));
              MR_Word ArgX4_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 3))));
              MR_Word ArgY4_25 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 3))));
              MR_Word SubResult1_17;

              check_hlds__unify_proc____Compare____args_locn_0_0(&SubResult1_17, ArgX1_15, ArgY1_16);
              succeeded = (SubResult1_17 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_17;
              else
              {
                MR_Word SubResult2_20;
                MR_Integer Var_36 = (MR_Integer) (ArgX2_18);
                MR_Integer Var_37 = (MR_Integer) (ArgY2_19);

                succeeded = (Var_36 < Var_37);
                if (succeeded)
                {
                  SubResult2_20 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_36 > Var_37);
                  if (succeeded)
                  {
                    SubResult2_20 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_20;
                else
                {
                  MR_Word SubResult3_23;
                  MR_Integer Var_38 = (MR_Integer) (ArgX3_21);
                  MR_Integer Var_39 = (MR_Integer) (ArgY3_22);

                  succeeded = (Var_38 < Var_39);
                  if (succeeded)
                  {
                    SubResult3_23 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_38 > Var_39);
                    if (succeeded)
                    {
                      SubResult3_23 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_23;
                  else
                  {
                    MR_Integer Var_40 = (MR_Integer) (ArgX4_24);
                    MR_Integer Var_41 = (MR_Integer) (ArgY4_25);

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
              }
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____compare_how_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_20 == CastX_19);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Word ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
          MR_Word ArgY3_8;
          MR_String ArgX4_9 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 3))));
          MR_String ArgY4_10;
          MR_Integer Var_34;
          MR_Integer Var_35;
          MR_Integer Var_36;
          MR_Integer Var_37;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
            ArgY3_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
            ArgY4_10 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 3))));
            succeeded = check_hlds__unify_proc____Unify____args_locn_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
            {
              Var_34 = (MR_Integer) (ArgX2_5);
              Var_35 = (MR_Integer) (ArgY2_6);
              succeeded = (Var_34 == Var_35);
              if (succeeded)
              {
                Var_36 = (MR_Integer) (ArgX3_7);
                Var_37 = (MR_Integer) (ArgY3_8);
                succeeded = (Var_36 == Var_37);
                if (succeeded)
                  succeeded = (strcmp(ArgX4_9, ArgY4_10) == 0);
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_12;
          MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word ArgY2_14;
          MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 2))));
          MR_Word ArgY3_16;
          MR_Word ArgX4_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 3))));
          MR_Word ArgY4_18;
          MR_Integer Var_28;
          MR_Integer Var_29;
          MR_Integer Var_30;
          MR_Integer Var_31;
          MR_Integer Var_32;
          MR_Integer Var_33;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_14 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 1))));
            ArgY3_16 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
            ArgY4_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 3))));
            succeeded = check_hlds__unify_proc____Unify____args_locn_0_0(ArgX1_11, ArgY1_12);
            if (succeeded)
            {
              Var_28 = (MR_Integer) (ArgX2_13);
              Var_29 = (MR_Integer) (ArgY2_14);
              succeeded = (Var_28 == Var_29);
              if (succeeded)
              {
                Var_30 = (MR_Integer) (ArgX3_15);
                Var_31 = (MR_Integer) (ArgY3_16);
                succeeded = (Var_30 == Var_31);
                if (succeeded)
                {
                  Var_32 = (MR_Integer) (ArgX4_17);
                  Var_33 = (MR_Integer) (ArgY4_18);
                  succeeded = (Var_32 == Var_33);
                }
              }
            }
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____compare_conjoin_kind_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    hlds__hlds_data____Compare____constructor_arg_repn_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____compare_conjoin_kind_0_0(
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
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
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
      succeeded = hlds__hlds_data____Unify____constructor_arg_repn_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&check_hlds__unify_proc_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____bulk_comparability_0_0(
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
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____bulk_comparability_0_0(
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____args_locn_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    uint8_t Var_9 = (uint8_t) (ArgX1_4);
    uint8_t Var_10 = (uint8_t) (ArgY1_5);

    succeeded = (Var_9 < Var_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 > Var_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____args_locn_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    uint8_t Var_10;
    uint8_t Var_11;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      Var_10 = (uint8_t) (ArgX1_3);
      Var_11 = (uint8_t) (ArgY1_4);
      succeeded = (Var_10 == Var_11);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc__generate_index_du_case_6_p_0(
  MR_Word SpecDefnInfo_7,
  MR_Word Index_8,
  MR_Word CtorRepn_9,
  MR_Word * Case_10,
  MR_Integer STATE_VARIABLE_N_0_23,
  MR_Integer * STATE_VARIABLE_N_24)
{
  MR_Word FunctorName_14 = ((MR_Word) ((MR_hl_field(0, CtorRepn_9, 2))));
  MR_Integer FunctorArity_17 = ((MR_Integer) ((MR_hl_field(0, CtorRepn_9, 5))));
  MR_Word TypeCtor_19 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_7, 4))));
  MR_Word FunctorConsId_20;
  MR_Word Context_21 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_7, 7))));
  MR_Word UnifyIndexGoal_22;
  MR_Word Var_25;

  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (FunctorName_14));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (FunctorArity_17));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) (TypeCtor_19));
  }
  FunctorConsId_20 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_25)));
  hlds__make_goal__make_int_const_construction_4_p_0(Context_21, Index_8, STATE_VARIABLE_N_0_23, &UnifyIndexGoal_22);
  *STATE_VARIABLE_N_24 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_23 + (MR_Unsigned) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Case_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FunctorConsId_20));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) (UnifyIndexGoal_22));
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_11_p_0(
  MR_Word SpecDefnInfo_12,
  MR_Word UCOptions_13,
  MR_Word X_14,
  MR_Word Y_15,
  MR_Word CtorRepn_16,
  MR_Word STATE_VARIABLE_IntEqConsIds_0_53,
  MR_Word * STATE_VARIABLE_IntEqConsIds_54,
  MR_Word STATE_VARIABLE_Cases_0_55,
  MR_Word * STATE_VARIABLE_Cases_56,
  MR_Word STATE_VARIABLE_Info_0_57,
  MR_Word * STATE_VARIABLE_Info_58)
{
  MR_bool succeeded;
  MR_Word MaybeExistConstraints_21 = ((MR_Word) ((MR_hl_field(0, CtorRepn_16, 1))));
  MR_Word FunctorName_22 = ((MR_Word) ((MR_hl_field(0, CtorRepn_16, 2))));
  MR_Word ConsTag_23 = ((MR_Word) ((MR_hl_field(0, CtorRepn_16, 3))));
  MR_Word CtorArgRepns_24 = ((MR_Word) ((MR_hl_field(0, CtorRepn_16, 4))));
  MR_Integer FunctorArity_25 = ((MR_Integer) ((MR_hl_field(0, CtorRepn_16, 5))));
  MR_Word TypeCtor_27 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_12, 4))));
  MR_Word FunctorConsId_29;
  MR_Word Context_30;
  MR_Word ExistQTVars_31;
  MR_Word GiveVarsTypes_32;
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, TypeCtor_27, 0))));
  MR_String Var_60;
  MR_Word STATE_VARIABLE_Info_1_64;
  MR_Word Var_100;
  MR_Word Var_101;

  succeeded = ((MR_tag((MR_Word) Var_59)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_60 = ((MR_String) ((MR_hl_field(0, Var_59, 0))));
    succeeded = (strcmp(Var_60, (MR_String) "{}") == 0);
  }
  if (succeeded)
    {
      FunctorConsId_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, FunctorConsId_29, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(3, FunctorConsId_29, 1) = ((MR_Box) (FunctorArity_25));
    }
  else
  {
    MR_Word Var_61;

    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_61, 0) = ((MR_Box) (FunctorName_22));
      MR_hl_field(0, Var_61, 1) = ((MR_Box) (FunctorArity_25));
      MR_hl_field(0, Var_61, 2) = ((MR_Box) (TypeCtor_27));
    }
    FunctorConsId_29 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_61)));
  }
  Context_30 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_12, 7))));
  if ((MaybeExistConstraints_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    ExistQTVars_31 = (MR_Word) ((MR_Unsigned) 0U);
    GiveVarsTypes_32 = (MR_Integer) 1;
  }
  else
  {
    MR_Word ExistConstraints_102 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_21), (MR_Integer) 1));

    ExistQTVars_31 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_102, 0))));
    GiveVarsTypes_32 = (MR_Integer) 0;
  }
  Var_101 = ((((MR_Unsigned) ((MR_hl_field(0, UCOptions_13, 0))) >> 1)) & (MR_Integer) 1);
  Var_100 = ((MR_Unsigned) ((MR_hl_field(0, UCOptions_13, 0))) & (MR_Integer) 1);
  if ((CtorArgRepns_24 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (Var_101 == (MR_Integer) 1);
    if (succeeded)
    {
      STATE_VARIABLE_Info_1_64 = STATE_VARIABLE_Info_0_57;
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Word Var_65;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;

    succeeded = ((((MR_tag((MR_Word) ConsTag_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsTag_23, 0)))) == (MR_Integer) 12)));
    if (succeeded)
    {
      succeeded = (Var_100 == (MR_Integer) 1);
      if (succeeded)
      {
        Var_65 = (MR_Integer) 1;
        Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_57, 0))));
        Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_57, 1))));
        Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_57, 2))));
        {
          STATE_VARIABLE_Info_1_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_1_64, 0) = ((MR_Box) (Var_94));
          MR_hl_field(0, STATE_VARIABLE_Info_1_64, 1) = ((MR_Box) (Var_95));
          MR_hl_field(0, STATE_VARIABLE_Info_1_64, 2) = ((MR_Box) (Var_96));
          MR_hl_field(0, STATE_VARIABLE_Info_1_64, 3) = (MR_Box) ((MR_Unsigned) (Var_65));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    *STATE_VARIABLE_Info_58 = STATE_VARIABLE_Info_1_64;
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_IntEqConsIds_54 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FunctorConsId_29));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_IntEqConsIds_0_53));
    }
    *STATE_VARIABLE_Cases_56 = STATE_VARIABLE_Cases_0_55;
  }
  else
  {
    MR_Word MaybePackableArgsLocn_36;
    MR_Word ModuleInfo_37;
    MR_Word UCParams_38;
    MR_Word VarTable0_39;
    MR_Word TermType_40;
    MR_Word UnifyArgsGoals_42;
    MR_Word VarsX_43;
    MR_Word VarsY_44;
    MR_Word RHSX_45;
    MR_Word RHSY_46;
    MR_Word GoalUnifyX_47;
    MR_Word GoalUnifyY_48;
    MR_Word GoalList_49;
    MR_Word GoalInfo_50;
    MR_Word Goal_51;
    MR_Word Case_52;
    MR_Word Var_67;
    MR_Word Var_76;
    MR_Word Var_98;

    MaybePackableArgsLocn_36 = check_hlds__unify_proc__compute_maybe_packable_args_locn_1_f_0(ConsTag_23);
    ModuleInfo_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_57, 0))));
    VarTable0_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_57, 1))));
    Var_67 = ((((MR_Unsigned) ((MR_hl_field(0, UCOptions_13, 0))) >> 1)) & (MR_Integer) 1);
    Var_98 = ((MR_Unsigned) ((MR_hl_field(0, UCOptions_13, 0))) & (MR_Integer) 1);
    {
      UCParams_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UCParams_38, 0) = ((MR_Box) (ModuleInfo_37));
      MR_hl_field(0, UCParams_38, 1) = ((MR_Box) (Context_30));
      MR_hl_field(0, UCParams_38, 2) = ((MR_Box) (ExistQTVars_31));
      MR_hl_field(0, UCParams_38, 3) = ((MR_Box) (MaybePackableArgsLocn_36));
      MR_hl_field(0, UCParams_38, 4) = (MR_Box) (((((MR_Unsigned) (GiveVarsTypes_32) << 2)) | (((((MR_Unsigned) (Var_67) << 1)) | (MR_Unsigned) (Var_98)))));
    }
    parse_tree__var_table__lookup_var_type_3_p_0(VarTable0_39, X_14, &TermType_40);
    check_hlds__unify_proc__generate_arg_unify_goals_11_p_0(UCParams_38, TermType_40, X_14, Y_15, (MR_Integer) 1, CtorArgRepns_24, &UnifyArgsGoals_42, &VarsX_43, &VarsY_44, STATE_VARIABLE_Info_0_57, STATE_VARIABLE_Info_58);
    {
      RHSX_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RHSX_45, 0) = ((MR_Box) (FunctorConsId_29));
      MR_hl_field(1, RHSX_45, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, RHSX_45, 2) = ((MR_Box) (VarsX_43));
    }
    {
      RHSY_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RHSY_46, 0) = ((MR_Box) (FunctorConsId_29));
      MR_hl_field(1, RHSY_46, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, RHSY_46, 2) = ((MR_Box) (VarsY_44));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_14, RHSX_45, Context_30, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyX_47);
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Y_15, RHSY_46, Context_30, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyY_48);
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = ((MR_Box) (GoalUnifyY_48));
      MR_hl_field(1, Var_76, 1) = ((MR_Box) (UnifyArgsGoals_42));
    }
    {
      GoalList_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GoalList_49, 0) = ((MR_Box) (GoalUnifyX_47));
      MR_hl_field(1, GoalList_49, 1) = ((MR_Box) (Var_76));
    }
    hlds__hlds_goal__goal_info_init_2_p_0(Context_30, &GoalInfo_50);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_49, GoalInfo_50, &Goal_51);
    {
      Case_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_52, 0) = ((MR_Box) (FunctorConsId_29));
      MR_hl_field(0, Case_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Case_52, 2) = ((MR_Box) (Goal_51));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Cases_56 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_52));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Cases_0_55));
    }
    *STATE_VARIABLE_IntEqConsIds_54 = STATE_VARIABLE_IntEqConsIds_0_53;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_arg_unify_goals_11_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc__generate_arg_unify_goals_11_p_0(
  MR_Word UCParams_1,
  MR_Word TermType_2,
  MR_Word TermVarX_3,
  MR_Word TermVarY_4,
  MR_Integer ArgNum_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  MR_bool succeeded;

  if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
  }
  else
  {
    MR_Word CtorArgRepn_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
    MR_Word CtorArgRepns_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
    MR_Word UnifyHow_31;
    MR_Word GiveVarsTypes_32;
    MR_Word Var_96;

    check_hlds__unify_proc__may_we_start_packing_at_this_arg_unify_3_p_0(UCParams_1, CtorArgRepn_25, &UnifyHow_31);
    Var_96 = ((MR_Word) ((MR_hl_field(0, UCParams_1, 0))));
    GiveVarsTypes_32 = ((((MR_Unsigned) ((MR_hl_field(0, UCParams_1, 4))) >> 2)) & (MR_Integer) 1);
    if ((UnifyHow_31 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Type_33 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_25, 2))));
      MR_Word IsDummy_35;
      MR_Word HeadVarX_36;
      MR_Word HeadVarY_37;
      MR_Word TailVarsX_38;
      MR_Word TailVarsY_39;

      IsDummy_35 = hlds__type_util__is_type_a_dummy_2_f_0(Var_96, Type_33);
      switch (IsDummy_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_Info_1_55;
            MR_Integer Var_56;

            check_hlds__unify_proc__make_fresh_var_pair_9_p_0(GiveVarsTypes_32, (MR_String) "_ArgX", (MR_String) "_ArgY", ArgNum_5, Type_33, &HeadVarX_36, &HeadVarY_37, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_1_55);
            Var_56 = (MR_Integer) ((MR_Unsigned) ArgNum_5 + (MR_Unsigned) 1);
            check_hlds__unify_proc__generate_arg_unify_goals_11_p_0(UCParams_1, TermType_2, TermVarX_3, TermVarY_4, Var_56, CtorArgRepns_26, HeadVar__7_7, &TailVarsX_38, &TailVarsY_39, STATE_VARIABLE_Info_1_55, STATE_VARIABLE_Info_11);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Context_40;
            MR_Word HeadGoal_41;
            MR_Word TailGoals_42;
            MR_Word STATE_VARIABLE_Info_3_61;
            MR_Integer Var_70;

            check_hlds__unify_proc__make_fresh_var_pair_9_p_0(GiveVarsTypes_32, (MR_String) "ArgX", (MR_String) "ArgY", ArgNum_5, Type_33, &HeadVarX_36, &HeadVarY_37, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_3_61);
            Context_40 = ((MR_Word) ((MR_hl_field(0, UCParams_1, 1))));
            succeeded = check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(UCParams_1, Type_33);
            if (succeeded)
            {
              MR_Word Var_62;
              MR_Word Var_64;
              MR_Word Var_65;

              Var_62 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              {
                Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_65, 0) = ((MR_Box) (HeadVarY_37));
                MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_64, 0) = ((MR_Box) (HeadVarX_36));
                MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_65));
              }
              check_hlds__unify_proc__build_simple_call_6_p_0(Var_96, Var_62, (MR_String) "typed_unify", Var_64, Context_40, &HeadGoal_41);
            }
            else
            {
              MR_Word Var_67;

              {
                Var_67 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_67, 0) = ((MR_Box) (HeadVarY_37));
              }
              hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(HeadVarX_36, Var_67, Context_40, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &HeadGoal_41);
            }
            Var_70 = (MR_Integer) ((MR_Unsigned) ArgNum_5 + (MR_Unsigned) 1);
            check_hlds__unify_proc__generate_arg_unify_goals_11_p_0(UCParams_1, TermType_2, TermVarX_3, TermVarY_4, Var_70, CtorArgRepns_26, &TailGoals_42, &TailVarsX_38, &TailVarsY_39, STATE_VARIABLE_Info_3_61, STATE_VARIABLE_Info_11);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__7_7 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (HeadGoal_41));
              MR_hl_field(1, base, 1) = ((MR_Box) (TailGoals_42));
            }
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__8_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadVarX_36));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailVarsX_38));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__9_9 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadVarY_37));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailVarsY_39));
      }
    }
    else
    {
      MR_Word ArgsLocn_43 = ((MR_Word) ((MR_hl_field(1, UnifyHow_31, 0))));
      MR_Word CellOffset_44 = ((MR_Word) ((MR_hl_field(1, UnifyHow_31, 1))));
      MR_Word Ptag_45;
      MR_Integer LeftOverArgNum_46;
      MR_Word LeftOverCtorArgRepns_47;
      MR_Word RestOfWordVarsX_48;
      MR_Word RestOfWordVarsY_49;
      MR_Word HeadGoals_50;
      MR_Word STATE_VARIABLE_Info_5_76;
      MR_Word Var_77;
      MR_Word STATE_VARIABLE_Info_6_82;
      MR_Word STATE_VARIABLE_Info_7_83;
      MR_Word STATE_VARIABLE_Info_8_84;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Type_88;
      MR_Word ModuleInfo_89;
      MR_Word HeadVarX_90;
      MR_Word HeadVarY_91;
      MR_Word TailVarsX_92;
      MR_Word TailVarsY_93;
      MR_Word Context_94;
      MR_Word TailGoals_95;

      if ((ArgsLocn_43 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_arg_unify_goals\'/11", (MR_String) "args_local");
          return;
        }
      else
        Ptag_45 = ((MR_Word) ((MR_hl_field(1, ArgsLocn_43, 0))));
      check_hlds__unify_proc__unify_proc_info_set_packed_ops_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_5_76);
      Type_88 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_25, 2))));
      Context_94 = ((MR_Word) ((MR_hl_field(0, UCParams_1, 1))));
      {
        Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_77, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[2]));
        MR_hl_field(0, Var_77, 1) = ((MR_Box) (check_hlds__unify_proc__generate_arg_unify_goals_11_p_0_1));
        MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_77, 3) = ((MR_Box) (UCParams_1));
        MR_hl_field(0, Var_77, 4) = ((MR_Box) (Type_88));
      }
      mercury__require__expect_not_3_p_0(Var_77, (MR_String) "predicate \140check_hlds.unify_proc.generate_arg_unify_goals\'/11", (MR_String) "sub-word-size argument of existential type");
      check_hlds__unify_proc__make_fresh_var_pair_9_p_0(GiveVarsTypes_32, (MR_String) "_ArgX", (MR_String) "_ArgY", ArgNum_5, Type_88, &HeadVarX_90, &HeadVarY_91, STATE_VARIABLE_Info_5_76, &STATE_VARIABLE_Info_6_82);
      check_hlds__unify_proc__get_rest_of_word_10_p_0(UCParams_1, CellOffset_44, ArgNum_5, &LeftOverArgNum_46, CtorArgRepns_26, &LeftOverCtorArgRepns_47, &RestOfWordVarsX_48, &RestOfWordVarsY_49, STATE_VARIABLE_Info_6_82, &STATE_VARIABLE_Info_7_83);
      ModuleInfo_89 = ((MR_Word) ((MR_hl_field(0, UCParams_1, 0))));
      check_hlds__unify_proc__build_bulk_unify_foreign_proc_11_p_0(ModuleInfo_89, Ptag_45, TermType_2, TermVarX_3, TermVarY_4, ArgNum_5, CellOffset_44, Context_94, &HeadGoals_50, STATE_VARIABLE_Info_7_83, &STATE_VARIABLE_Info_8_84);
      check_hlds__unify_proc__generate_arg_unify_goals_11_p_0(UCParams_1, TermType_2, TermVarX_3, TermVarY_4, LeftOverArgNum_46, LeftOverCtorArgRepns_47, &TailGoals_95, &TailVarsX_92, &TailVarsY_93, STATE_VARIABLE_Info_8_84, STATE_VARIABLE_Info_11);
      *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadGoals_50, TailGoals_95);
      {
        Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_86, 0) = ((MR_Box) (HeadVarX_90));
        MR_hl_field(1, Var_86, 1) = ((MR_Box) (RestOfWordVarsX_48));
      }
      *HeadVar__8_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), Var_86, TailVarsX_92);
      {
        Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_87, 0) = ((MR_Box) (HeadVarY_91));
        MR_hl_field(1, Var_87, 1) = ((MR_Box) (RestOfWordVarsY_49));
      }
      *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), Var_87, TailVarsY_93);
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_proc_info_set_packed_ops_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (X_4));
  }
}

static void MR_CALL 
check_hlds__unify_proc__may_we_start_packing_at_this_arg_unify_3_p_0(
  MR_Word UCParams_4,
  MR_Word CtorArgRepn_5,
  MR_Word * UnifyHow_6)
{
  MR_Word AllowPackedUnifyCompare_7 = ((MR_Unsigned) ((MR_hl_field(0, UCParams_4, 4))) & (MR_Integer) 1);
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, UCParams_4, 3))));

  switch (AllowPackedUnifyCompare_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      if ((Var_32 == (MR_Word) ((MR_Unsigned) 0U)))
        *UnifyHow_6 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word ArgsLocn_9 = ((MR_Word) ((MR_hl_field(1, Var_32, 0))));
        MR_Word ArgPosWidth_10 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_5, 3))));

        switch (MR_tag((MR_Word) ArgPosWidth_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *UnifyHow_6 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_10, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word CellOffset_17 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_10, 2))));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *UnifyHow_6 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (ArgsLocn_9));
                    MR_hl_field(1, base, 1) = ((MR_Box) (CellOffset_17));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word CellOffset_45 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_10, 2))));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *UnifyHow_6 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (ArgsLocn_9));
                    MR_hl_field(1, base, 1) = ((MR_Box) (CellOffset_45));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word CellOffset_28 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_10, 2))));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *UnifyHow_6 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (ArgsLocn_9));
                    MR_hl_field(1, base, 1) = ((MR_Box) (CellOffset_28));
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 0:
      *UnifyHow_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_rest_of_word_10_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__IntroducedFrom__pred__get_rest_of_word__941__2_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_rest_of_word_10_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_rest_of_word_10_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__IntroducedFrom__pred__get_rest_of_word__941__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_rest_of_word_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc__get_rest_of_word_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_ArgNum_0_3,
  MR_Integer * STATE_VARIABLE_ArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  MR_bool succeeded;

  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
    *STATE_VARIABLE_ArgNum_4 = STATE_VARIABLE_ArgNum_0_3;
  }
  else
  {
    MR_Word CtorArgRepn_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
    MR_Word CtorArgRepns_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
    MR_Word ArgPosWidth_28 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_22, 3))));
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_22, 2))));

    switch (MR_tag((MR_Word) ArgPosWidth_28)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *HeadVar__6_6 = HeadVar__5_5;
          *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
          *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_ArgNum_4 = STATE_VARIABLE_ArgNum_0_3;
          *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_28, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__6_6 = HeadVar__5_5;
              *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
              *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_ArgNum_4 = STATE_VARIABLE_ArgNum_0_3;
              *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgCellOffset_91 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_28, 2))));
              MR_Word GiveVarsTypes_92;
              MR_Word HeadVarX_93;
              MR_Word HeadVarY_94;
              MR_Word TailVarsX_95;
              MR_Word TailVarsY_96;
              MR_Word Var_97;
              MR_Word Var_100;
              MR_Word STATE_VARIABLE_Info_1_105;
              MR_Integer STATE_VARIABLE_ArgNum_1_106;

              {
                Var_97 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_97, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[2]));
                MR_hl_field(0, Var_97, 1) = ((MR_Box) (check_hlds__unify_proc__get_rest_of_word_10_p_0_3));
                MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_97, 3) = ((MR_Box) (HeadVar__1_1));
                MR_hl_field(0, Var_97, 4) = ((MR_Box) (Var_70));
              }
              mercury__require__expect_not_3_p_0(Var_97, (MR_String) "predicate \140check_hlds.unify_proc.get_rest_of_word\'/10", (MR_String) "sub-word-size argument of existential type");
              {
                Var_100 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_100, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[3]));
                MR_hl_field(0, Var_100, 1) = ((MR_Box) (check_hlds__unify_proc__get_rest_of_word_10_p_0_4));
                MR_hl_field(0, Var_100, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_100, 3) = ((MR_Box) (HeadVar__2_2));
                MR_hl_field(0, Var_100, 4) = ((MR_Box) (ArgCellOffset_91));
              }
              mercury__require__expect_3_p_0(Var_100, (MR_String) "predicate \140check_hlds.unify_proc.get_rest_of_word\'/10", (MR_String) "apw_{partial,none}_shifted offset != CellOffset");
              GiveVarsTypes_92 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) >> 2)) & (MR_Integer) 1);
              check_hlds__unify_proc__make_fresh_var_pair_9_p_0(GiveVarsTypes_92, (MR_String) "_ArgX", (MR_String) "_ArgY", STATE_VARIABLE_ArgNum_0_3, Var_70, &HeadVarX_93, &HeadVarY_94, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_1_105);
              STATE_VARIABLE_ArgNum_1_106 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ArgNum_0_3 + (MR_Unsigned) 1);
              check_hlds__unify_proc__get_rest_of_word_10_p_0(HeadVar__1_1, HeadVar__2_2, STATE_VARIABLE_ArgNum_1_106, STATE_VARIABLE_ArgNum_4, CtorArgRepns_23, HeadVar__6_6, &TailVarsX_95, &TailVarsY_96, STATE_VARIABLE_Info_1_105, STATE_VARIABLE_Info_10);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__7_7 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (HeadVarX_93));
                MR_hl_field(1, base, 1) = ((MR_Box) (TailVarsX_95));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__8_8 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (HeadVarY_94));
                MR_hl_field(1, base, 1) = ((MR_Box) (TailVarsY_96));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgCellOffset_30 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_28, 2))));
              MR_Word GiveVarsTypes_37;
              MR_Word HeadVarX_38;
              MR_Word HeadVarY_39;
              MR_Word TailVarsX_40;
              MR_Word TailVarsY_41;
              MR_Word Var_57;
              MR_Word Var_60;
              MR_Word STATE_VARIABLE_Info_1_65;
              MR_Integer STATE_VARIABLE_ArgNum_1_66;

              {
                Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_57, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[2]));
                MR_hl_field(0, Var_57, 1) = ((MR_Box) (check_hlds__unify_proc__get_rest_of_word_10_p_0_1));
                MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_57, 3) = ((MR_Box) (HeadVar__1_1));
                MR_hl_field(0, Var_57, 4) = ((MR_Box) (Var_70));
              }
              mercury__require__expect_not_3_p_0(Var_57, (MR_String) "predicate \140check_hlds.unify_proc.get_rest_of_word\'/10", (MR_String) "sub-word-size argument of existential type");
              {
                Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_60, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[3]));
                MR_hl_field(0, Var_60, 1) = ((MR_Box) (check_hlds__unify_proc__get_rest_of_word_10_p_0_2));
                MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_60, 3) = ((MR_Box) (HeadVar__2_2));
                MR_hl_field(0, Var_60, 4) = ((MR_Box) (ArgCellOffset_30));
              }
              mercury__require__expect_3_p_0(Var_60, (MR_String) "predicate \140check_hlds.unify_proc.get_rest_of_word\'/10", (MR_String) "apw_{partial,none}_shifted offset != CellOffset");
              GiveVarsTypes_37 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) >> 2)) & (MR_Integer) 1);
              check_hlds__unify_proc__make_fresh_var_pair_9_p_0(GiveVarsTypes_37, (MR_String) "_ArgX", (MR_String) "_ArgY", STATE_VARIABLE_ArgNum_0_3, Var_70, &HeadVarX_38, &HeadVarY_39, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_1_65);
              STATE_VARIABLE_ArgNum_1_66 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ArgNum_0_3 + (MR_Unsigned) 1);
              check_hlds__unify_proc__get_rest_of_word_10_p_0(HeadVar__1_1, HeadVar__2_2, STATE_VARIABLE_ArgNum_1_66, STATE_VARIABLE_ArgNum_4, CtorArgRepns_23, HeadVar__6_6, &TailVarsX_40, &TailVarsY_41, STATE_VARIABLE_Info_1_65, STATE_VARIABLE_Info_10);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__7_7 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (HeadVarX_38));
                MR_hl_field(1, base, 1) = ((MR_Box) (TailVarsX_40));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__8_8 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (HeadVarY_39));
                MR_hl_field(1, base, 1) = ((MR_Box) (TailVarsY_41));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__build_bulk_unify_foreign_proc_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Ptag_13,
  MR_Word TermType_14,
  MR_Word TermVarX_15,
  MR_Word TermVarY_16,
  MR_Integer ArgNum_17,
  MR_Word CellOffset_18,
  MR_Word Context_19,
  MR_Word * Goals_20,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  MR_Word TermVarArgX_22;
  MR_Word TermVarArgY_23;
  MR_Word WordsArgs_26;
  MR_Word WordsGoals_27;
  MR_Word ForeignArgs_28;
  MR_Word UnifyRemoteArgWordGoal_29;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_40;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_47;
  MR_Word Var_50;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word STATE_VARIABLE_Attrs_1_61;
  MR_Word STATE_VARIABLE_Attrs_2_64;
  MR_Word STATE_VARIABLE_Attrs_3_66;
  MR_Word STATE_VARIABLE_Attrs_4_68;
  MR_Word STATE_VARIABLE_Attrs_5_70;
  MR_Word STATE_VARIABLE_Attrs_6_72;
  MR_Word STATE_VARIABLE_Attrs_7_74;
  MR_Word STATE_VARIABLE_Attrs_8_76;
  MR_Word STATE_VARIABLE_Attrs_9_78;
  MR_Word STATE_VARIABLE_Attrs_10_80;

  Var_35 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) ((MR_String) "TermVarX"));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (Var_35));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
  }
  {
    TermVarArgX_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TermVarArgX_22, 0) = ((MR_Box) (TermVarX_15));
    MR_hl_field(0, TermVarArgX_22, 1) = ((MR_Box) (Var_32));
    MR_hl_field(0, TermVarArgX_22, 2) = ((MR_Box) (TermType_14));
    MR_hl_field(0, TermVarArgX_22, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_40 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) ((MR_String) "TermVarY"));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (Var_40));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
  }
  {
    TermVarArgY_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TermVarArgY_23, 0) = ((MR_Box) (TermVarY_16));
    MR_hl_field(0, TermVarArgY_23, 1) = ((MR_Box) (Var_37));
    MR_hl_field(0, TermVarArgY_23, 2) = ((MR_Box) (TermType_14));
    MR_hl_field(0, TermVarArgY_23, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  check_hlds__unify_proc__make_ptag_and_cell_offset_args_8_p_0(ArgNum_17, Ptag_13, CellOffset_18, Context_19, &WordsArgs_26, &WordsGoals_27, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (TermVarArgY_23));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (TermVarArgX_22));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_44));
  }
  ForeignArgs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), Var_43, WordsArgs_26);
  Var_47 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  Var_50 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  STATE_VARIABLE_Attrs_1_61 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
  parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_1_61, &STATE_VARIABLE_Attrs_2_64);
  parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_2_64, &STATE_VARIABLE_Attrs_3_66);
  parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_3_66, &STATE_VARIABLE_Attrs_4_68);
  parse_tree__prog_data_foreign__set_terminates_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_4_68, &STATE_VARIABLE_Attrs_5_70);
  parse_tree__prog_data_foreign__set_may_throw_exception_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_5_70, &STATE_VARIABLE_Attrs_6_72);
  parse_tree__prog_data_foreign__set_may_modify_trail_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_6_72, &STATE_VARIABLE_Attrs_7_74);
  parse_tree__prog_data_foreign__set_may_call_mm_tabled_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_7_74, &STATE_VARIABLE_Attrs_8_76);
  parse_tree__prog_data_foreign__set_affects_liveness_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_8_76, &STATE_VARIABLE_Attrs_9_78);
  parse_tree__prog_data_foreign__set_allocates_memory_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_9_78, &STATE_VARIABLE_Attrs_10_80);
  parse_tree__prog_data_foreign__set_registers_roots_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_10_80, &Var_55);
  hlds__goal_util__generate_call_foreign_proc_17_p_0(ModuleInfo_12, (MR_Integer) 0, Var_47, (MR_String) "unify_remote_arg_words", (MR_Word) ((MR_Unsigned) 0U), ForeignArgs_28, (MR_Word) ((MR_Unsigned) 0U), Var_50, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Var_55, (MR_Word) ((MR_Unsigned) 0U), (MR_String) "\n        MR_Unsigned *cell_x;\n        MR_Unsigned *cell_y;\n        MR_Unsigned word_x;\n        MR_Unsigned word_y;\n\n        cell_x = (MR_Unsigned *)\n           " " (((MR_Unsigned) TermVarX) - (MR_Unsigned) Ptag);\n        cell_y = (MR_Unsigned *)\n            (((MR_Unsigned) TermVarY) - (MR_Unsigned) Ptag);\n        word_x =" " cell_x[CellOffsetVar];\n        word_y = cell_y[CellOffsetVar];\n\n        SUCCESS_INDICATOR = (word_x == word_y);\n    ", Context_19, &UnifyRemoteArgWordGoal_29);
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (UnifyRemoteArgWordGoal_29));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  *Goals_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), WordsGoals_27, Var_57);
}

void MR_CALL 
check_hlds__unify_proc__generate_clauses_for_special_pred_4_p_0(
  MR_Word SpecDefnInfo_5,
  MR_Word * ClauseInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32)
{
  MR_bool succeeded;
  MR_Word SpecialPredId_8 = ((MR_Unsigned) ((MR_hl_field(0, SpecDefnInfo_5, 0))) & (MR_Integer) 3);
  MR_Word Type_9 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_5, 3))));
  MR_Word ArgTypes_10;
  MR_Word ArgVars_14;
  MR_Word Clauses_17;
  MR_Word VarTable_21;
  MR_Word VarSet_22;
  MR_Word VarTypes0_23;
  MR_Word VarTypesAL0_24;
  MR_Word RevExplicitVarTypesAL_25;
  MR_Word ExplicitVarTypes_26;
  MR_Word RttiVarMaps_27;
  MR_Word TVarNameMap_28;
  MR_Word ArgVec_29;
  MR_Word ClausesRep_30;
  MR_Word STATE_VARIABLE_Info_1_33;
  MR_Word STATE_VARIABLE_Info_2_36;
  MR_Word STATE_VARIABLE_Info_3_39;
  MR_Word Var_58;
  MR_Word VarTable_85;
  MR_Word RttiVarMaps_86;
  MR_Word _Modes_11;
  MR_Word _Det_12;

  hlds__special_pred__special_pred_interface_5_p_0(SpecialPredId_8, Type_9, &ArgTypes_10, &_Modes_11, &_Det_12);
  parse_tree__var_table__init_var_table_1_p_0(&VarTable_85);
  hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_86);
  {
    STATE_VARIABLE_Info_1_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Info_1_33, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_31));
    MR_hl_field(0, STATE_VARIABLE_Info_1_33, 1) = ((MR_Box) (VarTable_85));
    MR_hl_field(0, STATE_VARIABLE_Info_1_33, 2) = ((MR_Box) (RttiVarMaps_86));
    MR_hl_field(0, STATE_VARIABLE_Info_1_33, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(ArgTypes_10, (MR_String) "HeadVar__", (MR_Integer) 1, &ArgVars_14, STATE_VARIABLE_Info_1_33, &STATE_VARIABLE_Info_2_36);
  switch (SpecialPredId_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Word Clause_67;
        MR_Word Res_20;
        MR_Word X_63;
        MR_Word Y_64;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;

        succeeded = (ArgVars_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Res_20 = ((MR_Word) ((MR_hl_field(1, ArgVars_14, 0))));
          Var_48 = ((MR_Word) ((MR_hl_field(1, ArgVars_14, 1))));
          succeeded = (Var_48 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            X_63 = ((MR_Word) ((MR_hl_field(1, Var_48, 0))));
            Var_49 = ((MR_Word) ((MR_hl_field(1, Var_48, 1))));
            succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Y_64 = ((MR_Word) ((MR_hl_field(1, Var_49, 0))));
              Var_50 = ((MR_Word) ((MR_hl_field(1, Var_49, 1))));
              succeeded = (Var_50 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
        if (succeeded)
          check_hlds__unify_proc__generate_compare_proc_body_7_p_0(SpecDefnInfo_5, Res_20, X_63, Y_64, &Clause_67, STATE_VARIABLE_Info_2_36, &STATE_VARIABLE_Info_3_39);
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_clauses_for_special_pred\'/4", (MR_String) "bad compare args");
            return;
          }
        {
          Clauses_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Clauses_17, 0) = ((MR_Box) (Clause_67));
          MR_hl_field(1, Clauses_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Clause_19;
        MR_Word Index_18;
        MR_Word X_61;
        MR_Word Var_42;
        MR_Word Var_43;

        succeeded = (ArgVars_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          X_61 = ((MR_Word) ((MR_hl_field(1, ArgVars_14, 0))));
          Var_42 = ((MR_Word) ((MR_hl_field(1, ArgVars_14, 1))));
          succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Index_18 = ((MR_Word) ((MR_hl_field(1, Var_42, 0))));
            Var_43 = ((MR_Word) ((MR_hl_field(1, Var_42, 1))));
            succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
          check_hlds__unify_proc__generate_index_proc_body_6_p_0(SpecDefnInfo_5, X_61, Index_18, &Clause_19, STATE_VARIABLE_Info_2_36, &STATE_VARIABLE_Info_3_39);
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_clauses_for_special_pred\'/4", (MR_String) "bad index args");
            return;
          }
        {
          Clauses_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Clauses_17, 0) = ((MR_Box) (Clause_19));
          MR_hl_field(1, Clauses_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word X_15;
        MR_Word Y_16;
        MR_Word Var_37;
        MR_Word Var_38;

        succeeded = (ArgVars_14 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          X_15 = ((MR_Word) ((MR_hl_field(1, ArgVars_14, 0))));
          Var_37 = ((MR_Word) ((MR_hl_field(1, ArgVars_14, 1))));
          succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Y_16 = ((MR_Word) ((MR_hl_field(1, Var_37, 0))));
            Var_38 = ((MR_Word) ((MR_hl_field(1, Var_37, 1))));
            succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
          check_hlds__unify_proc__generate_unify_proc_body_6_p_0(SpecDefnInfo_5, X_15, Y_16, &Clauses_17, STATE_VARIABLE_Info_2_36, &STATE_VARIABLE_Info_3_39);
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_clauses_for_special_pred\'/4", (MR_String) "bad unify args");
            return;
          }
      }
      break;
  }
  *STATE_VARIABLE_ModuleInfo_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_3_39, 0))));
  VarTable_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_3_39, 1))));
  hlds__var_table_hlds__split_var_table_3_p_0(VarTable_21, &VarSet_22, &VarTypes0_23);
  parse_tree__vartypes__vartypes_to_sorted_assoc_list_2_p_0(VarTypes0_23, &VarTypesAL0_24);
  check_hlds__unify_proc__get_explicitly_typed_vars_3_p_0(VarTypesAL0_24, (MR_Word) ((MR_Unsigned) 0U), &RevExplicitVarTypesAL_25);
  parse_tree__vartypes__vartypes_from_rev_sorted_assoc_list_2_p_0(RevExplicitVarTypesAL_25, &ExplicitVarTypes_26);
  hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_27);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__unify_proc_scalar_common_1[0]), &TVarNameMap_28);
  ArgVec_29 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), (MR_Integer) 0, ArgVars_14);
  hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_17, &ClausesRep_30);
  Var_58 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *ClauseInfo_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (VarSet_22));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExplicitVarTypes_26));
    MR_hl_field(0, base, 2) = ((MR_Box) (VarTable_21));
    MR_hl_field(0, base, 3) = ((MR_Box) (RttiVarMaps_27));
    MR_hl_field(0, base, 4) = ((MR_Box) (TVarNameMap_28));
    MR_hl_field(0, base, 5) = ((MR_Box) (ArgVec_29));
    MR_hl_field(0, base, 6) = ((MR_Box) (ClausesRep_30));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_58));
    MR_hl_field(0, base, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(
  MR_Word HeadVar__1_1,
  MR_String BaseName_2,
  MR_Integer Num_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
  }
  else
  {
    MR_Word Type_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Types_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_16;
    MR_Word Vars_17;
    MR_Word STATE_VARIABLE_Info_1_21;
    MR_Integer Var_22;
    MR_String NumStr_25;
    MR_String Name_26;

    mercury__string__int_to_string_2_p_0(Num_3, &NumStr_25);
    mercury__string__append_3_p_2(BaseName_2, NumStr_25, &Name_26);
    check_hlds__unify_proc__unify_proc_info_new_var_5_p_0(Name_26, Type_12, &Var_16, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_1_21);
    Var_22 = (MR_Integer) ((MR_Unsigned) Num_3 + (MR_Unsigned) 1);
    check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(Types_13, BaseName_2, Var_22, &Vars_17, STATE_VARIABLE_Info_1_21, STATE_VARIABLE_Info_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (Vars_17));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Case_10;
  MR_Integer conv0_STATE_VARIABLE_N_24;

  check_hlds__unify_proc__generate_index_du_case_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_Case_10, ((MR_Integer) (wrapper_arg_3)), &conv0_STATE_VARIABLE_N_24);
  *wrapper_arg_2 = ((MR_Box) (conv1_Case_10));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_N_24));
}

static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_6_p_0(
  MR_Word SpecDefnInfo_7,
  MR_Word X_8,
  MR_Word Index_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
{
  MR_Word TypeBody_12 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_7, 5))));

  switch (MR_tag((MR_Word) TypeBody_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeBodyDu_17 = (MR_Word) ((MR_Word) (TypeBody_12));
        MR_Word MaybeRepn_22 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_17, 4))));
        MR_Word Repn_24;
        MR_Word DuTypeKind_25;
        MR_Word Var_58;

        if ((MaybeRepn_22 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/6", (MR_String) "MaybeRepn = no");
            return;
          }
        else
          Repn_24 = ((MR_Word) ((MR_hl_field(1, MaybeRepn_22, 0))));
        Var_58 = ((MR_Word) ((MR_hl_field(0, Repn_24, 0))));
        DuTypeKind_25 = ((MR_Word) ((MR_hl_field(0, Repn_24, 3))));
        switch (MR_tag((MR_Word) DuTypeKind_25)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(DuTypeKind_25)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/6", (MR_String) "trying to create index proc for enum type");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/6", (MR_String) "trying to create index proc for dummy type");
                  return;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Cases_66;
                  MR_Word Context_68;
                  MR_Word GoalInfo_69;
                  MR_Word Goal_70;
                  MR_Word Var_71;
                  MR_Word Var_73;
                  MR_Word Var_76;
                  MR_Word Var_77;
                  MR_Box conv2_Var_67;

                  {
                    Var_71 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_71, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_9[0]));
                    MR_hl_field(0, Var_71, 1) = ((MR_Box) (check_hlds__unify_proc__generate_index_proc_body_6_p_0_1));
                    MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_71, 3) = ((MR_Box) (SpecDefnInfo_7));
                    MR_hl_field(0, Var_71, 4) = ((MR_Box) (Index_9));
                  }
                  mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_71, Var_58, &Cases_66, ((MR_Box) ((MR_Integer) 0)), &conv2_Var_67);
                  Context_68 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_7, 7))));
                  hlds__hlds_goal__goal_info_init_2_p_0(Context_68, &GoalInfo_69);
                  {
                    Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(3, Var_73, 1) = ((MR_Box) (X_8));
                    MR_hl_field(3, Var_73, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                    MR_hl_field(3, Var_73, 3) = ((MR_Box) (Cases_66));
                  }
                  {
                    Goal_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Goal_70, 0) = ((MR_Box) (Var_73));
                    MR_hl_field(0, Goal_70, 1) = ((MR_Box) (GoalInfo_69));
                  }
                  {
                    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_77, 0) = ((MR_Box) (Index_9));
                    MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_76, 0) = ((MR_Box) (X_8));
                    MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_77));
                  }
                  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_76, Goal_70, Context_68, Clause_10, STATE_VARIABLE_Info_0_31, STATE_VARIABLE_Info_32);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/6", (MR_String) "trying to create index proc for foreign enum type");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/6", (MR_String) "trying to create index proc for notag type");
              return;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/6", (MR_String) "trying to create index proc for a foreign type");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/6", (MR_String) "trying to create index proc for eqv type");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeBody_12, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/6", (MR_String) "trying to create index proc for a solver type");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/6", (MR_String) "trying to create index proc for abstract type");
            return;
          }
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__IntroducedFrom__pred__generate_compare_proc_body__1052__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_7_p_0(
  MR_Word SpecDefnInfo_8,
  MR_Word Res_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, 0))));
  MR_Word TypeBody_15 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_8, 5))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_8, 7))));
  MR_Word SuperType_20;
  MR_Word TypeBodyDu_17;
  MR_Word Var_50;

  succeeded = ((MR_tag((MR_Word) TypeBody_15)) == (MR_Integer) 0);
  if (succeeded)
  {
    TypeBodyDu_17 = (MR_Word) ((MR_Word) (TypeBody_15));
    Var_50 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_17, 2))));
    succeeded = (Var_50 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      SuperType_20 = ((MR_Word) ((MR_hl_field(1, Var_50, 0))));
  }
  if (succeeded)
  {
    MR_Word TVarSet_24 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_8, 2))));
    MR_Word BaseType_25;
    MR_Word TypeTable_115;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_14, &TypeTable_115);
    check_hlds__unify_proc__get_du_base_type_loop_4_p_0(TypeTable_115, TVarSet_24, SuperType_20, &BaseType_25);
    check_hlds__unify_proc__generate_compare_proc_body_eqv_8_p_0(Context_16, BaseType_25, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_48, STATE_VARIABLE_Info_49);
  }
  else
  {
    MR_Word UserEqComp_26;

    succeeded = hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(ModuleInfo_14, TypeBody_15, &UserEqComp_26);
    if (succeeded)
      check_hlds__unify_proc__generate_compare_proc_body_user_8_p_0(Context_16, UserEqComp_26, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_48, STATE_VARIABLE_Info_49);
    else
      switch (MR_tag((MR_Word) TypeBody_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MaybeSuperType_36;
            MR_Word MaybeRepn_38;
            MR_Word Repn_40;
            MR_Word DuTypeKind_41;
            MR_Word Var_63;
            MR_Word TypeBodyDu_75 = (MR_Word) ((MR_Word) (TypeBody_15));
            MR_Word Var_104;

            MaybeSuperType_36 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_75, 2))));
            MaybeRepn_38 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_75, 4))));
            {
              Var_63 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_63, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[1]));
              MR_hl_field(0, Var_63, 1) = ((MR_Box) (check_hlds__unify_proc__generate_compare_proc_body_7_p_0_1));
              MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_63, 3) = ((MR_Box) (MaybeSuperType_36));
              MR_hl_field(0, Var_63, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_63, (MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body\'/7", (MR_String) "MaybeSuperType != not_a_subtype");
            if ((MaybeRepn_38 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body\'/7", (MR_String) "MaybeRepn = no");
                return;
              }
            else
              Repn_40 = ((MR_Word) ((MR_hl_field(1, MaybeRepn_38, 0))));
            Var_104 = ((MR_Word) ((MR_hl_field(0, Repn_40, 0))));
            DuTypeKind_41 = ((MR_Word) ((MR_hl_field(0, Repn_40, 3))));
            switch (MR_tag((MR_Word) DuTypeKind_41)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(DuTypeKind_41)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    check_hlds__unify_proc__generate_compare_proc_body_enum_7_p_0(Context_16, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_48, STATE_VARIABLE_Info_49);
                    break;
                  case (MR_Integer) 1:
                    check_hlds__unify_proc__generate_compare_proc_body_dummy_7_p_0(Context_16, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_48, STATE_VARIABLE_Info_49);
                    break;
                  case (MR_Integer) 2:
                    check_hlds__unify_proc__generate_compare_proc_body_du_8_p_0(SpecDefnInfo_8, Var_104, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_48, STATE_VARIABLE_Info_49);
                    break;
                }
                break;
              case (MR_Integer) 1:
                check_hlds__unify_proc__generate_compare_proc_body_enum_7_p_0(Context_16, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_48, STATE_VARIABLE_Info_49);
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgType_44 = ((MR_Word) ((MR_hl_field(2, DuTypeKind_41, 1))));
                  MR_Word ArgIsDummy_46;

                  ArgIsDummy_46 = hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_14, ArgType_44);
                  switch (ArgIsDummy_46) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      check_hlds__unify_proc__generate_compare_proc_body_dummy_7_p_0(Context_16, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_48, STATE_VARIABLE_Info_49);
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word CtorRepns_47 = ((MR_Word) ((MR_hl_field(0, Repn_40, 0))));

                        check_hlds__unify_proc__generate_compare_proc_body_du_8_p_0(SpecDefnInfo_8, CtorRepns_47, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_48, STATE_VARIABLE_Info_49);
                      }
                      break;
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_60;

            Var_60 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
            check_hlds__unify_proc__generate_compare_proc_body_eqv_8_p_0(Context_16, Var_60, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_48, STATE_VARIABLE_Info_49);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word EqvType_30 = ((MR_Word) ((MR_hl_field(2, TypeBody_15, 0))));

            succeeded = parse_tree__prog_type_test__type_is_higher_order_1_p_0(EqvType_30);
            if (succeeded)
              check_hlds__unify_proc__generate_compare_proc_body_builtin_8_p_0((MR_Word) ((MR_Unsigned) 12U), Context_16, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_48, STATE_VARIABLE_Info_49);
            else
            {
              MR_Word EqvIsDummy_31;

              EqvIsDummy_31 = hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_14, EqvType_30);
              switch (EqvIsDummy_31) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  check_hlds__unify_proc__generate_compare_proc_body_dummy_7_p_0(Context_16, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_48, STATE_VARIABLE_Info_49);
                  break;
                case (MR_Integer) 1:
                  check_hlds__unify_proc__generate_compare_proc_body_eqv_8_p_0(Context_16, EqvType_30, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_48, STATE_VARIABLE_Info_49);
                  break;
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, TypeBody_15, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ModuleInfo_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_48, 0))));
                MR_Word ArgVars_117;
                MR_Word Goal_118;
                MR_Word Var_119;
                MR_Word Var_120;
                MR_Word Var_122;

                {
                  Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_120, 0) = ((MR_Box) (Y_11));
                  MR_hl_field(1, Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_119, 0) = ((MR_Box) (X_10));
                  MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_120));
                }
                {
                  ArgVars_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, ArgVars_117, 0) = ((MR_Box) (Res_9));
                  MR_hl_field(1, ArgVars_117, 1) = ((MR_Box) (Var_119));
                }
                Var_122 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_116, Var_122, (MR_String) "builtin_compare_solver_type", ArgVars_117, Context_16, &Goal_118);
                check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), ArgVars_117, Goal_118, Context_16, Clause_12, STATE_VARIABLE_Info_0_48, STATE_VARIABLE_Info_49);
              }
              break;
            case (MR_Integer) 1:
              {
                succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(ModuleInfo_14);
                if (succeeded)
                {
                  MR_Word TypeCtor_28 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_8, 4))));
                  MR_Word CtorCat_29;

                  CtorCat_29 = hlds__type_util__classify_type_ctor_2_f_0(ModuleInfo_14, TypeCtor_28);
                  check_hlds__unify_proc__generate_compare_proc_body_builtin_8_p_0(CtorCat_29, Context_16, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_48, STATE_VARIABLE_Info_49);
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body\'/7", (MR_String) "trying to create compare proc for abstract type");
                    return;
                  }
              }
              break;
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_du_8_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__IntroducedFrom__pred__generate_compare_proc_body_du__1289__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_du_8_p_0(
  MR_Word SpecDefnInfo_9,
  MR_Word CtorRepns_10,
  MR_Word Res_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_49, 0))));
  MR_Word Globals_17;
  MR_Word UCOptions_18;
  MR_Word Context_19;
  MR_Word Goal_44;
  MR_Word HeadVars_48;
  MR_Word Var_51;
  MR_Word STATE_VARIABLE_Info_2_66;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_55;
  MR_Word Var_98;
  MR_Word Var_102;
  MR_Word Var_103;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_16, &Globals_17);
  {
    Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_51, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[5]));
    MR_hl_field(0, Var_51, 1) = ((MR_Box) (check_hlds__unify_proc__generate_compare_proc_body_du_8_p_0_1));
    MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_51, 3) = ((MR_Box) (CtorRepns_10));
    MR_hl_field(0, Var_51, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_not_3_p_0(Var_51, (MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body_du\'/8", (MR_String) "compare for type with no functors");
  UCOptions_18 = check_hlds__unify_proc__lookup_unify_compare_options_1_f_0(STATE_VARIABLE_Info_0_49);
  Context_19 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_9, 7))));
  Var_55 = ((((MR_Unsigned) ((MR_hl_field(0, UCOptions_18, 0))) >> 1)) & (MR_Integer) 1);
  Var_98 = ((MR_Unsigned) ((MR_hl_field(0, UCOptions_18, 0))) & (MR_Integer) 1);
  succeeded = (Var_55 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (Var_98 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (CtorRepns_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_103 = ((MR_Word) ((MR_hl_field(1, CtorRepns_10, 0))));
        Var_102 = ((MR_Word) ((MR_hl_field(1, CtorRepns_10, 1))));
        if ((Var_102 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          uint8_t Var_21;

          succeeded = check_hlds__unify_proc__is_ctor_with_all_locally_packed_unsigned_args_2_p_0(Var_103, &Var_21);
        }
        else
        {
          MR_Word CtorRepnB_22 = ((MR_Word) ((MR_hl_field(1, Var_102, 0))));
          MR_Word ConsTagA_26;
          MR_Integer ArityA_28;
          MR_Word LocalArgsTagInfoA_30;
          MR_Word PtagA_31;
          MR_Word LocalSecTagA_32;
          uint8_t PtagBUint8_35;
          MR_Word Var_59 = ((MR_Word) ((MR_hl_field(1, Var_102, 1))));
          uint8_t Var_60;
          MR_Unsigned Var_61;
          uint8_t Var_62;

          succeeded = (Var_59 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ConsTagA_26 = ((MR_Word) ((MR_hl_field(0, Var_103, 3))));
            ArityA_28 = ((MR_Integer) ((MR_hl_field(0, Var_103, 5))));
            succeeded = (ArityA_28 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) ConsTagA_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsTagA_26, 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                LocalArgsTagInfoA_30 = ((MR_Word) ((MR_hl_field(3, ConsTagA_26, 1))));
                succeeded = (LocalArgsTagInfoA_30 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  PtagA_31 = ((MR_Word) ((MR_hl_field(1, LocalArgsTagInfoA_30, 0))));
                  LocalSecTagA_32 = ((MR_Word) ((MR_hl_field(1, LocalArgsTagInfoA_30, 1))));
                  Var_60 = (uint8_t) (PtagA_31);
                  succeeded = (Var_60 == UINT8_C(0));
                  if (succeeded)
                  {
                    Var_61 = ((MR_Unsigned) ((MR_hl_field(0, LocalSecTagA_32, 0))));
                    succeeded = (Var_61 == (MR_Unsigned) 0U);
                    if (succeeded)
                    {
                      succeeded = check_hlds__unify_proc__is_ctor_with_all_locally_packed_unsigned_args_2_p_0(CtorRepnB_22, &PtagBUint8_35);
                      if (succeeded)
                      {
                        Var_62 = UINT8_C(0);
                        succeeded = (PtagBUint8_35 > Var_62);
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
  if (succeeded)
  {
    MR_Word CastType_36;
    MR_Word CastX_37;
    MR_Word CastY_38;
    MR_Word CastXGoal_39;
    MR_Word CastYGoal_40;
    MR_Word CompareGoal_41;
    MR_Word GoalExpr_42;
    MR_Word GoalInfo_43;
    MR_Word STATE_VARIABLE_Info_1_64;
    MR_Word Var_69;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;

    CastType_36 = parse_tree__builtin_lib_types__uint_type_0_f_0();
    check_hlds__unify_proc__unify_proc_info_new_var_5_p_0((MR_String) "CastX", CastType_36, &CastX_37, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_1_64);
    check_hlds__unify_proc__unify_proc_info_new_var_5_p_0((MR_String) "CastY", CastType_36, &CastY_38, STATE_VARIABLE_Info_1_64, &STATE_VARIABLE_Info_2_66);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, X_12, CastX_37, Context_19, &CastXGoal_39);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Y_13, CastY_38, Context_19, &CastYGoal_40);
    Var_69 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_73, 0) = ((MR_Box) (CastY_38));
      MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (CastX_37));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_73));
    }
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (Res_11));
      MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_72));
    }
    check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_16, Var_69, (MR_String) "compare", Var_71, Context_19, &CompareGoal_41);
    {
      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_78, 0) = ((MR_Box) (CompareGoal_41));
      MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_77, 0) = ((MR_Box) (CastYGoal_40));
      MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_78));
    }
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = ((MR_Box) (CastXGoal_39));
      MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_77));
    }
    {
      GoalExpr_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GoalExpr_42, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, GoalExpr_42, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, GoalExpr_42, 2) = ((MR_Box) (Var_76));
    }
    hlds__hlds_goal__goal_info_init_2_p_0(Context_19, &GoalInfo_43);
    {
      Goal_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_44, 0) = ((MR_Box) (GoalExpr_42));
      MR_hl_field(0, Goal_44, 1) = ((MR_Box) (GoalInfo_43));
    }
  }
  else
  {
    MR_Integer CompareSpec_45;
    MR_Integer NumCtors_46;
    MR_Word Goal0_47;
    MR_Word STATE_VARIABLE_Info_3_81;
    MR_Word Var_83;

    libs__globals__lookup_int_option_3_p_0(Globals_17, (MR_Integer) 784, &CompareSpec_45);
    mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), CtorRepns_10, &NumCtors_46);
    succeeded = (NumCtors_46 <= CompareSpec_45);
    if (succeeded)
      check_hlds__unify_proc__generate_compare_proc_body_du_quad_9_p_0(SpecDefnInfo_9, UCOptions_18, CtorRepns_10, Res_11, X_12, Y_13, &Goal0_47, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_3_81);
    else
      check_hlds__unify_proc__generate_compare_proc_body_du_linear_9_p_0(SpecDefnInfo_9, UCOptions_18, CtorRepns_10, Res_11, X_12, Y_13, &Goal0_47, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_3_81);
    {
      Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_83, 0) = ((MR_Box) (Res_11));
    }
    check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_19, X_12, Y_13, Var_83, Goal0_47, &Goal_44, STATE_VARIABLE_Info_3_81, &STATE_VARIABLE_Info_2_66);
  }
  {
    Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_86, 0) = ((MR_Box) (Y_13));
    MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (X_12));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_86));
  }
  {
    HeadVars_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVars_48, 0) = ((MR_Box) (Res_11));
    MR_hl_field(1, HeadVars_48, 1) = ((MR_Box) (Var_85));
  }
  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), HeadVars_48, Goal_44, Context_19, Clause_14, STATE_VARIABLE_Info_2_66, STATE_VARIABLE_Info_50);
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_du_linear_9_p_0(
  MR_Word SpecDefnInfo_10,
  MR_Word UCOptions_11,
  MR_Word CtorRepns_12,
  MR_Word Res_13,
  MR_Word X_14,
  MR_Word Y_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_56,
  MR_Word * STATE_VARIABLE_Info_57)
{
  MR_Word IntType_18;
  MR_Word IndexX_19;
  MR_Word IndexY_20;
  MR_Word R_21;
  MR_Word Context_22;
  MR_Word GoalInfo_23;
  MR_Word TVarSet_26;
  MR_Word Type_27;
  MR_Word TypeCtor_28;
  MR_Word TypeBody_29;
  MR_Word TypeStatus0_30;
  MR_Word ModuleInfo0_31;
  MR_Word ModuleInfo_32;
  MR_Word X_InstmapDelta_33;
  MR_Word GoalIndexX_34;
  MR_Word Y_InstmapDelta_35;
  MR_Word GoalIndexY_36;
  MR_Word GoalCallLessThan_37;
  MR_Word GoalCallGreaterThan_38;
  MR_Word GoalReturnLessThan_39;
  MR_Word GoalReturnGreaterThan_40;
  MR_Word ReturnResultGoal_41;
  MR_Word EqConsIds_42;
  MR_Word NonEqCases_43;
  MR_Word SortedEqConsIds_44;
  MR_Word Cases_45;
  MR_Word SortedCases_50;
  MR_Word CasesGoal_51;
  MR_Word AbortGoal_52;
  MR_Word HandleEqualGoal_53;
  MR_Word HandleGreaterEqualGoal_54;
  MR_Word HandleLessGreaterEqualGoal_55;
  MR_Word STATE_VARIABLE_Info_1_59;
  MR_Word STATE_VARIABLE_Info_2_61;
  MR_Word Var_63;
  MR_Word STATE_VARIABLE_Info_3_64;
  MR_Word STATE_VARIABLE_Info_4_66;
  MR_Word Var_68;
  MR_Word Var_70;
  MR_Word Var_73;
  MR_Word Var_75;
  MR_Word Var_77;
  MR_Word Var_79;
  MR_Word Var_82;
  MR_Word Var_87;
  MR_Word Var_89;
  MR_Word Var_91;
  MR_Word Var_97;
  MR_Word Var_99;
  MR_Word Var_102;
  MR_Word Var_104;
  MR_Word Var_106;
  MR_Word Var_108;
  MR_Word Var_110;
  MR_Word Var_111;
  MR_Word Var_112;

  IntType_18 = parse_tree__builtin_lib_types__int_type_0_f_0();
  check_hlds__unify_proc__unify_proc_info_new_var_5_p_0((MR_String) "IndexX", IntType_18, &IndexX_19, STATE_VARIABLE_Info_0_56, &STATE_VARIABLE_Info_1_59);
  check_hlds__unify_proc__unify_proc_info_new_var_5_p_0((MR_String) "IndexY", IntType_18, &IndexY_20, STATE_VARIABLE_Info_1_59, &STATE_VARIABLE_Info_2_61);
  Var_63 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
  check_hlds__unify_proc__unify_proc_info_new_var_5_p_0((MR_String) "CompareResult", Var_63, &R_21, STATE_VARIABLE_Info_2_61, &STATE_VARIABLE_Info_3_64);
  TVarSet_26 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_10, 2))));
  Type_27 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_10, 3))));
  TypeCtor_28 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_10, 4))));
  TypeBody_29 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_10, 5))));
  TypeStatus0_30 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_10, 6))));
  Context_22 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_10, 7))));
  hlds__hlds_goal__goal_info_init_2_p_0(Context_22, &GoalInfo_23);
  check_hlds__unify_proc__unify_proc_info_get_module_info_2_p_0(STATE_VARIABLE_Info_3_64, &ModuleInfo0_31);
  hlds__add_special_pred__add_special_pred_decl_defn_9_p_0((MR_Integer) 1, TVarSet_26, Type_27, TypeCtor_28, TypeBody_29, TypeStatus0_30, Context_22, ModuleInfo0_31, &ModuleInfo_32);
  check_hlds__unify_proc__unify_proc_info_set_module_info_3_p_0(ModuleInfo_32, STATE_VARIABLE_Info_3_64, &STATE_VARIABLE_Info_4_66);
  X_InstmapDelta_33 = hlds__instmap__instmap_delta_bind_var_1_f_0(IndexX_19);
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (IndexX_19));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (X_14));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_70));
  }
  check_hlds__unify_proc__build_spec_pred_call_8_p_0(STATE_VARIABLE_Info_4_66, TypeCtor_28, (MR_Integer) 1, Var_68, X_InstmapDelta_33, (MR_Integer) 0, Context_22, &GoalIndexX_34);
  Y_InstmapDelta_35 = hlds__instmap__instmap_delta_bind_var_1_f_0(IndexY_20);
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (IndexY_20));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (Y_15));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_75));
  }
  check_hlds__unify_proc__build_spec_pred_call_8_p_0(STATE_VARIABLE_Info_4_66, TypeCtor_28, (MR_Integer) 1, Var_73, Y_InstmapDelta_35, (MR_Integer) 0, Context_22, &GoalIndexY_36);
  Var_77 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (IndexX_19));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_75));
  }
  check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_32, Var_77, (MR_String) "builtin_int_lt", Var_79, Context_22, &GoalCallLessThan_37);
  Var_82 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_32, Var_82, (MR_String) "builtin_int_gt", Var_79, Context_22, &GoalCallGreaterThan_38);
  Var_87 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) "<");
  hlds__make_goal__make_const_construction_4_p_0(Context_22, Res_13, Var_87, &GoalReturnLessThan_39);
  Var_89 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) ">");
  hlds__make_goal__make_const_construction_4_p_0(Context_22, Res_13, Var_89, &GoalReturnGreaterThan_40);
  {
    Var_91 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_91, 0) = ((MR_Box) (R_21));
  }
  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Res_13, Var_91, Context_22, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &ReturnResultGoal_41);
  check_hlds__unify_proc__generate_compare_du_linear_cases_12_p_0(SpecDefnInfo_10, UCOptions_11, CtorRepns_12, R_21, X_14, Y_15, (MR_Word) ((MR_Unsigned) 0U), &EqConsIds_42, (MR_Word) ((MR_Unsigned) 0U), &NonEqCases_43, STATE_VARIABLE_Info_4_66, STATE_VARIABLE_Info_57);
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), EqConsIds_42, &SortedEqConsIds_44);
  if ((SortedEqConsIds_44 == (MR_Word) ((MR_Unsigned) 0U)))
    Cases_45 = NonEqCases_43;
  else
  {
    MR_Word HeadEqConsId_46 = ((MR_Word) ((MR_hl_field(1, SortedEqConsIds_44, 0))));
    MR_Word TailEqConsIds_47 = ((MR_Word) ((MR_hl_field(1, SortedEqConsIds_44, 1))));
    MR_Word EqGoal_48;
    MR_Word EqCase_49;

    check_hlds__unify_proc__generate_return_equal_3_p_0(R_21, Context_22, &EqGoal_48);
    {
      EqCase_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, EqCase_49, 0) = ((MR_Box) (HeadEqConsId_46));
      MR_hl_field(0, EqCase_49, 1) = ((MR_Box) (TailEqConsIds_47));
      MR_hl_field(0, EqCase_49, 2) = ((MR_Box) (EqGoal_48));
    }
    {
      Cases_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Cases_45, 0) = ((MR_Box) (EqCase_49));
      MR_hl_field(1, Cases_45, 1) = ((MR_Box) (NonEqCases_43));
    }
  }
  mercury__list__sort_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Cases_45, &SortedCases_50);
  {
    Var_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_97, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_97, 1) = ((MR_Box) (X_14));
    MR_hl_field(3, Var_97, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, Var_97, 3) = ((MR_Box) (SortedCases_50));
  }
  {
    CasesGoal_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CasesGoal_51, 0) = ((MR_Box) (Var_97));
    MR_hl_field(0, CasesGoal_51, 1) = ((MR_Box) (GoalInfo_23));
  }
  Var_99 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_32, Var_99, (MR_String) "compare_error", (MR_Word) ((MR_Unsigned) 0U), Context_22, &AbortGoal_52);
  {
    Var_102 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_102, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_102, 2) = ((MR_Box) (CasesGoal_51));
    MR_hl_field(3, Var_102, 3) = ((MR_Box) (ReturnResultGoal_41));
    MR_hl_field(3, Var_102, 4) = ((MR_Box) (AbortGoal_52));
  }
  {
    HandleEqualGoal_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HandleEqualGoal_53, 0) = ((MR_Box) (Var_102));
    MR_hl_field(0, HandleEqualGoal_53, 1) = ((MR_Box) (GoalInfo_23));
  }
  {
    Var_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_104, 2) = ((MR_Box) (GoalCallGreaterThan_38));
    MR_hl_field(3, Var_104, 3) = ((MR_Box) (GoalReturnGreaterThan_40));
    MR_hl_field(3, Var_104, 4) = ((MR_Box) (HandleEqualGoal_53));
  }
  {
    HandleGreaterEqualGoal_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HandleGreaterEqualGoal_54, 0) = ((MR_Box) (Var_104));
    MR_hl_field(0, HandleGreaterEqualGoal_54, 1) = ((MR_Box) (GoalInfo_23));
  }
  {
    Var_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_106, 2) = ((MR_Box) (GoalCallLessThan_37));
    MR_hl_field(3, Var_106, 3) = ((MR_Box) (GoalReturnLessThan_39));
    MR_hl_field(3, Var_106, 4) = ((MR_Box) (HandleGreaterEqualGoal_54));
  }
  {
    HandleLessGreaterEqualGoal_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HandleLessGreaterEqualGoal_55, 0) = ((MR_Box) (Var_106));
    MR_hl_field(0, HandleLessGreaterEqualGoal_55, 1) = ((MR_Box) (GoalInfo_23));
  }
  {
    Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_112, 0) = ((MR_Box) (HandleLessGreaterEqualGoal_55));
    MR_hl_field(1, Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_111, 0) = ((MR_Box) (GoalIndexY_36));
    MR_hl_field(1, Var_111, 1) = ((MR_Box) (Var_112));
  }
  {
    Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_110, 0) = ((MR_Box) (GoalIndexX_34));
    MR_hl_field(1, Var_110, 1) = ((MR_Box) (Var_111));
  }
  {
    Var_108 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_108, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_108, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_108, 2) = ((MR_Box) (Var_110));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_108));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_23));
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_proc_info_set_module_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 2))));
  MR_Word Var_11 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, 3))) & (MR_Integer) 1);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_11));
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_proc_info_get_module_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 0))));
}

static MR_Word MR_CALL 
check_hlds__unify_proc__compare_cons_id_1_f_0(
  MR_String Name_3)
{
  MR_Word ConsId_4;
  MR_Word SymName_5;
  MR_Word DuCtor_6;
  MR_Word Var_7;
  MR_Word Var_9;
  MR_Word Builtin_10;
  MR_Word Var_11;

  Var_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    SymName_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_5, 0) = ((MR_Box) (Var_7));
    MR_hl_field(1, SymName_5, 1) = ((MR_Box) (Name_3));
  }
  Builtin_10 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (Builtin_10));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) ((MR_String) "comparison_result"));
  }
  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    DuCtor_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DuCtor_6, 0) = ((MR_Box) (SymName_5));
    MR_hl_field(0, DuCtor_6, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, DuCtor_6, 2) = ((MR_Box) (Var_9));
  }
  ConsId_4 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_6)));
  return ConsId_4;
}

static void MR_CALL 
check_hlds__unify_proc__build_spec_pred_call_8_p_0(
  MR_Word Info_9,
  MR_Word TypeCtor_10,
  MR_Word SpecialPredId_11,
  MR_Word ArgVars_12,
  MR_Word InstmapDelta_13,
  MR_Word Detism_14,
  MR_Word Context_15,
  MR_Word * Goal_16)
{
  MR_Word ModuleInfo_17 = ((MR_Word) ((MR_hl_field(0, Info_9, 0))));
  MR_Word PredName_18;
  MR_Word PredId_19;
  MR_Integer ProcId_20;
  MR_Word GoalExpr_21;
  MR_Word NonLocals_22;
  MR_Word GoalInfo0_23;
  MR_Word GoalInfo_24;

  hlds__special_pred__get_special_proc_det_6_p_0(ModuleInfo_17, TypeCtor_10, SpecialPredId_11, &PredName_18, &PredId_19, &ProcId_20);
  {
    GoalExpr_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, GoalExpr_21, 0) = ((MR_Box) (PredId_19));
    MR_hl_field(2, GoalExpr_21, 1) = ((MR_Box) (ProcId_20));
    MR_hl_field(2, GoalExpr_21, 2) = ((MR_Box) (ArgVars_12));
    MR_hl_field(2, GoalExpr_21, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, GoalExpr_21, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, GoalExpr_21, 5) = ((MR_Box) (PredName_18));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_12, &NonLocals_22);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_22, InstmapDelta_13, Detism_14, (MR_Integer) 0, &GoalInfo0_23);
  hlds__hlds_goal__goal_info_set_context_3_p_0(Context_15, GoalInfo0_23, &GoalInfo_24);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_24));
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_linear_cases_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_EqConsIds_0_7,
  MR_Word * STATE_VARIABLE_EqConsIds_8,
  MR_Word STATE_VARIABLE_Cases_0_9,
  MR_Word * STATE_VARIABLE_Cases_10,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_0_11;
      *STATE_VARIABLE_Cases_10 = STATE_VARIABLE_Cases_0_9;
      *STATE_VARIABLE_EqConsIds_8 = STATE_VARIABLE_EqConsIds_0_7;
    }
    else
    {
      MR_Word CtorRepn_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word CtorRepns_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word FunctorName_39 = ((MR_Word) ((MR_hl_field(0, CtorRepn_29, 2))));
      MR_Word ArgRepns_41 = ((MR_Word) ((MR_hl_field(0, CtorRepn_29, 4))));
      MR_Integer FunctorArity_42 = ((MR_Integer) ((MR_hl_field(0, CtorRepn_29, 5))));
      MR_Word STATE_VARIABLE_EqConsIds_1_57;
      MR_Word STATE_VARIABLE_Info_1_59;
      MR_Word STATE_VARIABLE_Cases_1_61;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_EqConsIds_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Cases_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_11;

      if ((ArgRepns_41 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeCtor_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
        MR_Word ConsId_45;
        MR_Word Var_56;

        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_56, 0) = ((MR_Box) (FunctorName_39));
          MR_hl_field(0, Var_56, 1) = ((MR_Box) (FunctorArity_42));
          MR_hl_field(0, Var_56, 2) = ((MR_Box) (TypeCtor_44));
        }
        ConsId_45 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_56)));
        {
          STATE_VARIABLE_EqConsIds_1_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_EqConsIds_1_57, 0) = ((MR_Box) (ConsId_45));
          MR_hl_field(1, STATE_VARIABLE_EqConsIds_1_57, 1) = ((MR_Box) (STATE_VARIABLE_EqConsIds_0_7));
        }
        STATE_VARIABLE_Cases_1_61 = STATE_VARIABLE_Cases_0_9;
        STATE_VARIABLE_Info_1_59 = STATE_VARIABLE_Info_0_11;
      }
      else
      {
        MR_Word Goal_48;
        MR_Word Case_49;
        MR_Word ConsId_65;

        check_hlds__unify_proc__generate_compare_goal_11_p_0(HeadVar__1_1, HeadVar__2_2, (MR_Integer) 1, CtorRepn_29, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, &ConsId_65, &Goal_48, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_1_59);
        {
          Case_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Case_49, 0) = ((MR_Box) (ConsId_65));
          MR_hl_field(0, Case_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Case_49, 2) = ((MR_Box) (Goal_48));
        }
        {
          STATE_VARIABLE_Cases_1_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Cases_1_61, 0) = ((MR_Box) (Case_49));
          MR_hl_field(1, STATE_VARIABLE_Cases_1_61, 1) = ((MR_Box) (STATE_VARIABLE_Cases_0_9));
        }
        STATE_VARIABLE_EqConsIds_1_57 = STATE_VARIABLE_EqConsIds_0_7;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = CtorRepns_30;
      next_value_of_STATE_VARIABLE_EqConsIds_0_7 = STATE_VARIABLE_EqConsIds_1_57;
      next_value_of_STATE_VARIABLE_Cases_0_9 = STATE_VARIABLE_Cases_1_61;
      next_value_of_STATE_VARIABLE_Info_0_11 = STATE_VARIABLE_Info_1_59;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_EqConsIds_0_7 = next_value_of_STATE_VARIABLE_EqConsIds_0_7;
      STATE_VARIABLE_Cases_0_9 = next_value_of_STATE_VARIABLE_Cases_0_9;
      STATE_VARIABLE_Info_0_11 = next_value_of_STATE_VARIABLE_Info_0_11;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_du_quad_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_ConsId_6;

  conv0_ConsId_6 = check_hlds__unify_proc__ctor_repn_to_cons_id_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_ConsId_6));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_du_quad_9_p_0(
  MR_Word SpecDefnInfo_10,
  MR_Word UCOptions_11,
  MR_Word CtorRepns_12,
  MR_Word R_13,
  MR_Word X_14,
  MR_Word Y_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  if ((CtorRepns_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body_du_quad\'/9", (MR_String) "CtorRepns = []");
      return;
    }
  else
  {
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(1, CtorRepns_12, 1))));
    MR_Word Var_71 = ((MR_Word) ((MR_hl_field(1, CtorRepns_12, 0))));

    if ((Var_70 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word _ConsId_19;

      check_hlds__unify_proc__generate_compare_goal_11_p_0(SpecDefnInfo_10, UCOptions_11, (MR_Integer) 1, Var_71, R_13, X_14, Y_15, &_ConsId_19, Goal_16, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
    }
    else
    {
      MR_Word Context_23 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_10, 7))));
      MR_Word ReturnLt_24;
      MR_Word ReturnEq_25;
      MR_Word ReturnGt_26;
      MR_Word TypeCtor_27;
      MR_Word ConsIds_28;
      MR_Word ConsIdSet_29;
      MR_Word Cases_30;
      MR_Word GoalExpr_31;
      MR_Word GoalInfo_32;
      MR_Word Var_41;
      MR_Word Var_43;
      MR_Word Var_45;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word SymName_72;
      MR_Word DuCtor_73;
      MR_Word Var_74;
      MR_Word Var_76;
      MR_Word Builtin_77;
      MR_Word Var_78;
      MR_Word SymName_81;
      MR_Word DuCtor_82;
      MR_Word Var_83;
      MR_Word Var_85;
      MR_Word Builtin_86;
      MR_Word Var_87;
      MR_Word SymName_90;
      MR_Word DuCtor_91;
      MR_Word Var_92;
      MR_Word Var_94;
      MR_Word Builtin_95;
      MR_Word Var_96;

      Var_74 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      {
        SymName_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SymName_72, 0) = ((MR_Box) (Var_74));
        MR_hl_field(1, SymName_72, 1) = ((MR_Box) ((MR_String) "<"));
      }
      Builtin_77 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      {
        Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_78, 0) = ((MR_Box) (Builtin_77));
        MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_String) "comparison_result"));
      }
      {
        Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_76, 0) = ((MR_Box) (Var_78));
        MR_hl_field(0, Var_76, 1) = ((MR_Box) ((MR_Integer) 0));
      }
      {
        DuCtor_73 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DuCtor_73, 0) = ((MR_Box) (SymName_72));
        MR_hl_field(0, DuCtor_73, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, DuCtor_73, 2) = ((MR_Box) (Var_76));
      }
      Var_41 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_73)));
      hlds__make_goal__make_const_construction_4_p_0(Context_23, R_13, Var_41, &ReturnLt_24);
      Var_83 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      {
        SymName_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SymName_81, 0) = ((MR_Box) (Var_83));
        MR_hl_field(1, SymName_81, 1) = ((MR_Box) ((MR_String) "="));
      }
      Builtin_86 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      {
        Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_87, 0) = ((MR_Box) (Builtin_86));
        MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_String) "comparison_result"));
      }
      {
        Var_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_85, 0) = ((MR_Box) (Var_87));
        MR_hl_field(0, Var_85, 1) = ((MR_Box) ((MR_Integer) 0));
      }
      {
        DuCtor_82 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DuCtor_82, 0) = ((MR_Box) (SymName_81));
        MR_hl_field(0, DuCtor_82, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, DuCtor_82, 2) = ((MR_Box) (Var_85));
      }
      Var_43 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_82)));
      hlds__make_goal__make_const_construction_4_p_0(Context_23, R_13, Var_43, &ReturnEq_25);
      Var_92 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      {
        SymName_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SymName_90, 0) = ((MR_Box) (Var_92));
        MR_hl_field(1, SymName_90, 1) = ((MR_Box) ((MR_String) ">"));
      }
      Builtin_95 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      {
        Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_96, 0) = ((MR_Box) (Builtin_95));
        MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_String) "comparison_result"));
      }
      {
        Var_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_94, 0) = ((MR_Box) (Var_96));
        MR_hl_field(0, Var_94, 1) = ((MR_Box) ((MR_Integer) 0));
      }
      {
        DuCtor_91 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DuCtor_91, 0) = ((MR_Box) (SymName_90));
        MR_hl_field(0, DuCtor_91, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, DuCtor_91, 2) = ((MR_Box) (Var_94));
      }
      Var_45 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_91)));
      hlds__make_goal__make_const_construction_4_p_0(Context_23, R_13, Var_45, &ReturnGt_26);
      TypeCtor_27 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_10, 4))));
      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_47, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_8[0]));
        MR_hl_field(0, Var_47, 1) = ((MR_Box) (check_hlds__unify_proc__generate_compare_proc_body_du_quad_9_p_0_1));
        MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_47, 3) = ((MR_Box) (TypeCtor_27));
      }
      ConsIds_28 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), Var_47, CtorRepns_12);
      ConsIdSet_29 = mercury__set_tree234__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ConsIds_28);
      Var_48 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0));
      check_hlds__unify_proc__generate_compare_du_quad_outer_switch_arms_15_p_0(SpecDefnInfo_10, UCOptions_11, CtorRepns_12, R_13, X_14, Y_15, ReturnLt_24, ReturnEq_25, ReturnGt_26, Var_48, ConsIdSet_29, (MR_Word) ((MR_Unsigned) 0U), &Cases_30, STATE_VARIABLE_Info_0_33, STATE_VARIABLE_Info_34);
      {
        GoalExpr_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, GoalExpr_31, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, GoalExpr_31, 1) = ((MR_Box) (X_14));
        MR_hl_field(3, GoalExpr_31, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(3, GoalExpr_31, 3) = ((MR_Box) (Cases_30));
      }
      hlds__hlds_goal__goal_info_init_2_p_0(Context_23, &GoalInfo_32);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Goal_16 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_31));
        MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_32));
      }
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_quad_outer_switch_arms_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word HeadVar__8_8,
  MR_Word HeadVar__9_9,
  MR_Word HeadVar__10_10,
  MR_Word HeadVar__11_11,
  MR_Word STATE_VARIABLE_Cases_0_12,
  MR_Word * STATE_VARIABLE_Cases_13,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_15 = STATE_VARIABLE_Info_0_14;
      *STATE_VARIABLE_Cases_13 = STATE_VARIABLE_Cases_0_12;
    }
    else
    {
      MR_Word CtorRepn_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word CtorRepns_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word TypeCtor_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
      MR_Word CtorRepnConsId_47;
      MR_Integer CtorArity_48;
      MR_Word EqGoal_49;
      MR_Word EqCase_51;
      MR_Word LtConsIds_52;
      MR_Word GtConsIds_54;
      MR_Word LtCases_55;
      MR_Word GtCases_59;
      MR_Word InnerSwitchCases_63;
      MR_Word InnerSwitchGoalExpr_64;
      MR_Word Context_65;
      MR_Word InnerSwitchGoalInfo_66;
      MR_Word InnerSwitchGoal_67;
      MR_Word Case_68;
      MR_Word STATE_VARIABLE_Info_1_76;
      MR_Word Var_80;
      MR_Word STATE_VARIABLE_Cases_1_83;
      MR_Word STATE_VARIABLE_ConsIdsLt_1_84;
      MR_Word STATE_VARIABLE_ConsIdsEqGt_1_85;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__10_10;
      MR_Word next_value_of_HeadVar__11_11;
      MR_Word next_value_of_STATE_VARIABLE_Cases_0_12;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_14;

      CtorRepnConsId_47 = check_hlds__unify_proc__ctor_repn_to_cons_id_2_f_0(TypeCtor_46, CtorRepn_34);
      CtorArity_48 = ((MR_Integer) ((MR_hl_field(0, CtorRepn_34, 5))));
      succeeded = (CtorArity_48 == (MR_Integer) 0);
      if (succeeded)
      {
        EqGoal_49 = HeadVar__8_8;
        STATE_VARIABLE_Info_1_76 = STATE_VARIABLE_Info_0_14;
      }
      else
      {
        MR_Word _ConsId_50;

        check_hlds__unify_proc__generate_compare_goal_11_p_0(HeadVar__1_1, HeadVar__2_2, (MR_Integer) 0, CtorRepn_34, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, &_ConsId_50, &EqGoal_49, STATE_VARIABLE_Info_0_14, &STATE_VARIABLE_Info_1_76);
      }
      {
        EqCase_51 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, EqCase_51, 0) = ((MR_Box) (CtorRepnConsId_47));
        MR_hl_field(0, EqCase_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, EqCase_51, 2) = ((MR_Box) (EqGoal_49));
      }
      LtConsIds_52 = mercury__set_tree234__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), HeadVar__10_10);
      mercury__set_tree234__det_remove_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ((MR_Box) (CtorRepnConsId_47)), HeadVar__11_11, &STATE_VARIABLE_ConsIdsEqGt_1_85);
      GtConsIds_54 = mercury__set_tree234__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), STATE_VARIABLE_ConsIdsEqGt_1_85);
      if ((LtConsIds_52 == (MR_Word) ((MR_Unsigned) 0U)))
        LtCases_55 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word HeadLtConsId_56 = ((MR_Word) ((MR_hl_field(1, LtConsIds_52, 0))));
        MR_Word TailLtConsIds_57 = ((MR_Word) ((MR_hl_field(1, LtConsIds_52, 1))));
        MR_Word LtCase_58;

        {
          LtCase_58 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, LtCase_58, 0) = ((MR_Box) (HeadLtConsId_56));
          MR_hl_field(0, LtCase_58, 1) = ((MR_Box) (TailLtConsIds_57));
          MR_hl_field(0, LtCase_58, 2) = ((MR_Box) (HeadVar__9_9));
        }
        {
          LtCases_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, LtCases_55, 0) = ((MR_Box) (LtCase_58));
          MR_hl_field(1, LtCases_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      if ((GtConsIds_54 == (MR_Word) ((MR_Unsigned) 0U)))
        GtCases_59 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word HeadGtConsId_60 = ((MR_Word) ((MR_hl_field(1, GtConsIds_54, 0))));
        MR_Word TailGtConsIds_61 = ((MR_Word) ((MR_hl_field(1, GtConsIds_54, 1))));
        MR_Word GtCase_62;

        {
          GtCase_62 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, GtCase_62, 0) = ((MR_Box) (HeadGtConsId_60));
          MR_hl_field(0, GtCase_62, 1) = ((MR_Box) (TailGtConsIds_61));
          MR_hl_field(0, GtCase_62, 2) = ((MR_Box) (HeadVar__7_7));
        }
        {
          GtCases_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, GtCases_59, 0) = ((MR_Box) (GtCase_62));
          MR_hl_field(1, GtCases_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      {
        Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_80, 0) = ((MR_Box) (EqCase_51));
        MR_hl_field(1, Var_80, 1) = ((MR_Box) (GtCases_59));
      }
      InnerSwitchCases_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), LtCases_55, Var_80);
      {
        InnerSwitchGoalExpr_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, InnerSwitchGoalExpr_64, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, InnerSwitchGoalExpr_64, 1) = ((MR_Box) (HeadVar__6_6));
        MR_hl_field(3, InnerSwitchGoalExpr_64, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(3, InnerSwitchGoalExpr_64, 3) = ((MR_Box) (InnerSwitchCases_63));
      }
      Context_65 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
      hlds__hlds_goal__goal_info_init_2_p_0(Context_65, &InnerSwitchGoalInfo_66);
      {
        InnerSwitchGoal_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, InnerSwitchGoal_67, 0) = ((MR_Box) (InnerSwitchGoalExpr_64));
        MR_hl_field(0, InnerSwitchGoal_67, 1) = ((MR_Box) (InnerSwitchGoalInfo_66));
      }
      {
        Case_68 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Case_68, 0) = ((MR_Box) (CtorRepnConsId_47));
        MR_hl_field(0, Case_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Case_68, 2) = ((MR_Box) (InnerSwitchGoal_67));
      }
      {
        STATE_VARIABLE_Cases_1_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Cases_1_83, 0) = ((MR_Box) (Case_68));
        MR_hl_field(1, STATE_VARIABLE_Cases_1_83, 1) = ((MR_Box) (STATE_VARIABLE_Cases_0_12));
      }
      mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ((MR_Box) (CtorRepnConsId_47)), HeadVar__10_10, &STATE_VARIABLE_ConsIdsLt_1_84);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = CtorRepns_35;
      next_value_of_HeadVar__10_10 = STATE_VARIABLE_ConsIdsLt_1_84;
      next_value_of_HeadVar__11_11 = STATE_VARIABLE_ConsIdsEqGt_1_85;
      next_value_of_STATE_VARIABLE_Cases_0_12 = STATE_VARIABLE_Cases_1_83;
      next_value_of_STATE_VARIABLE_Info_0_14 = STATE_VARIABLE_Info_1_76;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__10_10 = next_value_of_HeadVar__10_10;
      HeadVar__11_11 = next_value_of_HeadVar__11_11;
      STATE_VARIABLE_Cases_0_12 = next_value_of_STATE_VARIABLE_Cases_0_12;
      STATE_VARIABLE_Info_0_14 = next_value_of_STATE_VARIABLE_Info_0_14;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_goal_11_p_0(
  MR_Word SpecDefnInfo_12,
  MR_Word UCOptions_13,
  MR_Word ConsIdsMatch_14,
  MR_Word CtorRepn_15,
  MR_Word R_16,
  MR_Word X_17,
  MR_Word Y_18,
  MR_Word * FunctorConsId_19,
  MR_Word * Goal_20,
  MR_Word STATE_VARIABLE_Info_0_52,
  MR_Word * STATE_VARIABLE_Info_53)
{
  MR_Word MaybeExistConstraints_23 = ((MR_Word) ((MR_hl_field(0, CtorRepn_15, 1))));
  MR_Word FunctorName_24 = ((MR_Word) ((MR_hl_field(0, CtorRepn_15, 2))));
  MR_Word ConsTag_25 = ((MR_Word) ((MR_hl_field(0, CtorRepn_15, 3))));
  MR_Word ArgRepns_26 = ((MR_Word) ((MR_hl_field(0, CtorRepn_15, 4))));
  MR_Integer FunctorArity_27 = ((MR_Integer) ((MR_hl_field(0, CtorRepn_15, 5))));
  MR_Word TypeCtor_29 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_12, 4))));
  MR_Word Context_30 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_12, 7))));
  MR_Word GoalList_34;
  MR_Word GoalInfo0_50;
  MR_Word GoalInfo_51;
  MR_Word Var_54;

  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (FunctorName_24));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (FunctorArity_27));
    MR_hl_field(0, Var_54, 2) = ((MR_Box) (TypeCtor_29));
  }
  *FunctorConsId_19 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_54)));
  if ((ArgRepns_26 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word RHS_31;
    MR_Word GoalUnifyX_32;
    MR_Word EqualGoal_33;
    MR_Word Var_98;
    MR_Word SymName_100;
    MR_Word DuCtor_101;
    MR_Word Var_102;
    MR_Word Var_104;
    MR_Word Builtin_105;
    MR_Word Var_106;

    {
      RHS_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RHS_31, 0) = ((MR_Box) (*FunctorConsId_19));
      MR_hl_field(1, RHS_31, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, RHS_31, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_17, RHS_31, Context_30, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyX_32);
    Var_102 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      SymName_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SymName_100, 0) = ((MR_Box) (Var_102));
      MR_hl_field(1, SymName_100, 1) = ((MR_Box) ((MR_String) "="));
    }
    Builtin_105 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_106, 0) = ((MR_Box) (Builtin_105));
      MR_hl_field(1, Var_106, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_104, 0) = ((MR_Box) (Var_106));
      MR_hl_field(0, Var_104, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      DuCtor_101 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DuCtor_101, 0) = ((MR_Box) (SymName_100));
      MR_hl_field(0, DuCtor_101, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(0, DuCtor_101, 2) = ((MR_Box) (Var_104));
    }
    Var_98 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_101)));
    hlds__make_goal__make_const_construction_4_p_0(Context_30, R_16, Var_98, &EqualGoal_33);
    switch (ConsIdsMatch_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_59;

          {
            Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_59, 0) = ((MR_Box) (EqualGoal_33));
            MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            GoalList_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, GoalList_34, 0) = ((MR_Box) (GoalUnifyX_32));
            MR_hl_field(1, GoalList_34, 1) = ((MR_Box) (Var_59));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word GoalUnifyY_35;
          MR_Word Var_63;
          MR_Word Var_64;

          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Y_18, RHS_31, Context_30, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyY_35);
          {
            Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_64, 0) = ((MR_Box) (EqualGoal_33));
            MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_63, 0) = ((MR_Box) (GoalUnifyY_35));
            MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
          }
          {
            GoalList_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, GoalList_34, 0) = ((MR_Box) (GoalUnifyX_32));
            MR_hl_field(1, GoalList_34, 1) = ((MR_Box) (Var_63));
          }
        }
        break;
    }
    *STATE_VARIABLE_Info_53 = STATE_VARIABLE_Info_0_52;
  }
  else
  {
    MR_Word ExistQTVars_38;
    MR_Word GiveVarsTypes_39;
    MR_Word MaybePackableArgsLocn_40;
    MR_Word ModuleInfo_41;
    MR_Word UCParams_42;
    MR_Word VarTable0_43;
    MR_Word TermType_44;
    MR_Word CompareArgsGoal_45;
    MR_Word VarsX_46;
    MR_Word VarsY_47;
    MR_Word RHSX_48;
    MR_Word RHSY_49;
    MR_Word Var_66;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word GoalUnifyX_80;
    MR_Word GoalUnifyY_81;
    MR_Word Var_96;

    check_hlds__unify_proc__compute_exist_constraint_implications_3_p_0(MaybeExistConstraints_23, &ExistQTVars_38, &GiveVarsTypes_39);
    MaybePackableArgsLocn_40 = check_hlds__unify_proc__compute_maybe_packable_args_locn_1_f_0(ConsTag_25);
    ModuleInfo_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_52, 0))));
    Var_66 = ((((MR_Unsigned) ((MR_hl_field(0, UCOptions_13, 0))) >> 1)) & (MR_Integer) 1);
    Var_96 = ((MR_Unsigned) ((MR_hl_field(0, UCOptions_13, 0))) & (MR_Integer) 1);
    {
      UCParams_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UCParams_42, 0) = ((MR_Box) (ModuleInfo_41));
      MR_hl_field(0, UCParams_42, 1) = ((MR_Box) (Context_30));
      MR_hl_field(0, UCParams_42, 2) = ((MR_Box) (ExistQTVars_38));
      MR_hl_field(0, UCParams_42, 3) = ((MR_Box) (MaybePackableArgsLocn_40));
      MR_hl_field(0, UCParams_42, 4) = (MR_Box) (((((MR_Unsigned) (GiveVarsTypes_39) << 2)) | (((((MR_Unsigned) (Var_66) << 1)) | (MR_Unsigned) (Var_96)))));
    }
    check_hlds__unify_proc__unify_proc_info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_52, &VarTable0_43);
    parse_tree__var_table__lookup_var_type_3_p_0(VarTable0_43, X_17, &TermType_44);
    check_hlds__unify_proc__generate_arg_compare_goals_13_p_0(UCParams_42, TermType_44, X_17, Y_18, R_16, (MR_Integer) 1, (MR_Integer) 1, ArgRepns_26, &CompareArgsGoal_45, &VarsX_46, &VarsY_47, STATE_VARIABLE_Info_0_52, STATE_VARIABLE_Info_53);
    {
      RHSX_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RHSX_48, 0) = ((MR_Box) (*FunctorConsId_19));
      MR_hl_field(1, RHSX_48, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, RHSX_48, 2) = ((MR_Box) (VarsX_46));
    }
    {
      RHSY_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RHSY_49, 0) = ((MR_Box) (*FunctorConsId_19));
      MR_hl_field(1, RHSY_49, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, RHSY_49, 2) = ((MR_Box) (VarsY_47));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_17, RHSX_48, Context_30, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyX_80);
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Y_18, RHSY_49, Context_30, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyY_81);
    {
      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_78, 0) = ((MR_Box) (CompareArgsGoal_45));
      MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_77, 0) = ((MR_Box) (GoalUnifyY_81));
      MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_78));
    }
    {
      GoalList_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GoalList_34, 0) = ((MR_Box) (GoalUnifyX_80));
      MR_hl_field(1, GoalList_34, 1) = ((MR_Box) (Var_77));
    }
  }
  hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_50);
  hlds__hlds_goal__goal_info_set_context_3_p_0(Context_30, GoalInfo0_50, &GoalInfo_51);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_34, GoalInfo_51, Goal_20);
}

static void MR_CALL 
check_hlds__unify_proc__unify_proc_info_get_var_table_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, 1))));
}

static MR_Word MR_CALL 
check_hlds__unify_proc__compute_maybe_packable_args_locn_1_f_0(
  MR_Word ConsTag_3)
{
  MR_Word ArgsLocn_4;

  switch (MR_tag((MR_Word) ConsTag_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ConsTag_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          ArgsLocn_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          ArgsLocn_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      ArgsLocn_4 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsTag_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 14:
          ArgsLocn_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 11:
          {
            MR_Word RemoteArgsTagInfo_5 = ((MR_Word) ((MR_hl_field(3, ConsTag_3, 1))));
            MR_Word Ptag_6;
            MR_Word Var_39;

            switch (MR_tag((MR_Word) RemoteArgsTagInfo_5)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Ptag_6 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
                break;
              case (MR_Integer) 1:
                Ptag_6 = ((MR_Word) ((MR_hl_field(1, RemoteArgsTagInfo_5, 0))));
                break;
              case (MR_Integer) 2:
                Ptag_6 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_5, 0))));
                break;
              case (MR_Integer) 3:
                Ptag_6 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
                break;
            }
            {
              Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_39, 0) = ((MR_Box) (Ptag_6));
            }
            {
              ArgsLocn_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ArgsLocn_4, 0) = ((MR_Box) (Var_39));
            }
          }
          break;
        case (MR_Integer) 12:
          ArgsLocn_4 = (MR_Word) (MR_mkword(1, &check_hlds__unify_proc_scalar_common_2[4]));
          break;
        case (MR_Integer) 13:
          ArgsLocn_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      break;
  }
  return ArgsLocn_4;
}

static void MR_CALL 
check_hlds__unify_proc__compute_exist_constraint_implications_3_p_0(
  MR_Word MaybeExistConstraints_4,
  MR_Word * ExistQTVars_5,
  MR_Word * GiveVarsTypes_6)
{
  if ((MaybeExistConstraints_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *ExistQTVars_5 = (MR_Word) ((MR_Unsigned) 0U);
    *GiveVarsTypes_6 = (MR_Integer) 1;
  }
  else
  {
    MR_Word ExistConstraints_7 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_4), (MR_Integer) 1));

    *ExistQTVars_5 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_7, 0))));
    *GiveVarsTypes_6 = (MR_Integer) 0;
  }
}

static void MR_CALL 
check_hlds__unify_proc__conjoin_arg_comparisons_14_p_0(
  MR_Word UCParams_15,
  MR_Word ConjoinKind_16,
  MR_Word TermType_17,
  MR_Word TermVarX_18,
  MR_Word TermVarY_19,
  MR_Word ResultVar_20,
  MR_Word MaybeAllArgs_21,
  MR_Integer NextArgNum_22,
  MR_Word SubCompareGoal_23,
  MR_Word * Goal_24,
  MR_Word * TailVarsX_25,
  MR_Word * TailVarsY_26,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42)
{
  if ((ConjoinKind_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Goal_24 = SubCompareGoal_23;
    *TailVarsX_25 = (MR_Word) ((MR_Unsigned) 0U);
    *TailVarsY_26 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_0_41;
  }
  else
  {
    MR_Word HeadCtorArgRepn_28 = ((MR_Word) ((MR_hl_field(1, ConjoinKind_16, 0))));
    MR_Word TailCtorArgRepns_29 = ((MR_Word) ((MR_hl_field(1, ConjoinKind_16, 1))));
    MR_Word SubResultVar_30 = ((MR_Word) ((MR_hl_field(1, ConjoinKind_16, 2))));
    MR_Word Context_31 = ((MR_Word) ((MR_hl_field(0, UCParams_15, 1))));
    MR_Word GoalInfo_32;
    MR_Word CheckEqualGoal_33;
    MR_Word CheckNotEqualGoal_34;
    MR_Word SubResultRHS_35;
    MR_Word ReturnSubResultGoal_36;
    MR_Word CondGoalExpr_37;
    MR_Word CondGoal_38;
    MR_Word ElseGoal_39;
    MR_Word GoalExpr_40;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Word SymName_61;
    MR_Word DuCtor_62;
    MR_Word Var_63;
    MR_Word Var_65;
    MR_Word Builtin_66;
    MR_Word Var_67;

    hlds__hlds_goal__goal_info_init_2_p_0(Context_31, &GoalInfo_32);
    Var_63 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      SymName_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SymName_61, 0) = ((MR_Box) (Var_63));
      MR_hl_field(1, SymName_61, 1) = ((MR_Box) ((MR_String) "="));
    }
    Builtin_66 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (Builtin_66));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_65, 0) = ((MR_Box) (Var_67));
      MR_hl_field(0, Var_65, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      DuCtor_62 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DuCtor_62, 0) = ((MR_Box) (SymName_61));
      MR_hl_field(0, DuCtor_62, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(0, DuCtor_62, 2) = ((MR_Box) (Var_65));
    }
    Var_43 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_62)));
    hlds__make_goal__make_const_construction_4_p_0(Context_31, SubResultVar_30, Var_43, &CheckEqualGoal_33);
    Var_45 = (MR_Word) ((MR_Word) (CheckEqualGoal_33));
    {
      CheckNotEqualGoal_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CheckNotEqualGoal_34, 0) = ((MR_Box) (Var_45));
      MR_hl_field(0, CheckNotEqualGoal_34, 1) = ((MR_Box) (GoalInfo_32));
    }
    {
      SubResultRHS_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SubResultRHS_35, 0) = ((MR_Box) (SubResultVar_30));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(ResultVar_20, SubResultRHS_35, Context_31, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &ReturnSubResultGoal_36);
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (CheckNotEqualGoal_34));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (SubCompareGoal_23));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_50));
    }
    {
      CondGoalExpr_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, CondGoalExpr_37, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, CondGoalExpr_37, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, CondGoalExpr_37, 2) = ((MR_Box) (Var_49));
    }
    {
      CondGoal_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CondGoal_38, 0) = ((MR_Box) (CondGoalExpr_37));
      MR_hl_field(0, CondGoal_38, 1) = ((MR_Box) (GoalInfo_32));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (HeadCtorArgRepn_28));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) (TailCtorArgRepns_29));
    }
    check_hlds__unify_proc__generate_arg_compare_goals_13_p_0(UCParams_15, TermType_17, TermVarX_18, TermVarY_19, ResultVar_20, MaybeAllArgs_21, NextArgNum_22, Var_52, &ElseGoal_39, TailVarsX_25, TailVarsY_26, STATE_VARIABLE_Info_0_41, STATE_VARIABLE_Info_42);
    {
      GoalExpr_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GoalExpr_40, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, GoalExpr_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, GoalExpr_40, 2) = ((MR_Box) (CondGoal_38));
      MR_hl_field(3, GoalExpr_40, 3) = ((MR_Box) (ReturnSubResultGoal_36));
      MR_hl_field(3, GoalExpr_40, 4) = ((MR_Box) (ElseGoal_39));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_24 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_40));
      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_32));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_arg_compare_goals_13_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc__generate_arg_compare_goals_13_p_0(
  MR_Word UCParams_1,
  MR_Word TermType_2,
  MR_Word TermVarX_3,
  MR_Word TermVarY_4,
  MR_Word ResultVar_5,
  MR_Word STATE_VARIABLE_MaybeAllArgs_0_6,
  MR_Integer ArgNum_7,
  MR_Word HeadVar__8_8,
  MR_Word * Goal_9,
  MR_Word * HeadVar__10_10,
  MR_Word * HeadVar__11_11,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  MR_bool succeeded;
  MR_Word Var_171 = ((((MR_Unsigned) ((MR_hl_field(0, UCParams_1, 4))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_174 = ((MR_Word) ((MR_hl_field(0, UCParams_1, 1))));
  MR_Word Var_175 = ((MR_Word) ((MR_hl_field(0, UCParams_1, 0))));

  if ((HeadVar__8_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__10_10 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__11_11 = (MR_Word) ((MR_Unsigned) 0U);
    check_hlds__unify_proc__generate_return_equal_3_p_0(ResultVar_5, Var_174, Goal_9);
    *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_0_12;
  }
  else
  {
    MR_Word CtorArgRepn_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, 0))));
    MR_Word CtorArgRepns_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, 1))));
    MR_Word Type_41 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_33, 2))));
    MR_Word IsDummy_42;

    IsDummy_42 = hlds__type_util__is_type_a_dummy_2_f_0(Var_175, Type_41);
    switch (IsDummy_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word HeadVarX_43;
          MR_Word HeadVarY_44;
          MR_Word TailVarsX_45;
          MR_Word TailVarsY_46;
          MR_Word STATE_VARIABLE_Info_1_70;
          MR_Integer Var_71;

          check_hlds__unify_proc__make_fresh_var_pair_9_p_0(Var_171, (MR_String) "_ArgX", (MR_String) "_ArgY", ArgNum_7, Type_41, &HeadVarX_43, &HeadVarY_44, STATE_VARIABLE_Info_0_12, &STATE_VARIABLE_Info_1_70);
          Var_71 = (MR_Integer) ((MR_Unsigned) ArgNum_7 + (MR_Unsigned) 1);
          check_hlds__unify_proc__generate_arg_compare_goals_13_p_0(UCParams_1, TermType_2, TermVarX_3, TermVarY_4, ResultVar_5, STATE_VARIABLE_MaybeAllArgs_0_6, Var_71, CtorArgRepns_34, Goal_9, &TailVarsX_45, &TailVarsY_46, STATE_VARIABLE_Info_1_70, STATE_VARIABLE_Info_13);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__10_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (HeadVarX_43));
            MR_hl_field(1, base, 1) = ((MR_Box) (TailVarsX_45));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__11_11 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (HeadVarY_44));
            MR_hl_field(1, base, 1) = ((MR_Box) (TailVarsY_46));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Context_47 = ((MR_Word) ((MR_hl_field(0, UCParams_1, 1))));
          MR_Word CompareHow_48;
          MR_Word STATE_VARIABLE_MaybeAllArgs_1_74;

          check_hlds__unify_proc__may_we_start_packing_at_this_arg_compare_5_p_0(UCParams_1, CtorArgRepn_33, &CompareHow_48, STATE_VARIABLE_MaybeAllArgs_0_6, &STATE_VARIABLE_MaybeAllArgs_1_74);
          switch (MR_tag((MR_Word) CompareHow_48)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(CompareHow_48)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_String ComparePred_49;
                    MR_Word ComparePredModule_50;
                    MR_Word CurCompareResultVar_51;
                    MR_Word ConjoinKind_52;
                    MR_Word SubCompareGoal_53;
                    MR_Word STATE_VARIABLE_Info_5_83;
                    MR_Word STATE_VARIABLE_Info_6_84;
                    MR_Word Var_85;
                    MR_Word Var_86;
                    MR_Word Var_87;
                    MR_Integer Var_90;
                    MR_Word HeadVarX_119;
                    MR_Word HeadVarY_120;
                    MR_Word TailVarsX_121;
                    MR_Word TailVarsY_122;

                    check_hlds__unify_proc__make_fresh_var_pair_9_p_0(Var_171, (MR_String) "ArgX", (MR_String) "ArgY", ArgNum_7, Type_41, &HeadVarX_119, &HeadVarY_120, STATE_VARIABLE_Info_0_12, &STATE_VARIABLE_Info_5_83);
                    succeeded = check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(UCParams_1, Type_41);
                    if (succeeded)
                    {
                      ComparePred_49 = (MR_String) "typed_compare";
                      ComparePredModule_50 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                    }
                    else
                    {
                      ComparePred_49 = (MR_String) "compare";
                      ComparePredModule_50 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                    }
                    check_hlds__unify_proc__prepare_for_conjoining_arg_comparisons_7_p_0(CtorArgRepns_34, ArgNum_7, ResultVar_5, &CurCompareResultVar_51, &ConjoinKind_52, STATE_VARIABLE_Info_5_83, &STATE_VARIABLE_Info_6_84);
                    {
                      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_87, 0) = ((MR_Box) (HeadVarY_120));
                      MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_86, 0) = ((MR_Box) (HeadVarX_119));
                      MR_hl_field(1, Var_86, 1) = ((MR_Box) (Var_87));
                    }
                    {
                      Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_85, 0) = ((MR_Box) (CurCompareResultVar_51));
                      MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_86));
                    }
                    check_hlds__unify_proc__build_simple_call_6_p_0(Var_175, ComparePredModule_50, ComparePred_49, Var_85, Context_47, &SubCompareGoal_53);
                    Var_90 = (MR_Integer) ((MR_Unsigned) ArgNum_7 + (MR_Unsigned) 1);
                    check_hlds__unify_proc__conjoin_arg_comparisons_14_p_0(UCParams_1, ConjoinKind_52, TermType_2, TermVarX_3, TermVarY_4, ResultVar_5, (MR_Integer) 0, Var_90, SubCompareGoal_53, Goal_9, &TailVarsX_121, &TailVarsY_122, STATE_VARIABLE_Info_6_84, STATE_VARIABLE_Info_13);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__10_10 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (HeadVarX_119));
                      MR_hl_field(1, base, 1) = ((MR_Box) (TailVarsX_121));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__11_11 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (HeadVarY_120));
                      MR_hl_field(1, base, 1) = ((MR_Box) (TailVarsY_122));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word STATE_VARIABLE_Info_3_77;
                    MR_Integer Var_78;
                    MR_Word HeadVarX_115;
                    MR_Word HeadVarY_116;
                    MR_Word TailVarsX_117;
                    MR_Word TailVarsY_118;

                    check_hlds__unify_proc__make_fresh_var_pair_9_p_0(Var_171, (MR_String) "_ArgX", (MR_String) "_ArgY", ArgNum_7, Type_41, &HeadVarX_115, &HeadVarY_116, STATE_VARIABLE_Info_0_12, &STATE_VARIABLE_Info_3_77);
                    Var_78 = (MR_Integer) ((MR_Unsigned) ArgNum_7 + (MR_Unsigned) 1);
                    check_hlds__unify_proc__generate_arg_compare_goals_13_p_0(UCParams_1, TermType_2, TermVarX_3, TermVarY_4, ResultVar_5, STATE_VARIABLE_MaybeAllArgs_1_74, Var_78, CtorArgRepns_34, Goal_9, &TailVarsX_117, &TailVarsY_118, STATE_VARIABLE_Info_3_77, STATE_VARIABLE_Info_13);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__10_10 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (HeadVarX_115));
                      MR_hl_field(1, base, 1) = ((MR_Box) (TailVarsX_117));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__11_11 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (HeadVarY_116));
                      MR_hl_field(1, base, 1) = ((MR_Box) (TailVarsY_118));
                    }
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgsLocn_54 = ((MR_Word) ((MR_hl_field(1, CompareHow_48, 0))));
                MR_Word CellOffset_55 = ((MR_Word) ((MR_hl_field(1, CompareHow_48, 1))));
                MR_Word Shift_56 = ((MR_Word) ((MR_hl_field(1, CompareHow_48, 2))));
                MR_String SignedIntSize_57 = ((MR_String) ((MR_hl_field(1, CompareHow_48, 3))));
                MR_Word STATE_VARIABLE_Info_8_95;
                MR_Word STATE_VARIABLE_Info_9_96;
                MR_Word STATE_VARIABLE_Info_10_97;
                MR_Integer Var_99;
                MR_Word HeadVarX_123;
                MR_Word HeadVarY_124;
                MR_Word TailVarsX_125;
                MR_Word TailVarsY_126;
                MR_Word CurCompareResultVar_127;
                MR_Word ConjoinKind_128;
                MR_Word SubCompareGoal_129;

                check_hlds__unify_proc__make_fresh_var_pair_9_p_0(Var_171, (MR_String) "_ArgX", (MR_String) "_ArgY", ArgNum_7, Type_41, &HeadVarX_123, &HeadVarY_124, STATE_VARIABLE_Info_0_12, &STATE_VARIABLE_Info_8_95);
                check_hlds__unify_proc__prepare_for_conjoining_arg_comparisons_7_p_0(CtorArgRepns_34, ArgNum_7, ResultVar_5, &CurCompareResultVar_127, &ConjoinKind_128, STATE_VARIABLE_Info_8_95, &STATE_VARIABLE_Info_9_96);
                check_hlds__unify_proc__select_and_build_signed_comparison_foreign_proc_14_p_0(Var_175, ArgsLocn_54, TermType_2, TermVarX_3, TermVarY_4, CurCompareResultVar_127, ArgNum_7, CellOffset_55, Shift_56, SignedIntSize_57, Context_47, &SubCompareGoal_129, STATE_VARIABLE_Info_9_96, &STATE_VARIABLE_Info_10_97);
                Var_99 = (MR_Integer) ((MR_Unsigned) ArgNum_7 + (MR_Unsigned) 1);
                check_hlds__unify_proc__conjoin_arg_comparisons_14_p_0(UCParams_1, ConjoinKind_128, TermType_2, TermVarX_3, TermVarY_4, ResultVar_5, (MR_Integer) 0, Var_99, SubCompareGoal_129, Goal_9, &TailVarsX_125, &TailVarsY_126, STATE_VARIABLE_Info_10_97, STATE_VARIABLE_Info_13);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__10_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (HeadVarX_123));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailVarsX_125));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__11_11 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (HeadVarY_124));
                  MR_hl_field(1, base, 1) = ((MR_Box) (TailVarsY_126));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Shift0_58 = ((MR_Word) ((MR_hl_field(2, CompareHow_48, 2))));
                MR_Word NumBits0_59 = ((MR_Word) ((MR_hl_field(2, CompareHow_48, 3))));
                MR_Integer LeftOverArgNum_60;
                MR_Word NumBits_61;
                MR_Word LeftOverCtorArgRepns_62;
                MR_Word TailBulkVarsX_63;
                MR_Word TailBulkVarsY_64;
                MR_Word Var_102;
                MR_Word STATE_VARIABLE_Info_12_107;
                MR_Word STATE_VARIABLE_MaybeAllArgs_2_108;
                MR_Word STATE_VARIABLE_Info_13_109;
                MR_Word STATE_VARIABLE_Info_14_110;
                MR_Word STATE_VARIABLE_Info_15_111;
                MR_Word Var_113;
                MR_Word Var_114;
                MR_Word HeadVarX_130;
                MR_Word HeadVarY_131;
                MR_Word TailVarsX_132;
                MR_Word TailVarsY_133;
                MR_Word CurCompareResultVar_134;
                MR_Word ConjoinKind_135;
                MR_Word SubCompareGoal_136;
                MR_Word ArgsLocn_137 = ((MR_Word) ((MR_hl_field(2, CompareHow_48, 0))));
                MR_Word CellOffset_138 = ((MR_Word) ((MR_hl_field(2, CompareHow_48, 1))));
                MR_Word Shift_139;

                {
                  Var_102 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_102, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[2]));
                  MR_hl_field(0, Var_102, 1) = ((MR_Box) (check_hlds__unify_proc__generate_arg_compare_goals_13_p_0_1));
                  MR_hl_field(0, Var_102, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_102, 3) = ((MR_Box) (UCParams_1));
                  MR_hl_field(0, Var_102, 4) = ((MR_Box) (Type_41));
                }
                mercury__require__expect_not_3_p_0(Var_102, (MR_String) "predicate \140check_hlds.unify_proc.generate_arg_compare_goals\'/13", (MR_String) "sub-word-size argument of existential type");
                check_hlds__unify_proc__make_fresh_var_pair_9_p_0(Var_171, (MR_String) "_ArgX", (MR_String) "_ArgY", ArgNum_7, Type_41, &HeadVarX_130, &HeadVarY_131, STATE_VARIABLE_Info_0_12, &STATE_VARIABLE_Info_12_107);
                check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0(UCParams_1, CellOffset_138, ArgNum_7, &LeftOverArgNum_60, Shift0_58, &Shift_139, NumBits0_59, &NumBits_61, CtorArgRepns_34, &LeftOverCtorArgRepns_62, STATE_VARIABLE_MaybeAllArgs_1_74, &STATE_VARIABLE_MaybeAllArgs_2_108, &TailBulkVarsX_63, &TailBulkVarsY_64, STATE_VARIABLE_Info_12_107, &STATE_VARIABLE_Info_13_109);
                check_hlds__unify_proc__prepare_for_conjoining_arg_comparisons_7_p_0(LeftOverCtorArgRepns_62, ArgNum_7, ResultVar_5, &CurCompareResultVar_134, &ConjoinKind_135, STATE_VARIABLE_Info_13_109, &STATE_VARIABLE_Info_14_110);
                check_hlds__unify_proc__select_and_build_bulk_comparison_foreign_proc_15_p_0(Var_175, ArgsLocn_137, TermType_2, TermVarX_3, TermVarY_4, CurCompareResultVar_134, STATE_VARIABLE_MaybeAllArgs_2_108, ArgNum_7, CellOffset_138, Shift_139, NumBits_61, Context_47, &SubCompareGoal_136, STATE_VARIABLE_Info_14_110, &STATE_VARIABLE_Info_15_111);
                check_hlds__unify_proc__conjoin_arg_comparisons_14_p_0(UCParams_1, ConjoinKind_135, TermType_2, TermVarX_3, TermVarY_4, ResultVar_5, STATE_VARIABLE_MaybeAllArgs_2_108, LeftOverArgNum_60, SubCompareGoal_136, Goal_9, &TailVarsX_132, &TailVarsY_133, STATE_VARIABLE_Info_15_111, STATE_VARIABLE_Info_13);
                {
                  Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_113, 0) = ((MR_Box) (HeadVarX_130));
                  MR_hl_field(1, Var_113, 1) = ((MR_Box) (TailBulkVarsX_63));
                }
                *HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), Var_113, TailVarsX_132);
                {
                  Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_114, 0) = ((MR_Box) (HeadVarY_131));
                  MR_hl_field(1, Var_114, 1) = ((MR_Box) (TailBulkVarsY_64));
                }
                *HeadVar__11_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), Var_114, TailVarsY_133);
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_return_equal_3_p_0(
  MR_Word ResultVar_4,
  MR_Word Context_5,
  MR_Word * Goal_6)
{
  MR_Word Var_7;
  MR_Word SymName_9;
  MR_Word DuCtor_10;
  MR_Word Var_11;
  MR_Word Var_13;
  MR_Word Builtin_14;
  MR_Word Var_15;

  Var_11 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    SymName_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_9, 0) = ((MR_Box) (Var_11));
    MR_hl_field(1, SymName_9, 1) = ((MR_Box) ((MR_String) "="));
  }
  Builtin_14 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (Builtin_14));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) ((MR_String) "comparison_result"));
  }
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (Var_15));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    DuCtor_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DuCtor_10, 0) = ((MR_Box) (SymName_9));
    MR_hl_field(0, DuCtor_10, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, DuCtor_10, 2) = ((MR_Box) (Var_13));
  }
  Var_7 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_10)));
  hlds__make_goal__make_const_construction_4_p_0(Context_5, ResultVar_4, Var_7, Goal_6);
}

static void MR_CALL 
check_hlds__unify_proc__may_we_start_packing_at_this_arg_compare_5_p_0(
  MR_Word UCParams_6,
  MR_Word CtorArgRepn_7,
  MR_Word * CompareHow_8,
  MR_Word STATE_VARIABLE_MaybeAllArgs_0_31,
  MR_Word * STATE_VARIABLE_MaybeAllArgs_32)
{
  MR_Word AllowPackedUnifyCompare_10 = ((MR_Unsigned) ((MR_hl_field(0, UCParams_6, 4))) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, UCParams_6, 3))));

  switch (AllowPackedUnifyCompare_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      if ((Var_36 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *CompareHow_8 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_MaybeAllArgs_32 = STATE_VARIABLE_MaybeAllArgs_0_31;
      }
      else
      {
        MR_Word ArgsLocn_12 = ((MR_Word) ((MR_hl_field(1, Var_36, 0))));
        MR_Word ArgPosWidth_13 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_7, 3))));

        switch (MR_tag((MR_Word) ArgPosWidth_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *CompareHow_8 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_MaybeAllArgs_32 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_13, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word CellOffset_20 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_13, 2))));
                  MR_Word Shift_21 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_13, 3))));
                  MR_Word NumBits_22 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_13, 4))));
                  MR_Word Fill_24 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_13, 6))) & (MR_Integer) 7);

                  *STATE_VARIABLE_MaybeAllArgs_32 = (MR_Integer) 1;
                  switch (Fill_24) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 7:
                    case (MR_Integer) 0:
                    case (MR_Integer) 5:
                    case (MR_Integer) 6:
                    case (MR_Integer) 4:
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        *CompareHow_8 = base;
                        MR_hl_field(2, base, 0) = ((MR_Box) (ArgsLocn_12));
                        MR_hl_field(2, base, 1) = ((MR_Box) (CellOffset_20));
                        MR_hl_field(2, base, 2) = ((MR_Box) (Shift_21));
                        MR_hl_field(2, base, 3) = ((MR_Box) (NumBits_22));
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_String SignedIntSize_28 = ((MR_String) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &check_hlds__unify_proc_scalar_common_2[0])), 0))));

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *CompareHow_8 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (ArgsLocn_12));
                          MR_hl_field(1, base, 1) = ((MR_Box) (CellOffset_20));
                          MR_hl_field(1, base, 2) = ((MR_Box) (Shift_21));
                          MR_hl_field(1, base, 3) = ((MR_Box) (SignedIntSize_28));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_String SignedIntSize_65 = ((MR_String) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &check_hlds__unify_proc_scalar_common_2[1])), 0))));

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *CompareHow_8 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (ArgsLocn_12));
                          MR_hl_field(1, base, 1) = ((MR_Box) (CellOffset_20));
                          MR_hl_field(1, base, 2) = ((MR_Box) (Shift_21));
                          MR_hl_field(1, base, 3) = ((MR_Box) (SignedIntSize_65));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String SignedIntSize_67 = ((MR_String) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &check_hlds__unify_proc_scalar_common_2[2])), 0))));

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *CompareHow_8 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (ArgsLocn_12));
                          MR_hl_field(1, base, 1) = ((MR_Box) (CellOffset_20));
                          MR_hl_field(1, base, 2) = ((MR_Box) (Shift_21));
                          MR_hl_field(1, base, 3) = ((MR_Box) (SignedIntSize_67));
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word CellOffset_51 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_13, 2))));
                  MR_Word Shift_52 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_13, 3))));
                  MR_Word NumBits_53 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_13, 4))));
                  MR_Word Fill_54 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_13, 6))) & (MR_Integer) 7);

                  *STATE_VARIABLE_MaybeAllArgs_32 = STATE_VARIABLE_MaybeAllArgs_0_31;
                  switch (Fill_54) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 7:
                    case (MR_Integer) 0:
                    case (MR_Integer) 5:
                    case (MR_Integer) 6:
                    case (MR_Integer) 4:
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        *CompareHow_8 = base;
                        MR_hl_field(2, base, 0) = ((MR_Box) (ArgsLocn_12));
                        MR_hl_field(2, base, 1) = ((MR_Box) (CellOffset_51));
                        MR_hl_field(2, base, 2) = ((MR_Box) (Shift_52));
                        MR_hl_field(2, base, 3) = ((MR_Box) (NumBits_53));
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_String SignedIntSize_49 = ((MR_String) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &check_hlds__unify_proc_scalar_common_2[0])), 0))));

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *CompareHow_8 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (ArgsLocn_12));
                          MR_hl_field(1, base, 1) = ((MR_Box) (CellOffset_51));
                          MR_hl_field(1, base, 2) = ((MR_Box) (Shift_52));
                          MR_hl_field(1, base, 3) = ((MR_Box) (SignedIntSize_49));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_String SignedIntSize_69 = ((MR_String) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &check_hlds__unify_proc_scalar_common_2[1])), 0))));

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *CompareHow_8 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (ArgsLocn_12));
                          MR_hl_field(1, base, 1) = ((MR_Box) (CellOffset_51));
                          MR_hl_field(1, base, 2) = ((MR_Box) (Shift_52));
                          MR_hl_field(1, base, 3) = ((MR_Box) (SignedIntSize_69));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String SignedIntSize_71 = ((MR_String) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &check_hlds__unify_proc_scalar_common_2[2])), 0))));

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *CompareHow_8 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (ArgsLocn_12));
                          MR_hl_field(1, base, 1) = ((MR_Box) (CellOffset_51));
                          MR_hl_field(1, base, 2) = ((MR_Box) (Shift_52));
                          MR_hl_field(1, base, 3) = ((MR_Box) (SignedIntSize_71));
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  *CompareHow_8 = (MR_Word) ((MR_Unsigned) 4U);
                  *STATE_VARIABLE_MaybeAllArgs_32 = STATE_VARIABLE_MaybeAllArgs_0_31;
                }
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 0:
      {
        *CompareHow_8 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_MaybeAllArgs_32 = STATE_VARIABLE_MaybeAllArgs_0_31;
      }
      break;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_5(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2462__2_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2454__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2462__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_ArgNum_0_3,
  MR_Integer * STATE_VARIABLE_ArgNum_4,
  MR_Word STATE_VARIABLE_Shift_0_5,
  MR_Word * STATE_VARIABLE_Shift_6,
  MR_Word STATE_VARIABLE_NumBits_0_7,
  MR_Word * STATE_VARIABLE_NumBits_8,
  MR_Word HeadVar__9_9,
  MR_Word * HeadVar__10_10,
  MR_Word STATE_VARIABLE_MaybeAllArgs_0_11,
  MR_Word * STATE_VARIABLE_MaybeAllArgs_12,
  MR_Word * HeadVar__13_13,
  MR_Word * HeadVar__14_14,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_bool succeeded;

  if ((HeadVar__9_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__10_10 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__14_14 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
    *STATE_VARIABLE_MaybeAllArgs_12 = STATE_VARIABLE_MaybeAllArgs_0_11;
    *STATE_VARIABLE_NumBits_8 = STATE_VARIABLE_NumBits_0_7;
    *STATE_VARIABLE_Shift_6 = STATE_VARIABLE_Shift_0_5;
    *STATE_VARIABLE_ArgNum_4 = STATE_VARIABLE_ArgNum_0_3;
  }
  else
  {
    MR_Word CtorArgRepn_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__9_9, 0))));
    MR_Word CtorArgRepns_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__9_9, 1))));
    MR_Word ArgPosWidth_46 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_39, 3))));
    MR_Word Var_116 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_39, 2))));

    switch (MR_tag((MR_Word) ArgPosWidth_46)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *HeadVar__10_10 = HeadVar__9_9;
          *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
          *HeadVar__14_14 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_ArgNum_4 = STATE_VARIABLE_ArgNum_0_3;
          *STATE_VARIABLE_Shift_6 = STATE_VARIABLE_Shift_0_5;
          *STATE_VARIABLE_NumBits_8 = STATE_VARIABLE_NumBits_0_7;
          *STATE_VARIABLE_MaybeAllArgs_12 = STATE_VARIABLE_MaybeAllArgs_0_11;
          *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_46, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__10_10 = HeadVar__9_9;
              *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
              *HeadVar__14_14 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_ArgNum_4 = STATE_VARIABLE_ArgNum_0_3;
              *STATE_VARIABLE_Shift_6 = STATE_VARIABLE_Shift_0_5;
              *STATE_VARIABLE_NumBits_8 = STATE_VARIABLE_NumBits_0_7;
              *STATE_VARIABLE_MaybeAllArgs_12 = STATE_VARIABLE_MaybeAllArgs_0_11;
              *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Fill_52 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_46, 6))) & (MR_Integer) 7);

              switch (Fill_52) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 7:
                case (MR_Integer) 0:
                case (MR_Integer) 5:
                case (MR_Integer) 6:
                case (MR_Integer) 4:
                  {
                    MR_Word ArgNumBits_60;
                    MR_Integer ShiftInt0_63;
                    MR_Integer NumBitsInt0_64;
                    MR_Integer ArgNumBitsInt_66;
                    MR_Integer ShiftInt_67;
                    MR_Integer NumBitsInt_68;
                    MR_Word Var_100;
                    MR_Integer Var_103;
                    MR_Word ArgCellOffset_138;
                    MR_Word GiveVarsTypes_139;
                    MR_Word HeadVarX_140;
                    MR_Word HeadVarY_141;
                    MR_Word TailVarsX_142;
                    MR_Word TailVarsY_143;
                    MR_Word Var_144;
                    MR_Word STATE_VARIABLE_Shift_1_147;
                    MR_Word STATE_VARIABLE_NumBits_1_148;
                    MR_Word Var_149;
                    MR_Word STATE_VARIABLE_Info_1_154;
                    MR_Integer STATE_VARIABLE_ArgNum_1_155;

                    {
                      Var_144 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_144, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[2]));
                      MR_hl_field(0, Var_144, 1) = ((MR_Box) (check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_3));
                      MR_hl_field(0, Var_144, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(0, Var_144, 3) = ((MR_Box) (HeadVar__1_1));
                      MR_hl_field(0, Var_144, 4) = ((MR_Box) (Var_116));
                    }
                    mercury__require__expect_not_3_p_0(Var_144, (MR_String) "predicate \140check_hlds.unify_proc.get_bulk_comparable_packed_args\'/16", (MR_String) "sub-word-size argument of existential type");
                    ArgCellOffset_138 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_46, 2))));
                    STATE_VARIABLE_Shift_1_147 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_46, 3))));
                    ArgNumBits_60 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_46, 4))));
                    ShiftInt0_63 = (MR_Integer) (STATE_VARIABLE_Shift_0_5);
                    NumBitsInt0_64 = (MR_Integer) (STATE_VARIABLE_NumBits_0_7);
                    ShiftInt_67 = (MR_Integer) (STATE_VARIABLE_Shift_1_147);
                    ArgNumBitsInt_66 = (MR_Integer) (ArgNumBits_60);
                    NumBitsInt_68 = (MR_Integer) ((MR_Unsigned) NumBitsInt0_64 + (MR_Unsigned) ArgNumBitsInt_66);
                    Var_103 = (MR_Integer) ((MR_Unsigned) ShiftInt_67 + (MR_Unsigned) ArgNumBitsInt_66);
                    {
                      Var_100 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_100, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[4]));
                      MR_hl_field(0, Var_100, 1) = ((MR_Box) (check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_4));
                      MR_hl_field(0, Var_100, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(0, Var_100, 3) = ((MR_Box) (ShiftInt0_63));
                      MR_hl_field(0, Var_100, 4) = ((MR_Box) (Var_103));
                    }
                    mercury__require__expect_3_p_0(Var_100, (MR_String) "predicate \140check_hlds.unify_proc.get_bulk_comparable_packed_args\'/16", (MR_String) "packed arg does not immediately follow previous");
                    STATE_VARIABLE_NumBits_1_148 = (MR_Word) (NumBitsInt_68);
                    {
                      Var_149 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_149, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[3]));
                      MR_hl_field(0, Var_149, 1) = ((MR_Box) (check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_5));
                      MR_hl_field(0, Var_149, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(0, Var_149, 3) = ((MR_Box) (HeadVar__2_2));
                      MR_hl_field(0, Var_149, 4) = ((MR_Box) (ArgCellOffset_138));
                    }
                    mercury__require__expect_3_p_0(Var_149, (MR_String) "predicate \140check_hlds.unify_proc.get_bulk_comparable_packed_args\'/16", (MR_String) "apw_{partial,none}_shifted offset != CellOffset");
                    GiveVarsTypes_139 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) >> 2)) & (MR_Integer) 1);
                    check_hlds__unify_proc__make_fresh_var_pair_9_p_0(GiveVarsTypes_139, (MR_String) "_ArgX", (MR_String) "_ArgY", STATE_VARIABLE_ArgNum_0_3, Var_116, &HeadVarX_140, &HeadVarY_141, STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_1_154);
                    STATE_VARIABLE_ArgNum_1_155 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ArgNum_0_3 + (MR_Unsigned) 1);
                    check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0(HeadVar__1_1, HeadVar__2_2, STATE_VARIABLE_ArgNum_1_155, STATE_VARIABLE_ArgNum_4, STATE_VARIABLE_Shift_1_147, STATE_VARIABLE_Shift_6, STATE_VARIABLE_NumBits_1_148, STATE_VARIABLE_NumBits_8, CtorArgRepns_40, HeadVar__10_10, STATE_VARIABLE_MaybeAllArgs_0_11, STATE_VARIABLE_MaybeAllArgs_12, &TailVarsX_142, &TailVarsY_143, STATE_VARIABLE_Info_1_154, STATE_VARIABLE_Info_16);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__13_13 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (HeadVarX_140));
                      MR_hl_field(1, base, 1) = ((MR_Box) (TailVarsX_142));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__14_14 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (HeadVarY_141));
                      MR_hl_field(1, base, 1) = ((MR_Box) (TailVarsY_143));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    *HeadVar__10_10 = HeadVar__9_9;
                    *STATE_VARIABLE_MaybeAllArgs_12 = (MR_Integer) 0;
                    *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
                    *HeadVar__14_14 = (MR_Word) ((MR_Unsigned) 0U);
                    *STATE_VARIABLE_ArgNum_4 = STATE_VARIABLE_ArgNum_0_3;
                    *STATE_VARIABLE_Shift_6 = STATE_VARIABLE_Shift_0_5;
                    *STATE_VARIABLE_NumBits_8 = STATE_VARIABLE_NumBits_0_7;
                    *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    *HeadVar__10_10 = HeadVar__9_9;
                    *STATE_VARIABLE_MaybeAllArgs_12 = (MR_Integer) 0;
                    *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
                    *HeadVar__14_14 = (MR_Word) ((MR_Unsigned) 0U);
                    *STATE_VARIABLE_ArgNum_4 = STATE_VARIABLE_ArgNum_0_3;
                    *STATE_VARIABLE_Shift_6 = STATE_VARIABLE_Shift_0_5;
                    *STATE_VARIABLE_NumBits_8 = STATE_VARIABLE_NumBits_0_7;
                    *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *HeadVar__10_10 = HeadVar__9_9;
                    *STATE_VARIABLE_MaybeAllArgs_12 = (MR_Integer) 0;
                    *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
                    *HeadVar__14_14 = (MR_Word) ((MR_Unsigned) 0U);
                    *STATE_VARIABLE_ArgNum_4 = STATE_VARIABLE_ArgNum_0_3;
                    *STATE_VARIABLE_Shift_6 = STATE_VARIABLE_Shift_0_5;
                    *STATE_VARIABLE_NumBits_8 = STATE_VARIABLE_NumBits_0_7;
                    *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            if (((MR_Word) ((MR_Unsigned) 0U) == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word ArgCellOffset_58;
              MR_Word GiveVarsTypes_70;
              MR_Word HeadVarX_71;
              MR_Word HeadVarY_72;
              MR_Word TailVarsX_73;
              MR_Word TailVarsY_74;
              MR_Word Var_97;
              MR_Word Var_106;
              MR_Word STATE_VARIABLE_Info_1_111;
              MR_Integer STATE_VARIABLE_ArgNum_1_112;

              {
                Var_97 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_97, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[2]));
                MR_hl_field(0, Var_97, 1) = ((MR_Box) (check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_1));
                MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_97, 3) = ((MR_Box) (HeadVar__1_1));
                MR_hl_field(0, Var_97, 4) = ((MR_Box) (Var_116));
              }
              mercury__require__expect_not_3_p_0(Var_97, (MR_String) "predicate \140check_hlds.unify_proc.get_bulk_comparable_packed_args\'/16", (MR_String) "sub-word-size argument of existential type");
              ArgCellOffset_58 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_46, 2))));
              {
                Var_106 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_106, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[3]));
                MR_hl_field(0, Var_106, 1) = ((MR_Box) (check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_2));
                MR_hl_field(0, Var_106, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_106, 3) = ((MR_Box) (HeadVar__2_2));
                MR_hl_field(0, Var_106, 4) = ((MR_Box) (ArgCellOffset_58));
              }
              mercury__require__expect_3_p_0(Var_106, (MR_String) "predicate \140check_hlds.unify_proc.get_bulk_comparable_packed_args\'/16", (MR_String) "apw_{partial,none}_shifted offset != CellOffset");
              GiveVarsTypes_70 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) >> 2)) & (MR_Integer) 1);
              check_hlds__unify_proc__make_fresh_var_pair_9_p_0(GiveVarsTypes_70, (MR_String) "_ArgX", (MR_String) "_ArgY", STATE_VARIABLE_ArgNum_0_3, Var_116, &HeadVarX_71, &HeadVarY_72, STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_1_111);
              STATE_VARIABLE_ArgNum_1_112 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ArgNum_0_3 + (MR_Unsigned) 1);
              check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0(HeadVar__1_1, HeadVar__2_2, STATE_VARIABLE_ArgNum_1_112, STATE_VARIABLE_ArgNum_4, STATE_VARIABLE_Shift_0_5, STATE_VARIABLE_Shift_6, STATE_VARIABLE_NumBits_0_7, STATE_VARIABLE_NumBits_8, CtorArgRepns_40, HeadVar__10_10, STATE_VARIABLE_MaybeAllArgs_0_11, STATE_VARIABLE_MaybeAllArgs_12, &TailVarsX_73, &TailVarsY_74, STATE_VARIABLE_Info_1_111, STATE_VARIABLE_Info_16);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__13_13 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (HeadVarX_71));
                MR_hl_field(1, base, 1) = ((MR_Box) (TailVarsX_73));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__14_14 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (HeadVarY_72));
                MR_hl_field(1, base, 1) = ((MR_Box) (TailVarsY_74));
              }
            }
            else
            {
              *HeadVar__10_10 = HeadVar__9_9;
              *STATE_VARIABLE_MaybeAllArgs_12 = (MR_Integer) 0;
              *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
              *HeadVar__14_14 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_ArgNum_4 = STATE_VARIABLE_ArgNum_0_3;
              *STATE_VARIABLE_Shift_6 = STATE_VARIABLE_Shift_0_5;
              *STATE_VARIABLE_NumBits_8 = STATE_VARIABLE_NumBits_0_7;
              *STATE_VARIABLE_Info_16 = STATE_VARIABLE_Info_0_15;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_var_pair_9_p_0(
  MR_Word GiveVarsTypes_10,
  MR_String PrefixX_11,
  MR_String PrefixY_12,
  MR_Integer Num_13,
  MR_Word Type_14,
  MR_Word * VarX_15,
  MR_Word * VarY_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_String NumStr_18;
  MR_String NameX_19;
  MR_String NameY_20;

  NumStr_18 = mercury__string__int_to_string_1_f_0(Num_13);
  NameX_19 = mercury__string__f_43_43_2_f_0(PrefixX_11, NumStr_18);
  NameY_20 = mercury__string__f_43_43_2_f_0(PrefixY_12, NumStr_18);
  switch (GiveVarsTypes_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_Info_1_23;
        MR_Word Type_24;
        MR_Word Entry_26;
        MR_Word VarTable0_27;
        MR_Word VarTable_28;
        MR_Word Type_36;
        MR_Word Entry_38;
        MR_Word VarTable0_39;
        MR_Word VarTable_40;
        MR_Word Var_32;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_44;
        MR_Word Var_46;
        MR_Word Var_47;

        Type_24 = parse_tree__builtin_lib_types__void_type_0_f_0();
        {
          Entry_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Entry_26, 0) = ((MR_Box) (NameX_19));
          MR_hl_field(0, Entry_26, 1) = ((MR_Box) (Type_24));
          MR_hl_field(0, Entry_26, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        VarTable0_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, 1))));
        parse_tree__var_table__add_var_entry_4_p_0(Entry_26, VarX_15, VarTable0_27, &VarTable_28);
        Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, 0))));
        Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, 2))));
        Var_35 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, 3))) & (MR_Integer) 1);
        {
          STATE_VARIABLE_Info_1_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_1_23, 0) = ((MR_Box) (Var_32));
          MR_hl_field(0, STATE_VARIABLE_Info_1_23, 1) = ((MR_Box) (VarTable_28));
          MR_hl_field(0, STATE_VARIABLE_Info_1_23, 2) = ((MR_Box) (Var_34));
          MR_hl_field(0, STATE_VARIABLE_Info_1_23, 3) = (MR_Box) ((MR_Unsigned) (Var_35));
        }
        Type_36 = parse_tree__builtin_lib_types__void_type_0_f_0();
        {
          Entry_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Entry_38, 0) = ((MR_Box) (NameY_20));
          MR_hl_field(0, Entry_38, 1) = ((MR_Box) (Type_36));
          MR_hl_field(0, Entry_38, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        VarTable0_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 1))));
        parse_tree__var_table__add_var_entry_4_p_0(Entry_38, VarY_16, VarTable0_39, &VarTable_40);
        Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 0))));
        Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 2))));
        Var_47 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_1_23, 3))) & (MR_Integer) 1);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_22 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_44));
          MR_hl_field(0, base, 1) = ((MR_Box) (VarTable_40));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_46));
          MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_47));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_Info_1_48;

        check_hlds__unify_proc__unify_proc_info_new_var_5_p_0(NameX_19, Type_14, VarX_15, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_1_48);
        check_hlds__unify_proc__unify_proc_info_new_var_5_p_0(NameY_20, Type_14, VarY_16, STATE_VARIABLE_Info_1_48, STATE_VARIABLE_Info_22);
      }
      break;
  }
}

static void MR_CALL 
check_hlds__unify_proc__select_and_build_bulk_comparison_foreign_proc_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word ArgsLocn_17,
  MR_Word TermType_18,
  MR_Word TermVarX_19,
  MR_Word TermVarY_20,
  MR_Word CompareResultVar_21,
  MR_Word MaybeAllArgs_22,
  MR_Integer ArgNum_23,
  MR_Word CellOffset_24,
  MR_Word Shift_25,
  MR_Word NumBits_26,
  MR_Word Context_27,
  MR_Word * CompareConjGoal_28,
  MR_Word STATE_VARIABLE_Info_0_64,
  MR_Word * STATE_VARIABLE_Info_65)
{
  MR_Word TermVarXForeignArg_30;
  MR_Word TermVarYForeignArg_31;
  MR_Word CompareResultForeignArg_32;
  MR_String ComparePredNameSuffix_42;
  MR_String ValuesDecl_43;
  MR_String ValuesCode_44;
  MR_Word MaybeShiftMaskArgs_45;
  MR_Word MaybeShiftMaskGoals_46;
  MR_String ComparePredName_53;
  MR_Word MaybeWordsArgs_54;
  MR_Word MaybeWordsGoals_55;
  MR_String WordsDecl_56;
  MR_String WordsCode_57;
  MR_Word ForeignArgs_59;
  MR_String ForeignCode_60;
  MR_Word CompareGoal_61;
  MR_Word CompareConjGoalExpr_62;
  MR_Word ContextGoalInfo_63;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_69;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_74;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word STATE_VARIABLE_Info_2_85;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_String Var_100;
  MR_String Var_101;
  MR_String Var_102;
  MR_Word Var_104;
  MR_Word Var_107;
  MR_Word Var_112;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_117;

  Var_69 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_67, 0) = ((MR_Box) ((MR_String) "TermVarX"));
    MR_hl_field(0, Var_67, 1) = ((MR_Box) (Var_69));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
  }
  {
    TermVarXForeignArg_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TermVarXForeignArg_30, 0) = ((MR_Box) (TermVarX_19));
    MR_hl_field(0, TermVarXForeignArg_30, 1) = ((MR_Box) (Var_66));
    MR_hl_field(0, TermVarXForeignArg_30, 2) = ((MR_Box) (TermType_18));
    MR_hl_field(0, TermVarXForeignArg_30, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_74 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_72, 0) = ((MR_Box) ((MR_String) "TermVarY"));
    MR_hl_field(0, Var_72, 1) = ((MR_Box) (Var_74));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
  }
  {
    TermVarYForeignArg_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TermVarYForeignArg_31, 0) = ((MR_Box) (TermVarY_20));
    MR_hl_field(0, TermVarYForeignArg_31, 1) = ((MR_Box) (Var_71));
    MR_hl_field(0, TermVarYForeignArg_31, 2) = ((MR_Box) (TermType_18));
    MR_hl_field(0, TermVarYForeignArg_31, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_79 = parse_tree__prog_mode__out_mode_0_f_0();
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_77, 0) = ((MR_Box) ((MR_String) "ResultVar"));
    MR_hl_field(0, Var_77, 1) = ((MR_Box) (Var_79));
  }
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
  }
  Var_80 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
  {
    CompareResultForeignArg_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CompareResultForeignArg_32, 0) = ((MR_Box) (CompareResultVar_21));
    MR_hl_field(0, CompareResultForeignArg_32, 1) = ((MR_Box) (Var_76));
    MR_hl_field(0, CompareResultForeignArg_32, 2) = ((MR_Box) (Var_80));
    MR_hl_field(0, CompareResultForeignArg_32, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  switch (MaybeAllArgs_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        ComparePredNameSuffix_42 = (MR_String) "words";
        ValuesDecl_43 = (MR_String) "\n        MR_Unsigned value_x;\n        MR_Unsigned value_y;\n    ";
        ValuesCode_44 = (MR_String) "\n        value_x = word_x;\n        value_y = word_y;\n    ";
        MaybeShiftMaskArgs_45 = (MR_Word) ((MR_Unsigned) 0U);
        MaybeShiftMaskGoals_46 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_2_85 = STATE_VARIABLE_Info_0_64;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Integer ShiftInt_47;
        MR_Word ShiftForeignArg_48;
        MR_Word MakeShiftGoal_49;
        MR_Integer NumBitsInt_50;
        MR_Word NumBitsForeignArg_51;
        MR_Word MakeNumBitsGoal_52;
        MR_Word STATE_VARIABLE_Info_1_83;
        MR_Word Var_86;
        MR_Word Var_88;

        ComparePredNameSuffix_42 = (MR_String) "bitfields";
        ShiftInt_47 = (MR_Integer) (Shift_25);
        check_hlds__unify_proc__make_fresh_int_var_and_arg_8_p_0(Context_27, (MR_String) "ShiftVar", ArgNum_23, ShiftInt_47, &ShiftForeignArg_48, &MakeShiftGoal_49, STATE_VARIABLE_Info_0_64, &STATE_VARIABLE_Info_1_83);
        NumBitsInt_50 = (MR_Integer) (NumBits_26);
        check_hlds__unify_proc__make_fresh_int_var_and_arg_8_p_0(Context_27, (MR_String) "NumBitsVar", ArgNum_23, NumBitsInt_50, &NumBitsForeignArg_51, &MakeNumBitsGoal_52, STATE_VARIABLE_Info_1_83, &STATE_VARIABLE_Info_2_85);
        ValuesDecl_43 = (MR_String) "\n        MR_Unsigned mask;\n        MR_Unsigned value_x;\n        MR_Unsigned value_y;\n    ";
        ValuesCode_44 = (MR_String) "\n        mask = (MR_Unsigned) ((UINT64_C(1) << NumBitsVar) - 1);\n        value_x = (word_x >> ShiftVar) & mask;\n        value_y = (word_y >> ShiftVar) & mask;\n " "   ";
        {
          Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_86, 0) = ((MR_Box) (NumBitsForeignArg_51));
          MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeShiftMaskArgs_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeShiftMaskArgs_45, 0) = ((MR_Box) (ShiftForeignArg_48));
          MR_hl_field(1, MaybeShiftMaskArgs_45, 1) = ((MR_Box) (Var_86));
        }
        {
          Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_88, 0) = ((MR_Box) (MakeNumBitsGoal_52));
          MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MaybeShiftMaskGoals_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeShiftMaskGoals_46, 0) = ((MR_Box) (MakeShiftGoal_49));
          MR_hl_field(1, MaybeShiftMaskGoals_46, 1) = ((MR_Box) (Var_88));
        }
      }
      break;
  }
  if ((ArgsLocn_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    ComparePredName_53 = mercury__string__f_43_43_2_f_0((MR_String) "compare_local_uint_", ComparePredNameSuffix_42);
    MaybeWordsArgs_54 = (MR_Word) ((MR_Unsigned) 0U);
    MaybeWordsGoals_55 = (MR_Word) ((MR_Unsigned) 0U);
    WordsDecl_56 = (MR_String) "\n        MR_Unsigned word_x;\n        MR_Unsigned word_y;\n    ";
    WordsCode_57 = (MR_String) "\n        word_x = (MR_Unsigned) TermVarX;\n        word_y = (MR_Unsigned) TermVarY;\n    ";
    *STATE_VARIABLE_Info_65 = STATE_VARIABLE_Info_2_85;
  }
  else
  {
    MR_Word Ptag_58 = ((MR_Word) ((MR_hl_field(1, ArgsLocn_17, 0))));

    ComparePredName_53 = mercury__string__f_43_43_2_f_0((MR_String) "compare_remote_uint_", ComparePredNameSuffix_42);
    check_hlds__unify_proc__make_ptag_and_cell_offset_args_8_p_0(ArgNum_23, Ptag_58, CellOffset_24, Context_27, &MaybeWordsArgs_54, &MaybeWordsGoals_55, STATE_VARIABLE_Info_2_85, STATE_VARIABLE_Info_65);
    WordsDecl_56 = (MR_String) "\n        MR_Unsigned *cell_x;\n        MR_Unsigned *cell_y;\n        MR_Unsigned word_x;\n        MR_Unsigned word_y;\n    ";
    WordsCode_57 = (MR_String) "\n        cell_x = (MR_Unsigned *)\n            (((MR_Unsigned) TermVarX) - (MR_Unsigned) Ptag);\n        cell_y = (MR_Unsigned *)\n            (((MR_Unsigned) Term" "VarY) - (MR_Unsigned) Ptag);\n        word_x = cell_x[CellOffsetVar];\n        word_y = cell_y[CellOffsetVar];\n    ";
  }
  {
    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_94, 0) = ((MR_Box) (TermVarYForeignArg_31));
    MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_93, 0) = ((MR_Box) (TermVarXForeignArg_30));
    MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_94));
  }
  {
    Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_98, 0) = ((MR_Box) (CompareResultForeignArg_32));
    MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), MaybeShiftMaskArgs_45, Var_98);
  Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), MaybeWordsArgs_54, Var_97);
  ForeignArgs_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), Var_93, Var_96);
  Var_102 = mercury__string__f_43_43_2_f_0(ValuesCode_44, (MR_String) "\n        if (value_x < value_y) {\n            ResultVar = MR_COMPARE_LESS;\n        } else if (value_x > value_y) {\n            ResultVar = MR_COMPARE_GREATER;\n " "       } else {\n            ResultVar = MR_COMPARE_EQUAL;\n        }\n    ");
  Var_101 = mercury__string__f_43_43_2_f_0(WordsCode_57, Var_102);
  Var_100 = mercury__string__f_43_43_2_f_0(ValuesDecl_43, Var_101);
  ForeignCode_60 = mercury__string__f_43_43_2_f_0(WordsDecl_56, Var_100);
  Var_104 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  Var_107 = hlds__instmap__instmap_delta_bind_var_1_f_0(CompareResultVar_21);
  Var_112 = check_hlds__unify_proc__pure_proc_foreign_attributes_0_f_0();
  hlds__goal_util__generate_call_foreign_proc_17_p_0(ModuleInfo_16, (MR_Integer) 0, Var_104, ComparePredName_53, (MR_Word) ((MR_Unsigned) 0U), ForeignArgs_59, (MR_Word) ((MR_Unsigned) 0U), Var_107, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Var_112, (MR_Word) ((MR_Unsigned) 0U), ForeignCode_60, Context_27, &CompareGoal_61);
  {
    Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_117, 0) = ((MR_Box) (CompareGoal_61));
    MR_hl_field(1, Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), MaybeShiftMaskGoals_46, Var_117);
  Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), MaybeWordsGoals_55, Var_116);
  {
    CompareConjGoalExpr_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CompareConjGoalExpr_62, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, CompareConjGoalExpr_62, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, CompareConjGoalExpr_62, 2) = ((MR_Box) (Var_115));
  }
  hlds__hlds_goal__goal_info_init_2_p_0(Context_27, &ContextGoalInfo_63);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *CompareConjGoal_28 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (CompareConjGoalExpr_62));
    MR_hl_field(0, base, 1) = ((MR_Box) (ContextGoalInfo_63));
  }
}

static void MR_CALL 
check_hlds__unify_proc__select_and_build_signed_comparison_foreign_proc_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word ArgsLocn_16,
  MR_Word TermType_17,
  MR_Word TermVarX_18,
  MR_Word TermVarY_19,
  MR_Word CompareResultVar_20,
  MR_Integer ArgNum_21,
  MR_Word CellOffset_22,
  MR_Word Shift_23,
  MR_String SizeStr_24,
  MR_Word Context_25,
  MR_Word * CompareConjGoal_26,
  MR_Word STATE_VARIABLE_Info_0_52,
  MR_Word * STATE_VARIABLE_Info_53)
{
  MR_Word TermVarXForeignArg_28;
  MR_Word TermVarYForeignArg_29;
  MR_Word CompareResultForeignArg_30;
  MR_String ValuesDecl_35;
  MR_String ValuesCode_36;
  MR_Integer ShiftInt_38;
  MR_Word ShiftForeignArg_39;
  MR_Word MakeShiftGoal_40;
  MR_String ComparePredName_41;
  MR_Word MaybeWordsArgs_42;
  MR_Word MaybeWordsGoals_43;
  MR_String WordsDecl_44;
  MR_String WordsCode_45;
  MR_Word ForeignArgs_47;
  MR_String ForeignCode_48;
  MR_Word CompareGoal_49;
  MR_Word CompareConjGoalExpr_50;
  MR_Word ContextGoalInfo_51;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_62;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word STATE_VARIABLE_Info_1_85;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_String Var_102;
  MR_String Var_103;
  MR_String Var_104;
  MR_Word Var_106;
  MR_Word Var_109;
  MR_Word Var_114;
  MR_Word Var_117;
  MR_Word Var_118;
  MR_Word Var_119;
  MR_String Var_124;
  MR_String Var_126;
  MR_String Var_127;
  MR_String Var_130;
  MR_String Var_132;
  MR_String Var_133;
  MR_String Var_135;
  MR_String Var_136;

  Var_57 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_55, 0) = ((MR_Box) ((MR_String) "TermVarX"));
    MR_hl_field(0, Var_55, 1) = ((MR_Box) (Var_57));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
  }
  {
    TermVarXForeignArg_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TermVarXForeignArg_28, 0) = ((MR_Box) (TermVarX_18));
    MR_hl_field(0, TermVarXForeignArg_28, 1) = ((MR_Box) (Var_54));
    MR_hl_field(0, TermVarXForeignArg_28, 2) = ((MR_Box) (TermType_17));
    MR_hl_field(0, TermVarXForeignArg_28, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_62 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_60, 0) = ((MR_Box) ((MR_String) "TermVarY"));
    MR_hl_field(0, Var_60, 1) = ((MR_Box) (Var_62));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
  }
  {
    TermVarYForeignArg_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TermVarYForeignArg_29, 0) = ((MR_Box) (TermVarY_19));
    MR_hl_field(0, TermVarYForeignArg_29, 1) = ((MR_Box) (Var_59));
    MR_hl_field(0, TermVarYForeignArg_29, 2) = ((MR_Box) (TermType_17));
    MR_hl_field(0, TermVarYForeignArg_29, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_67 = parse_tree__prog_mode__out_mode_0_f_0();
  {
    Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_65, 0) = ((MR_Box) ((MR_String) "ResultVar"));
    MR_hl_field(0, Var_65, 1) = ((MR_Box) (Var_67));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
  }
  Var_68 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
  {
    CompareResultForeignArg_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CompareResultForeignArg_30, 0) = ((MR_Box) (CompareResultVar_20));
    MR_hl_field(0, CompareResultForeignArg_30, 1) = ((MR_Box) (Var_64));
    MR_hl_field(0, CompareResultForeignArg_30, 2) = ((MR_Box) (Var_68));
    MR_hl_field(0, CompareResultForeignArg_30, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_124 = mercury__string__f_43_43_2_f_0(SizeStr_24, (MR_String) "_t     value_y;\n    ");
  Var_126 = mercury__string__f_43_43_2_f_0((MR_String) "_t     value_x;\n        int", Var_124);
  Var_127 = mercury__string__f_43_43_2_f_0(SizeStr_24, Var_126);
  ValuesDecl_35 = mercury__string__f_43_43_2_f_0((MR_String) "\n        MR_Unsigned mask;\n        int", Var_127);
  Var_130 = mercury__string__f_43_43_2_f_0(SizeStr_24, (MR_String) "_t) (word_y >> ShiftVar) & mask;\n    ");
  Var_132 = mercury__string__f_43_43_2_f_0((MR_String) "_t) (word_x >> ShiftVar) & mask;\n        value_y = (int", Var_130);
  Var_133 = mercury__string__f_43_43_2_f_0(SizeStr_24, Var_132);
  Var_135 = mercury__string__f_43_43_2_f_0((MR_String) ") - 1);\n        value_x = (int", Var_133);
  Var_136 = mercury__string__f_43_43_2_f_0(SizeStr_24, Var_135);
  ValuesCode_36 = mercury__string__f_43_43_2_f_0((MR_String) "\n        mask = (MR_Unsigned) ((UINT64_C(1) << ", Var_136);
  ShiftInt_38 = (MR_Integer) (Shift_23);
  check_hlds__unify_proc__make_fresh_int_var_and_arg_8_p_0(Context_25, (MR_String) "ShiftVar", ArgNum_21, ShiftInt_38, &ShiftForeignArg_39, &MakeShiftGoal_40, STATE_VARIABLE_Info_0_52, &STATE_VARIABLE_Info_1_85);
  if ((ArgsLocn_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Var_142;

    Var_142 = mercury__string__f_43_43_2_f_0(SizeStr_24, (MR_String) "_bitfields");
    ComparePredName_41 = mercury__string__f_43_43_2_f_0((MR_String) "compare_local_int", Var_142);
    MaybeWordsArgs_42 = (MR_Word) ((MR_Unsigned) 0U);
    MaybeWordsGoals_43 = (MR_Word) ((MR_Unsigned) 0U);
    WordsDecl_44 = (MR_String) "\n        MR_Unsigned word_x;\n        MR_Unsigned word_y;\n    ";
    WordsCode_45 = (MR_String) "\n        word_x = (MR_Unsigned) TermVarX;\n        word_y = (MR_Unsigned) TermVarY;\n    ";
    *STATE_VARIABLE_Info_53 = STATE_VARIABLE_Info_1_85;
  }
  else
  {
    MR_Word Ptag_46 = ((MR_Word) ((MR_hl_field(1, ArgsLocn_16, 0))));
    MR_String Var_139;

    Var_139 = mercury__string__f_43_43_2_f_0(SizeStr_24, (MR_String) "_bitfields");
    ComparePredName_41 = mercury__string__f_43_43_2_f_0((MR_String) "compare_remote_int", Var_139);
    check_hlds__unify_proc__make_ptag_and_cell_offset_args_8_p_0(ArgNum_21, Ptag_46, CellOffset_22, Context_25, &MaybeWordsArgs_42, &MaybeWordsGoals_43, STATE_VARIABLE_Info_1_85, STATE_VARIABLE_Info_53);
    WordsDecl_44 = (MR_String) "\n        MR_Unsigned *cell_x;\n        MR_Unsigned *cell_y;\n        MR_Unsigned word_x;\n        MR_Unsigned word_y;\n    ";
    WordsCode_45 = (MR_String) "\n        cell_x = (MR_Unsigned *)\n            (((MR_Unsigned) TermVarX) - (MR_Unsigned) Ptag);\n        cell_y = (MR_Unsigned *)\n            (((MR_Unsigned) Term" "VarY) - (MR_Unsigned) Ptag);\n        word_x = cell_x[CellOffsetVar];\n        word_y = cell_y[CellOffsetVar];\n    ";
  }
  {
    Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_96, 0) = ((MR_Box) (TermVarYForeignArg_29));
    MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_95, 0) = ((MR_Box) (TermVarXForeignArg_28));
    MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_96));
  }
  {
    Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_100, 0) = ((MR_Box) (CompareResultForeignArg_30));
    MR_hl_field(1, Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_99, 0) = ((MR_Box) (ShiftForeignArg_39));
    MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_100));
  }
  Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), MaybeWordsArgs_42, Var_99);
  ForeignArgs_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), Var_95, Var_98);
  Var_104 = mercury__string__f_43_43_2_f_0(ValuesCode_36, (MR_String) "\n        if (value_x < value_y) {\n            ResultVar = MR_COMPARE_LESS;\n        } else if (value_x > value_y) {\n            ResultVar = MR_COMPARE_GREATER;\n " "       } else {\n            ResultVar = MR_COMPARE_EQUAL;\n        }\n    ");
  Var_103 = mercury__string__f_43_43_2_f_0(WordsCode_45, Var_104);
  Var_102 = mercury__string__f_43_43_2_f_0(ValuesDecl_35, Var_103);
  ForeignCode_48 = mercury__string__f_43_43_2_f_0(WordsDecl_44, Var_102);
  Var_106 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  Var_109 = hlds__instmap__instmap_delta_bind_var_1_f_0(CompareResultVar_20);
  Var_114 = check_hlds__unify_proc__pure_proc_foreign_attributes_0_f_0();
  hlds__goal_util__generate_call_foreign_proc_17_p_0(ModuleInfo_15, (MR_Integer) 0, Var_106, ComparePredName_41, (MR_Word) ((MR_Unsigned) 0U), ForeignArgs_47, (MR_Word) ((MR_Unsigned) 0U), Var_109, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Var_114, (MR_Word) ((MR_Unsigned) 0U), ForeignCode_48, Context_25, &CompareGoal_49);
  {
    Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_119, 0) = ((MR_Box) (CompareGoal_49));
    MR_hl_field(1, Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_118, 0) = ((MR_Box) (MakeShiftGoal_40));
    MR_hl_field(1, Var_118, 1) = ((MR_Box) (Var_119));
  }
  Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), MaybeWordsGoals_43, Var_118);
  {
    CompareConjGoalExpr_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CompareConjGoalExpr_50, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, CompareConjGoalExpr_50, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, CompareConjGoalExpr_50, 2) = ((MR_Box) (Var_117));
  }
  hlds__hlds_goal__goal_info_init_2_p_0(Context_25, &ContextGoalInfo_51);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *CompareConjGoal_26 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (CompareConjGoalExpr_50));
    MR_hl_field(0, base, 1) = ((MR_Box) (ContextGoalInfo_51));
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_int_var_and_arg_8_p_0(
  MR_Word Context_9,
  MR_String Name_10,
  MR_Integer SuffixInt_11,
  MR_Integer Value_12,
  MR_Word * Arg_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_Word Type_16;
  MR_Word Var_17;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_String NumStr_26;
  MR_String Name_27;

  Type_16 = parse_tree__builtin_lib_types__int_type_0_f_0();
  NumStr_26 = mercury__string__int_to_string_1_f_0(SuffixInt_11);
  Name_27 = mercury__string__f_43_43_2_f_0(Name_10, NumStr_26);
  check_hlds__unify_proc__unify_proc_info_new_var_5_p_0(Name_27, Type_16, &Var_17, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
  Var_24 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (Name_10));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *Arg_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 2) = ((MR_Box) (Type_16));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  hlds__make_goal__make_int_const_construction_4_p_0(Context_9, Var_17, Value_12, Goal_14);
}

static void MR_CALL 
check_hlds__unify_proc__make_ptag_and_cell_offset_args_8_p_0(
  MR_Integer ArgNum_9,
  MR_Word Ptag_10,
  MR_Word CellOffset_11,
  MR_Word Context_12,
  MR_Word * Args_13,
  MR_Word * Goals_14,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  uint8_t PtagUint8_16 = (uint8_t) (Ptag_10);
  MR_Integer PtagInt_17;
  MR_Word PtagForeignArg_18;
  MR_Word MakePtagGoal_19;
  MR_Integer CellOffsetInt_20;
  MR_Word CellOffsetForeignArg_21;
  MR_Word MakeCellOffsetGoal_22;
  MR_Word STATE_VARIABLE_Info_1_26;
  MR_Word Var_29;
  MR_Word Var_31;
  MR_Word Type_33;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_String NumStr_40;
  MR_String Name_41;
  MR_Word Type_54;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_String NumStr_61;
  MR_String Name_62;

  PtagInt_17 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_16);
  Type_33 = parse_tree__builtin_lib_types__int_type_0_f_0();
  NumStr_40 = mercury__string__int_to_string_1_f_0(ArgNum_9);
  Name_41 = mercury__string__f_43_43_2_f_0((MR_String) "Ptag", NumStr_40);
  check_hlds__unify_proc__unify_proc_info_new_var_5_p_0(Name_41, Type_33, &Var_34, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_1_26);
  Var_38 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) ((MR_String) "Ptag"));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
  }
  {
    PtagForeignArg_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PtagForeignArg_18, 0) = ((MR_Box) (Var_34));
    MR_hl_field(0, PtagForeignArg_18, 1) = ((MR_Box) (Var_36));
    MR_hl_field(0, PtagForeignArg_18, 2) = ((MR_Box) (Type_33));
    MR_hl_field(0, PtagForeignArg_18, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  hlds__make_goal__make_int_const_construction_4_p_0(Context_12, Var_34, PtagInt_17, &MakePtagGoal_19);
  CellOffsetInt_20 = (MR_Integer) (CellOffset_11);
  Type_54 = parse_tree__builtin_lib_types__int_type_0_f_0();
  NumStr_61 = mercury__string__int_to_string_1_f_0(ArgNum_9);
  Name_62 = mercury__string__f_43_43_2_f_0((MR_String) "CellOffsetVar", NumStr_61);
  check_hlds__unify_proc__unify_proc_info_new_var_5_p_0(Name_62, Type_54, &Var_55, STATE_VARIABLE_Info_1_26, STATE_VARIABLE_Info_24);
  Var_59 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_58, 0) = ((MR_Box) ((MR_String) "CellOffsetVar"));
    MR_hl_field(0, Var_58, 1) = ((MR_Box) (Var_59));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
  }
  {
    CellOffsetForeignArg_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CellOffsetForeignArg_21, 0) = ((MR_Box) (Var_55));
    MR_hl_field(0, CellOffsetForeignArg_21, 1) = ((MR_Box) (Var_57));
    MR_hl_field(0, CellOffsetForeignArg_21, 2) = ((MR_Box) (Type_54));
    MR_hl_field(0, CellOffsetForeignArg_21, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  hlds__make_goal__make_int_const_construction_4_p_0(Context_12, Var_55, CellOffsetInt_20, &MakeCellOffsetGoal_22);
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (CellOffsetForeignArg_21));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Args_13 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (PtagForeignArg_18));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (MakeCellOffsetGoal_22));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Goals_14 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (MakePtagGoal_19));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_31));
  }
}

static MR_Word MR_CALL 
check_hlds__unify_proc__pure_proc_foreign_attributes_0_f_0(void)
{
  MR_Word STATE_VARIABLE_Attrs_3;
  MR_Word STATE_VARIABLE_Attrs_1_4;
  MR_Word STATE_VARIABLE_Attrs_2_7;
  MR_Word STATE_VARIABLE_Attrs_3_9;
  MR_Word STATE_VARIABLE_Attrs_4_11;
  MR_Word STATE_VARIABLE_Attrs_5_13;
  MR_Word STATE_VARIABLE_Attrs_6_15;
  MR_Word STATE_VARIABLE_Attrs_7_17;
  MR_Word STATE_VARIABLE_Attrs_8_19;
  MR_Word STATE_VARIABLE_Attrs_9_21;
  MR_Word STATE_VARIABLE_Attrs_10_23;

  STATE_VARIABLE_Attrs_1_4 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
  parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_1_4, &STATE_VARIABLE_Attrs_2_7);
  parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_2_7, &STATE_VARIABLE_Attrs_3_9);
  parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_3_9, &STATE_VARIABLE_Attrs_4_11);
  parse_tree__prog_data_foreign__set_terminates_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_4_11, &STATE_VARIABLE_Attrs_5_13);
  parse_tree__prog_data_foreign__set_may_throw_exception_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_5_13, &STATE_VARIABLE_Attrs_6_15);
  parse_tree__prog_data_foreign__set_may_modify_trail_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_6_15, &STATE_VARIABLE_Attrs_7_17);
  parse_tree__prog_data_foreign__set_may_call_mm_tabled_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_7_17, &STATE_VARIABLE_Attrs_8_19);
  parse_tree__prog_data_foreign__set_affects_liveness_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_8_19, &STATE_VARIABLE_Attrs_9_21);
  parse_tree__prog_data_foreign__set_allocates_memory_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_9_21, &STATE_VARIABLE_Attrs_10_23);
  parse_tree__prog_data_foreign__set_registers_roots_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_10_23, &STATE_VARIABLE_Attrs_3);
  return STATE_VARIABLE_Attrs_3;
}

static void MR_CALL 
check_hlds__unify_proc__prepare_for_conjoining_arg_comparisons_7_p_0(
  MR_Word CtorArgRepns_8,
  MR_Integer ArgNum_9,
  MR_Word ResultVar_10,
  MR_Word * CurCompareResultVar_11,
  MR_Word * ConjoinKind_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  if ((CtorArgRepns_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *CurCompareResultVar_11 = ResultVar_10;
    *ConjoinKind_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
  }
  else
  {
    MR_Word HeadCtorArgRepn_14 = ((MR_Word) ((MR_hl_field(1, CtorArgRepns_8, 0))));
    MR_Word TailCtorArgRepns_15 = ((MR_Word) ((MR_hl_field(1, CtorArgRepns_8, 1))));
    MR_Word Var_20;
    MR_String NumStr_21;
    MR_String Name_22;

    Var_20 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
    NumStr_21 = mercury__string__int_to_string_1_f_0(ArgNum_9);
    Name_22 = mercury__string__f_43_43_2_f_0((MR_String) "SubResult", NumStr_21);
    check_hlds__unify_proc__unify_proc_info_new_var_5_p_0(Name_22, Var_20, CurCompareResultVar_11, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *ConjoinKind_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadCtorArgRepn_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailCtorArgRepns_15));
      MR_hl_field(1, base, 2) = ((MR_Box) (*CurCompareResultVar_11));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_3(
  void * env_ptr_arg)
{
  struct check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__ExistQTVar_7 = ((MR_Word) ((env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__conv0_ExistQTVar_7));
  check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_2(env_ptr);
}

static void MR_CALL 
check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_4(
  void * env_ptr_arg)
{
  struct check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__TypeInfo_16_16 = (MR_Word) (&check_hlds__unify_proc_scalar_common_1[0]);
  (env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__TypeInfo_16_16, ((MR_Box) ((env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__ExistQTVar_7)), ((MR_Box) ((env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__Var_15)));
  if ((env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__succeeded)
    check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_1(env_ptr);
}

static void MR_CALL 
check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_2(
  void * env_ptr_arg)
{
  struct check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0_s *) (env_ptr_arg);

  parse_tree__prog_type_scan__type_contains_var_2_p_0((env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__Type_4, &(env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__Var_15, check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_4, env_ptr);
}

static void MR_CALL 
check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_5(
  void * env_ptr_arg)
{
  struct check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&check_hlds__unify_proc_scalar_common_1[0]), &(env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__conv0_ExistQTVar_7, (env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__ExistQTVars_5, check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_3, env_ptr);
      (env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(
  MR_Word UCParams_3,
  MR_Word Type_4)
{
  struct check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0_s env;

  (env).check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__Type_4 = Type_4;
  {
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;

    (env).check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__ExistQTVars_5 = ((MR_Word) ((MR_hl_field(0, UCParams_3, 2))));
    check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_5(&env);
    return (env).check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__unify_proc__ctor_repn_to_cons_id_2_f_0(
  MR_Word TypeCtor_4,
  MR_Word CtorRepn_5)
{
  MR_Word ConsId_6;
  MR_Word FunctorName_9 = ((MR_Word) ((MR_hl_field(0, CtorRepn_5, 2))));
  MR_Integer FunctorArity_12 = ((MR_Integer) ((MR_hl_field(0, CtorRepn_5, 5))));
  MR_Word Var_14;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (FunctorName_9));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (FunctorArity_12));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) (TypeCtor_4));
  }
  ConsId_6 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_14)));
  return ConsId_6;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__is_ctor_with_all_locally_packed_unsigned_args_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__IntroducedFrom__pred__is_ctor_with_all_locally_packed_unsigned_args__1404__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__is_ctor_with_all_locally_packed_unsigned_args_2_p_0(
  MR_Word CtorRepn_3,
  uint8_t * PtagUint8_4)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_42_42;
  MR_Word ConsTag_8 = ((MR_Word) ((MR_hl_field(0, CtorRepn_3, 3))));
  MR_Word CtorArgRepns_9 = ((MR_Word) ((MR_hl_field(0, CtorRepn_3, 4))));
  MR_Integer Arity_10 = ((MR_Integer) ((MR_hl_field(0, CtorRepn_3, 5))));
  MR_Word LocalArgsTagInfo_12;
  MR_Word IsArgUnsignedComparable_17;

  succeeded = (Arity_10 > (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = ((((MR_tag((MR_Word) ConsTag_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsTag_8, 0)))) == (MR_Integer) 12)));
    if (succeeded)
    {
      LocalArgsTagInfo_12 = ((MR_Word) ((MR_hl_field(3, ConsTag_8, 1))));
      if ((LocalArgsTagInfo_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *PtagUint8_4 = UINT8_C(0);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Ptag_13 = ((MR_Word) ((MR_hl_field(1, LocalArgsTagInfo_12, 0))));
        MR_Word LocalSecTag_14 = ((MR_Word) ((MR_hl_field(1, LocalArgsTagInfo_12, 1))));
        MR_Unsigned Var_34;

        *PtagUint8_4 = (uint8_t) (Ptag_13);
        Var_34 = ((MR_Unsigned) ((MR_hl_field(0, LocalSecTag_14, 0))));
        succeeded = (Var_34 == (MR_Unsigned) 0U);
      }
      if (succeeded)
      {
        IsArgUnsignedComparable_17 = (MR_Word) (&check_hlds__unify_proc_scalar_common_6[1]);
        TypeCtorInfo_42_42 = (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0);
        succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_42_42, IsArgUnsignedComparable_17, CtorArgRepns_9);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_enum_7_p_0(
  MR_Word Context_8,
  MR_Word Res_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_Word ModuleInfo_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, 0))));
  MR_Word IntType_15;
  MR_Word CastX_16;
  MR_Word CastY_17;
  MR_Word CastXGoal_18;
  MR_Word CastYGoal_19;
  MR_Word CompareGoal_20;
  MR_Word GoalInfo0_21;
  MR_Word GoalInfo_22;
  MR_Word Goal_23;
  MR_Word STATE_VARIABLE_Info_1_28;
  MR_Word STATE_VARIABLE_Info_2_31;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_String NumStr_53;
  MR_String Name_54;
  MR_String NumStr_55;
  MR_String Name_56;

  IntType_15 = parse_tree__builtin_lib_types__int_type_0_f_0();
  mercury__string__int_to_string_2_p_0((MR_Integer) 1, &NumStr_53);
  mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", NumStr_53, &Name_54);
  check_hlds__unify_proc__unify_proc_info_new_var_5_p_0(Name_54, IntType_15, &CastX_16, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_1_28);
  mercury__string__int_to_string_2_p_0((MR_Integer) 2, &NumStr_55);
  mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", NumStr_55, &Name_56);
  check_hlds__unify_proc__unify_proc_info_new_var_5_p_0(Name_56, IntType_15, &CastY_17, STATE_VARIABLE_Info_1_28, &STATE_VARIABLE_Info_2_31);
  hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, X_10, CastX_16, Context_8, &CastXGoal_18);
  hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Y_11, CastY_17, Context_8, &CastYGoal_19);
  Var_34 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (CastY_17));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (CastX_16));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Res_9));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_37));
  }
  check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_14, Var_34, (MR_String) "builtin_compare_int", Var_36, Context_8, &CompareGoal_20);
  hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_21);
  hlds__hlds_goal__goal_info_set_context_3_p_0(Context_8, GoalInfo0_21, &GoalInfo_22);
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (CompareGoal_20));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (CastYGoal_19));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (CastXGoal_18));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_41));
  }
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_40, GoalInfo_22, &Goal_23);
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Y_11));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (X_10));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (Res_9));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
  }
  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_45, Goal_23, Context_8, Clause_12, STATE_VARIABLE_Info_2_31, STATE_VARIABLE_Info_25);
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_eqv_8_p_0(
  MR_Word Context_9,
  MR_Word EqvType_10,
  MR_Word Res_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  MR_Word ModuleInfo_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, 0))));
  MR_Word CastX_17;
  MR_Word CastY_18;
  MR_Word CastXGoal_19;
  MR_Word CastYGoal_20;
  MR_Word CompareGoal_21;
  MR_Word GoalInfo0_22;
  MR_Word GoalInfo_23;
  MR_Word Goal_24;
  MR_Word STATE_VARIABLE_Info_1_29;
  MR_Word STATE_VARIABLE_Info_2_32;
  MR_Word Var_35;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_46;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_String NumStr_54;
  MR_String Name_55;
  MR_String NumStr_56;
  MR_String Name_57;

  mercury__string__int_to_string_2_p_0((MR_Integer) 1, &NumStr_54);
  mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", NumStr_54, &Name_55);
  check_hlds__unify_proc__unify_proc_info_new_var_5_p_0(Name_55, EqvType_10, &CastX_17, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_1_29);
  mercury__string__int_to_string_2_p_0((MR_Integer) 2, &NumStr_56);
  mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", NumStr_56, &Name_57);
  check_hlds__unify_proc__unify_proc_info_new_var_5_p_0(Name_57, EqvType_10, &CastY_18, STATE_VARIABLE_Info_1_29, &STATE_VARIABLE_Info_2_32);
  hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, X_12, CastX_17, Context_9, &CastXGoal_19);
  hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, Y_13, CastY_18, Context_9, &CastYGoal_20);
  Var_35 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (CastY_18));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (CastX_17));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Res_11));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_38));
  }
  check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_16, Var_35, (MR_String) "compare", Var_37, Context_9, &CompareGoal_21);
  hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_22);
  hlds__hlds_goal__goal_info_set_context_3_p_0(Context_9, GoalInfo0_22, &GoalInfo_23);
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (CompareGoal_21));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (CastYGoal_20));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_43));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (CastXGoal_19));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_42));
  }
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_41, GoalInfo_23, &Goal_24);
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Y_13));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (X_12));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (Res_11));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
  }
  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_46, Goal_24, Context_9, Clause_14, STATE_VARIABLE_Info_2_32, STATE_VARIABLE_Info_26);
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_builtin_8_p_0(
  MR_Word CtorCat_9,
  MR_Word Context_10,
  MR_Word Res_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_Word ModuleInfo_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_23, 0))));
  MR_Word ArgVars_17;
  MR_String Name_18;
  MR_Word CompareGoal_22;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_53;

  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Y_13));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (X_12));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_26));
  }
  {
    ArgVars_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArgVars_17, 0) = ((MR_Box) (Res_11));
    MR_hl_field(1, ArgVars_17, 1) = ((MR_Box) (Var_25));
  }
  switch (MR_tag((MR_Word) CtorCat_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(CtorCat_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 4:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body_builtin\'/8", (MR_String) "bad ctor category");
            return;
          }
          break;
        case (MR_Integer) 3:
          Name_18 = (MR_String) "builtin_compare_pred";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_55 = ((MR_Word) ((MR_hl_field(1, CtorCat_9, 0))));

        switch (MR_tag((MR_Word) Var_55)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Var_55)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Name_18 = (MR_String) "builtin_compare_float";
                break;
              case (MR_Integer) 1:
                Name_18 = (MR_String) "builtin_compare_character";
                break;
              case (MR_Integer) 2:
                Name_18 = (MR_String) "builtin_compare_string";
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_56 = ((MR_Unsigned) ((MR_hl_field(1, Var_55, 0))) & (MR_Integer) 15);

              Name_18 = ((&check_hlds__unify_proc_vector_common_3[10 + Var_56]))->check_hlds__unify_proc__vector_common_type_3_0__vct_3_f_0;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body_builtin\'/8", (MR_String) "bad ctor category");
        return;
      }
      break;
  }
  Var_53 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_16, Var_53, Name_18, ArgVars_17, Context_10, &CompareGoal_22);
  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), ArgVars_17, CompareGoal_22, Context_10, Clause_14, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_user_8_p_0(
  MR_Word Context_9,
  MR_Word NonCanonical_10,
  MR_Word Res_11,
  MR_Word X_12,
  MR_Word Y_13,
  MR_Word * Clause_14,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_Word ArgVars_19;
  MR_Word Goal_20;
  MR_Word STATE_VARIABLE_Info_1_45;

  switch (MR_tag((MR_Word) NonCanonical_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body_user\'/8", (MR_String) "trying to create compare proc for subtype");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ComparePredName_47 = ((MR_Word) ((MR_hl_field(1, NonCanonical_10, 1))));
        MR_Word PredId_48;
        MR_Integer ModeId_49;
        MR_Word Call_50;
        MR_Word GoalInfo_51;
        MR_Word Goal0_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_58;

        PredId_48 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        ModeId_49 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (Y_13));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (X_12));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
        }
        {
          ArgVars_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ArgVars_19, 0) = ((MR_Box) (Res_11));
          MR_hl_field(1, ArgVars_19, 1) = ((MR_Box) (Var_53));
        }
        {
          Call_50 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Call_50, 0) = ((MR_Box) (PredId_48));
          MR_hl_field(2, Call_50, 1) = ((MR_Box) (ModeId_49));
          MR_hl_field(2, Call_50, 2) = ((MR_Box) (ArgVars_19));
          MR_hl_field(2, Call_50, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(2, Call_50, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Call_50, 5) = ((MR_Box) (ComparePredName_47));
        }
        hlds__hlds_goal__goal_info_init_2_p_0(Context_9, &GoalInfo_51);
        {
          Goal0_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Goal0_52, 0) = ((MR_Box) (Call_50));
          MR_hl_field(0, Goal0_52, 1) = ((MR_Box) (GoalInfo_51));
        }
        {
          Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_58, 0) = ((MR_Box) (Res_11));
        }
        check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_9, X_12, Y_13, Var_58, Goal0_52, &Goal_20, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_1_45);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ModuleInfo_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, 0))));
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_37;

        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (Y_13));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_34, 0) = ((MR_Box) (X_12));
          MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_35));
        }
        {
          ArgVars_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ArgVars_19, 0) = ((MR_Box) (Res_11));
          MR_hl_field(1, ArgVars_19, 1) = ((MR_Box) (Var_34));
        }
        Var_37 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_18, Var_37, (MR_String) "builtin_compare_non_canonical_type", ArgVars_19, Context_9, &Goal_20);
        STATE_VARIABLE_Info_1_45 = STATE_VARIABLE_Info_0_28;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, NonCanonical_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ComparePredName_22 = ((MR_Word) ((MR_hl_field(3, NonCanonical_10, 1))));
            MR_Word PredId_23;
            MR_Integer ModeId_24;
            MR_Word Call_25;
            MR_Word GoalInfo_26;
            MR_Word Goal0_27;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_44;

            PredId_23 = hlds__hlds_pred__invalid_pred_id_0_f_0();
            ModeId_24 = hlds__hlds_pred__invalid_proc_id_0_f_0();
            {
              Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_40, 0) = ((MR_Box) (Y_13));
              MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_39, 0) = ((MR_Box) (X_12));
              MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_40));
            }
            {
              ArgVars_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ArgVars_19, 0) = ((MR_Box) (Res_11));
              MR_hl_field(1, ArgVars_19, 1) = ((MR_Box) (Var_39));
            }
            {
              Call_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Call_25, 0) = ((MR_Box) (PredId_23));
              MR_hl_field(2, Call_25, 1) = ((MR_Box) (ModeId_24));
              MR_hl_field(2, Call_25, 2) = ((MR_Box) (ArgVars_19));
              MR_hl_field(2, Call_25, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(2, Call_25, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(2, Call_25, 5) = ((MR_Box) (ComparePredName_22));
            }
            hlds__hlds_goal__goal_info_init_2_p_0(Context_9, &GoalInfo_26);
            {
              Goal0_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Goal0_27, 0) = ((MR_Box) (Call_25));
              MR_hl_field(0, Goal0_27, 1) = ((MR_Box) (GoalInfo_26));
            }
            {
              Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_44, 0) = ((MR_Box) (Res_11));
            }
            check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_9, X_12, Y_13, Var_44, Goal0_27, &Goal_20, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_1_45);
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body_user\'/8", (MR_String) "trying to create compare proc for abstract noncanonical type");
            return;
          }
          break;
      }
      break;
  }
  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), ArgVars_19, Goal_20, Context_9, Clause_14, STATE_VARIABLE_Info_1_45, STATE_VARIABLE_Info_29);
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_dummy_7_p_0(
  MR_Word Context_8,
  MR_Word Res_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_Word Goal_14;
  MR_Word Var_18;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_Word SymName_25;
  MR_Word DuCtor_26;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_Word Builtin_30;
  MR_Word Var_31;

  Var_27 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    SymName_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_25, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, SymName_25, 1) = ((MR_Box) ((MR_String) "="));
  }
  Builtin_30 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Builtin_30));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_String) "comparison_result"));
  }
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (Var_31));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    DuCtor_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, DuCtor_26, 0) = ((MR_Box) (SymName_25));
    MR_hl_field(0, DuCtor_26, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, DuCtor_26, 2) = ((MR_Box) (Var_29));
  }
  Var_23 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_26)));
  hlds__make_goal__make_const_construction_4_p_0(Context_8, Res_9, Var_23, &Goal_14);
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (Y_11));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (X_10));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_21));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (Res_9));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_20));
  }
  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_18, Goal_14, Context_8, Clause_12, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
}

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body__284__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_6_p_0(
  MR_Word SpecDefnInfo_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word * Clauses_10,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_47, 0))));
  MR_Word TypeBody_13 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_7, 5))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_7, 7))));
  MR_Word SuperType_18;
  MR_Word TypeBodyDu_15;
  MR_Word Var_49;

  succeeded = ((MR_tag((MR_Word) TypeBody_13)) == (MR_Integer) 0);
  if (succeeded)
  {
    TypeBodyDu_15 = (MR_Word) ((MR_Word) (TypeBody_13));
    Var_49 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_15, 2))));
    succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      SuperType_18 = ((MR_Word) ((MR_hl_field(1, Var_49, 0))));
  }
  if (succeeded)
  {
    MR_Word TVarSet_22 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_7, 2))));
    MR_Word BaseType_23;
    MR_Word Clause_24;

    check_hlds__unify_proc__get_du_base_type_4_p_0(ModuleInfo_12, TVarSet_22, SuperType_18, &BaseType_23);
    check_hlds__unify_proc__generate_unify_proc_body_eqv_7_p_0(Context_14, BaseType_23, X_8, Y_9, &Clause_24, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Clauses_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Clause_24));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word UserEqComp_25;

    succeeded = hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(ModuleInfo_12, TypeBody_13, &UserEqComp_25);
    if (succeeded)
    {
      MR_Word Clause_82;

      check_hlds__unify_proc__generate_unify_proc_body_user_7_p_0(UserEqComp_25, X_8, Y_9, Context_14, &Clause_82, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Clauses_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Clause_82));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      switch (MR_tag((MR_Word) TypeBody_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MaybeSuperType_35;
            MR_Word MaybeRepn_37;
            MR_Word Repn_39;
            MR_Word DuTypeKind_40;
            MR_Word Var_68;
            MR_Word TypeBodyDu_94 = (MR_Word) ((MR_Word) (TypeBody_13));
            MR_Word Var_123;

            MaybeSuperType_35 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_94, 2))));
            MaybeRepn_37 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_94, 4))));
            {
              Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_68, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[1]));
              MR_hl_field(0, Var_68, 1) = ((MR_Box) (check_hlds__unify_proc__generate_unify_proc_body_6_p_0_1));
              MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_68, 3) = ((MR_Box) (MaybeSuperType_35));
              MR_hl_field(0, Var_68, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_68, (MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body\'/6", (MR_String) "MaybeSuperType != not_a_subtype");
            if ((MaybeRepn_37 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body\'/6", (MR_String) "MaybeRepn = no");
                return;
              }
            else
              Repn_39 = ((MR_Word) ((MR_hl_field(1, MaybeRepn_37, 0))));
            Var_123 = ((MR_Word) ((MR_hl_field(0, Repn_39, 0))));
            DuTypeKind_40 = ((MR_Word) ((MR_hl_field(0, Repn_39, 3))));
            switch (MR_tag((MR_Word) DuTypeKind_40)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(DuTypeKind_40)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Clause_87;

                      check_hlds__unify_proc__generate_unify_proc_body_enum_6_p_0(Context_14, X_8, Y_9, &Clause_87, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Clauses_10 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Clause_87));
                        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Clause_88;

                      check_hlds__unify_proc__generate_unify_proc_body_dummy_6_p_0(Context_14, X_8, Y_9, &Clause_88, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Clauses_10 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Clause_88));
                        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0(SpecDefnInfo_7, Var_123, X_8, Y_9, Clauses_10, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Clause_87;

                  check_hlds__unify_proc__generate_unify_proc_body_enum_6_p_0(Context_14, X_8, Y_9, &Clause_87, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Clauses_10 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Clause_87));
                    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgType_43 = ((MR_Word) ((MR_hl_field(2, DuTypeKind_40, 1))));
                  MR_Word ArgIsDummy_45;

                  ArgIsDummy_45 = hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_12, ArgType_43);
                  switch (ArgIsDummy_45) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Clause_89;

                        check_hlds__unify_proc__generate_unify_proc_body_dummy_6_p_0(Context_14, X_8, Y_9, &Clause_89, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *Clauses_10 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (Clause_89));
                          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word CtorRepns_46 = ((MR_Word) ((MR_hl_field(0, Repn_39, 0))));

                        check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0(SpecDefnInfo_7, CtorRepns_46, X_8, Y_9, Clauses_10, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
                      }
                      break;
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_63;
            MR_Word Clause_85;

            Var_63 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
            check_hlds__unify_proc__generate_unify_proc_body_eqv_7_p_0(Context_14, Var_63, X_8, Y_9, &Clause_85, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Clauses_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Clause_85));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word EqvType_29 = ((MR_Word) ((MR_hl_field(2, TypeBody_13, 0))));
            MR_Word Clause_84;

            succeeded = parse_tree__prog_type_test__type_is_higher_order_1_p_0(EqvType_29);
            if (succeeded)
              check_hlds__unify_proc__generate_unify_proc_body_builtin_7_p_0((MR_Word) ((MR_Unsigned) 12U), Context_14, X_8, Y_9, &Clause_84, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
            else
            {
              MR_Word EqvIsDummy_30;

              EqvIsDummy_30 = hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_12, EqvType_29);
              switch (EqvIsDummy_30) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  check_hlds__unify_proc__generate_unify_proc_body_dummy_6_p_0(Context_14, X_8, Y_9, &Clause_84, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
                  break;
                case (MR_Integer) 1:
                  check_hlds__unify_proc__generate_unify_proc_body_eqv_7_p_0(Context_14, EqvType_29, X_8, Y_9, &Clause_84, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
                  break;
              }
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Clauses_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Clause_84));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, TypeBody_13, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Clause_86;

                check_hlds__unify_proc__generate_unify_proc_body_solver_6_p_0(Context_14, X_8, Y_9, &Clause_86, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Clauses_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Clause_86));
                  MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Clause_83;

                succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(ModuleInfo_12);
                if (succeeded)
                {
                  MR_Word TypeCtor_27 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_7, 4))));
                  MR_Word CtorCat_28;

                  CtorCat_28 = hlds__type_util__classify_type_ctor_2_f_0(ModuleInfo_12, TypeCtor_27);
                  check_hlds__unify_proc__generate_unify_proc_body_builtin_7_p_0(CtorCat_28, Context_14, X_8, Y_9, &Clause_83, STATE_VARIABLE_Info_0_47, STATE_VARIABLE_Info_48);
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body\'/6", (MR_String) "trying to create unify proc for abstract type");
                    return;
                  }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Clauses_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Clause_83));
                  MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
          }
          break;
      }
  }
}

static void MR_CALL 
check_hlds__unify_proc__get_du_base_type_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TVarSet_6,
  MR_Word Type_7,
  MR_Word * BaseType_8)
{
  MR_Word TypeTable_9;

  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, &TypeTable_9);
  check_hlds__unify_proc__get_du_base_type_loop_4_p_0(TypeTable_9, TVarSet_6, Type_7, BaseType_8);
}

static void MR_CALL 
check_hlds__unify_proc__get_du_base_type_loop_4_p_0(
  MR_Word TypeTable_5,
  MR_Word TVarSet_6,
  MR_Word Type_7,
  MR_Word * BaseType_8)
{
  while (MR_TRUE)
  {
    MR_Word TypeCtor_9;
    MR_Word TypeArgs_10;
    MR_Word TypeDefn_11;
    MR_Word TypeBody_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_7, &TypeCtor_9, &TypeArgs_10);
    hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_5, TypeCtor_9, &TypeDefn_11);
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_11, &TypeBody_12);
    switch (MR_tag((MR_Word) TypeBody_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeBodyDu_13 = (MR_Word) ((MR_Word) (TypeBody_12));
          MR_Word MaybeSuperType_16 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_13, 2))));

          if ((MaybeSuperType_16 == (MR_Word) ((MR_Unsigned) 0U)))
            *BaseType_8 = Type_7;
          else
          {
            MR_Word SuperType0_20 = ((MR_Word) ((MR_hl_field(1, MaybeSuperType_16, 0))));
            MR_Word TypeDefnTVarSet_21;
            MR_Word TypeDefnTypeParams_22;
            MR_Word SuperType_23;
            MR_Word Renaming_37;
            MR_Word TypeParams_38;
            MR_Word TSubst_39;
            MR_Word Type1_40;
            MR_Word _MergedTVarSet_36;
            MR_Word next_value_of_Type_7;

            hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_11, &TypeDefnTVarSet_21);
            hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_11, &TypeDefnTypeParams_22);
            parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet_6, TypeDefnTVarSet_21, &_MergedTVarSet_36, &Renaming_37);
            parse_tree__prog_type_subst__apply_renaming_to_tvars_3_p_0(Renaming_37, TypeDefnTypeParams_22, &TypeParams_38);
            mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_38, TypeArgs_10, &TSubst_39);
            parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0(Renaming_37, SuperType0_20, &Type1_40);
            parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TSubst_39, Type1_40, &SuperType_23);
            // direct tailcall eliminated
            ;
            next_value_of_Type_7 = SuperType_23;
            Type_7 = next_value_of_Type_7;
            continue;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.get_du_base_type_loop\'/4", (MR_String) "foreign type");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.get_du_base_type_loop\'/4", (MR_String) "eqv type");
          return;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TypeBody_12, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.get_du_base_type_loop\'/4", (MR_String) "solver type");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.get_du_base_type_loop\'/4", (MR_String) "abstract type");
              return;
            }
            break;
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body_du__677__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body_du__625__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0(
  MR_Word SpecDefnInfo_8,
  MR_Word CtorRepns_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clauses_12,
  MR_Word STATE_VARIABLE_Info_0_45,
  MR_Word * STATE_VARIABLE_Info_46)
{
  MR_bool succeeded;
  MR_Word UCOptions_14;
  MR_Word Context_15;
  MR_Word Goal_36;
  MR_Word PackedOps_37;
  MR_Word STATE_VARIABLE_Info_2_53;
  MR_Word TypeCtorInfo_118_118;
  MR_Word MayUnifyCtorAsWhole_16;
  MR_Word Var_47;
  MR_Word Var_104;

  UCOptions_14 = check_hlds__unify_proc__lookup_unify_compare_options_1_f_0(STATE_VARIABLE_Info_0_45);
  Context_15 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_8, 7))));
  Var_47 = ((((MR_Unsigned) ((MR_hl_field(0, UCOptions_14, 0))) >> 1)) & (MR_Integer) 1);
  Var_104 = ((MR_Unsigned) ((MR_hl_field(0, UCOptions_14, 0))) & (MR_Integer) 1);
  succeeded = (Var_47 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (Var_104 == (MR_Integer) 1);
    if (succeeded)
    {
      MayUnifyCtorAsWhole_16 = (MR_Word) (&check_hlds__unify_proc_scalar_common_6[0]);
      TypeCtorInfo_118_118 = (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0);
      succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_118_118, MayUnifyCtorAsWhole_16, CtorRepns_9);
    }
  }
  if (succeeded)
  {
    MR_Word CastType_28;
    MR_Word CastX_29;
    MR_Word CastY_30;
    MR_Word CastXGoal_31;
    MR_Word CastYGoal_32;
    MR_Word EqualityGoal_33;
    MR_Word GoalExpr_34;
    MR_Word GoalInfo_35;
    MR_Word STATE_VARIABLE_Info_1_51;
    MR_Word Var_56;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word ModuleInfo_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_45, 0))));
    MR_Word Globals_120;
    MR_Word CastPointers_121;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_119, &Globals_120);
    libs__globals__lookup_bool_option_3_p_0(Globals_120, (MR_Integer) 761, &CastPointers_121);
    switch (CastPointers_121) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        CastType_28 = parse_tree__builtin_lib_types__int_type_0_f_0();
        break;
      case (MR_Integer) 1:
        CastType_28 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
        break;
    }
    check_hlds__unify_proc__unify_proc_info_new_var_5_p_0((MR_String) "CastX", CastType_28, &CastX_29, STATE_VARIABLE_Info_0_45, &STATE_VARIABLE_Info_1_51);
    check_hlds__unify_proc__unify_proc_info_new_var_5_p_0((MR_String) "CastY", CastType_28, &CastY_30, STATE_VARIABLE_Info_1_51, &STATE_VARIABLE_Info_2_53);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, X_10, CastX_29, Context_15, &CastXGoal_31);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Y_11, CastY_30, Context_15, &CastYGoal_32);
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_56, 0) = ((MR_Box) (CastY_30));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(CastX_29, Var_56, Context_15, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &EqualityGoal_33);
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) (EqualityGoal_33));
      MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (CastYGoal_32));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) (CastXGoal_31));
      MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_61));
    }
    {
      GoalExpr_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GoalExpr_34, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, GoalExpr_34, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, GoalExpr_34, 2) = ((MR_Box) (Var_60));
    }
    hlds__hlds_goal__goal_info_init_2_p_0(Context_15, &GoalInfo_35);
    {
      Goal_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_36, 0) = ((MR_Box) (GoalExpr_34));
      MR_hl_field(0, Goal_36, 1) = ((MR_Box) (GoalInfo_35));
    }
    PackedOps_37 = (MR_Integer) 1;
  }
  else
  {
    MR_Word Goal0_38;
    MR_Word STATE_VARIABLE_Info_3_64;

    check_hlds__unify_proc__generate_du_unify_cases_8_p_0(SpecDefnInfo_8, UCOptions_14, X_10, Y_11, CtorRepns_9, &Goal0_38, STATE_VARIABLE_Info_0_45, &STATE_VARIABLE_Info_3_64);
    check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_15, X_10, Y_11, (MR_Word) ((MR_Unsigned) 0U), Goal0_38, &Goal_36, STATE_VARIABLE_Info_3_64, &STATE_VARIABLE_Info_2_53);
    PackedOps_37 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_2_53, 3))) & (MR_Integer) 1);
  }
  switch (PackedOps_37) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Clause_39;
        MR_Word Var_68;
        MR_Word Var_70;

        {
          Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_70, 0) = ((MR_Box) (Y_11));
          MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_68, 0) = ((MR_Box) (X_10));
          MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_70));
        }
        check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_68, Goal_36, Context_15, &Clause_39, STATE_VARIABLE_Info_2_53, STATE_VARIABLE_Info_46);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Clauses_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Clause_39));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InInClause_40;
        MR_Word NonPackedUCOptions_41;
        MR_Word NonPackedGoal0_42;
        MR_Word NonPackedGoal_43;
        MR_Word NonInInClause_44;
        MR_Word Var_74;
        MR_Word STATE_VARIABLE_Info_6_75;
        MR_Word Var_76;
        MR_Word STATE_VARIABLE_Info_7_79;
        MR_Word STATE_VARIABLE_Info_8_81;
        MR_Word Var_82;
        MR_Word Var_85;
        MR_Word STATE_VARIABLE_Info_9_88;
        MR_Word Var_94;
        MR_Word Var_109;
        MR_Word Var_111;
        MR_Word Var_112;
        MR_Word Var_113;

        {
          Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_76, 0) = ((MR_Box) (Y_11));
          MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_74, 0) = ((MR_Box) (X_10));
          MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_76));
        }
        check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 4U), Var_74, Goal_36, Context_15, &InInClause_40, STATE_VARIABLE_Info_2_53, &STATE_VARIABLE_Info_6_75);
        Var_109 = ((((MR_Unsigned) ((MR_hl_field(0, UCOptions_14, 0))) >> 1)) & (MR_Integer) 1);
        {
          NonPackedUCOptions_41 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NonPackedUCOptions_41, 0) = (MR_Box) (((((MR_Unsigned) (Var_109) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
        }
        Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_6_75, 0))));
        Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_6_75, 1))));
        Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_6_75, 2))));
        {
          STATE_VARIABLE_Info_7_79 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_7_79, 0) = ((MR_Box) (Var_111));
          MR_hl_field(0, STATE_VARIABLE_Info_7_79, 1) = ((MR_Box) (Var_112));
          MR_hl_field(0, STATE_VARIABLE_Info_7_79, 2) = ((MR_Box) (Var_113));
          MR_hl_field(0, STATE_VARIABLE_Info_7_79, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        check_hlds__unify_proc__generate_du_unify_cases_8_p_0(SpecDefnInfo_8, NonPackedUCOptions_41, X_10, Y_11, CtorRepns_9, &NonPackedGoal0_42, STATE_VARIABLE_Info_7_79, &STATE_VARIABLE_Info_8_81);
        Var_85 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_8_81, 3))) & (MR_Integer) 1);
        {
          Var_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_82, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[0]));
          MR_hl_field(0, Var_82, 1) = ((MR_Box) (check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_2));
          MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_82, 3) = ((MR_Box) (Var_85));
          MR_hl_field(0, Var_82, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_82, (MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body_du\'/7", (MR_String) "packed word ops show up after being disabled");
        check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_15, X_10, Y_11, (MR_Word) ((MR_Unsigned) 0U), NonPackedGoal0_42, &NonPackedGoal_43, STATE_VARIABLE_Info_8_81, &STATE_VARIABLE_Info_9_88);
        check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 8U), Var_74, NonPackedGoal_43, Context_15, &NonInInClause_44, STATE_VARIABLE_Info_9_88, STATE_VARIABLE_Info_46);
        {
          Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_94, 0) = ((MR_Box) (NonInInClause_44));
          MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Clauses_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (InInClause_40));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_94));
        }
      }
      break;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_cases_8_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_IntEqConsIds_54;
  MR_Word conv1_STATE_VARIABLE_Cases_56;
  MR_Word conv0_STATE_VARIABLE_Info_58;

  check_hlds__unify_proc__generate_du_unify_case_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_IntEqConsIds_54, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_Cases_56, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Info_58);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_IntEqConsIds_54));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_Cases_56));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Info_58));
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_cases_8_p_0(
  MR_Word SpecDefnInfo_9,
  MR_Word UCOptions_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word CtorRepns_13,
  MR_Word * SwitchGoal_14,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  MR_Word IntEqConsIds_16;
  MR_Word NonIntEqCases_17;
  MR_Word SortedIntEqConsIds_18;
  MR_Word Context_19;
  MR_Word GoalInfo_20;
  MR_Word Cases_21;
  MR_Word SortedCases_34;
  MR_Word Var_37;
  MR_Word STATE_VARIABLE_Info_1_40;
  MR_Word Var_57;
  MR_Box conv5_IntEqConsIds_16;
  MR_Box conv4_NonIntEqCases_17;
  MR_Box conv3_STATE_VARIABLE_Info_1_40;

  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_4[0]));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) (check_hlds__unify_proc__generate_du_unify_cases_8_p_0_1));
    MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_37, 3) = ((MR_Box) (SpecDefnInfo_9));
    MR_hl_field(0, Var_37, 4) = ((MR_Box) (UCOptions_10));
    MR_hl_field(0, Var_37, 5) = ((MR_Box) (X_11));
    MR_hl_field(0, Var_37, 6) = ((MR_Box) (Y_12));
  }
  mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&check_hlds__unify_proc_scalar_common_1[2]), (MR_Word) (&check_hlds__unify_proc_scalar_common_1[3]), (MR_Word) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0), Var_37, CtorRepns_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_IntEqConsIds_16, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_NonIntEqCases_17, ((MR_Box) (STATE_VARIABLE_Info_0_35)), &conv3_STATE_VARIABLE_Info_1_40);
  IntEqConsIds_16 = ((MR_Word) (conv5_IntEqConsIds_16));
  NonIntEqCases_17 = ((MR_Word) (conv4_NonIntEqCases_17));
  STATE_VARIABLE_Info_1_40 = ((MR_Word) (conv3_STATE_VARIABLE_Info_1_40));
  mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), IntEqConsIds_16, &SortedIntEqConsIds_18);
  Context_19 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_9, 7))));
  hlds__hlds_goal__goal_info_init_2_p_0(Context_19, &GoalInfo_20);
  if ((SortedIntEqConsIds_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    Cases_21 = NonIntEqCases_17;
    *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_1_40;
  }
  else
  {
    MR_Word HeadIntEqConsId_22 = ((MR_Word) ((MR_hl_field(1, SortedIntEqConsIds_18, 0))));
    MR_Word TailIntEqConsIds_23 = ((MR_Word) ((MR_hl_field(1, SortedIntEqConsIds_18, 1))));
    MR_Word CastX_24;
    MR_Word CastY_25;
    MR_Word CastXGoal0_26;
    MR_Word CastYGoal0_27;
    MR_Word CastXGoal_28;
    MR_Word CastYGoal_29;
    MR_Word GoalUnifyCastXY_30;
    MR_Word GoalList_31;
    MR_Word Goal_32;
    MR_Word IntEqCase_33;
    MR_Word Var_42;
    MR_Word STATE_VARIABLE_Info_2_43;
    MR_Word Var_45;
    MR_Word Var_51;
    MR_Word Var_54;
    MR_Word Var_55;

    Var_42 = parse_tree__builtin_lib_types__int_type_0_f_0();
    check_hlds__unify_proc__unify_proc_info_new_var_5_p_0((MR_String) "CastX", Var_42, &CastX_24, STATE_VARIABLE_Info_1_40, &STATE_VARIABLE_Info_2_43);
    Var_45 = parse_tree__builtin_lib_types__int_type_0_f_0();
    check_hlds__unify_proc__unify_proc_info_new_var_5_p_0((MR_String) "CastY", Var_45, &CastY_25, STATE_VARIABLE_Info_2_43, STATE_VARIABLE_Info_36);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, X_11, CastX_24, Context_19, &CastXGoal0_26);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Y_12, CastY_25, Context_19, &CastYGoal0_27);
    hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 14, CastXGoal0_26, &CastXGoal_28);
    hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 14, CastYGoal0_27, &CastYGoal_29);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_51, 0) = ((MR_Box) (CastX_24));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(CastY_25, Var_51, Context_19, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyCastXY_30);
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (GoalUnifyCastXY_30));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (CastYGoal_29));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      GoalList_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GoalList_31, 0) = ((MR_Box) (CastXGoal_28));
      MR_hl_field(1, GoalList_31, 1) = ((MR_Box) (Var_54));
    }
    hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_31, GoalInfo_20, &Goal_32);
    {
      IntEqCase_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, IntEqCase_33, 0) = ((MR_Box) (HeadIntEqConsId_22));
      MR_hl_field(0, IntEqCase_33, 1) = ((MR_Box) (TailIntEqConsIds_23));
      MR_hl_field(0, IntEqCase_33, 2) = ((MR_Box) (Goal_32));
    }
    {
      Cases_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Cases_21, 0) = ((MR_Box) (IntEqCase_33));
      MR_hl_field(1, Cases_21, 1) = ((MR_Box) (NonIntEqCases_17));
    }
  }
  mercury__list__sort_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), Cases_21, &SortedCases_34);
  {
    Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_57, 1) = ((MR_Box) (X_11));
    MR_hl_field(3, Var_57, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, Var_57, 3) = ((MR_Box) (SortedCases_34));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *SwitchGoal_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_57));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_20));
  }
}

static MR_Word MR_CALL 
check_hlds__unify_proc__lookup_unify_compare_options_1_f_0(
  MR_Word Info_3)
{
  MR_bool succeeded;
  MR_Word UCOptions_4;
  MR_Word ModuleInfo_5 = ((MR_Word) ((MR_hl_field(0, Info_3, 0))));
  MR_Word Globals_6;
  MR_Word BoolCanCompareAsInt_7;
  MR_Word CanCompareAsInt_8;
  MR_Word BoolAllowPackedUC_9;
  MR_Word Target_10;
  MR_Word AllowPackedUC_11;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_6);
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 760, &BoolCanCompareAsInt_7);
  switch (BoolCanCompareAsInt_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      CanCompareAsInt_8 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      CanCompareAsInt_8 = (MR_Integer) 1;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 118, &BoolAllowPackedUC_9);
  libs__globals__get_target_2_p_0(Globals_6, &Target_10);
  succeeded = (BoolAllowPackedUC_9 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (Target_10 == (MR_Integer) 0);
  if (succeeded)
    AllowPackedUC_11 = (MR_Integer) 1;
  else
    AllowPackedUC_11 = (MR_Integer) 0;
  {
    UCOptions_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UCOptions_4, 0) = (MR_Box) (((((MR_Unsigned) (CanCompareAsInt_8) << 1)) | (MR_Unsigned) (AllowPackedUC_11)));
  }
  return UCOptions_4;
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_enum_6_p_0(
  MR_Word Context_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_Word Goal_12;
  MR_Word Var_18;
  MR_Word Var_20;

  hlds__make_goal__make_simple_test_5_p_0(X_8, Y_9, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Goal_12);
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (Y_9));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (X_8));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_20));
  }
  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_18, Goal_12, Context_7, Clause_10, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_solver_6_p_0(
  MR_Word Context_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_Word ArgVars_12;
  MR_Word ModuleInfo_13;
  MR_Word Goal_14;
  MR_Word Var_17;
  MR_Word Var_19;

  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Y_9));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ArgVars_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArgVars_12, 0) = ((MR_Box) (X_8));
    MR_hl_field(1, ArgVars_12, 1) = ((MR_Box) (Var_17));
  }
  ModuleInfo_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_15, 0))));
  Var_19 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_13, Var_19, (MR_String) "builtin_unify_solver_type", ArgVars_12, Context_7, &Goal_14);
  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), ArgVars_12, Goal_14, Context_7, Clause_10, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_eqv_7_p_0(
  MR_Word Context_8,
  MR_Word EqvType_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_Word CastX_14;
  MR_Word CastY_15;
  MR_Word CastXGoal_16;
  MR_Word CastYGoal_17;
  MR_Word UnifyGoal_18;
  MR_Word GoalInfo0_19;
  MR_Word GoalInfo_20;
  MR_Word Goal_21;
  MR_Word STATE_VARIABLE_Info_1_26;
  MR_Word STATE_VARIABLE_Info_2_29;
  MR_Word Var_32;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_String NumStr_44;
  MR_String Name_45;
  MR_String NumStr_46;
  MR_String Name_47;

  mercury__string__int_to_string_2_p_0((MR_Integer) 1, &NumStr_44);
  mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", NumStr_44, &Name_45);
  check_hlds__unify_proc__unify_proc_info_new_var_5_p_0(Name_45, EqvType_9, &CastX_14, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_1_26);
  mercury__string__int_to_string_2_p_0((MR_Integer) 2, &NumStr_46);
  mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", NumStr_46, &Name_47);
  check_hlds__unify_proc__unify_proc_info_new_var_5_p_0(Name_47, EqvType_9, &CastY_15, STATE_VARIABLE_Info_1_26, &STATE_VARIABLE_Info_2_29);
  hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, X_10, CastX_14, Context_8, &CastXGoal_16);
  hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, Y_11, CastY_15, Context_8, &CastYGoal_17);
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (CastY_15));
  }
  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(CastX_14, Var_32, Context_8, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &UnifyGoal_18);
  hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_19);
  hlds__hlds_goal__goal_info_set_context_3_p_0(Context_8, GoalInfo0_19, &GoalInfo_20);
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (UnifyGoal_18));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (CastYGoal_17));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (CastXGoal_16));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_36));
  }
  hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_35, GoalInfo_20, &Goal_21);
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (Y_11));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (X_10));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_42));
  }
  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_40, Goal_21, Context_8, Clause_12, STATE_VARIABLE_Info_2_29, STATE_VARIABLE_Info_23);
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_builtin_7_p_0(
  MR_Word CtorCat_8,
  MR_Word Context_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_Word ModuleInfo_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_21, 0))));
  MR_Word ArgVars_15;
  MR_String Name_16;
  MR_Word UnifyGoal_20;
  MR_Word Var_23;
  MR_Word Var_50;

  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Y_11));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ArgVars_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArgVars_15, 0) = ((MR_Box) (X_10));
    MR_hl_field(1, ArgVars_15, 1) = ((MR_Box) (Var_23));
  }
  switch (MR_tag((MR_Word) CtorCat_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(CtorCat_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 4:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body_builtin\'/7", (MR_String) "bad ctor category");
            return;
          }
          break;
        case (MR_Integer) 3:
          Name_16 = (MR_String) "builtin_unify_pred";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, CtorCat_8, 0))));

        switch (MR_tag((MR_Word) Var_52)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Var_52)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Name_16 = (MR_String) "builtin_unify_float";
                break;
              case (MR_Integer) 1:
                Name_16 = (MR_String) "builtin_unify_character";
                break;
              case (MR_Integer) 2:
                Name_16 = (MR_String) "builtin_unify_string";
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_53 = ((MR_Unsigned) ((MR_hl_field(1, Var_52, 0))) & (MR_Integer) 15);

              Name_16 = ((&check_hlds__unify_proc_vector_common_3[0 + Var_53]))->check_hlds__unify_proc__vector_common_type_3_0__vct_3_f_0;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 3:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body_builtin\'/7", (MR_String) "bad ctor category");
        return;
      }
      break;
  }
  Var_50 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_14, Var_50, Name_16, ArgVars_15, Context_9, &UnifyGoal_20);
  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), ArgVars_15, UnifyGoal_20, Context_9, Clause_12, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
}

static void MR_CALL 
check_hlds__unify_proc__build_simple_call_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ModuleName_8,
  MR_String PredName_9,
  MR_Word ArgVars_10,
  MR_Word Context_11,
  MR_Word * Goal_12)
{
  MR_Word Var_15;

  Var_15 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_7, (MR_Integer) 0, ModuleName_8, PredName_9, (MR_Word) ((MR_Unsigned) 0U), ArgVars_10, Var_15, (MR_Word) (MR_mkword(1, &check_hlds__unify_proc_scalar_common_2[3])), (MR_Integer) 6, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_11, Goal_12);
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_user_7_p_0(
  MR_Word NonCanonical_8,
  MR_Word X_9,
  MR_Word Y_10,
  MR_Word Context_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_Word Goal0_21;
  MR_Word Goal_26;
  MR_Word STATE_VARIABLE_Info_1_40;
  MR_Word STATE_VARIABLE_Info_2_57;
  MR_Word Var_59;
  MR_Word Var_61;

  switch (MR_tag((MR_Word) NonCanonical_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body_user\'/7", (MR_String) "trying to create unify proc for subtype");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word UnifyPredName_15 = ((MR_Word) ((MR_hl_field(1, NonCanonical_8, 0))));
        MR_Word PredId_17;
        MR_Integer ModeId_18;
        MR_Word Call_19;
        MR_Word GoalInfo_20;
        MR_Word Var_33;
        MR_Word Var_34;

        PredId_17 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        ModeId_18 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        {
          Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_34, 0) = ((MR_Box) (Y_10));
          MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_33, 0) = ((MR_Box) (X_9));
          MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_34));
        }
        {
          Call_19 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Call_19, 0) = ((MR_Box) (PredId_17));
          MR_hl_field(2, Call_19, 1) = ((MR_Box) (ModeId_18));
          MR_hl_field(2, Call_19, 2) = ((MR_Box) (Var_33));
          MR_hl_field(2, Call_19, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(2, Call_19, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Call_19, 5) = ((MR_Box) (UnifyPredName_15));
        }
        hlds__hlds_goal__goal_info_init_2_p_0(Context_11, &GoalInfo_20);
        {
          Goal0_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Goal0_21, 0) = ((MR_Box) (Call_19));
          MR_hl_field(0, Goal0_21, 1) = ((MR_Box) (GoalInfo_20));
        }
        STATE_VARIABLE_Info_1_40 = STATE_VARIABLE_Info_0_27;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word UnifyPredName_67 = ((MR_Word) ((MR_hl_field(2, NonCanonical_8, 0))));
        MR_Word PredId_68;
        MR_Integer ModeId_69;
        MR_Word Call_70;
        MR_Word GoalInfo_71;
        MR_Word Var_72;
        MR_Word Var_73;

        PredId_68 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        ModeId_69 = hlds__hlds_pred__invalid_proc_id_0_f_0();
        {
          Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_73, 0) = ((MR_Box) (Y_10));
          MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_72, 0) = ((MR_Box) (X_9));
          MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_73));
        }
        {
          Call_70 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Call_70, 0) = ((MR_Box) (PredId_68));
          MR_hl_field(2, Call_70, 1) = ((MR_Box) (ModeId_69));
          MR_hl_field(2, Call_70, 2) = ((MR_Box) (Var_72));
          MR_hl_field(2, Call_70, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(2, Call_70, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Call_70, 5) = ((MR_Box) (UnifyPredName_67));
        }
        hlds__hlds_goal__goal_info_init_2_p_0(Context_11, &GoalInfo_71);
        {
          Goal0_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Goal0_21, 0) = ((MR_Box) (Call_70));
          MR_hl_field(0, Goal0_21, 1) = ((MR_Box) (GoalInfo_71));
        }
        STATE_VARIABLE_Info_1_40 = STATE_VARIABLE_Info_0_27;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, NonCanonical_8, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ComparePredName_22 = ((MR_Word) ((MR_hl_field(3, NonCanonical_8, 1))));
            MR_Word ResultVar_23;
            MR_Word CallGoal_24;
            MR_Word UnifyGoal_25;
            MR_Word Var_39;
            MR_Word Var_41;
            MR_Word Var_42;
            MR_Word Var_43;
            MR_Word Var_47;
            MR_Word Var_51;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word PredId_63;
            MR_Integer ModeId_64;
            MR_Word Call_65;
            MR_Word GoalInfo_66;
            MR_Word Var_77;
            MR_Word SymName_80;
            MR_Word DuCtor_81;
            MR_Word Var_82;
            MR_Word Var_84;
            MR_Word Builtin_85;
            MR_Word Var_86;

            Var_39 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
            check_hlds__unify_proc__unify_proc_info_new_var_5_p_0((MR_String) "Result", Var_39, &ResultVar_23, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_1_40);
            PredId_63 = hlds__hlds_pred__invalid_pred_id_0_f_0();
            ModeId_64 = hlds__hlds_pred__invalid_proc_id_0_f_0();
            {
              Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_43, 0) = ((MR_Box) (Y_10));
              MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_42, 0) = ((MR_Box) (X_9));
              MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_43));
            }
            {
              Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_41, 0) = ((MR_Box) (ResultVar_23));
              MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_42));
            }
            {
              Call_65 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Call_65, 0) = ((MR_Box) (PredId_63));
              MR_hl_field(2, Call_65, 1) = ((MR_Box) (ModeId_64));
              MR_hl_field(2, Call_65, 2) = ((MR_Box) (Var_41));
              MR_hl_field(2, Call_65, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(2, Call_65, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(2, Call_65, 5) = ((MR_Box) (ComparePredName_22));
            }
            hlds__hlds_goal__goal_info_init_2_p_0(Context_11, &GoalInfo_66);
            {
              CallGoal_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, CallGoal_24, 0) = ((MR_Box) (Call_65));
              MR_hl_field(0, CallGoal_24, 1) = ((MR_Box) (GoalInfo_66));
            }
            Var_82 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            {
              SymName_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, SymName_80, 0) = ((MR_Box) (Var_82));
              MR_hl_field(1, SymName_80, 1) = ((MR_Box) ((MR_String) "="));
            }
            Builtin_85 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            {
              Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_86, 0) = ((MR_Box) (Builtin_85));
              MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_String) "comparison_result"));
            }
            {
              Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_84, 0) = ((MR_Box) (Var_86));
              MR_hl_field(0, Var_84, 1) = ((MR_Box) ((MR_Integer) 0));
            }
            {
              DuCtor_81 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, DuCtor_81, 0) = ((MR_Box) (SymName_80));
              MR_hl_field(0, DuCtor_81, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(0, DuCtor_81, 2) = ((MR_Box) (Var_84));
            }
            Var_77 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_81)));
            {
              Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_77));
              MR_hl_field(1, Var_47, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(1, Var_47, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(ResultVar_23, Var_47, Context_11, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &UnifyGoal_25);
            {
              Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_54, 0) = ((MR_Box) (UnifyGoal_25));
              MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_53, 0) = ((MR_Box) (CallGoal_24));
              MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
            }
            {
              Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, Var_51, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(3, Var_51, 2) = ((MR_Box) (Var_53));
            }
            {
              Goal0_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Goal0_21, 0) = ((MR_Box) (Var_51));
              MR_hl_field(0, Goal0_21, 1) = ((MR_Box) (GoalInfo_66));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body_user\'/7", (MR_String) "trying to create unify proc for abstract noncanonical type");
            return;
          }
          break;
      }
      break;
  }
  check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_11, X_9, Y_10, (MR_Word) ((MR_Unsigned) 0U), Goal0_21, &Goal_26, STATE_VARIABLE_Info_1_40, &STATE_VARIABLE_Info_2_57);
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (Y_10));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (X_9));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_61));
  }
  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_59, Goal_26, Context_11, Clause_12, STATE_VARIABLE_Info_2_57, STATE_VARIABLE_Info_28);
}

static void MR_CALL 
check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(
  MR_Word Context_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word MaybeCompareRes_12,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_Info_0_39,
  MR_Word * STATE_VARIABLE_Info_40)
{
  MR_Word ModuleInfo_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 0))));
  MR_Word Globals_17;
  MR_Word ShouldPretestEq_18;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_16, &Globals_17);
  libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 663, &ShouldPretestEq_18);
  switch (ShouldPretestEq_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Goal_14 = Goal0_13;
        *STATE_VARIABLE_Info_40 = STATE_VARIABLE_Info_0_39;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CastType_19;
        MR_Word CastX_20;
        MR_Word CastY_21;
        MR_Word CastXGoal0_22;
        MR_Word CastYGoal0_23;
        MR_Word CastXGoal_24;
        MR_Word CastYGoal_25;
        MR_Word EqualityGoal0_26;
        MR_Word EqualityGoal_27;
        MR_Word CondGoalExpr_28;
        MR_Word ContextGoalInfo_29;
        MR_Word CondGoal_30;
        MR_Word EqualGoal_31;
        MR_Word GoalInfo_32;
        MR_Word GoalExpr_37;
        MR_Word FeaturedGoalInfo_38;
        MR_Word STATE_VARIABLE_Info_1_43;
        MR_Word Var_50;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word ModuleInfo_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, 0))));
        MR_Word Globals_67;
        MR_Word CastPointers_68;

        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_66, &Globals_67);
        libs__globals__lookup_bool_option_3_p_0(Globals_67, (MR_Integer) 761, &CastPointers_68);
        switch (CastPointers_68) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            CastType_19 = parse_tree__builtin_lib_types__int_type_0_f_0();
            break;
          case (MR_Integer) 1:
            CastType_19 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
            break;
        }
        check_hlds__unify_proc__unify_proc_info_new_var_5_p_0((MR_String) "CastX", CastType_19, &CastX_20, STATE_VARIABLE_Info_0_39, &STATE_VARIABLE_Info_1_43);
        check_hlds__unify_proc__unify_proc_info_new_var_5_p_0((MR_String) "CastY", CastType_19, &CastY_21, STATE_VARIABLE_Info_1_43, STATE_VARIABLE_Info_40);
        hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, X_10, CastX_20, Context_9, &CastXGoal0_22);
        hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Y_11, CastY_21, Context_9, &CastYGoal0_23);
        hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 14, CastXGoal0_22, &CastXGoal_24);
        hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 14, CastYGoal0_23, &CastYGoal_25);
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_50, 0) = ((MR_Box) (CastY_21));
        }
        hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(CastX_20, Var_50, Context_9, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &EqualityGoal0_26);
        hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 23, EqualityGoal0_26, &EqualityGoal_27);
        {
          Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_57, 0) = ((MR_Box) (EqualityGoal_27));
          MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (CastYGoal_25));
          MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_57));
        }
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (CastXGoal_24));
          MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_56));
        }
        {
          CondGoalExpr_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, CondGoalExpr_28, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, CondGoalExpr_28, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, CondGoalExpr_28, 2) = ((MR_Box) (Var_55));
        }
        hlds__hlds_goal__goal_info_init_2_p_0(Context_9, &ContextGoalInfo_29);
        {
          CondGoal_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CondGoal_30, 0) = ((MR_Box) (CondGoalExpr_28));
          MR_hl_field(0, CondGoal_30, 1) = ((MR_Box) (ContextGoalInfo_29));
        }
        if ((MaybeCompareRes_12 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          EqualGoal_31 = hlds__make_goal__true_goal_with_context_1_f_0(Context_9);
          GoalInfo_32 = ContextGoalInfo_29;
        }
        else
        {
          MR_Word Res_33 = ((MR_Word) ((MR_hl_field(1, MaybeCompareRes_12, 0))));
          MR_Word EqualGoalInfo_35;
          MR_Word InstmapDelta_36;
          MR_Word Var_59;
          MR_Word SymName_73;
          MR_Word DuCtor_74;
          MR_Word Var_75;
          MR_Word Var_77;
          MR_Word Builtin_78;
          MR_Word Var_79;

          Var_75 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
          {
            SymName_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, SymName_73, 0) = ((MR_Box) (Var_75));
            MR_hl_field(1, SymName_73, 1) = ((MR_Box) ((MR_String) "="));
          }
          Builtin_78 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
          {
            Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_79, 0) = ((MR_Box) (Builtin_78));
            MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_String) "comparison_result"));
          }
          {
            Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_77, 0) = ((MR_Box) (Var_79));
            MR_hl_field(0, Var_77, 1) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            DuCtor_74 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, DuCtor_74, 0) = ((MR_Box) (SymName_73));
            MR_hl_field(0, DuCtor_74, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(0, DuCtor_74, 2) = ((MR_Box) (Var_77));
          }
          Var_59 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_74)));
          hlds__make_goal__make_const_construction_4_p_0(Context_9, Res_33, Var_59, &EqualGoal_31);
          EqualGoalInfo_35 = ((MR_Word) ((MR_hl_field(0, EqualGoal_31, 1))));
          InstmapDelta_36 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(EqualGoalInfo_35);
          hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstmapDelta_36, ContextGoalInfo_29, &GoalInfo_32);
        }
        {
          GoalExpr_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, GoalExpr_37, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, GoalExpr_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, GoalExpr_37, 2) = ((MR_Box) (CondGoal_30));
          MR_hl_field(3, GoalExpr_37, 3) = ((MR_Box) (EqualGoal_31));
          MR_hl_field(3, GoalExpr_37, 4) = ((MR_Box) (Goal0_13));
        }
        hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 22, GoalInfo_32, &FeaturedGoalInfo_38);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_14 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_37));
          MR_hl_field(0, base, 1) = ((MR_Box) (FeaturedGoalInfo_38));
        }
      }
      break;
  }
}

static void MR_CALL 
check_hlds__unify_proc__unify_proc_info_new_var_5_p_0(
  MR_String Name_6,
  MR_Word Type_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_Word ModuleInfo_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_15, 0))));
  MR_Word IsDummy_11;
  MR_Word Entry_12;
  MR_Word VarTable0_13;
  MR_Word VarTable_14;
  MR_Word Var_23;
  MR_Word Var_25;
  MR_Word Var_26;

  IsDummy_11 = hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_10, Type_7);
  {
    Entry_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_12, 0) = ((MR_Box) (Name_6));
    MR_hl_field(0, Entry_12, 1) = ((MR_Box) (Type_7));
    MR_hl_field(0, Entry_12, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_11));
  }
  VarTable0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_15, 1))));
  parse_tree__var_table__add_var_entry_4_p_0(Entry_12, Var_8, VarTable0_13, &VarTable_14);
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_15, 0))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_15, 2))));
  Var_26 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_15, 3))) & (MR_Integer) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTable_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_26));
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_dummy_6_p_0(
  MR_Word Context_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_Word Goal_12;
  MR_Word Var_16;
  MR_Word Var_18;

  Goal_12 = hlds__make_goal__true_goal_with_context_1_f_0(Context_7);
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (Y_9));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (X_8));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_18));
  }
  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_16, Goal_12, Context_7, Clause_10, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
}

static void MR_CALL 
check_hlds__unify_proc__quantify_clause_body_7_p_0(
  MR_Word ApplModes_8,
  MR_Word HeadVars_9,
  MR_Word Goal0_10,
  MR_Word Context_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_bool succeeded;
  MR_Word VarTable0_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, 1))));
  MR_Word RttiVarMaps0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, 2))));
  MR_Word Goal_17;
  MR_Word VarTable_18;
  MR_Word RttiVarMaps_19;
  MR_Word GoalExpr0_20;
  MR_Word MaybeFact_23;
  MR_Word Var_32;
  MR_Word Var_39;
  MR_Word Var_42;
  MR_Word _Warnings_16;
  MR_Word Var_29;

  hlds__quantification__implicitly_quantify_clause_body_general_9_p_0((MR_Integer) 0, HeadVars_9, &_Warnings_16, Goal0_10, &Goal_17, VarTable0_14, &VarTable_18, RttiVarMaps0_15, &RttiVarMaps_19);
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, 0))));
  Var_42 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, 3))) & (MR_Integer) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_25 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTable_18));
    MR_hl_field(0, base, 2) = ((MR_Box) (RttiVarMaps_19));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_42));
  }
  GoalExpr0_20 = ((MR_Word) ((MR_hl_field(0, Goal_17, 0))));
  succeeded = ((((MR_tag((MR_Word) GoalExpr0_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr0_20, 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_29 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_20, 2))));
    succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    MaybeFact_23 = (MR_Integer) 1;
  else
    MaybeFact_23 = (MR_Integer) 0;
  Var_32 = hlds__hlds_clauses__init_unused_statevar_arg_map_0_f_0();
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *Clause_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ApplModes_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Goal_17));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 3) = ((MR_Box) (Context_11));
    MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 6) = (MR_Box) ((MR_Unsigned) (MaybeFact_23));
  }
}

static void MR_CALL 
check_hlds__unify_proc__get_explicitly_typed_vars_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevVarsTypes_0_2,
  MR_Word * STATE_VARIABLE_RevVarsTypes_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevVarsTypes_3 = STATE_VARIABLE_RevVarsTypes_0_2;
    else
    {
      MR_Word Type_8;
      MR_Word VarsTypes_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word STATE_VARIABLE_RevVarsTypes_1_14;
      MR_Word Var_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevVarsTypes_0_2;

      Type_8 = ((MR_Word) ((MR_hl_field(0, Var_13, 1))));
      Var_16 = parse_tree__builtin_lib_types__void_type_0_f_0();
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_8, Var_16);
      if (succeeded)
        STATE_VARIABLE_RevVarsTypes_1_14 = STATE_VARIABLE_RevVarsTypes_0_2;
      else
        {
          STATE_VARIABLE_RevVarsTypes_1_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevVarsTypes_1_14, 0) = ((MR_Box) (Var_13));
          MR_hl_field(1, STATE_VARIABLE_RevVarsTypes_1_14, 1) = ((MR_Box) (STATE_VARIABLE_RevVarsTypes_0_2));
        }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = VarsTypes_9;
      next_value_of_STATE_VARIABLE_RevVarsTypes_0_2 = STATE_VARIABLE_RevVarsTypes_1_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevVarsTypes_0_2 = next_value_of_STATE_VARIABLE_RevVarsTypes_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____args_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__unify_proc____Unify____args_locn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____args_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__unify_proc____Compare____args_locn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____bulk_comparability_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__unify_proc____Unify____bulk_comparability_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____bulk_comparability_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__unify_proc____Compare____bulk_comparability_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____compare_conjoin_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__unify_proc____Unify____compare_conjoin_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____compare_conjoin_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__unify_proc____Compare____compare_conjoin_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____compare_how_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__unify_proc____Unify____compare_how_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____compare_how_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__unify_proc____Compare____compare_how_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____cons_ids_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__unify_proc____Unify____cons_ids_match_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____cons_ids_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__unify_proc____Compare____cons_ids_match_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_all_args_in_word_so_far_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__unify_proc____Unify____maybe_all_args_in_word_so_far_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_all_args_in_word_so_far_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__unify_proc____Compare____maybe_all_args_in_word_so_far_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_allow_packed_unify_compare_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__unify_proc____Unify____maybe_allow_packed_unify_compare_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_allow_packed_unify_compare_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__unify_proc____Compare____maybe_allow_packed_unify_compare_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_compare_constants_as_ints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__unify_proc____Unify____maybe_compare_constants_as_ints_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_compare_constants_as_ints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__unify_proc____Compare____maybe_compare_constants_as_ints_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_give_vars_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__unify_proc____Unify____maybe_give_vars_types_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_give_vars_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__unify_proc____Compare____maybe_give_vars_types_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_packable_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__unify_proc____Unify____maybe_packable_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_packable_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__unify_proc____Compare____maybe_packable_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_packed_word_ops_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__unify_proc____Unify____maybe_packed_word_ops_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_packed_word_ops_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__unify_proc____Compare____maybe_packed_word_ops_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____spec_pred_defn_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__unify_proc____Unify____spec_pred_defn_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____spec_pred_defn_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__unify_proc____Compare____spec_pred_defn_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____uc_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__unify_proc____Unify____uc_options_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____uc_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__unify_proc____Compare____uc_options_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____uc_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__unify_proc____Unify____uc_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____uc_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__unify_proc____Compare____uc_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_how_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__unify_proc____Unify____unify_how_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_how_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__unify_proc____Compare____unify_how_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__unify_proc____Unify____unify_proc_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__unify_proc____Compare____unify_proc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__unify_proc__init(void)
{
}

void mercury__check_hlds__unify_proc__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_args_locn_0);
  MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_bulk_comparability_0);
  MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_compare_conjoin_kind_0);
  MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_compare_how_0);
  MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_cons_ids_match_0);
  MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_all_args_in_word_so_far_0);
  MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_allow_packed_unify_compare_0);
  MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_compare_constants_as_ints_0);
  MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_give_vars_types_0);
  MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_packable_args_0);
  MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_packed_word_ops_0);
  MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_spec_pred_defn_info_0);
  MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_uc_options_0);
  MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_uc_params_0);
  MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_how_0);
  MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0);
}

void mercury__check_hlds__unify_proc__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__unify_proc__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.unify_proc.
