/*
** Automatically generated from `unify_proc.m'
** by the Mercury compiler,
** version rotd-2021-12-17
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
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.set_of_var.mih"
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

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__unify_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_info_0_0[5];

static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_unify_proc_info_0_0[5];

static const MR_DuArgLocn check_hlds__unify_proc__check_hlds__unify_proc__field_locns_unify_proc_info_0_0[5];

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0[1];

static const MR_DuPtagLayout check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_info_0[1];

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_info_0[1];

static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars_for_cons_args__2867__1_1_f_0(
  MR_Word LambdaHeadVar__1_20);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2262__2_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_156);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2254__1_2_p_0(
  MR_Integer ShiftInt0_69,
  MR_Integer HeadVar__2_112);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2262__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_64);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__is_ctor_with_all_locally_packed_unsigned_args__1360__1_1_p_0(
  MR_Word LambdaHeadVar__1_35);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_compare_proc_body_du__1245__1_2_p_0(
  MR_Word CtorRepns_10,
  MR_Word HeadVar__2_54);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_compare_proc_body__1006__1_2_p_0(
  MR_Word MaybeSuperType_32,
  MR_Word HeadVar__2_52);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_rest_of_word__902__2_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_104);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_rest_of_word__902__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_36);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body_du__647__1_2_p_0(
  MR_Word HeadVar__1_84,
  MR_Word HeadVar__2_85);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body_du__592__1_1_p_0(
  MR_Word LambdaHeadVar__1_51);

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body__249__1_2_p_0(
  MR_Word MaybeSuperType_31,
  MR_Word HeadVar__2_53);

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
  MR_Word HeadVar__2_1,
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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_compare_constants_as_ints_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_compare_constants_as_ints_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_allow_packed_unify_compare_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_allow_packed_unify_compare_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_all_args_in_word_so_far_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_all_args_in_word_so_far_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0(
  MR_Word HeadVar__2_1,
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
  MR_Word STATE_VARIABLE_Info_0_60,
  MR_Word * STATE_VARIABLE_Info_61);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_6_p_0(
  MR_Word GiveVarsTypes_7,
  MR_String Prefix_8,
  MR_Word CtorArgRepns_9,
  MR_Word * Vars_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_loop_9_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word * STATE_VARIABLE_VarSet_7,
  MR_Word STATE_VARIABLE_VarTypes_0_8,
  MR_Word * STATE_VARIABLE_VarTypes_9);

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_arg_unify_goals_15_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__unify_proc__generate_arg_unify_goals_15_p_0(
  MR_Word UCParams_1,
  MR_Word TermType_2,
  MR_Word TermVarX_3,
  MR_Word TermVarY_4,
  MR_Integer ArgNum_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_PackedOps_0_10,
  MR_Word * STATE_VARIABLE_PackedOps_11,
  MR_Word STATE_VARIABLE_VarSet_0_12,
  MR_Word * STATE_VARIABLE_VarSet_13,
  MR_Word STATE_VARIABLE_VarTypes_0_14,
  MR_Word * STATE_VARIABLE_VarTypes_15);

static void MR_CALL 
check_hlds__unify_proc__may_we_start_packing_at_this_arg_unify_3_p_0(
  MR_Word UCParams_4,
  MR_Word CtorArgRepn_5,
  MR_Word * UnifyHow_6);

static MR_bool MR_CALL 
check_hlds__unify_proc__get_rest_of_word_12_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__unify_proc__get_rest_of_word_12_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__unify_proc__get_rest_of_word_12_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__unify_proc__get_rest_of_word_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__unify_proc__get_rest_of_word_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_ArgNum_0_3,
  MR_Integer * STATE_VARIABLE_ArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_VarSet_0_9,
  MR_Word * STATE_VARIABLE_VarSet_10,
  MR_Word STATE_VARIABLE_VarTypes_0_11,
  MR_Word * STATE_VARIABLE_VarTypes_12);

static void MR_CALL 
check_hlds__unify_proc__build_bulk_unify_foreign_proc_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word Ptag_15,
  MR_Word TermType_16,
  MR_Word TermVarX_17,
  MR_Word TermVarY_18,
  MR_Integer ArgNum_19,
  MR_Word CellOffset_20,
  MR_Word Context_21,
  MR_Word * Goals_22,
  MR_Word STATE_VARIABLE_VarSet_0_33,
  MR_Word * STATE_VARIABLE_VarSet_34,
  MR_Word STATE_VARIABLE_VarTypes_0_35,
  MR_Word * STATE_VARIABLE_VarTypes_36);

static void MR_CALL 
check_hlds__unify_proc__info_extract_4_p_0(
  MR_Word UPI_5,
  MR_Word * ModuleInfo_6,
  MR_Word * VarSet_7,
  MR_Word * VarTypes_8);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(
  MR_Word HeadVar__1_1,
  MR_String BaseName_2,
  MR_Integer Num_3,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_6_p_0(
  MR_Word SpecDefnInfo_7,
  MR_Word X_8,
  MR_Word Index_9,
  MR_Word * Clause_10,
  MR_Word STATE_VARIABLE_Info_0_30,
  MR_Word * STATE_VARIABLE_Info_31);

static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_du_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_du_7_p_0(
  MR_Word SpecDefnInfo_8,
  MR_Word CtorRepns_9,
  MR_Word X_10,
  MR_Word Index_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20);

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
  MR_Word STATE_VARIABLE_UPI_0_6,
  MR_Word * STATE_VARIABLE_UPI_7);

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
  MR_Word STATE_VARIABLE_Info_0_54,
  MR_Word * STATE_VARIABLE_Info_55);

static MR_Word MR_CALL 
check_hlds__unify_proc__compute_maybe_packable_args_locn_1_f_0(
  MR_Word ConsTag_3);

static void MR_CALL 
check_hlds__unify_proc__compute_exist_constraint_implications_3_p_0(
  MR_Word MaybeExistConstraints_4,
  MR_Word * ExistQTVars_5,
  MR_Word * GiveVarsTypes_6);

static void MR_CALL 
check_hlds__unify_proc__conjoin_arg_comparisons_16_p_0(
  MR_Word UCParams_17,
  MR_Word ConjoinKind_18,
  MR_Word TermType_19,
  MR_Word TermVarX_20,
  MR_Word TermVarY_21,
  MR_Word ResultVar_22,
  MR_Word MaybeAllArgs_23,
  MR_Integer NextArgNum_24,
  MR_Word SubCompareGoal_25,
  MR_Word * Goal_26,
  MR_Word * TailVarsX_27,
  MR_Word * TailVarsY_28,
  MR_Word STATE_VARIABLE_VarSet_0_44,
  MR_Word * STATE_VARIABLE_VarSet_45,
  MR_Word STATE_VARIABLE_VarTypes_0_46,
  MR_Word * STATE_VARIABLE_VarTypes_47);

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_arg_compare_goals_15_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__unify_proc__generate_arg_compare_goals_15_p_0(
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
  MR_Word STATE_VARIABLE_VarSet_0_12,
  MR_Word * STATE_VARIABLE_VarSet_13,
  MR_Word STATE_VARIABLE_VarTypes_0_14,
  MR_Word * STATE_VARIABLE_VarTypes_15);

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
check_hlds__unify_proc__get_bulk_comparable_packed_args_18_p_0_5(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_18_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_18_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_18_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_18_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_18_p_0(
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
  MR_Word STATE_VARIABLE_VarSet_0_15,
  MR_Word * STATE_VARIABLE_VarSet_16,
  MR_Word STATE_VARIABLE_VarTypes_0_17,
  MR_Word * STATE_VARIABLE_VarTypes_18);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_var_pair_11_p_0(
  MR_Word GiveVarsTypes_12,
  MR_String PrefixX_13,
  MR_String PrefixY_14,
  MR_Integer Num_15,
  MR_Word Type_16,
  MR_Word * VarX_17,
  MR_Word * VarY_18,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_VarTypes_0_24,
  MR_Word * STATE_VARIABLE_VarTypes_25);

static MR_Word MR_CALL 
check_hlds__unify_proc__fill_bulk_comparability_1_f_0(
  MR_Word Fill_3);

static void MR_CALL 
check_hlds__unify_proc__select_and_build_bulk_comparison_foreign_proc_17_p_0(
  MR_Word ModuleInfo_18,
  MR_Word ArgsLocn_19,
  MR_Word TermType_20,
  MR_Word TermVarX_21,
  MR_Word TermVarY_22,
  MR_Word CompareResultVar_23,
  MR_Word MaybeAllArgs_24,
  MR_Integer ArgNum_25,
  MR_Word CellOffset_26,
  MR_Word Shift_27,
  MR_Word NumBits_28,
  MR_Word Context_29,
  MR_Word * CompareConjGoal_30,
  MR_Word STATE_VARIABLE_VarSet_0_67,
  MR_Word * STATE_VARIABLE_VarSet_68,
  MR_Word STATE_VARIABLE_VarTypes_0_69,
  MR_Word * STATE_VARIABLE_VarTypes_70);

static void MR_CALL 
check_hlds__unify_proc__select_and_build_signed_comparison_foreign_proc_16_p_0(
  MR_Word ModuleInfo_17,
  MR_Word ArgsLocn_18,
  MR_Word TermType_19,
  MR_Word TermVarX_20,
  MR_Word TermVarY_21,
  MR_Word CompareResultVar_22,
  MR_Integer ArgNum_23,
  MR_Word CellOffset_24,
  MR_Word Shift_25,
  MR_String SizeStr_26,
  MR_Word Context_27,
  MR_Word * CompareConjGoal_28,
  MR_Word STATE_VARIABLE_VarSet_0_55,
  MR_Word * STATE_VARIABLE_VarSet_56,
  MR_Word STATE_VARIABLE_VarTypes_0_57,
  MR_Word * STATE_VARIABLE_VarTypes_58);

static void MR_CALL 
check_hlds__unify_proc__make_ptag_and_cell_offset_args_10_p_0(
  MR_Integer ArgNum_11,
  MR_Word Ptag_12,
  MR_Word CellOffset_13,
  MR_Word Context_14,
  MR_Word * Args_15,
  MR_Word * Goals_16,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27,
  MR_Word STATE_VARIABLE_VarTypes_0_28,
  MR_Word * STATE_VARIABLE_VarTypes_29);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_int_var_and_arg_10_p_0(
  MR_Word Context_11,
  MR_String Name_12,
  MR_Integer SuffixInt_13,
  MR_Integer Value_14,
  MR_Word * Arg_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word STATE_VARIABLE_VarTypes_0_23,
  MR_Word * STATE_VARIABLE_VarTypes_24);

static MR_Word MR_CALL 
check_hlds__unify_proc__pure_proc_foreign_attributes_0_f_0(void);

static void MR_CALL 
check_hlds__unify_proc__prepare_for_conjoining_arg_comparisons_9_p_0(
  MR_Word CtorArgRepns_10,
  MR_Integer ArgNum_11,
  MR_Word ResultVar_12,
  MR_Word * CurCompareResultVar_13,
  MR_Word * ConjoinKind_14,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_VarTypes_0_21,
  MR_Word * STATE_VARIABLE_VarTypes_22);

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

static MR_Box MR_CALL 
check_hlds__unify_proc__make_fresh_vars_for_cons_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_for_cons_args_5_p_0(
  MR_Word CtorArgs_6,
  MR_Word MaybeExistConstraints_7,
  MR_Word * Vars_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17);

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
check_hlds__unify_proc__info_get_module_info_2_p_0(
  MR_Word UPI_3,
  MR_Word * X_4);

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
check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(
  MR_Word Type_7,
  MR_String BaseName_8,
  MR_Integer Num_9,
  MR_Word * Var_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15);

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
check_hlds__unify_proc__info_new_var_4_p_0(
  MR_Word Type_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_UPI_0_12,
  MR_Word * STATE_VARIABLE_UPI_13);

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
check_hlds__unify_proc__info_new_named_var_5_p_0(
  MR_Word Type_6,
  MR_String Name_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_UPI_0_14,
  MR_Word * STATE_VARIABLE_UPI_15);

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
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

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


static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_1[7][2];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_2[5][1];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_4[2][4];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_5[3][3];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_6[1][11];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_7[7][5];

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_9[1][12];


/* sealed */ struct check_hlds__unify_proc__vector_common_type_3_0_s {
  const MR_String check_hlds__unify_proc__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct check_hlds__unify_proc__vector_common_type_3_0_s check_hlds__unify_proc_vector_common_3[20];

/* sealed */ struct check_hlds__unify_proc__vector_common_type_8_0_s {
  const MR_Word check_hlds__unify_proc__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct check_hlds__unify_proc__vector_common_type_8_0_s check_hlds__unify_proc_vector_common_8[8];



static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_1[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_2[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "16"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "32"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "8"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_4[2][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_5[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_4[0])),
    ((MR_Box) (check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_4[1])),
    ((MR_Box) (check_hlds__unify_proc__is_ctor_with_all_locally_packed_unsigned_args_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[2])),
    ((MR_Box) (check_hlds__unify_proc__make_fresh_vars_for_cons_args_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_6[1][11] = {
  /* row 0 */
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
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_packed_word_ops_0)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_packed_word_ops_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_subtype_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_subtype_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_uc_params_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cell_offset_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cell_offset_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__unify_proc__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&check_hlds__unify_proc__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
};

static /* final */ const MR_Box check_hlds__unify_proc_scalar_common_9[1][12] = {
  /* row 0 */
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
  /* row 0 */   {     (MR_String) "builtin_unify_int" },
  /* row 1 */   {     (MR_String) "builtin_unify_uint" },
  /* row 2 */   {     (MR_String) "builtin_unify_int8" },
  /* row 3 */   {     (MR_String) "builtin_unify_uint8" },
  /* row 4 */   {     (MR_String) "builtin_unify_int16" },
  /* row 5 */   {     (MR_String) "builtin_unify_uint16" },
  /* row 6 */   {     (MR_String) "builtin_unify_int32" },
  /* row 7 */   {     (MR_String) "builtin_unify_uint32" },
  /* row 8 */   {     (MR_String) "builtin_unify_int64" },
  /* row 9 */   {     (MR_String) "builtin_unify_uint64" },
  /* row 10 */   {     (MR_String) "builtin_compare_int" },
  /* row 11 */   {     (MR_String) "builtin_compare_uint" },
  /* row 12 */   {     (MR_String) "builtin_compare_int8" },
  /* row 13 */   {     (MR_String) "builtin_compare_uint8" },
  /* row 14 */   {     (MR_String) "builtin_compare_int16" },
  /* row 15 */   {     (MR_String) "builtin_compare_uint16" },
  /* row 16 */   {     (MR_String) "builtin_compare_int32" },
  /* row 17 */   {     (MR_String) "builtin_compare_uint32" },
  /* row 18 */   {     (MR_String) "builtin_compare_int64" },
  /* row 19 */   {     (MR_String) "builtin_compare_uint64" },
};

static /* final */ const struct check_hlds__unify_proc__vector_common_type_8_0_s check_hlds__unify_proc_vector_common_8[8] = {
  /* row 0 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 1 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__unify_proc_scalar_common_2[2])) },
  /* row 2 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__unify_proc_scalar_common_2[0])) },
  /* row 3 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__unify_proc_scalar_common_2[1])) },
  /* row 4 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 5 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 6 */   {     (MR_Word) ((MR_Unsigned) 0U) },
  /* row 7 */   {     (MR_Word) ((MR_Unsigned) 0U) },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__unify_proc__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_constructor_repn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)
  }
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

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_args_locn_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ptag_0)
};

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

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_args_locn_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_args_locn_0_0
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_args_locn_0_1[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_args_locn_0_1
};

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
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_args_locn_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_args_locn_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_args_locn_0,

};

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_bulk_comparability_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

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

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_bulk_comparability_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_bulk_comparability_0_1
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_bulk_comparability_0_1[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_bulk_comparability_0_0
};

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
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_bulk_comparability_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_bulk_comparability_0 },
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
  {
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_compare_conjoin_kind_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_conjoin_kind_0_0
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_compare_conjoin_kind_0_1[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_conjoin_kind_0_1
};

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
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_compare_conjoin_kind_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_compare_conjoin_kind_0 },
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

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_compare_how_0_1[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_how_0_2
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_compare_how_0_2[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_compare_how_0_3
};

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
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_compare_how_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_compare_how_0 },
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
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_linear_or_quad_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_linear_or_quad_0 },
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
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_maybe_all_args_in_word_so_far_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_maybe_all_args_in_word_so_far_0 },
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
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_maybe_allow_packed_unify_compare_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_maybe_allow_packed_unify_compare_0 },
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
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_maybe_compare_constants_as_ints_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_maybe_compare_constants_as_ints_0 },
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
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_maybe_give_vars_types_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_maybe_give_vars_types_0 },
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

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_maybe_packable_args_0_1[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_args_locn_0)
};

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

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_maybe_packable_args_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_maybe_packable_args_0_0
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_maybe_packable_args_0_1[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_maybe_packable_args_0_1
};

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
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_maybe_packable_args_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_maybe_packable_args_0 },
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
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_name_ordered_maybe_packed_word_ops_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__enum_ordinal_ordered_maybe_packed_word_ops_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_maybe_packed_word_ops_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_spec_pred_defn_info_0_0[8] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_body_0),
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_type_status_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
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

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_spec_pred_defn_info_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_spec_pred_defn_info_0_0
};

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

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_spec_pred_defn_info_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_spec_pred_defn_info_0_0
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_spec_pred_defn_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_spec_pred_defn_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____spec_pred_defn_info_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____spec_pred_defn_info_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "spec_pred_defn_info",
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_spec_pred_defn_info_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_spec_pred_defn_info_0 },
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

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_uc_options_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_uc_options_0_0
};

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

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_uc_options_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_uc_options_0_0
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_uc_options_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_uc_options_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____uc_options_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____uc_options_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "uc_options",
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_uc_options_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_uc_options_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_uc_options_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_uc_params_0_0[7] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
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

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_uc_params_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_uc_params_0_0
};

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

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_uc_params_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_uc_params_0_0
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_uc_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_uc_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____uc_params_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____uc_params_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "uc_params",
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_uc_params_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_uc_params_0 },
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

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_how_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_how_0_0
};

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_how_0_1[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_how_0_1
};

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
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_how_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_how_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_how_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__unify_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__unify_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__unify_proc__check_hlds__unify_proc__field_types_unify_proc_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0),
  (MR_PseudoTypeInfo) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_maybe_packed_word_ops_0)
};

static const MR_ConstString check_hlds__unify_proc__check_hlds__unify_proc__field_names_unify_proc_info_0_0[5] = {
  (MR_String) "upi_module_info",
  (MR_String) "upi_varset",
  (MR_String) "upi_vartypes",
  (MR_String) "upi_rtti_varmaps",
  (MR_String) "upi_packed_ops"
};

static const MR_DuArgLocn check_hlds__unify_proc__check_hlds__unify_proc__field_locns_unify_proc_info_0_0[5] = {
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0 = {
  (MR_String) "unify_proc_info",
  INT16_C(5),
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

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_stag_ordered_unify_proc_info_0_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0
};

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

static const MR_DuFunctorDescPtr check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_info_0[1] = {
  &check_hlds__unify_proc__check_hlds__unify_proc__du_functor_desc_unify_proc_info_0_0
};

static const MR_Integer check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__unify_proc____Unify____unify_proc_info_0_0_10001)),
  ((MR_Box) (check_hlds__unify_proc____Compare____unify_proc_info_0_0_10001)),
  (MR_String) "check_hlds.unify_proc",
  (MR_String) "unify_proc_info",
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_name_ordered_unify_proc_info_0 },
  {     check_hlds__unify_proc__check_hlds__unify_proc__du_ptag_ordered_unify_proc_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__unify_proc__check_hlds__unify_proc__functor_number_map_unify_proc_info_0,

};

static MR_Word MR_CALL 
check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars_for_cons_args__2867__1_1_f_0(
  MR_Word LambdaHeadVar__1_20)
{
  {
    MR_Word LambdaHeadVar__2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_20, (MR_Integer) 1))));

    return LambdaHeadVar__2_21;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2262__2_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_156)
{
  {
    MR_bool succeeded;
    MR_Integer Var_249 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Var_250 = (MR_Integer) (ArgCellOffset_156);

    succeeded = (Var_249 == Var_250);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2254__1_2_p_0(
  MR_Integer ShiftInt0_69,
  MR_Integer HeadVar__2_112)
{
  {
    MR_bool succeeded = (HeadVar__2_112 == ShiftInt0_69);

    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2262__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_64)
{
  {
    MR_bool succeeded;
    MR_Integer Var_249 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Var_250 = (MR_Integer) (ArgCellOffset_64);

    succeeded = (Var_249 == Var_250);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__is_ctor_with_all_locally_packed_unsigned_args__1360__1_1_p_0(
  MR_Word LambdaHeadVar__1_35)
{
  {
    MR_bool succeeded;
    MR_Word ArgPosWidth_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_35, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) ArgPosWidth_19)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_19, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Fill_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_19, (MR_Integer) 6))) & (MR_Integer) 7);

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
              MR_Word Fill_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_19, (MR_Integer) 6))) & (MR_Integer) 7);

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
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_compare_proc_body_du__1245__1_2_p_0(
  MR_Word CtorRepns_10,
  MR_Word HeadVar__2_54)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[2]), ((MR_Box) (CtorRepns_10)), ((MR_Box) (HeadVar__2_54)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_compare_proc_body__1006__1_2_p_0(
  MR_Word MaybeSuperType_32,
  MR_Word HeadVar__2_52)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____maybe_subtype_0_0(MaybeSuperType_32, HeadVar__2_52);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_rest_of_word__902__2_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_104)
{
  {
    MR_bool succeeded;
    MR_Integer Var_133 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Var_134 = (MR_Integer) (ArgCellOffset_104);

    succeeded = (Var_133 == Var_134);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__get_rest_of_word__902__1_2_p_0(
  MR_Word HeadVar__2_2,
  MR_Word ArgCellOffset_36)
{
  {
    MR_bool succeeded;
    MR_Integer Var_133 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Var_134 = (MR_Integer) (ArgCellOffset_36);

    succeeded = (Var_133 == Var_134);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body_du__647__1_2_p_0(
  MR_Word HeadVar__1_84,
  MR_Word HeadVar__2_85)
{
  {
    MR_bool succeeded = (HeadVar__1_84 == HeadVar__2_85);

    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body_du__592__1_1_p_0(
  MR_Word LambdaHeadVar__1_51)
{
  {
    MR_bool succeeded;
    MR_Word ConsTag_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_51, (MR_Integer) 3))));
    MR_Word CtorArgRepns_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_51, (MR_Integer) 4))));

    if ((CtorArgRepns_22 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      succeeded = ((((MR_tag((MR_Word) ConsTag_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_21, (MR_Integer) 0)))) == (MR_Integer) 12)));
      if (succeeded)
      {
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body__249__1_2_p_0(
  MR_Word MaybeSuperType_31,
  MR_Word HeadVar__2_53)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____maybe_subtype_0_0(MaybeSuperType_31, HeadVar__2_53);
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0(
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
      MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[6]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Integer Var_25 = (MR_Integer) (ArgX5_16);
              MR_Integer Var_26 = (MR_Integer) (ArgY5_17);

              succeeded = (Var_25 < Var_26);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_25 > Var_26);
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

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0(
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
      MR_Word TypeInfo_16_16;
      MR_Word TypeCtorInfo_17_17;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) (&check_hlds__unify_proc_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeCtorInfo_17_17 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
          succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
              succeeded = (ArgX5_11 == ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_how_0_0(
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
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_how_0_0(
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
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;
      MR_Integer Var_12;
      MR_Integer Var_13;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
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
}

static void MR_CALL 
check_hlds__unify_proc____Compare____uc_params_0_0(
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
      MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX7_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word ArgY7_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__term____Compare____context_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
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
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____uc_params_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX7_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 1);
      MR_Word ArgY7_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = mercury__term____Unify____context_0_0(ArgX2_5, ArgY2_6);
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
}

static void MR_CALL 
check_hlds__unify_proc____Compare____uc_options_0_0(
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
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
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
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____uc_options_0_0(
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
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__unify_proc____Compare____spec_pred_defn_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
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
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
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
                    mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX8_25, ArgY8_26);
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
check_hlds__unify_proc____Unify____spec_pred_defn_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
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
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));

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
                    succeeded = mercury__term____Unify____context_0_0(ArgX8_17, ArgY8_18);
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

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_packed_word_ops_0_0(
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
check_hlds__unify_proc____Unify____maybe_packed_word_ops_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_packable_args_0_0(
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
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        check_hlds__unify_proc____Compare____args_locn_0_0(HeadVar__1_1, Var_11, ArgY1_7);
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_packable_args_0_0(
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
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = check_hlds__unify_proc____Unify____args_locn_0_0(ArgX1_5, ArgY1_6);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_give_vars_types_0_0(
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
check_hlds__unify_proc____Unify____maybe_give_vars_types_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_compare_constants_as_ints_0_0(
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
check_hlds__unify_proc____Unify____maybe_compare_constants_as_ints_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_allow_packed_unify_compare_0_0(
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
check_hlds__unify_proc____Unify____maybe_allow_packed_unify_compare_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_all_args_in_word_so_far_0_0(
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
check_hlds__unify_proc____Unify____maybe_all_args_in_word_so_far_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0(
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
check_hlds__unify_proc____Unify____linear_or_quad_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____compare_how_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
            MR_String Var_88 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
            MR_Word Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                  MR_String ArgY4_38 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
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
            MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
            MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_64 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_67 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_70 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word ArgY4_73 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));
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
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____compare_how_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_10;
            MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_12;
            MR_String ArgX4_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
            MR_String ArgY4_14;
            MR_Integer Var_36;
            MR_Integer Var_37;
            MR_Integer Var_38;
            MR_Integer Var_39;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
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
            MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_16;
            MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_18;
            MR_Word ArgX3_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_20;
            MR_Word ArgX4_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
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
              ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
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
}

static void MR_CALL 
check_hlds__unify_proc____Compare____compare_conjoin_kind_0_0(
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
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
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
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____compare_conjoin_kind_0_0(
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
      MR_Word TypeInfo_14_14;
      MR_Word TypeInfo_15_15;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_10;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
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
}

static void MR_CALL 
check_hlds__unify_proc____Compare____bulk_comparability_0_0(
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
      MR_String Var_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_11, ArgY1_5);
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____bulk_comparability_0_0(
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
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____args_locn_0_0(
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
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
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
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____args_locn_0_0(
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
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      uint8_t Var_10;
      uint8_t Var_11;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        Var_10 = (uint8_t) (ArgX1_5);
        Var_11 = (uint8_t) (ArgY1_6);
        succeeded = (Var_10 == Var_11);
      }
    }
    return succeeded;
  }
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
  {
    MR_Word MaybeExistConstraints_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_13, (MR_Integer) 1))));
    MR_Word FunctorName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_13, (MR_Integer) 2))));
    MR_Word ArgRepns_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_13, (MR_Integer) 4))));
    MR_Integer FunctorArity_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CtorRepn_13, (MR_Integer) 5))));
    MR_Word TypeCtor_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_10, (MR_Integer) 4))));
    MR_Word FunctorConsId_25;
    MR_Word ArgVars_26;
    MR_Word Context_27;
    MR_Word GoalUnifyX_28;
    MR_Word UnifyIndexGoal_29;
    MR_Word GoalList_30;
    MR_Word GoalInfo0_31;
    MR_Word GoalInfo_32;
    MR_Word Var_38;
    MR_Word Var_44;

    {
      FunctorConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FunctorConsId_25, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), FunctorConsId_25, 1) = ((MR_Box) (FunctorName_19));
      MR_hl_field(MR_mktag(3), FunctorConsId_25, 2) = ((MR_Box) (FunctorArity_22));
      MR_hl_field(MR_mktag(3), FunctorConsId_25, 3) = ((MR_Box) (TypeCtor_24));
    }
    check_hlds__unify_proc__make_fresh_vars_for_cons_args_5_p_0(ArgRepns_21, MaybeExistConstraints_18, &ArgVars_26, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36);
    Context_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_10, (MR_Integer) 7))));
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (FunctorConsId_25));
      MR_hl_field(MR_mktag(1), Var_38, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), Var_38, 2) = ((MR_Box) (ArgVars_26));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_11, Var_38, Context_27, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyX_28);
    hlds__make_goal__make_int_const_construction_4_p_0(Context_27, Index_12, STATE_VARIABLE_N_0_33, &UnifyIndexGoal_29);
    *STATE_VARIABLE_N_34 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_33 + (MR_Unsigned) 1);
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (UnifyIndexGoal_29));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      GoalList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalList_30, 0) = ((MR_Box) (GoalUnifyX_28));
      MR_hl_field(MR_mktag(1), GoalList_30, 1) = ((MR_Box) (Var_44));
    }
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_31);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_27, GoalInfo0_31, &GoalInfo_32);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_30, GoalInfo_32, Goal_14);
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_du_unify_case_8_p_0(
  MR_Word SpecDefnInfo_9,
  MR_Word UCOptions_10,
  MR_Word X_11,
  MR_Word Y_12,
  MR_Word CtorRepn_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_Info_0_60,
  MR_Word * STATE_VARIABLE_Info_61)
{
  {
    MR_bool succeeded;
    MR_Word MaybeExistConstraints_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_13, (MR_Integer) 1))));
    MR_Word FunctorName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_13, (MR_Integer) 2))));
    MR_Word ConsTag_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_13, (MR_Integer) 3))));
    MR_Word CtorArgRepns_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_13, (MR_Integer) 4))));
    MR_Integer FunctorArity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CtorRepn_13, (MR_Integer) 5))));
    MR_Word TypeCtor_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_9, (MR_Integer) 4))));
    MR_Word FunctorConsId_25;
    MR_Word Context_26;
    MR_Word ExistQTVars_27;
    MR_Word GiveVarsTypes_28;
    MR_Word GoalList_42;
    MR_Word GoalInfo_59;
    MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_23, (MR_Integer) 0))));
    MR_String Var_63;
    MR_Word RHSVars_29;
    MR_Word STATE_VARIABLE_Info_67_67;
    MR_Word Var_154;
    MR_Word Var_155;

    succeeded = ((MR_tag((MR_Word) Var_62)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_63 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_62, (MR_Integer) 0))));
      succeeded = (strcmp(Var_63, (MR_String) "{}") == 0);
    }
    if (succeeded)
      {
        FunctorConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), FunctorConsId_25, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), FunctorConsId_25, 1) = ((MR_Box) (FunctorArity_21));
      }
    else
      {
        FunctorConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), FunctorConsId_25, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), FunctorConsId_25, 1) = ((MR_Box) (FunctorName_18));
        MR_hl_field(MR_mktag(3), FunctorConsId_25, 2) = ((MR_Box) (FunctorArity_21));
        MR_hl_field(MR_mktag(3), FunctorConsId_25, 3) = ((MR_Box) (TypeCtor_23));
      }
    Context_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_9, (MR_Integer) 7))));
    check_hlds__unify_proc__compute_exist_constraint_implications_3_p_0(MaybeExistConstraints_17, &ExistQTVars_27, &GiveVarsTypes_28);
    Var_155 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UCOptions_10, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    Var_154 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UCOptions_10, (MR_Integer) 0))) & (MR_Integer) 1);
    if ((CtorArgRepns_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (Var_155 == (MR_Integer) 1);
      if (succeeded)
      {
        RHSVars_29 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_67_67 = STATE_VARIABLE_Info_0_60;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_String Var_65;
      MR_Word STATE_VARIABLE_Info_66_66;
      MR_Word Var_68;
      MR_Word Var_120;
      MR_Word Var_121;
      MR_Word Var_122;
      MR_Word Var_123;

      succeeded = ((((MR_tag((MR_Word) ConsTag_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_19, (MR_Integer) 0)))) == (MR_Integer) 12)));
      if (succeeded)
      {
        succeeded = (Var_154 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_65 = (MR_String) "_Arg";
          check_hlds__unify_proc__make_fresh_vars_6_p_0(GiveVarsTypes_28, Var_65, CtorArgRepns_20, &RHSVars_29, STATE_VARIABLE_Info_0_60, &STATE_VARIABLE_Info_66_66);
          Var_68 = (MR_Integer) 1;
          Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_66_66, (MR_Integer) 0))));
          Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_66_66, (MR_Integer) 1))));
          Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_66_66, (MR_Integer) 2))));
          Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_66_66, (MR_Integer) 3))));
          {
            STATE_VARIABLE_Info_67_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, 0) = ((MR_Box) (Var_120));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, 1) = ((MR_Box) (Var_121));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, 2) = ((MR_Box) (Var_122));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, 3) = ((MR_Box) (Var_123));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_67_67, 4) = (MR_Box) ((MR_Unsigned) (Var_68));
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
      MR_Word Var_73;
      MR_Word STATE_VARIABLE_Info_75_75;
      MR_Word Var_76;
      MR_Word Var_83;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;

      {
        RHS_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHS_33, 0) = ((MR_Box) (FunctorConsId_25));
        MR_hl_field(MR_mktag(1), RHS_33, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHS_33, 2) = ((MR_Box) (RHSVars_29));
      }
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_11, RHS_33, Context_26, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyX_34);
      Var_73 = parse_tree__builtin_lib_types__int_type_0_f_0();
      check_hlds__unify_proc__info_new_named_var_5_p_0(Var_73, (MR_String) "CastX", &CastX_35, STATE_VARIABLE_Info_67_67, &STATE_VARIABLE_Info_75_75);
      Var_76 = parse_tree__builtin_lib_types__int_type_0_f_0();
      check_hlds__unify_proc__info_new_named_var_5_p_0(Var_76, (MR_String) "CastY", &CastY_36, STATE_VARIABLE_Info_75_75, STATE_VARIABLE_Info_61);
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, X_11, CastX_35, Context_26, &CastXGoal0_37);
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Y_12, CastY_36, Context_26, &CastYGoal0_38);
      hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 13, CastXGoal0_37, &CastXGoal_39);
      hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 13, CastYGoal0_38, &CastYGoal_40);
      {
        Var_83 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (CastX_35));
      }
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(CastY_36, Var_83, Context_26, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyY_41);
      {
        Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (GoalUnifyY_41));
        MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (CastYGoal_40));
        MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_88));
      }
      {
        Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (CastXGoal_39));
        MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_87));
      }
      {
        GoalList_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalList_42, 0) = ((MR_Box) (GoalUnifyX_34));
        MR_hl_field(MR_mktag(1), GoalList_42, 1) = ((MR_Box) (Var_86));
      }
    }
    else
    {
      MR_Word MaybePackableArgsLocn_43;
      MR_Word ModuleInfo_44;
      MR_Word UCParams_45;
      MR_Word VarSet0_46;
      MR_Word VarTypes0_47;
      MR_Word PackedOps0_48;
      MR_Word TermType_49;
      MR_Word UnifyArgsGoals_51;
      MR_Word VarsX_52;
      MR_Word VarsY_53;
      MR_Word PackedOps_54;
      MR_Word VarSet_55;
      MR_Word VarTypes_56;
      MR_Word RHSX_57;
      MR_Word RHSY_58;
      MR_Word Var_90;
      MR_Word Var_101;
      MR_Word GoalUnifyX_102;
      MR_Word GoalUnifyY_103;
      MR_Word Var_125;
      MR_Word Var_139;
      MR_Word Var_142;

      MaybePackableArgsLocn_43 = check_hlds__unify_proc__compute_maybe_packable_args_locn_1_f_0(ConsTag_19);
      check_hlds__unify_proc__info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_60, &ModuleInfo_44);
      Var_90 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UCOptions_10, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      Var_125 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UCOptions_10, (MR_Integer) 0))) & (MR_Integer) 1);
      {
        UCParams_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), UCParams_45, 0) = ((MR_Box) (ModuleInfo_44));
        MR_hl_field(MR_mktag(0), UCParams_45, 1) = ((MR_Box) (Context_26));
        MR_hl_field(MR_mktag(0), UCParams_45, 2) = ((MR_Box) (ExistQTVars_27));
        MR_hl_field(MR_mktag(0), UCParams_45, 3) = ((MR_Box) (MaybePackableArgsLocn_43));
        MR_hl_field(MR_mktag(0), UCParams_45, 4) = (MR_Box) (((((MR_Unsigned) (GiveVarsTypes_28) << 2)) | (((((MR_Unsigned) (Var_90) << 1)) | (MR_Unsigned) (Var_125)))));
      }
      VarSet0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_60, (MR_Integer) 1))));
      VarTypes0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_60, (MR_Integer) 2))));
      PackedOps0_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_60, (MR_Integer) 4))) & (MR_Integer) 1);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_47, X_11, &TermType_49);
      check_hlds__unify_proc__generate_arg_unify_goals_15_p_0(UCParams_45, TermType_49, X_11, Y_12, (MR_Integer) 1, CtorArgRepns_20, &UnifyArgsGoals_51, &VarsX_52, &VarsY_53, PackedOps0_48, &PackedOps_54, VarSet0_46, &VarSet_55, VarTypes0_47, &VarTypes_56);
      Var_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_60, (MR_Integer) 0))));
      Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_60, (MR_Integer) 3))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_61 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_139));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarSet_55));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_56));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_142));
        MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (PackedOps_54));
      }
      {
        RHSX_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHSX_57, 0) = ((MR_Box) (FunctorConsId_25));
        MR_hl_field(MR_mktag(1), RHSX_57, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHSX_57, 2) = ((MR_Box) (VarsX_52));
      }
      {
        RHSY_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHSY_58, 0) = ((MR_Box) (FunctorConsId_25));
        MR_hl_field(MR_mktag(1), RHSY_58, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHSY_58, 2) = ((MR_Box) (VarsY_53));
      }
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_11, RHSX_57, Context_26, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyX_102);
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Y_12, RHSY_58, Context_26, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyY_103);
      {
        Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (GoalUnifyY_103));
        MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (UnifyArgsGoals_51));
      }
      {
        GoalList_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalList_42, 0) = ((MR_Box) (GoalUnifyX_102));
        MR_hl_field(MR_mktag(1), GoalList_42, 1) = ((MR_Box) (Var_101));
      }
    }
    hlds__hlds_goal__goal_info_init_2_p_0(Context_26, &GoalInfo_59);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_42, GoalInfo_59, Goal_14);
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_6_p_0(
  MR_Word GiveVarsTypes_7,
  MR_String Prefix_8,
  MR_Word CtorArgRepns_9,
  MR_Word * Vars_10,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word VarSet0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 1))));
    MR_Word VarTypes0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 2))));
    MR_Word VarSet_14;
    MR_Word VarTypes_15;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;

    check_hlds__unify_proc__make_fresh_vars_loop_9_p_0(GiveVarsTypes_7, Prefix_8, (MR_Integer) 1, CtorArgRepns_9, Vars_10, VarSet0_12, &VarSet_14, VarTypes0_13, &VarTypes_15);
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 0))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 3))));
    Var_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 4))) & (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarSet_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (Var_33));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_loop_9_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word * STATE_VARIABLE_VarSet_7,
  MR_Word STATE_VARIABLE_VarTypes_0_8,
  MR_Word * STATE_VARIABLE_VarTypes_9)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTypes_9 = STATE_VARIABLE_VarTypes_0_8;
    *STATE_VARIABLE_VarSet_7 = STATE_VARIABLE_VarSet_0_6;
  }
  else
  {
    MR_Word CtorArgRepn_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word CtorArgRepns_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Var_24;
    MR_Word Vars_25;
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_22, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_VarSet_33_33;
    MR_Word STATE_VARIABLE_VarTypes_34_34;
    MR_Integer Var_35;
    MR_String NumStr_53;
    MR_String Var_54;

    NumStr_53 = mercury__string__int_to_string_1_f_0(HeadVar__3_3);
    Var_54 = mercury__string__f_43_43_2_f_0(HeadVar__2_2, NumStr_53);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_54, &Var_24, STATE_VARIABLE_VarSet_0_6, &STATE_VARIABLE_VarSet_33_33);
    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_VarTypes_34_34 = STATE_VARIABLE_VarTypes_0_8;
        break;
      case (MR_Integer) 1:
        hlds__vartypes__add_var_type_4_p_0(Var_24, Var_32, STATE_VARIABLE_VarTypes_0_8, &STATE_VARIABLE_VarTypes_34_34);
        break;
    }
    Var_35 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) 1);
    check_hlds__unify_proc__make_fresh_vars_loop_9_p_0(HeadVar__1_1, HeadVar__2_2, Var_35, CtorArgRepns_23, &Vars_25, STATE_VARIABLE_VarSet_33_33, STATE_VARIABLE_VarSet_7, STATE_VARIABLE_VarTypes_34_34, STATE_VARIABLE_VarTypes_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars_25));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_arg_unify_goals_15_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_arg_unify_goals_15_p_0(
  MR_Word UCParams_1,
  MR_Word TermType_2,
  MR_Word TermVarX_3,
  MR_Word TermVarY_4,
  MR_Integer ArgNum_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9,
  MR_Word STATE_VARIABLE_PackedOps_0_10,
  MR_Word * STATE_VARIABLE_PackedOps_11,
  MR_Word STATE_VARIABLE_VarSet_0_12,
  MR_Word * STATE_VARIABLE_VarSet_13,
  MR_Word STATE_VARIABLE_VarTypes_0_14,
  MR_Word * STATE_VARIABLE_VarTypes_15)
{
  {
    MR_bool succeeded;

    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_VarTypes_15 = STATE_VARIABLE_VarTypes_0_14;
      *STATE_VARIABLE_VarSet_13 = STATE_VARIABLE_VarSet_0_12;
      *STATE_VARIABLE_PackedOps_11 = STATE_VARIABLE_PackedOps_0_10;
    }
    else
    {
      MR_Word CtorArgRepn_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word CtorArgRepns_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word UnifyHow_43;
      MR_Word GiveVarsTypes_44;
      MR_Word Var_122;
      MR_Word Var_123;

      check_hlds__unify_proc__may_we_start_packing_at_this_arg_unify_3_p_0(UCParams_1, CtorArgRepn_35, &UnifyHow_43);
      Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UCParams_1, (MR_Integer) 0))));
      Var_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UCParams_1, (MR_Integer) 1))));
      GiveVarsTypes_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UCParams_1, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
      if ((UnifyHow_43 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Type_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_35, (MR_Integer) 1))));
        MR_Word IsDummy_47;
        MR_Word HeadVarX_48;
        MR_Word HeadVarY_49;
        MR_Word TailVarsX_50;
        MR_Word TailVarsY_51;

        IsDummy_47 = check_hlds__type_util__is_type_a_dummy_2_f_0(Var_122, Type_45);
        switch (IsDummy_47) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word STATE_VARIABLE_VarSet_107_107;
              MR_Word STATE_VARIABLE_VarTypes_108_108;
              MR_Integer Var_109;

              check_hlds__unify_proc__make_fresh_var_pair_11_p_0(GiveVarsTypes_44, (MR_String) "_ArgX", (MR_String) "_ArgY", ArgNum_5, Type_45, &HeadVarX_48, &HeadVarY_49, STATE_VARIABLE_VarSet_0_12, &STATE_VARIABLE_VarSet_107_107, STATE_VARIABLE_VarTypes_0_14, &STATE_VARIABLE_VarTypes_108_108);
              Var_109 = (MR_Integer) ((MR_Unsigned) ArgNum_5 + (MR_Unsigned) 1);
              check_hlds__unify_proc__generate_arg_unify_goals_15_p_0(UCParams_1, TermType_2, TermVarX_3, TermVarY_4, Var_109, CtorArgRepns_36, HeadVar__7_7, &TailVarsX_50, &TailVarsY_51, STATE_VARIABLE_PackedOps_0_10, STATE_VARIABLE_PackedOps_11, STATE_VARIABLE_VarSet_107_107, STATE_VARIABLE_VarSet_13, STATE_VARIABLE_VarTypes_108_108, STATE_VARIABLE_VarTypes_15);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Context_52;
              MR_Word HeadGoal_53;
              MR_Word TailGoals_54;
              MR_Word STATE_VARIABLE_VarSet_90_90;
              MR_Word STATE_VARIABLE_VarTypes_91_91;
              MR_Integer Var_100;

              check_hlds__unify_proc__make_fresh_var_pair_11_p_0(GiveVarsTypes_44, (MR_String) "ArgX", (MR_String) "ArgY", ArgNum_5, Type_45, &HeadVarX_48, &HeadVarY_49, STATE_VARIABLE_VarSet_0_12, &STATE_VARIABLE_VarSet_90_90, STATE_VARIABLE_VarTypes_0_14, &STATE_VARIABLE_VarTypes_91_91);
              Context_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UCParams_1, (MR_Integer) 1))));
              succeeded = check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(UCParams_1, Type_45);
              if (succeeded)
              {
                MR_Word Var_92;
                MR_Word Var_94;
                MR_Word Var_95;

                Var_92 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                {
                  Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (HeadVarY_49));
                  MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (HeadVarX_48));
                  MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_95));
                }
                check_hlds__unify_proc__build_simple_call_6_p_0(Var_122, Var_92, (MR_String) "typed_unify", Var_94, Context_52, &HeadGoal_53);
              }
              else
              {
                MR_Word Var_97;

                {
                  Var_97 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (HeadVarY_49));
                }
                hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(HeadVarX_48, Var_97, Context_52, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &HeadGoal_53);
              }
              Var_100 = (MR_Integer) ((MR_Unsigned) ArgNum_5 + (MR_Unsigned) 1);
              check_hlds__unify_proc__generate_arg_unify_goals_15_p_0(UCParams_1, TermType_2, TermVarX_3, TermVarY_4, Var_100, CtorArgRepns_36, &TailGoals_54, &TailVarsX_50, &TailVarsY_51, STATE_VARIABLE_PackedOps_0_10, STATE_VARIABLE_PackedOps_11, STATE_VARIABLE_VarSet_90_90, STATE_VARIABLE_VarSet_13, STATE_VARIABLE_VarTypes_91_91, STATE_VARIABLE_VarTypes_15);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__7_7 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadGoal_53));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailGoals_54));
              }
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVarX_48));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVarsX_50));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__9_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVarY_49));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVarsY_51));
        }
      }
      else
      {
        MR_Word ArgsLocn_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnifyHow_43, (MR_Integer) 0))));
        MR_Word CellOffset_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnifyHow_43, (MR_Integer) 1))));
        MR_Word Ptag_57;
        MR_Integer LeftOverArgNum_58;
        MR_Word LeftOverCtorArgRepns_59;
        MR_Word RestOfWordVarsX_60;
        MR_Word RestOfWordVarsY_61;
        MR_Word HeadGoals_62;
        MR_Word Var_72;
        MR_Word STATE_VARIABLE_VarSet_77_77;
        MR_Word STATE_VARIABLE_VarTypes_78_78;
        MR_Word STATE_VARIABLE_VarSet_79_79;
        MR_Word STATE_VARIABLE_VarTypes_80_80;
        MR_Word STATE_VARIABLE_VarSet_81_81;
        MR_Word STATE_VARIABLE_VarTypes_82_82;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Type_114;
        MR_Word ModuleInfo_115;
        MR_Word HeadVarX_116;
        MR_Word HeadVarY_117;
        MR_Word TailVarsX_118;
        MR_Word TailVarsY_119;
        MR_Word TailGoals_121;

        if ((ArgsLocn_55 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_arg_unify_goals\'/15", (MR_String) "args_local");
            return;
          }
        else
          Ptag_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgsLocn_55, (MR_Integer) 0))));
        Type_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_35, (MR_Integer) 1))));
        {
          Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[3]));
          MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (check_hlds__unify_proc__generate_arg_unify_goals_15_p_0_1));
          MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (UCParams_1));
          MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) (Type_114));
        }
        mercury__require__expect_not_3_p_0(Var_72, (MR_String) "predicate \140check_hlds.unify_proc.generate_arg_unify_goals\'/15", (MR_String) "sub-word-size argument of existential type");
        check_hlds__unify_proc__make_fresh_var_pair_11_p_0(GiveVarsTypes_44, (MR_String) "_ArgX", (MR_String) "_ArgY", ArgNum_5, Type_114, &HeadVarX_116, &HeadVarY_117, STATE_VARIABLE_VarSet_0_12, &STATE_VARIABLE_VarSet_77_77, STATE_VARIABLE_VarTypes_0_14, &STATE_VARIABLE_VarTypes_78_78);
        check_hlds__unify_proc__get_rest_of_word_12_p_0(UCParams_1, CellOffset_56, ArgNum_5, &LeftOverArgNum_58, CtorArgRepns_36, &LeftOverCtorArgRepns_59, &RestOfWordVarsX_60, &RestOfWordVarsY_61, STATE_VARIABLE_VarSet_77_77, &STATE_VARIABLE_VarSet_79_79, STATE_VARIABLE_VarTypes_78_78, &STATE_VARIABLE_VarTypes_80_80);
        ModuleInfo_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UCParams_1, (MR_Integer) 0))));
        check_hlds__unify_proc__build_bulk_unify_foreign_proc_13_p_0(ModuleInfo_115, Ptag_57, TermType_2, TermVarX_3, TermVarY_4, ArgNum_5, CellOffset_56, Var_123, &HeadGoals_62, STATE_VARIABLE_VarSet_79_79, &STATE_VARIABLE_VarSet_81_81, STATE_VARIABLE_VarTypes_80_80, &STATE_VARIABLE_VarTypes_82_82);
        check_hlds__unify_proc__generate_arg_unify_goals_15_p_0(UCParams_1, TermType_2, TermVarX_3, TermVarY_4, LeftOverArgNum_58, LeftOverCtorArgRepns_59, &TailGoals_121, &TailVarsX_118, &TailVarsY_119, (MR_Integer) 1, STATE_VARIABLE_PackedOps_11, STATE_VARIABLE_VarSet_81_81, STATE_VARIABLE_VarSet_13, STATE_VARIABLE_VarTypes_82_82, STATE_VARIABLE_VarTypes_15);
        *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadGoals_62, TailGoals_121);
        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (HeadVarX_116));
          MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (RestOfWordVarsX_60));
        }
        *HeadVar__8_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), Var_86, TailVarsX_118);
        {
          Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (HeadVarY_117));
          MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (RestOfWordVarsY_61));
        }
        *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), Var_87, TailVarsY_119);
      }
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__may_we_start_packing_at_this_arg_unify_3_p_0(
  MR_Word UCParams_4,
  MR_Word CtorArgRepn_5,
  MR_Word * UnifyHow_6)
{
  {
    MR_Word AllowPackedUnifyCompare_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UCParams_4, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UCParams_4, (MR_Integer) 3))));

    switch (AllowPackedUnifyCompare_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        if ((Var_32 == (MR_Word) ((MR_Unsigned) 0U)))
          *UnifyHow_6 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word ArgsLocn_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0))));
          MR_Word ArgPosWidth_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_5, (MR_Integer) 2))));

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
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word CellOffset_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *UnifyHow_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgsLocn_9));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CellOffset_17));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word CellOffset_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *UnifyHow_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgsLocn_9));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CellOffset_44));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word CellOffset_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 2))));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *UnifyHow_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgsLocn_9));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CellOffset_28));
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
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_rest_of_word_12_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__unify_proc__IntroducedFrom__pred__get_rest_of_word__902__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_rest_of_word_12_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_rest_of_word_12_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__unify_proc__IntroducedFrom__pred__get_rest_of_word__902__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_rest_of_word_12_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc__get_rest_of_word_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer STATE_VARIABLE_ArgNum_0_3,
  MR_Integer * STATE_VARIABLE_ArgNum_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_VarSet_0_9,
  MR_Word * STATE_VARIABLE_VarSet_10,
  MR_Word STATE_VARIABLE_VarTypes_0_11,
  MR_Word * STATE_VARIABLE_VarTypes_12)
{
  {
    MR_bool succeeded;

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_VarTypes_12 = STATE_VARIABLE_VarTypes_0_11;
      *STATE_VARIABLE_VarSet_10 = STATE_VARIABLE_VarSet_0_9;
      *STATE_VARIABLE_ArgNum_4 = STATE_VARIABLE_ArgNum_0_3;
    }
    else
    {
      MR_Word CtorArgRepn_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word CtorArgRepns_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word ArgPosWidth_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_27, (MR_Integer) 2))));
      MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_27, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) ArgPosWidth_34)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__6_6 = HeadVar__5_5;
            *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_ArgNum_4 = STATE_VARIABLE_ArgNum_0_3;
            *STATE_VARIABLE_VarSet_10 = STATE_VARIABLE_VarSet_0_9;
            *STATE_VARIABLE_VarTypes_12 = STATE_VARIABLE_VarTypes_0_11;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *HeadVar__6_6 = HeadVar__5_5;
            *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_ArgNum_4 = STATE_VARIABLE_ArgNum_0_3;
            *STATE_VARIABLE_VarSet_10 = STATE_VARIABLE_VarSet_0_9;
            *STATE_VARIABLE_VarTypes_12 = STATE_VARIABLE_VarTypes_0_11;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_34, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *HeadVar__6_6 = HeadVar__5_5;
                *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
                *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_ArgNum_4 = STATE_VARIABLE_ArgNum_0_3;
                *STATE_VARIABLE_VarSet_10 = STATE_VARIABLE_VarSet_0_9;
                *STATE_VARIABLE_VarTypes_12 = STATE_VARIABLE_VarTypes_0_11;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgCellOffset_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_34, (MR_Integer) 2))));
                MR_Word GiveVarsTypes_106;
                MR_Word HeadVarX_107;
                MR_Word HeadVarY_108;
                MR_Word TailVarsX_109;
                MR_Word TailVarsY_110;
                MR_Word Var_111;
                MR_Word Var_114;
                MR_Word STATE_VARIABLE_VarSet_73_119;
                MR_Word STATE_VARIABLE_VarTypes_74_120;
                MR_Integer STATE_VARIABLE_ArgNum_75_121;

                {
                  Var_111 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[3]));
                  MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) (check_hlds__unify_proc__get_rest_of_word_12_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_111, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_111, 3) = ((MR_Box) (HeadVar__1_1));
                  MR_hl_field(MR_mktag(0), Var_111, 4) = ((MR_Box) (Var_81));
                }
                mercury__require__expect_not_3_p_0(Var_111, (MR_String) "predicate \140check_hlds.unify_proc.get_rest_of_word\'/12", (MR_String) "sub-word-size argument of existential type");
                {
                  Var_114 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_114, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[4]));
                  MR_hl_field(MR_mktag(0), Var_114, 1) = ((MR_Box) (check_hlds__unify_proc__get_rest_of_word_12_p_0_4));
                  MR_hl_field(MR_mktag(0), Var_114, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_114, 3) = ((MR_Box) (HeadVar__2_2));
                  MR_hl_field(MR_mktag(0), Var_114, 4) = ((MR_Box) (ArgCellOffset_104));
                }
                mercury__require__expect_3_p_0(Var_114, (MR_String) "predicate \140check_hlds.unify_proc.get_rest_of_word\'/12", (MR_String) "apw_{partial,none}_shifted offset != CellOffset");
                GiveVarsTypes_106 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
                check_hlds__unify_proc__make_fresh_var_pair_11_p_0(GiveVarsTypes_106, (MR_String) "_ArgX", (MR_String) "_ArgY", STATE_VARIABLE_ArgNum_0_3, Var_81, &HeadVarX_107, &HeadVarY_108, STATE_VARIABLE_VarSet_0_9, &STATE_VARIABLE_VarSet_73_119, STATE_VARIABLE_VarTypes_0_11, &STATE_VARIABLE_VarTypes_74_120);
                STATE_VARIABLE_ArgNum_75_121 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ArgNum_0_3 + (MR_Unsigned) 1);
                check_hlds__unify_proc__get_rest_of_word_12_p_0(HeadVar__1_1, HeadVar__2_2, STATE_VARIABLE_ArgNum_75_121, STATE_VARIABLE_ArgNum_4, CtorArgRepns_28, HeadVar__6_6, &TailVarsX_109, &TailVarsY_110, STATE_VARIABLE_VarSet_73_119, STATE_VARIABLE_VarSet_10, STATE_VARIABLE_VarTypes_74_120, STATE_VARIABLE_VarTypes_12);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__7_7 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVarX_107));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVarsX_109));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__8_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVarY_108));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVarsY_110));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgCellOffset_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_34, (MR_Integer) 2))));
                MR_Word GiveVarsTypes_43;
                MR_Word HeadVarX_44;
                MR_Word HeadVarY_45;
                MR_Word TailVarsX_46;
                MR_Word TailVarsY_47;
                MR_Word Var_65;
                MR_Word Var_68;
                MR_Word STATE_VARIABLE_VarSet_73_73;
                MR_Word STATE_VARIABLE_VarTypes_74_74;
                MR_Integer STATE_VARIABLE_ArgNum_75_75;

                {
                  Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[3]));
                  MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (check_hlds__unify_proc__get_rest_of_word_12_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (HeadVar__1_1));
                  MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) (Var_81));
                }
                mercury__require__expect_not_3_p_0(Var_65, (MR_String) "predicate \140check_hlds.unify_proc.get_rest_of_word\'/12", (MR_String) "sub-word-size argument of existential type");
                {
                  Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[4]));
                  MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (check_hlds__unify_proc__get_rest_of_word_12_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (HeadVar__2_2));
                  MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) (ArgCellOffset_36));
                }
                mercury__require__expect_3_p_0(Var_68, (MR_String) "predicate \140check_hlds.unify_proc.get_rest_of_word\'/12", (MR_String) "apw_{partial,none}_shifted offset != CellOffset");
                GiveVarsTypes_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
                check_hlds__unify_proc__make_fresh_var_pair_11_p_0(GiveVarsTypes_43, (MR_String) "_ArgX", (MR_String) "_ArgY", STATE_VARIABLE_ArgNum_0_3, Var_81, &HeadVarX_44, &HeadVarY_45, STATE_VARIABLE_VarSet_0_9, &STATE_VARIABLE_VarSet_73_73, STATE_VARIABLE_VarTypes_0_11, &STATE_VARIABLE_VarTypes_74_74);
                STATE_VARIABLE_ArgNum_75_75 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ArgNum_0_3 + (MR_Unsigned) 1);
                check_hlds__unify_proc__get_rest_of_word_12_p_0(HeadVar__1_1, HeadVar__2_2, STATE_VARIABLE_ArgNum_75_75, STATE_VARIABLE_ArgNum_4, CtorArgRepns_28, HeadVar__6_6, &TailVarsX_46, &TailVarsY_47, STATE_VARIABLE_VarSet_73_73, STATE_VARIABLE_VarSet_10, STATE_VARIABLE_VarTypes_74_74, STATE_VARIABLE_VarTypes_12);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__7_7 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVarX_44));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVarsX_46));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__8_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVarY_45));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVarsY_47));
                }
              }
              break;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__build_bulk_unify_foreign_proc_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word Ptag_15,
  MR_Word TermType_16,
  MR_Word TermVarX_17,
  MR_Word TermVarY_18,
  MR_Integer ArgNum_19,
  MR_Word CellOffset_20,
  MR_Word Context_21,
  MR_Word * Goals_22,
  MR_Word STATE_VARIABLE_VarSet_0_33,
  MR_Word * STATE_VARIABLE_VarSet_34,
  MR_Word STATE_VARIABLE_VarTypes_0_35,
  MR_Word * STATE_VARIABLE_VarTypes_36)
{
  {
    MR_Word TermVarArgX_25;
    MR_Word TermVarArgY_26;
    MR_Word WordsArgs_29;
    MR_Word WordsGoals_30;
    MR_Word ForeignArgs_31;
    MR_Word UnifyRemoteArgWordGoal_32;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_52;
    MR_Word Var_57;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word STATE_VARIABLE_Attrs_4_68;
    MR_Word STATE_VARIABLE_Attrs_7_71;
    MR_Word STATE_VARIABLE_Attrs_9_73;
    MR_Word STATE_VARIABLE_Attrs_11_75;
    MR_Word STATE_VARIABLE_Attrs_13_77;
    MR_Word STATE_VARIABLE_Attrs_15_79;
    MR_Word STATE_VARIABLE_Attrs_17_81;
    MR_Word STATE_VARIABLE_Attrs_19_83;
    MR_Word STATE_VARIABLE_Attrs_21_85;
    MR_Word STATE_VARIABLE_Attrs_23_87;

    Var_40 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) ((MR_String) "TermVarX"));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
    }
    {
      TermVarArgX_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TermVarArgX_25, 0) = ((MR_Box) (TermVarX_17));
      MR_hl_field(MR_mktag(0), TermVarArgX_25, 1) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), TermVarArgX_25, 2) = ((MR_Box) (TermType_16));
      MR_hl_field(MR_mktag(0), TermVarArgX_25, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_45 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) ((MR_String) "TermVarY"));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
    }
    {
      TermVarArgY_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TermVarArgY_26, 0) = ((MR_Box) (TermVarY_18));
      MR_hl_field(MR_mktag(0), TermVarArgY_26, 1) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), TermVarArgY_26, 2) = ((MR_Box) (TermType_16));
      MR_hl_field(MR_mktag(0), TermVarArgY_26, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    check_hlds__unify_proc__make_ptag_and_cell_offset_args_10_p_0(ArgNum_19, Ptag_15, CellOffset_20, Context_21, &WordsArgs_29, &WordsGoals_30, STATE_VARIABLE_VarSet_0_33, STATE_VARIABLE_VarSet_34, STATE_VARIABLE_VarTypes_0_35, STATE_VARIABLE_VarTypes_36);
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (TermVarArgY_26));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (TermVarArgX_25));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_50));
    }
    ForeignArgs_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), Var_49, WordsArgs_29);
    Var_52 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    STATE_VARIABLE_Attrs_4_68 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
    parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_4_68, &STATE_VARIABLE_Attrs_7_71);
    parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_7_71, &STATE_VARIABLE_Attrs_9_73);
    parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_9_73, &STATE_VARIABLE_Attrs_11_75);
    parse_tree__prog_data_foreign__set_terminates_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_11_75, &STATE_VARIABLE_Attrs_13_77);
    parse_tree__prog_data_foreign__set_may_throw_exception_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_13_77, &STATE_VARIABLE_Attrs_15_79);
    parse_tree__prog_data_foreign__set_may_modify_trail_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_15_79, &STATE_VARIABLE_Attrs_17_81);
    parse_tree__prog_data_foreign__set_may_call_mm_tabled_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_17_81, &STATE_VARIABLE_Attrs_19_83);
    parse_tree__prog_data_foreign__set_affects_liveness_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_19_83, &STATE_VARIABLE_Attrs_21_85);
    parse_tree__prog_data_foreign__set_allocates_memory_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_21_85, &STATE_VARIABLE_Attrs_23_87);
    parse_tree__prog_data_foreign__set_registers_roots_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_23_87, &Var_57);
    Var_61 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    hlds__goal_util__generate_foreign_proc_16_p_0(ModuleInfo_14, Var_52, (MR_String) "unify_remote_arg_words", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Integer) 0, Var_57, ForeignArgs_31, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_String) "\n        MR_Unsigned *cell_x;\n        MR_Unsigned *cell_y;\n        MR_Unsigned word_x;\n        MR_Unsigned word_y;\n\n        cell_x = (MR_Unsigned *)\n           " " (((MR_Unsigned) TermVarX) - (MR_Unsigned) Ptag);\n        cell_y = (MR_Unsigned *)\n            (((MR_Unsigned) TermVarY) - (MR_Unsigned) Ptag);\n        word_x =" " cell_x[CellOffsetVar];\n        word_y = cell_y[CellOffsetVar];\n\n        SUCCESS_INDICATOR = (word_x == word_y);\n    ", (MR_Word) ((MR_Unsigned) 0U), Var_61, Context_21, &UnifyRemoteArgWordGoal_32);
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (UnifyRemoteArgWordGoal_32));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *Goals_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), WordsGoals_30, Var_62);
  }
}

void MR_CALL 
check_hlds__unify_proc__generate_clauses_for_special_pred_4_p_0(
  MR_Word SpecDefnInfo_5,
  MR_Word * ClauseInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28)
{
  {
    MR_bool succeeded;
    MR_Word SpecialPredId_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_5, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_5, (MR_Integer) 3))));
    MR_Word ArgTypes_10;
    MR_Word ArgVars_14;
    MR_Word Clauses_17;
    MR_Word VarSet_21;
    MR_Word Types_22;
    MR_Word TVarNameMap_23;
    MR_Word ArgVec_24;
    MR_Word ClausesRep_25;
    MR_Word RttiVarMaps_26;
    MR_Word STATE_VARIABLE_Info_29_29;
    MR_Word STATE_VARIABLE_Info_32_32;
    MR_Word STATE_VARIABLE_Info_48_48;
    MR_Word Var_54;
    MR_Word VarSet_83;
    MR_Word VarTypes_84;
    MR_Word RttiVarMaps_85;
    MR_Word _Modes_11;
    MR_Word _Det_12;

    hlds__special_pred__special_pred_interface_5_p_0(SpecialPredId_8, Type_9, &ArgTypes_10, &_Modes_11, &_Det_12);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &VarSet_83);
    hlds__vartypes__init_vartypes_1_p_0(&VarTypes_84);
    hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_85);
    {
      STATE_VARIABLE_Info_29_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_27));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 1) = ((MR_Box) (VarSet_83));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 2) = ((MR_Box) (VarTypes_84));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 3) = ((MR_Box) (RttiVarMaps_85));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_29_29, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(ArgTypes_10, (MR_String) "HeadVar__", (MR_Integer) 1, &ArgVars_14, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_32_32);
    switch (SpecialPredId_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word Clause_63;
          MR_Word Res_20;
          MR_Word X_59;
          MR_Word Y_60;
          MR_Word Var_33;
          MR_Word Var_34;
          MR_Word Var_35;

          succeeded = (ArgVars_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Res_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_14, (MR_Integer) 0))));
            Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_14, (MR_Integer) 1))));
            succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              X_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 0))));
              Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 1))));
              succeeded = (Var_34 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Y_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 0))));
                Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_34, (MR_Integer) 1))));
                succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
          if (succeeded)
            check_hlds__unify_proc__generate_compare_proc_body_7_p_0(SpecDefnInfo_5, Res_20, X_59, Y_60, &Clause_63, STATE_VARIABLE_Info_32_32, &STATE_VARIABLE_Info_48_48);
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_clauses_for_special_pred\'/4", (MR_String) "bad compare args");
              return;
            }
          {
            Clauses_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Clauses_17, 0) = ((MR_Box) (Clause_63));
            MR_hl_field(MR_mktag(1), Clauses_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Clause_19;
          MR_Word Index_18;
          MR_Word X_57;
          MR_Word Var_40;
          MR_Word Var_41;

          succeeded = (ArgVars_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            X_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_14, (MR_Integer) 0))));
            Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_14, (MR_Integer) 1))));
            succeeded = (Var_40 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Index_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0))));
              Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1))));
              succeeded = (Var_41 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if (succeeded)
            check_hlds__unify_proc__generate_index_proc_body_6_p_0(SpecDefnInfo_5, X_57, Index_18, &Clause_19, STATE_VARIABLE_Info_32_32, &STATE_VARIABLE_Info_48_48);
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_clauses_for_special_pred\'/4", (MR_String) "bad index args");
              return;
            }
          {
            Clauses_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Clauses_17, 0) = ((MR_Box) (Clause_19));
            MR_hl_field(MR_mktag(1), Clauses_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word X_15;
          MR_Word Y_16;
          MR_Word Var_46;
          MR_Word Var_47;

          succeeded = (ArgVars_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            X_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_14, (MR_Integer) 0))));
            Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgVars_14, (MR_Integer) 1))));
            succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Y_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 0))));
              Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 1))));
              succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if (succeeded)
            check_hlds__unify_proc__generate_unify_proc_body_6_p_0(SpecDefnInfo_5, X_15, Y_16, &Clauses_17, STATE_VARIABLE_Info_32_32, &STATE_VARIABLE_Info_48_48);
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_clauses_for_special_pred\'/4", (MR_String) "bad unify args");
              return;
            }
        }
        break;
    }
    check_hlds__unify_proc__info_extract_4_p_0(STATE_VARIABLE_Info_48_48, STATE_VARIABLE_ModuleInfo_28, &VarSet_21, &Types_22);
    mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__unify_proc_scalar_common_1[0]), &TVarNameMap_23);
    ArgVec_24 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), (MR_Integer) 0, ArgVars_14);
    hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_17, &ClausesRep_25);
    hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_26);
    Var_54 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
      *ClauseInfo_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarSet_21));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TVarNameMap_23));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Types_22));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Types_22));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ArgVec_24));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ClausesRep_25));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (RttiVarMaps_26));
      MR_hl_field(MR_mktag(0), base, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__info_extract_4_p_0(
  MR_Word UPI_5,
  MR_Word * ModuleInfo_6,
  MR_Word * VarSet_7,
  MR_Word * VarTypes_8)
{
  {
    *ModuleInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UPI_5, (MR_Integer) 0))));
    *VarSet_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UPI_5, (MR_Integer) 1))));
    *VarTypes_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UPI_5, (MR_Integer) 2))));
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
    MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Types_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_16;
    MR_Word Vars_17;
    MR_Word STATE_VARIABLE_Info_21_21;
    MR_Integer Var_22;
    MR_String NumStr_32;
    MR_String Name_33;
    MR_Word VarSet0_41;
    MR_Word VarTypes0_42;
    MR_Word VarSet_43;
    MR_Word VarTypes_44;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_59;

    mercury__string__int_to_string_2_p_0(Num_3, &NumStr_32);
    mercury__string__append_3_p_2(BaseName_2, NumStr_32, &Name_33);
    VarSet0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1))));
    VarTypes0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2))));
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_33, &Var_16, VarSet0_41, &VarSet_43);
    hlds__vartypes__add_var_type_4_p_0(Var_16, Type_12, VarTypes0_42, &VarTypes_44);
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 3))));
    Var_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 4))) & (MR_Integer) 1);
    {
      STATE_VARIABLE_Info_21_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 0) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 1) = ((MR_Box) (VarSet_43));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 2) = ((MR_Box) (VarTypes_44));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 3) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_21_21, 4) = (MR_Box) ((MR_Unsigned) (Var_59));
    }
    Var_22 = (MR_Integer) ((MR_Unsigned) Num_3 + (MR_Unsigned) 1);
    check_hlds__unify_proc__make_fresh_named_vars_from_types_6_p_0(Types_13, BaseName_2, Var_22, &Vars_17, STATE_VARIABLE_Info_21_21, STATE_VARIABLE_Info_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars_17));
    }
  }
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
  {
    MR_Word TypeBody_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_7, (MR_Integer) 5))));

    switch (MR_tag((MR_Word) TypeBody_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeBodyDu_17 = (MR_Word) ((MR_Word) (TypeBody_12));
          MR_Word MaybeRepn_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_17, (MR_Integer) 3))));
          MR_Word Repn_23;
          MR_Word DuTypeKind_24;
          MR_Word Var_58;

          if ((MaybeRepn_21 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_index_proc_body\'/6", (MR_String) "MaybeRepn = no");
              return;
            }
          else
            Repn_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepn_21, (MR_Integer) 0))));
          Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_23, (MR_Integer) 0))));
          DuTypeKind_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_23, (MR_Integer) 3))));
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
                  check_hlds__unify_proc__generate_index_proc_body_du_7_p_0(SpecDefnInfo_7, Var_58, X_8, Index_9, Clause_10, STATE_VARIABLE_Info_0_30, STATE_VARIABLE_Info_31);
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeBody_12, (MR_Integer) 0))))) {
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
}

static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_du_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Goal_14;
    MR_Integer conv1_STATE_VARIABLE_N_34;
    MR_Word conv0_STATE_VARIABLE_Info_36;

    check_hlds__unify_proc__generate_index_du_case_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_Goal_14, ((MR_Integer) (wrapper_arg_3)), &conv1_STATE_VARIABLE_N_34, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Info_36);
    *wrapper_arg_2 = ((MR_Box) (conv2_Goal_14));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_N_34));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Info_36));
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_index_proc_body_du_7_p_0(
  MR_Word SpecDefnInfo_8,
  MR_Word CtorRepns_9,
  MR_Word X_10,
  MR_Word Index_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  {
    MR_Word Disjuncts_14;
    MR_Word Context_16;
    MR_Word GoalInfo_17;
    MR_Word Goal_18;
    MR_Word Var_21;
    MR_Word STATE_VARIABLE_Info_23_23;
    MR_Word Var_24;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Box conv4_Var_15;
    MR_Box conv3_STATE_VARIABLE_Info_23_23;

    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (check_hlds__unify_proc__generate_index_proc_body_du_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (SpecDefnInfo_8));
      MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (X_10));
      MR_hl_field(MR_mktag(0), Var_21, 5) = ((MR_Box) (Index_11));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0), Var_21, CtorRepns_9, &Disjuncts_14, ((MR_Box) ((MR_Integer) 0)), &conv4_Var_15, ((MR_Box) (STATE_VARIABLE_Info_0_19)), &conv3_STATE_VARIABLE_Info_23_23);
    STATE_VARIABLE_Info_23_23 = ((MR_Word) (conv3_STATE_VARIABLE_Info_23_23));
    Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_8, (MR_Integer) 7))));
    hlds__hlds_goal__goal_info_init_2_p_0(Context_16, &GoalInfo_17);
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Disjuncts_14));
    }
    {
      Goal_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Goal_18, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Goal_18, 1) = ((MR_Box) (GoalInfo_17));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Index_11));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (X_10));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
    }
    check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_26, Goal_18, Context_16, Clause_12, STATE_VARIABLE_Info_23_23, STATE_VARIABLE_Info_20);
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__unify_proc__IntroducedFrom__pred__generate_compare_proc_body__1006__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
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
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_14;
    MR_Word TypeBody_15;
    MR_Word Context_16;
    MR_Word SuperType_19;
    MR_Word TypeBodyDu_17;
    MR_Word Var_46;

    check_hlds__unify_proc__info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_44, &ModuleInfo_14);
    TypeBody_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_8, (MR_Integer) 5))));
    Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_8, (MR_Integer) 7))));
    succeeded = ((MR_tag((MR_Word) TypeBody_15)) == (MR_Integer) 0);
    if (succeeded)
    {
      TypeBodyDu_17 = (MR_Word) ((MR_Word) (TypeBody_15));
      Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_17, (MR_Integer) 1))));
      succeeded = (Var_46 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        SuperType_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_46, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word TVarSet_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_8, (MR_Integer) 2))));
      MR_Word BaseType_24;

      check_hlds__unify_proc__get_du_base_type_4_p_0(ModuleInfo_14, TVarSet_23, SuperType_19, &BaseType_24);
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
              MR_Word Var_49;
              MR_Word TypeBodyDu_69 = (MR_Word) ((MR_Word) (TypeBody_15));
              MR_Word Var_93;

              MaybeSuperType_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_69, (MR_Integer) 1))));
              MaybeRepn_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_69, (MR_Integer) 3))));
              {
                Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[1]));
                MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (check_hlds__unify_proc__generate_compare_proc_body_7_p_0_1));
                MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (MaybeSuperType_32));
                MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_49, (MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body\'/7", (MR_String) "MaybeSuperType != not_a_subtype");
              if ((MaybeRepn_34 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body\'/7", (MR_String) "MaybeRepn = no");
                  return;
                }
              else
                Repn_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepn_34, (MR_Integer) 0))));
              Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_36, (MR_Integer) 0))));
              DuTypeKind_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_36, (MR_Integer) 3))));
              switch (MR_tag((MR_Word) DuTypeKind_37)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(DuTypeKind_37)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      check_hlds__unify_proc__generate_compare_proc_body_enum_7_p_0(Context_16, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
                      break;
                    case (MR_Integer) 1:
                      check_hlds__unify_proc__generate_compare_proc_body_dummy_7_p_0(Context_16, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
                      break;
                    case (MR_Integer) 2:
                      check_hlds__unify_proc__generate_compare_proc_body_du_8_p_0(SpecDefnInfo_8, Var_93, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  check_hlds__unify_proc__generate_compare_proc_body_enum_7_p_0(Context_16, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ArgType_40 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DuTypeKind_37, (MR_Integer) 1))));
                    MR_Word ArgIsDummy_42;

                    ArgIsDummy_42 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_14, ArgType_40);
                    switch (ArgIsDummy_42) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        check_hlds__unify_proc__generate_compare_proc_body_dummy_7_p_0(Context_16, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word CtorRepns_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_36, (MR_Integer) 0))));

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
              MR_Word Var_61;

              Var_61 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
              check_hlds__unify_proc__generate_compare_proc_body_eqv_8_p_0(Context_16, Var_61, Res_9, X_10, Y_11, Clause_12, STATE_VARIABLE_Info_0_44, STATE_VARIABLE_Info_45);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word EqvType_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeBody_15, (MR_Integer) 0))));
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
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeBody_15, (MR_Integer) 0))))) {
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
}

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_compare_proc_body_du_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__unify_proc__IntroducedFrom__pred__generate_compare_proc_body_du__1245__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
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
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_16;
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

    check_hlds__unify_proc__info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_49, &ModuleInfo_16);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_16, &Globals_17);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[6]));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (check_hlds__unify_proc__generate_compare_proc_body_du_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (CtorRepns_10));
      MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_not_3_p_0(Var_51, (MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body_du\'/8", (MR_String) "compare for type with no functors");
    UCOptions_18 = check_hlds__unify_proc__lookup_unify_compare_options_1_f_0(STATE_VARIABLE_Info_0_49);
    Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_9, (MR_Integer) 7))));
    Var_55 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UCOptions_18, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    Var_98 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UCOptions_18, (MR_Integer) 0))) & (MR_Integer) 1);
    succeeded = (Var_55 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (Var_98 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (CtorRepns_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorRepns_10, (MR_Integer) 0))));
          Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorRepns_10, (MR_Integer) 1))));
          if ((Var_102 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            uint8_t Var_21;

            succeeded = check_hlds__unify_proc__is_ctor_with_all_locally_packed_unsigned_args_2_p_0(Var_103, &Var_21);
          }
          else
          {
            MR_Word CtorRepnB_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_102, (MR_Integer) 0))));
            MR_Word ConsTagA_26;
            MR_Integer ArityA_28;
            MR_Word LocalArgsTagInfoA_30;
            MR_Word PtagA_31;
            MR_Word LocalSecTagA_32;
            uint8_t PtagBUint8_35;
            MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_102, (MR_Integer) 1))));
            uint8_t Var_59;
            MR_Unsigned Var_60;
            uint8_t Var_61;

            succeeded = (Var_58 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ConsTagA_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_103, (MR_Integer) 3))));
              ArityA_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_103, (MR_Integer) 5))));
              succeeded = (ArityA_28 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = ((((MR_tag((MR_Word) ConsTagA_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTagA_26, (MR_Integer) 0)))) == (MR_Integer) 12)));
                if (succeeded)
                {
                  LocalArgsTagInfoA_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTagA_26, (MR_Integer) 1))));
                  succeeded = (LocalArgsTagInfoA_30 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    PtagA_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgsTagInfoA_30, (MR_Integer) 0))));
                    LocalSecTagA_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgsTagInfoA_30, (MR_Integer) 1))));
                    Var_59 = (uint8_t) (PtagA_31);
                    succeeded = (Var_59 == UINT8_C(0));
                    if (succeeded)
                    {
                      Var_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSecTagA_32, (MR_Integer) 0))));
                      succeeded = (Var_60 == (MR_Unsigned) 0U);
                      if (succeeded)
                      {
                        succeeded = check_hlds__unify_proc__is_ctor_with_all_locally_packed_unsigned_args_2_p_0(CtorRepnB_22, &PtagBUint8_35);
                        if (succeeded)
                        {
                          Var_61 = UINT8_C(0);
                          succeeded = (PtagBUint8_35 > Var_61);
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
      check_hlds__unify_proc__info_new_named_var_5_p_0(CastType_36, (MR_String) "CastX", &CastX_37, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_64_64);
      check_hlds__unify_proc__info_new_named_var_5_p_0(CastType_36, (MR_String) "CastY", &CastY_38, STATE_VARIABLE_Info_64_64, &STATE_VARIABLE_Info_66_66);
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, X_12, CastX_37, Context_19, &CastXGoal_39);
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Y_13, CastY_38, Context_19, &CastYGoal_40);
      Var_69 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (CastY_38));
        MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (CastX_37));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_73));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Res_11));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_72));
      }
      check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_16, Var_69, (MR_String) "compare", Var_71, Context_19, &CompareGoal_41);
      {
        Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (CompareGoal_41));
        MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (CastYGoal_40));
        MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_78));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (CastXGoal_39));
        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_77));
      }
      {
        GoalExpr_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), GoalExpr_42, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), GoalExpr_42, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), GoalExpr_42, 2) = ((MR_Box) (Var_76));
      }
      hlds__hlds_goal__goal_info_init_2_p_0(Context_19, &GoalInfo_43);
      {
        Goal_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_44, 0) = ((MR_Box) (GoalExpr_42));
        MR_hl_field(MR_mktag(0), Goal_44, 1) = ((MR_Box) (GoalInfo_43));
      }
    }
    else
    {
      MR_Integer CompareSpec_45;
      MR_Integer NumCtors_46;
      MR_Word Goal0_47;
      MR_Word STATE_VARIABLE_Info_81_81;
      MR_Word Var_83;

      libs__globals__lookup_int_option_3_p_0(Globals_17, (MR_Integer) 351, &CompareSpec_45);
      mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), CtorRepns_10, &NumCtors_46);
      succeeded = (NumCtors_46 <= CompareSpec_45);
      if (succeeded)
        check_hlds__unify_proc__generate_compare_proc_body_du_quad_9_p_0(SpecDefnInfo_9, UCOptions_18, CtorRepns_10, Res_11, X_12, Y_13, &Goal0_47, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_81_81);
      else
        check_hlds__unify_proc__generate_compare_proc_body_du_linear_9_p_0(SpecDefnInfo_9, UCOptions_18, CtorRepns_10, Res_11, X_12, Y_13, &Goal0_47, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_81_81);
      {
        Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Res_11));
      }
      check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_19, X_12, Y_13, Var_83, Goal0_47, &Goal_44, STATE_VARIABLE_Info_81_81, &STATE_VARIABLE_Info_66_66);
    }
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Y_13));
      MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (X_12));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_86));
    }
    {
      HeadVars_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVars_48, 0) = ((MR_Box) (Res_11));
      MR_hl_field(MR_mktag(1), HeadVars_48, 1) = ((MR_Box) (Var_85));
    }
    check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), HeadVars_48, Goal_44, Context_19, Clause_14, STATE_VARIABLE_Info_66_66, STATE_VARIABLE_Info_50);
  }
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
    MR_Word STATE_VARIABLE_Info_50_50;
    MR_Word STATE_VARIABLE_Info_51_51;
    MR_Word Var_52;
    MR_Word STATE_VARIABLE_Info_53_53;
    MR_Word STATE_VARIABLE_Info_55_55;
    MR_Word Var_57;
    MR_Word STATE_VARIABLE_Info_59_59;
    MR_Word Var_60;
    MR_Word Var_63;
    MR_Word STATE_VARIABLE_Info_65_65;
    MR_Word Var_66;
    MR_Word Var_68;
    MR_Word Var_70;
    MR_Word Var_73;
    MR_Word Var_78;
    MR_Word Var_80;
    MR_Word Var_82;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_90;
    MR_Word Var_92;
    MR_Word Var_94;
    MR_Word Var_96;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;

    IntType_18 = parse_tree__builtin_lib_types__int_type_0_f_0();
    check_hlds__unify_proc__info_new_var_4_p_0(IntType_18, &IndexX_19, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_50_50);
    check_hlds__unify_proc__info_new_var_4_p_0(IntType_18, &IndexY_20, STATE_VARIABLE_Info_50_50, &STATE_VARIABLE_Info_51_51);
    Var_52 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
    check_hlds__unify_proc__info_new_var_4_p_0(Var_52, &R_21, STATE_VARIABLE_Info_51_51, &STATE_VARIABLE_Info_53_53);
    TVarSet_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_10, (MR_Integer) 2))));
    Type_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_10, (MR_Integer) 3))));
    TypeCtor_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_10, (MR_Integer) 4))));
    TypeBody_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_10, (MR_Integer) 5))));
    TypeStatus0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_10, (MR_Integer) 6))));
    Context_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_10, (MR_Integer) 7))));
    hlds__hlds_goal__goal_info_init_2_p_0(Context_22, &GoalInfo_23);
    check_hlds__unify_proc__info_get_module_info_2_p_0(STATE_VARIABLE_Info_53_53, &ModuleInfo0_31);
    hlds__add_special_pred__add_special_pred_decl_defn_9_p_0((MR_Integer) 1, TVarSet_26, Type_27, TypeCtor_28, TypeBody_29, TypeStatus0_30, Context_22, ModuleInfo0_31, &ModuleInfo_32);
    check_hlds__unify_proc__info_set_module_info_3_p_0(ModuleInfo_32, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_55_55);
    X_InstmapDelta_33 = hlds__instmap__instmap_delta_bind_var_1_f_0(IndexX_19);
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (IndexX_19));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (X_14));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
    }
    check_hlds__unify_proc__build_spec_pred_call_9_p_0(TypeCtor_28, (MR_Integer) 1, Var_57, X_InstmapDelta_33, (MR_Integer) 0, Context_22, &GoalIndexX_34, STATE_VARIABLE_Info_55_55, &STATE_VARIABLE_Info_59_59);
    Y_InstmapDelta_35 = hlds__instmap__instmap_delta_bind_var_1_f_0(IndexY_20);
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (IndexY_20));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Y_15));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
    }
    check_hlds__unify_proc__build_spec_pred_call_9_p_0(TypeCtor_28, (MR_Integer) 1, Var_63, Y_InstmapDelta_35, (MR_Integer) 0, Context_22, &GoalIndexY_36, STATE_VARIABLE_Info_59_59, &STATE_VARIABLE_Info_65_65);
    Var_68 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (IndexX_19));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_66));
    }
    check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_32, Var_68, (MR_String) "builtin_int_lt", Var_70, Context_22, &GoalCallLessThan_37);
    Var_73 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_32, Var_73, (MR_String) "builtin_int_gt", Var_70, Context_22, &GoalCallGreaterThan_38);
    Var_78 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) "<");
    hlds__make_goal__make_const_construction_4_p_0(Context_22, Res_13, Var_78, &GoalReturnLessThan_39);
    Var_80 = check_hlds__unify_proc__compare_cons_id_1_f_0((MR_String) ">");
    hlds__make_goal__make_const_construction_4_p_0(Context_22, Res_13, Var_80, &GoalReturnGreaterThan_40);
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (R_21));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Res_13, Var_82, Context_22, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &ReturnResultGoal_41);
    check_hlds__unify_proc__generate_compare_du_linear_cases_9_p_0(SpecDefnInfo_10, UCOptions_11, CtorRepns_12, R_21, X_14, Y_15, &Cases_42, STATE_VARIABLE_Info_65_65, STATE_VARIABLE_Info_49);
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (Cases_42));
    }
    {
      CasesGoal_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CasesGoal_43, 0) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), CasesGoal_43, 1) = ((MR_Box) (GoalInfo_23));
    }
    Var_87 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_32, Var_87, (MR_String) "compare_error", (MR_Word) ((MR_Unsigned) 0U), Context_22, &AbortGoal_44);
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_90, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_90, 2) = ((MR_Box) (CasesGoal_43));
      MR_hl_field(MR_mktag(3), Var_90, 3) = ((MR_Box) (ReturnResultGoal_41));
      MR_hl_field(MR_mktag(3), Var_90, 4) = ((MR_Box) (AbortGoal_44));
    }
    {
      HandleEqualGoal_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HandleEqualGoal_45, 0) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(0), HandleEqualGoal_45, 1) = ((MR_Box) (GoalInfo_23));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_92, 2) = ((MR_Box) (GoalCallGreaterThan_38));
      MR_hl_field(MR_mktag(3), Var_92, 3) = ((MR_Box) (GoalReturnGreaterThan_40));
      MR_hl_field(MR_mktag(3), Var_92, 4) = ((MR_Box) (HandleEqualGoal_45));
    }
    {
      HandleGreaterEqualGoal_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HandleGreaterEqualGoal_46, 0) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(0), HandleGreaterEqualGoal_46, 1) = ((MR_Box) (GoalInfo_23));
    }
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_94, 2) = ((MR_Box) (GoalCallLessThan_37));
      MR_hl_field(MR_mktag(3), Var_94, 3) = ((MR_Box) (GoalReturnLessThan_39));
      MR_hl_field(MR_mktag(3), Var_94, 4) = ((MR_Box) (HandleGreaterEqualGoal_46));
    }
    {
      HandleLessGreaterEqualGoal_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HandleLessGreaterEqualGoal_47, 0) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(0), HandleLessGreaterEqualGoal_47, 1) = ((MR_Box) (GoalInfo_23));
    }
    {
      Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (HandleLessGreaterEqualGoal_47));
      MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (GoalIndexY_36));
      MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_100));
    }
    {
      Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (GoalIndexX_34));
      MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_99));
    }
    {
      Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_96, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_96, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_96, 2) = ((MR_Box) (Var_98));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_23));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__info_set_module_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_UPI_0_6,
  MR_Word * STATE_VARIABLE_UPI_7)
{
  {
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_6, (MR_Integer) 4))) & (MR_Integer) 1);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_UPI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (Var_13));
    }
  }
}

static MR_Word MR_CALL 
check_hlds__unify_proc__compare_cons_id_1_f_0(
  MR_String Name_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word SymName_4;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Builtin_9;
    MR_Word Var_10;

    Builtin_9 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (Builtin_9));
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      SymName_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_4, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(1), SymName_4, 1) = ((MR_Box) (Name_3));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (SymName_4));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 3) = ((MR_Box) (Var_6));
    }
    return HeadVar__2_2;
  }
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
  {
    MR_Word ModuleInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_26, (MR_Integer) 0))));
    MR_Word PredName_19;
    MR_Word PredId_20;
    MR_Integer ProcId_21;
    MR_Word GoalExpr_22;
    MR_Word NonLocals_23;
    MR_Word GoalInfo0_24;
    MR_Word GoalInfo_25;

    hlds__special_pred__get_special_proc_det_6_p_0(ModuleInfo_18, TypeCtor_10, SpecialPredId_11, &PredName_19, &PredId_20, &ProcId_21);
    {
      GoalExpr_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), GoalExpr_22, 0) = ((MR_Box) (PredId_20));
      MR_hl_field(MR_mktag(2), GoalExpr_22, 1) = ((MR_Box) (ProcId_21));
      MR_hl_field(MR_mktag(2), GoalExpr_22, 2) = ((MR_Box) (ArgVars_12));
      MR_hl_field(MR_mktag(2), GoalExpr_22, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), GoalExpr_22, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), GoalExpr_22, 5) = ((MR_Box) (PredName_19));
    }
    parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_12, &NonLocals_23);
    hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_23, InstmapDelta_13, Detism_14, (MR_Integer) 0, &GoalInfo0_24);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_15, GoalInfo0_24, &GoalInfo_25);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_25));
    }
    *STATE_VARIABLE_Info_27 = STATE_VARIABLE_Info_0_26;
  }
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
    MR_Word CtorRepn_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word CtorRepns_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Case_25;
    MR_Word Cases_26;
    MR_Word STATE_VARIABLE_Info_31_31;

    check_hlds__unify_proc__generate_compare_case_10_p_0(HeadVar__1_1, HeadVar__2_2, (MR_Integer) 0, CtorRepn_20, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, &Case_25, STATE_VARIABLE_Info_0_8, &STATE_VARIABLE_Info_31_31);
    check_hlds__unify_proc__generate_compare_du_linear_cases_9_p_0(HeadVar__1_1, HeadVar__2_2, CtorRepns_21, HeadVar__4_4, HeadVar__5_5, HeadVar__6_6, &Cases_26, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_25));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_26));
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
  {
    MR_Word Cases_18;
    MR_Word Context_19;
    MR_Word GoalInfo_20;

    check_hlds__unify_proc__generate_compare_du_quad_switch_on_x_11_p_0(SpecDefnInfo_10, UCOptions_11, CtorRepns_12, CtorRepns_12, R_13, X_14, Y_15, (MR_Word) ((MR_Unsigned) 0U), &Cases_18, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
    Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_10, (MR_Integer) 7))));
    hlds__hlds_goal__goal_info_init_2_p_0(Context_19, &GoalInfo_20);
    hlds__hlds_goal__disj_list_to_goal_3_p_0(Cases_18, GoalInfo_20, Goal_16);
  }
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
      MR_Word LeftCtorRepn_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word LeftCtorRepns_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
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
      MR_Word RightCtorRepn_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word RightCtorRepns_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
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
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Case_37));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (STATE_VARIABLE_Cases_0_9));
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
  MR_Word STATE_VARIABLE_Info_0_54,
  MR_Word * STATE_VARIABLE_Info_55)
{
  {
    MR_Word MaybeExistConstraints_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_14, (MR_Integer) 1))));
    MR_Word FunctorName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_14, (MR_Integer) 2))));
    MR_Word ConsTag_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_14, (MR_Integer) 3))));
    MR_Word ArgRepns_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_14, (MR_Integer) 4))));
    MR_Integer FunctorArity_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CtorRepn_14, (MR_Integer) 5))));
    MR_Word TypeCtor_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_11, (MR_Integer) 4))));
    MR_Word FunctorConsId_28;
    MR_Word Context_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_11, (MR_Integer) 7))));
    MR_Word GoalList_33;
    MR_Word GoalInfo0_52;
    MR_Word GoalInfo_53;

    {
      FunctorConsId_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FunctorConsId_28, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), FunctorConsId_28, 1) = ((MR_Box) (FunctorName_22));
      MR_hl_field(MR_mktag(3), FunctorConsId_28, 2) = ((MR_Box) (FunctorArity_25));
      MR_hl_field(MR_mktag(3), FunctorConsId_28, 3) = ((MR_Box) (TypeCtor_27));
    }
    if ((ArgRepns_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word RHS_30;
      MR_Word GoalUnifyX_31;
      MR_Word EqualGoal_32;

      {
        RHS_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHS_30, 0) = ((MR_Box) (FunctorConsId_28));
        MR_hl_field(MR_mktag(1), RHS_30, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHS_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_16, RHS_30, Context_29, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyX_31);
      check_hlds__unify_proc__generate_return_equal_3_p_0(R_15, Context_29, &EqualGoal_32);
      switch (LinearOrQuad_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_80;

            {
              Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (EqualGoal_32));
              MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              GoalList_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), GoalList_33, 0) = ((MR_Box) (GoalUnifyX_31));
              MR_hl_field(MR_mktag(1), GoalList_33, 1) = ((MR_Box) (Var_80));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word GoalUnifyY_34;
            MR_Word Var_77;
            MR_Word Var_78;

            hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Y_17, RHS_30, Context_29, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyY_34);
            {
              Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (EqualGoal_32));
              MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (GoalUnifyY_34));
              MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_78));
            }
            {
              GoalList_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), GoalList_33, 0) = ((MR_Box) (GoalUnifyX_31));
              MR_hl_field(MR_mktag(1), GoalList_33, 1) = ((MR_Box) (Var_77));
            }
          }
          break;
      }
      *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_0_54;
    }
    else
    {
      MR_Word ExistQTVars_37;
      MR_Word GiveVarsTypes_38;
      MR_Word MaybePackableArgsLocn_39;
      MR_Word ModuleInfo_40;
      MR_Word UCParams_41;
      MR_Word VarSet0_42;
      MR_Word VarTypes0_43;
      MR_Word TermType_44;
      MR_Word CompareArgsGoal_45;
      MR_Word VarsX_46;
      MR_Word VarsY_47;
      MR_Word VarSet_48;
      MR_Word VarTypes_49;
      MR_Word RHSX_50;
      MR_Word RHSY_51;
      MR_Word Var_56;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word GoalUnifyX_82;
      MR_Word GoalUnifyY_83;
      MR_Word Var_98;
      MR_Word Var_108;
      MR_Word Var_111;
      MR_Word Var_112;

      check_hlds__unify_proc__compute_exist_constraint_implications_3_p_0(MaybeExistConstraints_21, &ExistQTVars_37, &GiveVarsTypes_38);
      MaybePackableArgsLocn_39 = check_hlds__unify_proc__compute_maybe_packable_args_locn_1_f_0(ConsTag_23);
      check_hlds__unify_proc__info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_54, &ModuleInfo_40);
      Var_56 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UCOptions_12, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      Var_98 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UCOptions_12, (MR_Integer) 0))) & (MR_Integer) 1);
      {
        UCParams_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), UCParams_41, 0) = ((MR_Box) (ModuleInfo_40));
        MR_hl_field(MR_mktag(0), UCParams_41, 1) = ((MR_Box) (Context_29));
        MR_hl_field(MR_mktag(0), UCParams_41, 2) = ((MR_Box) (ExistQTVars_37));
        MR_hl_field(MR_mktag(0), UCParams_41, 3) = ((MR_Box) (MaybePackableArgsLocn_39));
        MR_hl_field(MR_mktag(0), UCParams_41, 4) = (MR_Box) (((((MR_Unsigned) (GiveVarsTypes_38) << 2)) | (((((MR_Unsigned) (Var_56) << 1)) | (MR_Unsigned) (Var_98)))));
      }
      VarSet0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_54, (MR_Integer) 1))));
      VarTypes0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_54, (MR_Integer) 2))));
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_43, X_16, &TermType_44);
      check_hlds__unify_proc__generate_arg_compare_goals_15_p_0(UCParams_41, TermType_44, X_16, Y_17, R_15, (MR_Integer) 1, (MR_Integer) 1, ArgRepns_24, &CompareArgsGoal_45, &VarsX_46, &VarsY_47, VarSet0_42, &VarSet_48, VarTypes0_43, &VarTypes_49);
      Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_54, (MR_Integer) 0))));
      Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_54, (MR_Integer) 3))));
      Var_112 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_54, (MR_Integer) 4))) & (MR_Integer) 1);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_55 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_108));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarSet_48));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_49));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_111));
        MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (Var_112));
      }
      {
        RHSX_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHSX_50, 0) = ((MR_Box) (FunctorConsId_28));
        MR_hl_field(MR_mktag(1), RHSX_50, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHSX_50, 2) = ((MR_Box) (VarsX_46));
      }
      {
        RHSY_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RHSY_51, 0) = ((MR_Box) (FunctorConsId_28));
        MR_hl_field(MR_mktag(1), RHSY_51, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), RHSY_51, 2) = ((MR_Box) (VarsY_47));
      }
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_16, RHSX_50, Context_29, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyX_82);
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Y_17, RHSY_51, Context_29, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyY_83);
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (CompareArgsGoal_45));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (GoalUnifyY_83));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_69));
      }
      {
        GoalList_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalList_33, 0) = ((MR_Box) (GoalUnifyX_82));
        MR_hl_field(MR_mktag(1), GoalList_33, 1) = ((MR_Box) (Var_68));
      }
    }
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_52);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_29, GoalInfo0_52, &GoalInfo_53);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_33, GoalInfo_53, Case_18);
  }
}

static MR_Word MR_CALL 
check_hlds__unify_proc__compute_maybe_packable_args_locn_1_f_0(
  MR_Word ConsTag_3)
{
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 0))))) {
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
              MR_Word RemoteArgsTagInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_3, (MR_Integer) 1))));
              MR_Word Ptag_6;
              MR_Word Var_41;

              switch (MR_tag((MR_Word) RemoteArgsTagInfo_5)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Ptag_6 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
                  break;
                case (MR_Integer) 1:
                  Ptag_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoteArgsTagInfo_5, (MR_Integer) 0))));
                  break;
                case (MR_Integer) 2:
                  Ptag_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_5, (MR_Integer) 0))));
                  break;
                case (MR_Integer) 3:
                  Ptag_6 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
                  break;
              }
              {
                Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Ptag_6));
              }
              {
                ArgsLocn_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ArgsLocn_4, 0) = ((MR_Box) (Var_41));
              }
            }
            break;
          case (MR_Integer) 12:
            ArgsLocn_4 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__unify_proc_scalar_common_2[4]));
            break;
          case (MR_Integer) 13:
            ArgsLocn_4 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        break;
    }
    return ArgsLocn_4;
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

    *ExistQTVars_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_7, (MR_Integer) 0))));
    *GiveVarsTypes_6 = (MR_Integer) 0;
  }
}

static void MR_CALL 
check_hlds__unify_proc__conjoin_arg_comparisons_16_p_0(
  MR_Word UCParams_17,
  MR_Word ConjoinKind_18,
  MR_Word TermType_19,
  MR_Word TermVarX_20,
  MR_Word TermVarY_21,
  MR_Word ResultVar_22,
  MR_Word MaybeAllArgs_23,
  MR_Integer NextArgNum_24,
  MR_Word SubCompareGoal_25,
  MR_Word * Goal_26,
  MR_Word * TailVarsX_27,
  MR_Word * TailVarsY_28,
  MR_Word STATE_VARIABLE_VarSet_0_44,
  MR_Word * STATE_VARIABLE_VarSet_45,
  MR_Word STATE_VARIABLE_VarTypes_0_46,
  MR_Word * STATE_VARIABLE_VarTypes_47)
{
  if ((ConjoinKind_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Goal_26 = SubCompareGoal_25;
    *TailVarsX_27 = (MR_Word) ((MR_Unsigned) 0U);
    *TailVarsY_28 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarSet_45 = STATE_VARIABLE_VarSet_0_44;
    *STATE_VARIABLE_VarTypes_47 = STATE_VARIABLE_VarTypes_0_46;
  }
  else
  {
    MR_Word HeadCtorArgRepn_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConjoinKind_18, (MR_Integer) 0))));
    MR_Word TailCtorArgRepns_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConjoinKind_18, (MR_Integer) 1))));
    MR_Word SubResultVar_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConjoinKind_18, (MR_Integer) 2))));
    MR_Word Context_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UCParams_17, (MR_Integer) 1))));
    MR_Word GoalInfo_35;
    MR_Word CheckEqualGoal_36;
    MR_Word CheckNotEqualGoal_37;
    MR_Word SubResultRHS_38;
    MR_Word ReturnSubResultGoal_39;
    MR_Word CondGoalExpr_40;
    MR_Word CondGoal_41;
    MR_Word ElseGoal_42;
    MR_Word GoalExpr_43;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word SymName_68;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Builtin_73;
    MR_Word Var_74;

    hlds__hlds_goal__goal_info_init_2_p_0(Context_34, &GoalInfo_35);
    Builtin_73 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Builtin_73));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_71 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      SymName_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_68, 0) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(1), SymName_68, 1) = ((MR_Box) ((MR_String) "="));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (SymName_68));
      MR_hl_field(MR_mktag(3), Var_48, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_48, 3) = ((MR_Box) (Var_70));
    }
    hlds__make_goal__make_const_construction_4_p_0(Context_34, SubResultVar_33, Var_48, &CheckEqualGoal_36);
    Var_50 = (MR_Word) ((MR_Word) (CheckEqualGoal_36));
    {
      CheckNotEqualGoal_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CheckNotEqualGoal_37, 0) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), CheckNotEqualGoal_37, 1) = ((MR_Box) (GoalInfo_35));
    }
    {
      SubResultRHS_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SubResultRHS_38, 0) = ((MR_Box) (SubResultVar_33));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(ResultVar_22, SubResultRHS_38, Context_34, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &ReturnSubResultGoal_39);
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (CheckNotEqualGoal_37));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (SubCompareGoal_25));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      CondGoalExpr_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CondGoalExpr_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), CondGoalExpr_40, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), CondGoalExpr_40, 2) = ((MR_Box) (Var_54));
    }
    {
      CondGoal_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CondGoal_41, 0) = ((MR_Box) (CondGoalExpr_40));
      MR_hl_field(MR_mktag(0), CondGoal_41, 1) = ((MR_Box) (GoalInfo_35));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (HeadCtorArgRepn_31));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (TailCtorArgRepns_32));
    }
    check_hlds__unify_proc__generate_arg_compare_goals_15_p_0(UCParams_17, TermType_19, TermVarX_20, TermVarY_21, ResultVar_22, MaybeAllArgs_23, NextArgNum_24, Var_57, &ElseGoal_42, TailVarsX_27, TailVarsY_28, STATE_VARIABLE_VarSet_0_44, STATE_VARIABLE_VarSet_45, STATE_VARIABLE_VarTypes_0_46, STATE_VARIABLE_VarTypes_47);
    {
      GoalExpr_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_43, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), GoalExpr_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), GoalExpr_43, 2) = ((MR_Box) (CondGoal_41));
      MR_hl_field(MR_mktag(3), GoalExpr_43, 3) = ((MR_Box) (ReturnSubResultGoal_39));
      MR_hl_field(MR_mktag(3), GoalExpr_43, 4) = ((MR_Box) (ElseGoal_42));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_26 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_43));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_35));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_arg_compare_goals_15_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_arg_compare_goals_15_p_0(
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
  MR_Word STATE_VARIABLE_VarSet_0_12,
  MR_Word * STATE_VARIABLE_VarSet_13,
  MR_Word STATE_VARIABLE_VarTypes_0_14,
  MR_Word * STATE_VARIABLE_VarTypes_15)
{
  {
    MR_bool succeeded;
    MR_Word Var_202 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UCParams_1, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
    MR_Word Var_205 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UCParams_1, (MR_Integer) 1))));
    MR_Word Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UCParams_1, (MR_Integer) 0))));

    if ((HeadVar__8_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__10_10 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__11_11 = (MR_Word) ((MR_Unsigned) 0U);
      check_hlds__unify_proc__generate_return_equal_3_p_0(ResultVar_5, Var_205, Goal_9);
      *STATE_VARIABLE_VarTypes_15 = STATE_VARIABLE_VarTypes_0_14;
      *STATE_VARIABLE_VarSet_13 = STATE_VARIABLE_VarSet_0_12;
    }
    else
    {
      MR_Word CtorArgRepn_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__8_8, (MR_Integer) 0))));
      MR_Word CtorArgRepns_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__8_8, (MR_Integer) 1))));
      MR_Word Type_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_38, (MR_Integer) 1))));
      MR_Word IsDummy_48;

      IsDummy_48 = check_hlds__type_util__is_type_a_dummy_2_f_0(Var_206, Type_47);
      switch (IsDummy_48) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word HeadVarX_49;
            MR_Word HeadVarY_50;
            MR_Word TailVarsX_51;
            MR_Word TailVarsY_52;
            MR_Word STATE_VARIABLE_VarSet_133_133;
            MR_Word STATE_VARIABLE_VarTypes_134_134;
            MR_Integer Var_135;

            check_hlds__unify_proc__make_fresh_var_pair_11_p_0(Var_202, (MR_String) "_ArgX", (MR_String) "_ArgY", ArgNum_7, Type_47, &HeadVarX_49, &HeadVarY_50, STATE_VARIABLE_VarSet_0_12, &STATE_VARIABLE_VarSet_133_133, STATE_VARIABLE_VarTypes_0_14, &STATE_VARIABLE_VarTypes_134_134);
            Var_135 = (MR_Integer) ((MR_Unsigned) ArgNum_7 + (MR_Unsigned) 1);
            check_hlds__unify_proc__generate_arg_compare_goals_15_p_0(UCParams_1, TermType_2, TermVarX_3, TermVarY_4, ResultVar_5, STATE_VARIABLE_MaybeAllArgs_0_6, Var_135, CtorArgRepns_39, Goal_9, &TailVarsX_51, &TailVarsY_52, STATE_VARIABLE_VarSet_133_133, STATE_VARIABLE_VarSet_13, STATE_VARIABLE_VarTypes_134_134, STATE_VARIABLE_VarTypes_15);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__10_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVarX_49));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVarsX_51));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__11_11 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVarY_50));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVarsY_52));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Context_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UCParams_1, (MR_Integer) 1))));
            MR_Word CompareHow_54;
            MR_Word STATE_VARIABLE_MaybeAllArgs_76_76;

            check_hlds__unify_proc__may_we_start_packing_at_this_arg_compare_5_p_0(UCParams_1, CtorArgRepn_38, &CompareHow_54, STATE_VARIABLE_MaybeAllArgs_0_6, &STATE_VARIABLE_MaybeAllArgs_76_76);
            switch (MR_tag((MR_Word) CompareHow_54)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(CompareHow_54)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_String ComparePred_55;
                      MR_Word ComparePredModule_56;
                      MR_Word CurCompareResultVar_57;
                      MR_Word ConjoinKind_58;
                      MR_Word SubCompareGoal_59;
                      MR_Word STATE_VARIABLE_VarSet_110_110;
                      MR_Word STATE_VARIABLE_VarTypes_111_111;
                      MR_Word STATE_VARIABLE_VarSet_112_112;
                      MR_Word STATE_VARIABLE_VarTypes_113_113;
                      MR_Word Var_114;
                      MR_Word Var_115;
                      MR_Word Var_116;
                      MR_Integer Var_119;
                      MR_Word HeadVarX_143;
                      MR_Word HeadVarY_144;
                      MR_Word TailVarsX_145;
                      MR_Word TailVarsY_146;

                      check_hlds__unify_proc__make_fresh_var_pair_11_p_0(Var_202, (MR_String) "ArgX", (MR_String) "ArgY", ArgNum_7, Type_47, &HeadVarX_143, &HeadVarY_144, STATE_VARIABLE_VarSet_0_12, &STATE_VARIABLE_VarSet_110_110, STATE_VARIABLE_VarTypes_0_14, &STATE_VARIABLE_VarTypes_111_111);
                      succeeded = check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(UCParams_1, Type_47);
                      if (succeeded)
                      {
                        ComparePred_55 = (MR_String) "typed_compare";
                        ComparePredModule_56 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                      }
                      else
                      {
                        ComparePred_55 = (MR_String) "compare";
                        ComparePredModule_56 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                      }
                      check_hlds__unify_proc__prepare_for_conjoining_arg_comparisons_9_p_0(CtorArgRepns_39, ArgNum_7, ResultVar_5, &CurCompareResultVar_57, &ConjoinKind_58, STATE_VARIABLE_VarSet_110_110, &STATE_VARIABLE_VarSet_112_112, STATE_VARIABLE_VarTypes_111_111, &STATE_VARIABLE_VarTypes_113_113);
                      {
                        Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (HeadVarY_144));
                        MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (HeadVarX_143));
                        MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_116));
                      }
                      {
                        Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (CurCompareResultVar_57));
                        MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_115));
                      }
                      check_hlds__unify_proc__build_simple_call_6_p_0(Var_206, ComparePredModule_56, ComparePred_55, Var_114, Context_53, &SubCompareGoal_59);
                      Var_119 = (MR_Integer) ((MR_Unsigned) ArgNum_7 + (MR_Unsigned) 1);
                      check_hlds__unify_proc__conjoin_arg_comparisons_16_p_0(UCParams_1, ConjoinKind_58, TermType_2, TermVarX_3, TermVarY_4, ResultVar_5, (MR_Integer) 0, Var_119, SubCompareGoal_59, Goal_9, &TailVarsX_145, &TailVarsY_146, STATE_VARIABLE_VarSet_112_112, STATE_VARIABLE_VarSet_13, STATE_VARIABLE_VarTypes_113_113, STATE_VARIABLE_VarTypes_15);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *HeadVar__10_10 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVarX_143));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVarsX_145));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *HeadVar__11_11 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVarY_144));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVarsY_146));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word STATE_VARIABLE_VarSet_125_125;
                      MR_Word STATE_VARIABLE_VarTypes_126_126;
                      MR_Integer Var_127;
                      MR_Word HeadVarX_139;
                      MR_Word HeadVarY_140;
                      MR_Word TailVarsX_141;
                      MR_Word TailVarsY_142;

                      check_hlds__unify_proc__make_fresh_var_pair_11_p_0(Var_202, (MR_String) "_ArgX", (MR_String) "_ArgY", ArgNum_7, Type_47, &HeadVarX_139, &HeadVarY_140, STATE_VARIABLE_VarSet_0_12, &STATE_VARIABLE_VarSet_125_125, STATE_VARIABLE_VarTypes_0_14, &STATE_VARIABLE_VarTypes_126_126);
                      Var_127 = (MR_Integer) ((MR_Unsigned) ArgNum_7 + (MR_Unsigned) 1);
                      check_hlds__unify_proc__generate_arg_compare_goals_15_p_0(UCParams_1, TermType_2, TermVarX_3, TermVarY_4, ResultVar_5, STATE_VARIABLE_MaybeAllArgs_76_76, Var_127, CtorArgRepns_39, Goal_9, &TailVarsX_141, &TailVarsY_142, STATE_VARIABLE_VarSet_125_125, STATE_VARIABLE_VarSet_13, STATE_VARIABLE_VarTypes_126_126, STATE_VARIABLE_VarTypes_15);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *HeadVar__10_10 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVarX_139));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVarsX_141));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *HeadVar__11_11 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVarY_140));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVarsY_142));
                      }
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgsLocn_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CompareHow_54, (MR_Integer) 0))));
                  MR_Word CellOffset_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CompareHow_54, (MR_Integer) 1))));
                  MR_Word Shift_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CompareHow_54, (MR_Integer) 2))));
                  MR_String SignedIntSize_63 = ((MR_String) ((MR_hl_field(MR_mktag(1), CompareHow_54, (MR_Integer) 3))));
                  MR_Word STATE_VARIABLE_VarSet_97_97;
                  MR_Word STATE_VARIABLE_VarTypes_98_98;
                  MR_Word STATE_VARIABLE_VarSet_99_99;
                  MR_Word STATE_VARIABLE_VarTypes_100_100;
                  MR_Word STATE_VARIABLE_VarSet_101_101;
                  MR_Word STATE_VARIABLE_VarTypes_102_102;
                  MR_Integer Var_104;
                  MR_Word HeadVarX_147;
                  MR_Word HeadVarY_148;
                  MR_Word TailVarsX_149;
                  MR_Word TailVarsY_150;
                  MR_Word CurCompareResultVar_151;
                  MR_Word ConjoinKind_152;
                  MR_Word SubCompareGoal_153;

                  check_hlds__unify_proc__make_fresh_var_pair_11_p_0(Var_202, (MR_String) "_ArgX", (MR_String) "_ArgY", ArgNum_7, Type_47, &HeadVarX_147, &HeadVarY_148, STATE_VARIABLE_VarSet_0_12, &STATE_VARIABLE_VarSet_97_97, STATE_VARIABLE_VarTypes_0_14, &STATE_VARIABLE_VarTypes_98_98);
                  check_hlds__unify_proc__prepare_for_conjoining_arg_comparisons_9_p_0(CtorArgRepns_39, ArgNum_7, ResultVar_5, &CurCompareResultVar_151, &ConjoinKind_152, STATE_VARIABLE_VarSet_97_97, &STATE_VARIABLE_VarSet_99_99, STATE_VARIABLE_VarTypes_98_98, &STATE_VARIABLE_VarTypes_100_100);
                  check_hlds__unify_proc__select_and_build_signed_comparison_foreign_proc_16_p_0(Var_206, ArgsLocn_60, TermType_2, TermVarX_3, TermVarY_4, CurCompareResultVar_151, ArgNum_7, CellOffset_61, Shift_62, SignedIntSize_63, Context_53, &SubCompareGoal_153, STATE_VARIABLE_VarSet_99_99, &STATE_VARIABLE_VarSet_101_101, STATE_VARIABLE_VarTypes_100_100, &STATE_VARIABLE_VarTypes_102_102);
                  Var_104 = (MR_Integer) ((MR_Unsigned) ArgNum_7 + (MR_Unsigned) 1);
                  check_hlds__unify_proc__conjoin_arg_comparisons_16_p_0(UCParams_1, ConjoinKind_152, TermType_2, TermVarX_3, TermVarY_4, ResultVar_5, (MR_Integer) 0, Var_104, SubCompareGoal_153, Goal_9, &TailVarsX_149, &TailVarsY_150, STATE_VARIABLE_VarSet_101_101, STATE_VARIABLE_VarSet_13, STATE_VARIABLE_VarTypes_102_102, STATE_VARIABLE_VarTypes_15);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__10_10 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVarX_147));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVarsX_149));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__11_11 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVarY_148));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVarsY_150));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Shift0_64 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CompareHow_54, (MR_Integer) 2))));
                  MR_Word NumBits0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CompareHow_54, (MR_Integer) 3))));
                  MR_Integer LeftOverArgNum_66;
                  MR_Word NumBits_67;
                  MR_Word LeftOverCtorArgRepns_68;
                  MR_Word TailBulkVarsX_69;
                  MR_Word TailBulkVarsY_70;
                  MR_Word Var_77;
                  MR_Word STATE_VARIABLE_VarSet_82_82;
                  MR_Word STATE_VARIABLE_VarTypes_83_83;
                  MR_Word STATE_VARIABLE_MaybeAllArgs_84_84;
                  MR_Word STATE_VARIABLE_VarSet_85_85;
                  MR_Word STATE_VARIABLE_VarTypes_86_86;
                  MR_Word STATE_VARIABLE_VarSet_87_87;
                  MR_Word STATE_VARIABLE_VarTypes_88_88;
                  MR_Word STATE_VARIABLE_VarSet_89_89;
                  MR_Word STATE_VARIABLE_VarTypes_90_90;
                  MR_Word Var_93;
                  MR_Word Var_94;
                  MR_Word HeadVarX_154;
                  MR_Word HeadVarY_155;
                  MR_Word TailVarsX_156;
                  MR_Word TailVarsY_157;
                  MR_Word CurCompareResultVar_158;
                  MR_Word ConjoinKind_159;
                  MR_Word SubCompareGoal_160;
                  MR_Word ArgsLocn_161 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CompareHow_54, (MR_Integer) 0))));
                  MR_Word CellOffset_162 = ((MR_Word) ((MR_hl_field(MR_mktag(2), CompareHow_54, (MR_Integer) 1))));
                  MR_Word Shift_163;

                  {
                    Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[3]));
                    MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (check_hlds__unify_proc__generate_arg_compare_goals_15_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (UCParams_1));
                    MR_hl_field(MR_mktag(0), Var_77, 4) = ((MR_Box) (Type_47));
                  }
                  mercury__require__expect_not_3_p_0(Var_77, (MR_String) "predicate \140check_hlds.unify_proc.generate_arg_compare_goals\'/15", (MR_String) "sub-word-size argument of existential type");
                  check_hlds__unify_proc__make_fresh_var_pair_11_p_0(Var_202, (MR_String) "_ArgX", (MR_String) "_ArgY", ArgNum_7, Type_47, &HeadVarX_154, &HeadVarY_155, STATE_VARIABLE_VarSet_0_12, &STATE_VARIABLE_VarSet_82_82, STATE_VARIABLE_VarTypes_0_14, &STATE_VARIABLE_VarTypes_83_83);
                  check_hlds__unify_proc__get_bulk_comparable_packed_args_18_p_0(UCParams_1, CellOffset_162, ArgNum_7, &LeftOverArgNum_66, Shift0_64, &Shift_163, NumBits0_65, &NumBits_67, CtorArgRepns_39, &LeftOverCtorArgRepns_68, STATE_VARIABLE_MaybeAllArgs_76_76, &STATE_VARIABLE_MaybeAllArgs_84_84, &TailBulkVarsX_69, &TailBulkVarsY_70, STATE_VARIABLE_VarSet_82_82, &STATE_VARIABLE_VarSet_85_85, STATE_VARIABLE_VarTypes_83_83, &STATE_VARIABLE_VarTypes_86_86);
                  check_hlds__unify_proc__prepare_for_conjoining_arg_comparisons_9_p_0(LeftOverCtorArgRepns_68, ArgNum_7, ResultVar_5, &CurCompareResultVar_158, &ConjoinKind_159, STATE_VARIABLE_VarSet_85_85, &STATE_VARIABLE_VarSet_87_87, STATE_VARIABLE_VarTypes_86_86, &STATE_VARIABLE_VarTypes_88_88);
                  check_hlds__unify_proc__select_and_build_bulk_comparison_foreign_proc_17_p_0(Var_206, ArgsLocn_161, TermType_2, TermVarX_3, TermVarY_4, CurCompareResultVar_158, STATE_VARIABLE_MaybeAllArgs_84_84, ArgNum_7, CellOffset_162, Shift_163, NumBits_67, Context_53, &SubCompareGoal_160, STATE_VARIABLE_VarSet_87_87, &STATE_VARIABLE_VarSet_89_89, STATE_VARIABLE_VarTypes_88_88, &STATE_VARIABLE_VarTypes_90_90);
                  check_hlds__unify_proc__conjoin_arg_comparisons_16_p_0(UCParams_1, ConjoinKind_159, TermType_2, TermVarX_3, TermVarY_4, ResultVar_5, STATE_VARIABLE_MaybeAllArgs_84_84, LeftOverArgNum_66, SubCompareGoal_160, Goal_9, &TailVarsX_156, &TailVarsY_157, STATE_VARIABLE_VarSet_89_89, STATE_VARIABLE_VarSet_13, STATE_VARIABLE_VarTypes_90_90, STATE_VARIABLE_VarTypes_15);
                  {
                    Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (HeadVarX_154));
                    MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (TailBulkVarsX_69));
                  }
                  *HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), Var_93, TailVarsX_156);
                  {
                    Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (HeadVarY_155));
                    MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (TailBulkVarsY_70));
                  }
                  *HeadVar__11_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[1]), Var_94, TailVarsY_157);
                }
                break;
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_return_equal_3_p_0(
  MR_Word ResultVar_4,
  MR_Word Context_5,
  MR_Word * Goal_6)
{
  {
    MR_Word Var_7;
    MR_Word SymName_10;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Builtin_15;
    MR_Word Var_16;

    Builtin_15 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Builtin_15));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_13 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      SymName_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_10, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(1), SymName_10, 1) = ((MR_Box) ((MR_String) "="));
    }
    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_7, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_7, 1) = ((MR_Box) (SymName_10));
      MR_hl_field(MR_mktag(3), Var_7, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_7, 3) = ((MR_Box) (Var_12));
    }
    hlds__make_goal__make_const_construction_4_p_0(Context_5, ResultVar_4, Var_7, Goal_6);
  }
}

static void MR_CALL 
check_hlds__unify_proc__may_we_start_packing_at_this_arg_compare_5_p_0(
  MR_Word UCParams_6,
  MR_Word CtorArgRepn_7,
  MR_Word * CompareHow_8,
  MR_Word STATE_VARIABLE_MaybeAllArgs_0_31,
  MR_Word * STATE_VARIABLE_MaybeAllArgs_32)
{
  {
    MR_Word AllowPackedUnifyCompare_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UCParams_6, (MR_Integer) 4))) & (MR_Integer) 1);
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UCParams_6, (MR_Integer) 3))));

    switch (AllowPackedUnifyCompare_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        if ((Var_38 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *CompareHow_8 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_MaybeAllArgs_32 = STATE_VARIABLE_MaybeAllArgs_0_31;
        }
        else
        {
          MR_Word ArgsLocn_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 0))));
          MR_Word ArgPosWidth_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_7, (MR_Integer) 2))));

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
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_13, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word CellOffset_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_13, (MR_Integer) 2))));
                    MR_Word Shift_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_13, (MR_Integer) 3))));
                    MR_Word NumBits_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_13, (MR_Integer) 4))));
                    MR_Word Fill_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_13, (MR_Integer) 6))) & (MR_Integer) 7);

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
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *CompareHow_8 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ArgsLocn_12));
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (CellOffset_20));
                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Shift_21));
                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (NumBits_22));
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_String SignedIntSize_28 = ((MR_String) ((MR_hl_field(MR_mktag(1), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__unify_proc_scalar_common_2[0])), (MR_Integer) 0))));

                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *CompareHow_8 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgsLocn_12));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CellOffset_20));
                            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Shift_21));
                            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (SignedIntSize_28));
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_String SignedIntSize_70 = ((MR_String) ((MR_hl_field(MR_mktag(1), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__unify_proc_scalar_common_2[1])), (MR_Integer) 0))));

                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *CompareHow_8 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgsLocn_12));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CellOffset_20));
                            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Shift_21));
                            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (SignedIntSize_70));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String SignedIntSize_72 = ((MR_String) ((MR_hl_field(MR_mktag(1), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__unify_proc_scalar_common_2[2])), (MR_Integer) 0))));

                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *CompareHow_8 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgsLocn_12));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CellOffset_20));
                            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Shift_21));
                            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (SignedIntSize_72));
                          }
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word CellOffset_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_13, (MR_Integer) 2))));
                    MR_Word Shift_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_13, (MR_Integer) 3))));
                    MR_Word NumBits_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_13, (MR_Integer) 4))));
                    MR_Word Fill_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_13, (MR_Integer) 6))) & (MR_Integer) 7);

                    *STATE_VARIABLE_MaybeAllArgs_32 = STATE_VARIABLE_MaybeAllArgs_0_31;
                    switch (Fill_55) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 7:
                      case (MR_Integer) 0:
                      case (MR_Integer) 5:
                      case (MR_Integer) 6:
                      case (MR_Integer) 4:
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *CompareHow_8 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ArgsLocn_12));
                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (CellOffset_52));
                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Shift_53));
                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (NumBits_54));
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_String SignedIntSize_50 = ((MR_String) ((MR_hl_field(MR_mktag(1), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__unify_proc_scalar_common_2[0])), (MR_Integer) 0))));

                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *CompareHow_8 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgsLocn_12));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CellOffset_52));
                            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Shift_53));
                            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (SignedIntSize_50));
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_String SignedIntSize_74 = ((MR_String) ((MR_hl_field(MR_mktag(1), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__unify_proc_scalar_common_2[1])), (MR_Integer) 0))));

                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *CompareHow_8 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgsLocn_12));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CellOffset_52));
                            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Shift_53));
                            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (SignedIntSize_74));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String SignedIntSize_76 = ((MR_String) ((MR_hl_field(MR_mktag(1), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__unify_proc_scalar_common_2[2])), (MR_Integer) 0))));

                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *CompareHow_8 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgsLocn_12));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CellOffset_52));
                            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Shift_53));
                            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (SignedIntSize_76));
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
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_18_p_0_5(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2262__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_18_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2254__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_18_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_18_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__unify_proc__IntroducedFrom__pred__get_bulk_comparable_packed_args__2262__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_18_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc__get_bulk_comparable_packed_args_18_p_0(
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
  MR_Word STATE_VARIABLE_VarSet_0_15,
  MR_Word * STATE_VARIABLE_VarSet_16,
  MR_Word STATE_VARIABLE_VarTypes_0_17,
  MR_Word * STATE_VARIABLE_VarTypes_18)
{
  {
    MR_bool succeeded;

    if ((HeadVar__9_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__10_10 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__13_13 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__14_14 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_VarTypes_18 = STATE_VARIABLE_VarTypes_0_17;
      *STATE_VARIABLE_VarSet_16 = STATE_VARIABLE_VarSet_0_15;
      *STATE_VARIABLE_MaybeAllArgs_12 = STATE_VARIABLE_MaybeAllArgs_0_11;
      *STATE_VARIABLE_NumBits_8 = STATE_VARIABLE_NumBits_0_7;
      *STATE_VARIABLE_Shift_6 = STATE_VARIABLE_Shift_0_5;
      *STATE_VARIABLE_ArgNum_4 = STATE_VARIABLE_ArgNum_0_3;
    }
    else
    {
      MR_Word CtorArgRepn_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__9_9, (MR_Integer) 0))));
      MR_Word CtorArgRepns_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__9_9, (MR_Integer) 1))));
      MR_Word ArgPosWidth_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_44, (MR_Integer) 2))));
      MR_Word Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_44, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) ArgPosWidth_52)) {
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
            *STATE_VARIABLE_VarSet_16 = STATE_VARIABLE_VarSet_0_15;
            *STATE_VARIABLE_VarTypes_18 = STATE_VARIABLE_VarTypes_0_17;
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
            *STATE_VARIABLE_VarSet_16 = STATE_VARIABLE_VarSet_0_15;
            *STATE_VARIABLE_VarTypes_18 = STATE_VARIABLE_VarTypes_0_17;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 0))))) {
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
                *STATE_VARIABLE_VarSet_16 = STATE_VARIABLE_VarSet_0_15;
                *STATE_VARIABLE_VarTypes_18 = STATE_VARIABLE_VarTypes_0_17;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Fill_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 6))) & (MR_Integer) 7);
                MR_Word BulkComparability_217;

                BulkComparability_217 = check_hlds__unify_proc__fill_bulk_comparability_1_f_0(Fill_58);
                if ((BulkComparability_217 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word ArgNumBits_66;
                  MR_Integer ShiftInt0_69;
                  MR_Integer NumBitsInt0_70;
                  MR_Integer ArgNumBitsInt_72;
                  MR_Integer ShiftInt_73;
                  MR_Integer NumBitsInt_74;
                  MR_Word Var_109;
                  MR_Integer Var_112;
                  MR_Word Type_155 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_44, (MR_Integer) 1))));
                  MR_Word ArgCellOffset_156;
                  MR_Word GiveVarsTypes_157;
                  MR_Word HeadVarX_158;
                  MR_Word HeadVarY_159;
                  MR_Word TailVarsX_160;
                  MR_Word TailVarsY_161;
                  MR_Word Var_162;
                  MR_Word STATE_VARIABLE_Shift_113_165;
                  MR_Word STATE_VARIABLE_NumBits_114_166;
                  MR_Word Var_167;
                  MR_Word STATE_VARIABLE_VarSet_120_172;
                  MR_Word STATE_VARIABLE_VarTypes_121_173;
                  MR_Integer STATE_VARIABLE_ArgNum_122_174;

                  {
                    Var_162 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_162, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[3]));
                    MR_hl_field(MR_mktag(0), Var_162, 1) = ((MR_Box) (check_hlds__unify_proc__get_bulk_comparable_packed_args_18_p_0_3));
                    MR_hl_field(MR_mktag(0), Var_162, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_162, 3) = ((MR_Box) (HeadVar__1_1));
                    MR_hl_field(MR_mktag(0), Var_162, 4) = ((MR_Box) (Type_155));
                  }
                  mercury__require__expect_not_3_p_0(Var_162, (MR_String) "predicate \140check_hlds.unify_proc.get_bulk_comparable_packed_args\'/18", (MR_String) "sub-word-size argument of existential type");
                  ArgCellOffset_156 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 2))));
                  STATE_VARIABLE_Shift_113_165 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 3))));
                  ArgNumBits_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 4))));
                  ShiftInt0_69 = (MR_Integer) (STATE_VARIABLE_Shift_0_5);
                  NumBitsInt0_70 = (MR_Integer) (STATE_VARIABLE_NumBits_0_7);
                  ShiftInt_73 = (MR_Integer) (STATE_VARIABLE_Shift_113_165);
                  ArgNumBitsInt_72 = (MR_Integer) (ArgNumBits_66);
                  NumBitsInt_74 = (MR_Integer) ((MR_Unsigned) NumBitsInt0_70 + (MR_Unsigned) ArgNumBitsInt_72);
                  Var_112 = (MR_Integer) ((MR_Unsigned) ShiftInt_73 + (MR_Unsigned) ArgNumBitsInt_72);
                  {
                    Var_109 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_109, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[5]));
                    MR_hl_field(MR_mktag(0), Var_109, 1) = ((MR_Box) (check_hlds__unify_proc__get_bulk_comparable_packed_args_18_p_0_4));
                    MR_hl_field(MR_mktag(0), Var_109, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_109, 3) = ((MR_Box) (ShiftInt0_69));
                    MR_hl_field(MR_mktag(0), Var_109, 4) = ((MR_Box) (Var_112));
                  }
                  mercury__require__expect_3_p_0(Var_109, (MR_String) "predicate \140check_hlds.unify_proc.get_bulk_comparable_packed_args\'/18", (MR_String) "packed arg does not immediately follow previous");
                  STATE_VARIABLE_NumBits_114_166 = (MR_Word) (NumBitsInt_74);
                  {
                    Var_167 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_167, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[4]));
                    MR_hl_field(MR_mktag(0), Var_167, 1) = ((MR_Box) (check_hlds__unify_proc__get_bulk_comparable_packed_args_18_p_0_5));
                    MR_hl_field(MR_mktag(0), Var_167, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_167, 3) = ((MR_Box) (HeadVar__2_2));
                    MR_hl_field(MR_mktag(0), Var_167, 4) = ((MR_Box) (ArgCellOffset_156));
                  }
                  mercury__require__expect_3_p_0(Var_167, (MR_String) "predicate \140check_hlds.unify_proc.get_bulk_comparable_packed_args\'/18", (MR_String) "apw_{partial,none}_shifted offset != CellOffset");
                  GiveVarsTypes_157 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
                  check_hlds__unify_proc__make_fresh_var_pair_11_p_0(GiveVarsTypes_157, (MR_String) "_ArgX", (MR_String) "_ArgY", STATE_VARIABLE_ArgNum_0_3, Type_155, &HeadVarX_158, &HeadVarY_159, STATE_VARIABLE_VarSet_0_15, &STATE_VARIABLE_VarSet_120_172, STATE_VARIABLE_VarTypes_0_17, &STATE_VARIABLE_VarTypes_121_173);
                  STATE_VARIABLE_ArgNum_122_174 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ArgNum_0_3 + (MR_Unsigned) 1);
                  check_hlds__unify_proc__get_bulk_comparable_packed_args_18_p_0(HeadVar__1_1, HeadVar__2_2, STATE_VARIABLE_ArgNum_122_174, STATE_VARIABLE_ArgNum_4, STATE_VARIABLE_Shift_113_165, STATE_VARIABLE_Shift_6, STATE_VARIABLE_NumBits_114_166, STATE_VARIABLE_NumBits_8, CtorArgRepns_45, HeadVar__10_10, STATE_VARIABLE_MaybeAllArgs_0_11, STATE_VARIABLE_MaybeAllArgs_12, &TailVarsX_160, &TailVarsY_161, STATE_VARIABLE_VarSet_120_172, STATE_VARIABLE_VarSet_16, STATE_VARIABLE_VarTypes_121_173, STATE_VARIABLE_VarTypes_18);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__13_13 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVarX_158));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVarsX_160));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__14_14 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVarY_159));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVarsY_161));
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
                  *STATE_VARIABLE_VarSet_16 = STATE_VARIABLE_VarSet_0_15;
                  *STATE_VARIABLE_VarTypes_18 = STATE_VARIABLE_VarTypes_0_17;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgCellOffset_64;
                MR_Word GiveVarsTypes_76;
                MR_Word HeadVarX_77;
                MR_Word HeadVarY_78;
                MR_Word TailVarsX_79;
                MR_Word TailVarsY_80;
                MR_Word Var_106;
                MR_Word Var_115;
                MR_Word STATE_VARIABLE_VarSet_120_120;
                MR_Word STATE_VARIABLE_VarTypes_121_121;
                MR_Integer STATE_VARIABLE_ArgNum_122_122;

                {
                  Var_106 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[3]));
                  MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (check_hlds__unify_proc__get_bulk_comparable_packed_args_18_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_106, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_106, 3) = ((MR_Box) (HeadVar__1_1));
                  MR_hl_field(MR_mktag(0), Var_106, 4) = ((MR_Box) (Var_131));
                }
                mercury__require__expect_not_3_p_0(Var_106, (MR_String) "predicate \140check_hlds.unify_proc.get_bulk_comparable_packed_args\'/18", (MR_String) "sub-word-size argument of existential type");
                ArgCellOffset_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 2))));
                {
                  Var_115 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_115, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[4]));
                  MR_hl_field(MR_mktag(0), Var_115, 1) = ((MR_Box) (check_hlds__unify_proc__get_bulk_comparable_packed_args_18_p_0_2));
                  MR_hl_field(MR_mktag(0), Var_115, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_115, 3) = ((MR_Box) (HeadVar__2_2));
                  MR_hl_field(MR_mktag(0), Var_115, 4) = ((MR_Box) (ArgCellOffset_64));
                }
                mercury__require__expect_3_p_0(Var_115, (MR_String) "predicate \140check_hlds.unify_proc.get_bulk_comparable_packed_args\'/18", (MR_String) "apw_{partial,none}_shifted offset != CellOffset");
                GiveVarsTypes_76 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
                check_hlds__unify_proc__make_fresh_var_pair_11_p_0(GiveVarsTypes_76, (MR_String) "_ArgX", (MR_String) "_ArgY", STATE_VARIABLE_ArgNum_0_3, Var_131, &HeadVarX_77, &HeadVarY_78, STATE_VARIABLE_VarSet_0_15, &STATE_VARIABLE_VarSet_120_120, STATE_VARIABLE_VarTypes_0_17, &STATE_VARIABLE_VarTypes_121_121);
                STATE_VARIABLE_ArgNum_122_122 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ArgNum_0_3 + (MR_Unsigned) 1);
                check_hlds__unify_proc__get_bulk_comparable_packed_args_18_p_0(HeadVar__1_1, HeadVar__2_2, STATE_VARIABLE_ArgNum_122_122, STATE_VARIABLE_ArgNum_4, STATE_VARIABLE_Shift_0_5, STATE_VARIABLE_Shift_6, STATE_VARIABLE_NumBits_0_7, STATE_VARIABLE_NumBits_8, CtorArgRepns_45, HeadVar__10_10, STATE_VARIABLE_MaybeAllArgs_0_11, STATE_VARIABLE_MaybeAllArgs_12, &TailVarsX_79, &TailVarsY_80, STATE_VARIABLE_VarSet_120_120, STATE_VARIABLE_VarSet_16, STATE_VARIABLE_VarTypes_121_121, STATE_VARIABLE_VarTypes_18);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__13_13 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVarX_77));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVarsX_79));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__14_14 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadVarY_78));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailVarsY_80));
                }
              }
              break;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_var_pair_11_p_0(
  MR_Word GiveVarsTypes_12,
  MR_String PrefixX_13,
  MR_String PrefixY_14,
  MR_Integer Num_15,
  MR_Word Type_16,
  MR_Word * VarX_17,
  MR_Word * VarY_18,
  MR_Word STATE_VARIABLE_VarSet_0_22,
  MR_Word * STATE_VARIABLE_VarSet_23,
  MR_Word STATE_VARIABLE_VarTypes_0_24,
  MR_Word * STATE_VARIABLE_VarTypes_25)
{
  {
    MR_String NumStr_21;
    MR_String Var_26;
    MR_Word STATE_VARIABLE_VarSet_27_27;
    MR_String Var_28;

    NumStr_21 = mercury__string__int_to_string_1_f_0(Num_15);
    Var_26 = mercury__string__f_43_43_2_f_0(PrefixX_13, NumStr_21);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_26, VarX_17, STATE_VARIABLE_VarSet_0_22, &STATE_VARIABLE_VarSet_27_27);
    Var_28 = mercury__string__f_43_43_2_f_0(PrefixY_14, NumStr_21);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_28, VarY_18, STATE_VARIABLE_VarSet_27_27, STATE_VARIABLE_VarSet_23);
    switch (GiveVarsTypes_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_VarTypes_25 = STATE_VARIABLE_VarTypes_0_24;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_VarTypes_30_30;

          hlds__vartypes__add_var_type_4_p_0(*VarX_17, Type_16, STATE_VARIABLE_VarTypes_0_24, &STATE_VARIABLE_VarTypes_30_30);
          hlds__vartypes__add_var_type_4_p_0(*VarY_18, Type_16, STATE_VARIABLE_VarTypes_30_30, STATE_VARIABLE_VarTypes_25);
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
check_hlds__unify_proc__fill_bulk_comparability_1_f_0(
  MR_Word Fill_3)
{
  {
    MR_Word BulkComparability_4 = ((&check_hlds__unify_proc_vector_common_8[0 + Fill_3]))->check_hlds__unify_proc__vector_common_type_8_0__vct_8_f_0;

    return BulkComparability_4;
  }
}

static void MR_CALL 
check_hlds__unify_proc__select_and_build_bulk_comparison_foreign_proc_17_p_0(
  MR_Word ModuleInfo_18,
  MR_Word ArgsLocn_19,
  MR_Word TermType_20,
  MR_Word TermVarX_21,
  MR_Word TermVarY_22,
  MR_Word CompareResultVar_23,
  MR_Word MaybeAllArgs_24,
  MR_Integer ArgNum_25,
  MR_Word CellOffset_26,
  MR_Word Shift_27,
  MR_Word NumBits_28,
  MR_Word Context_29,
  MR_Word * CompareConjGoal_30,
  MR_Word STATE_VARIABLE_VarSet_0_67,
  MR_Word * STATE_VARIABLE_VarSet_68,
  MR_Word STATE_VARIABLE_VarTypes_0_69,
  MR_Word * STATE_VARIABLE_VarTypes_70)
{
  {
    MR_Word TermVarXForeignArg_33;
    MR_Word TermVarYForeignArg_34;
    MR_Word CompareResultForeignArg_35;
    MR_String ComparePredNameSuffix_45;
    MR_String ValuesDecl_46;
    MR_String ValuesCode_47;
    MR_Word MaybeShiftMaskArgs_48;
    MR_Word MaybeShiftMaskGoals_49;
    MR_String ComparePredName_56;
    MR_Word MaybeWordsArgs_57;
    MR_Word MaybeWordsGoals_58;
    MR_String WordsDecl_59;
    MR_String WordsCode_60;
    MR_Word ForeignArgs_62;
    MR_String ForeignCode_63;
    MR_Word CompareGoal_64;
    MR_Word CompareConjGoalExpr_65;
    MR_Word ContextGoalInfo_66;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_74;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_79;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word STATE_VARIABLE_VarSet_91_91;
    MR_Word STATE_VARIABLE_VarTypes_92_92;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_String Var_108;
    MR_String Var_109;
    MR_String Var_110;
    MR_Word Var_111;
    MR_Word Var_116;
    MR_Word Var_120;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;

    Var_74 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) ((MR_String) "TermVarX"));
      MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (Var_74));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
    }
    {
      TermVarXForeignArg_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TermVarXForeignArg_33, 0) = ((MR_Box) (TermVarX_21));
      MR_hl_field(MR_mktag(0), TermVarXForeignArg_33, 1) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), TermVarXForeignArg_33, 2) = ((MR_Box) (TermType_20));
      MR_hl_field(MR_mktag(0), TermVarXForeignArg_33, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_79 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) ((MR_String) "TermVarY"));
      MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (Var_79));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
    }
    {
      TermVarYForeignArg_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TermVarYForeignArg_34, 0) = ((MR_Box) (TermVarY_22));
      MR_hl_field(MR_mktag(0), TermVarYForeignArg_34, 1) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), TermVarYForeignArg_34, 2) = ((MR_Box) (TermType_20));
      MR_hl_field(MR_mktag(0), TermVarYForeignArg_34, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_84 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) ((MR_String) "ResultVar"));
      MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) (Var_84));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
    }
    Var_85 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
    {
      CompareResultForeignArg_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CompareResultForeignArg_35, 0) = ((MR_Box) (CompareResultVar_23));
      MR_hl_field(MR_mktag(0), CompareResultForeignArg_35, 1) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), CompareResultForeignArg_35, 2) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), CompareResultForeignArg_35, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    switch (MaybeAllArgs_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          ComparePredNameSuffix_45 = (MR_String) "words";
          ValuesDecl_46 = (MR_String) "\n        MR_Unsigned value_x;\n        MR_Unsigned value_y;\n    ";
          ValuesCode_47 = (MR_String) "\n        value_x = word_x;\n        value_y = word_y;\n    ";
          MaybeShiftMaskArgs_48 = (MR_Word) ((MR_Unsigned) 0U);
          MaybeShiftMaskGoals_49 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_VarSet_91_91 = STATE_VARIABLE_VarSet_0_67;
          STATE_VARIABLE_VarTypes_92_92 = STATE_VARIABLE_VarTypes_0_69;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Integer ShiftInt_50;
          MR_Word ShiftForeignArg_51;
          MR_Word MakeShiftGoal_52;
          MR_Integer NumBitsInt_53;
          MR_Word NumBitsForeignArg_54;
          MR_Word MakeNumBitsGoal_55;
          MR_Word STATE_VARIABLE_VarSet_88_88;
          MR_Word STATE_VARIABLE_VarTypes_89_89;
          MR_Word Var_93;
          MR_Word Var_95;

          ComparePredNameSuffix_45 = (MR_String) "bitfields";
          ShiftInt_50 = (MR_Integer) (Shift_27);
          check_hlds__unify_proc__make_fresh_int_var_and_arg_10_p_0(Context_29, (MR_String) "ShiftVar", ArgNum_25, ShiftInt_50, &ShiftForeignArg_51, &MakeShiftGoal_52, STATE_VARIABLE_VarSet_0_67, &STATE_VARIABLE_VarSet_88_88, STATE_VARIABLE_VarTypes_0_69, &STATE_VARIABLE_VarTypes_89_89);
          NumBitsInt_53 = (MR_Integer) (NumBits_28);
          check_hlds__unify_proc__make_fresh_int_var_and_arg_10_p_0(Context_29, (MR_String) "NumBitsVar", ArgNum_25, NumBitsInt_53, &NumBitsForeignArg_54, &MakeNumBitsGoal_55, STATE_VARIABLE_VarSet_88_88, &STATE_VARIABLE_VarSet_91_91, STATE_VARIABLE_VarTypes_89_89, &STATE_VARIABLE_VarTypes_92_92);
          ValuesDecl_46 = (MR_String) "\n        MR_Unsigned mask;\n        MR_Unsigned value_x;\n        MR_Unsigned value_y;\n    ";
          ValuesCode_47 = (MR_String) "\n        mask = (MR_Unsigned) ((UINT64_C(1) << NumBitsVar) - 1);\n        value_x = (word_x >> ShiftVar) & mask;\n        value_y = (word_y >> ShiftVar) & mask;\n " "   ";
          {
            Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (NumBitsForeignArg_54));
            MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MaybeShiftMaskArgs_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeShiftMaskArgs_48, 0) = ((MR_Box) (ShiftForeignArg_51));
            MR_hl_field(MR_mktag(1), MaybeShiftMaskArgs_48, 1) = ((MR_Box) (Var_93));
          }
          {
            Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (MakeNumBitsGoal_55));
            MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MaybeShiftMaskGoals_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeShiftMaskGoals_49, 0) = ((MR_Box) (MakeShiftGoal_52));
            MR_hl_field(MR_mktag(1), MaybeShiftMaskGoals_49, 1) = ((MR_Box) (Var_95));
          }
        }
        break;
    }
    if ((ArgsLocn_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      ComparePredName_56 = mercury__string__f_43_43_2_f_0((MR_String) "compare_local_uint_", ComparePredNameSuffix_45);
      MaybeWordsArgs_57 = (MR_Word) ((MR_Unsigned) 0U);
      MaybeWordsGoals_58 = (MR_Word) ((MR_Unsigned) 0U);
      WordsDecl_59 = (MR_String) "\n        MR_Unsigned word_x;\n        MR_Unsigned word_y;\n    ";
      WordsCode_60 = (MR_String) "\n        word_x = (MR_Unsigned) TermVarX;\n        word_y = (MR_Unsigned) TermVarY;\n    ";
      *STATE_VARIABLE_VarSet_68 = STATE_VARIABLE_VarSet_91_91;
      *STATE_VARIABLE_VarTypes_70 = STATE_VARIABLE_VarTypes_92_92;
    }
    else
    {
      MR_Word Ptag_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgsLocn_19, (MR_Integer) 0))));

      ComparePredName_56 = mercury__string__f_43_43_2_f_0((MR_String) "compare_remote_uint_", ComparePredNameSuffix_45);
      check_hlds__unify_proc__make_ptag_and_cell_offset_args_10_p_0(ArgNum_25, Ptag_61, CellOffset_26, Context_29, &MaybeWordsArgs_57, &MaybeWordsGoals_58, STATE_VARIABLE_VarSet_91_91, STATE_VARIABLE_VarSet_68, STATE_VARIABLE_VarTypes_92_92, STATE_VARIABLE_VarTypes_70);
      WordsDecl_59 = (MR_String) "\n        MR_Unsigned *cell_x;\n        MR_Unsigned *cell_y;\n        MR_Unsigned word_x;\n        MR_Unsigned word_y;\n    ";
      WordsCode_60 = (MR_String) "\n        cell_x = (MR_Unsigned *)\n            (((MR_Unsigned) TermVarX) - (MR_Unsigned) Ptag);\n        cell_y = (MR_Unsigned *)\n            (((MR_Unsigned) Term" "VarY) - (MR_Unsigned) Ptag);\n        word_x = cell_x[CellOffsetVar];\n        word_y = cell_y[CellOffsetVar];\n    ";
    }
    {
      Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (TermVarYForeignArg_34));
      MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (TermVarXForeignArg_33));
      MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_102));
    }
    {
      Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (CompareResultForeignArg_35));
      MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), MaybeShiftMaskArgs_48, Var_106);
    Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), MaybeWordsArgs_57, Var_105);
    ForeignArgs_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), Var_101, Var_104);
    Var_110 = mercury__string__f_43_43_2_f_0(ValuesCode_47, (MR_String) "\n        if (value_x < value_y) {\n            ResultVar = MR_COMPARE_LESS;\n        } else if (value_x > value_y) {\n            ResultVar = MR_COMPARE_GREATER;\n " "       } else {\n            ResultVar = MR_COMPARE_EQUAL;\n        }\n    ");
    Var_109 = mercury__string__f_43_43_2_f_0(WordsCode_60, Var_110);
    Var_108 = mercury__string__f_43_43_2_f_0(ValuesDecl_46, Var_109);
    ForeignCode_63 = mercury__string__f_43_43_2_f_0(WordsDecl_59, Var_108);
    Var_111 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    Var_116 = check_hlds__unify_proc__pure_proc_foreign_attributes_0_f_0();
    Var_120 = hlds__instmap__instmap_delta_bind_var_1_f_0(CompareResultVar_23);
    hlds__goal_util__generate_foreign_proc_16_p_0(ModuleInfo_18, Var_111, ComparePredName_56, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Integer) 0, Var_116, ForeignArgs_62, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), ForeignCode_63, (MR_Word) ((MR_Unsigned) 0U), Var_120, Context_29, &CompareGoal_64);
    {
      Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (CompareGoal_64));
      MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), MaybeShiftMaskGoals_49, Var_124);
    Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), MaybeWordsGoals_58, Var_123);
    {
      CompareConjGoalExpr_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CompareConjGoalExpr_65, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), CompareConjGoalExpr_65, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), CompareConjGoalExpr_65, 2) = ((MR_Box) (Var_122));
    }
    hlds__hlds_goal__goal_info_init_2_p_0(Context_29, &ContextGoalInfo_66);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *CompareConjGoal_30 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CompareConjGoalExpr_65));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ContextGoalInfo_66));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__select_and_build_signed_comparison_foreign_proc_16_p_0(
  MR_Word ModuleInfo_17,
  MR_Word ArgsLocn_18,
  MR_Word TermType_19,
  MR_Word TermVarX_20,
  MR_Word TermVarY_21,
  MR_Word CompareResultVar_22,
  MR_Integer ArgNum_23,
  MR_Word CellOffset_24,
  MR_Word Shift_25,
  MR_String SizeStr_26,
  MR_Word Context_27,
  MR_Word * CompareConjGoal_28,
  MR_Word STATE_VARIABLE_VarSet_0_55,
  MR_Word * STATE_VARIABLE_VarSet_56,
  MR_Word STATE_VARIABLE_VarTypes_0_57,
  MR_Word * STATE_VARIABLE_VarTypes_58)
{
  {
    MR_Word TermVarXForeignArg_31;
    MR_Word TermVarYForeignArg_32;
    MR_Word CompareResultForeignArg_33;
    MR_String ValuesDecl_38;
    MR_String ValuesCode_39;
    MR_Integer ShiftInt_41;
    MR_Word ShiftForeignArg_42;
    MR_Word MakeShiftGoal_43;
    MR_String ComparePredName_44;
    MR_Word MaybeWordsArgs_45;
    MR_Word MaybeWordsGoals_46;
    MR_String WordsDecl_47;
    MR_String WordsCode_48;
    MR_Word ForeignArgs_50;
    MR_String ForeignCode_51;
    MR_Word CompareGoal_52;
    MR_Word CompareConjGoalExpr_53;
    MR_Word ContextGoalInfo_54;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_62;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_67;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word STATE_VARIABLE_VarSet_90_90;
    MR_Word STATE_VARIABLE_VarTypes_91_91;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_String Var_109;
    MR_String Var_110;
    MR_String Var_111;
    MR_Word Var_112;
    MR_Word Var_117;
    MR_Word Var_121;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_String Var_130;
    MR_String Var_132;
    MR_String Var_133;
    MR_String Var_136;
    MR_String Var_138;
    MR_String Var_139;
    MR_String Var_141;
    MR_String Var_142;

    Var_62 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) ((MR_String) "TermVarX"));
      MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
    }
    {
      TermVarXForeignArg_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TermVarXForeignArg_31, 0) = ((MR_Box) (TermVarX_20));
      MR_hl_field(MR_mktag(0), TermVarXForeignArg_31, 1) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), TermVarXForeignArg_31, 2) = ((MR_Box) (TermType_19));
      MR_hl_field(MR_mktag(0), TermVarXForeignArg_31, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_67 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) ((MR_String) "TermVarY"));
      MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
    }
    {
      TermVarYForeignArg_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TermVarYForeignArg_32, 0) = ((MR_Box) (TermVarY_21));
      MR_hl_field(MR_mktag(0), TermVarYForeignArg_32, 1) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), TermVarYForeignArg_32, 2) = ((MR_Box) (TermType_19));
      MR_hl_field(MR_mktag(0), TermVarYForeignArg_32, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_72 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) ((MR_String) "ResultVar"));
      MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (Var_72));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
    }
    Var_73 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
    {
      CompareResultForeignArg_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CompareResultForeignArg_33, 0) = ((MR_Box) (CompareResultVar_22));
      MR_hl_field(MR_mktag(0), CompareResultForeignArg_33, 1) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), CompareResultForeignArg_33, 2) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), CompareResultForeignArg_33, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_130 = mercury__string__f_43_43_2_f_0(SizeStr_26, (MR_String) "_t     value_y;\n    ");
    Var_132 = mercury__string__f_43_43_2_f_0((MR_String) "_t     value_x;\n        int", Var_130);
    Var_133 = mercury__string__f_43_43_2_f_0(SizeStr_26, Var_132);
    ValuesDecl_38 = mercury__string__f_43_43_2_f_0((MR_String) "\n        MR_Unsigned mask;\n        int", Var_133);
    Var_136 = mercury__string__f_43_43_2_f_0(SizeStr_26, (MR_String) "_t) (word_y >> ShiftVar) & mask;\n    ");
    Var_138 = mercury__string__f_43_43_2_f_0((MR_String) "_t) (word_x >> ShiftVar) & mask;\n        value_y = (int", Var_136);
    Var_139 = mercury__string__f_43_43_2_f_0(SizeStr_26, Var_138);
    Var_141 = mercury__string__f_43_43_2_f_0((MR_String) ") - 1);\n        value_x = (int", Var_139);
    Var_142 = mercury__string__f_43_43_2_f_0(SizeStr_26, Var_141);
    ValuesCode_39 = mercury__string__f_43_43_2_f_0((MR_String) "\n        mask = (MR_Unsigned) ((UINT64_C(1) << ", Var_142);
    ShiftInt_41 = (MR_Integer) (Shift_25);
    check_hlds__unify_proc__make_fresh_int_var_and_arg_10_p_0(Context_27, (MR_String) "ShiftVar", ArgNum_23, ShiftInt_41, &ShiftForeignArg_42, &MakeShiftGoal_43, STATE_VARIABLE_VarSet_0_55, &STATE_VARIABLE_VarSet_90_90, STATE_VARIABLE_VarTypes_0_57, &STATE_VARIABLE_VarTypes_91_91);
    if ((ArgsLocn_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_148;

      Var_148 = mercury__string__f_43_43_2_f_0(SizeStr_26, (MR_String) "_bitfields");
      ComparePredName_44 = mercury__string__f_43_43_2_f_0((MR_String) "compare_local_int", Var_148);
      MaybeWordsArgs_45 = (MR_Word) ((MR_Unsigned) 0U);
      MaybeWordsGoals_46 = (MR_Word) ((MR_Unsigned) 0U);
      WordsDecl_47 = (MR_String) "\n        MR_Unsigned word_x;\n        MR_Unsigned word_y;\n    ";
      WordsCode_48 = (MR_String) "\n        word_x = (MR_Unsigned) TermVarX;\n        word_y = (MR_Unsigned) TermVarY;\n    ";
      *STATE_VARIABLE_VarSet_56 = STATE_VARIABLE_VarSet_90_90;
      *STATE_VARIABLE_VarTypes_58 = STATE_VARIABLE_VarTypes_91_91;
    }
    else
    {
      MR_Word Ptag_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgsLocn_18, (MR_Integer) 0))));
      MR_String Var_145;

      Var_145 = mercury__string__f_43_43_2_f_0(SizeStr_26, (MR_String) "_bitfields");
      ComparePredName_44 = mercury__string__f_43_43_2_f_0((MR_String) "compare_remote_int", Var_145);
      check_hlds__unify_proc__make_ptag_and_cell_offset_args_10_p_0(ArgNum_23, Ptag_49, CellOffset_24, Context_27, &MaybeWordsArgs_45, &MaybeWordsGoals_46, STATE_VARIABLE_VarSet_90_90, STATE_VARIABLE_VarSet_56, STATE_VARIABLE_VarTypes_91_91, STATE_VARIABLE_VarTypes_58);
      WordsDecl_47 = (MR_String) "\n        MR_Unsigned *cell_x;\n        MR_Unsigned *cell_y;\n        MR_Unsigned word_x;\n        MR_Unsigned word_y;\n    ";
      WordsCode_48 = (MR_String) "\n        cell_x = (MR_Unsigned *)\n            (((MR_Unsigned) TermVarX) - (MR_Unsigned) Ptag);\n        cell_y = (MR_Unsigned *)\n            (((MR_Unsigned) Term" "VarY) - (MR_Unsigned) Ptag);\n        word_x = cell_x[CellOffsetVar];\n        word_y = cell_y[CellOffsetVar];\n    ";
    }
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (TermVarYForeignArg_32));
      MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (TermVarXForeignArg_31));
      MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_103));
    }
    {
      Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (CompareResultForeignArg_33));
      MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (ShiftForeignArg_42));
      MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_107));
    }
    Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), MaybeWordsArgs_45, Var_106);
    ForeignArgs_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), Var_102, Var_105);
    Var_111 = mercury__string__f_43_43_2_f_0(ValuesCode_39, (MR_String) "\n        if (value_x < value_y) {\n            ResultVar = MR_COMPARE_LESS;\n        } else if (value_x > value_y) {\n            ResultVar = MR_COMPARE_GREATER;\n " "       } else {\n            ResultVar = MR_COMPARE_EQUAL;\n        }\n    ");
    Var_110 = mercury__string__f_43_43_2_f_0(WordsCode_48, Var_111);
    Var_109 = mercury__string__f_43_43_2_f_0(ValuesDecl_38, Var_110);
    ForeignCode_51 = mercury__string__f_43_43_2_f_0(WordsDecl_47, Var_109);
    Var_112 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    Var_117 = check_hlds__unify_proc__pure_proc_foreign_attributes_0_f_0();
    Var_121 = hlds__instmap__instmap_delta_bind_var_1_f_0(CompareResultVar_22);
    hlds__goal_util__generate_foreign_proc_16_p_0(ModuleInfo_17, Var_112, ComparePredName_44, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Integer) 0, Var_117, ForeignArgs_50, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), ForeignCode_51, (MR_Word) ((MR_Unsigned) 0U), Var_121, Context_27, &CompareGoal_52);
    {
      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (CompareGoal_52));
      MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (MakeShiftGoal_43));
      MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_125));
    }
    Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), MaybeWordsGoals_46, Var_124);
    {
      CompareConjGoalExpr_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CompareConjGoalExpr_53, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), CompareConjGoalExpr_53, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), CompareConjGoalExpr_53, 2) = ((MR_Box) (Var_123));
    }
    hlds__hlds_goal__goal_info_init_2_p_0(Context_27, &ContextGoalInfo_54);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *CompareConjGoal_28 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CompareConjGoalExpr_53));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ContextGoalInfo_54));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_ptag_and_cell_offset_args_10_p_0(
  MR_Integer ArgNum_11,
  MR_Word Ptag_12,
  MR_Word CellOffset_13,
  MR_Word Context_14,
  MR_Word * Args_15,
  MR_Word * Goals_16,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27,
  MR_Word STATE_VARIABLE_VarTypes_0_28,
  MR_Word * STATE_VARIABLE_VarTypes_29)
{
  {
    uint8_t PtagUint8_19 = (uint8_t) (Ptag_12);
    MR_Integer PtagInt_20;
    MR_Word PtagForeignArg_21;
    MR_Word MakePtagGoal_22;
    MR_Integer CellOffsetInt_23;
    MR_Word CellOffsetForeignArg_24;
    MR_Word MakeCellOffsetGoal_25;
    MR_Word STATE_VARIABLE_VarSet_31_31;
    MR_Word STATE_VARIABLE_VarTypes_32_32;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Type_52;
    MR_Word Var_53;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_String NumStr_72;
    MR_String Var_73;

    PtagInt_20 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_19);
    Type_52 = parse_tree__builtin_lib_types__int_type_0_f_0();
    NumStr_72 = mercury__string__int_to_string_1_f_0(ArgNum_11);
    Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "Ptag", NumStr_72);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_73, &Var_53, STATE_VARIABLE_VarSet_0_26, &STATE_VARIABLE_VarSet_31_31);
    hlds__vartypes__add_var_type_4_p_0(Var_53, Type_52, STATE_VARIABLE_VarTypes_0_28, &STATE_VARIABLE_VarTypes_32_32);
    Var_59 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) ((MR_String) "Ptag"));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
    }
    {
      PtagForeignArg_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PtagForeignArg_21, 0) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), PtagForeignArg_21, 1) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), PtagForeignArg_21, 2) = ((MR_Box) (Type_52));
      MR_hl_field(MR_mktag(0), PtagForeignArg_21, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    hlds__make_goal__make_int_const_construction_4_p_0(Context_14, Var_53, PtagInt_20, &MakePtagGoal_22);
    CellOffsetInt_23 = (MR_Integer) (CellOffset_13);
    check_hlds__unify_proc__make_fresh_int_var_and_arg_10_p_0(Context_14, (MR_String) "CellOffsetVar", ArgNum_11, CellOffsetInt_23, &CellOffsetForeignArg_24, &MakeCellOffsetGoal_25, STATE_VARIABLE_VarSet_31_31, STATE_VARIABLE_VarSet_27, STATE_VARIABLE_VarTypes_32_32, STATE_VARIABLE_VarTypes_29);
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (CellOffsetForeignArg_24));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Args_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PtagForeignArg_21));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MakeCellOffsetGoal_25));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Goals_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MakePtagGoal_22));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_38));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_int_var_and_arg_10_p_0(
  MR_Word Context_11,
  MR_String Name_12,
  MR_Integer SuffixInt_13,
  MR_Integer Value_14,
  MR_Word * Arg_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word STATE_VARIABLE_VarTypes_0_23,
  MR_Word * STATE_VARIABLE_VarTypes_24)
{
  {
    MR_Word Type_19;
    MR_Word Var_20;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_String NumStr_43;
    MR_String Var_44;

    Type_19 = parse_tree__builtin_lib_types__int_type_0_f_0();
    NumStr_43 = mercury__string__int_to_string_1_f_0(SuffixInt_13);
    Var_44 = mercury__string__f_43_43_2_f_0(Name_12, NumStr_43);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_44, &Var_20, STATE_VARIABLE_VarSet_0_21, STATE_VARIABLE_VarSet_22);
    hlds__vartypes__add_var_type_4_p_0(Var_20, Type_19, STATE_VARIABLE_VarTypes_0_23, STATE_VARIABLE_VarTypes_24);
    Var_30 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Name_12));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *Arg_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Type_19));
      MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    hlds__make_goal__make_int_const_construction_4_p_0(Context_11, Var_20, Value_14, Goal_16);
  }
}

static MR_Word MR_CALL 
check_hlds__unify_proc__pure_proc_foreign_attributes_0_f_0(void)
{
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
}

static void MR_CALL 
check_hlds__unify_proc__prepare_for_conjoining_arg_comparisons_9_p_0(
  MR_Word CtorArgRepns_10,
  MR_Integer ArgNum_11,
  MR_Word ResultVar_12,
  MR_Word * CurCompareResultVar_13,
  MR_Word * ConjoinKind_14,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_VarTypes_0_21,
  MR_Word * STATE_VARIABLE_VarTypes_22)
{
  if ((CtorArgRepns_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *CurCompareResultVar_13 = ResultVar_12;
    *ConjoinKind_14 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarSet_20 = STATE_VARIABLE_VarSet_0_19;
    *STATE_VARIABLE_VarTypes_22 = STATE_VARIABLE_VarTypes_0_21;
  }
  else
  {
    MR_Word HeadCtorArgRepn_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgRepns_10, (MR_Integer) 0))));
    MR_Word TailCtorArgRepns_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorArgRepns_10, (MR_Integer) 1))));
    MR_Word Var_25;
    MR_String NumStr_39;
    MR_String Var_40;

    Var_25 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
    NumStr_39 = mercury__string__int_to_string_1_f_0(ArgNum_11);
    Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "SubResult", NumStr_39);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_40, CurCompareResultVar_13, STATE_VARIABLE_VarSet_0_19, STATE_VARIABLE_VarSet_20);
    hlds__vartypes__add_var_type_4_p_0(*CurCompareResultVar_13, Var_25, STATE_VARIABLE_VarTypes_0_21, STATE_VARIABLE_VarTypes_22);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *ConjoinKind_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadCtorArgRepn_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailCtorArgRepns_18));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (*CurCompareResultVar_13));
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__ExistQTVar_7 = ((MR_Word) ((env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__conv0_ExistQTVar_7));
    check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_2(env_ptr);
  }
}

static void MR_CALL 
check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__TypeInfo_16_16 = (MR_Word) (&check_hlds__unify_proc_scalar_common_1[0]);
    (env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__TypeInfo_16_16, ((MR_Box) ((env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__ExistQTVar_7)), ((MR_Box) ((env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__Var_15)));
    if ((env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__succeeded)
      check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0_s * env_ptr = (struct check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0_s *) (env_ptr_arg);

    parse_tree__prog_type__type_contains_var_2_p_0((env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__Type_4, &(env_ptr)->check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__Var_15, check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_4, env_ptr);
  }
}

static void MR_CALL 
check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_5(
  void * env_ptr_arg)
{
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
}

static MR_bool MR_CALL 
check_hlds__unify_proc__type_contains_existq_tvar_2_p_0(
  MR_Word UCParams_3,
  MR_Word Type_4)
{
  {
    struct check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0_s env;

    (env).check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__Type_4 = Type_4;
    {
      MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UCParams_3, (MR_Integer) 0))));
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UCParams_3, (MR_Integer) 1))));
      MR_Word Var_10;
      MR_Word Var_11;
      MR_Word Var_12;
      MR_Word Var_13;
      MR_Unsigned packed_word_0;

      (env).check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__ExistQTVars_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UCParams_3, (MR_Integer) 2))));
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UCParams_3, (MR_Integer) 3))));
      packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), UCParams_3, (MR_Integer) 4)));
      Var_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UCParams_3, (MR_Integer) 4))) >> 2)) & (MR_Integer) 1);
      Var_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UCParams_3, (MR_Integer) 4))) >> 1)) & (MR_Integer) 1);
      Var_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UCParams_3, (MR_Integer) 4))) & (MR_Integer) 1);
      check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_5(&env);
      return (env).check_hlds__unify_proc__type_contains_existq_tvar_2_p_0_env_0__succeeded;
    }
  }
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
  {
    MR_Word MaybeExistConstraintsA_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepnA_12, (MR_Integer) 1))));
    MR_Word FunctorNameA_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepnA_12, (MR_Integer) 2))));
    MR_Word ArgRepnsA_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepnA_12, (MR_Integer) 4))));
    MR_Word MaybeExistConstraintsB_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepnB_13, (MR_Integer) 1))));
    MR_Word FunctorNameB_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepnB_13, (MR_Integer) 2))));
    MR_Word ArgRepnsB_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepnB_13, (MR_Integer) 4))));
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
    MR_Word SymName_80;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Builtin_85;
    MR_Word Var_86;

    mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), ArgRepnsA_24, &FunctorArityA_34);
    mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), ArgRepnsB_31, &FunctorArityB_35);
    TypeCtor_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_11, (MR_Integer) 4))));
    {
      FunctorConsIdA_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FunctorConsIdA_37, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), FunctorConsIdA_37, 1) = ((MR_Box) (FunctorNameA_22));
      MR_hl_field(MR_mktag(3), FunctorConsIdA_37, 2) = ((MR_Box) (FunctorArityA_34));
      MR_hl_field(MR_mktag(3), FunctorConsIdA_37, 3) = ((MR_Box) (TypeCtor_36));
    }
    {
      FunctorConsIdB_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), FunctorConsIdB_38, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), FunctorConsIdB_38, 1) = ((MR_Box) (FunctorNameB_29));
      MR_hl_field(MR_mktag(3), FunctorConsIdB_38, 2) = ((MR_Box) (FunctorArityB_35));
      MR_hl_field(MR_mktag(3), FunctorConsIdB_38, 3) = ((MR_Box) (TypeCtor_36));
    }
    check_hlds__unify_proc__make_fresh_vars_for_cons_args_5_p_0(ArgRepnsA_24, MaybeExistConstraintsA_21, &VarsA_39, STATE_VARIABLE_Info_0_50, &STATE_VARIABLE_Info_52_52);
    check_hlds__unify_proc__make_fresh_vars_for_cons_args_5_p_0(ArgRepnsB_31, MaybeExistConstraintsB_28, &VarsB_40, STATE_VARIABLE_Info_52_52, STATE_VARIABLE_Info_51);
    {
      RHSA_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RHSA_41, 0) = ((MR_Box) (FunctorConsIdA_37));
      MR_hl_field(MR_mktag(1), RHSA_41, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), RHSA_41, 2) = ((MR_Box) (VarsA_39));
    }
    {
      RHSB_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RHSB_42, 0) = ((MR_Box) (FunctorConsIdB_38));
      MR_hl_field(MR_mktag(1), RHSB_42, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), RHSB_42, 2) = ((MR_Box) (VarsB_40));
    }
    Context_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_11, (MR_Integer) 7))));
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(X_16, RHSA_41, Context_43, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyX_44);
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(Y_17, RHSB_42, Context_43, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &GoalUnifyY_45);
    Builtin_85 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Builtin_85));
      MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_83 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      SymName_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_80, 0) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(1), SymName_80, 1) = ((MR_Box) (CompareOp_14));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (SymName_80));
      MR_hl_field(MR_mktag(3), Var_60, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_60, 3) = ((MR_Box) (Var_82));
    }
    hlds__make_goal__make_const_construction_4_p_0(Context_43, R_15, Var_60, &ReturnResult_46);
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (ReturnResult_46));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (GoalUnifyY_45));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_62));
    }
    {
      GoalList_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalList_47, 0) = ((MR_Box) (GoalUnifyX_44));
      MR_hl_field(MR_mktag(1), GoalList_47, 1) = ((MR_Box) (Var_61));
    }
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_48);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_43, GoalInfo0_48, &GoalInfo_49);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(GoalList_47, GoalInfo_49, Case_18);
  }
}

static MR_Box MR_CALL 
check_hlds__unify_proc__make_fresh_vars_for_cons_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_21;

    conv0_LambdaHeadVar__2_21 = check_hlds__unify_proc__IntroducedFrom__func__make_fresh_vars_for_cons_args__2867__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_21));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_vars_for_cons_args_5_p_0(
  MR_Word CtorArgs_6,
  MR_Word MaybeExistConstraints_7,
  MR_Word * Vars_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  if ((MaybeExistConstraints_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ArgTypes_10;

    ArgTypes_10 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__unify_proc_scalar_common_5[2]), CtorArgs_6);
    check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(ArgTypes_10, Vars_8, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
  }
  else
  {
    MR_Word VarSet0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 1))));
    MR_Integer NumVars_14;
    MR_Word VarSet_15;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;

    mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), CtorArgs_6, &NumVars_14);
    mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NumVars_14, Vars_8, VarSet0_13, &VarSet_15);
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 0))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 2))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 3))));
    Var_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 4))) & (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarSet_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (Var_46));
    }
  }
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
    MR_Word Type_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Types_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Vars_11;
    MR_Word STATE_VARIABLE_Info_15_15;
    MR_Word VarSet0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 1))));
    MR_Word VarTypes0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 2))));
    MR_Word VarSet_24;
    MR_Word VarTypes_25;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Word Var_40;

    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &Var_10, VarSet0_22, &VarSet_24);
    hlds__vartypes__add_var_type_4_p_0(Var_10, Type_8, VarTypes0_23, &VarTypes_25);
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 0))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 3))));
    Var_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_3, (MR_Integer) 4))) & (MR_Integer) 1);
    {
      STATE_VARIABLE_Info_15_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 1) = ((MR_Box) (VarSet_24));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 2) = ((MR_Box) (VarTypes_25));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 3) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_15_15, 4) = (MR_Box) ((MR_Unsigned) (Var_40));
    }
    check_hlds__unify_proc__make_fresh_vars_from_types_4_p_0(Types_9, &Vars_11, STATE_VARIABLE_Info_15_15, STATE_VARIABLE_Info_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars_11));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__is_ctor_with_all_locally_packed_unsigned_args_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__unify_proc__IntroducedFrom__pred__is_ctor_with_all_locally_packed_unsigned_args__1360__1_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__is_ctor_with_all_locally_packed_unsigned_args_2_p_0(
  MR_Word CtorRepn_3,
  uint8_t * PtagUint8_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_41_41;
    MR_Word ConsTag_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_3, (MR_Integer) 3))));
    MR_Word CtorArgRepns_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_3, (MR_Integer) 4))));
    MR_Integer Arity_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CtorRepn_3, (MR_Integer) 5))));
    MR_Word LocalArgsTagInfo_12;
    MR_Word IsArgUnsignedComparable_17;

    succeeded = (Arity_10 > (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) ConsTag_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 0)))) == (MR_Integer) 12)));
      if (succeeded)
      {
        LocalArgsTagInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_8, (MR_Integer) 1))));
        if ((LocalArgsTagInfo_12 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *PtagUint8_4 = UINT8_C(0);
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Ptag_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgsTagInfo_12, (MR_Integer) 0))));
          MR_Word LocalSecTag_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgsTagInfo_12, (MR_Integer) 1))));
          MR_Unsigned Var_34;

          *PtagUint8_4 = (uint8_t) (Ptag_13);
          Var_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSecTag_14, (MR_Integer) 0))));
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
  {
    MR_Word ModuleInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 0))));
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

    IntType_15 = parse_tree__builtin_lib_types__int_type_0_f_0();
    check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(IntType_15, (MR_String) "Cast_HeadVar", (MR_Integer) 1, &CastX_16, STATE_VARIABLE_Info_0_24, &STATE_VARIABLE_Info_28_28);
    check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(IntType_15, (MR_String) "Cast_HeadVar", (MR_Integer) 2, &CastY_17, STATE_VARIABLE_Info_28_28, &STATE_VARIABLE_Info_31_31);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, X_10, CastX_16, Context_8, &CastXGoal_18);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Y_11, CastY_17, Context_8, &CastYGoal_19);
    Var_34 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (CastY_17));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (CastX_16));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Res_9));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
    }
    check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_14, Var_34, (MR_String) "builtin_compare_int", Var_36, Context_8, &CompareGoal_20);
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_21);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_8, GoalInfo0_21, &GoalInfo_22);
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (CompareGoal_20));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (CastYGoal_19));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_42));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (CastXGoal_18));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_41));
    }
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_40, GoalInfo_22, &Goal_23);
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Y_11));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (X_10));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Res_9));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
    }
    check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_45, Goal_23, Context_8, Clause_12, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_25);
  }
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
  {
    MR_Word ModuleInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_17, (MR_Integer) 0))));
    MR_Word ArgVars_15;
    MR_Word Goal_16;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_22;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Y_11));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (X_10));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_20));
    }
    {
      ArgVars_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgVars_15, 0) = ((MR_Box) (Res_9));
      MR_hl_field(MR_mktag(1), ArgVars_15, 1) = ((MR_Box) (Var_19));
    }
    Var_22 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_14, Var_22, (MR_String) "builtin_compare_solver_type", ArgVars_15, Context_8, &Goal_16);
    check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), ArgVars_15, Goal_16, Context_8, Clause_12, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
  }
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
  {
    MR_Word ModuleInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 0))));
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

    check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(EqvType_10, (MR_String) "Cast_HeadVar", (MR_Integer) 1, &CastX_17, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_29_29);
    check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(EqvType_10, (MR_String) "Cast_HeadVar", (MR_Integer) 2, &CastY_18, STATE_VARIABLE_Info_29_29, &STATE_VARIABLE_Info_32_32);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, X_12, CastX_17, Context_9, &CastXGoal_19);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, Y_13, CastY_18, Context_9, &CastYGoal_20);
    Var_35 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (CastY_18));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (CastX_17));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Res_11));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_38));
    }
    check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_16, Var_35, (MR_String) "compare", Var_37, Context_9, &CompareGoal_21);
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_22);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_9, GoalInfo0_22, &GoalInfo_23);
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (CompareGoal_21));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (CastYGoal_20));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (CastXGoal_19));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_42));
    }
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_41, GoalInfo_23, &Goal_24);
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Y_13));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (X_12));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Res_11));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
    }
    check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_46, Goal_24, Context_9, Clause_14, STATE_VARIABLE_Info_32_32, STATE_VARIABLE_Info_26);
  }
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
  {
    MR_Word ModuleInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_24, (MR_Integer) 0))));
    MR_Word TypeCtor_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_8, (MR_Integer) 4))));
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
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Y_11));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (X_10));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_27));
    }
    {
      ArgVars_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgVars_17, 0) = ((MR_Box) (Res_9));
      MR_hl_field(MR_mktag(1), ArgVars_17, 1) = ((MR_Box) (Var_26));
    }
    switch (MR_tag((MR_Word) CtorCat_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CtorCat_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Name_18 = (MR_String) "builtin_compare_pred";
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_compare_proc_body_builtin\'/7", (MR_String) "bad ctor category");
              return;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorCat_16, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) Var_71)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Var_71)) {
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
                MR_Word Var_72 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_71, (MR_Integer) 0))) & (MR_Integer) 15);

                Name_18 = ((&check_hlds__unify_proc_vector_common_3[10 + Var_72]))->check_hlds__unify_proc__vector_common_type_3_0__vct_3_f_0;
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
    Context_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_8, (MR_Integer) 7))));
    Var_54 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_14, Var_54, Name_18, ArgVars_17, Context_22, &CompareGoal_23);
    check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), ArgVars_17, CompareGoal_23, Context_22, Clause_12, STATE_VARIABLE_Info_0_24, STATE_VARIABLE_Info_25);
  }
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
  {
    MR_Word ArgVars_19;
    MR_Word Goal_20;
    MR_Word STATE_VARIABLE_Info_36_36;

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
          MR_Word ComparePredName_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonCanonical_10, (MR_Integer) 1))));
          MR_Word PredId_49;
          MR_Integer ModeId_50;
          MR_Word Call_51;
          MR_Word GoalInfo_52;
          MR_Word Goal0_53;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_59;

          PredId_49 = hlds__hlds_pred__invalid_pred_id_0_f_0();
          ModeId_50 = hlds__hlds_pred__invalid_proc_id_0_f_0();
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Y_13));
            MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (X_12));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
          }
          {
            ArgVars_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgVars_19, 0) = ((MR_Box) (Res_11));
            MR_hl_field(MR_mktag(1), ArgVars_19, 1) = ((MR_Box) (Var_54));
          }
          {
            Call_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Call_51, 0) = ((MR_Box) (PredId_49));
            MR_hl_field(MR_mktag(2), Call_51, 1) = ((MR_Box) (ModeId_50));
            MR_hl_field(MR_mktag(2), Call_51, 2) = ((MR_Box) (ArgVars_19));
            MR_hl_field(MR_mktag(2), Call_51, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(2), Call_51, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(2), Call_51, 5) = ((MR_Box) (ComparePredName_48));
          }
          hlds__hlds_goal__goal_info_init_2_p_0(Context_9, &GoalInfo_52);
          {
            Goal0_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Goal0_53, 0) = ((MR_Box) (Call_51));
            MR_hl_field(MR_mktag(0), Goal0_53, 1) = ((MR_Box) (GoalInfo_52));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Res_11));
          }
          check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_9, X_12, Y_13, Var_59, Goal0_53, &Goal_20, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_36_36);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ModuleInfo_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_28, (MR_Integer) 0))));
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_40;

          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Y_13));
            MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (X_12));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_38));
          }
          {
            ArgVars_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgVars_19, 0) = ((MR_Box) (Res_11));
            MR_hl_field(MR_mktag(1), ArgVars_19, 1) = ((MR_Box) (Var_37));
          }
          Var_40 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_18, Var_40, (MR_String) "builtin_compare_non_canonical_type", ArgVars_19, Context_9, &Goal_20);
          STATE_VARIABLE_Info_36_36 = STATE_VARIABLE_Info_0_28;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), NonCanonical_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ComparePredName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), NonCanonical_10, (MR_Integer) 1))));
              MR_Word PredId_23;
              MR_Integer ModeId_24;
              MR_Word Call_25;
              MR_Word GoalInfo_26;
              MR_Word Goal0_27;
              MR_Word Var_30;
              MR_Word Var_31;
              MR_Word Var_35;

              PredId_23 = hlds__hlds_pred__invalid_pred_id_0_f_0();
              ModeId_24 = hlds__hlds_pred__invalid_proc_id_0_f_0();
              {
                Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Y_13));
                MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (X_12));
                MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_31));
              }
              {
                ArgVars_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ArgVars_19, 0) = ((MR_Box) (Res_11));
                MR_hl_field(MR_mktag(1), ArgVars_19, 1) = ((MR_Box) (Var_30));
              }
              {
                Call_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Call_25, 0) = ((MR_Box) (PredId_23));
                MR_hl_field(MR_mktag(2), Call_25, 1) = ((MR_Box) (ModeId_24));
                MR_hl_field(MR_mktag(2), Call_25, 2) = ((MR_Box) (ArgVars_19));
                MR_hl_field(MR_mktag(2), Call_25, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(2), Call_25, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(2), Call_25, 5) = ((MR_Box) (ComparePredName_22));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_9, &GoalInfo_26);
              {
                Goal0_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Goal0_27, 0) = ((MR_Box) (Call_25));
                MR_hl_field(MR_mktag(0), Goal0_27, 1) = ((MR_Box) (GoalInfo_26));
              }
              {
                Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Res_11));
              }
              check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_9, X_12, Y_13, Var_35, Goal0_27, &Goal_20, STATE_VARIABLE_Info_0_28, &STATE_VARIABLE_Info_36_36);
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
    check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), ArgVars_19, Goal_20, Context_9, Clause_14, STATE_VARIABLE_Info_36_36, STATE_VARIABLE_Info_29);
  }
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
  {
    MR_Word Goal_14;
    MR_Word Var_18;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_26;
    MR_Word SymName_29;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Builtin_34;
    MR_Word Var_35;

    Builtin_34 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Builtin_34));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_String) "comparison_result"));
    }
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_32 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    {
      SymName_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SymName_29, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), SymName_29, 1) = ((MR_Box) ((MR_String) "="));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (SymName_29));
      MR_hl_field(MR_mktag(3), Var_26, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_26, 3) = ((MR_Box) (Var_31));
    }
    hlds__make_goal__make_const_construction_4_p_0(Context_8, Res_9, Var_26, &Goal_14);
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Y_11));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (X_10));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Res_9));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
    }
    check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_18, Goal_14, Context_8, Clause_12, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body__249__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
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
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_12;
    MR_Word TypeBody_13;
    MR_Word Context_14;
    MR_Word SuperType_17;
    MR_Word TypeBodyDu_15;
    MR_Word Var_45;

    check_hlds__unify_proc__info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_43, &ModuleInfo_12);
    TypeBody_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_7, (MR_Integer) 5))));
    Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_7, (MR_Integer) 7))));
    succeeded = ((MR_tag((MR_Word) TypeBody_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      TypeBodyDu_15 = (MR_Word) ((MR_Word) (TypeBody_13));
      Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_15, (MR_Integer) 1))));
      succeeded = (Var_45 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        SuperType_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word TVarSet_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_7, (MR_Integer) 2))));
      MR_Word BaseType_22;
      MR_Word Clause_23;

      check_hlds__unify_proc__get_du_base_type_4_p_0(ModuleInfo_12, TVarSet_21, SuperType_17, &BaseType_22);
      check_hlds__unify_proc__generate_unify_proc_body_eqv_7_p_0(Context_14, BaseType_22, X_8, Y_9, &Clause_23, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Clauses_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Clause_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Clauses_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Clause_76));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
              MR_Word Var_50;
              MR_Word TypeBodyDu_88 = (MR_Word) ((MR_Word) (TypeBody_13));
              MR_Word Var_115;

              MaybeSuperType_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_88, (MR_Integer) 1))));
              MaybeRepn_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_88, (MR_Integer) 3))));
              {
                Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[1]));
                MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (check_hlds__unify_proc__generate_unify_proc_body_6_p_0_1));
                MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (MaybeSuperType_31));
                MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_50, (MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body\'/6", (MR_String) "MaybeSuperType != not_a_subtype");
              if ((MaybeRepn_33 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body\'/6", (MR_String) "MaybeRepn = no");
                  return;
                }
              else
                Repn_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepn_33, (MR_Integer) 0))));
              Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_35, (MR_Integer) 0))));
              DuTypeKind_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_35, (MR_Integer) 3))));
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
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *Clauses_10 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Clause_81));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Clause_82;

                        check_hlds__unify_proc__generate_unify_proc_body_dummy_6_p_0(Context_14, X_8, Y_9, &Clause_82, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *Clauses_10 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Clause_82));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0(SpecDefnInfo_7, Var_115, X_8, Y_9, Clauses_10, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Clause_81;

                    check_hlds__unify_proc__generate_unify_proc_body_enum_6_p_0(Context_14, X_8, Y_9, &Clause_81, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Clauses_10 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Clause_81));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ArgType_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DuTypeKind_36, (MR_Integer) 1))));
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
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            *Clauses_10 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Clause_83));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word CtorRepns_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_35, (MR_Integer) 0))));

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
              MR_Word Var_66;
              MR_Word Clause_79;

              Var_66 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
              check_hlds__unify_proc__generate_unify_proc_body_eqv_7_p_0(Context_14, Var_66, X_8, Y_9, &Clause_79, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Clauses_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Clause_79));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word EqvType_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeBody_13, (MR_Integer) 0))));
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
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Clauses_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Clause_78));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeBody_13, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Clause_80;

                  check_hlds__unify_proc__generate_unify_proc_body_solver_6_p_0(Context_14, X_8, Y_9, &Clause_80, STATE_VARIABLE_Info_0_43, STATE_VARIABLE_Info_44);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Clauses_10 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Clause_80));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Clauses_10 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Clause_77));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
            }
            break;
        }
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__info_get_module_info_2_p_0(
  MR_Word UPI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), UPI_3, (MR_Integer) 0))));
}

static void MR_CALL 
check_hlds__unify_proc__get_du_base_type_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TVarSet_6,
  MR_Word Type_7,
  MR_Word * BaseType_8)
{
  {
    MR_Word TypeTable_9;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_5, &TypeTable_9);
    check_hlds__unify_proc__get_du_base_type_loop_4_p_0(TypeTable_9, TVarSet_6, Type_7, BaseType_8);
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
          MR_Word MaybeSuperType_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyDu_13, (MR_Integer) 1))));

          if ((MaybeSuperType_15 == (MR_Word) ((MR_Unsigned) 0U)))
            *BaseType_8 = Type_7;
          else
          {
            MR_Word SuperType0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSuperType_15, (MR_Integer) 0))));
            MR_Word TypeDefnTVarSet_20;
            MR_Word TypeDefnTypeParams_21;
            MR_Word SuperType_22;
            MR_Word Renaming_42;
            MR_Word TypeParams_43;
            MR_Word TSubst_44;
            MR_Word Type1_45;
            MR_Word _MergedTVarSet_41;
            MR_Word next_value_of_Type_7;

            hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_11, &TypeDefnTVarSet_20);
            hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_11, &TypeDefnTypeParams_21);
            parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TVarSet_6, TypeDefnTVarSet_20, &_MergedTVarSet_41, &Renaming_42);
            parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(Renaming_42, TypeDefnTypeParams_21, &TypeParams_43);
            mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__unify_proc_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeParams_43, TypeArgs_10, &TSubst_44);
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(Renaming_42, SuperType0_19, &Type1_45);
            parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(TSubst_44, Type1_45, &SuperType_22);
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeBody_12, (MR_Integer) 0))))) {
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
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body_du__647__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Goal_14;
    MR_Word conv3_STATE_VARIABLE_Info_61;

    check_hlds__unify_proc__generate_du_unify_case_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv4_Goal_14, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_Info_61);
    *wrapper_arg_2 = ((MR_Box) (conv4_Goal_14));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_Info_61));
  }
}

static void MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Goal_14;
    MR_Word conv0_STATE_VARIABLE_Info_61;

    check_hlds__unify_proc__generate_du_unify_case_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv1_Goal_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_61);
    *wrapper_arg_2 = ((MR_Box) (conv1_Goal_14));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_61));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__unify_proc__IntroducedFrom__pred__generate_unify_proc_body_du__592__1_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
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
  {
    MR_bool succeeded;
    MR_Word UCOptions_14;
    MR_Word Context_15;
    MR_Word GoalInfo_35;
    MR_Word Goal_36;
    MR_Word PackedOps_37;
    MR_Word STATE_VARIABLE_Info_55_55;
    MR_Word TypeCtorInfo_127_127;
    MR_Word MayUnifyCtorAsWhole_16;
    MR_Word Var_49;
    MR_Word Var_110;

    UCOptions_14 = check_hlds__unify_proc__lookup_unify_compare_options_1_f_0(STATE_VARIABLE_Info_0_47);
    Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_8, (MR_Integer) 7))));
    Var_49 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UCOptions_14, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    Var_110 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UCOptions_14, (MR_Integer) 0))) & (MR_Integer) 1);
    succeeded = (Var_49 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (Var_110 == (MR_Integer) 1);
      if (succeeded)
      {
        MayUnifyCtorAsWhole_16 = (MR_Word) (&check_hlds__unify_proc_scalar_common_5[0]);
        TypeCtorInfo_127_127 = (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0);
        succeeded = mercury__list__all_true_2_p_0(TypeCtorInfo_127_127, MayUnifyCtorAsWhole_16, CtorRepns_9);
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
      check_hlds__unify_proc__info_new_named_var_5_p_0(CastType_28, (MR_String) "CastX", &CastX_29, STATE_VARIABLE_Info_0_47, &STATE_VARIABLE_Info_53_53);
      check_hlds__unify_proc__info_new_named_var_5_p_0(CastType_28, (MR_String) "CastY", &CastY_30, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_55_55);
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, X_10, CastX_29, Context_15, &CastXGoal_31);
      hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Y_11, CastY_30, Context_15, &CastYGoal_32);
      {
        Var_58 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (CastY_30));
      }
      hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(CastX_29, Var_58, Context_15, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &EqualityGoal_33);
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (EqualityGoal_33));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (CastYGoal_32));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_64));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (CastXGoal_31));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_63));
      }
      {
        GoalExpr_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), GoalExpr_34, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), GoalExpr_34, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), GoalExpr_34, 2) = ((MR_Box) (Var_62));
      }
      hlds__hlds_goal__goal_info_init_2_p_0(Context_15, &GoalInfo_35);
      {
        Goal_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal_36, 0) = ((MR_Box) (GoalExpr_34));
        MR_hl_field(MR_mktag(0), Goal_36, 1) = ((MR_Box) (GoalInfo_35));
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
        MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_2));
        MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (SpecDefnInfo_8));
        MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (UCOptions_14));
        MR_hl_field(MR_mktag(0), Var_66, 5) = ((MR_Box) (X_10));
        MR_hl_field(MR_mktag(0), Var_66, 6) = ((MR_Box) (Y_11));
      }
      mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0), Var_66, CtorRepns_9, &Disjuncts_38, ((MR_Box) (STATE_VARIABLE_Info_0_47)), &conv2_STATE_VARIABLE_Info_67_67);
      STATE_VARIABLE_Info_67_67 = ((MR_Word) (conv2_STATE_VARIABLE_Info_67_67));
      hlds__hlds_goal__goal_info_init_2_p_0(Context_15, &GoalInfo_35);
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (Disjuncts_38));
      }
      {
        Goal0_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Goal0_39, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), Goal0_39, 1) = ((MR_Box) (GoalInfo_35));
      }
      check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_15, X_10, Y_11, (MR_Word) ((MR_Unsigned) 0U), Goal0_39, &Goal_36, STATE_VARIABLE_Info_67_67, &STATE_VARIABLE_Info_55_55);
      PackedOps_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_55_55, (MR_Integer) 4))) & (MR_Integer) 1);
    }
    switch (PackedOps_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Clause_40;
          MR_Word Var_97;
          MR_Word Var_99;

          {
            Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Y_11));
            MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (X_10));
            MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_99));
          }
          check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_97, Goal_36, Context_15, &Clause_40, STATE_VARIABLE_Info_55_55, STATE_VARIABLE_Info_48);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Clauses_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Clause_40));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
          MR_Word Var_72;
          MR_Word STATE_VARIABLE_Info_73_73;
          MR_Word Var_74;
          MR_Word STATE_VARIABLE_Info_77_77;
          MR_Word Var_79;
          MR_Word STATE_VARIABLE_Info_80_80;
          MR_Word Var_81;
          MR_Word Var_84;
          MR_Word Var_86;
          MR_Word STATE_VARIABLE_Info_88_88;
          MR_Word Var_94;
          MR_Word Var_116;
          MR_Word Var_118;
          MR_Word Var_119;
          MR_Word Var_120;
          MR_Word Var_121;
          MR_Box conv5_STATE_VARIABLE_Info_80_80;

          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Y_11));
            MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (X_10));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_74));
          }
          check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 4U), Var_72, Goal_36, Context_15, &InInClause_41, STATE_VARIABLE_Info_55_55, &STATE_VARIABLE_Info_73_73);
          Var_116 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), UCOptions_14, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
          {
            NonPackedUCOptions_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), NonPackedUCOptions_42, 0) = (MR_Box) (((((MR_Unsigned) (Var_116) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
          }
          Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 0))));
          Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 1))));
          Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 2))));
          Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_73_73, (MR_Integer) 3))));
          {
            STATE_VARIABLE_Info_77_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, 0) = ((MR_Box) (Var_118));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, 1) = ((MR_Box) (Var_119));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, 2) = ((MR_Box) (Var_120));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, 3) = ((MR_Box) (Var_121));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_77_77, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          {
            Var_79 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_3));
            MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (SpecDefnInfo_8));
            MR_hl_field(MR_mktag(0), Var_79, 4) = ((MR_Box) (NonPackedUCOptions_42));
            MR_hl_field(MR_mktag(0), Var_79, 5) = ((MR_Box) (X_10));
            MR_hl_field(MR_mktag(0), Var_79, 6) = ((MR_Box) (Y_11));
          }
          mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__unify_proc__check_hlds__unify_proc__type_ctor_info_unify_proc_info_0), Var_79, CtorRepns_9, &NonPackedDisjuncts_43, ((MR_Box) (STATE_VARIABLE_Info_77_77)), &conv5_STATE_VARIABLE_Info_80_80);
          STATE_VARIABLE_Info_80_80 = ((MR_Word) (conv5_STATE_VARIABLE_Info_80_80));
          Var_84 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_80_80, (MR_Integer) 4))) & (MR_Integer) 1);
          {
            Var_81 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (&check_hlds__unify_proc_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), Var_81, 1) = ((MR_Box) (check_hlds__unify_proc__generate_unify_proc_body_du_7_p_0_4));
            MR_hl_field(MR_mktag(0), Var_81, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_81, 3) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(0), Var_81, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_81, (MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body_du\'/7", (MR_String) "packed word ops show up after being disabled");
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (NonPackedDisjuncts_43));
          }
          {
            NonPackedGoal0_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), NonPackedGoal0_44, 0) = ((MR_Box) (Var_86));
            MR_hl_field(MR_mktag(0), NonPackedGoal0_44, 1) = ((MR_Box) (GoalInfo_35));
          }
          check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_15, X_10, Y_11, (MR_Word) ((MR_Unsigned) 0U), NonPackedGoal0_44, &NonPackedGoal_45, STATE_VARIABLE_Info_80_80, &STATE_VARIABLE_Info_88_88);
          check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 8U), Var_72, NonPackedGoal_45, Context_15, &NonInInClause_46, STATE_VARIABLE_Info_88_88, STATE_VARIABLE_Info_48);
          {
            Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (NonInInClause_46));
            MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Clauses_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InInClause_41));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_94));
          }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
check_hlds__unify_proc__get_pretest_equality_cast_type_1_f_0(
  MR_Word Info_3)
{
  {
    MR_Word CastType_4;
    MR_Word ModuleInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
    MR_Word Globals_6;
    MR_Word CastPointers_7;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_6);
    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 311, &CastPointers_7);
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
}

static MR_Word MR_CALL 
check_hlds__unify_proc__lookup_unify_compare_options_1_f_0(
  MR_Word Info_3)
{
  {
    MR_bool succeeded;
    MR_Word UCOptions_4;
    MR_Word ModuleInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));
    MR_Word Globals_6;
    MR_Word BoolCanCompareAsInt_7;
    MR_Word CanCompareAsInt_8;
    MR_Word BoolAllowPackedUC_9;
    MR_Word Target_10;
    MR_Word AllowPackedUC_11;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_5, &Globals_6);
    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 310, &BoolCanCompareAsInt_7);
    switch (BoolCanCompareAsInt_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        CanCompareAsInt_8 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        CanCompareAsInt_8 = (MR_Integer) 1;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 292, &BoolAllowPackedUC_9);
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
      MR_hl_field(MR_mktag(0), UCOptions_4, 0) = (MR_Box) (((((MR_Unsigned) (CanCompareAsInt_8) << 1)) | (MR_Unsigned) (AllowPackedUC_11)));
    }
    return UCOptions_4;
  }
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
  {
    MR_Word Goal_12;
    MR_Word Var_18;
    MR_Word Var_20;

    hlds__make_goal__make_simple_test_5_p_0(X_8, Y_9, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &Goal_12);
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Y_9));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (X_8));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
    }
    check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_18, Goal_12, Context_7, Clause_10, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
  }
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
  {
    MR_Word ArgVars_12;
    MR_Word ModuleInfo_13;
    MR_Word Goal_14;
    MR_Word Var_17;
    MR_Word Var_19;

    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Y_9));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ArgVars_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgVars_12, 0) = ((MR_Box) (X_8));
      MR_hl_field(MR_mktag(1), ArgVars_12, 1) = ((MR_Box) (Var_17));
    }
    ModuleInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_15, (MR_Integer) 0))));
    Var_19 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_13, Var_19, (MR_String) "builtin_unify_solver_type", ArgVars_12, Context_7, &Goal_14);
    check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), ArgVars_12, Goal_14, Context_7, Clause_10, STATE_VARIABLE_Info_0_15, STATE_VARIABLE_Info_16);
  }
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
    MR_String NumStr_51;
    MR_String Name_52;
    MR_Word VarSet0_60;
    MR_Word VarTypes0_61;
    MR_Word VarSet_62;
    MR_Word VarTypes_63;
    MR_Word Var_74;
    MR_Word Var_77;
    MR_Word Var_78;

    mercury__string__int_to_string_2_p_0((MR_Integer) 1, &NumStr_51);
    mercury__string__append_3_p_2((MR_String) "Cast_HeadVar", NumStr_51, &Name_52);
    VarSet0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 1))));
    VarTypes0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 2))));
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_52, &CastX_14, VarSet0_60, &VarSet_62);
    hlds__vartypes__add_var_type_4_p_0(CastX_14, EqvType_9, VarTypes0_61, &VarTypes_63);
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 0))));
    Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 3))));
    Var_78 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 4))) & (MR_Integer) 1);
    {
      STATE_VARIABLE_Info_26_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, 0) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, 1) = ((MR_Box) (VarSet_62));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, 2) = ((MR_Box) (VarTypes_63));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, 3) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_26_26, 4) = (MR_Box) ((MR_Unsigned) (Var_78));
    }
    check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(EqvType_9, (MR_String) "Cast_HeadVar", (MR_Integer) 2, &CastY_15, STATE_VARIABLE_Info_26_26, &STATE_VARIABLE_Info_29_29);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, X_10, CastX_14, Context_8, &CastXGoal_16);
    hlds__goal_util__generate_cast_5_p_0((MR_Integer) 2, Y_11, CastY_15, Context_8, &CastYGoal_17);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (CastY_15));
    }
    hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(CastX_14, Var_32, Context_8, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &UnifyGoal_18);
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_19);
    hlds__hlds_goal__goal_info_set_context_3_p_0(Context_8, GoalInfo0_19, &GoalInfo_20);
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (UnifyGoal_18));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (CastYGoal_17));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (CastXGoal_16));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_36));
    }
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Var_35, GoalInfo_20, &Goal_21);
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Y_11));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (X_10));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
    }
    check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_40, Goal_21, Context_8, Clause_12, STATE_VARIABLE_Info_29_29, STATE_VARIABLE_Info_23);
  }
}

static void MR_CALL 
check_hlds__unify_proc__make_fresh_named_var_from_type_6_p_0(
  MR_Word Type_7,
  MR_String BaseName_8,
  MR_Integer Num_9,
  MR_Word * Var_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  {
    MR_String NumStr_12;
    MR_String Name_13;
    MR_Word VarSet0_23;
    MR_Word VarTypes0_24;
    MR_Word VarSet_25;
    MR_Word VarTypes_26;
    MR_Word Var_37;
    MR_Word Var_40;
    MR_Word Var_41;

    mercury__string__int_to_string_2_p_0(Num_9, &NumStr_12);
    mercury__string__append_3_p_2(BaseName_8, NumStr_12, &Name_13);
    VarSet0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 1))));
    VarTypes0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 2))));
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_13, Var_10, VarSet0_23, &VarSet_25);
    hlds__vartypes__add_var_type_4_p_0(*Var_10, Type_7, VarTypes0_24, &VarTypes_26);
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 0))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 3))));
    Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_14, (MR_Integer) 4))) & (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarSet_25));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_26));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (Var_41));
    }
  }
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
  {
    MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 0))));
    MR_Word TypeCtor_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_7, (MR_Integer) 4))));
    MR_Word CtorCat_14;
    MR_Word ArgVars_15;
    MR_String Name_16;
    MR_Word Context_20;
    MR_Word UnifyGoal_21;
    MR_Word Var_24;
    MR_Word Var_51;

    CtorCat_14 = check_hlds__type_util__classify_type_ctor_2_f_0(ModuleInfo_12, TypeCtor_13);
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Y_9));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ArgVars_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ArgVars_15, 0) = ((MR_Box) (X_8));
      MR_hl_field(MR_mktag(1), ArgVars_15, 1) = ((MR_Box) (Var_24));
    }
    switch (MR_tag((MR_Word) CtorCat_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CtorCat_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Name_16 = (MR_String) "builtin_unify_pred";
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.unify_proc.generate_unify_proc_body_builtin\'/6", (MR_String) "bad ctor category");
              return;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorCat_14, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) Var_68)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Var_68)) {
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
                MR_Word Var_69 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 0))) & (MR_Integer) 15);

                Name_16 = ((&check_hlds__unify_proc_vector_common_3[0 + Var_69]))->check_hlds__unify_proc__vector_common_type_3_0__vct_3_f_0;
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
    Context_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecDefnInfo_7, (MR_Integer) 7))));
    Var_51 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    check_hlds__unify_proc__build_simple_call_6_p_0(ModuleInfo_12, Var_51, Name_16, ArgVars_15, Context_20, &UnifyGoal_21);
    check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), ArgVars_15, UnifyGoal_21, Context_20, Clause_10, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
  }
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
  {
    MR_Word Var_18;

    Var_18 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_7, ModuleName_8, PredName_9, (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__unify_proc_scalar_common_2[3])), (MR_Integer) 6, (MR_Integer) 0, ArgVars_10, (MR_Word) ((MR_Unsigned) 0U), Var_18, Context_11, Goal_12);
  }
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
  {
    MR_Word Goal0_21;
    MR_Word Goal_26;
    MR_Word STATE_VARIABLE_Info_30_30;
    MR_Word STATE_VARIABLE_Info_56_56;
    MR_Word Var_58;
    MR_Word Var_60;

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
          MR_Word UnifyPredName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonCanonical_8, (MR_Integer) 0))));
          MR_Word PredId_17;
          MR_Integer ModeId_18;
          MR_Word Call_19;
          MR_Word GoalInfo_20;
          MR_Word Var_46;
          MR_Word Var_47;

          PredId_17 = hlds__hlds_pred__invalid_pred_id_0_f_0();
          ModeId_18 = hlds__hlds_pred__invalid_proc_id_0_f_0();
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Y_10));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (X_9));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_47));
          }
          {
            Call_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Call_19, 0) = ((MR_Box) (PredId_17));
            MR_hl_field(MR_mktag(2), Call_19, 1) = ((MR_Box) (ModeId_18));
            MR_hl_field(MR_mktag(2), Call_19, 2) = ((MR_Box) (Var_46));
            MR_hl_field(MR_mktag(2), Call_19, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(2), Call_19, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(2), Call_19, 5) = ((MR_Box) (UnifyPredName_15));
          }
          hlds__hlds_goal__goal_info_init_2_p_0(Context_11, &GoalInfo_20);
          {
            Goal0_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Goal0_21, 0) = ((MR_Box) (Call_19));
            MR_hl_field(MR_mktag(0), Goal0_21, 1) = ((MR_Box) (GoalInfo_20));
          }
          STATE_VARIABLE_Info_30_30 = STATE_VARIABLE_Info_0_27;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word UnifyPredName_66 = ((MR_Word) ((MR_hl_field(MR_mktag(2), NonCanonical_8, (MR_Integer) 0))));
          MR_Word PredId_67;
          MR_Integer ModeId_68;
          MR_Word Call_69;
          MR_Word GoalInfo_70;
          MR_Word Var_71;
          MR_Word Var_72;

          PredId_67 = hlds__hlds_pred__invalid_pred_id_0_f_0();
          ModeId_68 = hlds__hlds_pred__invalid_proc_id_0_f_0();
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Y_10));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (X_9));
            MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_72));
          }
          {
            Call_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Call_69, 0) = ((MR_Box) (PredId_67));
            MR_hl_field(MR_mktag(2), Call_69, 1) = ((MR_Box) (ModeId_68));
            MR_hl_field(MR_mktag(2), Call_69, 2) = ((MR_Box) (Var_71));
            MR_hl_field(MR_mktag(2), Call_69, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(2), Call_69, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(2), Call_69, 5) = ((MR_Box) (UnifyPredName_66));
          }
          hlds__hlds_goal__goal_info_init_2_p_0(Context_11, &GoalInfo_70);
          {
            Goal0_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Goal0_21, 0) = ((MR_Box) (Call_69));
            MR_hl_field(MR_mktag(0), Goal0_21, 1) = ((MR_Box) (GoalInfo_70));
          }
          STATE_VARIABLE_Info_30_30 = STATE_VARIABLE_Info_0_27;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), NonCanonical_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ComparePredName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), NonCanonical_8, (MR_Integer) 1))));
              MR_Word ResultVar_23;
              MR_Word CallGoal_24;
              MR_Word UnifyGoal_25;
              MR_Word Var_29;
              MR_Word Var_31;
              MR_Word Var_32;
              MR_Word Var_33;
              MR_Word Var_37;
              MR_Word Var_41;
              MR_Word Var_43;
              MR_Word Var_44;
              MR_Word PredId_62;
              MR_Integer ModeId_63;
              MR_Word Call_64;
              MR_Word GoalInfo_65;
              MR_Word Var_77;
              MR_Word SymName_81;
              MR_Word Var_83;
              MR_Word Var_84;
              MR_Word Builtin_86;
              MR_Word Var_87;

              Var_29 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
              check_hlds__unify_proc__info_new_var_4_p_0(Var_29, &ResultVar_23, STATE_VARIABLE_Info_0_27, &STATE_VARIABLE_Info_30_30);
              PredId_62 = hlds__hlds_pred__invalid_pred_id_0_f_0();
              ModeId_63 = hlds__hlds_pred__invalid_proc_id_0_f_0();
              {
                Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Y_10));
                MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (X_9));
                MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_33));
              }
              {
                Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (ResultVar_23));
                MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_32));
              }
              {
                Call_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Call_64, 0) = ((MR_Box) (PredId_62));
                MR_hl_field(MR_mktag(2), Call_64, 1) = ((MR_Box) (ModeId_63));
                MR_hl_field(MR_mktag(2), Call_64, 2) = ((MR_Box) (Var_31));
                MR_hl_field(MR_mktag(2), Call_64, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(2), Call_64, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(2), Call_64, 5) = ((MR_Box) (ComparePredName_22));
              }
              hlds__hlds_goal__goal_info_init_2_p_0(Context_11, &GoalInfo_65);
              {
                CallGoal_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CallGoal_24, 0) = ((MR_Box) (Call_64));
                MR_hl_field(MR_mktag(0), CallGoal_24, 1) = ((MR_Box) (GoalInfo_65));
              }
              Builtin_86 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              {
                Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Builtin_86));
                MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_String) "comparison_result"));
              }
              {
                Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (Var_87));
                MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) ((MR_Integer) 0));
              }
              Var_84 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              {
                SymName_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), SymName_81, 0) = ((MR_Box) (Var_84));
                MR_hl_field(MR_mktag(1), SymName_81, 1) = ((MR_Box) ((MR_String) "="));
              }
              {
                Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (SymName_81));
                MR_hl_field(MR_mktag(3), Var_77, 2) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_77, 3) = ((MR_Box) (Var_83));
              }
              {
                Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_77));
                MR_hl_field(MR_mktag(1), Var_37, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(1), Var_37, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(ResultVar_23, Var_37, Context_11, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &UnifyGoal_25);
              {
                Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (UnifyGoal_25));
                MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (CallGoal_24));
                MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_44));
              }
              {
                Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Var_41, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_41, 2) = ((MR_Box) (Var_43));
              }
              {
                Goal0_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Goal0_21, 0) = ((MR_Box) (Var_41));
                MR_hl_field(MR_mktag(0), Goal0_21, 1) = ((MR_Box) (GoalInfo_65));
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
    check_hlds__unify_proc__maybe_wrap_with_pretest_equality_8_p_0(Context_11, X_9, Y_10, (MR_Word) ((MR_Unsigned) 0U), Goal0_21, &Goal_26, STATE_VARIABLE_Info_30_30, &STATE_VARIABLE_Info_56_56);
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Y_10));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (X_9));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_60));
    }
    check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_58, Goal_26, Context_11, Clause_12, STATE_VARIABLE_Info_56_56, STATE_VARIABLE_Info_28);
  }
}

static void MR_CALL 
check_hlds__unify_proc__info_new_var_4_p_0(
  MR_Word Type_5,
  MR_Word * Var_6,
  MR_Word STATE_VARIABLE_UPI_0_12,
  MR_Word * STATE_VARIABLE_UPI_13)
{
  {
    MR_Word VarSet0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_12, (MR_Integer) 1))));
    MR_Word VarTypes0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_12, (MR_Integer) 2))));
    MR_Word VarSet_10;
    MR_Word VarTypes_11;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_28;

    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_6, VarSet0_8, &VarSet_10);
    hlds__vartypes__add_var_type_4_p_0(*Var_6, Type_5, VarTypes0_9, &VarTypes_11);
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_12, (MR_Integer) 0))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_12, (MR_Integer) 3))));
    Var_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_12, (MR_Integer) 4))) & (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_UPI_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarSet_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (Var_28));
    }
  }
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
  {
    MR_Word ModuleInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 0))));
    MR_Word Globals_17;
    MR_Word ShouldPretestEq_18;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_16, &Globals_17);
    libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 352, &ShouldPretestEq_18);
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
          MR_Word ModuleInfo_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_39, (MR_Integer) 0))));
          MR_Word Globals_70;
          MR_Word CastPointers_71;

          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_69, &Globals_70);
          libs__globals__lookup_bool_option_3_p_0(Globals_70, (MR_Integer) 311, &CastPointers_71);
          switch (CastPointers_71) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              CastType_19 = parse_tree__builtin_lib_types__int_type_0_f_0();
              break;
            case (MR_Integer) 1:
              CastType_19 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
              break;
          }
          check_hlds__unify_proc__info_new_named_var_5_p_0(CastType_19, (MR_String) "CastX", &CastX_20, STATE_VARIABLE_Info_0_39, &STATE_VARIABLE_Info_43_43);
          check_hlds__unify_proc__info_new_named_var_5_p_0(CastType_19, (MR_String) "CastY", &CastY_21, STATE_VARIABLE_Info_43_43, STATE_VARIABLE_Info_40);
          hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, X_10, CastX_20, Context_9, &CastXGoal0_22);
          hlds__goal_util__generate_cast_5_p_0((MR_Integer) 0, Y_11, CastY_21, Context_9, &CastYGoal0_23);
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 13, CastXGoal0_22, &CastXGoal_24);
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 13, CastYGoal0_23, &CastYGoal_25);
          {
            Var_50 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (CastY_21));
          }
          hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(CastX_20, Var_50, Context_9, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &EqualityGoal0_26);
          hlds__hlds_goal__goal_add_feature_3_p_0((MR_Integer) 22, EqualityGoal0_26, &EqualityGoal_27);
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (EqualityGoal_27));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (CastYGoal_25));
            MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_57));
          }
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (CastXGoal_24));
            MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_56));
          }
          {
            CondGoalExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), CondGoalExpr_28, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), CondGoalExpr_28, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), CondGoalExpr_28, 2) = ((MR_Box) (Var_55));
          }
          hlds__hlds_goal__goal_info_init_2_p_0(Context_9, &ContextGoalInfo_29);
          {
            CondGoal_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CondGoal_30, 0) = ((MR_Box) (CondGoalExpr_28));
            MR_hl_field(MR_mktag(0), CondGoal_30, 1) = ((MR_Box) (ContextGoalInfo_29));
          }
          if ((MaybeCompareRes_12 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            EqualGoal_31 = hlds__make_goal__true_goal_with_context_1_f_0(Context_9);
            GoalInfo_32 = ContextGoalInfo_29;
          }
          else
          {
            MR_Word Res_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCompareRes_12, (MR_Integer) 0))));
            MR_Word EqualGoalInfo_35;
            MR_Word InstmapDelta_36;
            MR_Word Var_59;
            MR_Word SymName_78;
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Builtin_83;
            MR_Word Var_84;

            Builtin_83 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            {
              Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Builtin_83));
              MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_String) "comparison_result"));
            }
            {
              Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Var_84));
              MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) ((MR_Integer) 0));
            }
            Var_81 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            {
              SymName_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), SymName_78, 0) = ((MR_Box) (Var_81));
              MR_hl_field(MR_mktag(1), SymName_78, 1) = ((MR_Box) ((MR_String) "="));
            }
            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (SymName_78));
              MR_hl_field(MR_mktag(3), Var_59, 2) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_59, 3) = ((MR_Box) (Var_80));
            }
            hlds__make_goal__make_const_construction_4_p_0(Context_9, Res_33, Var_59, &EqualGoal_31);
            EqualGoalInfo_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqualGoal_31, (MR_Integer) 1))));
            InstmapDelta_36 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(EqualGoalInfo_35);
            hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstmapDelta_36, ContextGoalInfo_29, &GoalInfo_32);
          }
          {
            GoalExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), GoalExpr_37, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), GoalExpr_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), GoalExpr_37, 2) = ((MR_Box) (CondGoal_30));
            MR_hl_field(MR_mktag(3), GoalExpr_37, 3) = ((MR_Box) (EqualGoal_31));
            MR_hl_field(MR_mktag(3), GoalExpr_37, 4) = ((MR_Box) (Goal0_13));
          }
          hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 21, GoalInfo_32, &FeaturedGoalInfo_38);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_14 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_37));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FeaturedGoalInfo_38));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__unify_proc__info_new_named_var_5_p_0(
  MR_Word Type_6,
  MR_String Name_7,
  MR_Word * Var_8,
  MR_Word STATE_VARIABLE_UPI_0_14,
  MR_Word * STATE_VARIABLE_UPI_15)
{
  {
    MR_Word VarSet0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_14, (MR_Integer) 1))));
    MR_Word VarTypes0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_14, (MR_Integer) 2))));
    MR_Word VarSet_12;
    MR_Word VarTypes_13;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_30;

    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Name_7, Var_8, VarSet0_10, &VarSet_12);
    hlds__vartypes__add_var_type_4_p_0(*Var_8, Type_6, VarTypes0_11, &VarTypes_13);
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_14, (MR_Integer) 0))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_14, (MR_Integer) 3))));
    Var_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_UPI_0_14, (MR_Integer) 4))) & (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_UPI_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarSet_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarTypes_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (Var_30));
    }
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
  {
    MR_Word Goal_12;
    MR_Word Var_16;
    MR_Word Var_18;

    Goal_12 = hlds__make_goal__true_goal_with_context_1_f_0(Context_7);
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Y_9));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (X_8));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_18));
    }
    check_hlds__unify_proc__quantify_clause_body_7_p_0((MR_Word) ((MR_Unsigned) 0U), Var_16, Goal_12, Context_7, Clause_10, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
  }
}

static void MR_CALL 
check_hlds__unify_proc__quantify_clause_body_7_p_0(
  MR_Word ApplModes_8,
  MR_Word HeadVars_9,
  MR_Word Goal0_10,
  MR_Word Context_11,
  MR_Word * Clause_12,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word Varset0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 1))));
    MR_Word Types0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 2))));
    MR_Word RttiVarMaps0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 3))));
    MR_Word Goal_18;
    MR_Word Varset_19;
    MR_Word Types_20;
    MR_Word RttiVarMaps_21;
    MR_Word Var_53;
    MR_Word Var_57;
    MR_Word _Warnings_17;

    hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 0, HeadVars_9, &_Warnings_17, Goal0_10, &Goal_18, Varset0_14, &Varset_19, Types0_15, &Types_20, RttiVarMaps0_16, &RttiVarMaps_21);
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 0))));
    Var_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 4))) & (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_23 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Varset_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Types_20));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (RttiVarMaps_21));
      MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *Clause_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ApplModes_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Goal_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____args_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__unify_proc____Unify____args_locn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____args_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__unify_proc____Compare____args_locn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____bulk_comparability_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__unify_proc____Unify____bulk_comparability_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____bulk_comparability_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__unify_proc____Compare____bulk_comparability_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____compare_conjoin_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__unify_proc____Unify____compare_conjoin_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____compare_conjoin_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__unify_proc____Compare____compare_conjoin_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____compare_how_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__unify_proc____Unify____compare_how_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____compare_how_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__unify_proc____Compare____compare_how_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____linear_or_quad_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__unify_proc____Unify____linear_or_quad_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____linear_or_quad_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__unify_proc____Compare____linear_or_quad_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_all_args_in_word_so_far_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__unify_proc____Unify____maybe_all_args_in_word_so_far_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_all_args_in_word_so_far_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__unify_proc____Compare____maybe_all_args_in_word_so_far_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_allow_packed_unify_compare_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__unify_proc____Unify____maybe_allow_packed_unify_compare_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_allow_packed_unify_compare_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__unify_proc____Compare____maybe_allow_packed_unify_compare_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_compare_constants_as_ints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__unify_proc____Unify____maybe_compare_constants_as_ints_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_compare_constants_as_ints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__unify_proc____Compare____maybe_compare_constants_as_ints_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_give_vars_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__unify_proc____Unify____maybe_give_vars_types_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_give_vars_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__unify_proc____Compare____maybe_give_vars_types_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_packable_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__unify_proc____Unify____maybe_packable_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_packable_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__unify_proc____Compare____maybe_packable_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____maybe_packed_word_ops_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__unify_proc____Unify____maybe_packed_word_ops_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____maybe_packed_word_ops_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__unify_proc____Compare____maybe_packed_word_ops_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____spec_pred_defn_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__unify_proc____Unify____spec_pred_defn_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____spec_pred_defn_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__unify_proc____Compare____spec_pred_defn_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____uc_options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__unify_proc____Unify____uc_options_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____uc_options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__unify_proc____Compare____uc_options_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____uc_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__unify_proc____Unify____uc_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____uc_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__unify_proc____Compare____uc_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_how_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__unify_proc____Unify____unify_how_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_how_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__unify_proc____Compare____unify_how_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__unify_proc____Unify____unify_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__unify_proc____Unify____unify_proc_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__unify_proc____Compare____unify_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__unify_proc____Compare____unify_proc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
