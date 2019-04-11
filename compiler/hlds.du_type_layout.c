/*
** Automatically generated from `du_type_layout.m'
** by the Mercury compiler,
** version rotd-2018-07-16
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


// :- module hlds.du_type_layout.
// :- implementation.

/*
INIT mercury__hlds__du_type_layout__init
ENDINIT
*/

#include "hlds.du_type_layout.mih"


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
#include "check_hlds.type_util.mih"
#include "hlds.add_foreign_enum.mih"
#include "hlds.add_special_pred.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
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
#include "uint.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__du_type_layout__type_ctor_info_component_type_kind_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_no_tag_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

static const MR_FA_TypeInfo_Struct1 hlds__du_type_layout__list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_arg_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_hlds__du_type_layout__type_ctor_info_sub_word_bin_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_constructor_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_component_type_kind_0_0[1];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_0;

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_component_type_kind_0_1[1];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_1;

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_component_type_kind_0_2[1];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_2;

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_component_type_kind_0_0[1];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_component_type_kind_0_1[1];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_component_type_kind_0_2[1];

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_component_type_kind_0[3];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_component_type_kind_0[3];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_component_type_kind_0[3];

static const MR_FA_TypeInfo_Struct2 hlds__du_type_layout__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__du_type_layout__type_ctor_info_component_type_kind_0;

static const MR_FA_TypeInfo_Struct1 hlds__du_type_layout__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

static const MR_FA_TypeInfo_Struct2 hlds__du_type_layout__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_decide_du_params_0_0[15];

static const MR_ConstString hlds__du_type_layout__hlds__du_type_layout__field_names_decide_du_params_0_0[15];

static const MR_DuArgLocn hlds__du_type_layout__hlds__du_type_layout__field_locns_decide_du_params_0_0[15];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_decide_du_params_0_0;

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_decide_du_params_0_0[1];

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_decide_du_params_0[1];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_decide_du_params_0[1];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_decide_du_params_0[1];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_0;

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_1;

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_direct_arg_cond_0_2[1];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_2;

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_3;

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_direct_arg_cond_0_0[3];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_direct_arg_cond_0_1[1];

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_direct_arg_cond_0[2];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_direct_arg_cond_0[4];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_direct_arg_cond_0[4];

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_field_id_0_0[1];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_field_id_0_0;

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_field_id_0_1[1];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_field_id_0_1;

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_field_id_0_0[1];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_field_id_0_1[1];

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_field_id_0[2];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_field_id_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_field_id_0[2];

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_direct_args_0_0;

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_direct_args_0_1;

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_direct_args_0[2];

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_direct_args_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_direct_args_0[2];

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_floats_0_0;

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_floats_0_1;

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_double_word_floats_0[2];

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_double_word_floats_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_double_word_floats_0[2];

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_int64s_0_0;

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_int64s_0_1;

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_double_word_int64s_0[2];

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_double_word_int64s_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_double_word_int64s_0[2];

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_inform_about_packing_0_0;

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_inform_about_packing_0_1;

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_inform_about_packing_0[2];

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_inform_about_packing_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_inform_about_packing_0[2];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_primary_tags_0_0;

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_maybe_primary_tags_0_1[2];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_primary_tags_0_1;

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_maybe_primary_tags_0_0[1];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_maybe_primary_tags_0_1[1];

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_maybe_primary_tags_0[2];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_maybe_primary_tags_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_primary_tags_0[2];

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_unboxed_no_tag_types_0_0;

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_unboxed_no_tag_types_0_1;

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_unboxed_no_tag_types_0[2];

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_unboxed_no_tag_types_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_unboxed_no_tag_types_0[2];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_packable_kind_0_0;

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_packable_kind_0_1[2];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_packable_kind_0_1;

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_packable_kind_0_0[1];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_packable_kind_0_1[1];

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_packable_kind_0[2];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_packable_kind_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_packable_kind_0[2];

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_sub_word_0_0[2];

static const MR_ConstString hlds__du_type_layout__hlds__du_type_layout__field_names_sub_word_0_0[2];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_sub_word_0_0;

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_sub_word_0_0[1];

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_sub_word_0[1];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_sub_word_0[1];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_sub_word_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__du_type_layout__list__ti_list_1hlds__du_type_layout__type_ctor_info_sub_word_0;

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_sub_word_bin_0_0[2];

static const MR_ConstString hlds__du_type_layout__hlds__du_type_layout__field_names_sub_word_bin_0_0[2];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_sub_word_bin_0_0;

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_sub_word_bin_0_0[1];

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_sub_word_bin_0[1];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_sub_word_bin_0[1];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_sub_word_bin_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__du_type_layout__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_repn_info_0;

static const MR_FA_TypeInfo_Struct2 hlds__du_type_layout__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_repn_info_0;

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_word_aligned_why_0_0;

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_word_aligned_why_0_1[1];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_word_aligned_why_0_1;

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_word_aligned_why_0_0[1];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_word_aligned_why_0_1[1];

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_word_aligned_why_0[2];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_word_aligned_why_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_word_aligned_why_0[2];

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__is_direct_arg_ctor__1965__1_2_p_0(
  MR_Integer ConsArity_19,
  MR_Integer HeadVar__2_45);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_complex_du_type_ctor__1072__1_2_p_0(
  MR_Word MaybeExistConstraints_26,
  MR_Word HeadVar__2_80);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_complex_du_type_ctor__1082__1_2_p_0(
  MR_Word CtorArgs_28,
  MR_Word HeadVar__2_76);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__647__1_2_p_0(
  MR_Integer Arity_23,
  MR_Integer HeadVar__2_41);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__646__1_2_p_0(
  MR_Word Args_22,
  MR_Word HeadVar__2_37);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__644__1_2_p_0(
  MR_Word MaybeExistConstraints_20,
  MR_Word HeadVar__2_33);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_if_simple_du_type__440__1_2_p_0(
  MR_Word Ctors_26,
  MR_Word HeadVar__2_61);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_if_simple_du_type__439__1_2_p_0(
  MR_Word MaybeRepn0_28,
  MR_Word HeadVar__2_57);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__setup_decide_du_params__365__1_2_p_0(
  MR_Word AllowPackingDummies_22,
  MR_Word HeadVar__2_65);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__setup_decide_du_params__363__1_2_p_0(
  MR_Word AllowPackingInts_21,
  MR_Word HeadVar__2_61);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__setup_decide_du_params__361__1_2_p_0(
  MR_Word AllowDoubleWords_8,
  MR_Word HeadVar__2_57);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_type_repns__243__1_1_p_0(
  MR_Word MustBeSingleFunctorTagTypes_26);

static void MR_CALL 
hlds__du_type_layout____Compare____type_repn_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____type_repn_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout____Compare____sub_word_bin_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____sub_word_bin_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout____Compare____sub_word_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____sub_word_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_unboxed_no_tag_types_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_unboxed_no_tag_types_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_inform_about_packing_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_inform_about_packing_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_double_word_int64s_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_double_word_int64s_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_double_word_floats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_double_word_floats_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_direct_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_direct_args_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout____Compare____field_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____field_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout____Compare____direct_arg_cond_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____direct_arg_cond_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout____Compare____decide_du_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_primary_tags_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____decide_du_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_primary_tags_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout____Compare____component_type_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____component_type_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout____Compare____component_type_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__du_type_layout____Compare____word_aligned_why_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__du_type_layout____Compare____packable_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____component_type_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____word_aligned_why_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____packable_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout__output_direct_arg_functor_summary_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__du_type_layout__output_direct_arg_functor_summary_5_p_0(
  MR_Word ModuleName_6,
  MR_Word TypeCtor_7,
  MR_Word DirectArgFunctorNames_8);

static void MR_CALL 
hlds__du_type_layout__describe_sub_word_4_p_0(
  MR_Word SubWord_5,
  MR_Word * Pieces_6,
  MR_Integer STATE_VARIABLE_TotalNumBits_0_13,
  MR_Integer * STATE_VARIABLE_TotalNumBits_14);

static void MR_CALL 
hlds__du_type_layout__describe_sub_word_bin_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__du_type_layout__describe_sub_word_bin_2_p_0(
  MR_Word SubWordBin_3,
  MR_Word * Pieces_4);

static void MR_CALL 
hlds__du_type_layout__insert_subword_into_first_fit_bin_4_p_0(
  MR_Integer BinSize_5,
  MR_Word SubWord_6,
  MR_Word Bins0_7,
  MR_Word * Bins_8);

static MR_Word MR_CALL 
hlds__du_type_layout__constructor_to_sym_name_and_arity_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
hlds__du_type_layout__is_direct_arg_ctor_7_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__du_type_layout__is_direct_arg_ctor_7_p_0(
  MR_Word ComponentTypeMap_8,
  MR_Word TypeCtorModule_9,
  MR_Word TypeStatus_10,
  MR_Word TypeIsImported_11,
  MR_Word TypeDefinedHere_12,
  MR_Word AssertedDirectArgCtors_13,
  MR_Word Ctor_14);

static void MR_CALL 
hlds__du_type_layout__compare_sized_packable_functors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Result_8);

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_type_ctor_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word Params_15,
  MR_Word ComponentTypeMap_16,
  MR_Word TypeCtor_17,
  MR_Word TypeStatus_18,
  MR_Word CtorTagMap_19,
  MR_Integer NumRemoteSecTagBits_20,
  MR_Word Ctor_21,
  MR_Word * CtorRepn_22,
  MR_Word STATE_VARIABLE_CtorRepnMap_0_67,
  MR_Word * STATE_VARIABLE_CtorRepnMap_68,
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70);

static MR_bool MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_99_116_111_114_95_95_91_55_93_95_48_13_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_99_116_111_114_95_95_91_55_93_95_48_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_99_116_111_114_95_95_91_55_93_95_48_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word Params_15,
  MR_Word ComponentTypeMap_16,
  MR_Word TypeCtor_17,
  MR_Word TypeStatus_18,
  MR_Word CtorTagMap_19,
  MR_Word Ctor_21,
  MR_Word * CtorRepn_22,
  MR_Word STATE_VARIABLE_CtorRepnMap_0_67,
  MR_Word * STATE_VARIABLE_CtorRepnMap_68,
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70);

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_99_116_111_114_95_108_111_99_97_108_95_97_114_103_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word Params_10,
  MR_Word ComponentTypeMap_11,
  MR_Word LocalSectag_12,
  MR_Word CtorArgs_13,
  MR_Word * CtorArgRepns_14,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_99_116_111_114_95_108_111_99_97_108_95_97_114_103_115_95_108_111_111_112_95_95_91_49_93_95_48_7_p_0(
  MR_Word Params_2,
  MR_Word ComponentTypeMap_3,
  MR_Integer NumPrimSecTagBits_4,
  MR_Integer * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
hlds__du_type_layout__decide_if_complex_du_type_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Params_11,
  MR_Word ComponentTypeMap_12,
  MR_Word TypeCtorTypeDefn0_13,
  MR_Word * TypeCtorTypeDefn_14,
  MR_Word STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_32,
  MR_Word * STATE_VARIABLE_MustBeSingleFunctorTagTypes_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35);

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_95_91_55_93_95_48_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word Params_14,
  MR_Word ComponentTypeMap_15,
  MR_Word TypeCtor_16,
  MR_Word TypeDefn0_17,
  MR_Word Ctors_18,
  MR_Word * Repn_20,
  MR_Word STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_26,
  MR_Word * STATE_VARIABLE_MustBeSingleFunctorTagTypes_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Box MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Params_12,
  MR_Word ComponentTypeMap_13,
  MR_Word TypeCtor_14,
  MR_Word TypeDefn0_15,
  MR_Word Ctors_16,
  MR_Word * Repn_18,
  MR_Word STATE_VARIABLE_Specs_0_60,
  MR_Word * STATE_VARIABLE_Specs_61);

static void MR_CALL 
hlds__du_type_layout__separate_out_constants_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
hlds__du_type_layout__compute_cheaper_tag_test_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word CtorRepns_5,
  MR_Word * CheaperTagTest_6);

static void MR_CALL 
hlds__du_type_layout__check_direct_arg_assertions_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_3,
  MR_Word * STATE_VARIABLE_Specs_4);

static void MR_CALL 
hlds__du_type_layout__compute_local_packable_functors_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__du_type_layout__compute_local_packable_functors_9_p_0(
  MR_Word Params_10,
  MR_Word ComponentTypeMap_11,
  MR_Integer NumPtagBits_12,
  MR_Word Constants_13,
  MR_Word Functors_14,
  MR_Word * PackedFunctors_15,
  MR_Word * NonPackedFunctors_16,
  MR_Word * SectagBits_17,
  MR_Word * MustMask_18);

static void MR_CALL 
hlds__du_type_layout__num_bits_needed_for_n_things_2_p_0(
  MR_Integer NumSharers_3,
  MR_Integer * NumBits_4);

static void MR_CALL 
hlds__du_type_layout__num_bits_needed_for_n_things_loop_3_p_0(
  MR_Integer N_4,
  MR_Integer NumBits0_5,
  MR_Integer * NumBits_6);

static void MR_CALL 
hlds__du_type_layout__compute_sectag_bits_2_p_0(
  MR_Integer NumBits_3,
  MR_Word * SectagBits_4);

static void MR_CALL 
hlds__du_type_layout__separate_out_local_sectag_packable_5_p_0(
  MR_Word Params_1,
  MR_Word ComponentTypeMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_bool MR_CALL 
hlds__du_type_layout__args_are_all_packable_5_p_0(
  MR_Word Params_1,
  MR_Word ComponentTypeMap_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_NumBits_0_4,
  MR_Integer * STATE_VARIABLE_NumBits_5);

static void MR_CALL 
hlds__du_type_layout__take_local_packable_functors_incr_sectag_bits_8_p_0(
  MR_Integer NumArgPackBits_9,
  MR_Integer NumPtagBits_10,
  MR_Integer NumSectagBits0_11,
  MR_Integer * NumSectagBits_12,
  MR_Word RevPackedFunctors0_13,
  MR_Word NonPackedFunctors0_14,
  MR_Word * RevPackedFunctors_15,
  MR_Word * NonPackedFunctors_16);

static void MR_CALL 
hlds__du_type_layout__take_local_packable_functors_constant_sectag_bits_10_p_0(
  MR_Integer ArgPackBits_1,
  MR_Integer PtagBits_2,
  MR_Integer SectagBits_3,
  MR_Integer TakeLimit_4,
  MR_Integer STATE_VARIABLE_NumTaken_0_5,
  MR_Integer * STATE_VARIABLE_NumTaken_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_RevPackedFunctors_0_8,
  MR_Word * STATE_VARIABLE_RevPackedFunctors_9,
  MR_Word * HeadVar__10_10);

static void MR_CALL 
hlds__du_type_layout__assign_tags_to_non_direct_arg_functors_8_p_0(
  MR_Word TypeCtor_1,
  MR_Word MaxPtag_2,
  uint8_t STATE_VARIABLE_CurPtagUint8_0_3,
  MR_Word AddedBy_4,
  MR_Word HeadVar__5_5,
  MR_Unsigned * HeadVar__6_6,
  MR_Word STATE_VARIABLE_CtorTagMap_0_7,
  MR_Word * STATE_VARIABLE_CtorTagMap_8);

static void MR_CALL 
hlds__du_type_layout__assign_shared_remote_tags_to_non_direct_arg_functors_8_p_0(
  MR_Word TypeCtor_1,
  MR_Word Ptag_2,
  MR_Word AddedBy_3,
  MR_Word HeadVar__4_4,
  MR_Unsigned STATE_VARIABLE_CurRemoteSecTag_0_5,
  MR_Unsigned * STATE_VARIABLE_CurRemoteSecTag_6,
  MR_Word STATE_VARIABLE_CtorTagMap_0_7,
  MR_Word * STATE_VARIABLE_CtorTagMap_8);

static void MR_CALL 
hlds__du_type_layout__assign_tags_to_direct_arg_functors_9_p_0(
  MR_Word TypeCtor_1,
  MR_Word MaxPtag_2,
  uint8_t HeadVar__3_3,
  uint8_t * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word NonDirectArgCtors_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_CtorTagMap_0_8,
  MR_Word * STATE_VARIABLE_CtorTagMap_9);

static void MR_CALL 
hlds__du_type_layout__assign_tags_to_local_packed_functors_8_p_0(
  MR_Word TypeCtor_1,
  MR_Word Ptag_2,
  MR_Integer NumPtagBits_3,
  MR_Word SectagBits_4,
  MR_Unsigned CurSecTag_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_CtorTagMap_0_7,
  MR_Word * STATE_VARIABLE_CtorTagMap_8);

static void MR_CALL 
hlds__du_type_layout__assign_tags_to_constants_10_p_0(
  MR_Word TypeCtor_1,
  MR_Word Ptag_2,
  MR_Integer NumPtagBits_3,
  MR_Word SectagBits_4,
  MR_Word MustMask_5,
  MR_Unsigned STATE_VARIABLE_CurSecTag_0_6,
  MR_Unsigned * STATE_VARIABLE_CurSecTag_7,
  MR_Word HeadVar__8_8,
  MR_Word STATE_VARIABLE_CtorTagMap_0_9,
  MR_Word * STATE_VARIABLE_CtorTagMap_10);

static MR_Word MR_CALL 
hlds__du_type_layout__target_uses_constructors_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_type_single_ctor_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Params_10,
  MR_Word ComponentTypeMap_11,
  MR_Word TypeStatus_12,
  MR_Word SingleCtor_13,
  MR_Word * Repn_14,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_99_116_111_114_95_114_101_109_111_116_101_95_97_114_103_115_95_95_91_53_93_95_48_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word Params_15,
  MR_Word ComponentTypeMap_16,
  MR_Word TypeStatus_17,
  MR_Word CtorTag_19,
  MR_Word MaybeExistConstraints_20,
  MR_Word CtorSymName_21,
  MR_Word CtorContext_22,
  MR_Word CtorArgs_23,
  MR_Word * CtorArgRepns_24,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46);

static void MR_CALL 
hlds__du_type_layout__inform_about_any_suboptimal_packing_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout__inform_about_any_suboptimal_packing_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__du_type_layout__inform_about_any_suboptimal_packing_6_p_0(
  MR_Word Params_7,
  MR_Word CtorSymName_8,
  MR_Word CtorContext_9,
  MR_Word CtorArgRepns_10,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static void MR_CALL 
hlds__du_type_layout__record_subword_args_and_count_their_words_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CurArgNum_2,
  MR_Word STATE_VARIABLE_SubWords_0_3,
  MR_Word * STATE_VARIABLE_SubWords_4,
  MR_Integer STATE_VARIABLE_NumWords_0_5,
  MR_Integer * STATE_VARIABLE_NumWords_6);

static void MR_CALL 
hlds__du_type_layout__worth_arg_packing_compare_3_p_0(
  MR_Integer UnpackedLength_4,
  MR_Integer PackedLength_5,
  MR_Word * Worthwhile_6);

static MR_bool MR_CALL 
hlds__du_type_layout__worth_arg_packing_2_f_0_1(
  MR_Box closure_arg);

static MR_Word MR_CALL 
hlds__du_type_layout__worth_arg_packing_2_f_0(
  MR_Word UnpackedArgs_4,
  MR_Word PackedArgs_5);

static void MR_CALL 
hlds__du_type_layout__count_words_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Count_0_2,
  MR_Integer * STATE_VARIABLE_Count_3);

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_ctor_remote_args_loop_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Params_2,
  MR_Word ComponentTypeMap_3,
  MR_Integer CurAOWordNum_4,
  MR_Integer CurCellWordNum_5,
  MR_Integer CurShift_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8);

static void MR_CALL 
hlds__du_type_layout__deref_eqv_types_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type0_5,
  MR_Word * Type_6);

static void MR_CALL 
hlds__du_type_layout__padding_increment_2_p_0(
  MR_Integer CurShift_3,
  MR_Integer * PaddingIncrement_4);

static MR_bool MR_CALL 
hlds__du_type_layout__may_pack_arg_type_4_p_0(
  MR_Word Params_5,
  MR_Word ComponentTypeMap_6,
  MR_Word ArgType_7,
  MR_Word * PackableKind_8);

static MR_Word MR_CALL 
hlds__du_type_layout__add_dummy_repn_to_ctor_arg_1_f_0(
  MR_Word ConsArg_3);

static MR_Box MR_CALL 
hlds__du_type_layout__add_repn_to_foreign_enum_ctor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__du_type_layout__add_repn_to_foreign_enum_ctor_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word ConsTagMap_8,
  MR_Word Ctor_9,
  MR_Word * CtorRepn_10,
  MR_Word STATE_VARIABLE_CtorRepnMap_0_21,
  MR_Word * STATE_VARIABLE_CtorRepnMap_22);

static MR_bool MR_CALL 
hlds__du_type_layout__decide_if_simple_du_type_13_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__du_type_layout__decide_if_simple_du_type_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__du_type_layout__decide_if_simple_du_type_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word Params_15,
  MR_Word TypeCtorToForeignEnumMap_16,
  MR_Word TypeCtorTypeDefn0_17,
  MR_Word * TypeCtorTypeDefn_18,
  MR_Word STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_43,
  MR_Word * STATE_VARIABLE_MustBeSingleFunctorTagTypes_44,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_45,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_46,
  MR_Word STATE_VARIABLE_NoTagTypeMap_0_47,
  MR_Word * STATE_VARIABLE_NoTagTypeMap_48,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50);

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_110_111_116_97_103_95_95_91_49_93_95_48_13_p_0(
  MR_Word Params_15,
  MR_Word TypeCtor_16,
  MR_Word TypeDefn0_17,
  MR_Word Body0_18,
  MR_Word SingleCtorSymName_19,
  MR_Word SingleArg_20,
  MR_Word SingleCtorContext_21,
  MR_Word * TypeCtorTypeDefn_22,
  MR_Word STATE_VARIABLE_NoTagTypeMap_0_48,
  MR_Word * STATE_VARIABLE_NoTagTypeMap_49,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51);

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_100_117_109_109_121_95_111_114_95_109_101_114_99_117_114_121_95_101_110_117_109_95_95_91_49_93_95_48_11_p_0(
  MR_Word Params_13,
  MR_Word TypeCtor_14,
  MR_Word TypeDefn0_15,
  MR_Word Body0_16,
  MR_Word Ctors_17,
  MR_Word * TypeCtorTypeDefn_18,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_49,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52);

static MR_bool MR_CALL 
hlds__du_type_layout__assign_tags_to_enum_constants_6_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__du_type_layout__assign_tags_to_enum_constants_6_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__du_type_layout__assign_tags_to_enum_constants_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__du_type_layout__assign_tags_to_enum_constants_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Integer STATE_VARIABLE_CurTag_0_3,
  MR_Integer * STATE_VARIABLE_CurTag_4,
  MR_Word STATE_VARIABLE_CtorRepnMap_0_5,
  MR_Word * STATE_VARIABLE_CtorRepnMap_6);

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_49_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_49_93_95_48_10_p_0(
  MR_Word Params_12,
  MR_Word TypeCtor_13,
  MR_Word TypeDefn0_14,
  MR_Word Body0_15,
  MR_Word Ctors_16,
  MR_Tuple ForeignEnums_17,
  MR_Word * TypeCtorTypeDefn_18,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39);

static MR_Word MR_CALL 
hlds__du_type_layout__type_ctor_sna_1_f_0(
  MR_Word TypeCtor_3);

static MR_bool MR_CALL 
hlds__du_type_layout__ctors_are_all_constants_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__du_type_layout__add_abstract_if_packable_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word AbstractDetails_6,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_11,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_12);

static void MR_CALL 
hlds__du_type_layout__add_foreign_if_word_aligned_ptr_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Params_10,
  MR_Word TypeCtor_11,
  MR_Word ForeignType_12,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_24,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
hlds__du_type_layout__add_du_if_single_ctor_is_word_aligned_ptr_8_p_0(
  MR_Word Params_9,
  MR_Word TypeCtor_10,
  MR_Word TypeDefn_11,
  MR_Word MaybeForeign_12,
  MR_Word STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_23,
  MR_Word * STATE_VARIABLE_MustBeSingleFunctorTagTypes_24,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_25,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_26);

static MR_bool MR_CALL 
hlds__du_type_layout__is_foreign_type_body_for_target_3_p_0(
  MR_Word ForeignType_4,
  MR_Word Target_5,
  MR_Word * Assertions_6);

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_4(
  MR_Box closure_arg);

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__du_type_layout__build_type_repn_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_2,
  MR_Word * STATE_VARIABLE_TypeRepnMap_3);

static MR_bool MR_CALL 
hlds__du_type_layout__setup_decide_du_params_3_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__du_type_layout__setup_decide_du_params_3_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__du_type_layout__setup_decide_du_params_3_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__du_type_layout__setup_decide_du_params_3_p_0(
  MR_Word Globals_4,
  MR_Word DirectArgMap_5,
  MR_Word * Params_6);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____component_type_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____component_type_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____component_type_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____component_type_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____decide_du_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____decide_du_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____direct_arg_cond_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____direct_arg_cond_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____field_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____field_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_direct_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_direct_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_double_word_floats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_double_word_floats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_double_word_int64s_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_double_word_int64s_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_inform_about_packing_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_inform_about_packing_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_primary_tags_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_primary_tags_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_unboxed_no_tag_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_unboxed_no_tag_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____packable_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____packable_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____sub_word_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____sub_word_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____sub_word_bin_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____sub_word_bin_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____type_repn_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____type_repn_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____word_aligned_why_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____word_aligned_why_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__du_type_layout_scalar_common_1[70][2];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_2[17][3];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_3[9][5];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_4[2][9];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_5[2][16];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_6[1][12];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_7[1][4];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_8[1][8];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_9[3][7];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_10[3][1];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_12[2][6];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_13[1][10];


/* sealed */ struct hlds__du_type_layout__vector_common_type_11_0_s {
  const MR_Word hlds__du_type_layout__vector_common_type_11_0__vct_11_f_0;
};

static /* final */ const struct hlds__du_type_layout__vector_common_type_11_0_s hlds__du_type_layout_vector_common_11[4];



static /* final */ const MR_Box hlds__du_type_layout_scalar_common_1[70][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_du_type_repn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_bin_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_0))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration and a direct_arg specification."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has both a"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but it has function symbols whose arity is not zero."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[12])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration,"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has a"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) -1)))),
    ((MR_Box) (((MR_Box) ((MR_Integer) -1))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "yet it has a direct_arg specification."))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[12])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "have arity zero,"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) 0)))),
    ((MR_Box) (((MR_Box) ((MR_Integer) 0))))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is a no_tag type,"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[28])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but it also has a direct_arg specification."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[12])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has a foreign language representation on this backend,"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to its sole argument."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[12])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot be represented as a direct pointer"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not affect the effectiveness of the packing.)"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[12])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(The position of the word sized arguments"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "that would allow better packing."))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which take up less than one word each"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Here is one arrangement for the arguments"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[49])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "could be packed more tightly."))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[12])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "One word containing the following arguments:"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[12])))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: all the function symbols of"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The arguments of the constructor"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This arrangement of the sub-word-sized arguments"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "would take"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "whereas their current arrangement takes"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "These total"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "- the argument named"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "- the current"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "argument,"))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_2[17][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__du_type_layout_scalar_common_1[7]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__du_type_layout_scalar_common_1[6]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__du_type_layout_scalar_common_1[0]))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__du_type_layout_scalar_common_8[0])),
    ((MR_Box) (hlds__du_type_layout__decide_type_repns_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__du_type_layout_scalar_common_9[0])),
    ((MR_Box) (hlds__du_type_layout__decide_type_repns_4_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__du_type_layout_scalar_common_3[6])),
    ((MR_Box) (hlds__du_type_layout__add_repn_to_foreign_enum_ctor_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&hlds__du_type_layout_scalar_common_3[7])),
    ((MR_Box) (hlds__du_type_layout__inform_about_any_suboptimal_packing_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&hlds__du_type_layout_scalar_common_12[0])),
    ((MR_Box) (hlds__du_type_layout__compute_local_packable_functors_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&hlds__du_type_layout_scalar_common_3[8])),
    ((MR_Box) (hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (((MR_Box) ((MR_Integer) -1)))),
    ((MR_Box) (((MR_Box) ((MR_Integer) -1))))
  },
  /* row 15 */
  {
    ((MR_Box) (&hlds__du_type_layout_scalar_common_9[2])),
    ((MR_Box) (hlds__du_type_layout__describe_sub_word_bin_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&hlds__du_type_layout_scalar_common_12[1])),
    ((MR_Box) (hlds__du_type_layout__output_direct_arg_functor_summary_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_3[9][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_arg_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__du_type_layout__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0)),
    ((MR_Box) (&hlds__du_type_layout__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_bin_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_4[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_5[2][16] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_decide_du_params_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0)),
    ((MR_Box) (&hlds__du_type_layout__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__du_type_layout__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__du_type_layout__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__du_type_layout__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__du_type_layout__type_ctor_info_component_type_kind_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__du_type_layout__type_ctor_info_component_type_kind_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_no_tag_type_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_no_tag_type_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_decide_du_params_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__du_type_layout__type_ctor_info_component_type_kind_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_type_status_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_6[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_decide_du_params_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__du_type_layout__type_ctor_info_component_type_kind_0)),
    ((MR_Box) (&hlds__du_type_layout__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__du_type_layout__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__du_type_layout__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__du_type_layout__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_7[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__du_type_layout__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_8[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_item_foreign_export_enum_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_9[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_hlds__du_type_layout__type_ctor_info_sub_word_bin_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_hlds__du_type_layout__type_ctor_info_sub_word_bin_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_10[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    (MR_Box) (((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 1)) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 2)) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 3)) | (((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 4))))))))))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_12[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__du_type_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__du_type_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_13[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__du_type_layout__type_ctor_info_component_type_kind_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_type_status_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
};


static /* final */ const struct hlds__du_type_layout__vector_common_type_11_0_s hlds__du_type_layout_vector_common_11[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 0 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__du_type_layout__type_ctor_info_component_type_kind_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_no_tag_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__du_type_layout__list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&hlds__du_type_layout__list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_du_type_repn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_hlds__du_type_layout__type_ctor_info_sub_word_bin_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_bin_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_constructor_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)
  }
};

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_component_type_kind_0_0[1] = {
  (MR_PseudoTypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_packable_kind_0)
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_0 = {
  (MR_String) "packable",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__du_type_layout__hlds__du_type_layout__field_types_component_type_kind_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_component_type_kind_0_1[1] = {
  (MR_PseudoTypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_word_aligned_why_0)
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_1 = {
  (MR_String) "is_word_aligned_ptr",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__du_type_layout__hlds__du_type_layout__field_types_component_type_kind_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_component_type_kind_0_2[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_2 = {
  (MR_String) "is_eqv_type",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 2,
  hlds__du_type_layout__hlds__du_type_layout__field_types_component_type_kind_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_component_type_kind_0_0[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_2
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_component_type_kind_0_1[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_0
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_component_type_kind_0_2[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_1
};

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_component_type_kind_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_component_type_kind_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_component_type_kind_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_component_type_kind_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_component_type_kind_0[3] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_2,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_1,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_0
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_component_type_kind_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____component_type_kind_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____component_type_kind_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "component_type_kind",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_component_type_kind_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_component_type_kind_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_component_type_kind_0
};

static const MR_FA_TypeInfo_Struct2 hlds__du_type_layout__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__du_type_layout__type_ctor_info_component_type_kind_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__du_type_layout____Unify____component_type_map_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____component_type_map_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "component_type_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__du_type_layout__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__du_type_layout__type_ctor_info_component_type_kind_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__du_type_layout__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__du_type_layout__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__du_type_layout__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)
  }
};

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_decide_du_params_0_0[15] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0),
  (MR_PseudoTypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_double_word_floats_0),
  (MR_PseudoTypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_double_word_int64s_0),
  (MR_PseudoTypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_unboxed_no_tag_types_0),
  (MR_PseudoTypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_primary_tags_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_direct_args_0),
  (MR_PseudoTypeInfo) (&hlds__du_type_layout__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0),
  (MR_PseudoTypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_inform_about_packing_0)
};

static const MR_ConstString hlds__du_type_layout__hlds__du_type_layout__field_names_decide_du_params_0_0[15] = {
  (MR_String) "ddp_target",
  (MR_String) "ddp_double_word_floats",
  (MR_String) "ddp_double_word_int64s",
  (MR_String) "ddp_unboxed_no_tag_types",
  (MR_String) "ddp_maybe_primary_tags",
  (MR_String) "ddp_arg_pack_bits",
  (MR_String) "ddp_allow_double_word_ints",
  (MR_String) "ddp_allow_packing_ints",
  (MR_String) "ddp_allow_packing_dummies",
  (MR_String) "ddp_allow_packing_local_sectags",
  (MR_String) "ddp_allow_packing_remote_sectags",
  (MR_String) "ddp_experiment",
  (MR_String) "ddp_maybe_direct_args",
  (MR_String) "ddp_direct_arg_map",
  (MR_String) "ddp_inform_suboptimal_pack"
};

static const MR_DuArgLocn hlds__du_type_layout__hlds__du_type_layout__field_locns_decide_du_params_0_0[15] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
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
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 4,
    (MR_Integer) 1
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

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_decide_du_params_0_0 = {
  (MR_String) "decide_du_params",
  (MR_Integer) 15,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__du_type_layout__hlds__du_type_layout__field_types_decide_du_params_0_0,
  hlds__du_type_layout__hlds__du_type_layout__field_names_decide_du_params_0_0,
  hlds__du_type_layout__hlds__du_type_layout__field_locns_decide_du_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_decide_du_params_0_0[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_decide_du_params_0_0
};

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_decide_du_params_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_decide_du_params_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_decide_du_params_0[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_decide_du_params_0_0
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_decide_du_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_decide_du_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____decide_du_params_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____decide_du_params_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "decide_du_params",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_decide_du_params_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_decide_du_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_decide_du_params_0
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_0 = {
  (MR_String) "direct_arg_asserted",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_1 = {
  (MR_String) "arg_type_is_word_aligned_pointer",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_direct_arg_cond_0_2[1] = {
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_type_status_0)
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_2 = {
  (MR_String) "arg_type_defined_in_same_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  hlds__du_type_layout__hlds__du_type_layout__field_types_direct_arg_cond_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_3 = {
  (MR_String) "arg_type_defined_in_different_module",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_direct_arg_cond_0_0[3] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_1,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_3
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_direct_arg_cond_0_1[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_2
};

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_direct_arg_cond_0[2] = {
  {
    (MR_Integer) 3,
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_direct_arg_cond_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_direct_arg_cond_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_direct_arg_cond_0[4] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_3,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_2,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_1,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_0
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_direct_arg_cond_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_direct_arg_cond_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____direct_arg_cond_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____direct_arg_cond_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "direct_arg_cond",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_direct_arg_cond_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_direct_arg_cond_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_direct_arg_cond_0
};

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_field_id_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_field_id_0_0 = {
  (MR_String) "field_id_name",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__du_type_layout__hlds__du_type_layout__field_types_field_id_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_field_id_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_field_id_0_1 = {
  (MR_String) "field_id_ordinal",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__du_type_layout__hlds__du_type_layout__field_types_field_id_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_field_id_0_0[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_field_id_0_0
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_field_id_0_1[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_field_id_0_1
};

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_field_id_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_field_id_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_field_id_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_field_id_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_field_id_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_field_id_0_1
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_field_id_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_field_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____field_id_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____field_id_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "field_id",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_field_id_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_field_id_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_field_id_0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_direct_args_0_0 = {
  (MR_String) "direct_args_disabled",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_direct_args_0_1 = {
  (MR_String) "direct_args_enabled",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_direct_args_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_direct_args_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_direct_args_0_1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_direct_args_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_direct_args_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_direct_args_0_1
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_direct_args_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_direct_args_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__du_type_layout____Unify____maybe_direct_args_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____maybe_direct_args_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "maybe_direct_args",
  {     hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_direct_args_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_direct_args_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_direct_args_0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_floats_0_0 = {
  (MR_String) "no_double_word_floats",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_floats_0_1 = {
  (MR_String) "use_double_word_floats",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_double_word_floats_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_floats_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_floats_0_1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_double_word_floats_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_floats_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_floats_0_1
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_double_word_floats_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_double_word_floats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__du_type_layout____Unify____maybe_double_word_floats_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____maybe_double_word_floats_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "maybe_double_word_floats",
  {     hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_double_word_floats_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_double_word_floats_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_double_word_floats_0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_int64s_0_0 = {
  (MR_String) "no_double_word_int64s",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_int64s_0_1 = {
  (MR_String) "use_double_word_int64s",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_double_word_int64s_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_int64s_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_int64s_0_1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_double_word_int64s_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_int64s_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_int64s_0_1
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_double_word_int64s_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_double_word_int64s_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__du_type_layout____Unify____maybe_double_word_int64s_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____maybe_double_word_int64s_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "maybe_double_word_int64s",
  {     hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_double_word_int64s_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_double_word_int64s_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_double_word_int64s_0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_inform_about_packing_0_0 = {
  (MR_String) "do_not_inform_about_packing",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_inform_about_packing_0_1 = {
  (MR_String) "inform_about_packing",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_inform_about_packing_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_inform_about_packing_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_inform_about_packing_0_1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_inform_about_packing_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_inform_about_packing_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_inform_about_packing_0_1
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_inform_about_packing_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_inform_about_packing_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__du_type_layout____Unify____maybe_inform_about_packing_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____maybe_inform_about_packing_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "maybe_inform_about_packing",
  {     hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_inform_about_packing_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_inform_about_packing_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_inform_about_packing_0
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_primary_tags_0_0 = {
  (MR_String) "no_primary_tags",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_maybe_primary_tags_0_1[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_primary_tags_0_1 = {
  (MR_String) "max_primary_tag",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__du_type_layout__hlds__du_type_layout__field_types_maybe_primary_tags_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_maybe_primary_tags_0_0[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_primary_tags_0_0
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_maybe_primary_tags_0_1[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_primary_tags_0_1
};

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_maybe_primary_tags_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_maybe_primary_tags_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_maybe_primary_tags_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_maybe_primary_tags_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_primary_tags_0_1,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_primary_tags_0_0
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_primary_tags_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_primary_tags_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____maybe_primary_tags_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____maybe_primary_tags_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "maybe_primary_tags",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_maybe_primary_tags_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_maybe_primary_tags_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_primary_tags_0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_unboxed_no_tag_types_0_0 = {
  (MR_String) "no_unboxed_no_tag_types",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_unboxed_no_tag_types_0_1 = {
  (MR_String) "use_unboxed_no_tag_types",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_unboxed_no_tag_types_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_unboxed_no_tag_types_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_unboxed_no_tag_types_0_1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_unboxed_no_tag_types_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_unboxed_no_tag_types_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_unboxed_no_tag_types_0_1
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_unboxed_no_tag_types_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_unboxed_no_tag_types_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__du_type_layout____Unify____maybe_unboxed_no_tag_types_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____maybe_unboxed_no_tag_types_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "maybe_unboxed_no_tag_types",
  {     hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_unboxed_no_tag_types_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_unboxed_no_tag_types_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_unboxed_no_tag_types_0
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_packable_kind_0_0 = {
  (MR_String) "packable_dummy",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_packable_kind_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_fill_kind_0)
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_packable_kind_0_1 = {
  (MR_String) "packable_n_bits",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__du_type_layout__hlds__du_type_layout__field_types_packable_kind_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_packable_kind_0_0[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_packable_kind_0_0
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_packable_kind_0_1[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_packable_kind_0_1
};

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_packable_kind_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_packable_kind_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_packable_kind_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_packable_kind_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_packable_kind_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_packable_kind_0_1
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_packable_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_packable_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____packable_kind_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____packable_kind_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "packable_kind",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_packable_kind_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_packable_kind_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_packable_kind_0
};

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_sub_word_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_field_id_0)
};

static const MR_ConstString hlds__du_type_layout__hlds__du_type_layout__field_names_sub_word_0_0[2] = {
  (MR_String) "sub_word_num_bits",
  (MR_String) "sub_word_id"
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_sub_word_0_0 = {
  (MR_String) "sub_word",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__du_type_layout__hlds__du_type_layout__field_types_sub_word_0_0,
  hlds__du_type_layout__hlds__du_type_layout__field_names_sub_word_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_sub_word_0_0[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_sub_word_0_0
};

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_sub_word_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_sub_word_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_sub_word_0[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_sub_word_0_0
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_sub_word_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____sub_word_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____sub_word_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "sub_word",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_sub_word_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_sub_word_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_sub_word_0
};

static const MR_FA_TypeInfo_Struct1 hlds__du_type_layout__list__ti_list_1hlds__du_type_layout__type_ctor_info_sub_word_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_0)
  }
};

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_sub_word_bin_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__du_type_layout__list__ti_list_1hlds__du_type_layout__type_ctor_info_sub_word_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString hlds__du_type_layout__hlds__du_type_layout__field_names_sub_word_bin_0_0[2] = {
  (MR_String) "rev_sub_words_in_bin",
  (MR_String) "remaining_bits_in_bin"
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_sub_word_bin_0_0 = {
  (MR_String) "sub_word_bin",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__du_type_layout__hlds__du_type_layout__field_types_sub_word_bin_0_0,
  hlds__du_type_layout__hlds__du_type_layout__field_names_sub_word_bin_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_sub_word_bin_0_0[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_sub_word_bin_0_0
};

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_sub_word_bin_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_sub_word_bin_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_sub_word_bin_0[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_sub_word_bin_0_0
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_sub_word_bin_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_bin_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____sub_word_bin_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____sub_word_bin_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "sub_word_bin",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_sub_word_bin_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_sub_word_bin_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_sub_word_bin_0
};

static const MR_FA_TypeInfo_Struct1 hlds__du_type_layout__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_repn_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__du_type_layout__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_repn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__du_type_layout__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_type_repn_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__du_type_layout____Unify____type_repn_map_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____type_repn_map_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "type_repn_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__du_type_layout__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_repn_info_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_word_aligned_why_0_0 = {
  (MR_String) "foreign_type_assertion",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_word_aligned_why_0_1[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_word_aligned_why_0_1 = {
  (MR_String) "mercury_type_defn",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__du_type_layout__hlds__du_type_layout__field_types_word_aligned_why_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_word_aligned_why_0_0[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_word_aligned_why_0_0
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_word_aligned_why_0_1[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_word_aligned_why_0_1
};

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_word_aligned_why_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_word_aligned_why_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_word_aligned_why_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_word_aligned_why_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_word_aligned_why_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_word_aligned_why_0_1
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_word_aligned_why_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_word_aligned_why_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____word_aligned_why_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____word_aligned_why_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "word_aligned_why",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_word_aligned_why_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_word_aligned_why_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_word_aligned_why_0
};

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__is_direct_arg_ctor__1965__1_2_p_0(
  MR_Integer ConsArity_19,
  MR_Integer HeadVar__2_45)
{
  {
    MR_bool succeeded = (ConsArity_19 == HeadVar__2_45);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_complex_du_type_ctor__1072__1_2_p_0(
  MR_Word MaybeExistConstraints_26,
  MR_Word HeadVar__2_80)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____maybe_cons_exist_constraints_0_0(MaybeExistConstraints_26, HeadVar__2_80);
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_complex_du_type_ctor__1082__1_2_p_0(
  MR_Word CtorArgs_28,
  MR_Word HeadVar__2_76)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_1[8]), ((MR_Box) (CtorArgs_28)), ((MR_Box) (HeadVar__2_76)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__647__1_2_p_0(
  MR_Integer Arity_23,
  MR_Integer HeadVar__2_41)
{
  {
    MR_bool succeeded = (Arity_23 == HeadVar__2_41);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__646__1_2_p_0(
  MR_Word Args_22,
  MR_Word HeadVar__2_37)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_1[8]), ((MR_Box) (Args_22)), ((MR_Box) (HeadVar__2_37)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__644__1_2_p_0(
  MR_Word MaybeExistConstraints_20,
  MR_Word HeadVar__2_33)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____maybe_cons_exist_constraints_0_0(MaybeExistConstraints_20, HeadVar__2_33);
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_if_simple_du_type__440__1_2_p_0(
  MR_Word Ctors_26,
  MR_Word HeadVar__2_61)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_1[5]), ((MR_Box) (Ctors_26)), ((MR_Box) (HeadVar__2_61)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_if_simple_du_type__439__1_2_p_0(
  MR_Word MaybeRepn0_28,
  MR_Word HeadVar__2_57)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_1[4]), ((MR_Box) (MaybeRepn0_28)), ((MR_Box) (HeadVar__2_57)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__setup_decide_du_params__365__1_2_p_0(
  MR_Word AllowPackingDummies_22,
  MR_Word HeadVar__2_65)
{
  {
    MR_bool succeeded = (AllowPackingDummies_22 == HeadVar__2_65);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__setup_decide_du_params__363__1_2_p_0(
  MR_Word AllowPackingInts_21,
  MR_Word HeadVar__2_61)
{
  {
    MR_bool succeeded = (AllowPackingInts_21 == HeadVar__2_61);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__setup_decide_du_params__361__1_2_p_0(
  MR_Word AllowDoubleWords_8,
  MR_Word HeadVar__2_57)
{
  {
    MR_bool succeeded = (AllowDoubleWords_8 == HeadVar__2_57);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_type_repns__243__1_1_p_0(
  MR_Word MustBeSingleFunctorTagTypes_26)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set_tree234__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), MustBeSingleFunctorTagTypes_26);
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____type_repn_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____type_repn_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_2[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____sub_word_bin_0_0(
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
      MR_Integer ArgX2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_1[11]), &Var_8, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____sub_word_bin_0_0(
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
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_1[11]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____sub_word_0_0(
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
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_8;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        hlds__du_type_layout____Compare____field_id_0_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____sub_word_0_0(
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
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
        succeeded = hlds__du_type_layout____Unify____field_id_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_unboxed_no_tag_types_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_unboxed_no_tag_types_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_inform_about_packing_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_inform_about_packing_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_double_word_int64s_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_double_word_int64s_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_double_word_floats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_double_word_floats_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_direct_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_direct_args_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____field_id_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_String Var_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_16, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Integer ArgY1_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_17, ArgY1_11);
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____field_id_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
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
    else
    {
      MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (ArgX1_5 == ArgY1_6);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____direct_arg_cond_0_0(
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
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  hlds__status____Compare____type_status_0_0(HeadVar__1_1, Var_15, ArgY1_9);
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____direct_arg_cond_0_0(
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
                MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_10 == CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = hlds__status____Unify____type_status_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____decide_du_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_48 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_49 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_48 == CastY_49);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgX2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgY3_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgX4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ArgY4_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ArgX5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX6_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY6_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX7_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY7_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgX8_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY8_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX9_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY9_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX10_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgY10_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgX11_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ArgY11_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_String ArgX12_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_String ArgY12_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX13_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY13_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX14_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY14_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX15_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY15_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Unsigned packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word Var_34;
      MR_Integer Var_65 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_66 = (MR_Integer) (ArgY1_5);

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_34, Var_65, Var_66);
      succeeded = (Var_34 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_34;
      else
      {
        MR_Word Var_35;
        MR_Integer Var_67 = (MR_Integer) (ArgX2_6);
        MR_Integer Var_68 = (MR_Integer) (ArgY2_7);

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_35, Var_67, Var_68);
        succeeded = (Var_35 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_35;
        else
        {
          MR_Word Var_36;
          MR_Integer Var_69 = (MR_Integer) (ArgX3_8);
          MR_Integer Var_70 = (MR_Integer) (ArgY3_9);

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_36, Var_69, Var_70);
          succeeded = (Var_36 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_36;
          else
          {
            MR_Word Var_37;
            MR_Integer Var_71 = (MR_Integer) (ArgX4_10);
            MR_Integer Var_72 = (MR_Integer) (ArgY4_11);

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_37, Var_71, Var_72);
            succeeded = (Var_37 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_37;
            else
            {
              MR_Word Var_38;

              hlds__du_type_layout____Compare____maybe_primary_tags_0_0(&Var_38, ArgX5_12, ArgY5_13);
              succeeded = (Var_38 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_38;
              else
              {
                MR_Word Var_39;

                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_39, ArgX6_14, ArgY6_15);
                succeeded = (Var_39 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_39;
                else
                {
                  MR_Word Var_40;
                  MR_Integer Var_73 = (MR_Integer) (ArgX7_16);
                  MR_Integer Var_74 = (MR_Integer) (ArgY7_17);

                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_40, Var_73, Var_74);
                  succeeded = (Var_40 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_40;
                  else
                  {
                    MR_Word Var_41;
                    MR_Integer Var_75 = (MR_Integer) (ArgX8_18);
                    MR_Integer Var_76 = (MR_Integer) (ArgY8_19);

                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_41, Var_75, Var_76);
                    succeeded = (Var_41 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_41;
                    else
                    {
                      MR_Word Var_42;
                      MR_Integer Var_77 = (MR_Integer) (ArgX9_20);
                      MR_Integer Var_78 = (MR_Integer) (ArgY9_21);

                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_42, Var_77, Var_78);
                      succeeded = (Var_42 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_42;
                      else
                      {
                        MR_Word Var_43;
                        MR_Integer Var_79 = (MR_Integer) (ArgX10_22);
                        MR_Integer Var_80 = (MR_Integer) (ArgY10_23);

                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_43, Var_79, Var_80);
                        succeeded = (Var_43 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_43;
                        else
                        {
                          MR_Word Var_44;
                          MR_Integer Var_81 = (MR_Integer) (ArgX11_24);
                          MR_Integer Var_82 = (MR_Integer) (ArgY11_25);

                          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_44, Var_81, Var_82);
                          succeeded = (Var_44 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_44;
                          else
                          {
                            MR_Word Var_45;

                            mercury__private_builtin__builtin_compare_string_3_p_0(&Var_45, ArgX12_26, ArgY12_27);
                            succeeded = (Var_45 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_45;
                            else
                            {
                              MR_Word Var_46;
                              MR_Integer Var_83 = (MR_Integer) (ArgX13_28);
                              MR_Integer Var_84 = (MR_Integer) (ArgY13_29);

                              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_46, Var_83, Var_84);
                              succeeded = (Var_46 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_46;
                              else
                              {
                                MR_Word Var_47;

                                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_2[6]), &Var_47, ((MR_Box) (ArgX14_30)), ((MR_Box) (ArgY14_31)));
                                succeeded = (Var_47 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  *HeadVar__1_1 = Var_47;
                                else
                                {
                                  MR_Integer Var_85 = (MR_Integer) (ArgX15_32);
                                  MR_Integer Var_86 = (MR_Integer) (ArgY15_33);

                                  mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_85, Var_86);
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
    }
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_primary_tags_0_0(
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
      MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Integer ArgY2_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Var_12;
        uint8_t Var_19 = (uint8_t) (Var_18);
        uint8_t Var_20 = (uint8_t) (ArgY1_9);

        mercury__private_builtin__builtin_compare_uint8_3_p_0(&Var_12, Var_19, Var_20);
        succeeded = (Var_12 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_12;
        else
          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_17, ArgY2_11);
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____decide_du_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_33 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_34 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_33 == CastY_34);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_35_35;
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX7_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY7_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX9_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY9_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX10_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgY10_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgX11_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ArgY11_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_String ArgX12_25 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_String ArgY12_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX14_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY14_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX15_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY15_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Unsigned packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

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
            {
              succeeded = hlds__du_type_layout____Unify____maybe_primary_tags_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                {
                  succeeded = (ArgX7_15 == ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                      {
                        succeeded = (ArgX10_21 == ArgY10_22);
                        if (succeeded)
                        {
                          succeeded = (ArgX11_23 == ArgY11_24);
                          if (succeeded)
                          {
                            succeeded = (strcmp(ArgX12_25, ArgY12_26) == 0);
                            if (succeeded)
                            {
                              succeeded = (ArgX13_27 == ArgY13_28);
                              if (succeeded)
                              {
                                TypeInfo_35_35 = (MR_Word) (&hlds__du_type_layout_scalar_common_2[6]);
                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX14_29)), ((MR_Box) (ArgY14_30)));
                                if (succeeded)
                                  succeeded = (ArgX15_31 == ArgY15_32);
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
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_primary_tags_0_0(
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
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_8;
      uint8_t Var_12;
      uint8_t Var_13;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        Var_12 = (uint8_t) (ArgX1_5);
        Var_13 = (uint8_t) (ArgY1_6);
        succeeded = (Var_12 == Var_13);
        if (succeeded)
          succeeded = (ArgX2_7 == ArgY2_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____component_type_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____component_type_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____component_type_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_27 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_21 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 0));

                  parse_tree__prog_data____Compare____type_ctor_0_0(HeadVar__1_1, Var_27, ArgY1_21);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  hlds__du_type_layout____Compare____packable_kind_0_0(HeadVar__1_1, Var_29, ArgY1_5);
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
            MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  hlds__du_type_layout____Compare____word_aligned_why_0_0(HeadVar__1_1, Var_28, ArgY1_13);
                }
                break;
            }
          }
          break;
      }
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____word_aligned_why_0_0(
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

        hlds__hlds_data____Compare____hlds_type_defn_0_0(HeadVar__1_1, Var_11, ArgY1_7);
      }
    }
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____packable_kind_0_0(
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
      MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Integer ArgY1_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Var_12;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_12, Var_18, ArgY1_9);
        succeeded = (Var_12 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_12;
        else
        {
          MR_Integer Var_19 = (MR_Integer) (Var_17);
          MR_Integer Var_20 = (MR_Integer) (ArgY2_11);

          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_19, Var_20);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____component_type_kind_0_0(
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
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_7 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 0));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_8 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 0));
              succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = hlds__du_type_layout____Unify____packable_kind_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = hlds__du_type_layout____Unify____word_aligned_why_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
      }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____word_aligned_why_0_0(
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

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(ArgX1_5, ArgY1_6);
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____packable_kind_0_0(
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
      MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = (ArgX1_5 == ArgY1_6);
        if (succeeded)
          succeeded = (ArgX2_7 == ArgY2_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout__output_direct_arg_functor_summary_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__prog_out__write_sym_name_and_arity_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__du_type_layout__output_direct_arg_functor_summary_5_p_0(
  MR_Word ModuleName_6,
  MR_Word TypeCtor_7,
  MR_Word DirectArgFunctorNames_8)
{
  {
    parse_tree__prog_out__write_sym_name_3_p_0(ModuleName_6);
    mercury__io__write_string_3_p_0((MR_String) " : ");
    parse_tree__prog_out__write_type_ctor_3_p_0(TypeCtor_7);
    mercury__io__write_string_3_p_0((MR_String) " : ");
    mercury__io__write_list_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), DirectArgFunctorNames_8, (MR_String) ", ", (MR_Word) (&hlds__du_type_layout_scalar_common_2[16]));
    mercury__io__nl_2_p_0();
  }
}

static void MR_CALL 
hlds__du_type_layout__describe_sub_word_4_p_0(
  MR_Word SubWord_5,
  MR_Word * Pieces_6,
  MR_Integer STATE_VARIABLE_TotalNumBits_0_13,
  MR_Integer * STATE_VARIABLE_TotalNumBits_14)
{
  {
    MR_Integer SubWordNumBits_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SubWord_5, (MR_Integer) 0))));
    MR_Word Id_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubWord_5, (MR_Integer) 1))));
    MR_String NumBitsStr_10;
    MR_String Var_44;

    *STATE_VARIABLE_TotalNumBits_14 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TotalNumBits_0_13 + (MR_Unsigned) SubWordNumBits_8);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_10[2]), SubWordNumBits_8, &Var_44);
    NumBitsStr_10 = mercury__string__f_43_43_2_f_0((MR_String) "#bits = ", Var_44);
    if (((MR_tag((MR_Word) Id_9)) == (MR_Integer) 0))
    {
      MR_String ArgName_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), Id_9, (MR_Integer) 0))));
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Word Var_24;
      MR_Word Var_27;
      MR_Word Var_28;

      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (ArgName_12));
      }
      {
        Var_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_28, 0) = ((MR_Box) (NumBitsStr_10));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[12])));
      }
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[64])));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Pieces_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[67])));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_22));
      }
    }
    else
    {
      MR_Integer ArgNum_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Id_9, (MR_Integer) 0))));
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_39;
      MR_Word Var_40;

      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (ArgNum_11));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_40, 0) = ((MR_Box) (NumBitsStr_10));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[12])));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[69])));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *Pieces_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[68])));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_34));
      }
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__describe_sub_word_bin_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Pieces_6;
    MR_Integer conv0_STATE_VARIABLE_TotalNumBits_14;

    hlds__du_type_layout__describe_sub_word_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Pieces_6, ((MR_Integer) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TotalNumBits_14);
    *wrapper_arg_2 = ((MR_Box) (conv1_Pieces_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TotalNumBits_14));
  }
}

static void MR_CALL 
hlds__du_type_layout__describe_sub_word_bin_2_p_0(
  MR_Word SubWordBin_3,
  MR_Word * Pieces_4)
{
  {
    MR_bool succeeded;
    MR_Word RevSubWords_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubWordBin_3, (MR_Integer) 0))));
    MR_Word SubWords_7;
    MR_Word SubWordPieceLists_8;
    MR_Integer TotalNumBits_9;
    MR_Word SubWordPieces_10;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_String Var_29;
    MR_Box conv2_TotalNumBits_9;

    mercury__list__reverse_2_p_0((MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_0), RevSubWords_5, &SubWords_7);
    mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[10]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__du_type_layout_scalar_common_2[15]), SubWords_7, &SubWordPieceLists_8, ((MR_Box) ((MR_Integer) 0)), &conv2_TotalNumBits_9);
    TotalNumBits_9 = ((MR_Integer) (conv2_TotalNumBits_9));
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), SubWordPieceLists_8, &SubWordPieces_10);
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (TotalNumBits_9));
    }
    succeeded = (TotalNumBits_9 == (MR_Integer) 1);
    if (succeeded)
      Var_29 = (MR_String) "bit.";
    else
      Var_29 = (MR_String) "bits.";
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[12])));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[66])));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
    }
    Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), SubWordPieces_10, Var_22);
    *Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[58])), Var_21);
  }
}

static void MR_CALL 
hlds__du_type_layout__insert_subword_into_first_fit_bin_4_p_0(
  MR_Integer BinSize_5,
  MR_Word SubWord_6,
  MR_Word Bins0_7,
  MR_Word * Bins_8)
{
  {
    MR_bool succeeded;
    MR_Integer SubWordNumBits_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SubWord_6, (MR_Integer) 0))));

    if ((Bins0_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (SubWordNumBits_9 < BinSize_5);
      if (succeeded)
      {
        MR_Word Var_19;
        MR_Word Var_20;
        MR_Integer Var_22;

        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (SubWord_6));
          MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_22 = (MR_Integer) ((MR_Unsigned) BinSize_5 - (MR_Unsigned) SubWordNumBits_9);
        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (Var_20));
          MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (Var_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Bins_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.insert_subword_into_first_fit_bin\'/4", (MR_String) "SubWordNumBits >= BinSize");
          return;
        }
      }
    }
    else
    {
      MR_Word HeadBin0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Bins0_7, (MR_Integer) 0))));
      MR_Word TailBins0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Bins0_7, (MR_Integer) 1))));
      MR_Word RevSubWords0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadBin0_11, (MR_Integer) 0))));
      MR_Integer RemainingBitsInBin0_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadBin0_11, (MR_Integer) 1))));

      succeeded = (SubWordNumBits_9 <= RemainingBitsInBin0_14);
      if (succeeded)
      {
        MR_Word RevSubWords_15;
        MR_Integer RemainingBitsInBin_16;
        MR_Word HeadBin_17;

        {
          RevSubWords_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RevSubWords_15, 0) = ((MR_Box) (SubWord_6));
          MR_hl_field(MR_mktag(1), RevSubWords_15, 1) = ((MR_Box) (RevSubWords0_13));
        }
        RemainingBitsInBin_16 = (MR_Integer) ((MR_Unsigned) RemainingBitsInBin0_14 - (MR_Unsigned) SubWordNumBits_9);
        {
          HeadBin_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadBin_17, 0) = ((MR_Box) (RevSubWords_15));
          MR_hl_field(MR_mktag(0), HeadBin_17, 1) = ((MR_Box) (RemainingBitsInBin_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Bins_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadBin_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailBins0_12));
        }
      }
      else
      {
        MR_Word TailBins_18;

        hlds__du_type_layout__insert_subword_into_first_fit_bin_4_p_0(BinSize_5, SubWord_6, TailBins0_12, &TailBins_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Bins_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadBin0_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailBins_18));
        }
      }
    }
  }
}

static MR_Word MR_CALL 
hlds__du_type_layout__constructor_to_sym_name_and_arity_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Name_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Name_5));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Arity_7));
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__is_direct_arg_ctor_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__is_direct_arg_ctor__1965__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__is_direct_arg_ctor_7_p_0(
  MR_Word ComponentTypeMap_8,
  MR_Word TypeCtorModule_9,
  MR_Word TypeStatus_10,
  MR_Word TypeIsImported_11,
  MR_Word TypeDefinedHere_12,
  MR_Word AssertedDirectArgCtors_13,
  MR_Word Ctor_14)
{
  {
    MR_bool succeeded;
    MR_Word MaybeExistConstraints_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 1))));
    MR_Word ConsSymName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 2))));
    MR_Word ConsArgs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 3))));
    MR_Integer ConsArity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_14, (MR_Integer) 4))));
    MR_Word ConsArg_21;
    MR_Word ArgType_23;
    MR_Word ArgTypeCtor_25;
    MR_Word ArgTypeCtorArgTypes_26;
    MR_Word ConsConsId_27;
    MR_Word ArgCond_28;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_String Var_43;
    MR_String Var_44;
    MR_Integer Var_45;
    MR_Word OldImportStatus_56;
    MR_Word TypeCtorInfo_48_48;

    succeeded = (MaybeExistConstraints_16 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) ConsArgs_18)) == (MR_Integer) 1);
      if (succeeded)
      {
        ConsArg_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsArgs_18, (MR_Integer) 0))));
        Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsArgs_18, (MR_Integer) 1))));
        succeeded = (Var_41 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_45 = (MR_Integer) 1;
          Var_43 = (MR_String) "predicate \140hlds.du_type_layout.is_direct_arg_ctor\'/7";
          Var_44 = (MR_String) "ConsArity != 1";
          {
            Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_3[3]));
            MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (hlds__du_type_layout__is_direct_arg_ctor_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (ConsArity_19));
            MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Var_45));
          }
          mercury__require__expect_3_p_0(Var_42, Var_43, Var_44);
          ArgType_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsArg_21, (MR_Integer) 1))));
          succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ArgType_23, &ArgTypeCtor_25, &ArgTypeCtorArgTypes_26);
          if (succeeded)
          {
            {
              ConsConsId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ConsConsId_27, 0) = ((MR_Box) (ConsSymName_17));
              MR_hl_field(MR_mktag(0), ConsConsId_27, 1) = ((MR_Box) (ConsArity_19));
            }
            succeeded = (TypeIsImported_11 == (MR_Integer) 1);
            if (succeeded)
            {
              TypeCtorInfo_48_48 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0);
              succeeded = mercury__list__contains_2_p_0(TypeCtorInfo_48_48, AssertedDirectArgCtors_13, ((MR_Box) (ConsConsId_27)));
            }
            if (succeeded)
            {
              ArgCond_28 = (MR_Word) ((MR_Unsigned) 0U);
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(ArgTypeCtor_25);
              if (succeeded)
              {
                ArgCond_28 = (MR_Word) ((MR_Unsigned) 4U);
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word ArgComponentKind_29;
                MR_Word WordAlignedWhy_30;
                MR_Box conv0_ArgComponentKind_29;

                succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0), ComponentTypeMap_8, ((MR_Box) (ArgTypeCtor_25)), &conv0_ArgComponentKind_29);
                if (succeeded)
                {
                  ArgComponentKind_29 = ((MR_Word) (conv0_ArgComponentKind_29));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) ArgComponentKind_29)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    WordAlignedWhy_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgComponentKind_29, (MR_Integer) 0))));
                    if ((WordAlignedWhy_30 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      ArgCond_28 = (MR_Word) ((MR_Unsigned) 4U);
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      MR_Word ArgTypeDefn_31;
                      MR_Word ArgTypeDefnBody_32;
                      MR_Word ArgMaybeForeign_36;
                      MR_Word TypeCtorInfo_51_51;

                      succeeded = (ArgTypeCtorArgTypes_26 == (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ArgTypeDefn_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), WordAlignedWhy_30, (MR_Integer) 0))));
                        hlds__hlds_data__get_type_defn_body_2_p_0(ArgTypeDefn_31, &ArgTypeDefnBody_32);
                        succeeded = ((MR_tag((MR_Word) ArgTypeDefnBody_32)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          ArgMaybeForeign_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgTypeDefnBody_32, (MR_Integer) 3))));
                          succeeded = (ArgMaybeForeign_36 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                            succeeded = (TypeDefinedHere_12 == (MR_Integer) 1);
                            if (succeeded)
                            {
                              TypeCtorInfo_51_51 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0);
                              succeeded = mercury__list__contains_2_p_0(TypeCtorInfo_51_51, AssertedDirectArgCtors_13, ((MR_Box) (ConsConsId_27)));
                            }
                            if (succeeded)
                            {
                              ArgCond_28 = (MR_Word) ((MR_Unsigned) 0U);
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              MR_Word ArgTypeCtorSymName_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgTypeCtor_25, (MR_Integer) 0))));
                              MR_Word ArgTypeCtorModule_39;

                              succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(ArgTypeCtorSymName_37, &ArgTypeCtorModule_39);
                              if (succeeded)
                              {
                                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(TypeCtorModule_9, ArgTypeCtorModule_39);
                                if (succeeded)
                                {
                                  MR_Word ArgTypeStatus_40;

                                  hlds__hlds_data__get_type_defn_status_2_p_0(ArgTypeDefn_31, &ArgTypeStatus_40);
                                  {
                                    ArgCond_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), ArgCond_28, 0) = ((MR_Box) (ArgTypeStatus_40));
                                  }
                                }
                                else
                                  ArgCond_28 = (MR_Word) ((MR_Unsigned) 8U);
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
            if (succeeded)
            {
              OldImportStatus_56 = (MR_Word) (TypeStatus_10);
              switch (MR_tag((MR_Word) OldImportStatus_56)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(OldImportStatus_56)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                      succeeded = (ArgCond_28 == (MR_Word) ((MR_Unsigned) 0U));
                      break;
                    case (MR_Integer) 2:
                    case (MR_Integer) 6:
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "hlds.du_type_layout", (MR_String) "function \140hlds.du_type_layout.module_visibilities_allow_direct_arg\'/2", (MR_String) "inappropriate status for type");
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 3:
                    case (MR_Integer) 7:
                      switch (MR_tag((MR_Word) ArgCond_28)) {
                        default:
                          succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 0:
                          switch (MR_unmkbody(ArgCond_28)) {
                            default:
                              succeeded = MR_FALSE;
                              break;
                            case (MR_Integer) 0:
                            case (MR_Integer) 1:
                              succeeded = MR_TRUE;
                              break;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word ArgTypeStatus_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgCond_28, (MR_Integer) 0))));
                            MR_Word ArgOldTypeStatus_58 = (MR_Word) (ArgTypeStatus_57);

                            if ((OldImportStatus_56 == (MR_Word) ((MR_Unsigned) 12U)))
                              succeeded = (ArgOldTypeStatus_58 == (MR_Word) ((MR_Unsigned) 12U));
                            else
                              switch (MR_tag((MR_Word) ArgOldTypeStatus_58)) {
                                default:
                                  succeeded = MR_FALSE;
                                  break;
                                case (MR_Integer) 0:
                                  switch (MR_unmkbody(ArgOldTypeStatus_58)) {
                                    default:
                                      succeeded = MR_FALSE;
                                      break;
                                    case (MR_Integer) 3:
                                      succeeded = MR_TRUE;
                                      break;
                                    case (MR_Integer) 5:
                                      succeeded = MR_TRUE;
                                      break;
                                    case (MR_Integer) 7:
                                      succeeded = MR_TRUE;
                                      break;
                                  }
                                  break;
                              }
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 4:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 5:
                    case (MR_Integer) 8:
                      succeeded = MR_TRUE;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.du_type_layout", (MR_String) "function \140hlds.du_type_layout.module_visibilities_allow_direct_arg\'/2", (MR_String) "inappropriate status for type");
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word TypeImportLocn_59 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OldImportStatus_56, (MR_Integer) 0))));

                    switch (MR_tag((MR_Word) ArgCond_28)) {
                      default:
                        succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(ArgCond_28)) {
                          default:
                            succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 0:
                          case (MR_Integer) 1:
                            succeeded = MR_TRUE;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgImportLocn_60;
                          MR_Word Var_66;
                          MR_Word ArgTypeStatus_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgCond_28, (MR_Integer) 0))));

                          Var_66 = (MR_Word) (ArgTypeStatus_67);
                          succeeded = ((MR_tag((MR_Word) Var_66)) == (MR_Integer) 2);
                          if (succeeded)
                          {
                            ArgImportLocn_60 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_66, (MR_Integer) 0))));
                            succeeded = (ArgImportLocn_60 == (MR_Integer) 3);
                            if (succeeded)
                            {
                              succeeded = (TypeImportLocn_59 == (MR_Integer) 3);
                              succeeded = !(succeeded);
                            }
                            succeeded = !(succeeded);
                          }
                        }
                        break;
                    }
                  }
                  break;
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
hlds__du_type_layout__compare_sized_packable_functors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Result_8)
{
  {
    MR_Integer SizeA_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word CtorA_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer SizeB_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word CtorB_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word SizeResult_9;

    mercury__private_builtin__builtin_compare_int_3_p_0(&SizeResult_9, SizeA_4, SizeB_6);
    switch (SizeResult_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *Result_8 = SizeResult_9;
        break;
      case (MR_Integer) 0:
        {
          MR_Integer OrdinalA_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CtorA_5, (MR_Integer) 0))));
          MR_Integer OrdinalB_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CtorB_7, (MR_Integer) 0))));

          mercury__private_builtin__builtin_compare_int_3_p_0(Result_8, OrdinalA_10, OrdinalB_11);
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_type_ctor_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word Params_15,
  MR_Word ComponentTypeMap_16,
  MR_Word TypeCtor_17,
  MR_Word TypeStatus_18,
  MR_Word CtorTagMap_19,
  MR_Integer NumRemoteSecTagBits_20,
  MR_Word Ctor_21,
  MR_Word * CtorRepn_22,
  MR_Word STATE_VARIABLE_CtorRepnMap_0_67,
  MR_Word * STATE_VARIABLE_CtorRepnMap_68,
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70)
{
  hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_99_116_111_114_95_95_91_55_93_95_48_13_p_0(ModuleInfo_14, Params_15, ComponentTypeMap_16, TypeCtor_17, TypeStatus_18, CtorTagMap_19, Ctor_21, CtorRepn_22, STATE_VARIABLE_CtorRepnMap_0_67, STATE_VARIABLE_CtorRepnMap_68, STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
}

static MR_bool MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_99_116_111_114_95_95_91_55_93_95_48_13_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__decide_complex_du_type_ctor__1072__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_99_116_111_114_95_95_91_55_93_95_48_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__decide_complex_du_type_ctor__1082__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_99_116_111_114_95_95_91_55_93_95_48_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word Params_15,
  MR_Word ComponentTypeMap_16,
  MR_Word TypeCtor_17,
  MR_Word TypeStatus_18,
  MR_Word CtorTagMap_19,
  MR_Word Ctor_21,
  MR_Word * CtorRepn_22,
  MR_Word STATE_VARIABLE_CtorRepnMap_0_67,
  MR_Word * STATE_VARIABLE_CtorRepnMap_68,
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70)
{
  {
    MR_bool succeeded;
    MR_Integer Ordinal_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 0))));
    MR_Word MaybeExistConstraints_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 1))));
    MR_Word CtorSymName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 2))));
    MR_Word CtorArgs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 3))));
    MR_Integer CtorArity_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 4))));
    MR_Word CtorContext_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 5))));
    MR_Word ConsId_31;
    MR_Word CtorTag_32;
    MR_Word CtorArgRepns_37;
    MR_Box conv0_CtorTag_32;

    {
      ConsId_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ConsId_31, 1) = ((MR_Box) (CtorSymName_27));
      MR_hl_field(MR_mktag(3), ConsId_31, 2) = ((MR_Box) (CtorArity_29));
      MR_hl_field(MR_mktag(3), ConsId_31, 3) = ((MR_Box) (TypeCtor_17));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), CtorTagMap_19, ((MR_Box) (ConsId_31)), &conv0_CtorTag_32);
    CtorTag_32 = ((MR_Word) (conv0_CtorTag_32));
    switch (MR_tag((MR_Word) CtorTag_32)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CtorTag_32)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_99_116_111_114_95_114_101_109_111_116_101_95_97_114_103_115_95_95_91_53_93_95_48_13_p_0(ModuleInfo_14, Params_15, ComponentTypeMap_16, TypeStatus_18, CtorTag_32, MaybeExistConstraints_26, CtorSymName_27, CtorContext_30, CtorArgs_28, &CtorArgRepns_37, STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_73;

              {
                Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_99_116_111_114_95_95_91_55_93_95_48_13_p_0_1));
                MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (CtorArgs_28));
                MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_73, (MR_String) "predicate \140hlds.du_type_layout.decide_complex_du_type_ctor\'/13", (MR_String) "enum or dummy type has args");
              CtorArgRepns_37 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Specs_70 = STATE_VARIABLE_Specs_0_69;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.decide_complex_du_type_ctor\'/13", (MR_String) "unexpected tag");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorTag_32, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 13:
            {
              MR_Word Var_73;

              {
                Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_3[2]));
                MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_99_116_111_114_95_95_91_55_93_95_48_13_p_0_1));
                MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (CtorArgs_28));
                MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_73, (MR_String) "predicate \140hlds.du_type_layout.decide_complex_du_type_ctor\'/13", (MR_String) "enum or dummy type has args");
              CtorArgRepns_37 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_Specs_70 = STATE_VARIABLE_Specs_0_69;
            }
            break;
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
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.decide_complex_du_type_ctor\'/13", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 15:
            hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_99_116_111_114_95_114_101_109_111_116_101_95_97_114_103_115_95_95_91_53_93_95_48_13_p_0(ModuleInfo_14, Params_15, ComponentTypeMap_16, TypeStatus_18, CtorTag_32, MaybeExistConstraints_26, CtorSymName_27, CtorContext_30, CtorArgs_28, &CtorArgRepns_37, STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
            break;
          case (MR_Integer) 14:
            {
              MR_Word LocalSectag_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CtorTag_32, (MR_Integer) 2))));
              MR_Word Var_77;

              {
                Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_99_116_111_114_95_95_91_55_93_95_48_13_p_0_2));
                MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (MaybeExistConstraints_26));
                MR_hl_field(MR_mktag(0), Var_77, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_77, (MR_String) "predicate \140hlds.du_type_layout.decide_complex_du_type_ctor\'/13", (MR_String) "shared_local_tag_with_args but exist_constraints");
              hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_99_116_111_114_95_108_111_99_97_108_95_97_114_103_115_95_95_91_49_93_95_48_8_p_0(Params_15, ComponentTypeMap_16, LocalSectag_39, CtorArgs_28, &CtorArgRepns_37, STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *CtorRepn_22 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ordinal_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeExistConstraints_26));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (CtorSymName_27));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (CtorTag_32));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (CtorArgRepns_37));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (CtorArity_29));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (CtorContext_30));
    }
    hlds__hlds_data__insert_ctor_repn_into_map_3_p_0(*CtorRepn_22, STATE_VARIABLE_CtorRepnMap_0_67, STATE_VARIABLE_CtorRepnMap_68);
  }
}

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_99_116_111_114_95_108_111_99_97_108_95_97_114_103_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word Params_10,
  MR_Word ComponentTypeMap_11,
  MR_Word LocalSectag_12,
  MR_Word CtorArgs_13,
  MR_Word * CtorArgRepns_14,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_Word MaybePrimaryTags_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 1))));
    MR_Integer NumPtagBits_18;
    MR_Word SectagBits_21;
    uint8_t NumSectagBits_22;
    MR_Integer NumPrimSecTagBits_24;
    MR_Integer Var_30;
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 0)));
    MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 3)));
    MR_Integer Var_25;

    if ((MaybePrimaryTags_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.decide_complex_du_ctor_local_args\'/8", (MR_String) "MaybePrimaryTags = no_primary_tags");
        return;
      }
    }
    else
      NumPtagBits_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrimaryTags_16, (MR_Integer) 1))));
    SectagBits_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalSectag_12, (MR_Integer) 2))));
    NumSectagBits_22 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), SectagBits_21, (MR_Integer) 0)));
    Var_30 = mercury__uint8__cast_to_int_1_f_0(NumSectagBits_22);
    NumPrimSecTagBits_24 = (MR_Integer) ((MR_Unsigned) NumPtagBits_18 + (MR_Unsigned) Var_30);
    hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_99_116_111_114_95_108_111_99_97_108_95_97_114_103_115_95_108_111_111_112_95_95_91_49_93_95_48_7_p_0(Params_10, ComponentTypeMap_11, NumPrimSecTagBits_24, &Var_25, CtorArgs_13, CtorArgRepns_14);
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
  }
}

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_99_116_111_114_95_108_111_99_97_108_95_97_114_103_115_95_108_111_111_112_95_95_91_49_93_95_48_7_p_0(
  MR_Word Params_2,
  MR_Word ComponentTypeMap_3,
  MR_Integer NumPrimSecTagBits_4,
  MR_Integer * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = NumPrimSecTagBits_4;
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Arg_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Args_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word ArgRepn_19;
      MR_Word ArgRepns_20;
      MR_Integer CurShift_21;
      MR_Word ArgName_22;
      MR_Word ArgType_23;
      MR_Word ArgContext_24;
      MR_Word Packable_26;
      MR_Word ArgPosWidth_32;
      MR_Word PackablePrime_25;

      hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_99_116_111_114_95_108_111_99_97_108_95_97_114_103_115_95_108_111_111_112_95_95_91_49_93_95_48_7_p_0(Params_2, ComponentTypeMap_3, NumPrimSecTagBits_4, &CurShift_21, Args_18, &ArgRepns_20);
      ArgName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_17, (MR_Integer) 0))));
      ArgType_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_17, (MR_Integer) 1))));
      ArgContext_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_17, (MR_Integer) 2))));
      succeeded = hlds__du_type_layout__may_pack_arg_type_4_p_0(Params_2, ComponentTypeMap_3, ArgType_23, &PackablePrime_25);
      if (succeeded)
        Packable_26 = PackablePrime_25;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.decide_complex_du_ctor_local_args_loop\'/7", (MR_String) "not packable");
          return;
        }
      }
      if ((Packable_26 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        ArgPosWidth_32 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_2[14]));
        *HeadVar__5_5 = CurShift_21;
      }
      else
      {
        MR_Integer NumArgBits_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Packable_26, (MR_Integer) 0))));
        MR_Word FillKind_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Packable_26, (MR_Integer) 1))));
        MR_Integer ArgMask_31;
        MR_Integer Var_37;
        MR_Word Var_40;
        MR_Word Var_41;
        MR_Word Var_42;

        Var_37 = mercury__int__pow_2_f_0((MR_Integer) 2, NumArgBits_29);
        ArgMask_31 = (MR_Integer) ((MR_Unsigned) Var_37 - (MR_Unsigned) (MR_Integer) 1);
        Var_40 = (MR_Word) (CurShift_21);
        Var_41 = (MR_Word) (NumArgBits_29);
        Var_42 = (MR_Word) (ArgMask_31);
        {
          ArgPosWidth_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ArgPosWidth_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ArgPosWidth_32, 1) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
          MR_hl_field(MR_mktag(3), ArgPosWidth_32, 2) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
          MR_hl_field(MR_mktag(3), ArgPosWidth_32, 3) = ((MR_Box) (Var_40));
          MR_hl_field(MR_mktag(3), ArgPosWidth_32, 4) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(3), ArgPosWidth_32, 5) = ((MR_Box) (Var_42));
          MR_hl_field(MR_mktag(3), ArgPosWidth_32, 6) = ((MR_Box) (FillKind_30));
        }
        *HeadVar__5_5 = (MR_Integer) ((MR_Unsigned) CurShift_21 + (MR_Unsigned) NumArgBits_29);
      }
      {
        ArgRepn_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ArgRepn_19, 0) = ((MR_Box) (ArgName_22));
        MR_hl_field(MR_mktag(0), ArgRepn_19, 1) = ((MR_Box) (ArgType_23));
        MR_hl_field(MR_mktag(0), ArgRepn_19, 2) = ((MR_Box) (ArgPosWidth_32));
        MR_hl_field(MR_mktag(0), ArgRepn_19, 3) = ((MR_Box) (ArgContext_24));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgRepn_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgRepns_20));
      }
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_if_complex_du_type_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Params_11,
  MR_Word ComponentTypeMap_12,
  MR_Word TypeCtorTypeDefn0_13,
  MR_Word * TypeCtorTypeDefn_14,
  MR_Word STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_32,
  MR_Word * STATE_VARIABLE_MustBeSingleFunctorTagTypes_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35)
{
  {
    MR_Word TypeCtor_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorTypeDefn0_13, (MR_Integer) 0))));
    MR_Word TypeDefn0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorTypeDefn0_13, (MR_Integer) 1))));
    MR_Word Body0_19;

    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn0_18, &Body0_19);
    switch (MR_tag((MR_Word) Body0_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *TypeCtorTypeDefn_14 = TypeCtorTypeDefn0_13;
          *STATE_VARIABLE_MustBeSingleFunctorTagTypes_33 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_32;
          *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_0_34;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ctors_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_19, (MR_Integer) 0))));
          MR_Word MaybeRepn0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_19, (MR_Integer) 2))));

          if ((MaybeRepn0_22 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Repn_25;
            MR_Word Body_26;
            MR_Word TypeDefn_27;
            MR_Word Var_38;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_42;

            hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_95_91_55_93_95_48_12_p_0(ModuleInfo_10, Params_11, ComponentTypeMap_12, TypeCtor_17, TypeDefn0_18, Ctors_20, &Repn_25, STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_32, STATE_VARIABLE_MustBeSingleFunctorTagTypes_33, STATE_VARIABLE_Specs_0_34, STATE_VARIABLE_Specs_35);
            {
              Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Repn_25));
            }
            Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_19, (MR_Integer) 0))));
            Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_19, (MR_Integer) 1))));
            Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_19, (MR_Integer) 3))));
            {
              Body_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Body_26, 0) = ((MR_Box) (Var_39));
              MR_hl_field(MR_mktag(1), Body_26, 1) = ((MR_Box) (Var_40));
              MR_hl_field(MR_mktag(1), Body_26, 2) = ((MR_Box) (Var_38));
              MR_hl_field(MR_mktag(1), Body_26, 3) = ((MR_Box) (Var_42));
            }
            hlds__hlds_data__set_type_defn_body_3_p_0(Body_26, TypeDefn0_18, &TypeDefn_27);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *TypeCtorTypeDefn_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeCtor_17));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeDefn_27));
            }
          }
          else
          {
            *TypeCtorTypeDefn_14 = TypeCtorTypeDefn0_13;
            *STATE_VARIABLE_MustBeSingleFunctorTagTypes_33 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_32;
            *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_0_34;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *TypeCtorTypeDefn_14 = TypeCtorTypeDefn0_13;
          *STATE_VARIABLE_MustBeSingleFunctorTagTypes_33 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_32;
          *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_0_34;
        }
        break;
      case (MR_Integer) 3:
        {
          *TypeCtorTypeDefn_14 = TypeCtorTypeDefn0_13;
          *STATE_VARIABLE_MustBeSingleFunctorTagTypes_33 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_32;
          *STATE_VARIABLE_Specs_35 = STATE_VARIABLE_Specs_0_34;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_95_91_55_93_95_48_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word Params_14,
  MR_Word ComponentTypeMap_15,
  MR_Word TypeCtor_16,
  MR_Word TypeDefn0_17,
  MR_Word Ctors_18,
  MR_Word * Repn_20,
  MR_Word STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_26,
  MR_Word * STATE_VARIABLE_MustBeSingleFunctorTagTypes_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_MustBeSingleFunctorTagTypes_30_30;

    succeeded = mercury__set_tree234__remove_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_16)), STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_26, &STATE_VARIABLE_MustBeSingleFunctorTagTypes_30_30);
    if (succeeded)
    {
      MR_Word SingleCtor_24;
      MR_Word TypeStatus_25;
      MR_Integer Ordinal_54;
      MR_Word MaybeExistConstraints_55;
      MR_Word SingleCtorSymName_56;
      MR_Word SingleCtorArgs_57;
      MR_Integer SingleCtorArity_58;
      MR_Word SingleCtorContext_59;
      MR_Word SingleCtorArgRepns_62;
      MR_Word SingleCtorRepn_63;
      MR_Word CtorRepnMap_64;
      MR_String Var_68;
      MR_Word Var_69;
      MR_Word Var_71;
      MR_Word SingleCtorPrime_23;
      MR_Word Var_31;

      *STATE_VARIABLE_MustBeSingleFunctorTagTypes_27 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_30_30;
      succeeded = ((MR_tag((MR_Word) Ctors_18)) == (MR_Integer) 1);
      if (succeeded)
      {
        SingleCtorPrime_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ctors_18, (MR_Integer) 0))));
        Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ctors_18, (MR_Integer) 1))));
        succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
        SingleCtor_24 = SingleCtorPrime_23;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.decide_complex_du_type\'/12", (MR_String) "unexpected type in MustBeSingleFunctorTagTypes");
          return;
        }
      }
      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn0_17, &TypeStatus_25);
      Ordinal_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SingleCtor_24, (MR_Integer) 0))));
      MaybeExistConstraints_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleCtor_24, (MR_Integer) 1))));
      SingleCtorSymName_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleCtor_24, (MR_Integer) 2))));
      SingleCtorArgs_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleCtor_24, (MR_Integer) 3))));
      SingleCtorArity_58 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SingleCtor_24, (MR_Integer) 4))));
      SingleCtorContext_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleCtor_24, (MR_Integer) 5))));
      hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_99_116_111_114_95_114_101_109_111_116_101_95_97_114_103_115_95_95_91_53_93_95_48_13_p_0(ModuleInfo_13, Params_14, ComponentTypeMap_15, TypeStatus_25, (MR_Word) ((MR_Unsigned) 0U), MaybeExistConstraints_55, SingleCtorSymName_56, SingleCtorContext_59, SingleCtorArgs_57, &SingleCtorArgRepns_62, STATE_VARIABLE_Specs_0_28, STATE_VARIABLE_Specs_29);
      {
        SingleCtorRepn_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SingleCtorRepn_63, 0) = ((MR_Box) (Ordinal_54));
        MR_hl_field(MR_mktag(0), SingleCtorRepn_63, 1) = ((MR_Box) (MaybeExistConstraints_55));
        MR_hl_field(MR_mktag(0), SingleCtorRepn_63, 2) = ((MR_Box) (SingleCtorSymName_56));
        MR_hl_field(MR_mktag(0), SingleCtorRepn_63, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), SingleCtorRepn_63, 4) = ((MR_Box) (SingleCtorArgRepns_62));
        MR_hl_field(MR_mktag(0), SingleCtorRepn_63, 5) = ((MR_Box) (SingleCtorArity_58));
        MR_hl_field(MR_mktag(0), SingleCtorRepn_63, 6) = ((MR_Box) (SingleCtorContext_59));
      }
      Var_68 = mdbcomp__sym_name__unqualify_name_1_f_0(SingleCtorSymName_56);
      {
        Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (SingleCtorRepn_63));
        MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      CtorRepnMap_64 = mercury__map__singleton_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[7]), ((MR_Box) (Var_68)), ((MR_Box) (Var_69)));
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (SingleCtorRepn_63));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        *Repn_20 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CtorRepnMap_64));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word SingleCtor_40;
      MR_Word Var_35;

      succeeded = ((MR_tag((MR_Word) Ctors_18)) == (MR_Integer) 1);
      if (succeeded)
      {
        SingleCtor_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ctors_18, (MR_Integer) 0))));
        Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ctors_18, (MR_Integer) 1))));
        succeeded = (Var_35 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word TypeStatus_39;

        hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn0_17, &TypeStatus_39);
        hlds__du_type_layout__decide_complex_du_type_single_ctor_8_p_0(ModuleInfo_13, Params_14, ComponentTypeMap_15, TypeStatus_39, SingleCtor_40, Repn_20, STATE_VARIABLE_Specs_0_28, STATE_VARIABLE_Specs_29);
      }
      else
        hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0(ModuleInfo_13, Params_14, ComponentTypeMap_15, TypeCtor_16, TypeDefn0_17, Ctors_18, Repn_20, STATE_VARIABLE_Specs_0_28, STATE_VARIABLE_Specs_29);
      *STATE_VARIABLE_MustBeSingleFunctorTagTypes_27 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_26;
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0_3(
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
    MR_Word conv4_CtorRepn_22;
    MR_Word conv3_STATE_VARIABLE_CtorRepnMap_68;
    MR_Word conv2_STATE_VARIABLE_Specs_70;

    hlds__du_type_layout__decide_complex_du_type_ctor_13_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), &conv4_CtorRepn_22, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_CtorRepnMap_68, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_Specs_70);
    *wrapper_arg_2 = ((MR_Box) (conv4_CtorRepn_22));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_CtorRepnMap_68));
    *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_70));
  }
}

static MR_Box MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__du_type_layout__constructor_to_sym_name_and_arity_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__is_direct_arg_ctor_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Params_12,
  MR_Word ComponentTypeMap_13,
  MR_Word TypeCtor_14,
  MR_Word TypeDefn0_15,
  MR_Word Ctors_16,
  MR_Word * Repn_18,
  MR_Word STATE_VARIABLE_Specs_0_60,
  MR_Word * STATE_VARIABLE_Specs_61)
{
  {
    MR_bool succeeded;
    MR_Word TypeStatus_20;
    MR_Word Target_21;
    MR_Word UsesConstructors_22;
    MR_Word AddedBy_23;
    MR_Word MaybePrimaryTags_24;
    MR_Unsigned NumRemoteSecTags_25;
    MR_Word CtorTagMap_26;
    MR_Word DirectArgFunctorNames_27;
    MR_Integer NumRemoteSecTagBits_52;
    MR_Word CtorRepns_54;
    MR_Word CtorRepnMap_55;
    MR_Word CheaperTagTest_56;
    MR_Word MaybeDirectArgFunctorNames_57;
    MR_Word STATE_VARIABLE_Specs_63_63;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Unsigned packed_args_0;
    MR_Unsigned packed_args_1;
    MR_Unsigned packed_args_2;
    MR_Unsigned packed_args_3;
    MR_Box conv6_CtorRepnMap_55;
    MR_Box conv5_STATE_VARIABLE_Specs_61;

    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn0_15, &TypeStatus_20);
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 0)));
    Target_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 0))) & (MR_Integer) 3);
    packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 3)));
    UsesConstructors_22 = hlds__du_type_layout__target_uses_constructors_1_f_0(Target_21);
    switch (UsesConstructors_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        AddedBy_23 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        AddedBy_23 = (MR_Integer) 1;
        break;
    }
    packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 0)));
    MaybePrimaryTags_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 1))));
    packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 3)));
    if ((MaybePrimaryTags_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_77;

      Var_77 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0));
      hlds__du_type_layout__assign_tags_to_non_direct_arg_functors_8_p_0(TypeCtor_14, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), UINT8_C(0), AddedBy_23, Ctors_16, &NumRemoteSecTags_25, Var_77, &CtorTagMap_26);
      DirectArgFunctorNames_27 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_63_63 = STATE_VARIABLE_Specs_0_60;
    }
    else
    {
      MR_Word MaxPtag_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrimaryTags_24, (MR_Integer) 0))));
      MR_Integer NumPtagBits_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrimaryTags_24, (MR_Integer) 1))));
      MR_Word Constants_30;
      MR_Word Functors_31;
      MR_Word MaybeDirectArgs_32;
      MR_Word DirectArgFunctors_41;
      MR_Word NonDirectArgFunctors_42;
      MR_Word LocalPackedFunctors_43;
      MR_Word NonLocalPackedFunctors_44;
      MR_Word LocalSectagBits_45;
      MR_Word MustMask_46;
      MR_Word LeftOverDirectArgFunctors_51;
      MR_Word STATE_VARIABLE_CtorTagMap_66_66;
      MR_Word STATE_VARIABLE_CtorTagMap_68_68;
      uint8_t STATE_VARIABLE_CurPtagUint8_69_69;
      uint8_t STATE_VARIABLE_CurPtagUint8_71_71;
      MR_Word STATE_VARIABLE_CtorTagMap_72_72;
      MR_Word Var_73;
      MR_Unsigned packed_args_4;
      MR_Unsigned packed_args_5;

      hlds__du_type_layout__separate_out_constants_3_p_0(Ctors_16, &Constants_30, &Functors_31);
      packed_args_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 0)));
      packed_args_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 3)));
      MaybeDirectArgs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 5))));
      switch (MaybeDirectArgs_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            DirectArgFunctors_41 = (MR_Word) ((MR_Unsigned) 0U);
            DirectArgFunctorNames_27 = (MR_Word) ((MR_Unsigned) 0U);
            NonDirectArgFunctors_42 = Functors_31;
            STATE_VARIABLE_Specs_63_63 = STATE_VARIABLE_Specs_0_60;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorSymName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_14, (MR_Integer) 0))));
            MR_Word TypeCtorModuleName_35;
            MR_Word DirectArgMap_36;
            MR_Word AssertedDirectArgFunctors_38;
            MR_Word TypeIsImported_39;
            MR_Word TypeDefinedHere_40;
            MR_Word Var_62;
            MR_Unsigned packed_args_6;
            MR_Unsigned packed_args_7;
            MR_Word DirectArgMapEntry_37;
            MR_Box conv0_DirectArgMapEntry_37;

            mdbcomp__sym_name__det_sym_name_get_module_name_2_p_0(TypeCtorSymName_33, &TypeCtorModuleName_35);
            packed_args_6 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 0)));
            packed_args_7 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 3)));
            DirectArgMap_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 6))));
            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[6]), DirectArgMap_36, ((MR_Box) (TypeCtor_14)), &conv0_DirectArgMapEntry_37);
            if (succeeded)
            {
              DirectArgMapEntry_37 = ((MR_Word) (conv0_DirectArgMapEntry_37));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              AssertedDirectArgFunctors_38 = DirectArgMapEntry_37;
            else
              AssertedDirectArgFunctors_38 = (MR_Word) ((MR_Unsigned) 0U);
            TypeIsImported_39 = hlds__status__type_status_is_imported_1_f_0(TypeStatus_20);
            TypeDefinedHere_40 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_20);
            {
              Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_13[0]));
              MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0_1));
              MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (ComponentTypeMap_13));
              MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) (TypeCtorModuleName_35));
              MR_hl_field(MR_mktag(0), Var_62, 5) = ((MR_Box) (TypeStatus_20));
              MR_hl_field(MR_mktag(0), Var_62, 6) = ((MR_Box) (TypeIsImported_39));
              MR_hl_field(MR_mktag(0), Var_62, 7) = ((MR_Box) (TypeDefinedHere_40));
              MR_hl_field(MR_mktag(0), Var_62, 8) = ((MR_Box) (AssertedDirectArgFunctors_38));
            }
            mercury__list__filter_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Var_62, Functors_31, &DirectArgFunctors_41, &NonDirectArgFunctors_42);
            hlds__du_type_layout__check_direct_arg_assertions_4_p_0(AssertedDirectArgFunctors_38, NonDirectArgFunctors_42, STATE_VARIABLE_Specs_0_60, &STATE_VARIABLE_Specs_63_63);
            DirectArgFunctorNames_27 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&hlds__du_type_layout_scalar_common_2[13]), DirectArgFunctors_41);
          }
          break;
      }
      hlds__du_type_layout__compute_local_packable_functors_9_p_0(Params_12, ComponentTypeMap_13, NumPtagBits_29, Constants_30, NonDirectArgFunctors_42, &LocalPackedFunctors_43, &NonLocalPackedFunctors_44, &LocalSectagBits_45, &MustMask_46);
      mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), &STATE_VARIABLE_CtorTagMap_66_66);
      succeeded = (Constants_30 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (LocalPackedFunctors_43 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        STATE_VARIABLE_CurPtagUint8_69_69 = UINT8_C(0);
        STATE_VARIABLE_CtorTagMap_68_68 = STATE_VARIABLE_CtorTagMap_66_66;
      }
      else
      {
        MR_Word LocalsPtag_48 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
        MR_Unsigned CurLocalSecTag1_50;
        MR_Word STATE_VARIABLE_CtorTagMap_67_67;

        hlds__du_type_layout__assign_tags_to_constants_10_p_0(TypeCtor_14, LocalsPtag_48, NumPtagBits_29, LocalSectagBits_45, MustMask_46, (MR_Unsigned) 0U, &CurLocalSecTag1_50, Constants_30, STATE_VARIABLE_CtorTagMap_66_66, &STATE_VARIABLE_CtorTagMap_67_67);
        hlds__du_type_layout__assign_tags_to_local_packed_functors_8_p_0(TypeCtor_14, LocalsPtag_48, NumPtagBits_29, LocalSectagBits_45, CurLocalSecTag1_50, LocalPackedFunctors_43, STATE_VARIABLE_CtorTagMap_67_67, &STATE_VARIABLE_CtorTagMap_68_68);
        STATE_VARIABLE_CurPtagUint8_69_69 = (UINT8_C(0) + UINT8_C(1));
      }
      hlds__du_type_layout__assign_tags_to_direct_arg_functors_9_p_0(TypeCtor_14, MaxPtag_28, STATE_VARIABLE_CurPtagUint8_69_69, &STATE_VARIABLE_CurPtagUint8_71_71, DirectArgFunctors_41, NonDirectArgFunctors_42, &LeftOverDirectArgFunctors_51, STATE_VARIABLE_CtorTagMap_68_68, &STATE_VARIABLE_CtorTagMap_72_72);
      Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), LeftOverDirectArgFunctors_51, NonLocalPackedFunctors_44);
      hlds__du_type_layout__assign_tags_to_non_direct_arg_functors_8_p_0(TypeCtor_14, MaxPtag_28, STATE_VARIABLE_CurPtagUint8_71_71, AddedBy_23, Var_73, &NumRemoteSecTags_25, STATE_VARIABLE_CtorTagMap_72_72, &CtorTagMap_26);
    }
    succeeded = (NumRemoteSecTags_25 == (MR_Unsigned) 0U);
    if (succeeded)
      NumRemoteSecTagBits_52 = (MR_Integer) 0;
    else
    {
      MR_Integer NumRemoteSecTagsInt_53;

      NumRemoteSecTagsInt_53 = mercury__uint__cast_to_int_1_f_0(NumRemoteSecTags_25);
      mercury__int__log2_2_p_0(NumRemoteSecTagsInt_53, &NumRemoteSecTagBits_52);
    }
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_116_121_112_101_95_103_101_110_101_114_97_108_95_95_91_55_93_95_48_10_p_0_3));
      MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (ModuleInfo_11));
      MR_hl_field(MR_mktag(0), Var_79, 4) = ((MR_Box) (Params_12));
      MR_hl_field(MR_mktag(0), Var_79, 5) = ((MR_Box) (ComponentTypeMap_13));
      MR_hl_field(MR_mktag(0), Var_79, 6) = ((MR_Box) (TypeCtor_14));
      MR_hl_field(MR_mktag(0), Var_79, 7) = ((MR_Box) (TypeStatus_20));
      MR_hl_field(MR_mktag(0), Var_79, 8) = ((MR_Box) (CtorTagMap_26));
      MR_hl_field(MR_mktag(0), Var_79, 9) = ((MR_Box) (NumRemoteSecTagBits_52));
    }
    Var_80 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[7]));
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&hlds__du_type_layout_scalar_common_2[4]), (MR_Word) (&hlds__du_type_layout_scalar_common_1[1]), Var_79, Ctors_16, &CtorRepns_54, ((MR_Box) (Var_80)), &conv6_CtorRepnMap_55, ((MR_Box) (STATE_VARIABLE_Specs_63_63)), &conv5_STATE_VARIABLE_Specs_61);
    CtorRepnMap_55 = ((MR_Word) (conv6_CtorRepnMap_55));
    *STATE_VARIABLE_Specs_61 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_61));
    hlds__du_type_layout__compute_cheaper_tag_test_3_p_0(TypeCtor_14, CtorRepns_54, &CheaperTagTest_56);
    if ((DirectArgFunctorNames_27 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeDirectArgFunctorNames_57 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        MaybeDirectArgFunctorNames_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeDirectArgFunctorNames_57, 0) = ((MR_Box) (DirectArgFunctorNames_27));
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *Repn_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CtorRepns_54));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CtorRepnMap_55));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (CheaperTagTest_56));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MaybeDirectArgFunctorNames_57));
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__separate_out_constants_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Ctor_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ctors_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ConstantsTail_8;
      MR_Word FunctorsTail_9;
      MR_Word Args_10;
      MR_Word Var_11;

      hlds__du_type_layout__separate_out_constants_3_p_0(Ctors_5, &ConstantsTail_8, &FunctorsTail_9);
      Args_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 3))));
      succeeded = (Args_10 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 1))));
        succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Ctor_4));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ConstantsTail_8));
        }
        *HeadVar__3_3 = FunctorsTail_9;
      }
      else
      {
        *HeadVar__2_2 = ConstantsTail_8;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Ctor_4));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FunctorsTail_9));
        }
      }
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__compute_cheaper_tag_test_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word CtorRepns_5,
  MR_Word * CheaperTagTest_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) CtorRepns_5)) == (MR_Integer) 1);
    MR_Word CtorRepnA_7;
    MR_Word CtorRepnB_8;
    MR_Word Var_25;
    MR_Word Var_26;

    if (succeeded)
    {
      CtorRepnA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorRepns_5, (MR_Integer) 0))));
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorRepns_5, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 1);
      if (succeeded)
      {
        CtorRepnB_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0))));
        Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));
        succeeded = (Var_26 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Word CtorSymNameA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepnA_7, (MR_Integer) 2))));
      MR_Word CtorTagA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepnA_7, (MR_Integer) 3))));
      MR_Integer CtorArityA_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CtorRepnA_7, (MR_Integer) 5))));
      MR_Word CtorSymNameB_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepnB_8, (MR_Integer) 2))));
      MR_Word CtorTagB_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepnB_8, (MR_Integer) 3))));
      MR_Integer CtorArityB_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CtorRepnB_8, (MR_Integer) 5))));
      MR_Integer Var_27;

      succeeded = (CtorArityB_21 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_27 = (MR_Integer) 0;
        succeeded = (CtorArityA_14 > Var_27);
      }
      if (succeeded)
      {
        MR_Word ConsIdA_23;
        MR_Word ConsIdB_24;

        {
          ConsIdA_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsIdA_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ConsIdA_23, 1) = ((MR_Box) (CtorSymNameA_11));
          MR_hl_field(MR_mktag(3), ConsIdA_23, 2) = ((MR_Box) (CtorArityA_14));
          MR_hl_field(MR_mktag(3), ConsIdA_23, 3) = ((MR_Box) (TypeCtor_4));
        }
        {
          ConsIdB_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsIdB_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ConsIdB_24, 1) = ((MR_Box) (CtorSymNameB_18));
          MR_hl_field(MR_mktag(3), ConsIdB_24, 2) = ((MR_Box) (CtorArityB_21));
          MR_hl_field(MR_mktag(3), ConsIdB_24, 3) = ((MR_Box) (TypeCtor_4));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *CheaperTagTest_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsIdA_23));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CtorTagA_12));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ConsIdB_24));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (CtorTagB_19));
        }
      }
      else
      {
        MR_Integer Var_28;

        succeeded = (CtorArityA_14 == (MR_Integer) 0);
        if (succeeded)
        {
          Var_28 = (MR_Integer) 0;
          succeeded = (CtorArityB_21 > Var_28);
        }
        if (succeeded)
        {
          MR_Word ConsIdA_29;
          MR_Word ConsIdB_30;

          {
            ConsIdA_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConsIdA_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ConsIdA_29, 1) = ((MR_Box) (CtorSymNameA_11));
            MR_hl_field(MR_mktag(3), ConsIdA_29, 2) = ((MR_Box) (CtorArityA_14));
            MR_hl_field(MR_mktag(3), ConsIdA_29, 3) = ((MR_Box) (TypeCtor_4));
          }
          {
            ConsIdB_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConsIdB_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ConsIdB_30, 1) = ((MR_Box) (CtorSymNameB_18));
            MR_hl_field(MR_mktag(3), ConsIdB_30, 2) = ((MR_Box) (CtorArityB_21));
            MR_hl_field(MR_mktag(3), ConsIdB_30, 3) = ((MR_Box) (TypeCtor_4));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *CheaperTagTest_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsIdB_30));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CtorTagB_19));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ConsIdA_29));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (CtorTagA_12));
          }
        }
        else
          *CheaperTagTest_6 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    else
      *CheaperTagTest_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static void MR_CALL 
hlds__du_type_layout__check_direct_arg_assertions_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Specs_0_3,
  MR_Word * STATE_VARIABLE_Specs_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_4 = STATE_VARIABLE_Specs_0_3;
    else
    {
      MR_Word Ctor_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Ctors_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 2))));
      MR_Integer Arity_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 4))));
      MR_Word Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 5))));
      MR_Word SymNameArity_19;
      MR_Word STATE_VARIABLE_Specs_46_46;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_3;

      {
        SymNameArity_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SymNameArity_19, 0) = ((MR_Box) (SymName_15));
        MR_hl_field(MR_mktag(0), SymNameArity_19, 1) = ((MR_Box) (Arity_17));
      }
      succeeded = mercury__list__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), HeadVar__1_1, ((MR_Box) (SymNameArity_19)));
      if (succeeded)
      {
        MR_Word Pieces_20;
        MR_Word Msg_21;
        MR_Word Spec_22;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_44;

        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
          MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (SymNameArity_19));
        }
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[41])));
        }
        {
          Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[59])));
          MR_hl_field(MR_mktag(1), Pieces_20, 1) = ((MR_Box) (Var_27));
        }
        {
          Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Pieces_20));
        }
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_21, 0) = ((MR_Box) (Context_18));
          MR_hl_field(MR_mktag(0), Msg_21, 1) = ((MR_Box) (Var_39));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Msg_21));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (Var_44));
        }
        {
          STATE_VARIABLE_Specs_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_46_46, 0) = ((MR_Box) (Spec_22));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_46_46, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_3));
        }
      }
      else
        STATE_VARIABLE_Specs_46_46 = STATE_VARIABLE_Specs_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Ctors_11;
      next_value_of_STATE_VARIABLE_Specs_0_3 = STATE_VARIABLE_Specs_46_46;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Specs_0_3 = next_value_of_STATE_VARIABLE_Specs_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__compute_local_packable_functors_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Result_8;

    hlds__du_type_layout__compare_sized_packable_functors_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_Result_8));
  }
}

static void MR_CALL 
hlds__du_type_layout__compute_local_packable_functors_9_p_0(
  MR_Word Params_10,
  MR_Word ComponentTypeMap_11,
  MR_Integer NumPtagBits_12,
  MR_Word Constants_13,
  MR_Word Functors_14,
  MR_Word * PackedFunctors_15,
  MR_Word * NonPackedFunctors_16,
  MR_Word * SectagBits_17,
  MR_Word * MustMask_18)
{
  {
    MR_bool succeeded;
    MR_Integer NumConstants_19;
    MR_Integer NumSectagBits_24;
    MR_Integer Var_83;
    MR_Word Var_46;
    MR_Word Var_87;
    MR_Unsigned packed_args_0;
    MR_Unsigned packed_args_1;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Constants_13, &NumConstants_19);
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 0)));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 1))));
    Var_83 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 2))));
    packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 3)));
    Var_87 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 3))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (Var_87 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word SizedPackableFunctors_22;
      MR_Word NonPackableFunctors_23;

      hlds__du_type_layout__separate_out_local_sectag_packable_5_p_0(Params_10, ComponentTypeMap_11, Functors_14, &SizedPackableFunctors_22, &NonPackableFunctors_23);
      if ((SizedPackableFunctors_22 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *PackedFunctors_15 = (MR_Word) ((MR_Unsigned) 0U);
        *NonPackedFunctors_16 = Functors_14;
        hlds__du_type_layout__num_bits_needed_for_n_things_2_p_0(NumConstants_19, &NumSectagBits_24);
        *MustMask_18 = (MR_Integer) 0;
      }
      else
      {
        MR_Word SortedSizedPackableFunctors_27;
        MR_Integer MaxPackableBits_28;
        MR_Integer NumPackable_30;
        MR_Word Var_49;
        MR_Box conv1_Var_49;
        MR_Integer NumSectagBits0_34;
        MR_Integer Var_70;
        MR_Integer Var_71;
        MR_Integer Var_72;

        mercury__list__sort_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_2[5]), (MR_Word) (&hlds__du_type_layout_scalar_common_2[12]), SizedPackableFunctors_22, &SortedSizedPackableFunctors_27);
        mercury__list__det_last_2_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_2[5]), SortedSizedPackableFunctors_27, &conv1_Var_49);
        Var_49 = ((MR_Word) (conv1_Var_49));
        MaxPackableBits_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 0))));
        mercury__list__length_2_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_2[5]), SizedPackableFunctors_22, &NumPackable_30);
        Var_70 = (MR_Integer) ((MR_Unsigned) NumConstants_19 + (MR_Unsigned) NumPackable_30);
        hlds__du_type_layout__num_bits_needed_for_n_things_2_p_0(Var_70, &NumSectagBits0_34);
        Var_72 = (MR_Integer) ((MR_Unsigned) NumPtagBits_12 + (MR_Unsigned) NumSectagBits0_34);
        Var_71 = (MR_Integer) ((MR_Unsigned) Var_72 + (MR_Unsigned) MaxPackableBits_28);
        succeeded = (Var_71 <= Var_83);
        if (succeeded)
        {
          mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), SizedPackableFunctors_22, PackedFunctors_15);
          *NonPackedFunctors_16 = NonPackableFunctors_23;
          NumSectagBits_24 = NumSectagBits0_34;
        }
        else
        {
          MR_Integer NumSectagValues0_35;
          MR_Integer TakeLimit0_36;
          MR_Word RevSizedPackedFunctors0_38;
          MR_Word SizedNonPackedFunctors0_39;
          MR_Word RevSizedPackedFunctors_40;
          MR_Word SizedNonPackedFunctors_41;
          MR_Word RevPackedFunctors_42;
          MR_Word NonPackedPackableFunctors_43;
          MR_Word Var_76;
          MR_Integer NumSectagBits0_78;
          MR_Integer _NumTaken_37;

          hlds__du_type_layout__num_bits_needed_for_n_things_2_p_0(NumConstants_19, &NumSectagBits0_78);
          NumSectagValues0_35 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, NumSectagBits0_78);
          TakeLimit0_36 = (MR_Integer) ((MR_Unsigned) NumSectagValues0_35 - (MR_Unsigned) NumConstants_19);
          hlds__du_type_layout__take_local_packable_functors_constant_sectag_bits_10_p_0(Var_83, NumPtagBits_12, NumSectagBits0_78, TakeLimit0_36, (MR_Integer) 0, &_NumTaken_37, SortedSizedPackableFunctors_27, (MR_Word) ((MR_Unsigned) 0U), &RevSizedPackedFunctors0_38, &SizedNonPackedFunctors0_39);
          hlds__du_type_layout__take_local_packable_functors_incr_sectag_bits_8_p_0(Var_83, NumPtagBits_12, NumSectagBits0_78, &NumSectagBits_24, RevSizedPackedFunctors0_38, SizedNonPackedFunctors0_39, &RevSizedPackedFunctors_40, &SizedNonPackedFunctors_41);
          mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), RevSizedPackedFunctors_40, &RevPackedFunctors_42);
          mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), SizedNonPackedFunctors_41, &NonPackedPackableFunctors_43);
          mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), RevPackedFunctors_42, PackedFunctors_15);
          Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), NonPackableFunctors_23, NonPackedPackableFunctors_43);
          mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Var_76, NonPackedFunctors_16);
        }
        if ((*PackedFunctors_15 == (MR_Word) ((MR_Unsigned) 0U)))
          *MustMask_18 = (MR_Integer) 0;
        else
          *MustMask_18 = (MR_Integer) 1;
      }
    }
    else
    {
      *PackedFunctors_15 = (MR_Word) ((MR_Unsigned) 0U);
      *NonPackedFunctors_16 = Functors_14;
      hlds__du_type_layout__num_bits_needed_for_n_things_2_p_0(NumConstants_19, &NumSectagBits_24);
      *MustMask_18 = (MR_Integer) 0;
    }
    hlds__du_type_layout__compute_sectag_bits_2_p_0(NumSectagBits_24, SectagBits_17);
  }
}

static void MR_CALL 
hlds__du_type_layout__num_bits_needed_for_n_things_2_p_0(
  MR_Integer NumSharers_3,
  MR_Integer * NumBits_4)
{
  {
    hlds__du_type_layout__num_bits_needed_for_n_things_loop_3_p_0(NumSharers_3, (MR_Integer) 0, NumBits_4);
  }
}

static void MR_CALL 
hlds__du_type_layout__num_bits_needed_for_n_things_loop_3_p_0(
  MR_Integer N_4,
  MR_Integer NumBits0_5,
  MR_Integer * NumBits_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_7;

    // setup for model_det tailcalls optimized into a loop
    ;
    Var_7 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, NumBits0_5);
    succeeded = (N_4 <= Var_7);
    if (succeeded)
      *NumBits_6 = NumBits0_5;
    else
    {
      MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) NumBits0_5 + (MR_Unsigned) (MR_Integer) 1);
      MR_Integer next_value_of_NumBits0_5 = Var_9;

      // direct tailcall eliminated
      ;
      NumBits0_5 = next_value_of_NumBits0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__compute_sectag_bits_2_p_0(
  MR_Integer NumBits_3,
  MR_Word * SectagBits_4)
{
  {
    MR_bool succeeded;
    MR_Integer NumBitsMask_5;
    MR_Integer Var_8;
    uint8_t NumBitsUint8_6;
    MR_Unsigned NumBitsMaskUint_7;

    Var_8 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, NumBits_3);
    NumBitsMask_5 = (MR_Integer) ((MR_Unsigned) Var_8 - (MR_Unsigned) (MR_Integer) 1);
    succeeded = mercury__uint8__from_int_2_p_0(NumBits_3, &NumBitsUint8_6);
    if (succeeded)
      succeeded = mercury__uint__from_int_2_p_0(NumBitsMask_5, &NumBitsMaskUint_7);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *SectagBits_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_Word) (NumBitsUint8_6));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NumBitsMaskUint_7));
      }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.compute_sectag_bits\'/2", (MR_String) "NumBitsNeeded does not fit in 8 bits");
        return;
      }
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__separate_out_local_sectag_packable_5_p_0(
  MR_Word Params_1,
  MR_Word ComponentTypeMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Ctor_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Ctors_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word PackableTail_14;
      MR_Word NonPackableTail_15;
      MR_Word Args_16;
      MR_Integer NumBits_17;
      MR_Word Var_19;
      MR_String Var_20;
      MR_Word Var_21;
      MR_String Var_52;
      MR_Unsigned packed_args_0;
      MR_Unsigned packed_args_1;

      hlds__du_type_layout__separate_out_local_sectag_packable_5_p_0(Params_1, ComponentTypeMap_2, Ctors_11, &PackableTail_14, &NonPackableTail_15);
      Args_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 3))));
      succeeded = hlds__du_type_layout__args_are_all_packable_5_p_0(Params_1, ComponentTypeMap_2, Args_16, (MR_Integer) 0, &NumBits_17);
      if (succeeded)
      {
        Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 1))));
        succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 2))));
          Var_20 = mdbcomp__sym_name__unqualify_name_1_f_0(Var_21);
          packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_1, (MR_Integer) 0)));
          packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_1, (MR_Integer) 3)));
          Var_52 = ((MR_String) ((MR_hl_field(MR_mktag(0), Params_1, (MR_Integer) 4))));
          succeeded = (strcmp(Var_20, Var_52) == 0);
          succeeded = !(succeeded);
        }
      }
      if (succeeded)
      {
        MR_Word Var_22;

        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (NumBits_17));
          MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (Ctor_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PackableTail_14));
        }
        *HeadVar__5_5 = NonPackableTail_15;
      }
      else
      {
        *HeadVar__4_4 = PackableTail_14;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Ctor_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NonPackableTail_15));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__args_are_all_packable_5_p_0(
  MR_Word Params_1,
  MR_Word ComponentTypeMap_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_NumBits_0_4,
  MR_Integer * STATE_VARIABLE_NumBits_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NumBits_5 = STATE_VARIABLE_NumBits_0_4;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Arg_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Args_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgType_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_13, (MR_Integer) 1))));
      MR_Word Packable_19;
      MR_Integer STATE_VARIABLE_NumBits_24_24;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_STATE_VARIABLE_NumBits_0_4;

      succeeded = hlds__du_type_layout__may_pack_arg_type_4_p_0(Params_1, ComponentTypeMap_2, ArgType_17, &Packable_19);
      if (succeeded)
      {
        if ((Packable_19 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_NumBits_24_24 = STATE_VARIABLE_NumBits_0_4;
        else
        {
          MR_Integer ArgNumArgBits_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Packable_19, (MR_Integer) 0))));

          STATE_VARIABLE_NumBits_24_24 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumBits_0_4 + (MR_Unsigned) ArgNumArgBits_20);
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Args_14;
        next_value_of_STATE_VARIABLE_NumBits_0_4 = STATE_VARIABLE_NumBits_24_24;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_NumBits_0_4 = next_value_of_STATE_VARIABLE_NumBits_0_4;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__take_local_packable_functors_incr_sectag_bits_8_p_0(
  MR_Integer NumArgPackBits_9,
  MR_Integer NumPtagBits_10,
  MR_Integer NumSectagBits0_11,
  MR_Integer * NumSectagBits_12,
  MR_Word RevPackedFunctors0_13,
  MR_Word NonPackedFunctors0_14,
  MR_Word * RevPackedFunctors_15,
  MR_Word * NonPackedFunctors_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((RevPackedFunctors0_13 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Integer MaxPackableBits_18;
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevPackedFunctors0_13, (MR_Integer) 0))));
      MR_Integer Var_44;
      MR_Integer Var_45;
      MR_Integer Var_46;

      MaxPackableBits_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 0))));
      Var_46 = (MR_Integer) ((MR_Unsigned) NumPtagBits_10 + (MR_Unsigned) NumSectagBits0_11);
      Var_45 = (MR_Integer) ((MR_Unsigned) Var_46 + (MR_Unsigned) MaxPackableBits_18);
      Var_44 = (MR_Integer) ((MR_Unsigned) Var_45 + (MR_Unsigned) (MR_Integer) 1);
      succeeded = (Var_44 <= NumArgPackBits_9);
    }
    if (succeeded)
    {
      MR_Integer NumSectagBits1_21 = (MR_Integer) ((MR_Unsigned) NumSectagBits0_11 + (MR_Unsigned) (MR_Integer) 1);
      MR_Integer TakeLimit_22;
      MR_Integer NumTaken_23;
      MR_Word RevPackedFunctors1_24;
      MR_Word NonPackedFunctors1_25;
      MR_Integer Var_49;
      MR_Integer Var_51;

      Var_49 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, NumSectagBits1_21);
      Var_51 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, NumSectagBits0_11);
      TakeLimit_22 = (MR_Integer) ((MR_Unsigned) Var_49 - (MR_Unsigned) Var_51);
      hlds__du_type_layout__take_local_packable_functors_constant_sectag_bits_10_p_0(NumArgPackBits_9, NumPtagBits_10, NumSectagBits1_21, TakeLimit_22, (MR_Integer) 0, &NumTaken_23, NonPackedFunctors0_14, RevPackedFunctors0_13, &RevPackedFunctors1_24, &NonPackedFunctors1_25);
      succeeded = (NumTaken_23 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer next_value_of_NumSectagBits0_11 = NumSectagBits1_21;
        MR_Word next_value_of_RevPackedFunctors0_13 = RevPackedFunctors1_24;
        MR_Word next_value_of_NonPackedFunctors0_14 = NonPackedFunctors1_25;

        // direct tailcall eliminated
        ;
        NumSectagBits0_11 = next_value_of_NumSectagBits0_11;
        RevPackedFunctors0_13 = next_value_of_RevPackedFunctors0_13;
        NonPackedFunctors0_14 = next_value_of_NonPackedFunctors0_14;
        continue;
      }
      else
      {
        *NumSectagBits_12 = NumSectagBits0_11;
        *RevPackedFunctors_15 = RevPackedFunctors0_13;
        *NonPackedFunctors_16 = NonPackedFunctors0_14;
      }
    }
    else
    {
      *NumSectagBits_12 = NumSectagBits0_11;
      *RevPackedFunctors_15 = RevPackedFunctors0_13;
      *NonPackedFunctors_16 = NonPackedFunctors0_14;
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__take_local_packable_functors_constant_sectag_bits_10_p_0(
  MR_Integer ArgPackBits_1,
  MR_Integer PtagBits_2,
  MR_Integer SectagBits_3,
  MR_Integer TakeLimit_4,
  MR_Integer STATE_VARIABLE_NumTaken_0_5,
  MR_Integer * STATE_VARIABLE_NumTaken_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_RevPackedFunctors_0_8,
  MR_Word * STATE_VARIABLE_RevPackedFunctors_9,
  MR_Word * HeadVar__10_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__10_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_RevPackedFunctors_9 = STATE_VARIABLE_RevPackedFunctors_0_8;
      *STATE_VARIABLE_NumTaken_6 = STATE_VARIABLE_NumTaken_0_5;
    }
    else
    {
      MR_Word PackableFunctor_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 0))));
      MR_Word PackableFunctors_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 1))));
      MR_Integer PackableBits_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PackableFunctor_26, (MR_Integer) 0))));
      MR_Integer Var_57;
      MR_Integer Var_58;

      succeeded = (TakeLimit_4 > (MR_Integer) 0);
      if (succeeded)
      {
        Var_58 = (MR_Integer) ((MR_Unsigned) PtagBits_2 + (MR_Unsigned) SectagBits_3);
        Var_57 = (MR_Integer) ((MR_Unsigned) Var_58 + (MR_Unsigned) PackableBits_30);
        succeeded = (Var_57 <= ArgPackBits_1);
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_RevPackedFunctors_62_62;
        MR_Integer STATE_VARIABLE_NumTaken_63_63;
        MR_Integer Var_65;
        MR_Integer next_value_of_TakeLimit_4;
        MR_Integer next_value_of_STATE_VARIABLE_NumTaken_0_5;
        MR_Word next_value_of_HeadVar__7_7;
        MR_Word next_value_of_STATE_VARIABLE_RevPackedFunctors_0_8;

        {
          STATE_VARIABLE_RevPackedFunctors_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPackedFunctors_62_62, 0) = ((MR_Box) (PackableFunctor_26));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPackedFunctors_62_62, 1) = ((MR_Box) (STATE_VARIABLE_RevPackedFunctors_0_8));
        }
        STATE_VARIABLE_NumTaken_63_63 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumTaken_0_5 + (MR_Unsigned) (MR_Integer) 1);
        Var_65 = (MR_Integer) ((MR_Unsigned) TakeLimit_4 - (MR_Unsigned) (MR_Integer) 1);
        // direct tailcall eliminated
        ;
        next_value_of_TakeLimit_4 = Var_65;
        next_value_of_STATE_VARIABLE_NumTaken_0_5 = STATE_VARIABLE_NumTaken_63_63;
        next_value_of_HeadVar__7_7 = PackableFunctors_27;
        next_value_of_STATE_VARIABLE_RevPackedFunctors_0_8 = STATE_VARIABLE_RevPackedFunctors_62_62;
        TakeLimit_4 = next_value_of_TakeLimit_4;
        STATE_VARIABLE_NumTaken_0_5 = next_value_of_STATE_VARIABLE_NumTaken_0_5;
        HeadVar__7_7 = next_value_of_HeadVar__7_7;
        STATE_VARIABLE_RevPackedFunctors_0_8 = next_value_of_STATE_VARIABLE_RevPackedFunctors_0_8;
        continue;
      }
      else
      {
        *HeadVar__10_10 = HeadVar__7_7;
        *STATE_VARIABLE_RevPackedFunctors_9 = STATE_VARIABLE_RevPackedFunctors_0_8;
        *STATE_VARIABLE_NumTaken_6 = STATE_VARIABLE_NumTaken_0_5;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__assign_tags_to_non_direct_arg_functors_8_p_0(
  MR_Word TypeCtor_1,
  MR_Word MaxPtag_2,
  uint8_t STATE_VARIABLE_CurPtagUint8_0_3,
  MR_Word AddedBy_4,
  MR_Word HeadVar__5_5,
  MR_Unsigned * HeadVar__6_6,
  MR_Word STATE_VARIABLE_CtorTagMap_0_7,
  MR_Word * STATE_VARIABLE_CtorTagMap_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = (MR_Unsigned) 0U;
      *STATE_VARIABLE_CtorTagMap_8 = STATE_VARIABLE_CtorTagMap_0_7;
    }
    else
    {
      MR_Word Ctor_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Ctors_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Name_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_20, (MR_Integer) 2))));
      MR_Integer Arity_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_20, (MR_Integer) 4))));
      MR_Word ConsId_30;
      uint8_t MaxPtagUint8_31;

      {
        ConsId_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_30, 1) = ((MR_Box) (Name_26));
        MR_hl_field(MR_mktag(3), ConsId_30, 2) = ((MR_Box) (Arity_28));
        MR_hl_field(MR_mktag(3), ConsId_30, 3) = ((MR_Box) (TypeCtor_1));
      }
      MaxPtagUint8_31 = (uint8_t) (MaxPtag_2);
      succeeded = (STATE_VARIABLE_CurPtagUint8_0_3 == MaxPtagUint8_31);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Ctors_21)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        MR_Word Ctor_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
        MR_Word Ctors_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
        MR_Word SymName_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_62, (MR_Integer) 2))));
        MR_Integer Arity_70 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_62, (MR_Integer) 4))));
        MR_Word ConsId_72;
        MR_Word RemoteSectag_73;
        MR_Word ConsTag_74;
        MR_Word STATE_VARIABLE_CtorTagMap_38_79;

        {
          ConsId_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsId_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ConsId_72, 1) = ((MR_Box) (SymName_68));
          MR_hl_field(MR_mktag(3), ConsId_72, 2) = ((MR_Box) (Arity_70));
          MR_hl_field(MR_mktag(3), ConsId_72, 3) = ((MR_Box) (TypeCtor_1));
        }
        {
          RemoteSectag_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), RemoteSectag_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), RemoteSectag_73, 1) = ((MR_Box) (AddedBy_4));
        }
        {
          ConsTag_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsTag_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
          MR_hl_field(MR_mktag(3), ConsTag_74, 1) = ((MR_Box) (MaxPtag_2));
          MR_hl_field(MR_mktag(3), ConsTag_74, 2) = ((MR_Box) (RemoteSectag_73));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), ((MR_Box) (ConsId_72)), ((MR_Box) (ConsTag_74)), STATE_VARIABLE_CtorTagMap_0_7, &STATE_VARIABLE_CtorTagMap_38_79);
        hlds__du_type_layout__assign_shared_remote_tags_to_non_direct_arg_functors_8_p_0(TypeCtor_1, MaxPtag_2, AddedBy_4, Ctors_63, ((MR_Unsigned) 0U + (MR_Unsigned) 1U), HeadVar__6_6, STATE_VARIABLE_CtorTagMap_38_79, STATE_VARIABLE_CtorTagMap_8);
      }
      else
      {
        MR_Word ConsTag_36;
        MR_Word Var_43 = (MR_Word) (STATE_VARIABLE_CurPtagUint8_0_3);
        MR_Word STATE_VARIABLE_CtorTagMap_44_44;
        uint8_t STATE_VARIABLE_CurPtagUint8_45_45;
        uint8_t next_value_of_STATE_VARIABLE_CurPtagUint8_0_3;
        MR_Word next_value_of_HeadVar__5_5;
        MR_Word next_value_of_STATE_VARIABLE_CtorTagMap_0_7;

        {
          ConsTag_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsTag_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
          MR_hl_field(MR_mktag(3), ConsTag_36, 1) = ((MR_Box) (Var_43));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), ((MR_Box) (ConsId_30)), ((MR_Box) (ConsTag_36)), STATE_VARIABLE_CtorTagMap_0_7, &STATE_VARIABLE_CtorTagMap_44_44);
        STATE_VARIABLE_CurPtagUint8_45_45 = (STATE_VARIABLE_CurPtagUint8_0_3 + UINT8_C(1));
        // direct tailcall eliminated
        ;
        next_value_of_STATE_VARIABLE_CurPtagUint8_0_3 = STATE_VARIABLE_CurPtagUint8_45_45;
        next_value_of_HeadVar__5_5 = Ctors_21;
        next_value_of_STATE_VARIABLE_CtorTagMap_0_7 = STATE_VARIABLE_CtorTagMap_44_44;
        STATE_VARIABLE_CurPtagUint8_0_3 = next_value_of_STATE_VARIABLE_CurPtagUint8_0_3;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        STATE_VARIABLE_CtorTagMap_0_7 = next_value_of_STATE_VARIABLE_CtorTagMap_0_7;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__assign_shared_remote_tags_to_non_direct_arg_functors_8_p_0(
  MR_Word TypeCtor_1,
  MR_Word Ptag_2,
  MR_Word AddedBy_3,
  MR_Word HeadVar__4_4,
  MR_Unsigned STATE_VARIABLE_CurRemoteSecTag_0_5,
  MR_Unsigned * STATE_VARIABLE_CurRemoteSecTag_6,
  MR_Word STATE_VARIABLE_CtorTagMap_0_7,
  MR_Word * STATE_VARIABLE_CtorTagMap_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CtorTagMap_8 = STATE_VARIABLE_CtorTagMap_0_7;
      *STATE_VARIABLE_CurRemoteSecTag_6 = STATE_VARIABLE_CurRemoteSecTag_0_5;
    }
    else
    {
      MR_Word Ctor_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Ctors_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word SymName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 2))));
      MR_Integer Arity_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 4))));
      MR_Word ConsId_31;
      MR_Word RemoteSectag_32;
      MR_Word ConsTag_33;
      MR_Word STATE_VARIABLE_CtorTagMap_38_38;
      MR_Unsigned STATE_VARIABLE_CurRemoteSecTag_39_39;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Unsigned next_value_of_STATE_VARIABLE_CurRemoteSecTag_0_5;
      MR_Word next_value_of_STATE_VARIABLE_CtorTagMap_0_7;

      {
        ConsId_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_31, 1) = ((MR_Box) (SymName_27));
        MR_hl_field(MR_mktag(3), ConsId_31, 2) = ((MR_Box) (Arity_29));
        MR_hl_field(MR_mktag(3), ConsId_31, 3) = ((MR_Box) (TypeCtor_1));
      }
      {
        RemoteSectag_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), RemoteSectag_32, 0) = ((MR_Box) (STATE_VARIABLE_CurRemoteSecTag_0_5));
        MR_hl_field(MR_mktag(0), RemoteSectag_32, 1) = ((MR_Box) (AddedBy_3));
      }
      {
        ConsTag_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsTag_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
        MR_hl_field(MR_mktag(3), ConsTag_33, 1) = ((MR_Box) (Ptag_2));
        MR_hl_field(MR_mktag(3), ConsTag_33, 2) = ((MR_Box) (RemoteSectag_32));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), ((MR_Box) (ConsId_31)), ((MR_Box) (ConsTag_33)), STATE_VARIABLE_CtorTagMap_0_7, &STATE_VARIABLE_CtorTagMap_38_38);
      STATE_VARIABLE_CurRemoteSecTag_39_39 = (STATE_VARIABLE_CurRemoteSecTag_0_5 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Ctors_22;
      next_value_of_STATE_VARIABLE_CurRemoteSecTag_0_5 = STATE_VARIABLE_CurRemoteSecTag_39_39;
      next_value_of_STATE_VARIABLE_CtorTagMap_0_7 = STATE_VARIABLE_CtorTagMap_38_38;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_CurRemoteSecTag_0_5 = next_value_of_STATE_VARIABLE_CurRemoteSecTag_0_5;
      STATE_VARIABLE_CtorTagMap_0_7 = next_value_of_STATE_VARIABLE_CtorTagMap_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__assign_tags_to_direct_arg_functors_9_p_0(
  MR_Word TypeCtor_1,
  MR_Word MaxPtag_2,
  uint8_t HeadVar__3_3,
  uint8_t * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word NonDirectArgCtors_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_CtorTagMap_0_8,
  MR_Word * STATE_VARIABLE_CtorTagMap_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_CtorTagMap_9 = STATE_VARIABLE_CtorTagMap_0_8;
      *HeadVar__4_4 = HeadVar__3_3;
    }
    else
    {
      MR_Word DirectArgCtor_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word DirectArgCtors_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word Name_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DirectArgCtor_22, (MR_Integer) 2))));
      MR_Integer Arity_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DirectArgCtor_22, (MR_Integer) 4))));
      MR_Word ConsId_33;
      uint8_t MaxPtagUint8_34;

      {
        ConsId_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_33, 1) = ((MR_Box) (Name_29));
        MR_hl_field(MR_mktag(3), ConsId_33, 2) = ((MR_Box) (Arity_31));
        MR_hl_field(MR_mktag(3), ConsId_33, 3) = ((MR_Box) (TypeCtor_1));
      }
      MaxPtagUint8_34 = (uint8_t) (MaxPtag_2);
      succeeded = (HeadVar__3_3 == MaxPtagUint8_34);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) DirectArgCtors_23)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          succeeded = ((MR_tag((MR_Word) NonDirectArgCtors_6)) == (MR_Integer) 1);
          if (succeeded)
          {
          }
        }
      }
      if (succeeded)
      {
        *HeadVar__7_7 = HeadVar__5_5;
        *STATE_VARIABLE_CtorTagMap_9 = STATE_VARIABLE_CtorTagMap_0_8;
        *HeadVar__4_4 = HeadVar__3_3;
      }
      else
      {
        MR_Word ConsTag_39;
        MR_Word Var_44 = (MR_Word) (HeadVar__3_3);
        MR_Word STATE_VARIABLE_CtorTagMap_45_45;
        uint8_t STATE_VARIABLE_CurPtagUint8_46_46;
        uint8_t next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__5_5;
        MR_Word next_value_of_STATE_VARIABLE_CtorTagMap_0_8;

        {
          ConsTag_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsTag_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
          MR_hl_field(MR_mktag(3), ConsTag_39, 1) = ((MR_Box) (Var_44));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), ((MR_Box) (ConsId_33)), ((MR_Box) (ConsTag_39)), STATE_VARIABLE_CtorTagMap_0_8, &STATE_VARIABLE_CtorTagMap_45_45);
        STATE_VARIABLE_CurPtagUint8_46_46 = (HeadVar__3_3 + UINT8_C(1));
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = STATE_VARIABLE_CurPtagUint8_46_46;
        next_value_of_HeadVar__5_5 = DirectArgCtors_23;
        next_value_of_STATE_VARIABLE_CtorTagMap_0_8 = STATE_VARIABLE_CtorTagMap_45_45;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        HeadVar__5_5 = next_value_of_HeadVar__5_5;
        STATE_VARIABLE_CtorTagMap_0_8 = next_value_of_STATE_VARIABLE_CtorTagMap_0_8;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__assign_tags_to_local_packed_functors_8_p_0(
  MR_Word TypeCtor_1,
  MR_Word Ptag_2,
  MR_Integer NumPtagBits_3,
  MR_Word SectagBits_4,
  MR_Unsigned CurSecTag_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_CtorTagMap_0_7,
  MR_Word * STATE_VARIABLE_CtorTagMap_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CtorTagMap_8 = STATE_VARIABLE_CtorTagMap_0_7;
    else
    {
      MR_Word Ctor_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Ctors_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word SymName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_22, (MR_Integer) 2))));
      MR_Integer Arity_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_22, (MR_Integer) 4))));
      MR_Word ConsId_31;
      uint8_t PtagUint8_32;
      MR_Unsigned PrimSec_33;
      MR_Word LocalSectag_34;
      MR_Word ConsTag_35;
      MR_Unsigned Var_38;
      MR_Unsigned Var_39;
      MR_Word STATE_VARIABLE_CtorTagMap_40_40;
      MR_Unsigned Var_41;
      MR_Unsigned next_value_of_CurSecTag_5;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_CtorTagMap_0_7;

      {
        ConsId_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_31, 1) = ((MR_Box) (SymName_27));
        MR_hl_field(MR_mktag(3), ConsId_31, 2) = ((MR_Box) (Arity_29));
        MR_hl_field(MR_mktag(3), ConsId_31, 3) = ((MR_Box) (TypeCtor_1));
      }
      PtagUint8_32 = (uint8_t) (Ptag_2);
      Var_38 = mercury__uint__f_60_60_2_f_0(CurSecTag_5, NumPtagBits_3);
      Var_39 = mercury__uint8__cast_to_uint_1_f_0(PtagUint8_32);
      PrimSec_33 = (Var_38 | Var_39);
      {
        LocalSectag_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), LocalSectag_34, 0) = ((MR_Box) (CurSecTag_5));
        MR_hl_field(MR_mktag(0), LocalSectag_34, 1) = ((MR_Box) (PrimSec_33));
        MR_hl_field(MR_mktag(0), LocalSectag_34, 2) = ((MR_Box) (SectagBits_4));
      }
      {
        ConsTag_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsTag_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
        MR_hl_field(MR_mktag(3), ConsTag_35, 1) = ((MR_Box) (Ptag_2));
        MR_hl_field(MR_mktag(3), ConsTag_35, 2) = ((MR_Box) (LocalSectag_34));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), ((MR_Box) (ConsId_31)), ((MR_Box) (ConsTag_35)), STATE_VARIABLE_CtorTagMap_0_7, &STATE_VARIABLE_CtorTagMap_40_40);
      Var_41 = (CurSecTag_5 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_CurSecTag_5 = Var_41;
      next_value_of_HeadVar__6_6 = Ctors_23;
      next_value_of_STATE_VARIABLE_CtorTagMap_0_7 = STATE_VARIABLE_CtorTagMap_40_40;
      CurSecTag_5 = next_value_of_CurSecTag_5;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_CtorTagMap_0_7 = next_value_of_STATE_VARIABLE_CtorTagMap_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__assign_tags_to_constants_10_p_0(
  MR_Word TypeCtor_1,
  MR_Word Ptag_2,
  MR_Integer NumPtagBits_3,
  MR_Word SectagBits_4,
  MR_Word MustMask_5,
  MR_Unsigned STATE_VARIABLE_CurSecTag_0_6,
  MR_Unsigned * STATE_VARIABLE_CurSecTag_7,
  MR_Word HeadVar__8_8,
  MR_Word STATE_VARIABLE_CtorTagMap_0_9,
  MR_Word * STATE_VARIABLE_CtorTagMap_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__8_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CtorTagMap_10 = STATE_VARIABLE_CtorTagMap_0_9;
      *STATE_VARIABLE_CurSecTag_7 = STATE_VARIABLE_CurSecTag_0_6;
    }
    else
    {
      MR_Word Ctor_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__8_8, (MR_Integer) 0))));
      MR_Word Ctors_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__8_8, (MR_Integer) 1))));
      MR_Word SymName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_28, (MR_Integer) 2))));
      MR_Integer Arity_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_28, (MR_Integer) 4))));
      MR_Word ConsId_37;
      uint8_t PtagUint8_38;
      MR_Unsigned PrimSec_39;
      MR_Word LocalSectag_40;
      MR_Word ConsTag_41;
      MR_Unsigned Var_46;
      MR_Unsigned Var_47;
      MR_Word STATE_VARIABLE_CtorTagMap_48_48;
      MR_Unsigned STATE_VARIABLE_CurSecTag_49_49;
      MR_Unsigned next_value_of_STATE_VARIABLE_CurSecTag_0_6;
      MR_Word next_value_of_HeadVar__8_8;
      MR_Word next_value_of_STATE_VARIABLE_CtorTagMap_0_9;

      {
        ConsId_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_37, 1) = ((MR_Box) (SymName_33));
        MR_hl_field(MR_mktag(3), ConsId_37, 2) = ((MR_Box) (Arity_35));
        MR_hl_field(MR_mktag(3), ConsId_37, 3) = ((MR_Box) (TypeCtor_1));
      }
      PtagUint8_38 = (uint8_t) (Ptag_2);
      Var_46 = mercury__uint__f_60_60_2_f_0(STATE_VARIABLE_CurSecTag_0_6, NumPtagBits_3);
      Var_47 = mercury__uint8__cast_to_uint_1_f_0(PtagUint8_38);
      PrimSec_39 = (Var_46 | Var_47);
      {
        LocalSectag_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), LocalSectag_40, 0) = ((MR_Box) (STATE_VARIABLE_CurSecTag_0_6));
        MR_hl_field(MR_mktag(0), LocalSectag_40, 1) = ((MR_Box) (PrimSec_39));
        MR_hl_field(MR_mktag(0), LocalSectag_40, 2) = ((MR_Box) (SectagBits_4));
      }
      {
        ConsTag_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsTag_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
        MR_hl_field(MR_mktag(3), ConsTag_41, 1) = ((MR_Box) (Ptag_2));
        MR_hl_field(MR_mktag(3), ConsTag_41, 2) = ((MR_Box) (LocalSectag_40));
        MR_hl_field(MR_mktag(3), ConsTag_41, 3) = ((MR_Box) (MustMask_5));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), ((MR_Box) (ConsId_37)), ((MR_Box) (ConsTag_41)), STATE_VARIABLE_CtorTagMap_0_9, &STATE_VARIABLE_CtorTagMap_48_48);
      STATE_VARIABLE_CurSecTag_49_49 = (STATE_VARIABLE_CurSecTag_0_6 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_CurSecTag_0_6 = STATE_VARIABLE_CurSecTag_49_49;
      next_value_of_HeadVar__8_8 = Ctors_29;
      next_value_of_STATE_VARIABLE_CtorTagMap_0_9 = STATE_VARIABLE_CtorTagMap_48_48;
      STATE_VARIABLE_CurSecTag_0_6 = next_value_of_STATE_VARIABLE_CurSecTag_0_6;
      HeadVar__8_8 = next_value_of_HeadVar__8_8;
      STATE_VARIABLE_CtorTagMap_0_9 = next_value_of_STATE_VARIABLE_CtorTagMap_0_9;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
hlds__du_type_layout__target_uses_constructors_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((&hlds__du_type_layout_vector_common_11[0 + HeadVar__1_1]))->hlds__du_type_layout__vector_common_type_11_0__vct_11_f_0;

    return HeadVar__2_2;
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_type_single_ctor_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Params_10,
  MR_Word ComponentTypeMap_11,
  MR_Word TypeStatus_12,
  MR_Word SingleCtor_13,
  MR_Word * Repn_14,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  {
    MR_Integer Ordinal_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SingleCtor_13, (MR_Integer) 0))));
    MR_Word MaybeExistConstraints_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleCtor_13, (MR_Integer) 1))));
    MR_Word SingleCtorSymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleCtor_13, (MR_Integer) 2))));
    MR_Word SingleCtorArgs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleCtor_13, (MR_Integer) 3))));
    MR_Integer SingleCtorArity_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SingleCtor_13, (MR_Integer) 4))));
    MR_Word SingleCtorContext_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleCtor_13, (MR_Integer) 5))));
    MR_Word SingleCtorArgRepns_24;
    MR_Word SingleCtorRepn_25;
    MR_Word CtorRepnMap_26;
    MR_String Var_32;
    MR_Word Var_33;
    MR_Word Var_35;

    hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_99_116_111_114_95_114_101_109_111_116_101_95_97_114_103_115_95_95_91_53_93_95_48_13_p_0(ModuleInfo_9, Params_10, ComponentTypeMap_11, TypeStatus_12, (MR_Word) ((MR_Unsigned) 0U), MaybeExistConstraints_17, SingleCtorSymName_18, SingleCtorContext_21, SingleCtorArgs_19, &SingleCtorArgRepns_24, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
    {
      SingleCtorRepn_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SingleCtorRepn_25, 0) = ((MR_Box) (Ordinal_16));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_25, 1) = ((MR_Box) (MaybeExistConstraints_17));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_25, 2) = ((MR_Box) (SingleCtorSymName_18));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_25, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_25, 4) = ((MR_Box) (SingleCtorArgRepns_24));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_25, 5) = ((MR_Box) (SingleCtorArity_20));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_25, 6) = ((MR_Box) (SingleCtorContext_21));
    }
    Var_32 = mdbcomp__sym_name__unqualify_name_1_f_0(SingleCtorSymName_18);
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (SingleCtorRepn_25));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    CtorRepnMap_26 = mercury__map__singleton_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[7]), ((MR_Box) (Var_32)), ((MR_Box) (Var_33)));
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (SingleCtorRepn_25));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      *Repn_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CtorRepnMap_26));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_99_111_109_112_108_101_120_95_100_117_95_99_116_111_114_95_114_101_109_111_116_101_95_97_114_103_115_95_95_91_53_93_95_48_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word Params_15,
  MR_Word ComponentTypeMap_16,
  MR_Word TypeStatus_17,
  MR_Word CtorTag_19,
  MR_Word MaybeExistConstraints_20,
  MR_Word CtorSymName_21,
  MR_Word CtorContext_22,
  MR_Word CtorArgs_23,
  MR_Word * CtorArgRepns_24,
  MR_Word STATE_VARIABLE_Specs_0_45,
  MR_Word * STATE_VARIABLE_Specs_46)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) CtorTag_19)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CtorTag_19, (MR_Integer) 0))) == (MR_Integer) 15)));
    MR_Integer NumSecTagWords_28;
    MR_Integer NumExtraArgWords_29;
    MR_Integer FirstCellWordNum_38;
    MR_Word NoPackParams_40;
    MR_Word CtorArgRepnsBase_41;
    MR_Word CtorArgRepnsPacked_42;
    MR_Word WorthPacking_43;
    MR_Word MaybeInformPacking_44;
    MR_Word Var_51;
    MR_Word Var_59;
    MR_Integer Var_60;
    MR_Word Var_61;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_String Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word RemoteSectag_27;
    MR_Word Var_47;
    MR_Unsigned packed_args_0;
    MR_Unsigned packed_args_1;
    MR_Unsigned packed_args_2;
    MR_Unsigned packed_args_3;
    MR_Word Var_52;

    if (succeeded)
    {
      RemoteSectag_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CtorTag_19, (MR_Integer) 2))));
      Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_27, (MR_Integer) 1))));
      succeeded = (Var_47 == (MR_Integer) 0);
    }
    if (succeeded)
      NumSecTagWords_28 = (MR_Integer) 1;
    else
      NumSecTagWords_28 = (MR_Integer) 0;
    if ((MaybeExistConstraints_20 == (MR_Word) ((MR_Unsigned) 0U)))
      NumExtraArgWords_29 = (MR_Integer) 0;
    else
    {
      MR_Word ExistConstraints_30 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_20), (MR_Integer) 1));
      MR_Word Constraints_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_30, (MR_Integer) 1))));
      MR_Word UnconstrainedExistQTVars_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_30, (MR_Integer) 2))));
      MR_Integer NumTypeInfos_35;
      MR_Integer NumTypeClassInfos_36;

      mercury__list__length_2_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_1[3]), UnconstrainedExistQTVars_33, &NumTypeInfos_35);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Constraints_32, &NumTypeClassInfos_36);
      NumExtraArgWords_29 = (MR_Integer) ((MR_Unsigned) NumTypeInfos_35 + (MR_Unsigned) NumTypeClassInfos_36);
    }
    FirstCellWordNum_38 = (MR_Integer) ((MR_Unsigned) NumSecTagWords_28 + (MR_Unsigned) NumExtraArgWords_29);
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 0)));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 1))));
    Var_60 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 2))));
    packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 3)));
    Var_61 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 3))) & (MR_Integer) 1);
    Var_64 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 3))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_65 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 3))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    Var_66 = ((MR_String) ((MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 4))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 5))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 6))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 7))));
    {
      NoPackParams_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), NoPackParams_40, 0) = (MR_Box) (packed_args_0);
      MR_hl_field(MR_mktag(0), NoPackParams_40, 1) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), NoPackParams_40, 2) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), NoPackParams_40, 3) = (MR_Box) (((MR_Unsigned) (((MR_Box) (Var_61))) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 1)) | (((((MR_Unsigned) (((MR_Box) ((MR_Integer) 0))) << (MR_Integer) 2)) | (((((MR_Unsigned) (((MR_Box) (Var_64))) << (MR_Integer) 3)) | (((MR_Unsigned) (((MR_Box) (Var_65))) << (MR_Integer) 4))))))))));
      MR_hl_field(MR_mktag(0), NoPackParams_40, 4) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), NoPackParams_40, 5) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), NoPackParams_40, 6) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), NoPackParams_40, 7) = ((MR_Box) (Var_69));
    }
    Var_51 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0));
    hlds__du_type_layout__decide_complex_du_ctor_remote_args_loop_8_p_0(ModuleInfo_14, NoPackParams_40, Var_51, (MR_Integer) 0, FirstCellWordNum_38, (MR_Integer) 0, CtorArgs_23, &CtorArgRepnsBase_41);
    hlds__du_type_layout__decide_complex_du_ctor_remote_args_loop_8_p_0(ModuleInfo_14, Params_15, ComponentTypeMap_16, (MR_Integer) 0, FirstCellWordNum_38, (MR_Integer) 0, CtorArgs_23, &CtorArgRepnsPacked_42);
    WorthPacking_43 = hlds__du_type_layout__worth_arg_packing_2_f_0(CtorArgRepnsBase_41, CtorArgRepnsPacked_42);
    switch (WorthPacking_43) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *CtorArgRepns_24 = CtorArgRepnsBase_41;
        break;
      case (MR_Integer) 1:
        *CtorArgRepns_24 = CtorArgRepnsPacked_42;
        break;
    }
    packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 0)));
    packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 3)));
    MaybeInformPacking_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 7))));
    succeeded = (MaybeInformPacking_44 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_52 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_17);
      succeeded = (Var_52 == (MR_Integer) 1);
    }
    if (succeeded)
      hlds__du_type_layout__inform_about_any_suboptimal_packing_6_p_0(Params_15, CtorSymName_21, CtorContext_22, *CtorArgRepns_24, STATE_VARIABLE_Specs_0_45, STATE_VARIABLE_Specs_46);
    else
      *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_0_45;
  }
}

static void MR_CALL 
hlds__du_type_layout__inform_about_any_suboptimal_packing_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Pieces_4;

    hlds__du_type_layout__describe_sub_word_bin_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_Pieces_4);
    *wrapper_arg_2 = ((MR_Box) (conv3_Pieces_4));
  }
}

static void MR_CALL 
hlds__du_type_layout__inform_about_any_suboptimal_packing_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Bins_8;

    hlds__du_type_layout__insert_subword_into_first_fit_bin_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Bins_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_Bins_8));
  }
}

static void MR_CALL 
hlds__du_type_layout__inform_about_any_suboptimal_packing_6_p_0(
  MR_Word Params_7,
  MR_Word CtorSymName_8,
  MR_Word CtorContext_9,
  MR_Word CtorArgRepns_10,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  {
    MR_bool succeeded;
    MR_Word SubWords_12;
    MR_Integer ActualNumSubWords_13;
    MR_Word SortedSubWords_14;
    MR_Word RevSortedSubWords_15;
    MR_Integer BinSize_16;
    MR_Word SubWordBins_17;
    MR_Integer NumSubWordBins_18;
    MR_Word WorthWhile_19;
    MR_Word Var_33;
    MR_Unsigned packed_args_0;
    MR_Unsigned packed_args_1;
    MR_Box conv1_SubWordBins_17;

    hlds__du_type_layout__record_subword_args_and_count_their_words_6_p_0(CtorArgRepns_10, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &SubWords_12, (MR_Integer) 0, &ActualNumSubWords_13);
    mercury__list__sort_2_p_0((MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_0), SubWords_12, &SortedSubWords_14);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_0), SortedSubWords_14, &RevSortedSubWords_15);
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 0)));
    BinSize_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 2))));
    packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 3)));
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (hlds__du_type_layout__inform_about_any_suboptimal_packing_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (BinSize_16));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[9]), Var_33, RevSortedSubWords_15, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_SubWordBins_17);
    SubWordBins_17 = ((MR_Word) (conv1_SubWordBins_17));
    mercury__list__length_2_p_0((MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_bin_0), SubWordBins_17, &NumSubWordBins_18);
    hlds__du_type_layout__worth_arg_packing_compare_3_p_0(ActualNumSubWords_13, NumSubWordBins_18, &WorthWhile_19);
    switch (WorthWhile_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
        break;
      case (MR_Integer) 1:
        {
          MR_Integer CtorArity_20;
          MR_Word CtorSymNameArity_21;
          MR_Word StartPieces_22;
          MR_Word EndPieces_23;
          MR_Word SubWordBinPieceLists_24;
          MR_Word Pieces_25;
          MR_Word Msg_26;
          MR_Word Spec_27;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_61;
          MR_Word Var_64;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_String Var_71;
          MR_Word Var_74;
          MR_Word Var_77;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_String Var_84;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Word Var_94;
          MR_Word Var_95;
          MR_Word Var_99;
          MR_Box conv2_Var_71;

          mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), CtorArgRepns_10, &CtorArity_20);
          {
            CtorSymNameArity_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CtorSymNameArity_21, 0) = ((MR_Box) (CtorSymName_8));
            MR_hl_field(MR_mktag(0), CtorSymNameArity_21, 1) = ((MR_Box) (CtorArity_20));
          }
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (CtorSymNameArity_21));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[53])));
          }
          {
            StartPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), StartPieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[61])));
            MR_hl_field(MR_mktag(1), StartPieces_22, 1) = ((MR_Box) (Var_37));
          }
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (NumSubWordBins_18));
          }
          conv2_Var_71 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_bin_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SubWordBins_17, ((MR_Box) ((MR_String) "word")), ((MR_Box) ((MR_String) "words")));
          Var_71 = ((MR_String) (conv2_Var_71));
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (Var_71));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (ActualNumSubWords_13));
          }
          succeeded = (ActualNumSubWords_13 == (MR_Integer) 1);
          if (succeeded)
            Var_84 = (MR_String) "word";
          else
            Var_84 = (MR_String) "words";
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (Var_84));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[55])));
          }
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_82));
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[65])));
            MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
          }
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[64])));
            MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_77));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_74));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_69));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[63])));
            MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[62])));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
          }
          {
            EndPieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), EndPieces_23, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(1), EndPieces_23, 1) = ((MR_Box) (Var_61));
          }
          mercury__list__map_3_p_0((MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_bin_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[10]), (MR_Word) (&hlds__du_type_layout_scalar_common_2[11]), SubWordBins_17, &SubWordBinPieceLists_24);
          Var_93 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), SubWordBinPieceLists_24);
          Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_93, EndPieces_23);
          Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), StartPieces_22, Var_92);
          {
            Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (Pieces_25));
          }
          {
            Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
            MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Msg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Msg_26, 0) = ((MR_Box) (CtorContext_9));
            MR_hl_field(MR_mktag(0), Msg_26, 1) = ((MR_Box) (Var_94));
          }
          {
            Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Msg_26));
            MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_27, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(0), Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 24U));
            MR_hl_field(MR_mktag(0), Spec_27, 2) = ((MR_Box) (Var_99));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_29 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_27));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_28));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__record_subword_args_and_count_their_words_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CurArgNum_2,
  MR_Word STATE_VARIABLE_SubWords_0_3,
  MR_Word * STATE_VARIABLE_SubWords_4,
  MR_Integer STATE_VARIABLE_NumWords_0_5,
  MR_Integer * STATE_VARIABLE_NumWords_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NumWords_6 = STATE_VARIABLE_NumWords_0_5;
      *STATE_VARIABLE_SubWords_4 = STATE_VARIABLE_SubWords_0_3;
    }
    else
    {
      MR_Word ArgRepn_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgRepns_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MaybeFieldName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRepn_14, (MR_Integer) 0))));
      MR_Word PosWidth_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgRepn_14, (MR_Integer) 2))));
      MR_Integer STATE_VARIABLE_NumWords_51_51;
      MR_Word STATE_VARIABLE_SubWords_54_54;
      MR_Integer Var_55;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_CurArgNum_2;
      MR_Word next_value_of_STATE_VARIABLE_SubWords_0_3;
      MR_Integer next_value_of_STATE_VARIABLE_NumWords_0_5;

      switch (MR_tag((MR_Word) PosWidth_21)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            STATE_VARIABLE_SubWords_54_54 = STATE_VARIABLE_SubWords_0_3;
            STATE_VARIABLE_NumWords_51_51 = STATE_VARIABLE_NumWords_0_5;
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_SubWords_54_54 = STATE_VARIABLE_SubWords_0_3;
            STATE_VARIABLE_NumWords_51_51 = STATE_VARIABLE_NumWords_0_5;
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_SubWords_54_54 = STATE_VARIABLE_SubWords_0_3;
            STATE_VARIABLE_NumWords_51_51 = STATE_VARIABLE_NumWords_0_5;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), PosWidth_21, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgNumBits_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_21, (MR_Integer) 4))));
                MR_Integer NumBits_41;
                MR_Word Id_45;
                MR_Word SubWord_46;

                STATE_VARIABLE_NumWords_51_51 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumWords_0_5 + (MR_Unsigned) (MR_Integer) 1);
                NumBits_41 = (MR_Integer) (ArgNumBits_33);
                if ((MaybeFieldName_19 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    Id_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Id_45, 0) = ((MR_Box) (CurArgNum_2));
                  }
                else
                {
                  MR_Word SymName_42;
                  MR_String Name_44;
                  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldName_19, (MR_Integer) 0))));

                  SymName_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_53, (MR_Integer) 0))));
                  Name_44 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_42);
                  {
                    Id_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Id_45, 0) = ((MR_Box) (Name_44));
                  }
                }
                {
                  SubWord_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SubWord_46, 0) = ((MR_Box) (NumBits_41));
                  MR_hl_field(MR_mktag(0), SubWord_46, 1) = ((MR_Box) (Id_45));
                }
                {
                  STATE_VARIABLE_SubWords_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_SubWords_54_54, 0) = ((MR_Box) (SubWord_46));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_SubWords_54_54, 1) = ((MR_Box) (STATE_VARIABLE_SubWords_0_3));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgNumBits_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_21, (MR_Integer) 4))));
                MR_Integer NumBits_69;
                MR_Word Id_73;
                MR_Word SubWord_74;

                STATE_VARIABLE_NumWords_51_51 = STATE_VARIABLE_NumWords_0_5;
                NumBits_69 = (MR_Integer) (ArgNumBits_68);
                if ((MaybeFieldName_19 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    Id_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Id_73, 0) = ((MR_Box) (CurArgNum_2));
                  }
                else
                {
                  MR_Word SymName_60;
                  MR_String Name_62;
                  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldName_19, (MR_Integer) 0))));

                  SymName_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 0))));
                  Name_62 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_60);
                  {
                    Id_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Id_73, 0) = ((MR_Box) (Name_62));
                  }
                }
                {
                  SubWord_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SubWord_74, 0) = ((MR_Box) (NumBits_69));
                  MR_hl_field(MR_mktag(0), SubWord_74, 1) = ((MR_Box) (Id_73));
                }
                {
                  STATE_VARIABLE_SubWords_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_SubWords_54_54, 0) = ((MR_Box) (SubWord_74));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_SubWords_54_54, 1) = ((MR_Box) (STATE_VARIABLE_SubWords_0_3));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_SubWords_54_54 = STATE_VARIABLE_SubWords_0_3;
                STATE_VARIABLE_NumWords_51_51 = STATE_VARIABLE_NumWords_0_5;
              }
              break;
          }
          break;
      }
      Var_55 = (MR_Integer) ((MR_Unsigned) CurArgNum_2 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ArgRepns_15;
      next_value_of_CurArgNum_2 = Var_55;
      next_value_of_STATE_VARIABLE_SubWords_0_3 = STATE_VARIABLE_SubWords_54_54;
      next_value_of_STATE_VARIABLE_NumWords_0_5 = STATE_VARIABLE_NumWords_51_51;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      CurArgNum_2 = next_value_of_CurArgNum_2;
      STATE_VARIABLE_SubWords_0_3 = next_value_of_STATE_VARIABLE_SubWords_0_3;
      STATE_VARIABLE_NumWords_0_5 = next_value_of_STATE_VARIABLE_NumWords_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__worth_arg_packing_compare_3_p_0(
  MR_Integer UnpackedLength_4,
  MR_Integer PackedLength_5,
  MR_Word * Worthwhile_6)
{
  {
    MR_bool succeeded = (PackedLength_5 < UnpackedLength_4);

    if (succeeded)
    {
      MR_Integer Var_7;
      MR_Integer Var_8;

      succeeded = mercury__int__even_1_p_0(PackedLength_5);
      if (succeeded)
        Var_7 = PackedLength_5;
      else
      {
        Var_7 = (MR_Integer) ((MR_Unsigned) PackedLength_5 + (MR_Unsigned) (MR_Integer) 1);
      }
      succeeded = mercury__int__even_1_p_0(UnpackedLength_4);
      if (succeeded)
        Var_8 = UnpackedLength_4;
      else
      {
        Var_8 = (MR_Integer) ((MR_Unsigned) UnpackedLength_4 + (MR_Unsigned) (MR_Integer) 1);
      }
      succeeded = (Var_7 < Var_8);
      if (succeeded)
        *Worthwhile_6 = (MR_Integer) 1;
      else
        *Worthwhile_6 = (MR_Integer) 0;
    }
    else
      *Worthwhile_6 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__worth_arg_packing_2_f_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__int__f_less_or_equal_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_Word MR_CALL 
hlds__du_type_layout__worth_arg_packing_2_f_0(
  MR_Word UnpackedArgs_4,
  MR_Word PackedArgs_5)
{
  {
    MR_bool succeeded;
    MR_Word Worthwhile_6;
    MR_Integer UnpackedLength_7;
    MR_Integer PackedLength_8;
    MR_Word Var_11;

    hlds__du_type_layout__count_words_3_p_0(UnpackedArgs_4, (MR_Integer) 0, &UnpackedLength_7);
    hlds__du_type_layout__count_words_3_p_0(PackedArgs_5, (MR_Integer) 0, &PackedLength_8);
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (hlds__du_type_layout__worth_arg_packing_2_f_0_1));
      MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (PackedLength_8));
      MR_hl_field(MR_mktag(0), Var_11, 4) = ((MR_Box) (UnpackedLength_7));
    }
    mercury__require__expect_3_p_0(Var_11, (MR_String) "function \140hlds.du_type_layout.worth_arg_packing\'/2", (MR_String) "packed length exceeds unpacked length");
    succeeded = (PackedLength_8 < UnpackedLength_7);
    if (succeeded)
    {
      MR_Integer Var_17;
      MR_Integer Var_18;

      succeeded = mercury__int__even_1_p_0(PackedLength_8);
      if (succeeded)
        Var_17 = PackedLength_8;
      else
      {
        Var_17 = (MR_Integer) ((MR_Unsigned) PackedLength_8 + (MR_Unsigned) (MR_Integer) 1);
      }
      succeeded = mercury__int__even_1_p_0(UnpackedLength_7);
      if (succeeded)
        Var_18 = UnpackedLength_7;
      else
      {
        Var_18 = (MR_Integer) ((MR_Unsigned) UnpackedLength_7 + (MR_Unsigned) (MR_Integer) 1);
      }
      succeeded = (Var_17 < Var_18);
      if (succeeded)
        Worthwhile_6 = (MR_Integer) 1;
      else
        Worthwhile_6 = (MR_Integer) 0;
    }
    else
      Worthwhile_6 = (MR_Integer) 0;
    return Worthwhile_6;
  }
}

static void MR_CALL 
hlds__du_type_layout__count_words_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Count_0_2,
  MR_Integer * STATE_VARIABLE_Count_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Count_3 = STATE_VARIABLE_Count_0_2;
    else
    {
      MR_Word Arg_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgPosWidth_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 2))));
      MR_Integer STATE_VARIABLE_Count_34_34;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_Count_0_2;

      switch (MR_tag((MR_Word) ArgPosWidth_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Count_34_34 = STATE_VARIABLE_Count_0_2;
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_Count_34_34 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Count_0_2 + (MR_Unsigned) (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_Count_34_34 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Count_0_2 + (MR_Unsigned) (MR_Integer) 2);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_Count_34_34 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Count_0_2 + (MR_Unsigned) (MR_Integer) 1);
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Count_34_34 = STATE_VARIABLE_Count_0_2;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Count_34_34 = STATE_VARIABLE_Count_0_2;
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Args_8;
      next_value_of_STATE_VARIABLE_Count_0_2 = STATE_VARIABLE_Count_34_34;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Count_0_2 = next_value_of_STATE_VARIABLE_Count_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_ctor_remote_args_loop_8_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Params_2,
  MR_Word ComponentTypeMap_3,
  MR_Integer CurAOWordNum_4,
  MR_Integer CurCellWordNum_5,
  MR_Integer CurShift_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Arg_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 0))));
      MR_Word Args_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 1))));
      MR_Word ArgRepn_23;
      MR_Word ArgRepns_24;
      MR_Word ArgName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_21, (MR_Integer) 0))));
      MR_Word ArgType_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_21, (MR_Integer) 1))));
      MR_Word ArgContext_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_21, (MR_Integer) 2))));
      MR_Word Packable_28;

      succeeded = hlds__du_type_layout__may_pack_arg_type_4_p_0(Params_2, ComponentTypeMap_3, ArgType_26, &Packable_28);
      if (succeeded)
      {
        MR_Word ArgPosWidth_61;

        if ((Packable_28 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          succeeded = (CurShift_6 == (MR_Integer) 0);
          if (succeeded)
          {
            ArgPosWidth_61 = (MR_Word) ((MR_Unsigned) 0U);
            hlds__du_type_layout__decide_complex_du_ctor_remote_args_loop_8_p_0(ModuleInfo_1, Params_2, ComponentTypeMap_3, CurAOWordNum_4, CurCellWordNum_5, CurShift_6, Args_22, &ArgRepns_24);
          }
          else
          {
            MR_Word ArgOnlyOffset0_102 = (MR_Word) (CurAOWordNum_4);
            MR_Word CellOffset0_103 = (MR_Word) (CurCellWordNum_5);
            MR_Word ArgPosWidth0_248;
            MR_Word NextArgRepn_108;
            MR_Word NextArgPosWidth_109;

            {
              ArgPosWidth0_248 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ArgPosWidth0_248, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), ArgPosWidth0_248, 1) = ((MR_Box) (ArgOnlyOffset0_102));
              MR_hl_field(MR_mktag(3), ArgPosWidth0_248, 2) = ((MR_Box) (CellOffset0_103));
            }
            hlds__du_type_layout__decide_complex_du_ctor_remote_args_loop_8_p_0(ModuleInfo_1, Params_2, ComponentTypeMap_3, CurAOWordNum_4, CurCellWordNum_5, CurShift_6, Args_22, &ArgRepns_24);
            succeeded = ((MR_tag((MR_Word) ArgRepns_24)) == (MR_Integer) 1);
            if (succeeded)
            {
              NextArgRepn_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgRepns_24, (MR_Integer) 0))));
              NextArgPosWidth_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NextArgRepn_108, (MR_Integer) 2))));
              if (((((MR_tag((MR_Word) NextArgPosWidth_109)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), NextArgPosWidth_109, (MR_Integer) 0))) == (MR_Integer) 2))))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) NextArgPosWidth_109)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), NextArgPosWidth_109, (MR_Integer) 0))) == (MR_Integer) 1))))
                succeeded = MR_TRUE;
              else
                succeeded = MR_FALSE;
            }
            if (succeeded)
              ArgPosWidth_61 = ArgPosWidth0_248;
            else
              ArgPosWidth_61 = (MR_Word) ((MR_Unsigned) 0U);
          }
        }
        else
        {
          MR_Integer NumArgBits_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Packable_28, (MR_Integer) 0))));
          MR_Word FillKind_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Packable_28, (MR_Integer) 1))));
          MR_Word ArgNumBits_31 = (MR_Word) (NumArgBits_29);
          MR_Integer ArgMaskInt_32;
          MR_Word ArgMask_33;
          MR_Integer Var_82;
          MR_Word ArgPosWidth0_244;
          MR_Integer NextAOWordNum_245;
          MR_Integer NextCellWordNum_246;
          MR_Integer NextShift_247;
          MR_Integer Var_85;
          MR_Integer Var_86;
          MR_Unsigned packed_args_0;
          MR_Unsigned packed_args_1;

          Var_82 = mercury__int__pow_2_f_0((MR_Integer) 2, NumArgBits_29);
          ArgMaskInt_32 = (MR_Integer) ((MR_Unsigned) Var_82 - (MR_Unsigned) (MR_Integer) 1);
          ArgMask_33 = (MR_Word) (ArgMaskInt_32);
          Var_85 = (MR_Integer) ((MR_Unsigned) CurShift_6 + (MR_Unsigned) NumArgBits_29);
          packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 0)));
          Var_86 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 2))));
          packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 3)));
          succeeded = (Var_85 <= Var_86);
          if (succeeded)
          {
            MR_Word ArgOnlyOffset0_34 = (MR_Word) (CurAOWordNum_4);
            MR_Word CellOffset0_35 = (MR_Word) (CurCellWordNum_5);
            MR_Word Shift_36 = (MR_Word) (CurShift_6);

            succeeded = (CurShift_6 == (MR_Integer) 0);
            if (succeeded)
              {
                ArgPosWidth0_244 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ArgPosWidth0_244, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ArgPosWidth0_244, 1) = ((MR_Box) (ArgOnlyOffset0_34));
                MR_hl_field(MR_mktag(3), ArgPosWidth0_244, 2) = ((MR_Box) (CellOffset0_35));
                MR_hl_field(MR_mktag(3), ArgPosWidth0_244, 3) = ((MR_Box) (Shift_36));
                MR_hl_field(MR_mktag(3), ArgPosWidth0_244, 4) = ((MR_Box) (ArgNumBits_31));
                MR_hl_field(MR_mktag(3), ArgPosWidth0_244, 5) = ((MR_Box) (ArgMask_33));
                MR_hl_field(MR_mktag(3), ArgPosWidth0_244, 6) = ((MR_Box) (FillKind_30));
              }
            else
              {
                ArgPosWidth0_244 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ArgPosWidth0_244, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ArgPosWidth0_244, 1) = ((MR_Box) (ArgOnlyOffset0_34));
                MR_hl_field(MR_mktag(3), ArgPosWidth0_244, 2) = ((MR_Box) (CellOffset0_35));
                MR_hl_field(MR_mktag(3), ArgPosWidth0_244, 3) = ((MR_Box) (Shift_36));
                MR_hl_field(MR_mktag(3), ArgPosWidth0_244, 4) = ((MR_Box) (ArgNumBits_31));
                MR_hl_field(MR_mktag(3), ArgPosWidth0_244, 5) = ((MR_Box) (ArgMask_33));
                MR_hl_field(MR_mktag(3), ArgPosWidth0_244, 6) = ((MR_Box) (FillKind_30));
              }
            NextAOWordNum_245 = CurAOWordNum_4;
            NextCellWordNum_246 = CurCellWordNum_5;
            NextShift_247 = (MR_Integer) ((MR_Unsigned) CurShift_6 + (MR_Unsigned) NumArgBits_29);
          }
          else
          {
            MR_Integer PaddingIncrement_41;
            MR_Word ArgOnlyOffset0_99;
            MR_Word CellOffset0_100;

            hlds__du_type_layout__padding_increment_2_p_0(CurShift_6, &PaddingIncrement_41);
            NextAOWordNum_245 = (MR_Integer) ((MR_Unsigned) CurAOWordNum_4 + (MR_Unsigned) PaddingIncrement_41);
            NextCellWordNum_246 = (MR_Integer) ((MR_Unsigned) CurCellWordNum_5 + (MR_Unsigned) PaddingIncrement_41);
            ArgOnlyOffset0_99 = (MR_Word) (NextAOWordNum_245);
            CellOffset0_100 = (MR_Word) (NextCellWordNum_246);
            {
              ArgPosWidth0_244 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ArgPosWidth0_244, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), ArgPosWidth0_244, 1) = ((MR_Box) (ArgOnlyOffset0_99));
              MR_hl_field(MR_mktag(3), ArgPosWidth0_244, 2) = ((MR_Box) (CellOffset0_100));
              MR_hl_field(MR_mktag(3), ArgPosWidth0_244, 3) = ((MR_Box) (((MR_Box) ((MR_Integer) 0))));
              MR_hl_field(MR_mktag(3), ArgPosWidth0_244, 4) = ((MR_Box) (ArgNumBits_31));
              MR_hl_field(MR_mktag(3), ArgPosWidth0_244, 5) = ((MR_Box) (ArgMask_33));
              MR_hl_field(MR_mktag(3), ArgPosWidth0_244, 6) = ((MR_Box) (FillKind_30));
            }
            NextShift_247 = NumArgBits_29;
          }
          hlds__du_type_layout__decide_complex_du_ctor_remote_args_loop_8_p_0(ModuleInfo_1, Params_2, ComponentTypeMap_3, NextAOWordNum_245, NextCellWordNum_246, NextShift_247, Args_22, &ArgRepns_24);
          if (((((MR_tag((MR_Word) ArgPosWidth0_244)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ArgPosWidth0_244, (MR_Integer) 0))) == (MR_Integer) 0))))
          {
            MR_Word ArgOnlyOffset_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth0_244, (MR_Integer) 1))));
            MR_Word CellOffset_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth0_244, (MR_Integer) 2))));
            MR_Word NextArgRepn_50;
            MR_Word NextArgPosWidth_52;

            succeeded = ((MR_tag((MR_Word) ArgRepns_24)) == (MR_Integer) 1);
            if (succeeded)
            {
              NextArgRepn_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgRepns_24, (MR_Integer) 0))));
              NextArgPosWidth_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NextArgRepn_50, (MR_Integer) 2))));
              if (((((MR_tag((MR_Word) NextArgPosWidth_52)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), NextArgPosWidth_52, (MR_Integer) 0))) == (MR_Integer) 2))))
                succeeded = MR_TRUE;
              else
              if (((((MR_tag((MR_Word) NextArgPosWidth_52)) == (MR_Integer) 3)) && ((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), NextArgPosWidth_52, (MR_Integer) 0))) == (MR_Integer) 1))))
                succeeded = MR_TRUE;
              else
                succeeded = MR_FALSE;
            }
            if (succeeded)
              ArgPosWidth_61 = ArgPosWidth0_244;
            else
              {
                ArgPosWidth_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ArgPosWidth_61, 0) = ((MR_Box) (ArgOnlyOffset_44));
                MR_hl_field(MR_mktag(1), ArgPosWidth_61, 1) = ((MR_Box) (CellOffset_45));
              }
          }
          else
            ArgPosWidth_61 = ArgPosWidth0_244;
        }
        {
          ArgRepn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgRepn_23, 0) = ((MR_Box) (ArgName_25));
          MR_hl_field(MR_mktag(0), ArgRepn_23, 1) = ((MR_Box) (ArgType_26));
          MR_hl_field(MR_mktag(0), ArgRepn_23, 2) = ((MR_Box) (ArgPosWidth_61));
          MR_hl_field(MR_mktag(0), ArgRepn_23, 3) = ((MR_Box) (ArgContext_27));
        }
      }
      else
      {
        MR_Word DerefArgType_79;
        MR_Integer NextAOWordNum_114;
        MR_Integer NextCellWordNum_115;
        MR_Integer PaddingIncrement_117;
        MR_Integer AfterPaddingAOWordNum_118;
        MR_Integer AfterPaddingCellWordNum_119;
        MR_Word ArgOnlyOffset_120;
        MR_Word CellOffset_121;
        MR_Word ArgPosWidth_122;
        MR_Word DWKind_81;
        MR_Word BuiltinType_80;
        MR_Word Var_221;
        MR_Word Var_225;
        MR_Word Var_226;
        MR_Unsigned packed_args_2;
        MR_Unsigned packed_args_3;

        hlds__du_type_layout__padding_increment_2_p_0(CurShift_6, &PaddingIncrement_117);
        AfterPaddingAOWordNum_118 = (MR_Integer) ((MR_Unsigned) CurAOWordNum_4 + (MR_Unsigned) PaddingIncrement_117);
        AfterPaddingCellWordNum_119 = (MR_Integer) ((MR_Unsigned) CurCellWordNum_5 + (MR_Unsigned) PaddingIncrement_117);
        ArgOnlyOffset_120 = (MR_Word) (AfterPaddingAOWordNum_118);
        CellOffset_121 = (MR_Word) (AfterPaddingCellWordNum_119);
        hlds__du_type_layout__deref_eqv_types_3_p_0(ModuleInfo_1, ArgType_26, &DerefArgType_79);
        succeeded = ((MR_tag((MR_Word) DerefArgType_79)) == (MR_Integer) 2);
        if (succeeded)
        {
          BuiltinType_80 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DerefArgType_79, (MR_Integer) 0))));
          packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 0)));
          Var_226 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          Var_225 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 0))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 3)));
          Var_221 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 3))) & (MR_Integer) 1);
          if ((BuiltinType_80 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            succeeded = (Var_226 == (MR_Integer) 1);
            if (succeeded)
            {
              DWKind_81 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
          else
          if (((MR_tag((MR_Word) BuiltinType_80)) == (MR_Integer) 1))
          {
            MR_Word Var_243;

            succeeded = (Var_225 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = (Var_221 == (MR_Integer) 1);
              if (succeeded)
              {
                Var_243 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BuiltinType_80, (MR_Integer) 0))));
                switch (Var_243) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 8:
                    {
                      DWKind_81 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 9:
                    {
                      DWKind_81 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    break;
                }
              }
            }
          }
          else
            succeeded = MR_FALSE;
        }
        if (succeeded)
        {
          {
            ArgPosWidth_122 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ArgPosWidth_122, 0) = ((MR_Box) (ArgOnlyOffset_120));
            MR_hl_field(MR_mktag(2), ArgPosWidth_122, 1) = ((MR_Box) (CellOffset_121));
            MR_hl_field(MR_mktag(2), ArgPosWidth_122, 2) = ((MR_Box) (DWKind_81));
          }
          NextAOWordNum_114 = (MR_Integer) ((MR_Unsigned) AfterPaddingAOWordNum_118 + (MR_Unsigned) (MR_Integer) 2);
          NextCellWordNum_115 = (MR_Integer) ((MR_Unsigned) AfterPaddingCellWordNum_119 + (MR_Unsigned) (MR_Integer) 2);
        }
        else
        {
          {
            ArgPosWidth_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgPosWidth_122, 0) = ((MR_Box) (ArgOnlyOffset_120));
            MR_hl_field(MR_mktag(1), ArgPosWidth_122, 1) = ((MR_Box) (CellOffset_121));
          }
          NextAOWordNum_114 = (MR_Integer) ((MR_Unsigned) AfterPaddingAOWordNum_118 + (MR_Unsigned) (MR_Integer) 1);
          NextCellWordNum_115 = (MR_Integer) ((MR_Unsigned) AfterPaddingCellWordNum_119 + (MR_Unsigned) (MR_Integer) 1);
        }
        {
          ArgRepn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgRepn_23, 0) = ((MR_Box) (ArgName_25));
          MR_hl_field(MR_mktag(0), ArgRepn_23, 1) = ((MR_Box) (ArgType_26));
          MR_hl_field(MR_mktag(0), ArgRepn_23, 2) = ((MR_Box) (ArgPosWidth_122));
          MR_hl_field(MR_mktag(0), ArgRepn_23, 3) = ((MR_Box) (ArgContext_27));
        }
        hlds__du_type_layout__decide_complex_du_ctor_remote_args_loop_8_p_0(ModuleInfo_1, Params_2, ComponentTypeMap_3, NextAOWordNum_114, NextCellWordNum_115, (MR_Integer) 0, Args_22, &ArgRepns_24);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__8_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgRepn_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgRepns_24));
      }
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__deref_eqv_types_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type0_5,
  MR_Word * Type_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeBody0_7;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = check_hlds__type_util__type_to_type_defn_body_3_p_0(ModuleInfo_4, Type0_5, &TypeBody0_7);
    if (succeeded)
    {
      MR_Word Type1_8;

      succeeded = ((MR_tag((MR_Word) TypeBody0_7)) == (MR_Integer) 2);
      if (succeeded)
      {
        Type1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TypeBody0_7, (MR_Integer) 0))));
        {
          MR_Word next_value_of_Type0_5 = Type1_8;

          // direct tailcall eliminated
          ;
          Type0_5 = next_value_of_Type0_5;
          continue;
        }
      }
      else
        *Type_6 = Type0_5;
    }
    else
      *Type_6 = Type0_5;
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__padding_increment_2_p_0(
  MR_Integer CurShift_3,
  MR_Integer * PaddingIncrement_4)
{
  {
    MR_bool succeeded = (CurShift_3 == (MR_Integer) 0);

    if (succeeded)
      *PaddingIncrement_4 = (MR_Integer) 0;
    else
      *PaddingIncrement_4 = (MR_Integer) 1;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__may_pack_arg_type_4_p_0(
  MR_Word Params_5,
  MR_Word ComponentTypeMap_6,
  MR_Word ArgType_7,
  MR_Word * PackableKind_8)
{
  {
    MR_bool succeeded;
    MR_Word ArgTypeCtor_9;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Integer Var_118;
    MR_Unsigned packed_args_0;
    MR_Unsigned packed_args_1;
    MR_Word ComponentKind_10;
    MR_Word TypeCtorInfo_92_92;
    MR_Word TypeCtorInfo_93_93;
    MR_Box conv0_ComponentKind_10;

    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ArgType_7, &ArgTypeCtor_9);
    if (succeeded)
    {
      packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 0)));
      Var_118 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 2))));
      packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 3)));
      Var_116 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 3))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_115 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 3))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      TypeCtorInfo_92_92 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
      TypeCtorInfo_93_93 = (MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0);
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_92_92, TypeCtorInfo_93_93, ComponentTypeMap_6, ((MR_Box) (ArgTypeCtor_9)), &conv0_ComponentKind_10);
      if (succeeded)
      {
        ComponentKind_10 = ((MR_Word) (conv0_ComponentKind_10));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) ComponentKind_10)) == (MR_Integer) 1);
        if (succeeded)
        {
          *PackableKind_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ComponentKind_10, (MR_Integer) 0))));
          if ((*PackableKind_8 == (MR_Word) ((MR_Unsigned) 0U)))
            succeeded = (Var_115 == (MR_Integer) 1);
          else
          {
            MR_Integer NumArgBits_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), *PackableKind_8, (MR_Integer) 0))));

            succeeded = (NumArgBits_11 < Var_118);
          }
        }
      }
      else
      {
        MR_Word ArgIntType_13;
        MR_Word FillKind_14;
        MR_Word Var_17;
        MR_Integer NumArgBits_21;

        succeeded = (Var_116 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) ArgType_7)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgType_7, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgIntType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 0))));
              switch (ArgIntType_13) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 4:
                  {
                    NumArgBits_21 = (MR_Integer) 16;
                    FillKind_14 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Integer Var_20;
                    MR_Unsigned packed_args_2;
                    MR_Unsigned packed_args_3;

                    NumArgBits_21 = (MR_Integer) 32;
                    packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 0)));
                    Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 2))));
                    packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 3)));
                    succeeded = (NumArgBits_21 < Var_20);
                    if (succeeded)
                    {
                      FillKind_14 = (MR_Integer) 3;
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    NumArgBits_21 = (MR_Integer) 8;
                    FillKind_14 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    NumArgBits_21 = (MR_Integer) 16;
                    FillKind_14 = (MR_Integer) 5;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Integer Var_19;
                    MR_Unsigned packed_args_4;
                    MR_Unsigned packed_args_5;

                    NumArgBits_21 = (MR_Integer) 32;
                    packed_args_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 0)));
                    Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 2))));
                    packed_args_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 3)));
                    succeeded = (NumArgBits_21 < Var_19);
                    if (succeeded)
                    {
                      FillKind_14 = (MR_Integer) 6;
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    NumArgBits_21 = (MR_Integer) 8;
                    FillKind_14 = (MR_Integer) 4;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *PackableKind_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NumArgBits_21));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FillKind_14));
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

static MR_Word MR_CALL 
hlds__du_type_layout__add_dummy_repn_to_ctor_arg_1_f_0(
  MR_Word ConsArg_3)
{
  {
    MR_Word ConsArgRepn_4;
    MR_Word MaybeFieldName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsArg_3, (MR_Integer) 0))));
    MR_Word Type_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsArg_3, (MR_Integer) 1))));
    MR_Word Context_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsArg_3, (MR_Integer) 2))));

    {
      ConsArgRepn_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ConsArgRepn_4, 0) = ((MR_Box) (MaybeFieldName_5));
      MR_hl_field(MR_mktag(0), ConsArgRepn_4, 1) = ((MR_Box) (Type_6));
      MR_hl_field(MR_mktag(0), ConsArgRepn_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[26])));
      MR_hl_field(MR_mktag(0), ConsArgRepn_4, 3) = ((MR_Box) (Context_7));
    }
    return ConsArgRepn_4;
  }
}

static MR_Box MR_CALL 
hlds__du_type_layout__add_repn_to_foreign_enum_ctor_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_ConsArgRepn_4;

    conv1_ConsArgRepn_4 = hlds__du_type_layout__add_dummy_repn_to_ctor_arg_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_ConsArgRepn_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__du_type_layout__add_repn_to_foreign_enum_ctor_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word ConsTagMap_8,
  MR_Word Ctor_9,
  MR_Word * CtorRepn_10,
  MR_Word STATE_VARIABLE_CtorRepnMap_0_21,
  MR_Word * STATE_VARIABLE_CtorRepnMap_22)
{
  {
    MR_Integer Ordinal_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 0))));
    MR_Word MaybeExistConstraints_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 1))));
    MR_Word SymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 2))));
    MR_Word Args_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 3))));
    MR_Integer Arity_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 4))));
    MR_Word Context_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 5))));
    MR_Word ConsId_18;
    MR_Word ConsTag_19;
    MR_Word ArgRepns_20;
    MR_Box conv0_ConsTag_19;

    {
      ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ConsId_18, 1) = ((MR_Box) (SymName_14));
      MR_hl_field(MR_mktag(3), ConsId_18, 2) = ((MR_Box) (Arity_16));
      MR_hl_field(MR_mktag(3), ConsId_18, 3) = ((MR_Box) (TypeCtor_7));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), ConsTagMap_8, ((MR_Box) (ConsId_18)), &conv0_ConsTag_19);
    ConsTag_19 = ((MR_Word) (conv0_ConsTag_19));
    ArgRepns_20 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), (MR_Word) (&hlds__du_type_layout_scalar_common_2[10]), Args_15);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *CtorRepn_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ordinal_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeExistConstraints_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SymName_14));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ConsTag_19));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ArgRepns_20));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Arity_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Context_17));
    }
    hlds__hlds_data__insert_ctor_repn_into_map_3_p_0(*CtorRepn_10, STATE_VARIABLE_CtorRepnMap_0_21, STATE_VARIABLE_CtorRepnMap_22);
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__decide_if_simple_du_type_13_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__decide_if_simple_du_type__440__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__decide_if_simple_du_type_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__decide_if_simple_du_type__439__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_if_simple_du_type_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word Params_15,
  MR_Word TypeCtorToForeignEnumMap_16,
  MR_Word TypeCtorTypeDefn0_17,
  MR_Word * TypeCtorTypeDefn_18,
  MR_Word STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_43,
  MR_Word * STATE_VARIABLE_MustBeSingleFunctorTagTypes_44,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_45,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_46,
  MR_Word STATE_VARIABLE_NoTagTypeMap_0_47,
  MR_Word * STATE_VARIABLE_NoTagTypeMap_48,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorTypeDefn0_17, (MR_Integer) 0))));
    MR_Word TypeDefn0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorTypeDefn0_17, (MR_Integer) 1))));
    MR_Word Body0_25;

    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn0_24, &Body0_25);
    switch (MR_tag((MR_Word) Body0_25)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ForeignType_39 = (MR_Word) (MR_body((MR_Word) (Body0_25), (MR_Integer) 0));

          hlds__du_type_layout__add_foreign_if_word_aligned_ptr_8_p_0(ModuleInfo_14, Params_15, TypeCtor_23, ForeignType_39, STATE_VARIABLE_ComponentTypeMap_0_45, STATE_VARIABLE_ComponentTypeMap_46, STATE_VARIABLE_Specs_0_49, STATE_VARIABLE_Specs_50);
          *TypeCtorTypeDefn_18 = TypeCtorTypeDefn0_17;
          *STATE_VARIABLE_MustBeSingleFunctorTagTypes_44 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_43;
          *STATE_VARIABLE_NoTagTypeMap_48 = STATE_VARIABLE_NoTagTypeMap_0_47;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ctors_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_25, (MR_Integer) 0))));
          MR_Word MaybeCanonical_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_25, (MR_Integer) 1))));
          MR_Word MaybeRepn0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_25, (MR_Integer) 2))));
          MR_Word MaybeForeign_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_25, (MR_Integer) 3))));
          MR_Word Var_54;
          MR_Word Var_58;
          MR_Tuple ForeignEnumTagMap_33;
          MR_Word TCFE_30;
          MR_Word MaybeForeignEnumTagMap_32;
          MR_Box conv0_TCFE_30;

          {
            Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_3[4]));
            MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (hlds__du_type_layout__decide_if_simple_du_type_13_p_0_1));
            MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (MaybeRepn0_28));
            MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_54, (MR_String) "predicate \140hlds.du_type_layout.decide_if_simple_du_type\'/13", (MR_String) "MaybeRepn0 != no");
          {
            Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_3[5]));
            MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (hlds__du_type_layout__decide_if_simple_du_type_13_p_0_2));
            MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (Ctors_26));
            MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_not_3_p_0(Var_58, (MR_String) "predicate \140hlds.du_type_layout.decide_if_simple_du_type\'/13", (MR_String) "Ctors != []");
          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0), TypeCtorToForeignEnumMap_16, ((MR_Box) (TypeCtor_23)), &conv0_TCFE_30);
          if (succeeded)
          {
            TCFE_30 = ((MR_Word) (conv0_TCFE_30));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MaybeForeignEnumTagMap_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TCFE_30, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) MaybeForeignEnumTagMap_32)) == (MR_Integer) 1);
            if (succeeded)
              ForeignEnumTagMap_33 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeForeignEnumTagMap_32, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_49_93_95_48_10_p_0(Params_15, TypeCtor_23, TypeDefn0_24, Body0_25, Ctors_26, ForeignEnumTagMap_33, TypeCtorTypeDefn_18, STATE_VARIABLE_Specs_0_49, STATE_VARIABLE_Specs_50);
            *STATE_VARIABLE_NoTagTypeMap_48 = STATE_VARIABLE_NoTagTypeMap_0_47;
            *STATE_VARIABLE_ComponentTypeMap_46 = STATE_VARIABLE_ComponentTypeMap_0_45;
            *STATE_VARIABLE_MustBeSingleFunctorTagTypes_44 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_43;
          }
          else
          {
            succeeded = hlds__du_type_layout__ctors_are_all_constants_1_p_0(Ctors_26);
            if (succeeded)
            {
              hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_100_117_109_109_121_95_111_114_95_109_101_114_99_117_114_121_95_101_110_117_109_95_95_91_49_93_95_48_11_p_0(Params_15, TypeCtor_23, TypeDefn0_24, Body0_25, Ctors_26, TypeCtorTypeDefn_18, STATE_VARIABLE_ComponentTypeMap_0_45, STATE_VARIABLE_ComponentTypeMap_46, STATE_VARIABLE_Specs_0_49, STATE_VARIABLE_Specs_50);
              *STATE_VARIABLE_NoTagTypeMap_48 = STATE_VARIABLE_NoTagTypeMap_0_47;
              *STATE_VARIABLE_MustBeSingleFunctorTagTypes_44 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_43;
            }
            else
            {
              MR_Word SingleCtor_34;
              MR_Word Var_65;

              succeeded = ((MR_tag((MR_Word) Ctors_26)) == (MR_Integer) 1);
              if (succeeded)
              {
                SingleCtor_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ctors_26, (MR_Integer) 0))));
                Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ctors_26, (MR_Integer) 1))));
                succeeded = (Var_65 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                MR_Word SingleCtorSymName_36;
                MR_Word SingleArg_37;
                MR_Word SingleCtorContext_38;
                MR_Word Var_66;
                MR_Word Var_67;
                MR_Word Var_68;
                MR_Integer Var_69;
                MR_Word Var_70;
                MR_Unsigned packed_args_0;
                MR_Unsigned packed_args_1;

                succeeded = (MaybeCanonical_27 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleCtor_34, (MR_Integer) 1))));
                  SingleCtorSymName_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleCtor_34, (MR_Integer) 2))));
                  Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleCtor_34, (MR_Integer) 3))));
                  Var_69 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SingleCtor_34, (MR_Integer) 4))));
                  SingleCtorContext_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleCtor_34, (MR_Integer) 5))));
                  succeeded = (Var_66 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = (Var_69 == (MR_Integer) 1);
                    if (succeeded)
                    {
                      succeeded = ((MR_tag((MR_Word) Var_67)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        SingleArg_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_67, (MR_Integer) 0))));
                        Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_67, (MR_Integer) 1))));
                        succeeded = (Var_68 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 0)));
                          Var_70 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 0))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                          packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 3)));
                          succeeded = (Var_70 == (MR_Integer) 1);
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_110_111_116_97_103_95_95_91_49_93_95_48_13_p_0(Params_15, TypeCtor_23, TypeDefn0_24, Body0_25, SingleCtorSymName_36, SingleArg_37, SingleCtorContext_38, TypeCtorTypeDefn_18, STATE_VARIABLE_NoTagTypeMap_0_47, STATE_VARIABLE_NoTagTypeMap_48, STATE_VARIABLE_Specs_0_49, STATE_VARIABLE_Specs_50);
                  *STATE_VARIABLE_ComponentTypeMap_46 = STATE_VARIABLE_ComponentTypeMap_0_45;
                  *STATE_VARIABLE_MustBeSingleFunctorTagTypes_44 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_43;
                }
                else
                {
                  hlds__du_type_layout__add_du_if_single_ctor_is_word_aligned_ptr_8_p_0(Params_15, TypeCtor_23, TypeDefn0_24, MaybeForeign_29, STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_43, STATE_VARIABLE_MustBeSingleFunctorTagTypes_44, STATE_VARIABLE_ComponentTypeMap_0_45, STATE_VARIABLE_ComponentTypeMap_46);
                  *TypeCtorTypeDefn_18 = TypeCtorTypeDefn0_17;
                  *STATE_VARIABLE_Specs_50 = STATE_VARIABLE_Specs_0_49;
                  *STATE_VARIABLE_NoTagTypeMap_48 = STATE_VARIABLE_NoTagTypeMap_0_47;
                }
              }
              else
              {
                *TypeCtorTypeDefn_18 = TypeCtorTypeDefn0_17;
                *STATE_VARIABLE_Specs_50 = STATE_VARIABLE_Specs_0_49;
                *STATE_VARIABLE_NoTagTypeMap_48 = STATE_VARIABLE_NoTagTypeMap_0_47;
                *STATE_VARIABLE_ComponentTypeMap_46 = STATE_VARIABLE_ComponentTypeMap_0_45;
                *STATE_VARIABLE_MustBeSingleFunctorTagTypes_44 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_43;
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *TypeCtorTypeDefn_18 = TypeCtorTypeDefn0_17;
          *STATE_VARIABLE_MustBeSingleFunctorTagTypes_44 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_43;
          *STATE_VARIABLE_ComponentTypeMap_46 = STATE_VARIABLE_ComponentTypeMap_0_45;
          *STATE_VARIABLE_NoTagTypeMap_48 = STATE_VARIABLE_NoTagTypeMap_0_47;
          *STATE_VARIABLE_Specs_50 = STATE_VARIABLE_Specs_0_49;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Body0_25, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *TypeCtorTypeDefn_18 = TypeCtorTypeDefn0_17;
              *STATE_VARIABLE_MustBeSingleFunctorTagTypes_44 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_43;
              *STATE_VARIABLE_ComponentTypeMap_46 = STATE_VARIABLE_ComponentTypeMap_0_45;
              *STATE_VARIABLE_NoTagTypeMap_48 = STATE_VARIABLE_NoTagTypeMap_0_47;
              *STATE_VARIABLE_Specs_50 = STATE_VARIABLE_Specs_0_49;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word AbstractDetails_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Body0_25, (MR_Integer) 1))));

              hlds__du_type_layout__add_abstract_if_packable_4_p_0(TypeCtor_23, AbstractDetails_40, STATE_VARIABLE_ComponentTypeMap_0_45, STATE_VARIABLE_ComponentTypeMap_46);
              *TypeCtorTypeDefn_18 = TypeCtorTypeDefn0_17;
              *STATE_VARIABLE_MustBeSingleFunctorTagTypes_44 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_43;
              *STATE_VARIABLE_NoTagTypeMap_48 = STATE_VARIABLE_NoTagTypeMap_0_47;
              *STATE_VARIABLE_Specs_50 = STATE_VARIABLE_Specs_0_49;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_110_111_116_97_103_95_95_91_49_93_95_48_13_p_0(
  MR_Word Params_15,
  MR_Word TypeCtor_16,
  MR_Word TypeDefn0_17,
  MR_Word Body0_18,
  MR_Word SingleCtorSymName_19,
  MR_Word SingleArg_20,
  MR_Word SingleCtorContext_21,
  MR_Word * TypeCtorTypeDefn_22,
  MR_Word STATE_VARIABLE_NoTagTypeMap_0_48,
  MR_Word * STATE_VARIABLE_NoTagTypeMap_49,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51)
{
  {
    MR_bool succeeded;
    MR_Word MaybeSingleArgFieldName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleArg_20, (MR_Integer) 0))));
    MR_Word SingleArgType_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleArg_20, (MR_Integer) 1))));
    MR_Word SingleArgContext_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleArg_20, (MR_Integer) 2))));
    MR_Word SingleArgRepn_29;
    MR_Word SingleCtorRepn_30;
    MR_Word CtorRepnMap_31;
    MR_Word MaybeSingleArgName_33;
    MR_Word DuTypeKind_36;
    MR_Word DirectArgMap_37;
    MR_Word Repn_43;
    MR_Word Body_44;
    MR_Word TypeDefn_45;
    MR_Word TypeParams_46;
    MR_Word NoTagType_47;
    MR_Word Var_59;
    MR_Word Var_62;
    MR_Word Var_87;
    MR_Word Var_89;
    MR_Unsigned packed_args_0;
    MR_Unsigned packed_args_1;
    MR_Box conv0__DirectArgFunctors_38;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_108;

    {
      SingleArgRepn_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SingleArgRepn_29, 0) = ((MR_Box) (MaybeSingleArgFieldName_26));
      MR_hl_field(MR_mktag(0), SingleArgRepn_29, 1) = ((MR_Box) (SingleArgType_27));
      MR_hl_field(MR_mktag(0), SingleArgRepn_29, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[31])));
      MR_hl_field(MR_mktag(0), SingleArgRepn_29, 3) = ((MR_Box) (SingleArgContext_28));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (SingleArgRepn_29));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      SingleCtorRepn_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 2) = ((MR_Box) (SingleCtorSymName_19));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 3) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 4) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 5) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 6) = ((MR_Box) (SingleCtorContext_21));
    }
    Var_62 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[7]));
    hlds__hlds_data__insert_ctor_repn_into_map_3_p_0(SingleCtorRepn_30, Var_62, &CtorRepnMap_31);
    if ((MaybeSingleArgFieldName_26 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeSingleArgName_33 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word SingleArgSymName_34;
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSingleArgFieldName_26, (MR_Integer) 0))));
      MR_String Var_64;

      SingleArgSymName_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 0))));
      Var_64 = mdbcomp__sym_name__unqualify_name_1_f_0(SingleArgSymName_34);
      {
        MaybeSingleArgName_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeSingleArgName_33, 0) = ((MR_Box) (Var_64));
      }
    }
    {
      DuTypeKind_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), DuTypeKind_36, 0) = ((MR_Box) (SingleCtorSymName_19));
      MR_hl_field(MR_mktag(2), DuTypeKind_36, 1) = ((MR_Box) (SingleArgType_27));
      MR_hl_field(MR_mktag(2), DuTypeKind_36, 2) = ((MR_Box) (MaybeSingleArgName_33));
    }
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 0)));
    packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 3)));
    DirectArgMap_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 6))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[6]), DirectArgMap_37, ((MR_Box) (TypeCtor_16)), &conv0__DirectArgFunctors_38);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      MR_Word Pieces_39;
      MR_Word Msg_40;
      MR_Word Spec_41;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_84;

      Var_68 = hlds__du_type_layout__type_ctor_sna_1_f_0(TypeCtor_16);
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[33])));
      }
      {
        Pieces_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[59])));
        MR_hl_field(MR_mktag(1), Pieces_39, 1) = ((MR_Box) (Var_67));
      }
      Var_78 = mercury__term__context_init_0_f_0();
      {
        Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Pieces_39));
      }
      {
        Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_40, 0) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), Msg_40, 1) = ((MR_Box) (Var_79));
      }
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Msg_40));
        MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_41, 1) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(0), Spec_41, 2) = ((MR_Box) (Var_84));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_51 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_41));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_50));
      }
    }
    else
      *STATE_VARIABLE_Specs_51 = STATE_VARIABLE_Specs_0_50;
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (SingleCtorRepn_30));
      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Repn_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Repn_43, 0) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), Repn_43, 1) = ((MR_Box) (CtorRepnMap_31));
      MR_hl_field(MR_mktag(0), Repn_43, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Repn_43, 3) = ((MR_Box) (DuTypeKind_36));
      MR_hl_field(MR_mktag(0), Repn_43, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Repn_43));
    }
    Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_18, (MR_Integer) 0))));
    Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_18, (MR_Integer) 1))));
    Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_18, (MR_Integer) 3))));
    {
      Body_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Body_44, 0) = ((MR_Box) (Var_105));
      MR_hl_field(MR_mktag(1), Body_44, 1) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(1), Body_44, 2) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(1), Body_44, 3) = ((MR_Box) (Var_108));
    }
    hlds__hlds_data__set_type_defn_body_3_p_0(Body_44, TypeDefn0_17, &TypeDefn_45);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *TypeCtorTypeDefn_22 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeCtor_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeDefn_45));
    }
    hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn0_17, &TypeParams_46);
    {
      NoTagType_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), NoTagType_47, 0) = ((MR_Box) (TypeParams_46));
      MR_hl_field(MR_mktag(0), NoTagType_47, 1) = ((MR_Box) (SingleCtorSymName_19));
      MR_hl_field(MR_mktag(0), NoTagType_47, 2) = ((MR_Box) (SingleArgType_27));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0), ((MR_Box) (TypeCtor_16)), ((MR_Box) (NoTagType_47)), STATE_VARIABLE_NoTagTypeMap_0_48, STATE_VARIABLE_NoTagTypeMap_49);
  }
}

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_100_117_109_109_121_95_111_114_95_109_101_114_99_117_114_121_95_101_110_117_109_95_95_91_49_93_95_48_11_p_0(
  MR_Word Params_13,
  MR_Word TypeCtor_14,
  MR_Word TypeDefn0_15,
  MR_Word Body0_16,
  MR_Word Ctors_17,
  MR_Word * TypeCtorTypeDefn_18,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_49,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52)
{
  {
    MR_bool succeeded;
    MR_Word DuTypeKind_22;
    MR_Word CtorRepns_31;
    MR_Word CtorRepnMap_32;
    MR_Word ComponentKind_33;
    MR_Word DirectArgMap_39;
    MR_Word Repn_46;
    MR_Word Body_47;
    MR_Word TypeDefn_48;
    MR_Word Var_89;
    MR_Unsigned packed_args_0;
    MR_Unsigned packed_args_1;
    MR_Box conv0__DirectArgFunctors_40;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_108;

    if ((Ctors_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.decide_simple_type_dummy_or_mercury_enum\'/11", (MR_String) "no constant constructors");
        return;
      }
    }
    else
    {
      MR_Word Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ctors_17, (MR_Integer) 1))));
      MR_Word Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ctors_17, (MR_Integer) 0))));

      if ((Var_117 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer Ordinal_23;
        MR_Word SingleCtorSymName_25;
        MR_Word SingleCtorContext_28;
        MR_Word SingleCtorRepn_30;
        MR_Word Var_63;

        DuTypeKind_22 = (MR_Word) ((MR_Unsigned) 4U);
        Ordinal_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_118, (MR_Integer) 0))));
        SingleCtorSymName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_118, (MR_Integer) 2))));
        SingleCtorContext_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_118, (MR_Integer) 5))));
        {
          SingleCtorRepn_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 0) = ((MR_Box) (Ordinal_23));
          MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 2) = ((MR_Box) (SingleCtorSymName_25));
          MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 3) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 5) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 6) = ((MR_Box) (SingleCtorContext_28));
        }
        {
          CtorRepns_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CtorRepns_31, 0) = ((MR_Box) (SingleCtorRepn_30));
          MR_hl_field(MR_mktag(1), CtorRepns_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_63 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[7]));
        hlds__hlds_data__insert_ctor_repn_into_map_3_p_0(SingleCtorRepn_30, Var_63, &CtorRepnMap_32);
        ComponentKind_33 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_10[1]));
      }
      else
      {
        MR_Integer NextTag_37;
        MR_Integer NumBits_38;
        MR_Word Var_55;
        MR_Word Var_56;

        DuTypeKind_22 = (MR_Word) ((MR_Unsigned) 0U);
        Var_55 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[7]));
        hlds__du_type_layout__assign_tags_to_enum_constants_6_p_0(Ctors_17, &CtorRepns_31, (MR_Integer) 0, &NextTag_37, Var_55, &CtorRepnMap_32);
        mercury__int__log2_2_p_0(NextTag_37, &NumBits_38);
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (NumBits_38));
          MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          ComponentKind_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ComponentKind_33, 0) = ((MR_Box) (Var_56));
        }
      }
    }
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 0)));
    packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 3)));
    DirectArgMap_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 6))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[6]), DirectArgMap_39, ((MR_Box) (TypeCtor_14)), &conv0__DirectArgFunctors_40);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      MR_Word Pieces_41;
      MR_Word Msg_42;
      MR_Word Spec_43;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_86;

      Var_70 = hlds__du_type_layout__type_ctor_sna_1_f_0(TypeCtor_14);
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[30])));
      }
      {
        Pieces_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[60])));
        MR_hl_field(MR_mktag(1), Pieces_41, 1) = ((MR_Box) (Var_69));
      }
      Var_80 = mercury__term__context_init_0_f_0();
      {
        Var_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Pieces_41));
      }
      {
        Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_42, 0) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(0), Msg_42, 1) = ((MR_Box) (Var_81));
      }
      {
        Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Msg_42));
        MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_43, 1) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(0), Spec_43, 2) = ((MR_Box) (Var_86));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_52 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_43));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_51));
      }
    }
    else
      *STATE_VARIABLE_Specs_52 = STATE_VARIABLE_Specs_0_51;
    {
      Repn_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Repn_46, 0) = ((MR_Box) (CtorRepns_31));
      MR_hl_field(MR_mktag(0), Repn_46, 1) = ((MR_Box) (CtorRepnMap_32));
      MR_hl_field(MR_mktag(0), Repn_46, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Repn_46, 3) = ((MR_Box) (DuTypeKind_22));
      MR_hl_field(MR_mktag(0), Repn_46, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Repn_46));
    }
    Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_16, (MR_Integer) 0))));
    Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_16, (MR_Integer) 1))));
    Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_16, (MR_Integer) 3))));
    {
      Body_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Body_47, 0) = ((MR_Box) (Var_105));
      MR_hl_field(MR_mktag(1), Body_47, 1) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(1), Body_47, 2) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(1), Body_47, 3) = ((MR_Box) (Var_108));
    }
    hlds__hlds_data__set_type_defn_body_3_p_0(Body_47, TypeDefn0_15, &TypeDefn_48);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *TypeCtorTypeDefn_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeCtor_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeDefn_48));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (ComponentKind_33)), STATE_VARIABLE_ComponentTypeMap_0_49, STATE_VARIABLE_ComponentTypeMap_50);
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__assign_tags_to_enum_constants_6_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__647__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__assign_tags_to_enum_constants_6_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__646__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__assign_tags_to_enum_constants_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__644__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout__assign_tags_to_enum_constants_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Integer STATE_VARIABLE_CurTag_0_3,
  MR_Integer * STATE_VARIABLE_CurTag_4,
  MR_Word STATE_VARIABLE_CtorRepnMap_0_5,
  MR_Word * STATE_VARIABLE_CtorRepnMap_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_CtorRepnMap_6 = STATE_VARIABLE_CtorRepnMap_0_5;
      *STATE_VARIABLE_CurTag_4 = STATE_VARIABLE_CurTag_0_3;
    }
    else
    {
      MR_Word Ctor_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ctors_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word CtorRepn_15;
      MR_Word CtorRepns_16;
      MR_Integer Ordinal_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 0))));
      MR_Word MaybeExistConstraints_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 1))));
      MR_Word SymName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 2))));
      MR_Word Args_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 3))));
      MR_Integer Arity_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 4))));
      MR_Word Context_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 5))));
      MR_Word CtorTag_25;
      MR_Word Var_30;
      MR_Word Var_34;
      MR_Word Var_38;
      MR_Word Var_42;
      MR_Integer STATE_VARIABLE_CurTag_46_46;
      MR_Word STATE_VARIABLE_CtorRepnMap_48_48;

      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (hlds__du_type_layout__assign_tags_to_enum_constants_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (MaybeExistConstraints_20));
        MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_30, (MR_String) "predicate \140hlds.du_type_layout.assign_tags_to_enum_constants\'/6", (MR_String) "enum constant has existential constraints");
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_3[2]));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (hlds__du_type_layout__assign_tags_to_enum_constants_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (Args_22));
        MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_34, (MR_String) "predicate \140hlds.du_type_layout.assign_tags_to_enum_constants\'/6", (MR_String) "enum constant has arguments");
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_3[3]));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (hlds__du_type_layout__assign_tags_to_enum_constants_6_p_0_3));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Arity_23));
        MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_38, (MR_String) "predicate \140hlds.du_type_layout.assign_tags_to_enum_constants\'/6", (MR_String) "enum constant has nonzero arity");
      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (STATE_VARIABLE_CurTag_0_3));
      }
      {
        CtorTag_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CtorTag_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), CtorTag_25, 1) = ((MR_Box) (Var_42));
      }
      {
        CtorRepn_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CtorRepn_15, 0) = ((MR_Box) (Ordinal_19));
        MR_hl_field(MR_mktag(0), CtorRepn_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), CtorRepn_15, 2) = ((MR_Box) (SymName_21));
        MR_hl_field(MR_mktag(0), CtorRepn_15, 3) = ((MR_Box) (CtorTag_25));
        MR_hl_field(MR_mktag(0), CtorRepn_15, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), CtorRepn_15, 5) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), CtorRepn_15, 6) = ((MR_Box) (Context_24));
      }
      STATE_VARIABLE_CurTag_46_46 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurTag_0_3 + (MR_Unsigned) (MR_Integer) 1);
      hlds__hlds_data__insert_ctor_repn_into_map_3_p_0(CtorRepn_15, STATE_VARIABLE_CtorRepnMap_0_5, &STATE_VARIABLE_CtorRepnMap_48_48);
      hlds__du_type_layout__assign_tags_to_enum_constants_6_p_0(Ctors_14, &CtorRepns_16, STATE_VARIABLE_CurTag_46_46, STATE_VARIABLE_CurTag_4, STATE_VARIABLE_CtorRepnMap_48_48, STATE_VARIABLE_CtorRepnMap_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CtorRepn_15));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CtorRepns_16));
      }
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_49_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_CtorRepn_10;
    MR_Word conv1_STATE_VARIABLE_CtorRepnMap_22;

    hlds__du_type_layout__add_repn_to_foreign_enum_ctor_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_CtorRepn_10, ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_CtorRepnMap_22);
    *wrapper_arg_2 = ((MR_Box) (conv2_CtorRepn_10));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_CtorRepnMap_22));
  }
}

static void MR_CALL 
hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_49_93_95_48_10_p_0(
  MR_Word Params_12,
  MR_Word TypeCtor_13,
  MR_Word TypeDefn0_14,
  MR_Word Body0_15,
  MR_Word Ctors_16,
  MR_Tuple ForeignEnums_17,
  MR_Word * TypeCtorTypeDefn_18,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39)
{
  {
    MR_bool succeeded;
    MR_Word ForeignEnumTagMap_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnums_17, (MR_Integer) 0))));
    MR_Word Lang_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnums_17, (MR_Integer) 1))));
    MR_Word DuKind_22;
    MR_Word DirectArgMap_23;
    MR_Word CtorRepns_31;
    MR_Word CtorRepnMap_32;
    MR_Word Repn_35;
    MR_Word Body_36;
    MR_Word TypeDefn_37;
    MR_Word STATE_VARIABLE_Specs_64_64;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Unsigned packed_args_0;
    MR_Unsigned packed_args_1;
    MR_Box conv0__DirectArgFunctors_24;
    MR_Box conv3_CtorRepnMap_32;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_113;

    {
      DuKind_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), DuKind_22, 0) = ((MR_Box) (Lang_21));
    }
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 0)));
    packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 3)));
    DirectArgMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 6))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[6]), DirectArgMap_23, ((MR_Box) (TypeCtor_13)), &conv0__DirectArgFunctors_24);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      MR_Word DirectArgPieces_25;
      MR_Word DirectArgMsg_26;
      MR_Word DirectArgSpec_27;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_62;

      Var_43 = hlds__du_type_layout__type_ctor_sna_1_f_0(TypeCtor_13);
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[18])));
      }
      {
        DirectArgPieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DirectArgPieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[59])));
        MR_hl_field(MR_mktag(1), DirectArgPieces_25, 1) = ((MR_Box) (Var_42));
      }
      Var_56 = mercury__term__context_init_0_f_0();
      {
        Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (DirectArgPieces_25));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        DirectArgMsg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DirectArgMsg_26, 0) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(0), DirectArgMsg_26, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (DirectArgMsg_26));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        DirectArgSpec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DirectArgSpec_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), DirectArgSpec_27, 1) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(0), DirectArgSpec_27, 2) = ((MR_Box) (Var_62));
      }
      {
        STATE_VARIABLE_Specs_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_64_64, 0) = ((MR_Box) (DirectArgSpec_27));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_64_64, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_38));
      }
    }
    else
      STATE_VARIABLE_Specs_64_64 = STATE_VARIABLE_Specs_0_38;
    succeeded = hlds__du_type_layout__ctors_are_all_constants_1_p_0(Ctors_16);
    if (succeeded)
      *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_64_64;
    else
    {
      MR_Word NonEnumArgPieces_28;
      MR_Word NonEnumArgMsg_29;
      MR_Word NonEnumArgSpec_30;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_90;

      Var_68 = hlds__du_type_layout__type_ctor_sna_1_f_0(TypeCtor_13);
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[25])));
      }
      {
        NonEnumArgPieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NonEnumArgPieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[59])));
        MR_hl_field(MR_mktag(1), NonEnumArgPieces_28, 1) = ((MR_Box) (Var_67));
      }
      Var_84 = mercury__term__context_init_0_f_0();
      {
        Var_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_86, 0) = ((MR_Box) (NonEnumArgPieces_28));
      }
      {
        Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        NonEnumArgMsg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NonEnumArgMsg_29, 0) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(0), NonEnumArgMsg_29, 1) = ((MR_Box) (Var_85));
      }
      {
        Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (NonEnumArgMsg_29));
        MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        NonEnumArgSpec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NonEnumArgSpec_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), NonEnumArgSpec_30, 1) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(0), NonEnumArgSpec_30, 2) = ((MR_Box) (Var_90));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_39 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NonEnumArgSpec_30));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_64_64));
      }
    }
    {
      Var_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_93, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_93, 1) = ((MR_Box) (hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_49_93_95_48_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_93, 3) = ((MR_Box) (TypeCtor_13));
      MR_hl_field(MR_mktag(0), Var_93, 4) = ((MR_Box) (ForeignEnumTagMap_20));
    }
    Var_94 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[7]));
    mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&hlds__du_type_layout_scalar_common_2[4]), Var_93, Ctors_16, &CtorRepns_31, ((MR_Box) (Var_94)), &conv3_CtorRepnMap_32);
    CtorRepnMap_32 = ((MR_Word) (conv3_CtorRepnMap_32));
    {
      Repn_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Repn_35, 0) = ((MR_Box) (CtorRepns_31));
      MR_hl_field(MR_mktag(0), Repn_35, 1) = ((MR_Box) (CtorRepnMap_32));
      MR_hl_field(MR_mktag(0), Repn_35, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Repn_35, 3) = ((MR_Box) (DuKind_22));
      MR_hl_field(MR_mktag(0), Repn_35, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Repn_35));
    }
    Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_15, (MR_Integer) 0))));
    Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_15, (MR_Integer) 1))));
    Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_15, (MR_Integer) 3))));
    {
      Body_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Body_36, 0) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(1), Body_36, 1) = ((MR_Box) (Var_111));
      MR_hl_field(MR_mktag(1), Body_36, 2) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(1), Body_36, 3) = ((MR_Box) (Var_113));
    }
    hlds__hlds_data__set_type_defn_body_3_p_0(Body_36, TypeDefn0_14, &TypeDefn_37);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *TypeCtorTypeDefn_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeCtor_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeDefn_37));
    }
  }
}

static MR_Word MR_CALL 
hlds__du_type_layout__type_ctor_sna_1_f_0(
  MR_Word TypeCtor_3)
{
  {
    MR_Word Piece_4;
    MR_Word TypeCtorSymName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 0))));
    MR_Integer TypeCtorArity_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_3, (MR_Integer) 1))));
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (TypeCtorSymName_5));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (TypeCtorArity_6));
    }
    {
      Piece_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Piece_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Piece_4, 1) = ((MR_Box) (Var_7));
    }
    return Piece_4;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__ctors_are_all_constants_1_p_0(
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
      MR_Word Ctor_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ctors_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MaybeExistConstraints_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_2, (MR_Integer) 1))));
      MR_Word Args_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_2, (MR_Integer) 3))));
      MR_Integer Arity_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_2, (MR_Integer) 4))));
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = (MaybeExistConstraints_5 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (Args_7 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (Arity_8 == (MR_Integer) 0);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Ctors_3;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__add_abstract_if_packable_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word AbstractDetails_6,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_11,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_12)
{
  switch (MR_tag((MR_Word) AbstractDetails_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(AbstractDetails_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_ComponentTypeMap_12 = STATE_VARIABLE_ComponentTypeMap_0_11;
          break;
        case (MR_Integer) 1:
          {
            mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_10[1]))), STATE_VARIABLE_ComponentTypeMap_0_11, STATE_VARIABLE_ComponentTypeMap_12);
          }
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_ComponentTypeMap_12 = STATE_VARIABLE_ComponentTypeMap_0_11;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_ComponentTypeMap_12 = STATE_VARIABLE_ComponentTypeMap_0_11;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer NumBits_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), AbstractDetails_6, (MR_Integer) 0))));
        MR_Word ComponentKind_10;
        MR_Word Var_15;

        {
          Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (NumBits_8));
          MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          ComponentKind_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ComponentKind_10, 0) = ((MR_Box) (Var_15));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (ComponentKind_10)), STATE_VARIABLE_ComponentTypeMap_0_11, STATE_VARIABLE_ComponentTypeMap_12);
      }
      break;
  }
}

static void MR_CALL 
hlds__du_type_layout__add_foreign_if_word_aligned_ptr_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Params_10,
  MR_Word TypeCtor_11,
  MR_Word ForeignType_12,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_24,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_bool succeeded;
    MR_Word DirectArgMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 6))));
    MR_Word Globals_20;
    MR_Word Target_21;
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 0)));
    MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 3)));
    MR_Box conv0__DirectArgFunctors_16;
    MR_Word Assertions_22;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[6]), DirectArgMap_15, ((MR_Box) (TypeCtor_11)), &conv0__DirectArgFunctors_16);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      MR_Word DirectArgPieces_17;
      MR_Word DirectArgMsg_18;
      MR_Word DirectArgSpec_19;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_47;
      MR_Word TypeCtorSymName_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_11, (MR_Integer) 0))));
      MR_Integer TypeCtorArity_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_11, (MR_Integer) 1))));
      MR_Word Var_76;

      {
        Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (TypeCtorSymName_74));
        MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (TypeCtorArity_75));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
        MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (Var_76));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[37])));
      }
      {
        DirectArgPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DirectArgPieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[59])));
        MR_hl_field(MR_mktag(1), DirectArgPieces_17, 1) = ((MR_Box) (Var_30));
      }
      Var_41 = mercury__term__context_init_0_f_0();
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (DirectArgPieces_17));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        DirectArgMsg_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DirectArgMsg_18, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), DirectArgMsg_18, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (DirectArgMsg_18));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        DirectArgSpec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DirectArgSpec_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), DirectArgSpec_19, 1) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(0), DirectArgSpec_19, 2) = ((MR_Box) (Var_47));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_27 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DirectArgSpec_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
      }
    }
    else
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_9, &Globals_20);
    libs__globals__get_target_2_p_0(Globals_20, &Target_21);
    succeeded = hlds__du_type_layout__is_foreign_type_body_for_target_3_p_0(ForeignType_12, Target_21, &Assertions_22);
    if (succeeded)
    {
      succeeded = hlds__hlds_data__asserted_word_aligned_pointer_1_p_0(Assertions_22);
      if (succeeded)
      {
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__du_type_layout_scalar_common_10[0]))), STATE_VARIABLE_ComponentTypeMap_0_24, STATE_VARIABLE_ComponentTypeMap_25);
      }
      else
        *STATE_VARIABLE_ComponentTypeMap_25 = STATE_VARIABLE_ComponentTypeMap_0_24;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.add_foreign_if_word_aligned_ptr\'/8", (MR_String) "foreign type is not for this backend");
        return;
      }
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__add_du_if_single_ctor_is_word_aligned_ptr_8_p_0(
  MR_Word Params_9,
  MR_Word TypeCtor_10,
  MR_Word TypeDefn_11,
  MR_Word MaybeForeign_12,
  MR_Word STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_23,
  MR_Word * STATE_VARIABLE_MustBeSingleFunctorTagTypes_24,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_25,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_26)
{
  {
    MR_bool succeeded;
    MR_Integer TypeCtorArity_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_10, (MR_Integer) 1))));
    MR_Word DirectArgMap_17;
    MR_Unsigned packed_args_0;
    MR_Unsigned packed_args_1;
    MR_Word TypeCtorInfo_61_61;
    MR_Word TypeInfo_62_62;
    MR_Box conv0__DirectArgFunctors_18;

    succeeded = (TypeCtorArity_16 == (MR_Integer) 0);
    if (succeeded)
    {
      packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_9, (MR_Integer) 0)));
      packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_9, (MR_Integer) 3)));
      DirectArgMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_9, (MR_Integer) 6))));
      TypeCtorInfo_61_61 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
      TypeInfo_62_62 = (MR_Word) (&hlds__du_type_layout_scalar_common_1[6]);
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_61_61, TypeInfo_62_62, DirectArgMap_17, ((MR_Box) (TypeCtor_10)), &conv0__DirectArgFunctors_18);
      if (succeeded)
        succeeded = MR_TRUE;
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word Assertions_21;
      MR_Word Foreign_19;
      MR_Word Target_20;
      MR_Unsigned packed_args_2;
      MR_Unsigned packed_args_3;

      mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_10)), STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_23, STATE_VARIABLE_MustBeSingleFunctorTagTypes_24);
      succeeded = ((MR_tag((MR_Word) MaybeForeign_12)) == (MR_Integer) 1);
      if (succeeded)
      {
        Foreign_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeign_12, (MR_Integer) 0))));
        packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_9, (MR_Integer) 0)));
        Target_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_9, (MR_Integer) 0))) & (MR_Integer) 3);
        packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_9, (MR_Integer) 3)));
        succeeded = hlds__du_type_layout__is_foreign_type_body_for_target_3_p_0(Foreign_19, Target_20, &Assertions_21);
      }
      if (succeeded)
      {
        succeeded = hlds__hlds_data__asserted_word_aligned_pointer_1_p_0(Assertions_21);
        if (succeeded)
        {
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0), ((MR_Box) (TypeCtor_10)), ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__du_type_layout_scalar_common_10[0]))), STATE_VARIABLE_ComponentTypeMap_0_25, STATE_VARIABLE_ComponentTypeMap_26);
        }
        else
          *STATE_VARIABLE_ComponentTypeMap_26 = STATE_VARIABLE_ComponentTypeMap_0_25;
      }
      else
      {
        MR_Word Var_30;
        MR_Word ComponentKind_32;

        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (TypeDefn_11));
        }
        {
          ComponentKind_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ComponentKind_32, 0) = ((MR_Box) (Var_30));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0), ((MR_Box) (TypeCtor_10)), ((MR_Box) (ComponentKind_32)), STATE_VARIABLE_ComponentTypeMap_0_25, STATE_VARIABLE_ComponentTypeMap_26);
      }
    }
    else
    {
      *STATE_VARIABLE_ComponentTypeMap_26 = STATE_VARIABLE_ComponentTypeMap_0_25;
      *STATE_VARIABLE_MustBeSingleFunctorTagTypes_24 = STATE_VARIABLE_MustBeSingleFunctorTagTypes_0_23;
    }
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__is_foreign_type_body_for_target_3_p_0(
  MR_Word ForeignType_4,
  MR_Word Target_5,
  MR_Word * Assertions_6)
{
  {
    MR_bool succeeded;
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignType_4, (MR_Integer) 3))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignType_4, (MR_Integer) 2))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignType_4, (MR_Integer) 1))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignType_4, (MR_Integer) 0))));

    switch (Target_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_22;

          succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_38, (MR_Integer) 0))));
            *Assertions_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 2))));
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_18;

          succeeded = ((MR_tag((MR_Word) Var_36)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_36, (MR_Integer) 0))));
            *Assertions_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 2))));
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_16;

          succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 0))));
            *Assertions_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 2))));
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_20;

          succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 0))));
            *Assertions_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 2))));
            succeeded = MR_TRUE;
          }
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv22_HeadVar__4_4;

    hlds__add_special_pred__add_special_pred_decl_defns_for_type_maybe_lazily_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv22_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv22_HeadVar__4_4));
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv19_HeadVar__3_3;
    MR_Word conv18_HeadVar__5_5;

    hlds__add_foreign_enum__add_pragma_foreign_export_enum_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv19_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv18_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv19_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv18_HeadVar__5_5));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__decide_type_repns__243__1_1_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_3(
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
    MR_Word conv15_TypeCtorTypeDefn_14;
    MR_Word conv14_STATE_VARIABLE_MustBeSingleFunctorTagTypes_33;
    MR_Word conv13_STATE_VARIABLE_Specs_35;

    hlds__du_type_layout__decide_if_complex_du_type_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv15_TypeCtorTypeDefn_14, ((MR_Word) (wrapper_arg_3)), &conv14_STATE_VARIABLE_MustBeSingleFunctorTagTypes_33, ((MR_Word) (wrapper_arg_5)), &conv13_STATE_VARIABLE_Specs_35);
    *wrapper_arg_2 = ((MR_Box) (conv15_TypeCtorTypeDefn_14));
    *wrapper_arg_4 = ((MR_Box) (conv14_STATE_VARIABLE_MustBeSingleFunctorTagTypes_33));
    *wrapper_arg_6 = ((MR_Box) (conv13_STATE_VARIABLE_Specs_35));
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_TypeCtorTypeDefn_18;
    MR_Word conv7_STATE_VARIABLE_MustBeSingleFunctorTagTypes_44;
    MR_Word conv6_STATE_VARIABLE_ComponentTypeMap_46;
    MR_Word conv5_STATE_VARIABLE_NoTagTypeMap_48;
    MR_Word conv4_STATE_VARIABLE_Specs_50;

    hlds__du_type_layout__decide_if_simple_du_type_13_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv8_TypeCtorTypeDefn_18, ((MR_Word) (wrapper_arg_3)), &conv7_STATE_VARIABLE_MustBeSingleFunctorTagTypes_44, ((MR_Word) (wrapper_arg_5)), &conv6_STATE_VARIABLE_ComponentTypeMap_46, ((MR_Word) (wrapper_arg_7)), &conv5_STATE_VARIABLE_NoTagTypeMap_48, ((MR_Word) (wrapper_arg_9)), &conv4_STATE_VARIABLE_Specs_50);
    *wrapper_arg_2 = ((MR_Box) (conv8_TypeCtorTypeDefn_18));
    *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_MustBeSingleFunctorTagTypes_44));
    *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_ComponentTypeMap_46));
    *wrapper_arg_8 = ((MR_Box) (conv5_STATE_VARIABLE_NoTagTypeMap_48));
    *wrapper_arg_10 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_50));
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;
    MR_Word conv0_HeadVar__6_6;

    hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

void MR_CALL 
hlds__du_type_layout__decide_type_repns_4_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  {
    MR_bool succeeded;
    MR_Word TypeRepnDec_7;
    MR_Word TypeRepns_8;
    MR_Word DirectArgMap_9;
    MR_Word ForeignEnums_10;
    MR_Word ForeignExportEnums_11;
    MR_Word Globals_12;
    MR_Word Params_13;
    MR_Word TypeCtorToForeignEnumMap_15;
    MR_Word TypeTable0_16;
    MR_Word TypeCtorsTypeDefns0_17;
    MR_Word MustBeSingleFunctorTagTypes0_18;
    MR_Word ComponentTypeMap0_19;
    MR_Word NoTagTypeMap0_20;
    MR_Word TypeCtorsTypeDefns1_21;
    MR_Word MustBeSingleFunctorTagTypes1_22;
    MR_Word ComponentTypeMap_23;
    MR_Word NoTagTypeMap_24;
    MR_Word TypeCtorsTypeDefns_25;
    MR_Word MustBeSingleFunctorTagTypes_26;
    MR_Word TypeTable_27;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word STATE_VARIABLE_Specs_35_35;
    MR_Word Var_36;
    MR_Word STATE_VARIABLE_Specs_37_37;
    MR_Word STATE_VARIABLE_ModuleInfo_38_38;
    MR_Word Var_39;
    MR_Word STATE_VARIABLE_Specs_40_40;
    MR_Word Var_41;
    MR_Word STATE_VARIABLE_ModuleInfo_44_44;
    MR_Word STATE_VARIABLE_ModuleInfo_46_46;
    MR_Word _TypeRepnMap_14;
    MR_Box conv3_TypeCtorToForeignEnumMap_15;
    MR_Box conv2_STATE_VARIABLE_Specs_35_35;
    MR_Box conv12_MustBeSingleFunctorTagTypes1_22;
    MR_Box conv11_ComponentTypeMap_23;
    MR_Box conv10_NoTagTypeMap_24;
    MR_Box conv9_STATE_VARIABLE_Specs_37_37;
    MR_Box conv17_MustBeSingleFunctorTagTypes_26;
    MR_Box conv16_STATE_VARIABLE_Specs_40_40;
    MR_Box conv21_STATE_VARIABLE_ModuleInfo_46_46;
    MR_Box conv20_STATE_VARIABLE_Specs_31;
    MR_Box conv23_STATE_VARIABLE_ModuleInfo_29;

    hlds__hlds_module__module_info_get_type_repn_dec_2_p_0(STATE_VARIABLE_ModuleInfo_0_28, &TypeRepnDec_7);
    TypeRepns_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnDec_7, (MR_Integer) 0))));
    DirectArgMap_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnDec_7, (MR_Integer) 1))));
    ForeignEnums_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnDec_7, (MR_Integer) 2))));
    ForeignExportEnums_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnDec_7, (MR_Integer) 3))));
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_28, &Globals_12);
    hlds__du_type_layout__setup_decide_du_params_3_p_0(Globals_12, DirectArgMap_9, &Params_13);
    Var_32 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[0]));
    hlds__du_type_layout__build_type_repn_map_3_p_0(TypeRepns_8, Var_32, &_TypeRepnMap_14);
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (hlds__du_type_layout__decide_type_repns_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_28));
    }
    Var_34 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&hlds__du_type_layout_scalar_common_2[0]), (MR_Word) (&hlds__du_type_layout_scalar_common_1[1]), Var_33, ForeignEnums_10, ((MR_Box) (Var_34)), &conv3_TypeCtorToForeignEnumMap_15, ((MR_Box) (STATE_VARIABLE_Specs_0_30)), &conv2_STATE_VARIABLE_Specs_35_35);
    TypeCtorToForeignEnumMap_15 = ((MR_Word) (conv3_TypeCtorToForeignEnumMap_15));
    STATE_VARIABLE_Specs_35_35 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_35_35));
    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_28, &TypeTable0_16);
    hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable0_16, &TypeCtorsTypeDefns0_17);
    MustBeSingleFunctorTagTypes0_18 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0), &ComponentTypeMap0_19);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0), &NoTagTypeMap0_20);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (hlds__du_type_layout__decide_type_repns_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_28));
      MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (Params_13));
      MR_hl_field(MR_mktag(0), Var_36, 5) = ((MR_Box) (TypeCtorToForeignEnumMap_15));
    }
    mercury__list__map_foldl4_11_p_1((MR_Word) (&hlds__du_type_layout_scalar_common_2[1]), (MR_Word) (&hlds__du_type_layout_scalar_common_2[1]), (MR_Word) (&hlds__du_type_layout_scalar_common_1[2]), (MR_Word) (&hlds__du_type_layout_scalar_common_2[2]), (MR_Word) (&hlds__du_type_layout_scalar_common_2[3]), (MR_Word) (&hlds__du_type_layout_scalar_common_1[1]), Var_36, TypeCtorsTypeDefns0_17, &TypeCtorsTypeDefns1_21, ((MR_Box) (MustBeSingleFunctorTagTypes0_18)), &conv12_MustBeSingleFunctorTagTypes1_22, ((MR_Box) (ComponentTypeMap0_19)), &conv11_ComponentTypeMap_23, ((MR_Box) (NoTagTypeMap0_20)), &conv10_NoTagTypeMap_24, ((MR_Box) (STATE_VARIABLE_Specs_35_35)), &conv9_STATE_VARIABLE_Specs_37_37);
    MustBeSingleFunctorTagTypes1_22 = ((MR_Word) (conv12_MustBeSingleFunctorTagTypes1_22));
    ComponentTypeMap_23 = ((MR_Word) (conv11_ComponentTypeMap_23));
    NoTagTypeMap_24 = ((MR_Word) (conv10_NoTagTypeMap_24));
    STATE_VARIABLE_Specs_37_37 = ((MR_Word) (conv9_STATE_VARIABLE_Specs_37_37));
    hlds__hlds_module__module_info_set_no_tag_types_3_p_0(NoTagTypeMap_24, STATE_VARIABLE_ModuleInfo_0_28, &STATE_VARIABLE_ModuleInfo_38_38);
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (hlds__du_type_layout__decide_type_repns_4_p_0_3));
      MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_38_38));
      MR_hl_field(MR_mktag(0), Var_39, 4) = ((MR_Box) (Params_13));
      MR_hl_field(MR_mktag(0), Var_39, 5) = ((MR_Box) (ComponentTypeMap_23));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_2[1]), (MR_Word) (&hlds__du_type_layout_scalar_common_2[1]), (MR_Word) (&hlds__du_type_layout_scalar_common_1[2]), (MR_Word) (&hlds__du_type_layout_scalar_common_1[1]), Var_39, TypeCtorsTypeDefns1_21, &TypeCtorsTypeDefns_25, ((MR_Box) (MustBeSingleFunctorTagTypes1_22)), &conv17_MustBeSingleFunctorTagTypes_26, ((MR_Box) (STATE_VARIABLE_Specs_37_37)), &conv16_STATE_VARIABLE_Specs_40_40);
    MustBeSingleFunctorTagTypes_26 = ((MR_Word) (conv17_MustBeSingleFunctorTagTypes_26));
    STATE_VARIABLE_Specs_40_40 = ((MR_Word) (conv16_STATE_VARIABLE_Specs_40_40));
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (hlds__du_type_layout__decide_type_repns_4_p_0_4));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (MustBeSingleFunctorTagTypes_26));
    }
    mercury__require__expect_3_p_0(Var_41, (MR_String) "predicate \140hlds.du_type_layout.decide_type_repns\'/4", (MR_String) "some MustBeSingleFunctionTag type is not SingleFunctionTag");
    hlds__hlds_data__set_all_type_ctor_defns_2_p_0(TypeCtorsTypeDefns_25, &TypeTable_27);
    hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_27, STATE_VARIABLE_ModuleInfo_38_38, &STATE_VARIABLE_ModuleInfo_44_44);
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_item_foreign_export_enum_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[1]), (MR_Word) (&hlds__du_type_layout_scalar_common_2[8]), ForeignExportEnums_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_44_44)), &conv21_STATE_VARIABLE_ModuleInfo_46_46, ((MR_Box) (STATE_VARIABLE_Specs_40_40)), &conv20_STATE_VARIABLE_Specs_31);
    STATE_VARIABLE_ModuleInfo_46_46 = ((MR_Word) (conv21_STATE_VARIABLE_ModuleInfo_46_46));
    *STATE_VARIABLE_Specs_31 = ((MR_Word) (conv20_STATE_VARIABLE_Specs_31));
    hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__du_type_layout_scalar_common_2[9]), TypeTable_27, ((MR_Box) (STATE_VARIABLE_ModuleInfo_46_46)), &conv23_STATE_VARIABLE_ModuleInfo_29);
    *STATE_VARIABLE_ModuleInfo_29 = ((MR_Word) (conv23_STATE_VARIABLE_ModuleInfo_29));
  }
}

static void MR_CALL 
hlds__du_type_layout__build_type_repn_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_2,
  MR_Word * STATE_VARIABLE_TypeRepnMap_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TypeRepnMap_3 = STATE_VARIABLE_TypeRepnMap_0_2;
    else
    {
      MR_Word TypeRepn_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeRepns_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TypeCtorSymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepn_7, (MR_Integer) 0))));
      MR_Word ArgTVars_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepn_7, (MR_Integer) 1))));
      MR_Integer Arity_16;
      MR_Word TypeCtor_17;
      MR_Word STATE_VARIABLE_TypeRepnMap_20_20;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_TypeRepnMap_0_2;

      mercury__list__length_2_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_1[3]), ArgTVars_11, &Arity_16);
      {
        TypeCtor_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeCtor_17, 0) = ((MR_Box) (TypeCtorSymName_10));
        MR_hl_field(MR_mktag(0), TypeCtor_17, 1) = ((MR_Box) (Arity_16));
      }
      mercury__multi_map__add_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0), ((MR_Box) (TypeCtor_17)), ((MR_Box) (TypeRepn_7)), STATE_VARIABLE_TypeRepnMap_0_2, &STATE_VARIABLE_TypeRepnMap_20_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TypeRepns_8;
      next_value_of_STATE_VARIABLE_TypeRepnMap_0_2 = STATE_VARIABLE_TypeRepnMap_20_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TypeRepnMap_0_2 = next_value_of_STATE_VARIABLE_TypeRepnMap_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__setup_decide_du_params_3_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__setup_decide_du_params__365__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__setup_decide_du_params_3_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__setup_decide_du_params__363__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__setup_decide_du_params_3_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__setup_decide_du_params__361__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout__setup_decide_du_params_3_p_0(
  MR_Word Globals_4,
  MR_Word DirectArgMap_5,
  MR_Word * Params_6)
{
  {
    MR_bool succeeded;
    MR_Word Target_7;
    MR_Word AllowDoubleWords_8;
    MR_Word DoubleWordFloats_11;
    MR_Word DoubleWordInt64s_12;
    MR_Word UnboxedNoTagTypesBool_13;
    MR_Word UnboxedNoTagTypes_14;
    MR_Integer NumPtagBits_15;
    MR_Word MaybePrimaryTags_16;
    MR_Integer ArgPackBits_19;
    MR_Word AllowDoubleWordInts_20;
    MR_Word AllowPackingInts_21;
    MR_Word AllowPackingDummies_22;
    MR_Word AllowPackingLocalSegtags_23;
    MR_Word AllowPackingRemoteSegtags_24;
    MR_Word MaybeDirectArgs_27;
    MR_Word HighLevelData_28;
    MR_String Experiment_29;
    MR_Word InformPacking_30;
    MR_Word MaybeInformPacking_31;

    libs__globals__get_target_2_p_0(Globals_4, &Target_7);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 262, &AllowDoubleWords_8);
    switch (AllowDoubleWords_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          DoubleWordFloats_11 = (MR_Integer) 0;
          DoubleWordInt64s_12 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer TargetWordBits_9;
          MR_Word SinglePrecFloat_10;

          libs__globals__lookup_int_option_3_p_0(Globals_4, (MR_Integer) 255, &TargetWordBits_9);
          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 241, &SinglePrecFloat_10);
          succeeded = (TargetWordBits_9 == (MR_Integer) 32);
          if (succeeded)
            succeeded = (SinglePrecFloat_10 == (MR_Integer) 0);
          if (succeeded)
            DoubleWordFloats_11 = (MR_Integer) 1;
          else
            DoubleWordFloats_11 = (MR_Integer) 0;
          succeeded = (TargetWordBits_9 == (MR_Integer) 32);
          if (succeeded)
            DoubleWordInt64s_12 = (MR_Integer) 1;
          else
            DoubleWordInt64s_12 = (MR_Integer) 0;
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 260, &UnboxedNoTagTypesBool_13);
    switch (UnboxedNoTagTypesBool_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UnboxedNoTagTypes_14 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        UnboxedNoTagTypes_14 = (MR_Integer) 1;
        break;
    }
    libs__globals__lookup_int_option_3_p_0(Globals_4, (MR_Integer) 254, &NumPtagBits_15);
    succeeded = (NumPtagBits_15 == (MR_Integer) 0);
    if (succeeded)
      MaybePrimaryTags_16 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      succeeded = (NumPtagBits_15 == (MR_Integer) 2);
      if (succeeded)
      {
        {
          MaybePrimaryTags_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybePrimaryTags_16, 0) = ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(3)))));
          MR_hl_field(MR_mktag(1), MaybePrimaryTags_16, 1) = ((MR_Box) (NumPtagBits_15));
        }
      }
      else
      {
        succeeded = (NumPtagBits_15 == (MR_Integer) 3);
        if (succeeded)
        {
          {
            MaybePrimaryTags_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybePrimaryTags_16, 0) = ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(7)))));
            MR_hl_field(MR_mktag(1), MaybePrimaryTags_16, 1) = ((MR_Box) (NumPtagBits_15));
          }
        }
        else
        {
          MR_Integer MaxPtagInt_17;
          uint8_t MaxPtagUint8_18;
          MR_Integer Var_41;
          MR_Word Var_44;

          Var_41 = mercury__int__pow_2_f_0((MR_Integer) 2, NumPtagBits_15);
          MaxPtagInt_17 = (MR_Integer) ((MR_Unsigned) Var_41 - (MR_Unsigned) (MR_Integer) 1);
          MaxPtagUint8_18 = mercury__uint8__det_from_int_1_f_0(MaxPtagInt_17);
          Var_44 = (MR_Word) (MaxPtagUint8_18);
          {
            MaybePrimaryTags_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybePrimaryTags_16, 0) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(1), MaybePrimaryTags_16, 1) = ((MR_Box) (NumPtagBits_15));
          }
        }
      }
    }
    libs__globals__lookup_int_option_3_p_0(Globals_4, (MR_Integer) 261, &ArgPackBits_19);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 263, &AllowDoubleWordInts_20);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 265, &AllowPackingInts_21);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 264, &AllowPackingDummies_22);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 266, &AllowPackingLocalSegtags_23);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 267, &AllowPackingRemoteSegtags_24);
    switch (Target_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TermSizeWords_25;
          MR_Word TermSizeCells_26;

          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 229, &TermSizeWords_25);
          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 230, &TermSizeCells_26);
          succeeded = (TermSizeWords_25 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (TermSizeCells_26 == (MR_Integer) 0);
          if (succeeded)
            MaybeDirectArgs_27 = (MR_Integer) 1;
          else
            MaybeDirectArgs_27 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        MaybeDirectArgs_27 = (MR_Integer) 0;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 274, &HighLevelData_28);
    switch (HighLevelData_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_54;
          MR_Word Var_58;
          MR_Word Var_62;

          {
            Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (hlds__du_type_layout__setup_decide_du_params_3_p_0_1));
            MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (AllowDoubleWords_8));
            MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_54, (MR_String) "predicate \140hlds.du_type_layout.setup_decide_du_params\'/3", (MR_String) "AllowDoubleWords != no");
          {
            Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (hlds__du_type_layout__setup_decide_du_params_3_p_0_2));
            MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (AllowPackingInts_21));
            MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_58, (MR_String) "predicate \140hlds.du_type_layout.setup_decide_du_params\'/3", (MR_String) "AllowPackingInts != no");
          {
            Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (hlds__du_type_layout__setup_decide_du_params_3_p_0_3));
            MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (AllowPackingDummies_22));
            MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_62, (MR_String) "predicate \140hlds.du_type_layout.setup_decide_du_params\'/3", (MR_String) "AllowPackingDummies != no");
        }
        break;
    }
    libs__globals__lookup_string_option_3_p_0(Globals_4, (MR_Integer) 683, &Experiment_29);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 58, &InformPacking_30);
    switch (InformPacking_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeInformPacking_31 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        MaybeInformPacking_31 = (MR_Integer) 1;
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *Params_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) (((MR_Unsigned) (((MR_Box) (Target_7))) | (((((MR_Unsigned) (((MR_Box) (DoubleWordFloats_11))) << (MR_Integer) 2)) | (((((MR_Unsigned) (((MR_Box) (DoubleWordInt64s_12))) << (MR_Integer) 3)) | (((MR_Unsigned) (((MR_Box) (UnboxedNoTagTypes_14))) << (MR_Integer) 4))))))));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybePrimaryTags_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ArgPackBits_19));
      MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) (((MR_Unsigned) (((MR_Box) (AllowDoubleWordInts_20))) | (((((MR_Unsigned) (((MR_Box) (AllowPackingInts_21))) << (MR_Integer) 1)) | (((((MR_Unsigned) (((MR_Box) (AllowPackingDummies_22))) << (MR_Integer) 2)) | (((((MR_Unsigned) (((MR_Box) (AllowPackingLocalSegtags_23))) << (MR_Integer) 3)) | (((MR_Unsigned) (((MR_Box) (AllowPackingRemoteSegtags_24))) << (MR_Integer) 4))))))))));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Experiment_29));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MaybeDirectArgs_27));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (DirectArgMap_5));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (MaybeInformPacking_31));
    }
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____component_type_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____component_type_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____component_type_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____component_type_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____component_type_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____component_type_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____component_type_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____component_type_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____decide_du_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____decide_du_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____decide_du_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____decide_du_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____direct_arg_cond_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____direct_arg_cond_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____direct_arg_cond_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____direct_arg_cond_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____field_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____field_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____field_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____field_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_direct_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____maybe_direct_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_direct_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____maybe_direct_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_double_word_floats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____maybe_double_word_floats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_double_word_floats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____maybe_double_word_floats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_double_word_int64s_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____maybe_double_word_int64s_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_double_word_int64s_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____maybe_double_word_int64s_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_inform_about_packing_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____maybe_inform_about_packing_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_inform_about_packing_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____maybe_inform_about_packing_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_primary_tags_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____maybe_primary_tags_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_primary_tags_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____maybe_primary_tags_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_unboxed_no_tag_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____maybe_unboxed_no_tag_types_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_unboxed_no_tag_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____maybe_unboxed_no_tag_types_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____packable_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____packable_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____packable_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____packable_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____sub_word_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____sub_word_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____sub_word_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____sub_word_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____sub_word_bin_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____sub_word_bin_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____sub_word_bin_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____sub_word_bin_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____type_repn_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____type_repn_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____type_repn_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____type_repn_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____word_aligned_why_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____word_aligned_why_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____word_aligned_why_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____word_aligned_why_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__du_type_layout__init(void)
{
}

void mercury__hlds__du_type_layout__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_map_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_decide_du_params_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_direct_arg_cond_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_field_id_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_direct_args_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_double_word_floats_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_double_word_int64s_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_inform_about_packing_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_primary_tags_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_unboxed_no_tag_types_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_packable_kind_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_bin_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_type_repn_map_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_word_aligned_why_0);
}

void mercury__hlds__du_type_layout__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__du_type_layout__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.du_type_layout.
