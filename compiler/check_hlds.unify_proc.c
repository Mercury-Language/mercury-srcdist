/*
** Automatically generated from `unify_proc.m'
** by the Mercury compiler,
** version rotd-2023-06-05
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



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

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0;

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1;

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_linear_or_quad_0[2];

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_linear_or_quad_0[2];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_linear_or_quad_0[2];

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

static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars_for_cons_args__2849__1_1_f_0(
  MR_Word LambdaHeadVar__1_18);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2263__2_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_140);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2255__1_2_p_0(
  MR_Integer ShiftInt0_63,
  MR_Integer HeadVar__2_103);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2263__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_58);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__is_ctor_with_all_locally_packed_unsigned_args__1370__1_1_p_0(
  MR_Word LambdaHeadVar__1_35);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_compare_proc_body_du__1255__1_2_p_0(
  MR_Word CtorRepns_10,
  MR_Word HeadVar__2_54);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_compare_proc_body__1016__1_2_p_0(
  MR_Word MaybeSuperType_32,
  MR_Word HeadVar__2_60);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_rest_of_word__912__2_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_92);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_rest_of_word__912__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_30);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body_du__670__1_2_p_0(
  MR_Word HeadVar__1_90,
  MR_Word HeadVar__2_91);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body_du__615__1_1_p_0(
  MR_Word LambdaHeadVar__1_51);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body__272__1_2_p_0(
  MR_Word MaybeSuperType_31,
  MR_Word HeadVar__2_65);

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
check_hlds__unify_proc____Compare____linear_or_quad_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0(
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
check_hlds__unify_proc__generate_index_du_case_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_index_du_case_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__unify_proc__generate_index_du_case_9_p_0(
  MR_Word SpecDefnInfo_10,
  MR_Word X_11,
  MR_Word Index_12,
  MR_Word CtorRepn_13,
  MR_Word * Goal_14,
  MR_Integer STATE_VARIABLE_N_0_33,
  MR_Integer * STATE_VARIABLE_N_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36);

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_8_p_0(
  MR_Word SpecDefnInfo_9,
  MR_Word UCOptions_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word CtorRepn_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_Info_0_55,
  MR_Word * STATE_VARIABLE_Info_56);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_6_p_0(
  MR_Word GiveVarsTypes_7,
  MR_String Prefix_8,
  MR_Word CtorArgRepns_9,
  MR_Word * Vars_10,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_loop_7_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
check_hlds__unify_proc__compute_exist_constraint_implications_3_p_0(
  MR_Word MaybeExistConstraints_4,
  MR_Word * ExistQTVars_5,
  MR_Word * GiveVarsTypes_6);

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
check_hlds__unify_proc__info_set_packed_ops_3_p_0(
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
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_6_p_0(
  MR_Word SpecDefnInfo_7,
  MR_Word X_8,
  MR_Word Index_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

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
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45);

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
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49);

static void MR_CALL 
check_hlds__unify_proc__info_set_module_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static MR_Word MR_CALL 
check_hlds__unify_proc__compare_cons_id_1_f_0(
  MR_String Name_3);

static void MR_CALL 
check_hlds__unify_proc__build_spec_pred_call_9_p_0(
  MR_Word TypeCtor_10,
  MR_Word SpecialPredId_11,
  MR_Word ArgVars_12,
  MR_Word InstmapDelta_13,
  MR_Word Detism_14,
  MR_Word Context_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_linear_cases_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_du_quad_9_p_0(
  MR_Word SpecDefnInfo_10,
  MR_Word UCOptions_11,
  MR_Word CtorRepns_12,
  MR_Word R_13,
  MR_Word X_14,
  MR_Word Y_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_quad_switch_on_x_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_Cases_0_8,
  MR_Word * STATE_VARIABLE_Cases_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_quad_switch_on_y_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_String HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word HeadVar__8_8,
  MR_Word STATE_VARIABLE_Cases_0_9,
  MR_Word * STATE_VARIABLE_Cases_10,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_case_10_p_0(
  MR_Word SpecDefnInfo_11,
  MR_Word UCOptions_12,
  MR_Word LinearOrQuad_13,
  MR_Word CtorRepn_14,
  MR_Word R_15,
  MR_Word X_16,
  MR_Word Y_17,
  MR_Word * Case_18,
  MR_Word STATE_VARIABLE_Info_0_51,
  MR_Word * STATE_VARIABLE_Info_52);

static void MR_CALL 
check_hlds__unify_proc__info_get_var_table_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4);

static void MR_CALL 
check_hlds__unify_proc__info_get_module_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4);

static MR_Word MR_CALL 
check_hlds__unify_proc__compute_maybe_packable_args_locn_1_f_0(
  MR_Word ConsTag_3);

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
check_hlds__unify_proc__info_new_var_no_type_4_p_0(
  MR_String Name_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

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

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_quad_compare_asymmetric_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_compare_du_quad_compare_asymmetric_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_quad_compare_asymmetric_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_compare_du_quad_compare_asymmetric_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_quad_compare_asymmetric_10_p_0(
  MR_Word SpecDefnInfo_11,
  MR_Word CtorRepnA_12,
  MR_Word CtorRepnB_13,
  MR_String CompareOp_14,
  MR_Word R_15,
  MR_Word X_16,
  MR_Word Y_17,
  MR_Word * Case_18,
  MR_Word STATE_VARIABLE_Info_0_50,
  MR_Word * STATE_VARIABLE_Info_51);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4);

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
check_hlds__unify_proc__generate_compare_proc_body_solver_7_p_0(
  MR_Word Context_8,
  MR_Word Res_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

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
check_hlds__unify_proc__generate_compare_proc_body_builtin_7_p_0(
  MR_Word SpecDefnInfo_8,
  MR_Word Res_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25);

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
  MR_Word STATE_VARIABLE_Info_0_43,
  MR_Word * STATE_VARIABLE_Info_44);

static void MR_CALL 
check_hlds__unify_proc__get_du_base_type_loop_4_p_0(
  MR_Word TypeTable_5,
  MR_Word TVarSet_6,
  MR_Word Type_7,
  MR_Word * BaseType_8);

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_4(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48);

static MR_Word MR_CALL 
check_hlds__unify_proc__get_pretest_equality_cast_type_1_f_0(
  MR_Word Info_3);

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
check_hlds__unify_proc__generate_unify_proc_body_builtin_6_p_0(
  MR_Word SpecDefnInfo_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

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
check_hlds__unify_proc__info_new_var_5_p_0(
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
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

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
check_hlds__unify_proc____Unify____linear_or_quad_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0_10001(
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


static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_1[6][2];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_2[5][1];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_4[2][4];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_5[8][3];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_6[1][11];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_7[7][5];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_8[1][7];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_9[1][12];


struct check_hlds__unify_proc__vector_common_type_3_0_s {
  const MR_String check_hlds__unify_proc__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct check_hlds__unify_proc__vector_common_type_3_0_s check_hlds__unify_proc_vector_common_3[20];



static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_1[6][2] = {
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
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   5 */
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

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_4[2][4] = {
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

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_5[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_4[0])),
    ((MR_Box) (check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_4[1])),
    ((MR_Box) (check_hlds__unify_proc__is_ctor_with_all_locally_packed_unsigned_args_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[2])),
    ((MR_Box) (check_hlds__unify_proc__generate_compare_du_quad_compare_asymmetric_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_8[0])),
    ((MR_Box) (check_hlds__unify_proc__generate_compare_du_quad_compare_asymmetric_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[2])),
    ((MR_Box) (check_hlds__unify_proc__generate_compare_du_quad_compare_asymmetric_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_8[0])),
    ((MR_Box) (check_hlds__unify_proc__generate_compare_du_quad_compare_asymmetric_10_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[2])),
    ((MR_Box) (check_hlds__unify_proc__generate_index_du_case_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_8[0])),
    ((MR_Box) (check_hlds__unify_proc__generate_index_du_case_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_6[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_spec_pred_defn_info_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_uc_options_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_7[7][5] = {
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
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_uc_params_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cell_offset_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cell_offset_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__unify_proc__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&check_hlds__unify_proc__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_8[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_9[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_spec_pred_defn_info_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0))
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

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0 = {
  (MR_String) "linear",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1 = {
  (MR_String) "quad",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_linear_or_quad_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_linear_or_quad_0[2] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_0,
  &check_hlds__unify_proc__check_hlds__unify_proc__enum_functor_desc_linear_or_quad_0_1
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_linear_or_quad_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_linear_or_quad_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__unify_proc____Unify____linear_or_quad_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____linear_or_quad_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "linear_or_quad",
  { check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_linear_or_quad_0 },
  { check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_linear_or_quad_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_linear_or_quad_0,

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

static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars_for_cons_args__2849__1_1_f_0(
  MR_Word LambdaHeadVar__1_18)
{
  MR_Word LambdaHeadVar__2_19 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_18, (MR_Integer) 1))));

  return LambdaHeadVar__2_19;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2263__2_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_140)
{
  MR_bool succeeded;
  MR_Integer Var_152 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Var_153 = (MR_Integer) (ArgCellOffset_140);

  succeeded = (Var_152 == Var_153);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2255__1_2_p_0(
  MR_Integer ShiftInt0_63,
  MR_Integer HeadVar__2_103)
{
  MR_bool succeeded = (HeadVar__2_103 == ShiftInt0_63);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2263__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_58)
{
  MR_bool succeeded;
  MR_Integer Var_128 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Var_129 = (MR_Integer) (ArgCellOffset_58);

  succeeded = (Var_128 == Var_129);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__is_ctor_with_all_locally_packed_unsigned_args__1370__1_1_p_0(
  MR_Word LambdaHeadVar__1_35)
{
  MR_bool succeeded;
  MR_Word ArgPosWidth_19 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_35, (MR_Integer) 2))));

  switch (MR_tag((MR_Word) ArgPosWidth_19)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_19, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Fill_25 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_19, (MR_Integer) 6))) & (MR_Integer) 7);

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
            MR_Word Fill_42 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_19, (MR_Integer) 6))) & (MR_Integer) 7);

            switch (Fill_42) {
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
check_hlds__unify_proc__IntroducedFrom__pred__generate_compare_proc_body_du__1255__1_2_p_0(
  MR_Word CtorRepns_10,
  MR_Word HeadVar__2_54)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[2]), ((MR_Box) (CtorRepns_10)), ((MR_Box) (HeadVar__2_54)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_compare_proc_body__1016__1_2_p_0(
  MR_Word MaybeSuperType_32,
  MR_Word HeadVar__2_60)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____maybe_subtype_0_0(MaybeSuperType_32, HeadVar__2_60);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_rest_of_word__912__2_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_92)
{
  MR_bool succeeded;
  MR_Integer Var_103 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Var_104 = (MR_Integer) (ArgCellOffset_92);

  succeeded = (Var_103 == Var_104);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_rest_of_word__912__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_30)
{
  MR_bool succeeded;
  MR_Integer Var_81 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Var_82 = (MR_Integer) (ArgCellOffset_30);

  succeeded = (Var_81 == Var_82);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body_du__670__1_2_p_0(
  MR_Word HeadVar__1_90,
  MR_Word HeadVar__2_91)
{
  MR_bool succeeded = (HeadVar__1_90 == HeadVar__2_91);

  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body_du__615__1_1_p_0(
  MR_Word LambdaHeadVar__1_51)
{
  MR_bool succeeded;
  MR_Word ConsTag_21 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_51, (MR_Integer) 3))));
  MR_Word CtorArgRepns_22 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_51, (MR_Integer) 4))));

  if ((CtorArgRepns_22 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  {
    succeeded = ((((MR_tag((MR_Word) ConsTag_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsTag_21, (MR_Integer) 0)))) == (MR_Integer) 12)));
    if (succeeded)
    {
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body__272__1_2_p_0(
  MR_Word MaybeSuperType_31,
  MR_Word HeadVar__2_65)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_data____Unify____maybe_subtype_0_0(MaybeSuperType_31, HeadVar__2_65);
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);

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
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_10;

      check_hlds__unify_proc____Compare____args_locn_0_0(&SubResult1_10, Var_18, ArgY1_9);
      succeeded = (SubResult1_10 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_10;
      else
      {
        MR_Integer Var_19 = (MR_Integer) (Var_17);
        MR_Integer Var_20 = (MR_Integer) (ArgY2_12);

        succeeded = (Var_19 < Var_20);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_19 > Var_20);
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
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;
    MR_Integer Var_12;
    MR_Integer Var_13;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = check_hlds__unify_proc____Unify____args_locn_0_0(ArgX1_5, ArgY1_6);
      if (succeeded)
      {
        Var_12 = (MR_Integer) (ArgX2_7);
        Var_13 = (MR_Integer) (ArgY2_8);
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX7_22 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgY7_23 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 1);
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

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[5]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
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
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX7_15 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word ArgY7_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_21_21 = (MR_Word) (&check_hlds__unify_proc_scalar_common_1[5]);
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
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
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
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
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
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
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

      hlds__hlds_pred____Compare____pred_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
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
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_22_22 = (MR_Word) (&check_hlds__unify_proc_scalar_common_1[4]);
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
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      check_hlds__unify_proc____Compare____args_locn_0_0(HeadVar__1_1, Var_11, ArgY1_7);
    }
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
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = check_hlds__unify_proc____Unify____args_locn_0_0(ArgX1_5, ArgY1_6);
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
check_hlds__unify_proc____Compare____linear_or_quad_0_0(
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
check_hlds__unify_proc____Unify____linear_or_quad_0_0(
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
  MR_Integer CastX_74 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_75 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_74 == CastY_75);
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
          MR_String Var_88 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_89 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_90 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_91 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

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
              {
                MR_Word ArgY1_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
                MR_String ArgY4_38 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 3))));
                MR_Word SubResult1_30;

                check_hlds__unify_proc____Compare____args_locn_0_0(&SubResult1_30, Var_91, ArgY1_29);
                succeeded = (SubResult1_30 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_30;
                else
                {
                  MR_Word SubResult2_33;
                  MR_Integer Var_98 = (MR_Integer) (Var_90);
                  MR_Integer Var_99 = (MR_Integer) (ArgY2_32);

                  succeeded = (Var_98 < Var_99);
                  if (succeeded)
                  {
                    SubResult2_33 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_98 > Var_99);
                    if (succeeded)
                    {
                      SubResult2_33 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_33 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_33;
                  else
                  {
                    MR_Word SubResult3_36;
                    MR_Integer Var_100 = (MR_Integer) (Var_89);
                    MR_Integer Var_101 = (MR_Integer) (ArgY3_35);

                    succeeded = (Var_100 < Var_101);
                    if (succeeded)
                    {
                      SubResult3_36 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_100 > Var_101);
                      if (succeeded)
                      {
                        SubResult3_36 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult3_36 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_36;
                    else
                      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_88, ArgY4_38);
                  }
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
          MR_Word Var_84 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_85 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_86 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_87 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_64 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_67 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_70 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word ArgY4_73 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 3))));
                MR_Word SubResult1_65;

                check_hlds__unify_proc____Compare____args_locn_0_0(&SubResult1_65, Var_87, ArgY1_64);
                succeeded = (SubResult1_65 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_65;
                else
                {
                  MR_Word SubResult2_68;
                  MR_Integer Var_92 = (MR_Integer) (Var_86);
                  MR_Integer Var_93 = (MR_Integer) (ArgY2_67);

                  succeeded = (Var_92 < Var_93);
                  if (succeeded)
                  {
                    SubResult2_68 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_92 > Var_93);
                    if (succeeded)
                    {
                      SubResult2_68 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_68 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_68;
                  else
                  {
                    MR_Word SubResult3_71;
                    MR_Integer Var_94 = (MR_Integer) (Var_85);
                    MR_Integer Var_95 = (MR_Integer) (ArgY3_70);

                    succeeded = (Var_94 < Var_95);
                    if (succeeded)
                    {
                      SubResult3_71 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_94 > Var_95);
                      if (succeeded)
                      {
                        SubResult3_71 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult3_71 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_71;
                    else
                    {
                      MR_Integer Var_96 = (MR_Integer) (Var_84);
                      MR_Integer Var_97 = (MR_Integer) (ArgY4_73);

                      succeeded = (Var_96 < Var_97);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_96 > Var_97);
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
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_23 == CastY_24);
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
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_10;
          MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_12;
          MR_String ArgX4_13 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 3))));
          MR_String ArgY4_14;
          MR_Integer Var_36;
          MR_Integer Var_37;
          MR_Integer Var_38;
          MR_Integer Var_39;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_14 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
            succeeded = check_hlds__unify_proc____Unify____args_locn_0_0(ArgX1_7, ArgY1_8);
            if (succeeded)
            {
              Var_36 = (MR_Integer) (ArgX2_9);
              Var_37 = (MR_Integer) (ArgY2_10);
              succeeded = (Var_36 == Var_37);
              if (succeeded)
              {
                Var_38 = (MR_Integer) (ArgX3_11);
                Var_39 = (MR_Integer) (ArgY3_12);
                succeeded = (Var_38 == Var_39);
                if (succeeded)
                  succeeded = (strcmp(ArgX4_13, ArgY4_14) == 0);
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_16;
          MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_18;
          MR_Word ArgX3_19 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_20;
          MR_Word ArgX4_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 3))));
          MR_Word ArgY4_22;
          MR_Integer Var_30;
          MR_Integer Var_31;
          MR_Integer Var_32;
          MR_Integer Var_33;
          MR_Integer Var_34;
          MR_Integer Var_35;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_16 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_20 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_22 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 3))));
            succeeded = check_hlds__unify_proc____Unify____args_locn_0_0(ArgX1_15, ArgY1_16);
            if (succeeded)
            {
              Var_30 = (MR_Integer) (ArgX2_17);
              Var_31 = (MR_Integer) (ArgY2_18);
              succeeded = (Var_30 == Var_31);
              if (succeeded)
              {
                Var_32 = (MR_Integer) (ArgX3_19);
                Var_33 = (MR_Integer) (ArgY3_20);
                succeeded = (Var_32 == Var_33);
                if (succeeded)
                {
                  Var_34 = (MR_Integer) (ArgX4_21);
                  Var_35 = (MR_Integer) (ArgY4_22);
                  succeeded = (Var_34 == Var_35);
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
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgY3_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_12;

      hlds__hlds_data____Compare____constructor_arg_repn_0_0(&SubResult1_12, Var_25, ArgY1_11);
      succeeded = (SubResult1_12 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_12;
      else
      {
        MR_Word SubResult2_15;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[3]), &SubResult2_15, ((MR_Box) (Var_24)), ((MR_Box) (ArgY2_14)));
        succeeded = (SubResult2_15 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_15;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_23)), ((MR_Box) (ArgY3_17)));
      }
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
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_10;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      succeeded = hlds__hlds_data____Unify____constructor_arg_repn_0_0(ArgX1_5, ArgY1_6);
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&check_hlds__unify_proc_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
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
    MR_String Var_11 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_11, ArgY1_5);
    }
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
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
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      uint8_t Var_12 = (uint8_t) (Var_11);
      uint8_t Var_13 = (uint8_t) (ArgY1_7);

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
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    uint8_t Var_10;
    uint8_t Var_11;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      Var_10 = (uint8_t) (ArgX1_5);
      Var_11 = (uint8_t) (ArgY1_6);
      succeeded = (Var_10 == Var_11);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc__generate_index_du_case_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Var_6;
  MR_Word conv1_STATE_VARIABLE_Info_14;

  check_hlds__unify_proc__info_new_var_no_type_4_p_0(((MR_String) (wrapper_arg_1)), &conv2_Var_6, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Info_14);
  *wrapper_arg_2 = ((MR_Box) (conv2_Var_6));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Info_14));
}

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_index_du_case_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_19;

  conv0_LambdaHeadVar__2_19 = check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars_for_cons_args__2849__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_19));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__unify_proc__generate_index_du_case_9_p_0(
  MR_Word SpecDefnInfo_10,
  MR_Word X_11,
  MR_Word Index_12,
  MR_Word CtorRepn_13,
  MR_Word * Goal_14,
  MR_Integer STATE_VARIABLE_N_0_33,
  MR_Integer * STATE_VARIABLE_N_34,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  MR_Word MaybeExistConstraints_18 = ((MR_Word) ((MR_hl_field(0, CtorRepn_13, (MR_Integer) 1))));
  MR_Word FunctorName_19 = ((MR_Word) ((MR_hl_field(0, CtorRepn_13, (MR_Integer) 2))));
  MR_Word ArgRepns_21 = ((MR_Word) ((MR_hl_field(0, CtorRepn_13, (MR_Integer) 4))));
  MR_Integer FunctorArity_22 = ((MR_Integer) ((MR_hl_field(0, CtorRepn_13, (MR_Integer) 5))));
  MR_Word TypeCtor_24 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_10, (MR_Integer) 4))));
  MR_Word FunctorConsId_25;
  MR_Word ArgVars_26;
  MR_Word Context_27 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_10, (MR_Integer) 7))));
  MR_Word GoalUnifyX_28;
  MR_Word UnifyIndexGoal_29;
  MR_Word GoalList_30;
  MR_Word GoalInfo0_31;
  MR_Word GoalInfo_32;
  MR_Word Var_38;
  MR_Word Var_44;

  {
    FunctorConsId_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, FunctorConsId_25, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, FunctorConsId_25, 1) = ((MR_Box) (FunctorName_19));
    MR_hl_field(3, FunctorConsId_25, 2) = ((MR_Box) (FunctorArity_22));
    MR_hl_field(3, FunctorConsId_25, 3) = ((MR_Box) (TypeCtor_24));
  }
  if ((MaybeExistConstraints_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ArgTypes_60;

    ArgTypes_60 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__unify_proc_scalar_common_5[6]), ArgRepns_21);
    check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(ArgTypes_60, &ArgVars_26, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
  }
  else
  {
    MR_Integer NumVars_61;
    MR_Word VarNames_62;
    MR_Box conv3_STATE_VARIABLE_Info_36;

    mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), ArgRepns_21, &NumVars_61);
    mercury__list__duplicate_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NumVars_61, ((MR_Box) ((MR_String) "")), &VarNames_62);
    mercury__list__map_foldl_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), (MR_Word) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0), (MR_Word) (&check_hlds__unify_proc_scalar_common_5[7]), VarNames_62, &ArgVars_26, ((MR_Box) (STATE_VARIABLE_Info_0_35)), &conv3_STATE_VARIABLE_Info_36);
    *STATE_VARIABLE_Info_36 = ((MR_Word) (conv3_STATE_VARIABLE_Info_36));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (FunctorConsId_25));
    MR_hl_field(1, Var_38, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, Var_38, 2) = ((MR_Box) (ArgVars_26));
  }
  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_11, Var_38, Context_27, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyX_28);
  hlds__make_goal__make_int_const_construction_4_p_0(Context_27, Index_12, STATE_VARIABLE_N_0_33, &UnifyIndexGoal_29);
  *STATE_VARIABLE_N_34 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_33 + (MR_Unsigned) 1);
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (UnifyIndexGoal_29));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    GoalList_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GoalList_30, 0) = ((MR_Box) (GoalUnifyX_28));
    MR_hl_field(1, GoalList_30, 1) = ((MR_Box) (Var_44));
  }
  hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_31);
  hlds__hlds_goal__goal_info_set_context_3_p_0(Context_27, GoalInfo0_31, &GoalInfo_32);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_30, GoalInfo_32, Goal_14);
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_8_p_0(
  MR_Word SpecDefnInfo_9,
  MR_Word UCOptions_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word CtorRepn_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_Info_0_55,
  MR_Word * STATE_VARIABLE_Info_56)
{
  MR_bool succeeded;
  MR_Word MaybeExistConstraints_17 = ((MR_Word) ((MR_hl_field(0, CtorRepn_13, (MR_Integer) 1))));
  MR_Word FunctorName_18 = ((MR_Word) ((MR_hl_field(0, CtorRepn_13, (MR_Integer) 2))));
  MR_Word ConsTag_19 = ((MR_Word) ((MR_hl_field(0, CtorRepn_13, (MR_Integer) 3))));
  MR_Word CtorArgRepns_20 = ((MR_Word) ((MR_hl_field(0, CtorRepn_13, (MR_Integer) 4))));
  MR_Integer FunctorArity_21 = ((MR_Integer) ((MR_hl_field(0, CtorRepn_13, (MR_Integer) 5))));
  MR_Word TypeCtor_23 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_9, (MR_Integer) 4))));
  MR_Word FunctorConsId_25;
  MR_Word Context_26;
  MR_Word ExistQTVars_27;
  MR_Word GiveVarsTypes_28;
  MR_Word GoalList_42;
  MR_Word GoalInfo_54;
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, TypeCtor_23, (MR_Integer) 0))));
  MR_String Var_58;
  MR_Word RHSVars_29;
  MR_Word STATE_VARIABLE_Info_63_63;
  MR_Word Var_119;
  MR_Word Var_120;

  succeeded = ((MR_tag((MR_Word) Var_57)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_58 = ((MR_String) ((MR_hl_field(0, Var_57, (MR_Integer) 0))));
    succeeded = (strcmp(Var_58, (MR_String) "{}") == 0);
  }
  if (succeeded)
    {
      FunctorConsId_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, FunctorConsId_25, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, FunctorConsId_25, 1) = ((MR_Box) (FunctorArity_21));
    }
  else
    {
      FunctorConsId_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, FunctorConsId_25, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, FunctorConsId_25, 1) = ((MR_Box) (FunctorName_18));
      MR_hl_field(3, FunctorConsId_25, 2) = ((MR_Box) (FunctorArity_21));
      MR_hl_field(3, FunctorConsId_25, 3) = ((MR_Box) (TypeCtor_23));
    }
  Context_26 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_9, (MR_Integer) 7))));
  check_hlds__unify_proc__compute_exist_constraint_implications_3_p_0(MaybeExistConstraints_17, &ExistQTVars_27, &GiveVarsTypes_28);
  Var_120 = ((((MR_Unsigned) ((MR_hl_field(0, UCOptions_10, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  Var_119 = ((MR_Unsigned) ((MR_hl_field(0, UCOptions_10, (MR_Integer) 0))) & (MR_Integer) 1);
  if ((CtorArgRepns_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (Var_120 == (MR_Integer) 1);
    if (succeeded)
    {
      RHSVars_29 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Info_63_63 = STATE_VARIABLE_Info_0_55;
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_String Var_61;
    MR_Word STATE_VARIABLE_Info_62_62;
    MR_Word Var_64;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;

    succeeded = ((((MR_tag((MR_Word) ConsTag_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsTag_19, (MR_Integer) 0)))) == (MR_Integer) 12)));
    if (succeeded)
    {
      succeeded = (Var_119 == (MR_Integer) 1);
      if (succeeded)
      {
        Var_61 = (MR_String) "_Arg";
        check_hlds__unify_proc__make_fresh_vars_6_p_0(GiveVarsTypes_28, Var_61, CtorArgRepns_20, &RHSVars_29, STATE_VARIABLE_Info_0_55, &STATE_VARIABLE_Info_62_62);
        Var_64 = (MR_Integer) 1;
        Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 0))));
        Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 1))));
        Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_62_62, (MR_Integer) 2))));
        {
          STATE_VARIABLE_Info_63_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_63_63, 0) = ((MR_Box) (Var_113));
          MR_hl_field(0, STATE_VARIABLE_Info_63_63, 1) = ((MR_Box) (Var_114));
          MR_hl_field(0, STATE_VARIABLE_Info_63_63, 2) = ((MR_Box) (Var_115));
          MR_hl_field(0, STATE_VARIABLE_Info_63_63, 3) = (MR_Box) ((MR_Unsigned) (Var_64));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    MR_Word RHS_33;
    MR_Word GoalUnifyX_34;
    MR_Word CastX_35;
    MR_Word CastY_36;
    MR_Word CastXGoal0_37;
    MR_Word CastYGoal0_38;
    MR_Word CastXGoal_39;
    MR_Word CastYGoal_40;
    MR_Word GoalUnifyY_41;
    MR_Word Var_69;
    MR_Word STATE_VARIABLE_Info_70_70;
    MR_Word Var_72;
    MR_Word Var_78;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;

    {
      RHS_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RHS_33, 0) = ((MR_Box) (FunctorConsId_25));
      MR_hl_field(1, RHS_33, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, RHS_33, 2) = ((MR_Box) (RHSVars_29));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_11, RHS_33, Context_26, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyX_34);
    Var_69 = parse_tree__builtin_lib_types__int_type_0_f_0();
    check_hlds__unify_proc__info_new_var_5_p_0((MR_String) "CastX", Var_69, &CastX_35, STATE_VARIABLE_Info_63_63, &STATE_VARIABLE_Info_70_70);
    Var_72 = parse_tree__builtin_lib_types__int_type_0_f_0();
    check_hlds__unify_proc__info_new_var_5_p_0((MR_String) "CastY", Var_72, &CastY_36, STATE_VARIABLE_Info_70_70, STATE_VARIABLE_Info_56);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, X_11, CastX_35, Context_26, &CastXGoal0_37);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Y_12, CastY_36, Context_26, &CastYGoal0_38);
    hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 13, CastXGoal0_37, &CastXGoal_39);
    hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 13, CastYGoal0_38, &CastYGoal_40);
    {
      Var_78 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_78, 0) = ((MR_Box) (CastX_35));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(CastY_36, Var_78, Context_26, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyY_41);
    {
      Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_83, 0) = ((MR_Box) (GoalUnifyY_41));
      MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_82, 0) = ((MR_Box) (CastYGoal_40));
      MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_83));
    }
    {
      Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_81, 0) = ((MR_Box) (CastXGoal_39));
      MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_82));
    }
    {
      GoalList_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GoalList_42, 0) = ((MR_Box) (GoalUnifyX_34));
      MR_hl_field(1, GoalList_42, 1) = ((MR_Box) (Var_81));
    }
  }
  else
  {
    MR_Word MaybePackableArgsLocn_43;
    MR_Word ModuleInfo_44;
    MR_Word UCParams_45;
    MR_Word VarTable0_46;
    MR_Word TermType_47;
    MR_Word UnifyArgsGoals_49;
    MR_Word VarsX_50;
    MR_Word VarsY_51;
    MR_Word RHSX_52;
    MR_Word RHSY_53;
    MR_Word Var_85;
    MR_Word Var_94;
    MR_Word GoalUnifyX_95;
    MR_Word GoalUnifyY_96;
    MR_Word Var_117;

    MaybePackableArgsLocn_43 = check_hlds__unify_proc__compute_maybe_packable_args_locn_1_f_0(ConsTag_19);
    check_hlds__unify_proc__info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_55, &ModuleInfo_44);
    Var_85 = ((((MR_Unsigned) ((MR_hl_field(0, UCOptions_10, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    Var_117 = ((MR_Unsigned) ((MR_hl_field(0, UCOptions_10, (MR_Integer) 0))) & (MR_Integer) 1);
    {
      UCParams_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UCParams_45, 0) = ((MR_Box) (ModuleInfo_44));
      MR_hl_field(0, UCParams_45, 1) = ((MR_Box) (Context_26));
      MR_hl_field(0, UCParams_45, 2) = ((MR_Box) (ExistQTVars_27));
      MR_hl_field(0, UCParams_45, 3) = ((MR_Box) (MaybePackableArgsLocn_43));
      MR_hl_field(0, UCParams_45, 4) = (MR_Box) (((((MR_Unsigned) (GiveVarsTypes_28) << 2)) | (((((MR_Unsigned) (Var_85) << 1)) | (MR_Unsigned) (Var_117)))));
    }
    check_hlds__unify_proc__info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_55, &VarTable0_46);
    parse_tree__var_table__lookup_var_type_3_p_0(VarTable0_46, X_11, &TermType_47);
    check_hlds__unify_proc__generate_arg_unify_goals_11_p_0(UCParams_45, TermType_47, X_11, Y_12, (MR_Integer) 1, CtorArgRepns_20, &UnifyArgsGoals_49, &VarsX_50, &VarsY_51, STATE_VARIABLE_Info_0_55, STATE_VARIABLE_Info_56);
    {
      RHSX_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RHSX_52, 0) = ((MR_Box) (FunctorConsId_25));
      MR_hl_field(1, RHSX_52, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, RHSX_52, 2) = ((MR_Box) (VarsX_50));
    }
    {
      RHSY_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RHSY_53, 0) = ((MR_Box) (FunctorConsId_25));
      MR_hl_field(1, RHSY_53, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, RHSY_53, 2) = ((MR_Box) (VarsY_51));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_11, RHSX_52, Context_26, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyX_95);
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Y_12, RHSY_53, Context_26, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyY_96);
    {
      Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_94, 0) = ((MR_Box) (GoalUnifyY_96));
      MR_hl_field(1, Var_94, 1) = ((MR_Box) (UnifyArgsGoals_49));
    }
    {
      GoalList_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GoalList_42, 0) = ((MR_Box) (GoalUnifyX_95));
      MR_hl_field(1, GoalList_42, 1) = ((MR_Box) (Var_94));
    }
  }
  hlds__hlds_goal__goal_info_init_2_p_0(Context_26, &GoalInfo_54);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_42, GoalInfo_54, Goal_14);
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_6_p_0(
  MR_Word GiveVarsTypes_7,
  MR_String Prefix_8,
  MR_Word CtorArgRepns_9,
  MR_Word * Vars_10,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  check_hlds__unify_proc__make_fresh_vars_loop_7_p_0(GiveVarsTypes_7, Prefix_8, (MR_Integer) 1, CtorArgRepns_9, Vars_10, STATE_VARIABLE_Info_0_12, STATE_VARIABLE_Info_13);
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_loop_7_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
  }
  else
  {
    MR_Word CtorArgRepn_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word CtorArgRepns_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Var_19;
    MR_Word Vars_20;
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_17, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Info_25_25;
    MR_Integer Var_26;
    MR_String NumStr_32;
    MR_String Name_33;

    NumStr_32 = mercury__string__int_to_string_1_f_0(HeadVar__3_3);
    Name_33 = mercury__string__f_43_43_2_f_0(HeadVar__2_2, NumStr_32);
    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        check_hlds__unify_proc__info_new_var_no_type_4_p_0(Name_33, &Var_19, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_25_25);
        break;
      case (MR_Integer) 1:
        check_hlds__unify_proc__info_new_var_5_p_0(Name_33, Var_24, &Var_19, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_25_25);
        break;
    }
    Var_26 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) 1);
    check_hlds__unify_proc__make_fresh_vars_loop_7_p_0(HeadVar__1_1, HeadVar__2_2, Var_26, CtorArgRepns_18, &Vars_20, STATE_VARIABLE_Info_25_25, STATE_VARIABLE_Info_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (Vars_20));
    }
  }
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

    *ExistQTVars_5 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_7, (MR_Integer) 0))));
    *GiveVarsTypes_6 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_arg_unify_goals_11_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
    MR_Word CtorArgRepn_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
    MR_Word CtorArgRepns_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
    MR_Word UnifyHow_31;
    MR_Word GiveVarsTypes_32;
    MR_Word Var_96;

    check_hlds__unify_proc__may_we_start_packing_at_this_arg_unify_3_p_0(UCParams_1, CtorArgRepn_25, &UnifyHow_31);
    Var_96 = ((MR_Word) ((MR_hl_field(0, UCParams_1, (MR_Integer) 0))));
    GiveVarsTypes_32 = ((((MR_Unsigned) ((MR_hl_field(0, UCParams_1, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
    if ((UnifyHow_31 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Type_33 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_25, (MR_Integer) 1))));
      MR_Word IsDummy_35;
      MR_Word HeadVarX_36;
      MR_Word HeadVarY_37;
      MR_Word TailVarsX_38;
      MR_Word TailVarsY_39;

      IsDummy_35 = check_hlds__type_util__is_type_a_dummy_2_f_0(Var_96, Type_33);
      switch (IsDummy_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_Info_55_55;
            MR_Integer Var_56;

            check_hlds__unify_proc__make_fresh_var_pair_9_p_0(GiveVarsTypes_32, (MR_String) "_ArgX", (MR_String) "_ArgY", ArgNum_5, Type_33, &HeadVarX_36, &HeadVarY_37, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_55_55);
            Var_56 = (MR_Integer) ((MR_Unsigned) ArgNum_5 + (MR_Unsigned) 1);
            check_hlds__unify_proc__generate_arg_unify_goals_11_p_0(UCParams_1, TermType_2, TermVarX_3, TermVarY_4, Var_56, CtorArgRepns_26, HeadVar__7_7, &TailVarsX_38, &TailVarsY_39, STATE_VARIABLE_Info_55_55, STATE_VARIABLE_Info_11);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Context_40;
            MR_Word HeadGoal_41;
            MR_Word TailGoals_42;
            MR_Word STATE_VARIABLE_Info_61_61;
            MR_Integer Var_70;

            check_hlds__unify_proc__make_fresh_var_pair_9_p_0(GiveVarsTypes_32, (MR_String) "ArgX", (MR_String) "ArgY", ArgNum_5, Type_33, &HeadVarX_36, &HeadVarY_37, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_61_61);
            Context_40 = ((MR_Word) ((MR_hl_field(0, UCParams_1, (MR_Integer) 1))));
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
            check_hlds__unify_proc__generate_arg_unify_goals_11_p_0(UCParams_1, TermType_2, TermVarX_3, TermVarY_4, Var_70, CtorArgRepns_26, &TailGoals_42, &TailVarsX_38, &TailVarsY_39, STATE_VARIABLE_Info_61_61, STATE_VARIABLE_Info_11);
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
      MR_Word ArgsLocn_43 = ((MR_Word) ((MR_hl_field(1, UnifyHow_31, (MR_Integer) 0))));
      MR_Word CellOffset_44 = ((MR_Word) ((MR_hl_field(1, UnifyHow_31, (MR_Integer) 1))));
      MR_Word Ptag_45;
      MR_Integer LeftOverArgNum_46;
      MR_Word LeftOverCtorArgRepns_47;
      MR_Word RestOfWordVarsX_48;
      MR_Word RestOfWordVarsY_49;
      MR_Word HeadGoals_50;
      MR_Word STATE_VARIABLE_Info_76_76;
      MR_Word Var_77;
      MR_Word STATE_VARIABLE_Info_82_82;
      MR_Word STATE_VARIABLE_Info_83_83;
      MR_Word STATE_VARIABLE_Info_84_84;
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
        Ptag_45 = ((MR_Word) ((MR_hl_field(1, ArgsLocn_43, (MR_Integer) 0))));
      check_hlds__unify_proc__info_set_packed_ops_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_76_76);
      Type_88 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_25, (MR_Integer) 1))));
      Context_94 = ((MR_Word) ((MR_hl_field(0, UCParams_1, (MR_Integer) 1))));
      {
        Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_77, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[3]));
        MR_hl_field(0, Var_77, 1) = ((MR_Box) (check_hlds__unify_proc__generate_arg_unify_goals_11_p_0_1));
        MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_77, 3) = ((MR_Box) (UCParams_1));
        MR_hl_field(0, Var_77, 4) = ((MR_Box) (Type_88));
      }
      mercury__require__expect_not_3_p_0(Var_77, (MR_String) "predicate \140check_hlds.unify_proc.generate_arg_unify_goals\'/11", (MR_String) "sub-word-size argument of existential type");
      check_hlds__unify_proc__make_fresh_var_pair_9_p_0(GiveVarsTypes_32, (MR_String) "_ArgX", (MR_String) "_ArgY", ArgNum_5, Type_88, &HeadVarX_90, &HeadVarY_91, STATE_VARIABLE_Info_76_76, &STATE_VARIABLE_Info_82_82);
      check_hlds__unify_proc__get_rest_of_word_10_p_0(UCParams_1, CellOffset_44, ArgNum_5, &LeftOverArgNum_46, CtorArgRepns_26, &LeftOverCtorArgRepns_47, &RestOfWordVarsX_48, &RestOfWordVarsY_49, STATE_VARIABLE_Info_82_82, &STATE_VARIABLE_Info_83_83);
      ModuleInfo_89 = ((MR_Word) ((MR_hl_field(0, UCParams_1, (MR_Integer) 0))));
      check_hlds__unify_proc__build_bulk_unify_foreign_proc_11_p_0(ModuleInfo_89, Ptag_45, TermType_2, TermVarX_3, TermVarY_4, ArgNum_5, CellOffset_44, Context_94, &HeadGoals_50, STATE_VARIABLE_Info_83_83, &STATE_VARIABLE_Info_84_84);
      check_hlds__unify_proc__generate_arg_unify_goals_11_p_0(UCParams_1, TermType_2, TermVarX_3, TermVarY_4, LeftOverArgNum_46, LeftOverCtorArgRepns_47, &TailGoals_95, &TailVarsX_92, &TailVarsY_93, STATE_VARIABLE_Info_84_84, STATE_VARIABLE_Info_11);
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
check_hlds__unify_proc__info_set_packed_ops_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));

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
  MR_Word AllowPackedUnifyCompare_7 = ((MR_Unsigned) ((MR_hl_field(0, UCParams_4, (MR_Integer) 4))) & (MR_Integer) 1);
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, UCParams_4, (MR_Integer) 3))));

  switch (AllowPackedUnifyCompare_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      if ((Var_32 == (MR_Word) ((MR_Unsigned) 0U)))
        *UnifyHow_6 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word ArgsLocn_9 = ((MR_Word) ((MR_hl_field(1, Var_32, (MR_Integer) 0))));
        MR_Word ArgPosWidth_10 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_5, (MR_Integer) 2))));

        switch (MR_tag((MR_Word) ArgPosWidth_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *UnifyHow_6 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *UnifyHow_6 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_10, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word CellOffset_17 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_10, (MR_Integer) 2))));

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
                  MR_Word CellOffset_44 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_10, (MR_Integer) 2))));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *UnifyHow_6 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (ArgsLocn_9));
                    MR_hl_field(1, base, 1) = ((MR_Box) (CellOffset_44));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word CellOffset_28 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_10, (MR_Integer) 2))));

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

  succeeded = check_hlds__unify_proc__IntroducedFrom__pred__get_rest_of_word__912__2_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_rest_of_word_10_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_rest_of_word_10_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__IntroducedFrom__pred__get_rest_of_word__912__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_rest_of_word_10_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
    MR_Word CtorArgRepn_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
    MR_Word CtorArgRepns_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word ArgPosWidth_28 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_22, (MR_Integer) 2))));
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_22, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) ArgPosWidth_28)) {
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
        switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_28, (MR_Integer) 0))))) {
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
              MR_Word ArgCellOffset_92 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_28, (MR_Integer) 2))));
              MR_Word GiveVarsTypes_94;
              MR_Word HeadVarX_95;
              MR_Word HeadVarY_96;
              MR_Word TailVarsX_97;
              MR_Word TailVarsY_98;
              MR_Word Var_99;
              MR_Word Var_102;
              MR_Word STATE_VARIABLE_Info_65_107;
              MR_Integer STATE_VARIABLE_ArgNum_66_108;

              {
                Var_99 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_99, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[3]));
                MR_hl_field(0, Var_99, 1) = ((MR_Box) (check_hlds__unify_proc__get_rest_of_word_10_p_0_3));
                MR_hl_field(0, Var_99, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_99, 3) = ((MR_Box) (HeadVar__1_1));
                MR_hl_field(0, Var_99, 4) = ((MR_Box) (Var_69));
              }
              mercury__require__expect_not_3_p_0(Var_99, (MR_String) "predicate \140check_hlds.unify_proc.get_rest_of_word\'/10", (MR_String) "sub-word-size argument of existential type");
              {
                Var_102 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_102, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[4]));
                MR_hl_field(0, Var_102, 1) = ((MR_Box) (check_hlds__unify_proc__get_rest_of_word_10_p_0_4));
                MR_hl_field(0, Var_102, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_102, 3) = ((MR_Box) (HeadVar__2_2));
                MR_hl_field(0, Var_102, 4) = ((MR_Box) (ArgCellOffset_92));
              }
              mercury__require__expect_3_p_0(Var_102, (MR_String) "predicate \140check_hlds.unify_proc.get_rest_of_word\'/10", (MR_String) "apw_{partial,none}_shifted offset != CellOffset");
              GiveVarsTypes_94 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
              check_hlds__unify_proc__make_fresh_var_pair_9_p_0(GiveVarsTypes_94, (MR_String) "_ArgX", (MR_String) "_ArgY", STATE_VARIABLE_ArgNum_0_3, Var_69, &HeadVarX_95, &HeadVarY_96, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_65_107);
              STATE_VARIABLE_ArgNum_66_108 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ArgNum_0_3 + (MR_Unsigned) 1);
              check_hlds__unify_proc__get_rest_of_word_10_p_0(HeadVar__1_1, HeadVar__2_2, STATE_VARIABLE_ArgNum_66_108, STATE_VARIABLE_ArgNum_4, CtorArgRepns_23, HeadVar__6_6, &TailVarsX_97, &TailVarsY_98, STATE_VARIABLE_Info_65_107, STATE_VARIABLE_Info_10);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__7_7 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (HeadVarX_95));
                MR_hl_field(1, base, 1) = ((MR_Box) (TailVarsX_97));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__8_8 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (HeadVarY_96));
                MR_hl_field(1, base, 1) = ((MR_Box) (TailVarsY_98));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgCellOffset_30 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_28, (MR_Integer) 2))));
              MR_Word GiveVarsTypes_37;
              MR_Word HeadVarX_38;
              MR_Word HeadVarY_39;
              MR_Word TailVarsX_40;
              MR_Word TailVarsY_41;
              MR_Word Var_57;
              MR_Word Var_60;
              MR_Word STATE_VARIABLE_Info_65_65;
              MR_Integer STATE_VARIABLE_ArgNum_66_66;

              {
                Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_57, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[3]));
                MR_hl_field(0, Var_57, 1) = ((MR_Box) (check_hlds__unify_proc__get_rest_of_word_10_p_0_1));
                MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_57, 3) = ((MR_Box) (HeadVar__1_1));
                MR_hl_field(0, Var_57, 4) = ((MR_Box) (Var_69));
              }
              mercury__require__expect_not_3_p_0(Var_57, (MR_String) "predicate \140check_hlds.unify_proc.get_rest_of_word\'/10", (MR_String) "sub-word-size argument of existential type");
              {
                Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_60, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[4]));
                MR_hl_field(0, Var_60, 1) = ((MR_Box) (check_hlds__unify_proc__get_rest_of_word_10_p_0_2));
                MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_60, 3) = ((MR_Box) (HeadVar__2_2));
                MR_hl_field(0, Var_60, 4) = ((MR_Box) (ArgCellOffset_30));
              }
              mercury__require__expect_3_p_0(Var_60, (MR_String) "predicate \140check_hlds.unify_proc.get_rest_of_word\'/10", (MR_String) "apw_{partial,none}_shifted offset != CellOffset");
              GiveVarsTypes_37 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
              check_hlds__unify_proc__make_fresh_var_pair_9_p_0(GiveVarsTypes_37, (MR_String) "_ArgX", (MR_String) "_ArgY", STATE_VARIABLE_ArgNum_0_3, Var_69, &HeadVarX_38, &HeadVarY_39, STATE_VARIABLE_Info_0_9, &STATE_VARIABLE_Info_65_65);
              STATE_VARIABLE_ArgNum_66_66 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ArgNum_0_3 + (MR_Unsigned) 1);
              check_hlds__unify_proc__get_rest_of_word_10_p_0(HeadVar__1_1, HeadVar__2_2, STATE_VARIABLE_ArgNum_66_66, STATE_VARIABLE_ArgNum_4, CtorArgRepns_23, HeadVar__6_6, &TailVarsX_40, &TailVarsY_41, STATE_VARIABLE_Info_65_65, STATE_VARIABLE_Info_10);
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
  MR_Word STATE_VARIABLE_Attrs_4_61;
  MR_Word STATE_VARIABLE_Attrs_7_64;
  MR_Word STATE_VARIABLE_Attrs_9_66;
  MR_Word STATE_VARIABLE_Attrs_11_68;
  MR_Word STATE_VARIABLE_Attrs_13_70;
  MR_Word STATE_VARIABLE_Attrs_15_72;
  MR_Word STATE_VARIABLE_Attrs_17_74;
  MR_Word STATE_VARIABLE_Attrs_19_76;
  MR_Word STATE_VARIABLE_Attrs_21_78;
  MR_Word STATE_VARIABLE_Attrs_23_80;

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
  STATE_VARIABLE_Attrs_4_61 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
  parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_4_61, &STATE_VARIABLE_Attrs_7_64);
  parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_7_64, &STATE_VARIABLE_Attrs_9_66);
  parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_9_66, &STATE_VARIABLE_Attrs_11_68);
  parse_tree__prog_data_foreign__set_terminates_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_11_68, &STATE_VARIABLE_Attrs_13_70);
  parse_tree__prog_data_foreign__set_may_throw_exception_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_13_70, &STATE_VARIABLE_Attrs_15_72);
  parse_tree__prog_data_foreign__set_may_modify_trail_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_15_72, &STATE_VARIABLE_Attrs_17_74);
  parse_tree__prog_data_foreign__set_may_call_mm_tabled_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_17_74, &STATE_VARIABLE_Attrs_19_76);
  parse_tree__prog_data_foreign__set_affects_liveness_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_19_76, &STATE_VARIABLE_Attrs_21_78);
  parse_tree__prog_data_foreign__set_allocates_memory_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_21_78, &STATE_VARIABLE_Attrs_23_80);
  parse_tree__prog_data_foreign__set_registers_roots_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_23_80, &Var_55);
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
  MR_Word SpecialPredId_8 = ((MR_Unsigned) ((MR_hl_field(0, SpecDefnInfo_5, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word Type_9 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_5, (MR_Integer) 3))));
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
  MR_Word STATE_VARIABLE_Info_33_33;
  MR_Word STATE_VARIABLE_Info_36_36;
  MR_Word STATE_VARIABLE_Info_39_39;
  MR_Word Var_58;
  MR_Word VarTable_85;
  MR_Word RttiVarMaps_86;
  MR_Word _Modes_11;
  MR_Word _Det_12;

  hlds__special_pred__special_pred_interface_5_p_0(SpecialPredId_8, Type_9, &ArgTypes_10, &_Modes_11, &_Det_12);
  parse_tree__var_table__init_var_table_1_p_0(&VarTable_85);
  hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_86);
  {
    STATE_VARIABLE_Info_33_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Info_33_33, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_31));
    MR_hl_field(0, STATE_VARIABLE_Info_33_33, 1) = ((MR_Box) (VarTable_85));
    MR_hl_field(0, STATE_VARIABLE_Info_33_33, 2) = ((MR_Box) (RttiVarMaps_86));
    MR_hl_field(0, STATE_VARIABLE_Info_33_33, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(ArgTypes_10, (MR_String) "HeadVar__", (MR_Integer) 1, &ArgVars_14, STATE_VARIABLE_Info_33_33, &STATE_VARIABLE_Info_36_36);
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
          Res_20 = ((MR_Word) ((MR_hl_field(1, ArgVars_14, (MR_Integer) 0))));
          Var_48 = ((MR_Word) ((MR_hl_field(1, ArgVars_14, (MR_Integer) 1))));
          succeeded = (Var_48 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            X_63 = ((MR_Word) ((MR_hl_field(1, Var_48, (MR_Integer) 0))));
            Var_49 = ((MR_Word) ((MR_hl_field(1, Var_48, (MR_Integer) 1))));
            succeeded = (Var_49 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Y_64 = ((MR_Word) ((MR_hl_field(1, Var_49, (MR_Integer) 0))));
              Var_50 = ((MR_Word) ((MR_hl_field(1, Var_49, (MR_Integer) 1))));
              succeeded = (Var_50 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
        if (succeeded)
          check_hlds__unify_proc__generate_compare_proc_body_7_p_0(SpecDefnInfo_5, Res_20, X_63, Y_64, &Clause_67, STATE_VARIABLE_Info_36_36, &STATE_VARIABLE_Info_39_39);
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
          X_61 = ((MR_Word) ((MR_hl_field(1, ArgVars_14, (MR_Integer) 0))));
          Var_42 = ((MR_Word) ((MR_hl_field(1, ArgVars_14, (MR_Integer) 1))));
          succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Index_18 = ((MR_Word) ((MR_hl_field(1, Var_42, (MR_Integer) 0))));
            Var_43 = ((MR_Word) ((MR_hl_field(1, Var_42, (MR_Integer) 1))));
            succeeded = (Var_43 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
          check_hlds__unify_proc__generate_index_proc_body_6_p_0(SpecDefnInfo_5, X_61, Index_18, &Clause_19, STATE_VARIABLE_Info_36_36, &STATE_VARIABLE_Info_39_39);
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
          X_15 = ((MR_Word) ((MR_hl_field(1, ArgVars_14, (MR_Integer) 0))));
          Var_37 = ((MR_Word) ((MR_hl_field(1, ArgVars_14, (MR_Integer) 1))));
          succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Y_16 = ((MR_Word) ((MR_hl_field(1, Var_37, (MR_Integer) 0))));
            Var_38 = ((MR_Word) ((MR_hl_field(1, Var_37, (MR_Integer) 1))));
            succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
        if (succeeded)
          check_hlds__unify_proc__generate_unify_proc_body_6_p_0(SpecDefnInfo_5, X_15, Y_16, &Clauses_17, STATE_VARIABLE_Info_36_36, &STATE_VARIABLE_Info_39_39);
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_clauses_for_special_pred\'/4", (MR_String) "bad unify args");
            return;
          }
      }
      break;
  }
  *STATE_VARIABLE_ModuleInfo_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 0))));
  VarTable_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_39_39, (MR_Integer) 1))));
  hlds__hlds_pred__split_var_table_3_p_0(VarTable_21, &VarSet_22, &VarTypes0_23);
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
    MR_Word Type_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Types_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_16;
    MR_Word Vars_17;
    MR_Word STATE_VARIABLE_Info_21_21;
    MR_Integer Var_22;
    MR_String NumStr_25;
    MR_String Name_26;

    mercury__string__int_to_string_2_p_0(Num_3, &NumStr_25);
    mercury__string__append_3_p_2(BaseName_2, NumStr_25, &Name_26);
    check_hlds__unify_proc__info_new_var_5_p_0(Name_26, Type_12, &Var_16, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_21_21);
    Var_22 = (MR_Integer) ((MR_Unsigned) Num_3 + (MR_Unsigned) 1);
    check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(Types_13, BaseName_2, Var_22, &Vars_17, STATE_VARIABLE_Info_21_21, STATE_VARIABLE_Info_6);
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
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Goal_14;
  MR_Integer conv1_STATE_VARIABLE_N_34;
  MR_Word conv0_STATE_VARIABLE_Info_36;

  check_hlds__unify_proc__generate_index_du_case_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_Goal_14, ((MR_Integer) (wrapper_arg_3)), &conv1_STATE_VARIABLE_N_34, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_36);
  *wrapper_arg_2 = ((MR_Box) (conv2_Goal_14));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_N_34));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_36));
}

static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_6_p_0(
  MR_Word SpecDefnInfo_7,
  MR_Word X_8,
  MR_Word Index_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31)
{
  MR_Word TypeBody_12 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_7, (MR_Integer) 5))));

  switch (MR_tag((MR_Word) TypeBody_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeBodyDu_17 = (MR_Word) ((MR_Word) (TypeBody_12));
        MR_Word MaybeRepn_21 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_17, (MR_Integer) 3))));
        MR_Word Repn_23;
        MR_Word DuTypeKind_24;
        MR_Word Var_57;

        if ((MaybeRepn_21 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/6", (MR_String) "MaybeRepn = no");
            return;
          }
        else
          Repn_23 = ((MR_Word) ((MR_hl_field(1, MaybeRepn_21, (MR_Integer) 0))));
        Var_57 = ((MR_Word) ((MR_hl_field(0, Repn_23, (MR_Integer) 0))));
        DuTypeKind_24 = ((MR_Word) ((MR_hl_field(0, Repn_23, (MR_Integer) 3))));
        switch (MR_tag((MR_Word) DuTypeKind_24)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(DuTypeKind_24)) {
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
                  MR_Word Disjuncts_65;
                  MR_Word Context_67;
                  MR_Word GoalInfo_68;
                  MR_Word Goal_69;
                  MR_Word Var_70;
                  MR_Word STATE_VARIABLE_Info_23_72;
                  MR_Word Var_73;
                  MR_Word Var_75;
                  MR_Word Var_76;
                  MR_Box conv4_Var_66;
                  MR_Box conv3_STATE_VARIABLE_Info_23_72;

                  {
                    Var_70 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_70, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_9[0]));
                    MR_hl_field(0, Var_70, 1) = ((MR_Box) (check_hlds__unify_proc__generate_index_proc_body_6_p_0_1));
                    MR_hl_field(0, Var_70, 2) = ((MR_Box) ((MR_Integer) 3));
                    MR_hl_field(0, Var_70, 3) = ((MR_Box) (SpecDefnInfo_7));
                    MR_hl_field(0, Var_70, 4) = ((MR_Box) (X_8));
                    MR_hl_field(0, Var_70, 5) = ((MR_Box) (Index_9));
                  }
                  mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0), Var_70, Var_57, &Disjuncts_65, ((MR_Box) ((MR_Integer) 0)), &conv4_Var_66, ((MR_Box) (STATE_VARIABLE_Info_0_30)), &conv3_STATE_VARIABLE_Info_23_72);
                  STATE_VARIABLE_Info_23_72 = ((MR_Word) (conv3_STATE_VARIABLE_Info_23_72));
                  Context_67 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_7, (MR_Integer) 7))));
                  hlds__hlds_goal__goal_info_init_2_p_0(Context_67, &GoalInfo_68);
                  {
                    Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(3, Var_73, 1) = ((MR_Box) (Disjuncts_65));
                  }
                  {
                    Goal_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Goal_69, 0) = ((MR_Box) (Var_73));
                    MR_hl_field(0, Goal_69, 1) = ((MR_Box) (GoalInfo_68));
                  }
                  {
                    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_76, 0) = ((MR_Box) (Index_9));
                    MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_75, 0) = ((MR_Box) (X_8));
                    MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_76));
                  }
                  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_75, Goal_69, Context_67, Clause_10, STATE_VARIABLE_Info_23_72, STATE_VARIABLE_Info_31);
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
      switch (((MR_Integer) ((MR_hl_field(3, TypeBody_12, (MR_Integer) 0))))) {
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

  succeeded = check_hlds__unify_proc__IntroducedFrom__pred__generate_compare_proc_body__1016__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_7_p_0(
  MR_Word SpecDefnInfo_8,
  MR_Word Res_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_44, (MR_Integer) 0))));
  MR_Word TypeBody_15 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_8, (MR_Integer) 5))));
  MR_Word Context_16 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_8, (MR_Integer) 7))));
  MR_Word SuperType_19;
  MR_Word TypeBodyDu_17;
  MR_Word Var_46;

  succeeded = ((MR_tag((MR_Word) TypeBody_15)) == (MR_Integer) 0);
  if (succeeded)
  {
    TypeBodyDu_17 = (MR_Word) ((MR_Word) (TypeBody_15));
    Var_46 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_17, (MR_Integer) 1))));
    succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      SuperType_19 = ((MR_Word) ((MR_hl_field(1, Var_46, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word TVarSet_23 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_8, (MR_Integer) 2))));
    MR_Word BaseType_24;
    MR_Word TypeTable_102;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_14, &TypeTable_102);
    check_hlds__unify_proc__get_du_base_type_loop_4_p_0(TypeTable_102, TVarSet_23, SuperType_19, &BaseType_24);
    check_hlds__unify_proc__generate_compare_proc_body_eqv_8_p_0(Context_16, BaseType_24, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
  }
  else
  {
    MR_Word UserEqComp_25;

    succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(ModuleInfo_14, TypeBody_15, &UserEqComp_25);
    if (succeeded)
      check_hlds__unify_proc__generate_compare_proc_body_user_8_p_0(Context_16, UserEqComp_25, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
    else
      switch (MR_tag((MR_Word) TypeBody_15)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MaybeSuperType_32;
            MR_Word MaybeRepn_34;
            MR_Word Repn_36;
            MR_Word DuTypeKind_37;
            MR_Word Var_57;
            MR_Word TypeBodyDu_69 = (MR_Word) ((MR_Word) (TypeBody_15));
            MR_Word Var_91;

            MaybeSuperType_32 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_69, (MR_Integer) 1))));
            MaybeRepn_34 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_69, (MR_Integer) 3))));
            {
              Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_57, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[1]));
              MR_hl_field(0, Var_57, 1) = ((MR_Box) (check_hlds__unify_proc__generate_compare_proc_body_7_p_0_1));
              MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_57, 3) = ((MR_Box) (MaybeSuperType_32));
              MR_hl_field(0, Var_57, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_57, (MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body\'/7", (MR_String) "MaybeSuperType != not_a_subtype");
            if ((MaybeRepn_34 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body\'/7", (MR_String) "MaybeRepn = no");
                return;
              }
            else
              Repn_36 = ((MR_Word) ((MR_hl_field(1, MaybeRepn_34, (MR_Integer) 0))));
            Var_91 = ((MR_Word) ((MR_hl_field(0, Repn_36, (MR_Integer) 0))));
            DuTypeKind_37 = ((MR_Word) ((MR_hl_field(0, Repn_36, (MR_Integer) 3))));
            switch (MR_tag((MR_Word) DuTypeKind_37)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(DuTypeKind_37)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    check_hlds__unify_proc__generate_compare_proc_body_enum_7_p_0(Context_16, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Goal_103;
                      MR_Word Var_105;
                      MR_Word Var_106;
                      MR_Word Var_107;
                      MR_Word Var_109;
                      MR_Word SymName_111;
                      MR_Word Var_113;
                      MR_Word Var_114;
                      MR_Word Builtin_115;
                      MR_Word Var_116;

                      Builtin_115 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                      {
                        Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_116, 0) = ((MR_Box) (Builtin_115));
                        MR_hl_field(1, Var_116, 1) = ((MR_Box) ((MR_String) "comparison_result"));
                      }
                      {
                        Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_113, 0) = ((MR_Box) (Var_116));
                        MR_hl_field(0, Var_113, 1) = ((MR_Box) ((MR_Integer) 0));
                      }
                      Var_114 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                      {
                        SymName_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, SymName_111, 0) = ((MR_Box) (Var_114));
                        MR_hl_field(1, SymName_111, 1) = ((MR_Box) ((MR_String) "="));
                      }
                      {
                        Var_109 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Var_109, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(3, Var_109, 1) = ((MR_Box) (SymName_111));
                        MR_hl_field(3, Var_109, 2) = ((MR_Box) ((MR_Integer) 0));
                        MR_hl_field(3, Var_109, 3) = ((MR_Box) (Var_113));
                      }
                      hlds__make_goal__make_const_construction_4_p_0(Context_16, Res_9, Var_109, &Goal_103);
                      {
                        Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_107, 0) = ((MR_Box) (Y_11));
                        MR_hl_field(1, Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_106, 0) = ((MR_Box) (X_10));
                        MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_107));
                      }
                      {
                        Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_105, 0) = ((MR_Box) (Res_9));
                        MR_hl_field(1, Var_105, 1) = ((MR_Box) (Var_106));
                      }
                      check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_105, Goal_103, Context_16, Clause_12, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
                    }
                    break;
                  case (MR_Integer) 2:
                    check_hlds__unify_proc__generate_compare_proc_body_du_8_p_0(SpecDefnInfo_8, Var_91, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
                    break;
                }
                break;
              case (MR_Integer) 1:
                check_hlds__unify_proc__generate_compare_proc_body_enum_7_p_0(Context_16, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgType_40 = ((MR_Word) ((MR_hl_field(2, DuTypeKind_37, (MR_Integer) 1))));
                  MR_Word ArgIsDummy_42;

                  ArgIsDummy_42 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_14, ArgType_40);
                  switch (ArgIsDummy_42) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      check_hlds__unify_proc__generate_compare_proc_body_dummy_7_p_0(Context_16, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word CtorRepns_43 = ((MR_Word) ((MR_hl_field(0, Repn_36, (MR_Integer) 0))));

                        check_hlds__unify_proc__generate_compare_proc_body_du_8_p_0(SpecDefnInfo_8, CtorRepns_43, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
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
            MR_Word Var_54;

            Var_54 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
            check_hlds__unify_proc__generate_compare_proc_body_eqv_8_p_0(Context_16, Var_54, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word EqvType_27 = ((MR_Word) ((MR_hl_field(2, TypeBody_15, (MR_Integer) 0))));
            MR_Word EqvIsDummy_28;

            EqvIsDummy_28 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_14, EqvType_27);
            switch (EqvIsDummy_28) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                check_hlds__unify_proc__generate_compare_proc_body_dummy_7_p_0(Context_16, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
                break;
              case (MR_Integer) 1:
                check_hlds__unify_proc__generate_compare_proc_body_eqv_8_p_0(Context_16, EqvType_27, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, TypeBody_15, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              check_hlds__unify_proc__generate_compare_proc_body_solver_7_p_0(Context_16, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
              break;
            case (MR_Integer) 1:
              {
                succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(ModuleInfo_14);
                if (succeeded)
                  check_hlds__unify_proc__generate_compare_proc_body_builtin_7_p_0(SpecDefnInfo_8, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
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

  succeeded = check_hlds__unify_proc__IntroducedFrom__pred__generate_compare_proc_body_du__1255__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
  MR_Word ModuleInfo_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_49, (MR_Integer) 0))));
  MR_Word Globals_17;
  MR_Word UCOptions_18;
  MR_Word Context_19;
  MR_Word Goal_44;
  MR_Word HeadVars_48;
  MR_Word Var_51;
  MR_Word STATE_VARIABLE_Info_66_66;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_55;
  MR_Word Var_98;
  MR_Word Var_102;
  MR_Word Var_103;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_16, &Globals_17);
  {
    Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_51, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[6]));
    MR_hl_field(0, Var_51, 1) = ((MR_Box) (check_hlds__unify_proc__generate_compare_proc_body_du_8_p_0_1));
    MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_51, 3) = ((MR_Box) (CtorRepns_10));
    MR_hl_field(0, Var_51, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_not_3_p_0(Var_51, (MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body_du\'/8", (MR_String) "compare for type with no functors");
  UCOptions_18 = check_hlds__unify_proc__lookup_unify_compare_options_1_f_0(STATE_VARIABLE_Info_0_49);
  Context_19 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_9, (MR_Integer) 7))));
  Var_55 = ((((MR_Unsigned) ((MR_hl_field(0, UCOptions_18, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  Var_98 = ((MR_Unsigned) ((MR_hl_field(0, UCOptions_18, (MR_Integer) 0))) & (MR_Integer) 1);
  succeeded = (Var_55 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (Var_98 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (CtorRepns_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_103 = ((MR_Word) ((MR_hl_field(1, CtorRepns_10, (MR_Integer) 0))));
        Var_102 = ((MR_Word) ((MR_hl_field(1, CtorRepns_10, (MR_Integer) 1))));
        if ((Var_102 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          uint8_t Var_21;

          succeeded = check_hlds__unify_proc__is_ctor_with_all_locally_packed_unsigned_args_2_p_0(Var_103, &Var_21);
        }
        else
        {
          MR_Word CtorRepnB_22 = ((MR_Word) ((MR_hl_field(1, Var_102, (MR_Integer) 0))));
          MR_Word ConsTagA_26;
          MR_Integer ArityA_28;
          MR_Word LocalArgsTagInfoA_30;
          MR_Word PtagA_31;
          MR_Word LocalSecTagA_32;
          uint8_t PtagBUint8_35;
          MR_Word Var_59 = ((MR_Word) ((MR_hl_field(1, Var_102, (MR_Integer) 1))));
          uint8_t Var_60;
          MR_Unsigned Var_61;
          uint8_t Var_62;

          succeeded = (Var_59 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            ConsTagA_26 = ((MR_Word) ((MR_hl_field(0, Var_103, (MR_Integer) 3))));
            ArityA_28 = ((MR_Integer) ((MR_hl_field(0, Var_103, (MR_Integer) 5))));
            succeeded = (ArityA_28 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) ConsTagA_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsTagA_26, (MR_Integer) 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                LocalArgsTagInfoA_30 = ((MR_Word) ((MR_hl_field(3, ConsTagA_26, (MR_Integer) 1))));
                succeeded = (LocalArgsTagInfoA_30 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  PtagA_31 = ((MR_Word) ((MR_hl_field(1, LocalArgsTagInfoA_30, (MR_Integer) 0))));
                  LocalSecTagA_32 = ((MR_Word) ((MR_hl_field(1, LocalArgsTagInfoA_30, (MR_Integer) 1))));
                  Var_60 = (uint8_t) (PtagA_31);
                  succeeded = (Var_60 == UINT8_C(0));
                  if (succeeded)
                  {
                    Var_61 = ((MR_Unsigned) ((MR_hl_field(0, LocalSecTagA_32, (MR_Integer) 0))));
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
    MR_Word STATE_VARIABLE_Info_64_64;
    MR_Word Var_69;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;

    CastType_36 = parse_tree__builtin_lib_types__uint_type_0_f_0();
    check_hlds__unify_proc__info_new_var_5_p_0((MR_String) "CastX", CastType_36, &CastX_37, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_64_64);
    check_hlds__unify_proc__info_new_var_5_p_0((MR_String) "CastY", CastType_36, &CastY_38, STATE_VARIABLE_Info_64_64, &STATE_VARIABLE_Info_66_66);
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
    MR_Word STATE_VARIABLE_Info_81_81;
    MR_Word Var_83;

    libs__globals__lookup_int_option_3_p_0(Globals_17, (MR_Integer) 361, &CompareSpec_45);
    mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), CtorRepns_10, &NumCtors_46);
    succeeded = (NumCtors_46 <= CompareSpec_45);
    if (succeeded)
      check_hlds__unify_proc__generate_compare_proc_body_du_quad_9_p_0(SpecDefnInfo_9, UCOptions_18, CtorRepns_10, Res_11, X_12, Y_13, &Goal0_47, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_81_81);
    else
      check_hlds__unify_proc__generate_compare_proc_body_du_linear_9_p_0(SpecDefnInfo_9, UCOptions_18, CtorRepns_10, Res_11, X_12, Y_13, &Goal0_47, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_81_81);
    {
      Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_83, 0) = ((MR_Box) (Res_11));
    }
    check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_19, X_12, Y_13, Var_83, Goal0_47, &Goal_44, STATE_VARIABLE_Info_81_81, &STATE_VARIABLE_Info_66_66);
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
  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), HeadVars_48, Goal_44, Context_19, Clause_14, STATE_VARIABLE_Info_66_66, STATE_VARIABLE_Info_50);
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
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49)
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
  MR_Word Cases_42;
  MR_Word CasesGoal_43;
  MR_Word AbortGoal_44;
  MR_Word HandleEqualGoal_45;
  MR_Word HandleGreaterEqualGoal_46;
  MR_Word HandleLessGreaterEqualGoal_47;
  MR_Word STATE_VARIABLE_Info_51_51;
  MR_Word STATE_VARIABLE_Info_53_53;
  MR_Word Var_55;
  MR_Word STATE_VARIABLE_Info_56_56;
  MR_Word STATE_VARIABLE_Info_58_58;
  MR_Word Var_60;
  MR_Word STATE_VARIABLE_Info_62_62;
  MR_Word Var_63;
  MR_Word Var_66;
  MR_Word STATE_VARIABLE_Info_68_68;
  MR_Word Var_69;
  MR_Word Var_71;
  MR_Word Var_73;
  MR_Word Var_76;
  MR_Word Var_81;
  MR_Word Var_83;
  MR_Word Var_85;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_93;
  MR_Word Var_95;
  MR_Word Var_97;
  MR_Word Var_99;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_103;

  IntType_18 = parse_tree__builtin_lib_types__int_type_0_f_0();
  check_hlds__unify_proc__info_new_var_5_p_0((MR_String) "IndexX", IntType_18, &IndexX_19, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_51_51);
  check_hlds__unify_proc__info_new_var_5_p_0((MR_String) "IndexY", IntType_18, &IndexY_20, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_53_53);
  Var_55 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
  check_hlds__unify_proc__info_new_var_5_p_0((MR_String) "CompareResult", Var_55, &R_21, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_56_56);
  TVarSet_26 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_10, (MR_Integer) 2))));
  Type_27 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_10, (MR_Integer) 3))));
  TypeCtor_28 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_10, (MR_Integer) 4))));
  TypeBody_29 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_10, (MR_Integer) 5))));
  TypeStatus0_30 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_10, (MR_Integer) 6))));
  Context_22 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_10, (MR_Integer) 7))));
  hlds__hlds_goal__goal_info_init_2_p_0(Context_22, &GoalInfo_23);
  ModuleInfo0_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_56_56, (MR_Integer) 0))));
  hlds__add_special_pred__add_special_pred_decl_defn_9_p_0((MR_Integer) 1, TVarSet_26, Type_27, TypeCtor_28, TypeBody_29, TypeStatus0_30, Context_22, ModuleInfo0_31, &ModuleInfo_32);
  check_hlds__unify_proc__info_set_module_info_3_p_0(ModuleInfo_32, STATE_VARIABLE_Info_56_56, &STATE_VARIABLE_Info_58_58);
  X_InstmapDelta_33 = hlds__instmap__instmap_delta_bind_var_1_f_0(IndexX_19);
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (IndexX_19));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (X_14));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
  }
  check_hlds__unify_proc__build_spec_pred_call_9_p_0(TypeCtor_28, (MR_Integer) 1, Var_60, X_InstmapDelta_33, (MR_Integer) 0, Context_22, &GoalIndexX_34, STATE_VARIABLE_Info_58_58, &STATE_VARIABLE_Info_62_62);
  Y_InstmapDelta_35 = hlds__instmap__instmap_delta_bind_var_1_f_0(IndexY_20);
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (IndexY_20));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (Y_15));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
  }
  check_hlds__unify_proc__build_spec_pred_call_9_p_0(TypeCtor_28, (MR_Integer) 1, Var_66, Y_InstmapDelta_35, (MR_Integer) 0, Context_22, &GoalIndexY_36, STATE_VARIABLE_Info_62_62, &STATE_VARIABLE_Info_68_68);
  Var_71 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (IndexX_19));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_69));
  }
  check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_32, Var_71, (MR_String) "builtin_int_lt", Var_73, Context_22, &GoalCallLessThan_37);
  Var_76 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_32, Var_76, (MR_String) "builtin_int_gt", Var_73, Context_22, &GoalCallGreaterThan_38);
  Var_81 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) "<");
  hlds__make_goal__make_const_construction_4_p_0(Context_22, Res_13, Var_81, &GoalReturnLessThan_39);
  Var_83 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) ">");
  hlds__make_goal__make_const_construction_4_p_0(Context_22, Res_13, Var_83, &GoalReturnGreaterThan_40);
  {
    Var_85 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_85, 0) = ((MR_Box) (R_21));
  }
  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Res_13, Var_85, Context_22, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &ReturnResultGoal_41);
  check_hlds__unify_proc__generate_compare_du_linear_cases_9_p_0(SpecDefnInfo_10, UCOptions_11, CtorRepns_12, R_21, X_14, Y_15, &Cases_42, STATE_VARIABLE_Info_68_68, STATE_VARIABLE_Info_49);
  {
    Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_89, 1) = ((MR_Box) (Cases_42));
  }
  {
    CasesGoal_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CasesGoal_43, 0) = ((MR_Box) (Var_89));
    MR_hl_field(0, CasesGoal_43, 1) = ((MR_Box) (GoalInfo_23));
  }
  Var_90 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_32, Var_90, (MR_String) "compare_error", (MR_Word) ((MR_Unsigned) 0U), Context_22, &AbortGoal_44);
  {
    Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_93, 2) = ((MR_Box) (CasesGoal_43));
    MR_hl_field(3, Var_93, 3) = ((MR_Box) (ReturnResultGoal_41));
    MR_hl_field(3, Var_93, 4) = ((MR_Box) (AbortGoal_44));
  }
  {
    HandleEqualGoal_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HandleEqualGoal_45, 0) = ((MR_Box) (Var_93));
    MR_hl_field(0, HandleEqualGoal_45, 1) = ((MR_Box) (GoalInfo_23));
  }
  {
    Var_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_95, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_95, 2) = ((MR_Box) (GoalCallGreaterThan_38));
    MR_hl_field(3, Var_95, 3) = ((MR_Box) (GoalReturnGreaterThan_40));
    MR_hl_field(3, Var_95, 4) = ((MR_Box) (HandleEqualGoal_45));
  }
  {
    HandleGreaterEqualGoal_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HandleGreaterEqualGoal_46, 0) = ((MR_Box) (Var_95));
    MR_hl_field(0, HandleGreaterEqualGoal_46, 1) = ((MR_Box) (GoalInfo_23));
  }
  {
    Var_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_97, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_97, 2) = ((MR_Box) (GoalCallLessThan_37));
    MR_hl_field(3, Var_97, 3) = ((MR_Box) (GoalReturnLessThan_39));
    MR_hl_field(3, Var_97, 4) = ((MR_Box) (HandleGreaterEqualGoal_46));
  }
  {
    HandleLessGreaterEqualGoal_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HandleLessGreaterEqualGoal_47, 0) = ((MR_Box) (Var_97));
    MR_hl_field(0, HandleLessGreaterEqualGoal_47, 1) = ((MR_Box) (GoalInfo_23));
  }
  {
    Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_103, 0) = ((MR_Box) (HandleLessGreaterEqualGoal_47));
    MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_102, 0) = ((MR_Box) (GoalIndexY_36));
    MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_103));
  }
  {
    Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_101, 0) = ((MR_Box) (GoalIndexX_34));
    MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_102));
  }
  {
    Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_99, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_99, 2) = ((MR_Box) (Var_101));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_99));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_23));
  }
}

static void MR_CALL 
check_hlds__unify_proc__info_set_module_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_6, (MR_Integer) 3))) & (MR_Integer) 1);

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

static MR_Word MR_CALL 
check_hlds__unify_proc__compare_cons_id_1_f_0(
  MR_String Name_3)
{
  MR_Word HeadVar__2_2;
  MR_Word SymName_4;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Word Builtin_8;
  MR_Word Var_9;

  Builtin_8 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (Builtin_8));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) ((MR_String) "comparison_result"));
  }
  {
    Var_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_6, 0) = ((MR_Box) (Var_9));
    MR_hl_field(0, Var_6, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  Var_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    SymName_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_4, 0) = ((MR_Box) (Var_7));
    MR_hl_field(1, SymName_4, 1) = ((MR_Box) (Name_3));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (SymName_4));
    MR_hl_field(3, HeadVar__2_2, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, HeadVar__2_2, 3) = ((MR_Box) (Var_6));
  }
  return HeadVar__2_2;
}

static void MR_CALL 
check_hlds__unify_proc__build_spec_pred_call_9_p_0(
  MR_Word TypeCtor_10,
  MR_Word SpecialPredId_11,
  MR_Word ArgVars_12,
  MR_Word InstmapDelta_13,
  MR_Word Detism_14,
  MR_Word Context_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_Info_0_26,
  MR_Word * STATE_VARIABLE_Info_27)
{
  MR_Word ModuleInfo_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_26, (MR_Integer) 0))));
  MR_Word PredName_19;
  MR_Word PredId_20;
  MR_Integer ProcId_21;
  MR_Word GoalExpr_22;
  MR_Word NonLocals_23;
  MR_Word GoalInfo0_24;
  MR_Word GoalInfo_25;

  hlds__special_pred__get_special_proc_det_6_p_0(ModuleInfo_18, TypeCtor_10, SpecialPredId_11, &PredName_19, &PredId_20, &ProcId_21);
  {
    GoalExpr_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, GoalExpr_22, 0) = ((MR_Box) (PredId_20));
    MR_hl_field(2, GoalExpr_22, 1) = ((MR_Box) (ProcId_21));
    MR_hl_field(2, GoalExpr_22, 2) = ((MR_Box) (ArgVars_12));
    MR_hl_field(2, GoalExpr_22, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(2, GoalExpr_22, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, GoalExpr_22, 5) = ((MR_Box) (PredName_19));
  }
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_12, &NonLocals_23);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_23, InstmapDelta_13, Detism_14, (MR_Integer) 0, &GoalInfo0_24);
  hlds__hlds_goal__goal_info_set_context_3_p_0(Context_15, GoalInfo0_24, &GoalInfo_25);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_22));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_25));
  }
  *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_linear_cases_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_9 = STATE_VARIABLE_Info_0_8;
  }
  else
  {
    MR_Word CtorRepn_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word CtorRepns_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Case_25;
    MR_Word Cases_26;
    MR_Word STATE_VARIABLE_Info_31_31;

    check_hlds__unify_proc__generate_compare_case_10_p_0(HeadVar__1_1, HeadVar__2_2, (MR_Integer) 0, CtorRepn_20, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, &Case_25, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_31_31);
    check_hlds__unify_proc__generate_compare_du_linear_cases_9_p_0(HeadVar__1_1, HeadVar__2_2, CtorRepns_21, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, &Cases_26, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_25));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_26));
    }
  }
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
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_Word Cases_18;
  MR_Word Context_19;
  MR_Word GoalInfo_20;

  check_hlds__unify_proc__generate_compare_du_quad_switch_on_x_11_p_0(SpecDefnInfo_10, UCOptions_11, CtorRepns_12, CtorRepns_12, R_13, X_14, Y_15, (MR_Word) ((MR_Unsigned) 0U), &Cases_18, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
  Context_19 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_10, (MR_Integer) 7))));
  hlds__hlds_goal__goal_info_init_2_p_0(Context_19, &GoalInfo_20);
  hlds__hlds_goal__disj_list_to_goal_3_p_0(Cases_18, GoalInfo_20, Goal_16);
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_quad_switch_on_x_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_Cases_0_8,
  MR_Word * STATE_VARIABLE_Cases_9,
  MR_Word STATE_VARIABLE_Info_0_10,
  MR_Word * STATE_VARIABLE_Info_11)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_11 = STATE_VARIABLE_Info_0_10;
      *STATE_VARIABLE_Cases_9 = STATE_VARIABLE_Cases_0_8;
    }
    else
    {
      MR_Word LeftCtorRepn_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word LeftCtorRepns_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Cases_39_39;
      MR_Word STATE_VARIABLE_Info_40_40;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Cases_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_10;

      check_hlds__unify_proc__generate_compare_du_quad_switch_on_y_12_p_0(HeadVar__1_1, HeadVar__2_2, LeftCtorRepn_26, HeadVar__4_4, (MR_String) ">", HeadVar__5_5, HeadVar__6_6, HeadVar__7_7, STATE_VARIABLE_Cases_0_8, &STATE_VARIABLE_Cases_39_39, STATE_VARIABLE_Info_0_10, &STATE_VARIABLE_Info_40_40);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = LeftCtorRepns_27;
      next_value_of_STATE_VARIABLE_Cases_0_8 = STATE_VARIABLE_Cases_39_39;
      next_value_of_STATE_VARIABLE_Info_0_10 = STATE_VARIABLE_Info_40_40;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Cases_0_8 = next_value_of_STATE_VARIABLE_Cases_0_8;
      STATE_VARIABLE_Info_0_10 = next_value_of_STATE_VARIABLE_Info_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_quad_switch_on_y_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_String HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word HeadVar__8_8,
  MR_Word STATE_VARIABLE_Cases_0_9,
  MR_Word * STATE_VARIABLE_Cases_10,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_0_11;
      *STATE_VARIABLE_Cases_10 = STATE_VARIABLE_Cases_0_9;
    }
    else
    {
      MR_Word RightCtorRepn_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word RightCtorRepns_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Case_37;
      MR_String Cmp1_38;
      MR_Word STATE_VARIABLE_Info_44_44;
      MR_Word Var_46;
      MR_Word next_value_of_HeadVar__4_4;
      MR_String next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Cases_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_11;

      succeeded = hlds__hlds_data____Unify____constructor_repn_0_0(HeadVar__3_3, RightCtorRepn_29);
      if (succeeded)
      {
        check_hlds__unify_proc__generate_compare_case_10_p_0(HeadVar__1_1, HeadVar__2_2, (MR_Integer) 1, HeadVar__3_3, HeadVar__6_6, HeadVar__7_7, HeadVar__8_8, &Case_37, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_44_44);
        Cmp1_38 = (MR_String) "<";
      }
      else
      {
        check_hlds__unify_proc__generate_compare_du_quad_compare_asymmetric_10_p_0(HeadVar__1_1, HeadVar__3_3, RightCtorRepn_29, HeadVar__5_5, HeadVar__6_6, HeadVar__7_7, HeadVar__8_8, &Case_37, STATE_VARIABLE_Info_0_11, &STATE_VARIABLE_Info_44_44);
        Cmp1_38 = HeadVar__5_5;
      }
      {
        Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_46, 0) = ((MR_Box) (Case_37));
        MR_hl_field(1, Var_46, 1) = ((MR_Box) (STATE_VARIABLE_Cases_0_9));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = RightCtorRepns_30;
      next_value_of_HeadVar__5_5 = Cmp1_38;
      next_value_of_STATE_VARIABLE_Cases_0_9 = Var_46;
      next_value_of_STATE_VARIABLE_Info_0_11 = STATE_VARIABLE_Info_44_44;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_Cases_0_9 = next_value_of_STATE_VARIABLE_Cases_0_9;
      STATE_VARIABLE_Info_0_11 = next_value_of_STATE_VARIABLE_Info_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_case_10_p_0(
  MR_Word SpecDefnInfo_11,
  MR_Word UCOptions_12,
  MR_Word LinearOrQuad_13,
  MR_Word CtorRepn_14,
  MR_Word R_15,
  MR_Word X_16,
  MR_Word Y_17,
  MR_Word * Case_18,
  MR_Word STATE_VARIABLE_Info_0_51,
  MR_Word * STATE_VARIABLE_Info_52)
{
  MR_Word MaybeExistConstraints_21 = ((MR_Word) ((MR_hl_field(0, CtorRepn_14, (MR_Integer) 1))));
  MR_Word FunctorName_22 = ((MR_Word) ((MR_hl_field(0, CtorRepn_14, (MR_Integer) 2))));
  MR_Word ConsTag_23 = ((MR_Word) ((MR_hl_field(0, CtorRepn_14, (MR_Integer) 3))));
  MR_Word ArgRepns_24 = ((MR_Word) ((MR_hl_field(0, CtorRepn_14, (MR_Integer) 4))));
  MR_Integer FunctorArity_25 = ((MR_Integer) ((MR_hl_field(0, CtorRepn_14, (MR_Integer) 5))));
  MR_Word TypeCtor_27 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_11, (MR_Integer) 4))));
  MR_Word FunctorConsId_28;
  MR_Word Context_29 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_11, (MR_Integer) 7))));
  MR_Word GoalList_33;
  MR_Word GoalInfo0_49;
  MR_Word GoalInfo_50;

  {
    FunctorConsId_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, FunctorConsId_28, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, FunctorConsId_28, 1) = ((MR_Box) (FunctorName_22));
    MR_hl_field(3, FunctorConsId_28, 2) = ((MR_Box) (FunctorArity_25));
    MR_hl_field(3, FunctorConsId_28, 3) = ((MR_Box) (TypeCtor_27));
  }
  if ((ArgRepns_24 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word RHS_30;
    MR_Word GoalUnifyX_31;
    MR_Word EqualGoal_32;
    MR_Word Var_96;
    MR_Word SymName_98;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Builtin_102;
    MR_Word Var_103;

    {
      RHS_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RHS_30, 0) = ((MR_Box) (FunctorConsId_28));
      MR_hl_field(1, RHS_30, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, RHS_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_16, RHS_30, Context_29, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyX_31);
    Builtin_102 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_103, 0) = ((MR_Box) (Builtin_102));
      MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      Var_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_100, 0) = ((MR_Box) (Var_103));
      MR_hl_field(0, Var_100, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_101 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      SymName_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SymName_98, 0) = ((MR_Box) (Var_101));
      MR_hl_field(1, SymName_98, 1) = ((MR_Box) ((MR_String) "="));
    }
    {
      Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, Var_96, 1) = ((MR_Box) (SymName_98));
      MR_hl_field(3, Var_96, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(3, Var_96, 3) = ((MR_Box) (Var_100));
    }
    hlds__make_goal__make_const_construction_4_p_0(Context_29, R_15, Var_96, &EqualGoal_32);
    switch (LinearOrQuad_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_57;

          {
            Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_57, 0) = ((MR_Box) (EqualGoal_32));
            MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            GoalList_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, GoalList_33, 0) = ((MR_Box) (GoalUnifyX_31));
            MR_hl_field(1, GoalList_33, 1) = ((MR_Box) (Var_57));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word GoalUnifyY_34;
          MR_Word Var_61;
          MR_Word Var_62;

          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Y_17, RHS_30, Context_29, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyY_34);
          {
            Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_62, 0) = ((MR_Box) (EqualGoal_32));
            MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_61, 0) = ((MR_Box) (GoalUnifyY_34));
            MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
          }
          {
            GoalList_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, GoalList_33, 0) = ((MR_Box) (GoalUnifyX_31));
            MR_hl_field(1, GoalList_33, 1) = ((MR_Box) (Var_61));
          }
        }
        break;
    }
    *STATE_VARIABLE_Info_52 = STATE_VARIABLE_Info_0_51;
  }
  else
  {
    MR_Word ExistQTVars_37;
    MR_Word GiveVarsTypes_38;
    MR_Word MaybePackableArgsLocn_39;
    MR_Word ModuleInfo_40;
    MR_Word UCParams_41;
    MR_Word VarTable0_42;
    MR_Word TermType_43;
    MR_Word CompareArgsGoal_44;
    MR_Word VarsX_45;
    MR_Word VarsY_46;
    MR_Word RHSX_47;
    MR_Word RHSY_48;
    MR_Word Var_64;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word GoalUnifyX_78;
    MR_Word GoalUnifyY_79;
    MR_Word Var_94;

    if ((MaybeExistConstraints_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      ExistQTVars_37 = (MR_Word) ((MR_Unsigned) 0U);
      GiveVarsTypes_38 = (MR_Integer) 1;
    }
    else
    {
      MR_Word ExistConstraints_106 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_21), (MR_Integer) 1));

      ExistQTVars_37 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_106, (MR_Integer) 0))));
      GiveVarsTypes_38 = (MR_Integer) 0;
    }
    MaybePackableArgsLocn_39 = check_hlds__unify_proc__compute_maybe_packable_args_locn_1_f_0(ConsTag_23);
    check_hlds__unify_proc__info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_51, &ModuleInfo_40);
    Var_64 = ((((MR_Unsigned) ((MR_hl_field(0, UCOptions_12, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    Var_94 = ((MR_Unsigned) ((MR_hl_field(0, UCOptions_12, (MR_Integer) 0))) & (MR_Integer) 1);
    {
      UCParams_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, UCParams_41, 0) = ((MR_Box) (ModuleInfo_40));
      MR_hl_field(0, UCParams_41, 1) = ((MR_Box) (Context_29));
      MR_hl_field(0, UCParams_41, 2) = ((MR_Box) (ExistQTVars_37));
      MR_hl_field(0, UCParams_41, 3) = ((MR_Box) (MaybePackableArgsLocn_39));
      MR_hl_field(0, UCParams_41, 4) = (MR_Box) (((((MR_Unsigned) (GiveVarsTypes_38) << 2)) | (((((MR_Unsigned) (Var_64) << 1)) | (MR_Unsigned) (Var_94)))));
    }
    check_hlds__unify_proc__info_get_var_table_2_p_0(STATE_VARIABLE_Info_0_51, &VarTable0_42);
    parse_tree__var_table__lookup_var_type_3_p_0(VarTable0_42, X_16, &TermType_43);
    check_hlds__unify_proc__generate_arg_compare_goals_13_p_0(UCParams_41, TermType_43, X_16, Y_17, R_15, (MR_Integer) 1, (MR_Integer) 1, ArgRepns_24, &CompareArgsGoal_44, &VarsX_45, &VarsY_46, STATE_VARIABLE_Info_0_51, STATE_VARIABLE_Info_52);
    {
      RHSX_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RHSX_47, 0) = ((MR_Box) (FunctorConsId_28));
      MR_hl_field(1, RHSX_47, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, RHSX_47, 2) = ((MR_Box) (VarsX_45));
    }
    {
      RHSY_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RHSY_48, 0) = ((MR_Box) (FunctorConsId_28));
      MR_hl_field(1, RHSY_48, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(1, RHSY_48, 2) = ((MR_Box) (VarsY_46));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_16, RHSX_47, Context_29, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyX_78);
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Y_17, RHSY_48, Context_29, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyY_79);
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = ((MR_Box) (CompareArgsGoal_44));
      MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_75, 0) = ((MR_Box) (GoalUnifyY_79));
      MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_76));
    }
    {
      GoalList_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GoalList_33, 0) = ((MR_Box) (GoalUnifyX_78));
      MR_hl_field(1, GoalList_33, 1) = ((MR_Box) (Var_75));
    }
  }
  hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_49);
  hlds__hlds_goal__goal_info_set_context_3_p_0(Context_29, GoalInfo0_49, &GoalInfo_50);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_33, GoalInfo_50, Case_18);
}

static void MR_CALL 
check_hlds__unify_proc__info_get_var_table_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 1))));
}

static void MR_CALL 
check_hlds__unify_proc__info_get_module_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));
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
      switch (((MR_Integer) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 0))))) {
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
            MR_Word RemoteArgsTagInfo_5 = ((MR_Word) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 1))));
            MR_Word Ptag_6;
            MR_Word Var_40;

            switch (MR_tag((MR_Word) RemoteArgsTagInfo_5)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Ptag_6 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
                break;
              case (MR_Integer) 1:
                Ptag_6 = ((MR_Word) ((MR_hl_field(1, RemoteArgsTagInfo_5, (MR_Integer) 0))));
                break;
              case (MR_Integer) 2:
                Ptag_6 = ((MR_Word) ((MR_hl_field(2, RemoteArgsTagInfo_5, (MR_Integer) 0))));
                break;
              case (MR_Integer) 3:
                Ptag_6 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
                break;
            }
            {
              Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_40, 0) = ((MR_Box) (Ptag_6));
            }
            {
              ArgsLocn_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ArgsLocn_4, 0) = ((MR_Box) (Var_40));
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
    MR_Word HeadCtorArgRepn_28 = ((MR_Word) ((MR_hl_field(1, ConjoinKind_16, (MR_Integer) 0))));
    MR_Word TailCtorArgRepns_29 = ((MR_Word) ((MR_hl_field(1, ConjoinKind_16, (MR_Integer) 1))));
    MR_Word SubResultVar_30 = ((MR_Word) ((MR_hl_field(1, ConjoinKind_16, (MR_Integer) 2))));
    MR_Word Context_31 = ((MR_Word) ((MR_hl_field(0, UCParams_15, (MR_Integer) 1))));
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
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Builtin_65;
    MR_Word Var_66;

    hlds__hlds_goal__goal_info_init_2_p_0(Context_31, &GoalInfo_32);
    Builtin_65 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_66, 0) = ((MR_Box) (Builtin_65));
      MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_63, 0) = ((MR_Box) (Var_66));
      MR_hl_field(0, Var_63, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_64 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      SymName_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SymName_61, 0) = ((MR_Box) (Var_64));
      MR_hl_field(1, SymName_61, 1) = ((MR_Box) ((MR_String) "="));
    }
    {
      Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, Var_43, 1) = ((MR_Box) (SymName_61));
      MR_hl_field(3, Var_43, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(3, Var_43, 3) = ((MR_Box) (Var_63));
    }
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

  succeeded = check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
  MR_Word Var_170 = ((((MR_Unsigned) ((MR_hl_field(0, UCParams_1, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_173 = ((MR_Word) ((MR_hl_field(0, UCParams_1, (MR_Integer) 1))));
  MR_Word Var_174 = ((MR_Word) ((MR_hl_field(0, UCParams_1, (MR_Integer) 0))));

  if ((HeadVar__8_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__10_10 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__11_11 = (MR_Word) ((MR_Unsigned) 0U);
    check_hlds__unify_proc__generate_return_equal_3_p_0(ResultVar_5, Var_173, Goal_9);
    *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_0_12;
  }
  else
  {
    MR_Word CtorArgRepn_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, (MR_Integer) 0))));
    MR_Word CtorArgRepns_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__8_8, (MR_Integer) 1))));
    MR_Word Type_41 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_33, (MR_Integer) 1))));
    MR_Word IsDummy_42;

    IsDummy_42 = check_hlds__type_util__is_type_a_dummy_2_f_0(Var_174, Type_41);
    switch (IsDummy_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word HeadVarX_43;
          MR_Word HeadVarY_44;
          MR_Word TailVarsX_45;
          MR_Word TailVarsY_46;
          MR_Word STATE_VARIABLE_Info_70_70;
          MR_Integer Var_71;

          check_hlds__unify_proc__make_fresh_var_pair_9_p_0(Var_170, (MR_String) "_ArgX", (MR_String) "_ArgY", ArgNum_7, Type_41, &HeadVarX_43, &HeadVarY_44, STATE_VARIABLE_Info_0_12, &STATE_VARIABLE_Info_70_70);
          Var_71 = (MR_Integer) ((MR_Unsigned) ArgNum_7 + (MR_Unsigned) 1);
          check_hlds__unify_proc__generate_arg_compare_goals_13_p_0(UCParams_1, TermType_2, TermVarX_3, TermVarY_4, ResultVar_5, STATE_VARIABLE_MaybeAllArgs_0_6, Var_71, CtorArgRepns_34, Goal_9, &TailVarsX_45, &TailVarsY_46, STATE_VARIABLE_Info_70_70, STATE_VARIABLE_Info_13);
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
          MR_Word Context_47 = ((MR_Word) ((MR_hl_field(0, UCParams_1, (MR_Integer) 1))));
          MR_Word CompareHow_48;
          MR_Word STATE_VARIABLE_MaybeAllArgs_74_74;

          check_hlds__unify_proc__may_we_start_packing_at_this_arg_compare_5_p_0(UCParams_1, CtorArgRepn_33, &CompareHow_48, STATE_VARIABLE_MaybeAllArgs_0_6, &STATE_VARIABLE_MaybeAllArgs_74_74);
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
                    MR_Word STATE_VARIABLE_Info_83_83;
                    MR_Word STATE_VARIABLE_Info_84_84;
                    MR_Word Var_85;
                    MR_Word Var_86;
                    MR_Word Var_87;
                    MR_Integer Var_90;
                    MR_Word HeadVarX_119;
                    MR_Word HeadVarY_120;
                    MR_Word TailVarsX_121;
                    MR_Word TailVarsY_122;

                    check_hlds__unify_proc__make_fresh_var_pair_9_p_0(Var_170, (MR_String) "ArgX", (MR_String) "ArgY", ArgNum_7, Type_41, &HeadVarX_119, &HeadVarY_120, STATE_VARIABLE_Info_0_12, &STATE_VARIABLE_Info_83_83);
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
                    check_hlds__unify_proc__prepare_for_conjoining_arg_comparisons_7_p_0(CtorArgRepns_34, ArgNum_7, ResultVar_5, &CurCompareResultVar_51, &ConjoinKind_52, STATE_VARIABLE_Info_83_83, &STATE_VARIABLE_Info_84_84);
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
                    check_hlds__unify_proc__build_simple_call_6_p_0(Var_174, ComparePredModule_50, ComparePred_49, Var_85, Context_47, &SubCompareGoal_53);
                    Var_90 = (MR_Integer) ((MR_Unsigned) ArgNum_7 + (MR_Unsigned) 1);
                    check_hlds__unify_proc__conjoin_arg_comparisons_14_p_0(UCParams_1, ConjoinKind_52, TermType_2, TermVarX_3, TermVarY_4, ResultVar_5, (MR_Integer) 0, Var_90, SubCompareGoal_53, Goal_9, &TailVarsX_121, &TailVarsY_122, STATE_VARIABLE_Info_84_84, STATE_VARIABLE_Info_13);
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
                    MR_Word STATE_VARIABLE_Info_77_77;
                    MR_Integer Var_78;
                    MR_Word HeadVarX_115;
                    MR_Word HeadVarY_116;
                    MR_Word TailVarsX_117;
                    MR_Word TailVarsY_118;

                    check_hlds__unify_proc__make_fresh_var_pair_9_p_0(Var_170, (MR_String) "_ArgX", (MR_String) "_ArgY", ArgNum_7, Type_41, &HeadVarX_115, &HeadVarY_116, STATE_VARIABLE_Info_0_12, &STATE_VARIABLE_Info_77_77);
                    Var_78 = (MR_Integer) ((MR_Unsigned) ArgNum_7 + (MR_Unsigned) 1);
                    check_hlds__unify_proc__generate_arg_compare_goals_13_p_0(UCParams_1, TermType_2, TermVarX_3, TermVarY_4, ResultVar_5, STATE_VARIABLE_MaybeAllArgs_74_74, Var_78, CtorArgRepns_34, Goal_9, &TailVarsX_117, &TailVarsY_118, STATE_VARIABLE_Info_77_77, STATE_VARIABLE_Info_13);
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
                MR_Word ArgsLocn_54 = ((MR_Word) ((MR_hl_field(1, CompareHow_48, (MR_Integer) 0))));
                MR_Word CellOffset_55 = ((MR_Word) ((MR_hl_field(1, CompareHow_48, (MR_Integer) 1))));
                MR_Word Shift_56 = ((MR_Word) ((MR_hl_field(1, CompareHow_48, (MR_Integer) 2))));
                MR_String SignedIntSize_57 = ((MR_String) ((MR_hl_field(1, CompareHow_48, (MR_Integer) 3))));
                MR_Word STATE_VARIABLE_Info_95_95;
                MR_Word STATE_VARIABLE_Info_96_96;
                MR_Word STATE_VARIABLE_Info_97_97;
                MR_Integer Var_99;
                MR_Word HeadVarX_123;
                MR_Word HeadVarY_124;
                MR_Word TailVarsX_125;
                MR_Word TailVarsY_126;
                MR_Word CurCompareResultVar_127;
                MR_Word ConjoinKind_128;
                MR_Word SubCompareGoal_129;

                check_hlds__unify_proc__make_fresh_var_pair_9_p_0(Var_170, (MR_String) "_ArgX", (MR_String) "_ArgY", ArgNum_7, Type_41, &HeadVarX_123, &HeadVarY_124, STATE_VARIABLE_Info_0_12, &STATE_VARIABLE_Info_95_95);
                check_hlds__unify_proc__prepare_for_conjoining_arg_comparisons_7_p_0(CtorArgRepns_34, ArgNum_7, ResultVar_5, &CurCompareResultVar_127, &ConjoinKind_128, STATE_VARIABLE_Info_95_95, &STATE_VARIABLE_Info_96_96);
                check_hlds__unify_proc__select_and_build_signed_comparison_foreign_proc_14_p_0(Var_174, ArgsLocn_54, TermType_2, TermVarX_3, TermVarY_4, CurCompareResultVar_127, ArgNum_7, CellOffset_55, Shift_56, SignedIntSize_57, Context_47, &SubCompareGoal_129, STATE_VARIABLE_Info_96_96, &STATE_VARIABLE_Info_97_97);
                Var_99 = (MR_Integer) ((MR_Unsigned) ArgNum_7 + (MR_Unsigned) 1);
                check_hlds__unify_proc__conjoin_arg_comparisons_14_p_0(UCParams_1, ConjoinKind_128, TermType_2, TermVarX_3, TermVarY_4, ResultVar_5, (MR_Integer) 0, Var_99, SubCompareGoal_129, Goal_9, &TailVarsX_125, &TailVarsY_126, STATE_VARIABLE_Info_97_97, STATE_VARIABLE_Info_13);
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
                MR_Word Shift0_58 = ((MR_Word) ((MR_hl_field(2, CompareHow_48, (MR_Integer) 2))));
                MR_Word NumBits0_59 = ((MR_Word) ((MR_hl_field(2, CompareHow_48, (MR_Integer) 3))));
                MR_Integer LeftOverArgNum_60;
                MR_Word NumBits_61;
                MR_Word LeftOverCtorArgRepns_62;
                MR_Word TailBulkVarsX_63;
                MR_Word TailBulkVarsY_64;
                MR_Word Var_102;
                MR_Word STATE_VARIABLE_Info_107_107;
                MR_Word STATE_VARIABLE_MaybeAllArgs_108_108;
                MR_Word STATE_VARIABLE_Info_109_109;
                MR_Word STATE_VARIABLE_Info_110_110;
                MR_Word STATE_VARIABLE_Info_111_111;
                MR_Word Var_113;
                MR_Word Var_114;
                MR_Word HeadVarX_130;
                MR_Word HeadVarY_131;
                MR_Word TailVarsX_132;
                MR_Word TailVarsY_133;
                MR_Word CurCompareResultVar_134;
                MR_Word ConjoinKind_135;
                MR_Word SubCompareGoal_136;
                MR_Word ArgsLocn_137 = ((MR_Word) ((MR_hl_field(2, CompareHow_48, (MR_Integer) 0))));
                MR_Word CellOffset_138 = ((MR_Word) ((MR_hl_field(2, CompareHow_48, (MR_Integer) 1))));
                MR_Word Shift_139;

                {
                  Var_102 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_102, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[3]));
                  MR_hl_field(0, Var_102, 1) = ((MR_Box) (check_hlds__unify_proc__generate_arg_compare_goals_13_p_0_1));
                  MR_hl_field(0, Var_102, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_102, 3) = ((MR_Box) (UCParams_1));
                  MR_hl_field(0, Var_102, 4) = ((MR_Box) (Type_41));
                }
                mercury__require__expect_not_3_p_0(Var_102, (MR_String) "predicate \140check_hlds.unify_proc.generate_arg_compare_goals\'/13", (MR_String) "sub-word-size argument of existential type");
                check_hlds__unify_proc__make_fresh_var_pair_9_p_0(Var_170, (MR_String) "_ArgX", (MR_String) "_ArgY", ArgNum_7, Type_41, &HeadVarX_130, &HeadVarY_131, STATE_VARIABLE_Info_0_12, &STATE_VARIABLE_Info_107_107);
                check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0(UCParams_1, CellOffset_138, ArgNum_7, &LeftOverArgNum_60, Shift0_58, &Shift_139, NumBits0_59, &NumBits_61, CtorArgRepns_34, &LeftOverCtorArgRepns_62, STATE_VARIABLE_MaybeAllArgs_74_74, &STATE_VARIABLE_MaybeAllArgs_108_108, &TailBulkVarsX_63, &TailBulkVarsY_64, STATE_VARIABLE_Info_107_107, &STATE_VARIABLE_Info_109_109);
                check_hlds__unify_proc__prepare_for_conjoining_arg_comparisons_7_p_0(LeftOverCtorArgRepns_62, ArgNum_7, ResultVar_5, &CurCompareResultVar_134, &ConjoinKind_135, STATE_VARIABLE_Info_109_109, &STATE_VARIABLE_Info_110_110);
                check_hlds__unify_proc__select_and_build_bulk_comparison_foreign_proc_15_p_0(Var_174, ArgsLocn_137, TermType_2, TermVarX_3, TermVarY_4, CurCompareResultVar_134, STATE_VARIABLE_MaybeAllArgs_108_108, ArgNum_7, CellOffset_138, Shift_139, NumBits_61, Context_47, &SubCompareGoal_136, STATE_VARIABLE_Info_110_110, &STATE_VARIABLE_Info_111_111);
                check_hlds__unify_proc__conjoin_arg_comparisons_14_p_0(UCParams_1, ConjoinKind_135, TermType_2, TermVarX_3, TermVarY_4, ResultVar_5, STATE_VARIABLE_MaybeAllArgs_108_108, LeftOverArgNum_60, SubCompareGoal_136, Goal_9, &TailVarsX_132, &TailVarsY_133, STATE_VARIABLE_Info_111_111, STATE_VARIABLE_Info_13);
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
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Builtin_13;
  MR_Word Var_14;

  Builtin_13 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (Builtin_13));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_String) "comparison_result"));
  }
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (Var_14));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  Var_12 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    SymName_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_9, 0) = ((MR_Box) (Var_12));
    MR_hl_field(1, SymName_9, 1) = ((MR_Box) ((MR_String) "="));
  }
  {
    Var_7 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_7, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_7, 1) = ((MR_Box) (SymName_9));
    MR_hl_field(3, Var_7, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, Var_7, 3) = ((MR_Box) (Var_11));
  }
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
  MR_Word AllowPackedUnifyCompare_10 = ((MR_Unsigned) ((MR_hl_field(0, UCParams_6, (MR_Integer) 4))) & (MR_Integer) 1);
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, UCParams_6, (MR_Integer) 3))));

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
        MR_Word ArgsLocn_12 = ((MR_Word) ((MR_hl_field(1, Var_36, (MR_Integer) 0))));
        MR_Word ArgPosWidth_13 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_7, (MR_Integer) 2))));

        switch (MR_tag((MR_Word) ArgPosWidth_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *CompareHow_8 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_MaybeAllArgs_32 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *CompareHow_8 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_MaybeAllArgs_32 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_13, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word CellOffset_20 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_13, (MR_Integer) 2))));
                  MR_Word Shift_21 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_13, (MR_Integer) 3))));
                  MR_Word NumBits_22 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_13, (MR_Integer) 4))));
                  MR_Word Fill_24 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_13, (MR_Integer) 6))) & (MR_Integer) 7);

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
                        MR_String SignedIntSize_28 = ((MR_String) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &check_hlds__unify_proc_scalar_common_2[0])), (MR_Integer) 0))));

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
                        MR_String SignedIntSize_64 = ((MR_String) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &check_hlds__unify_proc_scalar_common_2[1])), (MR_Integer) 0))));

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *CompareHow_8 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (ArgsLocn_12));
                          MR_hl_field(1, base, 1) = ((MR_Box) (CellOffset_20));
                          MR_hl_field(1, base, 2) = ((MR_Box) (Shift_21));
                          MR_hl_field(1, base, 3) = ((MR_Box) (SignedIntSize_64));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String SignedIntSize_66 = ((MR_String) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &check_hlds__unify_proc_scalar_common_2[2])), (MR_Integer) 0))));

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *CompareHow_8 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (ArgsLocn_12));
                          MR_hl_field(1, base, 1) = ((MR_Box) (CellOffset_20));
                          MR_hl_field(1, base, 2) = ((MR_Box) (Shift_21));
                          MR_hl_field(1, base, 3) = ((MR_Box) (SignedIntSize_66));
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word CellOffset_50 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_13, (MR_Integer) 2))));
                  MR_Word Shift_51 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_13, (MR_Integer) 3))));
                  MR_Word NumBits_52 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_13, (MR_Integer) 4))));
                  MR_Word Fill_53 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_13, (MR_Integer) 6))) & (MR_Integer) 7);

                  *STATE_VARIABLE_MaybeAllArgs_32 = STATE_VARIABLE_MaybeAllArgs_0_31;
                  switch (Fill_53) {
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
                        MR_hl_field(2, base, 1) = ((MR_Box) (CellOffset_50));
                        MR_hl_field(2, base, 2) = ((MR_Box) (Shift_51));
                        MR_hl_field(2, base, 3) = ((MR_Box) (NumBits_52));
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_String SignedIntSize_48 = ((MR_String) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &check_hlds__unify_proc_scalar_common_2[0])), (MR_Integer) 0))));

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *CompareHow_8 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (ArgsLocn_12));
                          MR_hl_field(1, base, 1) = ((MR_Box) (CellOffset_50));
                          MR_hl_field(1, base, 2) = ((MR_Box) (Shift_51));
                          MR_hl_field(1, base, 3) = ((MR_Box) (SignedIntSize_48));
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_String SignedIntSize_68 = ((MR_String) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &check_hlds__unify_proc_scalar_common_2[1])), (MR_Integer) 0))));

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *CompareHow_8 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (ArgsLocn_12));
                          MR_hl_field(1, base, 1) = ((MR_Box) (CellOffset_50));
                          MR_hl_field(1, base, 2) = ((MR_Box) (Shift_51));
                          MR_hl_field(1, base, 3) = ((MR_Box) (SignedIntSize_68));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String SignedIntSize_70 = ((MR_String) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &check_hlds__unify_proc_scalar_common_2[2])), (MR_Integer) 0))));

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *CompareHow_8 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (ArgsLocn_12));
                          MR_hl_field(1, base, 1) = ((MR_Box) (CellOffset_50));
                          MR_hl_field(1, base, 2) = ((MR_Box) (Shift_51));
                          MR_hl_field(1, base, 3) = ((MR_Box) (SignedIntSize_70));
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

  succeeded = check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2263__2_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2255__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2263__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
    MR_Word CtorArgRepn_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__9_9, (MR_Integer) 0))));
    MR_Word CtorArgRepns_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__9_9, (MR_Integer) 1))));
    MR_Word ArgPosWidth_46 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_39, (MR_Integer) 2))));
    MR_Word Var_115 = ((MR_Word) ((MR_hl_field(0, CtorArgRepn_39, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) ArgPosWidth_46)) {
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
        switch (((MR_Integer) ((MR_hl_field(3, ArgPosWidth_46, (MR_Integer) 0))))) {
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
              MR_Word Fill_52 = ((MR_Unsigned) ((MR_hl_field(3, ArgPosWidth_46, (MR_Integer) 6))) & (MR_Integer) 7);

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
                    MR_Word ArgCellOffset_140;
                    MR_Word GiveVarsTypes_141;
                    MR_Word HeadVarX_142;
                    MR_Word HeadVarY_143;
                    MR_Word TailVarsX_144;
                    MR_Word TailVarsY_145;
                    MR_Word Var_146;
                    MR_Word STATE_VARIABLE_Shift_104_149;
                    MR_Word STATE_VARIABLE_NumBits_105_150;
                    MR_Word Var_151;
                    MR_Word STATE_VARIABLE_Info_111_156;
                    MR_Integer STATE_VARIABLE_ArgNum_112_157;

                    {
                      Var_146 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_146, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[3]));
                      MR_hl_field(0, Var_146, 1) = ((MR_Box) (check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_3));
                      MR_hl_field(0, Var_146, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(0, Var_146, 3) = ((MR_Box) (HeadVar__1_1));
                      MR_hl_field(0, Var_146, 4) = ((MR_Box) (Var_115));
                    }
                    mercury__require__expect_not_3_p_0(Var_146, (MR_String) "predicate \140check_hlds.unify_proc.get_bulk_comparable_packed_args\'/16", (MR_String) "sub-word-size argument of existential type");
                    ArgCellOffset_140 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_46, (MR_Integer) 2))));
                    STATE_VARIABLE_Shift_104_149 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_46, (MR_Integer) 3))));
                    ArgNumBits_60 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_46, (MR_Integer) 4))));
                    ShiftInt0_63 = (MR_Integer) (STATE_VARIABLE_Shift_0_5);
                    NumBitsInt0_64 = (MR_Integer) (STATE_VARIABLE_NumBits_0_7);
                    ShiftInt_67 = (MR_Integer) (STATE_VARIABLE_Shift_104_149);
                    ArgNumBitsInt_66 = (MR_Integer) (ArgNumBits_60);
                    NumBitsInt_68 = (MR_Integer) ((MR_Unsigned) NumBitsInt0_64 + (MR_Unsigned) ArgNumBitsInt_66);
                    Var_103 = (MR_Integer) ((MR_Unsigned) ShiftInt_67 + (MR_Unsigned) ArgNumBitsInt_66);
                    {
                      Var_100 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_100, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[5]));
                      MR_hl_field(0, Var_100, 1) = ((MR_Box) (check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_4));
                      MR_hl_field(0, Var_100, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(0, Var_100, 3) = ((MR_Box) (ShiftInt0_63));
                      MR_hl_field(0, Var_100, 4) = ((MR_Box) (Var_103));
                    }
                    mercury__require__expect_3_p_0(Var_100, (MR_String) "predicate \140check_hlds.unify_proc.get_bulk_comparable_packed_args\'/16", (MR_String) "packed arg does not immediately follow previous");
                    STATE_VARIABLE_NumBits_105_150 = (MR_Word) (NumBitsInt_68);
                    {
                      Var_151 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_151, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[4]));
                      MR_hl_field(0, Var_151, 1) = ((MR_Box) (check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_5));
                      MR_hl_field(0, Var_151, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(0, Var_151, 3) = ((MR_Box) (HeadVar__2_2));
                      MR_hl_field(0, Var_151, 4) = ((MR_Box) (ArgCellOffset_140));
                    }
                    mercury__require__expect_3_p_0(Var_151, (MR_String) "predicate \140check_hlds.unify_proc.get_bulk_comparable_packed_args\'/16", (MR_String) "apw_{partial,none}_shifted offset != CellOffset");
                    GiveVarsTypes_141 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
                    check_hlds__unify_proc__make_fresh_var_pair_9_p_0(GiveVarsTypes_141, (MR_String) "_ArgX", (MR_String) "_ArgY", STATE_VARIABLE_ArgNum_0_3, Var_115, &HeadVarX_142, &HeadVarY_143, STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_111_156);
                    STATE_VARIABLE_ArgNum_112_157 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ArgNum_0_3 + (MR_Unsigned) 1);
                    check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0(HeadVar__1_1, HeadVar__2_2, STATE_VARIABLE_ArgNum_112_157, STATE_VARIABLE_ArgNum_4, STATE_VARIABLE_Shift_104_149, STATE_VARIABLE_Shift_6, STATE_VARIABLE_NumBits_105_150, STATE_VARIABLE_NumBits_8, CtorArgRepns_40, HeadVar__10_10, STATE_VARIABLE_MaybeAllArgs_0_11, STATE_VARIABLE_MaybeAllArgs_12, &TailVarsX_144, &TailVarsY_145, STATE_VARIABLE_Info_111_156, STATE_VARIABLE_Info_16);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__13_13 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (HeadVarX_142));
                      MR_hl_field(1, base, 1) = ((MR_Box) (TailVarsX_144));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__14_14 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (HeadVarY_143));
                      MR_hl_field(1, base, 1) = ((MR_Box) (TailVarsY_145));
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
            {
              MR_Word ArgCellOffset_58;
              MR_Word GiveVarsTypes_70;
              MR_Word HeadVarX_71;
              MR_Word HeadVarY_72;
              MR_Word TailVarsX_73;
              MR_Word TailVarsY_74;
              MR_Word Var_97;
              MR_Word Var_106;
              MR_Word STATE_VARIABLE_Info_111_111;
              MR_Integer STATE_VARIABLE_ArgNum_112_112;

              {
                Var_97 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_97, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[3]));
                MR_hl_field(0, Var_97, 1) = ((MR_Box) (check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_1));
                MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_97, 3) = ((MR_Box) (HeadVar__1_1));
                MR_hl_field(0, Var_97, 4) = ((MR_Box) (Var_115));
              }
              mercury__require__expect_not_3_p_0(Var_97, (MR_String) "predicate \140check_hlds.unify_proc.get_bulk_comparable_packed_args\'/16", (MR_String) "sub-word-size argument of existential type");
              ArgCellOffset_58 = ((MR_Word) ((MR_hl_field(3, ArgPosWidth_46, (MR_Integer) 2))));
              {
                Var_106 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_106, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[4]));
                MR_hl_field(0, Var_106, 1) = ((MR_Box) (check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0_2));
                MR_hl_field(0, Var_106, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_106, 3) = ((MR_Box) (HeadVar__2_2));
                MR_hl_field(0, Var_106, 4) = ((MR_Box) (ArgCellOffset_58));
              }
              mercury__require__expect_3_p_0(Var_106, (MR_String) "predicate \140check_hlds.unify_proc.get_bulk_comparable_packed_args\'/16", (MR_String) "apw_{partial,none}_shifted offset != CellOffset");
              GiveVarsTypes_70 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
              check_hlds__unify_proc__make_fresh_var_pair_9_p_0(GiveVarsTypes_70, (MR_String) "_ArgX", (MR_String) "_ArgY", STATE_VARIABLE_ArgNum_0_3, Var_115, &HeadVarX_71, &HeadVarY_72, STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_111_111);
              STATE_VARIABLE_ArgNum_112_112 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ArgNum_0_3 + (MR_Unsigned) 1);
              check_hlds__unify_proc__get_bulk_comparable_packed_args_16_p_0(HeadVar__1_1, HeadVar__2_2, STATE_VARIABLE_ArgNum_112_112, STATE_VARIABLE_ArgNum_4, STATE_VARIABLE_Shift_0_5, STATE_VARIABLE_Shift_6, STATE_VARIABLE_NumBits_0_7, STATE_VARIABLE_NumBits_8, CtorArgRepns_40, HeadVar__10_10, STATE_VARIABLE_MaybeAllArgs_0_11, STATE_VARIABLE_MaybeAllArgs_12, &TailVarsX_73, &TailVarsY_74, STATE_VARIABLE_Info_111_111, STATE_VARIABLE_Info_16);
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
        MR_Word STATE_VARIABLE_Info_23_23;

        check_hlds__unify_proc__info_new_var_no_type_4_p_0(NameX_19, VarX_15, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_23_23);
        check_hlds__unify_proc__info_new_var_no_type_4_p_0(NameY_20, VarY_16, STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Info_22);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_Info_23_24;

        check_hlds__unify_proc__info_new_var_5_p_0(NameX_19, Type_14, VarX_15, STATE_VARIABLE_Info_0_21, &STATE_VARIABLE_Info_23_24);
        check_hlds__unify_proc__info_new_var_5_p_0(NameY_20, Type_14, VarY_16, STATE_VARIABLE_Info_23_24, STATE_VARIABLE_Info_22);
      }
      break;
  }
}

static void MR_CALL 
check_hlds__unify_proc__info_new_var_no_type_4_p_0(
  MR_String Name_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_Word Type_8;
  MR_Word Entry_10;
  MR_Word VarTable0_11;
  MR_Word VarTable_12;
  MR_Word Var_18;
  MR_Word Var_20;
  MR_Word Var_21;

  Type_8 = parse_tree__builtin_lib_types__void_type_0_f_0();
  {
    Entry_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_10, 0) = ((MR_Box) (Name_5));
    MR_hl_field(0, Entry_10, 1) = ((MR_Box) (Type_8));
    MR_hl_field(0, Entry_10, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  VarTable0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 1))));
  parse_tree__var_table__add_var_entry_4_p_0(Entry_10, Var_6, VarTable0_11, &VarTable_12);
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 0))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 2))));
  Var_21 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_13, (MR_Integer) 3))) & (MR_Integer) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTable_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_21));
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
  MR_Word STATE_VARIABLE_Info_85_85;
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
        STATE_VARIABLE_Info_85_85 = STATE_VARIABLE_Info_0_64;
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
        MR_Word STATE_VARIABLE_Info_83_83;
        MR_Word Var_86;
        MR_Word Var_88;

        ComparePredNameSuffix_42 = (MR_String) "bitfields";
        ShiftInt_47 = (MR_Integer) (Shift_25);
        check_hlds__unify_proc__make_fresh_int_var_and_arg_8_p_0(Context_27, (MR_String) "ShiftVar", ArgNum_23, ShiftInt_47, &ShiftForeignArg_48, &MakeShiftGoal_49, STATE_VARIABLE_Info_0_64, &STATE_VARIABLE_Info_83_83);
        NumBitsInt_50 = (MR_Integer) (NumBits_26);
        check_hlds__unify_proc__make_fresh_int_var_and_arg_8_p_0(Context_27, (MR_String) "NumBitsVar", ArgNum_23, NumBitsInt_50, &NumBitsForeignArg_51, &MakeNumBitsGoal_52, STATE_VARIABLE_Info_83_83, &STATE_VARIABLE_Info_85_85);
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
    *STATE_VARIABLE_Info_65 = STATE_VARIABLE_Info_85_85;
  }
  else
  {
    MR_Word Ptag_58 = ((MR_Word) ((MR_hl_field(1, ArgsLocn_17, (MR_Integer) 0))));

    ComparePredName_53 = mercury__string__f_43_43_2_f_0((MR_String) "compare_remote_uint_", ComparePredNameSuffix_42);
    check_hlds__unify_proc__make_ptag_and_cell_offset_args_8_p_0(ArgNum_23, Ptag_58, CellOffset_24, Context_27, &MaybeWordsArgs_54, &MaybeWordsGoals_55, STATE_VARIABLE_Info_85_85, STATE_VARIABLE_Info_65);
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
  MR_Word STATE_VARIABLE_Info_85_85;
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
  check_hlds__unify_proc__make_fresh_int_var_and_arg_8_p_0(Context_25, (MR_String) "ShiftVar", ArgNum_21, ShiftInt_38, &ShiftForeignArg_39, &MakeShiftGoal_40, STATE_VARIABLE_Info_0_52, &STATE_VARIABLE_Info_85_85);
  if ((ArgsLocn_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Var_142;

    Var_142 = mercury__string__f_43_43_2_f_0(SizeStr_24, (MR_String) "_bitfields");
    ComparePredName_41 = mercury__string__f_43_43_2_f_0((MR_String) "compare_local_int", Var_142);
    MaybeWordsArgs_42 = (MR_Word) ((MR_Unsigned) 0U);
    MaybeWordsGoals_43 = (MR_Word) ((MR_Unsigned) 0U);
    WordsDecl_44 = (MR_String) "\n        MR_Unsigned word_x;\n        MR_Unsigned word_y;\n    ";
    WordsCode_45 = (MR_String) "\n        word_x = (MR_Unsigned) TermVarX;\n        word_y = (MR_Unsigned) TermVarY;\n    ";
    *STATE_VARIABLE_Info_53 = STATE_VARIABLE_Info_85_85;
  }
  else
  {
    MR_Word Ptag_46 = ((MR_Word) ((MR_hl_field(1, ArgsLocn_16, (MR_Integer) 0))));
    MR_String Var_139;

    Var_139 = mercury__string__f_43_43_2_f_0(SizeStr_24, (MR_String) "_bitfields");
    ComparePredName_41 = mercury__string__f_43_43_2_f_0((MR_String) "compare_remote_int", Var_139);
    check_hlds__unify_proc__make_ptag_and_cell_offset_args_8_p_0(ArgNum_21, Ptag_46, CellOffset_22, Context_25, &MaybeWordsArgs_42, &MaybeWordsGoals_43, STATE_VARIABLE_Info_85_85, STATE_VARIABLE_Info_53);
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
  check_hlds__unify_proc__info_new_var_5_p_0(Name_27, Type_16, &Var_17, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
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
  MR_Word STATE_VARIABLE_Info_26_26;
  MR_Word Var_29;
  MR_Word Var_31;
  MR_Word Type_33;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_String NumStr_40;
  MR_String Name_41;
  MR_Word Type_42;
  MR_Word Var_43;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_String NumStr_49;
  MR_String Name_50;

  PtagInt_17 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_16);
  Type_33 = parse_tree__builtin_lib_types__int_type_0_f_0();
  NumStr_40 = mercury__string__int_to_string_1_f_0(ArgNum_9);
  Name_41 = mercury__string__f_43_43_2_f_0((MR_String) "Ptag", NumStr_40);
  check_hlds__unify_proc__info_new_var_5_p_0(Name_41, Type_33, &Var_34, STATE_VARIABLE_Info_0_23, &STATE_VARIABLE_Info_26_26);
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
  Type_42 = parse_tree__builtin_lib_types__int_type_0_f_0();
  NumStr_49 = mercury__string__int_to_string_1_f_0(ArgNum_9);
  Name_50 = mercury__string__f_43_43_2_f_0((MR_String) "CellOffsetVar", NumStr_49);
  check_hlds__unify_proc__info_new_var_5_p_0(Name_50, Type_42, &Var_43, STATE_VARIABLE_Info_26_26, STATE_VARIABLE_Info_24);
  Var_47 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_46, 0) = ((MR_Box) ((MR_String) "CellOffsetVar"));
    MR_hl_field(0, Var_46, 1) = ((MR_Box) (Var_47));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
  }
  {
    CellOffsetForeignArg_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CellOffsetForeignArg_21, 0) = ((MR_Box) (Var_43));
    MR_hl_field(0, CellOffsetForeignArg_21, 1) = ((MR_Box) (Var_45));
    MR_hl_field(0, CellOffsetForeignArg_21, 2) = ((MR_Box) (Type_42));
    MR_hl_field(0, CellOffsetForeignArg_21, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  hlds__make_goal__make_int_const_construction_4_p_0(Context_12, Var_43, CellOffsetInt_20, &MakeCellOffsetGoal_22);
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
  MR_Word STATE_VARIABLE_Attrs_4_4;
  MR_Word STATE_VARIABLE_Attrs_7_7;
  MR_Word STATE_VARIABLE_Attrs_9_9;
  MR_Word STATE_VARIABLE_Attrs_11_11;
  MR_Word STATE_VARIABLE_Attrs_13_13;
  MR_Word STATE_VARIABLE_Attrs_15_15;
  MR_Word STATE_VARIABLE_Attrs_17_17;
  MR_Word STATE_VARIABLE_Attrs_19_19;
  MR_Word STATE_VARIABLE_Attrs_21_21;
  MR_Word STATE_VARIABLE_Attrs_23_23;

  STATE_VARIABLE_Attrs_4_4 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
  parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_4_4, &STATE_VARIABLE_Attrs_7_7);
  parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_7_7, &STATE_VARIABLE_Attrs_9_9);
  parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_9_9, &STATE_VARIABLE_Attrs_11_11);
  parse_tree__prog_data_foreign__set_terminates_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_11_11, &STATE_VARIABLE_Attrs_13_13);
  parse_tree__prog_data_foreign__set_may_throw_exception_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_13_13, &STATE_VARIABLE_Attrs_15_15);
  parse_tree__prog_data_foreign__set_may_modify_trail_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_15_15, &STATE_VARIABLE_Attrs_17_17);
  parse_tree__prog_data_foreign__set_may_call_mm_tabled_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_17_17, &STATE_VARIABLE_Attrs_19_19);
  parse_tree__prog_data_foreign__set_affects_liveness_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_19_19, &STATE_VARIABLE_Attrs_21_21);
  parse_tree__prog_data_foreign__set_allocates_memory_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_21_21, &STATE_VARIABLE_Attrs_23_23);
  parse_tree__prog_data_foreign__set_registers_roots_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_23_23, &STATE_VARIABLE_Attrs_3);
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
    MR_Word HeadCtorArgRepn_14 = ((MR_Word) ((MR_hl_field(1, CtorArgRepns_8, (MR_Integer) 0))));
    MR_Word TailCtorArgRepns_15 = ((MR_Word) ((MR_hl_field(1, CtorArgRepns_8, (MR_Integer) 1))));
    MR_Word Var_20;
    MR_String NumStr_21;
    MR_String Name_22;

    Var_20 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
    NumStr_21 = mercury__string__int_to_string_1_f_0(ArgNum_9);
    Name_22 = mercury__string__f_43_43_2_f_0((MR_String) "SubResult", NumStr_21);
    check_hlds__unify_proc__info_new_var_5_p_0(Name_22, Var_20, CurCompareResultVar_11, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
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

  parse_tree__prog_type__type_contains_var_2_p_0((env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__Type_4, &(env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__Var_15, check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_4, env_ptr);
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
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, UCParams_3, (MR_Integer) 0))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, UCParams_3, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Unsigned packed_word_0;

    (env).check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__ExistQTVars_5 = ((MR_Word) ((MR_hl_field(0, UCParams_3, (MR_Integer) 2))));
    Var_10 = ((MR_Word) ((MR_hl_field(0, UCParams_3, (MR_Integer) 3))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, UCParams_3, (MR_Integer) 4)));
    Var_11 = ((((MR_Unsigned) ((MR_hl_field(0, UCParams_3, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
    Var_12 = ((((MR_Unsigned) ((MR_hl_field(0, UCParams_3, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
    Var_13 = ((MR_Unsigned) ((MR_hl_field(0, UCParams_3, (MR_Integer) 4))) & (MR_Integer) 1);
    check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_5(&env);
    return (env).check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_quad_compare_asymmetric_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_Var_6;
  MR_Word conv5_STATE_VARIABLE_Info_14;

  check_hlds__unify_proc__info_new_var_no_type_4_p_0(((MR_String) (wrapper_arg_1)), &conv6_Var_6, ((MR_Word) (wrapper_arg_3)), &conv5_STATE_VARIABLE_Info_14);
  *wrapper_arg_2 = ((MR_Box) (conv6_Var_6));
  *wrapper_arg_4 = ((MR_Box) (conv5_STATE_VARIABLE_Info_14));
}

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_compare_du_quad_compare_asymmetric_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_LambdaHeadVar__2_19;

  conv4_LambdaHeadVar__2_19 = check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars_for_cons_args__2849__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_19));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_quad_compare_asymmetric_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Var_6;
  MR_Word conv1_STATE_VARIABLE_Info_14;

  check_hlds__unify_proc__info_new_var_no_type_4_p_0(((MR_String) (wrapper_arg_1)), &conv2_Var_6, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Info_14);
  *wrapper_arg_2 = ((MR_Box) (conv2_Var_6));
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Info_14));
}

static MR_Box MR_CALL 
check_hlds__unify_proc__generate_compare_du_quad_compare_asymmetric_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_19;

  conv0_LambdaHeadVar__2_19 = check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars_for_cons_args__2849__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_19));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_du_quad_compare_asymmetric_10_p_0(
  MR_Word SpecDefnInfo_11,
  MR_Word CtorRepnA_12,
  MR_Word CtorRepnB_13,
  MR_String CompareOp_14,
  MR_Word R_15,
  MR_Word X_16,
  MR_Word Y_17,
  MR_Word * Case_18,
  MR_Word STATE_VARIABLE_Info_0_50,
  MR_Word * STATE_VARIABLE_Info_51)
{
  MR_Word MaybeExistConstraintsA_21 = ((MR_Word) ((MR_hl_field(0, CtorRepnA_12, (MR_Integer) 1))));
  MR_Word FunctorNameA_22 = ((MR_Word) ((MR_hl_field(0, CtorRepnA_12, (MR_Integer) 2))));
  MR_Word ArgRepnsA_24 = ((MR_Word) ((MR_hl_field(0, CtorRepnA_12, (MR_Integer) 4))));
  MR_Word MaybeExistConstraintsB_28 = ((MR_Word) ((MR_hl_field(0, CtorRepnB_13, (MR_Integer) 1))));
  MR_Word FunctorNameB_29 = ((MR_Word) ((MR_hl_field(0, CtorRepnB_13, (MR_Integer) 2))));
  MR_Word ArgRepnsB_31 = ((MR_Word) ((MR_hl_field(0, CtorRepnB_13, (MR_Integer) 4))));
  MR_Integer FunctorArityA_34;
  MR_Integer FunctorArityB_35;
  MR_Word TypeCtor_36;
  MR_Word FunctorConsIdA_37;
  MR_Word FunctorConsIdB_38;
  MR_Word VarsA_39;
  MR_Word VarsB_40;
  MR_Word RHSA_41;
  MR_Word RHSB_42;
  MR_Word Context_43;
  MR_Word GoalUnifyX_44;
  MR_Word GoalUnifyY_45;
  MR_Word ReturnResult_46;
  MR_Word GoalList_47;
  MR_Word GoalInfo0_48;
  MR_Word GoalInfo_49;
  MR_Word STATE_VARIABLE_Info_52_52;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word SymName_103;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Word Builtin_107;
  MR_Word Var_108;

  mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), ArgRepnsA_24, &FunctorArityA_34);
  mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), ArgRepnsB_31, &FunctorArityB_35);
  TypeCtor_36 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_11, (MR_Integer) 4))));
  Context_43 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_11, (MR_Integer) 7))));
  {
    FunctorConsIdA_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, FunctorConsIdA_37, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, FunctorConsIdA_37, 1) = ((MR_Box) (FunctorNameA_22));
    MR_hl_field(3, FunctorConsIdA_37, 2) = ((MR_Box) (FunctorArityA_34));
    MR_hl_field(3, FunctorConsIdA_37, 3) = ((MR_Box) (TypeCtor_36));
  }
  {
    FunctorConsIdB_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, FunctorConsIdB_38, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, FunctorConsIdB_38, 1) = ((MR_Box) (FunctorNameB_29));
    MR_hl_field(3, FunctorConsIdB_38, 2) = ((MR_Box) (FunctorArityB_35));
    MR_hl_field(3, FunctorConsIdB_38, 3) = ((MR_Box) (TypeCtor_36));
  }
  if ((MaybeExistConstraintsA_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ArgTypes_79;

    ArgTypes_79 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__unify_proc_scalar_common_5[2]), ArgRepnsA_24);
    check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(ArgTypes_79, &VarsA_39, STATE_VARIABLE_Info_0_50, &STATE_VARIABLE_Info_52_52);
  }
  else
  {
    MR_Integer NumVars_80;
    MR_Word VarNames_81;
    MR_Box conv3_STATE_VARIABLE_Info_52_52;

    mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), ArgRepnsA_24, &NumVars_80);
    mercury__list__duplicate_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NumVars_80, ((MR_Box) ((MR_String) "")), &VarNames_81);
    mercury__list__map_foldl_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), (MR_Word) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0), (MR_Word) (&check_hlds__unify_proc_scalar_common_5[3]), VarNames_81, &VarsA_39, ((MR_Box) (STATE_VARIABLE_Info_0_50)), &conv3_STATE_VARIABLE_Info_52_52);
    STATE_VARIABLE_Info_52_52 = ((MR_Word) (conv3_STATE_VARIABLE_Info_52_52));
  }
  if ((MaybeExistConstraintsB_28 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ArgTypes_91;

    ArgTypes_91 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__unify_proc_scalar_common_5[4]), ArgRepnsB_31);
    check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(ArgTypes_91, &VarsB_40, STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Info_51);
  }
  else
  {
    MR_Integer NumVars_92;
    MR_Word VarNames_93;
    MR_Box conv7_STATE_VARIABLE_Info_51;

    mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), ArgRepnsB_31, &NumVars_92);
    mercury__list__duplicate_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NumVars_92, ((MR_Box) ((MR_String) "")), &VarNames_93);
    mercury__list__map_foldl_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), (MR_Word) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0), (MR_Word) (&check_hlds__unify_proc_scalar_common_5[5]), VarNames_93, &VarsB_40, ((MR_Box) (STATE_VARIABLE_Info_52_52)), &conv7_STATE_VARIABLE_Info_51);
    *STATE_VARIABLE_Info_51 = ((MR_Word) (conv7_STATE_VARIABLE_Info_51));
  }
  {
    RHSA_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RHSA_41, 0) = ((MR_Box) (FunctorConsIdA_37));
    MR_hl_field(1, RHSA_41, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, RHSA_41, 2) = ((MR_Box) (VarsA_39));
  }
  {
    RHSB_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RHSB_42, 0) = ((MR_Box) (FunctorConsIdB_38));
    MR_hl_field(1, RHSB_42, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, RHSB_42, 2) = ((MR_Box) (VarsB_40));
  }
  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_16, RHSA_41, Context_43, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyX_44);
  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Y_17, RHSB_42, Context_43, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyY_45);
  Builtin_107 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_108, 0) = ((MR_Box) (Builtin_107));
    MR_hl_field(1, Var_108, 1) = ((MR_Box) ((MR_String) "comparison_result"));
  }
  {
    Var_105 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_105, 0) = ((MR_Box) (Var_108));
    MR_hl_field(0, Var_105, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  Var_106 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    SymName_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_103, 0) = ((MR_Box) (Var_106));
    MR_hl_field(1, SymName_103, 1) = ((MR_Box) (CompareOp_14));
  }
  {
    Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_60, 1) = ((MR_Box) (SymName_103));
    MR_hl_field(3, Var_60, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, Var_60, 3) = ((MR_Box) (Var_105));
  }
  hlds__make_goal__make_const_construction_4_p_0(Context_43, R_15, Var_60, &ReturnResult_46);
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (ReturnResult_46));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (GoalUnifyY_45));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
  }
  {
    GoalList_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GoalList_47, 0) = ((MR_Box) (GoalUnifyX_44));
    MR_hl_field(1, GoalList_47, 1) = ((MR_Box) (Var_61));
  }
  hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_48);
  hlds__hlds_goal__goal_info_set_context_3_p_0(Context_43, GoalInfo0_48, &GoalInfo_49);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_47, GoalInfo_49, Case_18);
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Type_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Types_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Vars_11;
    MR_Word STATE_VARIABLE_Info_16_16;

    check_hlds__unify_proc__info_new_var_5_p_0((MR_String) "", Type_8, &Var_10, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_16_16);
    check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(Types_9, &Vars_11, STATE_VARIABLE_Info_16_16, STATE_VARIABLE_Info_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Vars_11));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__is_ctor_with_all_locally_packed_unsigned_args_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__IntroducedFrom__pred__is_ctor_with_all_locally_packed_unsigned_args__1370__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__unify_proc__is_ctor_with_all_locally_packed_unsigned_args_2_p_0(
  MR_Word CtorRepn_3,
  uint8_t * PtagUint8_4)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_41_41;
  MR_Word ConsTag_8 = ((MR_Word) ((MR_hl_field(0, CtorRepn_3, (MR_Integer) 3))));
  MR_Word CtorArgRepns_9 = ((MR_Word) ((MR_hl_field(0, CtorRepn_3, (MR_Integer) 4))));
  MR_Integer Arity_10 = ((MR_Integer) ((MR_hl_field(0, CtorRepn_3, (MR_Integer) 5))));
  MR_Word LocalArgsTagInfo_12;
  MR_Word IsArgUnsignedComparable_17;

  succeeded = (Arity_10 > (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = ((((MR_tag((MR_Word) ConsTag_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConsTag_8, (MR_Integer) 0)))) == (MR_Integer) 12)));
    if (succeeded)
    {
      LocalArgsTagInfo_12 = ((MR_Word) ((MR_hl_field(3, ConsTag_8, (MR_Integer) 1))));
      if ((LocalArgsTagInfo_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *PtagUint8_4 = UINT8_C(0);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Ptag_13 = ((MR_Word) ((MR_hl_field(1, LocalArgsTagInfo_12, (MR_Integer) 0))));
        MR_Word LocalSecTag_14 = ((MR_Word) ((MR_hl_field(1, LocalArgsTagInfo_12, (MR_Integer) 1))));
        MR_Unsigned Var_34;

        *PtagUint8_4 = (uint8_t) (Ptag_13);
        Var_34 = ((MR_Unsigned) ((MR_hl_field(0, LocalSecTag_14, (MR_Integer) 0))));
        succeeded = (Var_34 == (MR_Unsigned) 0U);
      }
      if (succeeded)
      {
        IsArgUnsignedComparable_17 = (MR_Word) (&check_hlds__unify_proc_scalar_common_5[1]);
        TypeCtorInfo_41_41 = (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0);
        succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_41_41, IsArgUnsignedComparable_17, CtorArgRepns_9);
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
  MR_Word ModuleInfo_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 0))));
  MR_Word IntType_15;
  MR_Word CastX_16;
  MR_Word CastY_17;
  MR_Word CastXGoal_18;
  MR_Word CastYGoal_19;
  MR_Word CompareGoal_20;
  MR_Word GoalInfo0_21;
  MR_Word GoalInfo_22;
  MR_Word Goal_23;
  MR_Word STATE_VARIABLE_Info_28_28;
  MR_Word STATE_VARIABLE_Info_31_31;
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
  check_hlds__unify_proc__info_new_var_5_p_0(Name_54, IntType_15, &CastX_16, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_28_28);
  mercury__string__int_to_string_2_p_0((MR_Integer) 2, &NumStr_55);
  mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", NumStr_55, &Name_56);
  check_hlds__unify_proc__info_new_var_5_p_0(Name_56, IntType_15, &CastY_17, STATE_VARIABLE_Info_28_28, &STATE_VARIABLE_Info_31_31);
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
  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_45, Goal_23, Context_8, Clause_12, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_25);
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_solver_7_p_0(
  MR_Word Context_8,
  MR_Word Res_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_Word ModuleInfo_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_17, (MR_Integer) 0))));
  MR_Word ArgVars_15;
  MR_Word Goal_16;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_22;

  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (Y_11));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (X_10));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_20));
  }
  {
    ArgVars_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArgVars_15, 0) = ((MR_Box) (Res_9));
    MR_hl_field(1, ArgVars_15, 1) = ((MR_Box) (Var_19));
  }
  Var_22 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_14, Var_22, (MR_String) "builtin_compare_solver_type", ArgVars_15, Context_8, &Goal_16);
  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), ArgVars_15, Goal_16, Context_8, Clause_12, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
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
  MR_Word ModuleInfo_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_25, (MR_Integer) 0))));
  MR_Word CastX_17;
  MR_Word CastY_18;
  MR_Word CastXGoal_19;
  MR_Word CastYGoal_20;
  MR_Word CompareGoal_21;
  MR_Word GoalInfo0_22;
  MR_Word GoalInfo_23;
  MR_Word Goal_24;
  MR_Word STATE_VARIABLE_Info_29_29;
  MR_Word STATE_VARIABLE_Info_32_32;
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
  check_hlds__unify_proc__info_new_var_5_p_0(Name_55, EqvType_10, &CastX_17, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_29_29);
  mercury__string__int_to_string_2_p_0((MR_Integer) 2, &NumStr_56);
  mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", NumStr_56, &Name_57);
  check_hlds__unify_proc__info_new_var_5_p_0(Name_57, EqvType_10, &CastY_18, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_32_32);
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
  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_46, Goal_24, Context_9, Clause_14, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_26);
}

static void MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_builtin_7_p_0(
  MR_Word SpecDefnInfo_8,
  MR_Word Res_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_24,
  MR_Word * STATE_VARIABLE_Info_25)
{
  MR_Word ModuleInfo_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_24, (MR_Integer) 0))));
  MR_Word TypeCtor_15 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_8, (MR_Integer) 4))));
  MR_Word CtorCat_16;
  MR_Word ArgVars_17;
  MR_String Name_18;
  MR_Word Context_22;
  MR_Word CompareGoal_23;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_54;

  CtorCat_16 = check_hlds__type_util__classify_type_ctor_2_f_0(ModuleInfo_14, TypeCtor_15);
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Y_11));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (X_10));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_27));
  }
  {
    ArgVars_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArgVars_17, 0) = ((MR_Box) (Res_9));
    MR_hl_field(1, ArgVars_17, 1) = ((MR_Box) (Var_26));
  }
  switch (MR_tag((MR_Word) CtorCat_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(CtorCat_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 4:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body_builtin\'/7", (MR_String) "bad ctor category");
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
        MR_Word Var_70 = ((MR_Word) ((MR_hl_field(1, CtorCat_16, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) Var_70)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Var_70)) {
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
              MR_Word Var_71 = ((MR_Unsigned) ((MR_hl_field(1, Var_70, (MR_Integer) 0))) & (MR_Integer) 15);

              Name_18 = ((&check_hlds__unify_proc_vector_common_3[10 + Var_71]))->check_hlds__unify_proc__vector_common_type_3_0__vct_3_f_0;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body_builtin\'/7", (MR_String) "bad ctor category");
        return;
      }
      break;
    case (MR_Integer) 3:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body_builtin\'/7", (MR_String) "bad ctor category");
        return;
      }
      break;
  }
  Context_22 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_8, (MR_Integer) 7))));
  Var_54 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_14, Var_54, Name_18, ArgVars_17, Context_22, &CompareGoal_23);
  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), ArgVars_17, CompareGoal_23, Context_22, Clause_12, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
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
  MR_Word STATE_VARIABLE_Info_45_45;

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
        MR_Word ComparePredName_47 = ((MR_Word) ((MR_hl_field(1, NonCanonical_10, (MR_Integer) 1))));
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
        check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_9, X_12, Y_13, Var_58, Goal0_52, &Goal_20, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_45_45);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ModuleInfo_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_28, (MR_Integer) 0))));
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
        STATE_VARIABLE_Info_45_45 = STATE_VARIABLE_Info_0_28;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, NonCanonical_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ComparePredName_22 = ((MR_Word) ((MR_hl_field(3, NonCanonical_10, (MR_Integer) 1))));
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
            check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_9, X_12, Y_13, Var_44, Goal0_27, &Goal_20, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_45_45);
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
  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), ArgVars_19, Goal_20, Context_9, Clause_14, STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Info_29);
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
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Builtin_29;
  MR_Word Var_30;

  Builtin_29 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (Builtin_29));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_String) "comparison_result"));
  }
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  Var_28 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    SymName_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymName_25, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, SymName_25, 1) = ((MR_Box) ((MR_String) "="));
  }
  {
    Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_23, 1) = ((MR_Box) (SymName_25));
    MR_hl_field(3, Var_23, 2) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(3, Var_23, 3) = ((MR_Box) (Var_27));
  }
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

  succeeded = check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body__272__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_6_p_0(
  MR_Word SpecDefnInfo_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word * Clauses_10,
  MR_Word STATE_VARIABLE_Info_0_43,
  MR_Word * STATE_VARIABLE_Info_44)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_43, (MR_Integer) 0))));
  MR_Word TypeBody_13 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_7, (MR_Integer) 5))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_7, (MR_Integer) 7))));
  MR_Word SuperType_17;
  MR_Word TypeBodyDu_15;
  MR_Word Var_45;

  succeeded = ((MR_tag((MR_Word) TypeBody_13)) == (MR_Integer) 0);
  if (succeeded)
  {
    TypeBodyDu_15 = (MR_Word) ((MR_Word) (TypeBody_13));
    Var_45 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_15, (MR_Integer) 1))));
    succeeded = (Var_45 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      SuperType_17 = ((MR_Word) ((MR_hl_field(1, Var_45, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word TVarSet_21 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_7, (MR_Integer) 2))));
    MR_Word BaseType_22;
    MR_Word Clause_23;
    MR_Word TypeTable_121;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_12, &TypeTable_121);
    check_hlds__unify_proc__get_du_base_type_loop_4_p_0(TypeTable_121, TVarSet_21, SuperType_17, &BaseType_22);
    check_hlds__unify_proc__generate_unify_proc_body_eqv_7_p_0(Context_14, BaseType_22, X_8, Y_9, &Clause_23, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Clauses_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Clause_23));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word UserEqComp_24;

    succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(ModuleInfo_12, TypeBody_13, &UserEqComp_24);
    if (succeeded)
    {
      MR_Word Clause_76;

      check_hlds__unify_proc__generate_unify_proc_body_user_7_p_0(UserEqComp_24, X_8, Y_9, Context_14, &Clause_76, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Clauses_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Clause_76));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      switch (MR_tag((MR_Word) TypeBody_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MaybeSuperType_31;
            MR_Word MaybeRepn_33;
            MR_Word Repn_35;
            MR_Word DuTypeKind_36;
            MR_Word Var_62;
            MR_Word TypeBodyDu_88 = (MR_Word) ((MR_Word) (TypeBody_13));
            MR_Word Var_110;

            MaybeSuperType_31 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_88, (MR_Integer) 1))));
            MaybeRepn_33 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_88, (MR_Integer) 3))));
            {
              Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_62, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[1]));
              MR_hl_field(0, Var_62, 1) = ((MR_Box) (check_hlds__unify_proc__generate_unify_proc_body_6_p_0_1));
              MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_62, 3) = ((MR_Box) (MaybeSuperType_31));
              MR_hl_field(0, Var_62, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__require__expect_3_p_0(Var_62, (MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body\'/6", (MR_String) "MaybeSuperType != not_a_subtype");
            if ((MaybeRepn_33 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body\'/6", (MR_String) "MaybeRepn = no");
                return;
              }
            else
              Repn_35 = ((MR_Word) ((MR_hl_field(1, MaybeRepn_33, (MR_Integer) 0))));
            Var_110 = ((MR_Word) ((MR_hl_field(0, Repn_35, (MR_Integer) 0))));
            DuTypeKind_36 = ((MR_Word) ((MR_hl_field(0, Repn_35, (MR_Integer) 3))));
            switch (MR_tag((MR_Word) DuTypeKind_36)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(DuTypeKind_36)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Clause_81;

                      check_hlds__unify_proc__generate_unify_proc_body_enum_6_p_0(Context_14, X_8, Y_9, &Clause_81, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Clauses_10 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Clause_81));
                        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Clause_82;
                      MR_Word Goal_122;
                      MR_Word Var_124;
                      MR_Word Var_125;

                      Goal_122 = hlds__make_goal__true_goal_with_context_1_f_0(Context_14);
                      {
                        Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_125, 0) = ((MR_Box) (Y_9));
                        MR_hl_field(1, Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Var_124, 0) = ((MR_Box) (X_8));
                        MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_125));
                      }
                      check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_124, Goal_122, Context_14, &Clause_82, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *Clauses_10 = base;
                        MR_hl_field(1, base, 0) = ((MR_Box) (Clause_82));
                        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0(SpecDefnInfo_7, Var_110, X_8, Y_9, Clauses_10, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Clause_81;

                  check_hlds__unify_proc__generate_unify_proc_body_enum_6_p_0(Context_14, X_8, Y_9, &Clause_81, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Clauses_10 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Clause_81));
                    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgType_39 = ((MR_Word) ((MR_hl_field(2, DuTypeKind_36, (MR_Integer) 1))));
                  MR_Word ArgIsDummy_41;

                  ArgIsDummy_41 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_12, ArgType_39);
                  switch (ArgIsDummy_41) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Clause_83;

                        check_hlds__unify_proc__generate_unify_proc_body_dummy_6_p_0(Context_14, X_8, Y_9, &Clause_83, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *Clauses_10 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (Clause_83));
                          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word CtorRepns_42 = ((MR_Word) ((MR_hl_field(0, Repn_35, (MR_Integer) 0))));

                        check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0(SpecDefnInfo_7, CtorRepns_42, X_8, Y_9, Clauses_10, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
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
            MR_Word Var_57;
            MR_Word Clause_79;

            Var_57 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
            check_hlds__unify_proc__generate_unify_proc_body_eqv_7_p_0(Context_14, Var_57, X_8, Y_9, &Clause_79, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Clauses_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Clause_79));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word EqvType_26 = ((MR_Word) ((MR_hl_field(2, TypeBody_13, (MR_Integer) 0))));
            MR_Word EqvIsDummy_27;
            MR_Word Clause_78;

            EqvIsDummy_27 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_12, EqvType_26);
            switch (EqvIsDummy_27) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                check_hlds__unify_proc__generate_unify_proc_body_dummy_6_p_0(Context_14, X_8, Y_9, &Clause_78, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
                break;
              case (MR_Integer) 1:
                check_hlds__unify_proc__generate_unify_proc_body_eqv_7_p_0(Context_14, EqvType_26, X_8, Y_9, &Clause_78, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Clauses_10 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Clause_78));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, TypeBody_13, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Clause_80;

                check_hlds__unify_proc__generate_unify_proc_body_solver_6_p_0(Context_14, X_8, Y_9, &Clause_80, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Clauses_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Clause_80));
                  MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Clause_77;

                succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(ModuleInfo_12);
                if (succeeded)
                  check_hlds__unify_proc__generate_unify_proc_body_builtin_6_p_0(SpecDefnInfo_7, X_8, Y_9, &Clause_77, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body\'/6", (MR_String) "trying to create unify proc for abstract type");
                    return;
                  }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Clauses_10 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Clause_77));
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
          MR_Word MaybeSuperType_15 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_13, (MR_Integer) 1))));

          if ((MaybeSuperType_15 == (MR_Word) ((MR_Unsigned) 0U)))
            *BaseType_8 = Type_7;
          else
          {
            MR_Word SuperType0_19 = ((MR_Word) ((MR_hl_field(1, MaybeSuperType_15, (MR_Integer) 0))));
            MR_Word TypeDefnTVarSet_20;
            MR_Word TypeDefnTypeParams_21;
            MR_Word SuperType_22;
            MR_Word Renaming_36;
            MR_Word TypeParams_37;
            MR_Word TSubst_38;
            MR_Word Type1_39;
            MR_Word _MergedTVarSet_35;
            MR_Word next_value_of_Type_7;

            hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_11, &TypeDefnTVarSet_20);
            hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_11, &TypeDefnTypeParams_21);
            parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet_6, TypeDefnTVarSet_20, &_MergedTVarSet_35, &Renaming_36);
            parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_36, TypeDefnTypeParams_21, &TypeParams_37);
            mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_37, TypeArgs_10, &TSubst_38);
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(Renaming_36, SuperType0_19, &Type1_39);
            parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TSubst_38, Type1_39, &SuperType_22);
            // direct tailcall eliminated
            ;
            next_value_of_Type_7 = SuperType_22;
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
        switch (((MR_Integer) ((MR_hl_field(3, TypeBody_12, (MR_Integer) 0))))) {
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
check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body_du__670__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_Goal_14;
  MR_Word conv3_STATE_VARIABLE_Info_56;

  check_hlds__unify_proc__generate_du_unify_case_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv4_Goal_14, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_Info_56);
  *wrapper_arg_2 = ((MR_Box) (conv4_Goal_14));
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_Info_56));
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Goal_14;
  MR_Word conv0_STATE_VARIABLE_Info_56;

  check_hlds__unify_proc__generate_du_unify_case_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv1_Goal_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_56);
  *wrapper_arg_2 = ((MR_Box) (conv1_Goal_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_56));
}

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body_du__615__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0(
  MR_Word SpecDefnInfo_8,
  MR_Word CtorRepns_9,
  MR_Word X_10,
  MR_Word Y_11,
  MR_Word * Clauses_12,
  MR_Word STATE_VARIABLE_Info_0_47,
  MR_Word * STATE_VARIABLE_Info_48)
{
  MR_bool succeeded;
  MR_Word UCOptions_14;
  MR_Word Context_15;
  MR_Word GoalInfo_35;
  MR_Word Goal_36;
  MR_Word PackedOps_37;
  MR_Word STATE_VARIABLE_Info_55_55;
  MR_Word TypeCtorInfo_124_124;
  MR_Word MayUnifyCtorAsWhole_16;
  MR_Word Var_49;
  MR_Word Var_110;

  UCOptions_14 = check_hlds__unify_proc__lookup_unify_compare_options_1_f_0(STATE_VARIABLE_Info_0_47);
  Context_15 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_8, (MR_Integer) 7))));
  Var_49 = ((((MR_Unsigned) ((MR_hl_field(0, UCOptions_14, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  Var_110 = ((MR_Unsigned) ((MR_hl_field(0, UCOptions_14, (MR_Integer) 0))) & (MR_Integer) 1);
  succeeded = (Var_49 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (Var_110 == (MR_Integer) 1);
    if (succeeded)
    {
      MayUnifyCtorAsWhole_16 = (MR_Word) (&check_hlds__unify_proc_scalar_common_5[0]);
      TypeCtorInfo_124_124 = (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0);
      succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_124_124, MayUnifyCtorAsWhole_16, CtorRepns_9);
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
    MR_Word STATE_VARIABLE_Info_53_53;
    MR_Word Var_58;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;

    CastType_28 = check_hlds__unify_proc__get_pretest_equality_cast_type_1_f_0(STATE_VARIABLE_Info_0_47);
    check_hlds__unify_proc__info_new_var_5_p_0((MR_String) "CastX", CastType_28, &CastX_29, STATE_VARIABLE_Info_0_47, &STATE_VARIABLE_Info_53_53);
    check_hlds__unify_proc__info_new_var_5_p_0((MR_String) "CastY", CastType_28, &CastY_30, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_55_55);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, X_10, CastX_29, Context_15, &CastXGoal_31);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Y_11, CastY_30, Context_15, &CastYGoal_32);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_58, 0) = ((MR_Box) (CastY_30));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(CastX_29, Var_58, Context_15, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &EqualityGoal_33);
    {
      Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_64, 0) = ((MR_Box) (EqualityGoal_33));
      MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_63, 0) = ((MR_Box) (CastYGoal_32));
      MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) (CastXGoal_31));
      MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
    }
    {
      GoalExpr_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GoalExpr_34, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, GoalExpr_34, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, GoalExpr_34, 2) = ((MR_Box) (Var_62));
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
    MR_Word Disjuncts_38;
    MR_Word Goal0_39;
    MR_Word Var_66;
    MR_Word STATE_VARIABLE_Info_67_67;
    MR_Word Var_68;
    MR_Box conv2_STATE_VARIABLE_Info_67_67;

    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_66, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_6[0]));
      MR_hl_field(0, Var_66, 1) = ((MR_Box) (check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_2));
      MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_66, 3) = ((MR_Box) (SpecDefnInfo_8));
      MR_hl_field(0, Var_66, 4) = ((MR_Box) (UCOptions_14));
      MR_hl_field(0, Var_66, 5) = ((MR_Box) (X_10));
      MR_hl_field(0, Var_66, 6) = ((MR_Box) (Y_11));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0), Var_66, CtorRepns_9, &Disjuncts_38, ((MR_Box) (STATE_VARIABLE_Info_0_47)), &conv2_STATE_VARIABLE_Info_67_67);
    STATE_VARIABLE_Info_67_67 = ((MR_Word) (conv2_STATE_VARIABLE_Info_67_67));
    hlds__hlds_goal__goal_info_init_2_p_0(Context_15, &GoalInfo_35);
    {
      Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_68, 1) = ((MR_Box) (Disjuncts_38));
    }
    {
      Goal0_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal0_39, 0) = ((MR_Box) (Var_68));
      MR_hl_field(0, Goal0_39, 1) = ((MR_Box) (GoalInfo_35));
    }
    check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_15, X_10, Y_11, (MR_Word) ((MR_Unsigned) 0U), Goal0_39, &Goal_36, STATE_VARIABLE_Info_67_67, &STATE_VARIABLE_Info_55_55);
    PackedOps_37 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_55_55, (MR_Integer) 3))) & (MR_Integer) 1);
  }
  switch (PackedOps_37) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Clause_40;
        MR_Word Var_72;
        MR_Word Var_74;

        {
          Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_74, 0) = ((MR_Box) (Y_11));
          MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_72, 0) = ((MR_Box) (X_10));
          MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_74));
        }
        check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_72, Goal_36, Context_15, &Clause_40, STATE_VARIABLE_Info_55_55, STATE_VARIABLE_Info_48);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Clauses_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Clause_40));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word InInClause_41;
        MR_Word NonPackedUCOptions_42;
        MR_Word NonPackedDisjuncts_43;
        MR_Word NonPackedGoal0_44;
        MR_Word NonPackedGoal_45;
        MR_Word NonInInClause_46;
        MR_Word Var_78;
        MR_Word STATE_VARIABLE_Info_79_79;
        MR_Word Var_80;
        MR_Word STATE_VARIABLE_Info_83_83;
        MR_Word Var_85;
        MR_Word STATE_VARIABLE_Info_86_86;
        MR_Word Var_87;
        MR_Word Var_90;
        MR_Word Var_92;
        MR_Word STATE_VARIABLE_Info_94_94;
        MR_Word Var_100;
        MR_Word Var_115;
        MR_Word Var_117;
        MR_Word Var_118;
        MR_Word Var_119;
        MR_Box conv5_STATE_VARIABLE_Info_86_86;

        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = ((MR_Box) (Y_11));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_78, 0) = ((MR_Box) (X_10));
          MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_80));
        }
        check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 4U), Var_78, Goal_36, Context_15, &InInClause_41, STATE_VARIABLE_Info_55_55, &STATE_VARIABLE_Info_79_79);
        Var_115 = ((((MR_Unsigned) ((MR_hl_field(0, UCOptions_14, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        {
          NonPackedUCOptions_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NonPackedUCOptions_42, 0) = (MR_Box) (((((MR_Unsigned) (Var_115) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
        }
        Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_79_79, (MR_Integer) 0))));
        Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_79_79, (MR_Integer) 1))));
        Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_79_79, (MR_Integer) 2))));
        {
          STATE_VARIABLE_Info_83_83 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 0) = ((MR_Box) (Var_117));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 1) = ((MR_Box) (Var_118));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 2) = ((MR_Box) (Var_119));
          MR_hl_field(0, STATE_VARIABLE_Info_83_83, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_85 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_85, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_6[0]));
          MR_hl_field(0, Var_85, 1) = ((MR_Box) (check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_3));
          MR_hl_field(0, Var_85, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_85, 3) = ((MR_Box) (SpecDefnInfo_8));
          MR_hl_field(0, Var_85, 4) = ((MR_Box) (NonPackedUCOptions_42));
          MR_hl_field(0, Var_85, 5) = ((MR_Box) (X_10));
          MR_hl_field(0, Var_85, 6) = ((MR_Box) (Y_11));
        }
        mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0), Var_85, CtorRepns_9, &NonPackedDisjuncts_43, ((MR_Box) (STATE_VARIABLE_Info_83_83)), &conv5_STATE_VARIABLE_Info_86_86);
        STATE_VARIABLE_Info_86_86 = ((MR_Word) (conv5_STATE_VARIABLE_Info_86_86));
        Var_90 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_86_86, (MR_Integer) 3))) & (MR_Integer) 1);
        {
          Var_87 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_87, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[0]));
          MR_hl_field(0, Var_87, 1) = ((MR_Box) (check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_4));
          MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_87, 3) = ((MR_Box) (Var_90));
          MR_hl_field(0, Var_87, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_87, (MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body_du\'/7", (MR_String) "packed word ops show up after being disabled");
        {
          Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_92, 1) = ((MR_Box) (NonPackedDisjuncts_43));
        }
        {
          NonPackedGoal0_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NonPackedGoal0_44, 0) = ((MR_Box) (Var_92));
          MR_hl_field(0, NonPackedGoal0_44, 1) = ((MR_Box) (GoalInfo_35));
        }
        check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_15, X_10, Y_11, (MR_Word) ((MR_Unsigned) 0U), NonPackedGoal0_44, &NonPackedGoal_45, STATE_VARIABLE_Info_86_86, &STATE_VARIABLE_Info_94_94);
        check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 8U), Var_78, NonPackedGoal_45, Context_15, &NonInInClause_46, STATE_VARIABLE_Info_94_94, STATE_VARIABLE_Info_48);
        {
          Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_100, 0) = ((MR_Box) (NonInInClause_46));
          MR_hl_field(1, Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Clauses_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (InInClause_41));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_100));
        }
      }
      break;
  }
}

static MR_Word MR_CALL 
check_hlds__unify_proc__get_pretest_equality_cast_type_1_f_0(
  MR_Word Info_3)
{
  MR_Word CastType_4;
  MR_Word ModuleInfo_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));
  MR_Word Globals_6;
  MR_Word CastPointers_7;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_6);
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 323, &CastPointers_7);
  switch (CastPointers_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      CastType_4 = parse_tree__builtin_lib_types__int_type_0_f_0();
      break;
    case (MR_Integer) 1:
      CastType_4 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
      break;
  }
  return CastType_4;
}

static MR_Word MR_CALL 
check_hlds__unify_proc__lookup_unify_compare_options_1_f_0(
  MR_Word Info_3)
{
  MR_bool succeeded;
  MR_Word UCOptions_4;
  MR_Word ModuleInfo_5 = ((MR_Word) ((MR_hl_field(0, Info_3, (MR_Integer) 0))));
  MR_Word Globals_6;
  MR_Word BoolCanCompareAsInt_7;
  MR_Word CanCompareAsInt_8;
  MR_Word BoolAllowPackedUC_9;
  MR_Word Target_10;
  MR_Word AllowPackedUC_11;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_6);
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 322, &BoolCanCompareAsInt_7);
  switch (BoolCanCompareAsInt_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      CanCompareAsInt_8 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      CanCompareAsInt_8 = (MR_Integer) 1;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 303, &BoolAllowPackedUC_9);
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
  ModuleInfo_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_15, (MR_Integer) 0))));
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
  MR_Word STATE_VARIABLE_Info_26_26;
  MR_Word STATE_VARIABLE_Info_29_29;
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
  check_hlds__unify_proc__info_new_var_5_p_0(Name_45, EqvType_9, &CastX_14, STATE_VARIABLE_Info_0_22, &STATE_VARIABLE_Info_26_26);
  mercury__string__int_to_string_2_p_0((MR_Integer) 2, &NumStr_46);
  mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", NumStr_46, &Name_47);
  check_hlds__unify_proc__info_new_var_5_p_0(Name_47, EqvType_9, &CastY_15, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_29_29);
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
  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_40, Goal_21, Context_8, Clause_12, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_23);
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_builtin_6_p_0(
  MR_Word SpecDefnInfo_7,
  MR_Word X_8,
  MR_Word Y_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_22, (MR_Integer) 0))));
  MR_Word TypeCtor_13 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_7, (MR_Integer) 4))));
  MR_Word CtorCat_14;
  MR_Word ArgVars_15;
  MR_String Name_16;
  MR_Word Context_20;
  MR_Word UnifyGoal_21;
  MR_Word Var_24;
  MR_Word Var_51;

  CtorCat_14 = check_hlds__type_util__classify_type_ctor_2_f_0(ModuleInfo_12, TypeCtor_13);
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (Y_9));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ArgVars_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArgVars_15, 0) = ((MR_Box) (X_8));
    MR_hl_field(1, ArgVars_15, 1) = ((MR_Box) (Var_24));
  }
  switch (MR_tag((MR_Word) CtorCat_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(CtorCat_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 4:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body_builtin\'/6", (MR_String) "bad ctor category");
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
        MR_Word Var_67 = ((MR_Word) ((MR_hl_field(1, CtorCat_14, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) Var_67)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Var_67)) {
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
              MR_Word Var_68 = ((MR_Unsigned) ((MR_hl_field(1, Var_67, (MR_Integer) 0))) & (MR_Integer) 15);

              Name_16 = ((&check_hlds__unify_proc_vector_common_3[0 + Var_68]))->check_hlds__unify_proc__vector_common_type_3_0__vct_3_f_0;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body_builtin\'/6", (MR_String) "bad ctor category");
        return;
      }
      break;
    case (MR_Integer) 3:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body_builtin\'/6", (MR_String) "bad ctor category");
        return;
      }
      break;
  }
  Context_20 = ((MR_Word) ((MR_hl_field(0, SpecDefnInfo_7, (MR_Integer) 7))));
  Var_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_12, Var_51, Name_16, ArgVars_15, Context_20, &UnifyGoal_21);
  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), ArgVars_15, UnifyGoal_21, Context_20, Clause_10, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
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
  MR_Word STATE_VARIABLE_Info_40_40;
  MR_Word STATE_VARIABLE_Info_57_57;
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
        MR_Word UnifyPredName_15 = ((MR_Word) ((MR_hl_field(1, NonCanonical_8, (MR_Integer) 0))));
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
        STATE_VARIABLE_Info_40_40 = STATE_VARIABLE_Info_0_27;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word UnifyPredName_67 = ((MR_Word) ((MR_hl_field(2, NonCanonical_8, (MR_Integer) 0))));
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
        STATE_VARIABLE_Info_40_40 = STATE_VARIABLE_Info_0_27;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, NonCanonical_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ComparePredName_22 = ((MR_Word) ((MR_hl_field(3, NonCanonical_8, (MR_Integer) 1))));
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
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Builtin_84;
            MR_Word Var_85;

            Var_39 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
            check_hlds__unify_proc__info_new_var_5_p_0((MR_String) "Result", Var_39, &ResultVar_23, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_40_40);
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
            Builtin_84 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            {
              Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_85, 0) = ((MR_Box) (Builtin_84));
              MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_String) "comparison_result"));
            }
            {
              Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_82, 0) = ((MR_Box) (Var_85));
              MR_hl_field(0, Var_82, 1) = ((MR_Box) ((MR_Integer) 0));
            }
            Var_83 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            {
              SymName_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, SymName_80, 0) = ((MR_Box) (Var_83));
              MR_hl_field(1, SymName_80, 1) = ((MR_Box) ((MR_String) "="));
            }
            {
              Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, Var_77, 1) = ((MR_Box) (SymName_80));
              MR_hl_field(3, Var_77, 2) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(3, Var_77, 3) = ((MR_Box) (Var_82));
            }
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
  check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_11, X_9, Y_10, (MR_Word) ((MR_Unsigned) 0U), Goal0_21, &Goal_26, STATE_VARIABLE_Info_40_40, &STATE_VARIABLE_Info_57_57);
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
  check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_59, Goal_26, Context_11, Clause_12, STATE_VARIABLE_Info_57_57, STATE_VARIABLE_Info_28);
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
  MR_Word ModuleInfo_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, (MR_Integer) 0))));
  MR_Word Globals_17;
  MR_Word ShouldPretestEq_18;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_16, &Globals_17);
  libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 362, &ShouldPretestEq_18);
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
        MR_Word STATE_VARIABLE_Info_43_43;
        MR_Word Var_50;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word ModuleInfo_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_39, (MR_Integer) 0))));
        MR_Word Globals_67;
        MR_Word CastPointers_68;

        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_66, &Globals_67);
        libs__globals__lookup_bool_option_3_p_0(Globals_67, (MR_Integer) 323, &CastPointers_68);
        switch (CastPointers_68) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            CastType_19 = parse_tree__builtin_lib_types__int_type_0_f_0();
            break;
          case (MR_Integer) 1:
            CastType_19 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
            break;
        }
        check_hlds__unify_proc__info_new_var_5_p_0((MR_String) "CastX", CastType_19, &CastX_20, STATE_VARIABLE_Info_0_39, &STATE_VARIABLE_Info_43_43);
        check_hlds__unify_proc__info_new_var_5_p_0((MR_String) "CastY", CastType_19, &CastY_21, STATE_VARIABLE_Info_43_43, STATE_VARIABLE_Info_40);
        hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, X_10, CastX_20, Context_9, &CastXGoal0_22);
        hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Y_11, CastY_21, Context_9, &CastYGoal0_23);
        hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 13, CastXGoal0_22, &CastXGoal_24);
        hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 13, CastYGoal0_23, &CastYGoal_25);
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_50, 0) = ((MR_Box) (CastY_21));
        }
        hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(CastX_20, Var_50, Context_9, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &EqualityGoal0_26);
        hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 22, EqualityGoal0_26, &EqualityGoal_27);
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
          MR_Word Res_33 = ((MR_Word) ((MR_hl_field(1, MaybeCompareRes_12, (MR_Integer) 0))));
          MR_Word EqualGoalInfo_35;
          MR_Word InstmapDelta_36;
          MR_Word Var_59;
          MR_Word SymName_73;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Builtin_77;
          MR_Word Var_78;

          Builtin_77 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
          {
            Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_78, 0) = ((MR_Box) (Builtin_77));
            MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_String) "comparison_result"));
          }
          {
            Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_75, 0) = ((MR_Box) (Var_78));
            MR_hl_field(0, Var_75, 1) = ((MR_Box) ((MR_Integer) 0));
          }
          Var_76 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
          {
            SymName_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, SymName_73, 0) = ((MR_Box) (Var_76));
            MR_hl_field(1, SymName_73, 1) = ((MR_Box) ((MR_String) "="));
          }
          {
            Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, Var_59, 1) = ((MR_Box) (SymName_73));
            MR_hl_field(3, Var_59, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(3, Var_59, 3) = ((MR_Box) (Var_75));
          }
          hlds__make_goal__make_const_construction_4_p_0(Context_9, Res_33, Var_59, &EqualGoal_31);
          EqualGoalInfo_35 = ((MR_Word) ((MR_hl_field(0, EqualGoal_31, (MR_Integer) 1))));
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
        hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 21, GoalInfo_32, &FeaturedGoalInfo_38);
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
check_hlds__unify_proc__info_new_var_5_p_0(
  MR_String Name_6,
  MR_Word Type_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_Word ModuleInfo_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_15, (MR_Integer) 0))));
  MR_Word IsDummy_11;
  MR_Word Entry_12;
  MR_Word VarTable0_13;
  MR_Word VarTable_14;
  MR_Word Var_23;
  MR_Word Var_25;
  MR_Word Var_26;

  IsDummy_11 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_10, Type_7);
  {
    Entry_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_12, 0) = ((MR_Box) (Name_6));
    MR_hl_field(0, Entry_12, 1) = ((MR_Box) (Type_7));
    MR_hl_field(0, Entry_12, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_11));
  }
  VarTable0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_15, (MR_Integer) 1))));
  parse_tree__var_table__add_var_entry_4_p_0(Entry_12, Var_8, VarTable0_13, &VarTable_14);
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_15, (MR_Integer) 0))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_15, (MR_Integer) 2))));
  Var_26 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_15, (MR_Integer) 3))) & (MR_Integer) 1);
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
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  MR_Word VarTable0_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 1))));
  MR_Word RttiVarMaps0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 2))));
  MR_Word Goal_17;
  MR_Word VarTable_18;
  MR_Word RttiVarMaps_19;
  MR_Word Var_33;
  MR_Word Var_36;
  MR_Word _Warnings_16;

  hlds__quantification__implicitly_quantify_clause_body_general_9_p_0((MR_Integer) 0, HeadVars_9, &_Warnings_16, Goal0_10, &Goal_17, VarTable0_14, &VarTable_18, RttiVarMaps0_15, &RttiVarMaps_19);
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 0))));
  Var_36 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_20, (MR_Integer) 3))) & (MR_Integer) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_21 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 1) = ((MR_Box) (VarTable_18));
    MR_hl_field(0, base, 2) = ((MR_Box) (RttiVarMaps_19));
    MR_hl_field(0, base, 3) = (MR_Box) ((MR_Unsigned) (Var_36));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Clause_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ApplModes_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Goal_17));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 3) = ((MR_Box) (Context_11));
    MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
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
      MR_Word VarsTypes_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_RevVarsTypes_14_14;
      MR_Word Var_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevVarsTypes_0_2;

      Type_8 = ((MR_Word) ((MR_hl_field(0, Var_13, (MR_Integer) 1))));
      Var_16 = parse_tree__builtin_lib_types__void_type_0_f_0();
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_8, Var_16);
      if (succeeded)
        STATE_VARIABLE_RevVarsTypes_14_14 = STATE_VARIABLE_RevVarsTypes_0_2;
      else
        {
          STATE_VARIABLE_RevVarsTypes_14_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevVarsTypes_14_14, 0) = ((MR_Box) (Var_13));
          MR_hl_field(1, STATE_VARIABLE_RevVarsTypes_14_14, 1) = ((MR_Box) (STATE_VARIABLE_RevVarsTypes_0_2));
        }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = VarsTypes_9;
      next_value_of_STATE_VARIABLE_RevVarsTypes_0_2 = STATE_VARIABLE_RevVarsTypes_14_14;
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
check_hlds__unify_proc____Unify____linear_or_quad_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__unify_proc____Unify____linear_or_quad_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__unify_proc____Compare____linear_or_quad_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_linear_or_quad_0);
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
