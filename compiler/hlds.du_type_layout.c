/*
** Automatically generated from `du_type_layout.m'
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
#include "parse_tree.mih"
#include "recompilation.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.add_foreign_enum.mih"
#include "hlds.add_special_pred.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_VA_PseudoTypeInfo_Struct2 hlds__du_type_layout____vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__du_type_layout__type_ctor_info_component_type_kind_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_no_tag_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

static const MR_FA_TypeInfo_Struct1 hlds__du_type_layout__list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_arg_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_hlds__du_type_layout__type_ctor_info_sub_word_bin_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__du_type_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_constructor_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_args_locn_0_0;

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_args_locn_0_1;

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_args_locn_0[2];

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_args_locn_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_args_locn_0[2];

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

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_decide_du_params_0_0[17];

static const MR_ConstString hlds__du_type_layout__hlds__du_type_layout__field_names_decide_du_params_0_0[17];

static const MR_DuArgLocn hlds__du_type_layout__hlds__du_type_layout__field_locns_decide_du_params_0_0[17];

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

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_field_id_0_0;

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_field_id_0_1[2];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_field_id_0_1;

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_field_id_0_2[1];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_field_id_0_2;

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_field_id_0_0[1];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_field_id_0_1[1];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_field_id_0_2[1];

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_field_id_0[3];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_field_id_0[3];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_field_id_0[3];

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

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_for_developers_0_0;

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_for_developers_0_1;

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_for_developers_0[2];

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_for_developers_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_for_developers_0[2];

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

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_show_type_repns_0_0;

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_maybe_show_type_repns_0_1[2];

static const MR_DuArgLocn hlds__du_type_layout__hlds__du_type_layout__field_locns_maybe_show_type_repns_0_1[2];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_show_type_repns_0_1;

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_maybe_show_type_repns_0_0[1];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_maybe_show_type_repns_0_1[1];

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_maybe_show_type_repns_0[2];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_maybe_show_type_repns_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_show_type_repns_0[2];

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_tagword_args_0_0;

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_tagword_args_0_1;

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_tagword_args_0[2];

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_tagword_args_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_tagword_args_0[2];

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_treat_as_first_arg_0_0;

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_treat_as_first_arg_0_1;

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_treat_as_first_arg_0[2];

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_treat_as_first_arg_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_treat_as_first_arg_0[2];

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_unboxed_no_tag_types_0_0;

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_unboxed_no_tag_types_0_1;

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_unboxed_no_tag_types_0[2];

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_unboxed_no_tag_types_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_unboxed_no_tag_types_0[2];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_packable_kind_0_0;

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_packable_kind_0_1[2];

static const MR_DuArgLocn hlds__du_type_layout__hlds__du_type_layout__field_locns_packable_kind_0_1[2];

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_packable_kind_0_1;

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_packable_kind_0_0[1];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_packable_kind_0_1[1];

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_packable_kind_0[2];

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_packable_kind_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_packable_kind_0[2];

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_show_which_types_0_0;

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_show_which_types_0_1;

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_show_which_types_0[2];

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_show_which_types_0[2];

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_show_which_types_0[2];

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
hlds__du_type_layout__IntroducedFrom__pred__setup_decide_du_params__3200__1_2_p_0(
  MR_Word AllowPackingDummies_23,
  MR_Word HeadVar__2_75);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__setup_decide_du_params__3198__1_2_p_0(
  MR_Word AllowPackingInts_21,
  MR_Word HeadVar__2_71);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__setup_decide_du_params__3196__1_2_p_0(
  MR_Word AllowDoubleWords_8,
  MR_Word HeadVar__2_67);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__arg_word_desc__2942__1_2_p_0(
  MR_Integer CellOffsetInt_7,
  MR_Integer HeadVar__2_19);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__show_ptag__2897__1_2_p_0(
  uint8_t PtagUint8_7,
  uint8_t HeadVar__2_22);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__show_decisions_for_ctor_args__2828__1_2_p_0(
  MR_Word ArgsLocn_5,
  MR_Word HeadVar__2_122);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__show_decisions_for_ctor_args__2833__1_2_p_0(
  MR_Word ArgsLocn_5,
  MR_Word HeadVar__2_102);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__show_decisions_for_ctor__2762__1_2_p_0(
  MR_Word ArgsLocn_26,
  MR_Word HeadVar__2_146);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__is_direct_arg_ctor__1920__1_2_p_0(
  MR_Integer ConsArity_19,
  MR_Integer HeadVar__2_45);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_complex_du_type_ctor__965__1_2_p_0(
  MR_Word MaybeExistConstraints_26,
  MR_Word HeadVar__2_90);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_complex_du_type_ctor__994__1_2_p_0(
  MR_Word MaybeExistConstraints_26,
  MR_Word HeadVar__2_82);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_complex_du_type_ctor__1004__1_2_p_0(
  MR_Word CtorArgs_28,
  MR_Word HeadVar__2_76);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_complex_du_type_ctor__969__1_2_p_0(
  MR_Word MaybeExistConstraints_26,
  MR_Word HeadVar__2_86);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_complex_du_type_general__784__1_2_p_0(
  MR_Word UsesConstructors_19,
  MR_Word HeadVar__2_68);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__477__1_2_p_0(
  MR_Integer Arity_23,
  MR_Integer HeadVar__2_41);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__476__1_2_p_0(
  MR_Word Args_22,
  MR_Word HeadVar__2_37);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__474__1_2_p_0(
  MR_Word MaybeExistConstraints_20,
  MR_Word HeadVar__2_33);

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_if_simple_du_type__276__1_2_p_0(
  MR_Word MaybeRepn0_25,
  MR_Word HeadVar__2_55);

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
hlds__du_type_layout____Compare____show_which_types_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____show_which_types_0_0(
  MR_Word HeadVar__2_1,
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
hlds__du_type_layout____Compare____maybe_treat_as_first_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_treat_as_first_arg_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_tagword_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_tagword_args_0_0(
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
hlds__du_type_layout____Compare____maybe_for_developers_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_for_developers_0_0(
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
hlds__du_type_layout____Compare____maybe_show_type_repns_0_0(
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
hlds__du_type_layout____Unify____maybe_show_type_repns_0_0(
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
hlds__du_type_layout____Compare____args_locn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____args_locn_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
hlds__du_type_layout__show_decisions_for_ctor_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__du_type_layout__show_decisions_for_ctor_7_p_0(
  MR_Word Stream_8,
  MR_Word MaybePrimaryTags_9,
  MR_Word ForDevelopers_10,
  MR_String TypeCtorStr_11,
  MR_Word CtorRepn_12);

static MR_String MR_CALL 
hlds__du_type_layout__show_sectag_bits_4_f_0(
  MR_Word MaybePrimaryTags_6,
  MR_Word ArgsLocn_7,
  MR_Unsigned Sectag_8,
  MR_Word SectagBits_9);

static MR_bool MR_CALL 
hlds__du_type_layout__show_ptag_2_f_0_1(
  MR_Box closure_arg);

static MR_String MR_CALL 
hlds__du_type_layout__show_ptag_2_f_0(
  MR_Word MaybePrimaryTags_4,
  MR_Word Ptag_5);

static MR_bool MR_CALL 
hlds__du_type_layout__show_decisions_for_ctor_args_9_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__du_type_layout__show_decisions_for_ctor_args_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__du_type_layout__show_decisions_for_ctor_args_9_p_0(
  MR_Word Stream_1,
  MR_Word ForDevelopers_2,
  MR_String TypeCtorStr_3,
  MR_String CtorStr_4,
  MR_Word ArgsLocn_5,
  MR_Integer ArgNum_6,
  MR_Word HeadVar__7_7);

static MR_String MR_CALL 
hlds__du_type_layout__fill_kind_to_str_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
hlds__du_type_layout__arg_word_desc_2_f_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__du_type_layout__arg_word_desc_2_f_0_1(
  MR_Box closure_arg);

static MR_String MR_CALL 
hlds__du_type_layout__arg_word_desc_2_f_0(
  MR_Word ArgsLocn_4,
  MR_Word CellOffset_5);

static void MR_CALL 
hlds__du_type_layout__show_decisions_if_du_type_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__du_type_layout__show_decisions_if_du_type_7_p_0(
  MR_Word Stream_8,
  MR_Word MaybePrimaryTags_9,
  MR_Word ShowWhichTypes_10,
  MR_Word ForDevelopers_11,
  MR_Word TypeCtorTypeDefn_12);

static void MR_CALL 
hlds__du_type_layout__describe_sub_word_4_p_0(
  MR_Word SubWord_5,
  MR_Word * Pieces_6,
  MR_Integer STATE_VARIABLE_TotalNumBits_0_14,
  MR_Integer * STATE_VARIABLE_TotalNumBits_15);

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

static MR_bool MR_CALL 
hlds__du_type_layout__decide_complex_du_type_ctor_13_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__du_type_layout__decide_complex_du_type_ctor_13_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__du_type_layout__decide_complex_du_type_ctor_13_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__du_type_layout__decide_complex_du_type_ctor_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_type_ctor_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word Params_15,
  MR_Word ComponentTypeMap_16,
  MR_Word TypeCtor_17,
  MR_Word TypeStatus_18,
  MR_Word CtorTagMap_19,
  MR_Integer NumRemoteSectagBits_20,
  MR_Word Ctor_21,
  MR_Word * CtorRepn_22,
  MR_Word STATE_VARIABLE_MaybeTagwordArgs_0_67,
  MR_Word * STATE_VARIABLE_MaybeTagwordArgs_68,
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70);

static void MR_CALL 
hlds__du_type_layout__decide_if_complex_du_type_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Params_9,
  MR_Word ComponentTypeMap_10,
  MR_Word TypeCtorTypeDefn0_11,
  MR_Word * TypeCtorTypeDefn_12,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_type_general_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_type_general_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Box MR_CALL 
hlds__du_type_layout__decide_complex_du_type_general_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__du_type_layout__decide_complex_du_type_general_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__du_type_layout__decide_complex_du_type_general_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_type_general_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Params_11,
  MR_Word ComponentTypeMap_12,
  MR_Word TypeCtor_13,
  MR_Word TypeStatus_14,
  MR_Word Ctors_15,
  MR_Word * Repn_16,
  MR_Word STATE_VARIABLE_Specs_0_63,
  MR_Word * STATE_VARIABLE_Specs_64);

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
hlds__du_type_layout__assign_ctor_remote_args_tags_6_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Unsigned STATE_VARIABLE_CurData_0_3,
  MR_Unsigned * STATE_VARIABLE_CurData_4,
  MR_Word STATE_VARIABLE_CtorTagMap_0_5,
  MR_Word * STATE_VARIABLE_CtorTagMap_6);

static void MR_CALL 
hlds__du_type_layout__assign_unshared_then_shared_remote_args_tags_7_p_0(
  MR_Word TypeCtor_1,
  uint8_t MaxPtagUint8_2,
  uint8_t STATE_VARIABLE_CurPtagUint8_0_3,
  MR_Word HeadVar__4_4,
  MR_Unsigned * HeadVar__5_5,
  MR_Word STATE_VARIABLE_CtorTagMap_0_6,
  MR_Word * STATE_VARIABLE_CtorTagMap_7);

static void MR_CALL 
hlds__du_type_layout__assign_shared_remote_args_tags_7_p_0(
  MR_Word TypeCtor_1,
  MR_Word Ptag_2,
  MR_Word HeadVar__3_3,
  MR_Unsigned STATE_VARIABLE_CurRemoteSectag_0_4,
  MR_Unsigned * STATE_VARIABLE_CurRemoteSectag_5,
  MR_Word STATE_VARIABLE_CtorTagMap_0_6,
  MR_Word * STATE_VARIABLE_CtorTagMap_7);

static void MR_CALL 
hlds__du_type_layout__assign_tags_to_direct_arg_functors_9_p_0(
  MR_Word TypeCtor_1,
  uint8_t MaxPtagUint8_2,
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
  MR_Unsigned CurSectag_5,
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
  MR_Unsigned STATE_VARIABLE_CurSectag_0_6,
  MR_Unsigned * STATE_VARIABLE_CurSectag_7,
  MR_Word HeadVar__8_8,
  MR_Word STATE_VARIABLE_CtorTagMap_0_9,
  MR_Word * STATE_VARIABLE_CtorTagMap_10);

static MR_Word MR_CALL 
hlds__du_type_layout__target_uses_constructors_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__du_type_layout__set_remote_args_sectag_size_3_p_0(
  MR_Word SectagSize_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_type_single_ctor_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Params_10,
  MR_Word ComponentTypeMap_11,
  MR_Word TypeStatus_12,
  MR_Word SingleCtor_13,
  MR_Word * Repn_14,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36);

static MR_bool MR_CALL 
hlds__du_type_layout__ctor_has_all_packable_args_within_limit_5_p_0(
  MR_Word Params_6,
  MR_Word ComponentTypeMap_7,
  MR_Word Ctor_8,
  MR_Integer Limit_9,
  MR_Integer * NumBits_10);

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_ctor_local_args_5_p_0(
  MR_Word Params_6,
  MR_Word ComponentTypeMap_7,
  MR_Word LocalSectag_8,
  MR_Word CtorArgs_9,
  MR_Word * CtorArgRepns_10);

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_ctor_remote_args_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word Params_16,
  MR_Word ComponentTypeMap_17,
  MR_Word TypeStatus_18,
  MR_Integer NumRemoteSectagBits_19,
  MR_Word CtorTag_20,
  MR_Word MaybeExistConstraints_21,
  MR_Word CtorSymName_22,
  MR_Word CtorContext_23,
  MR_Word CtorArgs_24,
  MR_Word * CtorArgRepns_25,
  MR_Word * MaybeTagwordArgs_26,
  MR_Word STATE_VARIABLE_Specs_0_57,
  MR_Word * STATE_VARIABLE_Specs_58);

static void MR_CALL 
hlds__du_type_layout__find_initial_args_packable_within_limit_8_p_0(
  MR_Word Params_1,
  MR_Word ComponentTypeMap_2,
  MR_Integer Limit_3,
  MR_Integer STATE_VARIABLE_NumBits_0_4,
  MR_Integer * STATE_VARIABLE_NumBits_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8);

static void MR_CALL 
hlds__du_type_layout__inform_about_any_suboptimal_packing_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout__inform_about_any_suboptimal_packing_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__du_type_layout__inform_about_any_suboptimal_packing_7_p_0(
  MR_Word Params_8,
  MR_Word CtorSymName_9,
  MR_Word CtorContext_10,
  MR_Word MaybeSectagAsPseudoArg_11,
  MR_Word CtorArgRepns_12,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33);

static void MR_CALL 
hlds__du_type_layout__record_subword_args_and_count_their_words_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CurArgNum_2,
  MR_Word STATE_VARIABLE_SubWords_0_3,
  MR_Word * STATE_VARIABLE_SubWords_4,
  MR_Integer STATE_VARIABLE_NumWords_0_5,
  MR_Integer * STATE_VARIABLE_NumWords_6);

static void MR_CALL 
hlds__du_type_layout__decide_tagword_args_7_p_0(
  MR_Word Params_8,
  MR_Word ComponentTypeMap_9,
  MR_Word ArgOnlyOffset_10,
  MR_Word CellOffset_11,
  MR_Integer NumFixedBits_12,
  MR_Word CtorArgs_13,
  MR_Word * CtorArgRepns_14);

static void MR_CALL 
hlds__du_type_layout__pair_args_with_packable_4_p_0(
  MR_Word Params_1,
  MR_Word ComponentTypeMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_ctor_remote_args_loop_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Params_2,
  MR_Word ComponentTypeMap_3,
  MR_Integer CurAOWordNum_4,
  MR_Integer CurCellWordNum_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
hlds__du_type_layout__deref_eqv_types_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type0_5,
  MR_Word * Type_6);

static void MR_CALL 
hlds__du_type_layout__find_word_packable_args_8_p_0(
  MR_Word Params_1,
  MR_Word ComponentTypeMap_2,
  MR_Integer NumAvailBits_3,
  MR_Integer STATE_VARIABLE_NumUsedBits_0_4,
  MR_Integer * STATE_VARIABLE_NumUsedBits_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8);

static MR_bool MR_CALL 
hlds__du_type_layout__may_pack_arg_type_4_p_0(
  MR_Word Params_5,
  MR_Word ComponentTypeMap_6,
  MR_Word ArgType_7,
  MR_Word * PackableKind_8);

static void MR_CALL 
hlds__du_type_layout__decide_packed_arg_word_loop_7_p_0(
  MR_Word TreatAsFirst_1,
  MR_Word ArgOnlyOffset_2,
  MR_Word CellOffset_3,
  MR_Integer NumPrefixBits_4,
  MR_Integer * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7);

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
hlds__du_type_layout__decide_if_simple_du_type_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__du_type_layout__decide_if_simple_du_type_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Params_13,
  MR_Word TypeCtorToForeignEnumMap_14,
  MR_Word TypeCtorTypeDefn0_15,
  MR_Word * TypeCtorTypeDefn_16,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_43,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_44,
  MR_Word STATE_VARIABLE_NoTagTypeMap_0_45,
  MR_Word * STATE_VARIABLE_NoTagTypeMap_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48);

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
  MR_Word OoMCtors_17,
  MR_Word * TypeCtorTypeDefn_18,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_50,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_51,
  MR_Word STATE_VARIABLE_Specs_0_52,
  MR_Word * STATE_VARIABLE_Specs_53);

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
  MR_Word OoMCtors_16,
  MR_Tuple ForeignEnums_17,
  MR_Word * TypeCtorTypeDefn_18,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41);

static MR_Word MR_CALL 
hlds__du_type_layout__type_ctor_sna_1_f_0(
  MR_Word TypeCtor_3);

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
hlds__du_type_layout__add_du_if_single_ctor_is_word_aligned_ptr_6_p_0(
  MR_Word Params_7,
  MR_Word TypeCtor_8,
  MR_Word TypeDefn_9,
  MR_Word MaybeForeign_10,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_20,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_21);

static MR_bool MR_CALL 
hlds__du_type_layout__is_foreign_type_body_for_target_3_p_0(
  MR_Word ForeignType_4,
  MR_Word Target_5,
  MR_Word * Assertions_6);

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

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

static void MR_CALL 
hlds__du_type_layout__build_type_repn_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_TypeRepnMap_0_2,
  MR_Word * STATE_VARIABLE_TypeRepnMap_3);

static void MR_CALL 
hlds__du_type_layout__add_special_pred_decl_defns_for_types_maybe_lazily_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____args_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____args_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

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
hlds__du_type_layout____Unify____maybe_for_developers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_for_developers_0_0_10001(
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
hlds__du_type_layout____Unify____maybe_show_type_repns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_show_type_repns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_tagword_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_tagword_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_treat_as_first_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_treat_as_first_arg_0_0_10001(
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
hlds__du_type_layout____Unify____show_which_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__du_type_layout____Compare____show_which_types_0_0_10001(
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


static /* final */ const MR_Box hlds__du_type_layout_scalar_common_1[73][2];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_2[1][4];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_3[16][3];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_4[10][5];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_5[2][9];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_6[1][14];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_7[4][10];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_8[1][8];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_9[3][1];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_10[2][7];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_12[2][6];

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_13[1][16];


/* sealed */ struct hlds__du_type_layout__vector_common_type_11_0_s {
  const MR_Word hlds__du_type_layout__vector_common_type_11_0__vct_11_f_0;
};

static /* final */ const struct hlds__du_type_layout__vector_common_type_11_0_s hlds__du_type_layout_vector_common_11[4];

/* sealed */ struct hlds__du_type_layout__vector_common_type_14_0_s {
  const MR_String hlds__du_type_layout__vector_common_type_14_0__vct_14_f_0;
};

static /* final */ const struct hlds__du_type_layout__vector_common_type_14_0_s hlds__du_type_layout_vector_common_14[8];



static /* final */ const MR_Box hlds__du_type_layout_scalar_common_1[73][2] = {
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
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_du_type_repn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_bin_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_0))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration and a direct_arg specification."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has both a"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but it has function symbols whose arity is not zero."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[10])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration,"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has a"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) -3)))),
    ((MR_Box) (((MR_Box) ((MR_Integer) -3))))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "yet it has a direct_arg specification."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[10])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "have arity zero,"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) 0)))),
    ((MR_Box) (((MR_Box) ((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is a no_tag type,"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[26])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but it also has a direct_arg specification."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[10])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has a foreign language representation on this backend,"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) (UINT8_C(0))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to its sole argument."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[10])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot be represented as a direct pointer"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not affect the effectiveness of the packing.)"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[10])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(The position of the word sized arguments"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "that would allow better packing."))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which take up less than one word each"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Here is one arrangement for the arguments"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[48])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "could be packed more tightly."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[10])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "One word containing the following arguments:"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[10])))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: all the function symbols of"))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The arguments of the constructor"))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This arrangement of the sub-word-sized arguments"))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "would take"))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "whereas their current arrangement takes"))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_Unsigned) 11U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "These total"))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "- the argument named"))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "- the current"))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "argument,"))
  },
  /* row 71 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "- the distinguishing tag"))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "at the start of the memory cell,"))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_3[16][3] = {
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
    ((MR_Box) (&hlds__du_type_layout_scalar_common_1[5]))
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
    ((MR_Box) (&hlds__du_type_layout_scalar_common_1[4]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__du_type_layout_scalar_common_1[0]))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&hlds__du_type_layout_scalar_common_1[36]))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__du_type_layout_scalar_common_8[0])),
    ((MR_Box) (hlds__du_type_layout__decide_type_repns_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__du_type_layout_scalar_common_4[5])),
    ((MR_Box) (hlds__du_type_layout__add_repn_to_foreign_enum_ctor_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&hlds__du_type_layout_scalar_common_4[6])),
    ((MR_Box) (hlds__du_type_layout__inform_about_any_suboptimal_packing_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&hlds__du_type_layout_scalar_common_12[0])),
    ((MR_Box) (hlds__du_type_layout__compute_local_packable_functors_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&hlds__du_type_layout_scalar_common_4[7])),
    ((MR_Box) (hlds__du_type_layout__decide_complex_du_type_general_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&hlds__du_type_layout_scalar_common_12[1])),
    ((MR_Box) (hlds__du_type_layout__decide_complex_du_type_general_9_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&hlds__du_type_layout_scalar_common_10[1])),
    ((MR_Box) (hlds__du_type_layout__describe_sub_word_bin_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_4[10][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_cons_exist_constraints_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_constructor_arg_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__du_type_layout__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0)),
    ((MR_Box) (&hlds__du_type_layout__maybe__pti_maybe_1__plain_hlds__hlds_data__type_ctor_info_du_type_repn_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_bin_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_args_locn_0)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_args_locn_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint8_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint8_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_5[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__du_type_layout____vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_6[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_decide_du_params_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0)),
    ((MR_Box) (&hlds__du_type_layout__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__du_type_layout__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__du_type_layout__type_ctor_info_component_type_kind_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__du_type_layout__type_ctor_info_component_type_kind_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_no_tag_type_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_no_tag_type_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_7[4][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_decide_du_params_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__du_type_layout__type_ctor_info_component_type_kind_0)),
    ((MR_Box) (&hlds__du_type_layout__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__du_type_layout__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_primary_tags_0)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_show_which_types_0)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_for_developers_0)),
    ((MR_Box) (&hlds__du_type_layout__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__du_type_layout__type_ctor_info_component_type_kind_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_type_status_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_primary_tags_0)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_for_developers_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_8[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_9[3][1] = {
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
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_10[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_hlds__du_type_layout__type_ctor_info_sub_word_bin_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_hlds__du_type_layout__type_ctor_info_sub_word_bin_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_12[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__du_type_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__du_type_layout__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_one_or_more_1hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
};

static /* final */ const MR_Box hlds__du_type_layout_scalar_common_13[1][16] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_decide_du_params_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__du_type_layout__type_ctor_info_component_type_kind_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_type_status_0)),
    ((MR_Box) (&hlds__du_type_layout__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_tagword_args_0)),
    ((MR_Box) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_tagword_args_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__du_type_layout__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};


static /* final */ const struct hlds__du_type_layout__vector_common_type_11_0_s hlds__du_type_layout_vector_common_11[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 0 },
};

static /* final */ const struct hlds__du_type_layout__vector_common_type_14_0_s hlds__du_type_layout_vector_common_14[8] = {
  /* row 0 */   {     (MR_String) "enum" },
  /* row 1 */   {     (MR_String) "int8" },
  /* row 2 */   {     (MR_String) "int16" },
  /* row 3 */   {     (MR_String) "int32" },
  /* row 4 */   {     (MR_String) "uint8" },
  /* row 5 */   {     (MR_String) "uint16" },
  /* row 6 */   {     (MR_String) "uint32" },
  /* row 7 */   {     (MR_String) "char21" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_VA_PseudoTypeInfo_Struct2 hlds__du_type_layout____vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

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

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_args_locn_0_0 = {
  (MR_String) "args_local",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_args_locn_0_1 = {
  (MR_String) "args_remote",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_args_locn_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_args_locn_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_args_locn_0_1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_args_locn_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_args_locn_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_args_locn_0_1
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_args_locn_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_args_locn_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__du_type_layout____Unify____args_locn_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____args_locn_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "args_locn",
  {     hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_args_locn_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_args_locn_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_args_locn_0
};

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_component_type_kind_0_0[1] = {
  (MR_PseudoTypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_packable_kind_0)
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_component_type_kind_0_0 = {
  (MR_String) "packable",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
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
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
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
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(2),
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
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_component_type_kind_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_component_type_kind_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
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
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____component_type_kind_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____component_type_kind_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "component_type_kind",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_component_type_kind_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_component_type_kind_0 },
  (MR_Integer) 3,
  UINT16_C(4),
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__du_type_layout____Unify____component_type_map_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____component_type_map_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "component_type_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__du_type_layout__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__du_type_layout__type_ctor_info_component_type_kind_0) },
  (MR_Integer) -1,
  UINT16_C(0),
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

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_decide_du_params_0_0[17] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_primary_tags_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0),
  (MR_PseudoTypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_double_word_floats_0),
  (MR_PseudoTypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_double_word_int64s_0),
  (MR_PseudoTypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_unboxed_no_tag_types_0),
  (MR_PseudoTypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_inform_about_packing_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_direct_args_0),
  (MR_PseudoTypeInfo) (&hlds__du_type_layout__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0),
  (MR_PseudoTypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_show_type_repns_0)
};

static const MR_ConstString hlds__du_type_layout__hlds__du_type_layout__field_names_decide_du_params_0_0[17] = {
  (MR_String) "ddp_arg_pack_bits",
  (MR_String) "ddp_maybe_primary_tags",
  (MR_String) "ddp_target",
  (MR_String) "ddp_double_word_floats",
  (MR_String) "ddp_double_word_int64s",
  (MR_String) "ddp_unboxed_no_tag_types",
  (MR_String) "ddp_inform_suboptimal_pack",
  (MR_String) "ddp_allow_double_word_ints",
  (MR_String) "ddp_allow_packing_ints",
  (MR_String) "ddp_allow_packing_chars",
  (MR_String) "ddp_allow_packing_dummies",
  (MR_String) "ddp_allow_packing_local_sectags",
  (MR_String) "ddp_allow_packing_remote_sectags",
  (MR_String) "ddp_allow_packing_mini_types",
  (MR_String) "ddp_maybe_direct_args",
  (MR_String) "ddp_direct_arg_map",
  (MR_String) "ddp_maybe_show_type_repns"
};

static const MR_DuArgLocn hlds__du_type_layout__hlds__du_type_layout__field_locns_decide_du_params_0_0[17] = {
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
    (MR_Integer) 12,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 11,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 10,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 9,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 8,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 7,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 3,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_decide_du_params_0_0 = {
  (MR_String) "decide_du_params",
  INT16_C(17),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
    UINT32_C(1),
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____decide_du_params_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____decide_du_params_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "decide_du_params",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_decide_du_params_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_decide_du_params_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_decide_du_params_0
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_0 = {
  (MR_String) "direct_arg_asserted",
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

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_1 = {
  (MR_String) "arg_type_is_word_aligned_pointer",
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

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_direct_arg_cond_0_2[1] = {
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_type_status_0)
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_2 = {
  (MR_String) "arg_type_defined_in_same_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  hlds__du_type_layout__hlds__du_type_layout__field_types_direct_arg_cond_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_direct_arg_cond_0_3 = {
  (MR_String) "arg_type_defined_in_different_module",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
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
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_direct_arg_cond_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____direct_arg_cond_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____direct_arg_cond_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "direct_arg_cond",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_direct_arg_cond_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_direct_arg_cond_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_direct_arg_cond_0
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_field_id_0_0 = {
  (MR_String) "field_id_sectag",
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

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_field_id_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_field_id_0_1 = {
  (MR_String) "field_id_name",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__du_type_layout__hlds__du_type_layout__field_types_field_id_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_field_id_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_field_id_0_2 = {
  (MR_String) "field_id_ordinal",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  hlds__du_type_layout__hlds__du_type_layout__field_types_field_id_0_2,
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

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_field_id_0_2[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_field_id_0_2
};

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_field_id_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_field_id_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_field_id_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_field_id_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_field_id_0[3] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_field_id_0_1,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_field_id_0_2,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_field_id_0_0
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_field_id_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_field_id_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____field_id_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____field_id_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "field_id",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_field_id_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_field_id_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_field_id_0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_direct_args_0_0 = {
  (MR_String) "direct_args_disabled",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_direct_args_0_1 = {
  (MR_String) "direct_args_enabled",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__du_type_layout____Unify____maybe_direct_args_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____maybe_direct_args_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "maybe_direct_args",
  {     hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_direct_args_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_direct_args_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_direct_args_0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_floats_0_0 = {
  (MR_String) "no_double_word_floats",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_floats_0_1 = {
  (MR_String) "use_double_word_floats",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__du_type_layout____Unify____maybe_double_word_floats_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____maybe_double_word_floats_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "maybe_double_word_floats",
  {     hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_double_word_floats_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_double_word_floats_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_double_word_floats_0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_int64s_0_0 = {
  (MR_String) "no_double_word_int64s",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_double_word_int64s_0_1 = {
  (MR_String) "use_double_word_int64s",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__du_type_layout____Unify____maybe_double_word_int64s_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____maybe_double_word_int64s_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "maybe_double_word_int64s",
  {     hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_double_word_int64s_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_double_word_int64s_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_double_word_int64s_0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_for_developers_0_0 = {
  (MR_String) "not_for_developers",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_for_developers_0_1 = {
  (MR_String) "for_developers",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_for_developers_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_for_developers_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_for_developers_0_1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_for_developers_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_for_developers_0_1,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_for_developers_0_0
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_for_developers_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_for_developers_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__du_type_layout____Unify____maybe_for_developers_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____maybe_for_developers_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "maybe_for_developers",
  {     hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_for_developers_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_for_developers_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_for_developers_0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_inform_about_packing_0_0 = {
  (MR_String) "do_not_inform_about_packing",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_inform_about_packing_0_1 = {
  (MR_String) "inform_about_packing",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__du_type_layout____Unify____maybe_inform_about_packing_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____maybe_inform_about_packing_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "maybe_inform_about_packing",
  {     hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_inform_about_packing_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_inform_about_packing_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_inform_about_packing_0
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_primary_tags_0_0 = {
  (MR_String) "no_primary_tags",
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

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_maybe_primary_tags_0_1[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_primary_tags_0_1 = {
  (MR_String) "max_primary_tag",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
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
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_maybe_primary_tags_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____maybe_primary_tags_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____maybe_primary_tags_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "maybe_primary_tags",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_maybe_primary_tags_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_maybe_primary_tags_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_primary_tags_0
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_show_type_repns_0_0 = {
  (MR_String) "do_not_show_type_repns",
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

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_maybe_show_type_repns_0_1[2] = {
  (MR_PseudoTypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_show_which_types_0),
  (MR_PseudoTypeInfo) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_for_developers_0)
};

static const MR_DuArgLocn hlds__du_type_layout__hlds__du_type_layout__field_locns_maybe_show_type_repns_0_1[2] = {
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

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_show_type_repns_0_1 = {
  (MR_String) "show_type_repns",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__du_type_layout__hlds__du_type_layout__field_types_maybe_show_type_repns_0_1,
  NULL,
  hlds__du_type_layout__hlds__du_type_layout__field_locns_maybe_show_type_repns_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_maybe_show_type_repns_0_0[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_show_type_repns_0_0
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_maybe_show_type_repns_0_1[1] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_show_type_repns_0_1
};

static const MR_DuPtagLayout hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_maybe_show_type_repns_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_maybe_show_type_repns_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_maybe_show_type_repns_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_maybe_show_type_repns_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_show_type_repns_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_maybe_show_type_repns_0_1
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_show_type_repns_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_show_type_repns_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____maybe_show_type_repns_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____maybe_show_type_repns_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "maybe_show_type_repns",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_maybe_show_type_repns_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_maybe_show_type_repns_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_show_type_repns_0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_tagword_args_0_0 = {
  (MR_String) "no_tagword_args",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_tagword_args_0_1 = {
  (MR_String) "some_tagword_args",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_tagword_args_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_tagword_args_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_tagword_args_0_1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_tagword_args_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_tagword_args_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_tagword_args_0_1
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_tagword_args_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_tagword_args_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__du_type_layout____Unify____maybe_tagword_args_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____maybe_tagword_args_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "maybe_tagword_args",
  {     hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_tagword_args_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_tagword_args_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_tagword_args_0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_treat_as_first_arg_0_0 = {
  (MR_String) "do_not_treat_as_first_arg",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_treat_as_first_arg_0_1 = {
  (MR_String) "treat_as_first_arg",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_treat_as_first_arg_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_treat_as_first_arg_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_treat_as_first_arg_0_1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_treat_as_first_arg_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_treat_as_first_arg_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_treat_as_first_arg_0_1
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_treat_as_first_arg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_treat_as_first_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__du_type_layout____Unify____maybe_treat_as_first_arg_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____maybe_treat_as_first_arg_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "maybe_treat_as_first_arg",
  {     hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_treat_as_first_arg_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_treat_as_first_arg_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_treat_as_first_arg_0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_unboxed_no_tag_types_0_0 = {
  (MR_String) "no_unboxed_no_tag_types",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_maybe_unboxed_no_tag_types_0_1 = {
  (MR_String) "use_unboxed_no_tag_types",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__du_type_layout____Unify____maybe_unboxed_no_tag_types_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____maybe_unboxed_no_tag_types_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "maybe_unboxed_no_tag_types",
  {     hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_maybe_unboxed_no_tag_types_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_maybe_unboxed_no_tag_types_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_maybe_unboxed_no_tag_types_0
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_packable_kind_0_0 = {
  (MR_String) "packable_dummy",
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

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_packable_kind_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_fill_kind_0)
};

static const MR_DuArgLocn hlds__du_type_layout__hlds__du_type_layout__field_locns_packable_kind_0_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_packable_kind_0_1 = {
  (MR_String) "packable_n_bits",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__du_type_layout__hlds__du_type_layout__field_types_packable_kind_0_1,
  NULL,
  hlds__du_type_layout__hlds__du_type_layout__field_locns_packable_kind_0_1,
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
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_packable_kind_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____packable_kind_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____packable_kind_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "packable_kind",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_packable_kind_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_packable_kind_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_packable_kind_0
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_show_which_types_0_0 = {
  (MR_String) "show_locally_defined_types",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_show_which_types_0_1 = {
  (MR_String) "show_all_visible_types",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_show_which_types_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_show_which_types_0_0,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_show_which_types_0_1
};

static const MR_EnumFunctorDescPtr hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_show_which_types_0[2] = {
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_show_which_types_0_1,
  &hlds__du_type_layout__hlds__du_type_layout__enum_functor_desc_show_which_types_0_0
};

static const MR_Integer hlds__du_type_layout__hlds__du_type_layout__functor_number_map_show_which_types_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_show_which_types_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__du_type_layout____Unify____show_which_types_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____show_which_types_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "show_which_types",
  {     hlds__du_type_layout__hlds__du_type_layout__enum_name_ordered_show_which_types_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__enum_value_ordered_show_which_types_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_show_which_types_0
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
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
    UINT32_C(1),
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____sub_word_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____sub_word_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "sub_word",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_sub_word_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_sub_word_0 },
  (MR_Integer) 1,
  UINT16_C(4),
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
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
    UINT32_C(1),
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____sub_word_bin_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____sub_word_bin_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "sub_word_bin",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_sub_word_bin_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_sub_word_bin_0 },
  (MR_Integer) 1,
  UINT16_C(4),
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__du_type_layout____Unify____type_repn_map_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____type_repn_map_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "type_repn_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__du_type_layout__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_repn_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_word_aligned_why_0_0 = {
  (MR_String) "foreign_type_assertion",
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

static const MR_PseudoTypeInfo hlds__du_type_layout__hlds__du_type_layout__field_types_word_aligned_why_0_1[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
};

static const MR_DuFunctorDesc hlds__du_type_layout__hlds__du_type_layout__du_functor_desc_word_aligned_why_0_1 = {
  (MR_String) "mercury_type_defn",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
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
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__du_type_layout__hlds__du_type_layout__du_stag_ordered_word_aligned_why_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__du_type_layout____Unify____word_aligned_why_0_0_10001)),
  ((MR_Box) (hlds__du_type_layout____Compare____word_aligned_why_0_0_10001)),
  (MR_String) "hlds.du_type_layout",
  (MR_String) "word_aligned_why",
  {     hlds__du_type_layout__hlds__du_type_layout__du_name_ordered_word_aligned_why_0 },
  {     hlds__du_type_layout__hlds__du_type_layout__du_ptag_ordered_word_aligned_why_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__du_type_layout__hlds__du_type_layout__functor_number_map_word_aligned_why_0
};

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__setup_decide_du_params__3200__1_2_p_0(
  MR_Word AllowPackingDummies_23,
  MR_Word HeadVar__2_75)
{
  {
    MR_bool succeeded = (AllowPackingDummies_23 == HeadVar__2_75);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__setup_decide_du_params__3198__1_2_p_0(
  MR_Word AllowPackingInts_21,
  MR_Word HeadVar__2_71)
{
  {
    MR_bool succeeded = (AllowPackingInts_21 == HeadVar__2_71);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__setup_decide_du_params__3196__1_2_p_0(
  MR_Word AllowDoubleWords_8,
  MR_Word HeadVar__2_67)
{
  {
    MR_bool succeeded = (AllowDoubleWords_8 == HeadVar__2_67);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__arg_word_desc__2942__1_2_p_0(
  MR_Integer CellOffsetInt_7,
  MR_Integer HeadVar__2_19)
{
  {
    MR_bool succeeded = (CellOffsetInt_7 == HeadVar__2_19);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__show_ptag__2897__1_2_p_0(
  uint8_t PtagUint8_7,
  uint8_t HeadVar__2_22)
{
  {
    MR_bool succeeded = (PtagUint8_7 == HeadVar__2_22);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__show_decisions_for_ctor_args__2828__1_2_p_0(
  MR_Word ArgsLocn_5,
  MR_Word HeadVar__2_122)
{
  {
    MR_bool succeeded = (ArgsLocn_5 == HeadVar__2_122);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__show_decisions_for_ctor_args__2833__1_2_p_0(
  MR_Word ArgsLocn_5,
  MR_Word HeadVar__2_102)
{
  {
    MR_bool succeeded = (ArgsLocn_5 == HeadVar__2_102);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__show_decisions_for_ctor__2762__1_2_p_0(
  MR_Word ArgsLocn_26,
  MR_Word HeadVar__2_146)
{
  {
    MR_bool succeeded = (ArgsLocn_26 == HeadVar__2_146);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__is_direct_arg_ctor__1920__1_2_p_0(
  MR_Integer ConsArity_19,
  MR_Integer HeadVar__2_45)
{
  {
    MR_bool succeeded = (ConsArity_19 == HeadVar__2_45);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_complex_du_type_ctor__965__1_2_p_0(
  MR_Word MaybeExistConstraints_26,
  MR_Word HeadVar__2_90)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____maybe_cons_exist_constraints_0_0(MaybeExistConstraints_26, HeadVar__2_90);
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_complex_du_type_ctor__994__1_2_p_0(
  MR_Word MaybeExistConstraints_26,
  MR_Word HeadVar__2_82)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____maybe_cons_exist_constraints_0_0(MaybeExistConstraints_26, HeadVar__2_82);
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_complex_du_type_ctor__1004__1_2_p_0(
  MR_Word CtorArgs_28,
  MR_Word HeadVar__2_76)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_1[6]), ((MR_Box) (CtorArgs_28)), ((MR_Box) (HeadVar__2_76)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_complex_du_type_ctor__969__1_2_p_0(
  MR_Word MaybeExistConstraints_26,
  MR_Word HeadVar__2_86)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_data____Unify____maybe_cons_exist_constraints_0_0(MaybeExistConstraints_26, HeadVar__2_86);
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__decide_complex_du_type_general__784__1_2_p_0(
  MR_Word UsesConstructors_19,
  MR_Word HeadVar__2_68)
{
  {
    MR_bool succeeded = (UsesConstructors_19 == HeadVar__2_68);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__477__1_2_p_0(
  MR_Integer Arity_23,
  MR_Integer HeadVar__2_41)
{
  {
    MR_bool succeeded = (Arity_23 == HeadVar__2_41);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__476__1_2_p_0(
  MR_Word Args_22,
  MR_Word HeadVar__2_37)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_1[6]), ((MR_Box) (Args_22)), ((MR_Box) (HeadVar__2_37)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__474__1_2_p_0(
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
hlds__du_type_layout__IntroducedFrom__pred__decide_if_simple_du_type__276__1_2_p_0(
  MR_Word MaybeRepn0_25,
  MR_Word HeadVar__2_55)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_1[3]), ((MR_Box) (MaybeRepn0_25)), ((MR_Box) (HeadVar__2_55)));
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

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_3[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_3[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_1[9]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_1[9]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
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
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX1_4 > ArgY1_5);
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
        hlds__du_type_layout____Compare____field_id_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
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
hlds__du_type_layout____Compare____show_which_types_0_0(
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
hlds__du_type_layout____Unify____show_which_types_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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
hlds__du_type_layout____Compare____maybe_treat_as_first_arg_0_0(
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
hlds__du_type_layout____Unify____maybe_treat_as_first_arg_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_tagword_args_0_0(
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
hlds__du_type_layout____Unify____maybe_tagword_args_0_0(
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
hlds__du_type_layout____Compare____maybe_for_developers_0_0(
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
hlds__du_type_layout____Unify____maybe_for_developers_0_0(
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
    MR_Integer CastX_23 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_24 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_23 == CastY_24);
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
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_28 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ArgY1_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_String ArgY2_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_11;

                  succeeded = (Var_29 < ArgY1_10);
                  if (succeeded)
                  {
                    SubResult1_11 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_29 > ArgY1_10);
                    if (succeeded)
                    {
                      SubResult1_11 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult1_11 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_11;
                  else
                    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_28, ArgY2_13);
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
            MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Integer ArgY1_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  succeeded = (Var_30 < ArgY1_22);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_30 > ArgY1_22);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
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
hlds__du_type_layout____Unify____field_id_0_0(
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
          {
            MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_6;
            MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_String ArgY2_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = (ArgX1_5 == ArgY1_6);
              if (succeeded)
                succeeded = (strcmp(ArgX2_7, ArgY2_8) == 0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_9 == ArgY1_10);
            }
          }
          break;
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
    MR_Integer CastX_54 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_55 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_54 == CastY_55);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 12)) & (MR_Integer) 3);
      MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 12)) & (MR_Integer) 3);
      MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 11)) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 11)) & (MR_Integer) 1);
      MR_Word ArgX5_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
      MR_Word ArgX6_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 9)) & (MR_Integer) 1);
      MR_Word ArgY6_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 9)) & (MR_Integer) 1);
      MR_Word ArgX7_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgY7_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgX9_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgY9_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgX10_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgY10_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgX11_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY11_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX12_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY12_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX13_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY13_41 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX14_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY14_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX15_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY15_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgX16_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY16_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX17_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY17_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX1_4 > ArgY1_5);
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

        hlds__du_type_layout____Compare____maybe_primary_tags_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_73 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_74 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_73 < Var_74);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_73 > Var_74);
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
            MR_Integer Var_75 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_76 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_75 < Var_76);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_75 > Var_76);
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
              MR_Word SubResult5_18;
              MR_Integer Var_77 = (MR_Integer) (ArgX5_16);
              MR_Integer Var_78 = (MR_Integer) (ArgY5_17);

              succeeded = (Var_77 < Var_78);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_77 > Var_78);
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
                MR_Integer Var_79 = (MR_Integer) (ArgX6_19);
                MR_Integer Var_80 = (MR_Integer) (ArgY6_20);

                succeeded = (Var_79 < Var_80);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_79 > Var_80);
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
                  MR_Word SubResult7_24;
                  MR_Integer Var_81 = (MR_Integer) (ArgX7_22);
                  MR_Integer Var_82 = (MR_Integer) (ArgY7_23);

                  succeeded = (Var_81 < Var_82);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_81 > Var_82);
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
                  {
                    MR_Word SubResult8_27;
                    MR_Integer Var_83 = (MR_Integer) (ArgX8_25);
                    MR_Integer Var_84 = (MR_Integer) (ArgY8_26);

                    succeeded = (Var_83 < Var_84);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_83 > Var_84);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult8_27 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;
                      MR_Integer Var_85 = (MR_Integer) (ArgX9_28);
                      MR_Integer Var_86 = (MR_Integer) (ArgY9_29);

                      succeeded = (Var_85 < Var_86);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_85 > Var_86);
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
                        MR_Integer Var_87 = (MR_Integer) (ArgX10_31);
                        MR_Integer Var_88 = (MR_Integer) (ArgY10_32);

                        succeeded = (Var_87 < Var_88);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_87 > Var_88);
                          if (succeeded)
                          {
                            SubResult10_33 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult10_33 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult10_33;
                        else
                        {
                          MR_Word SubResult11_36;
                          MR_Integer Var_89 = (MR_Integer) (ArgX11_34);
                          MR_Integer Var_90 = (MR_Integer) (ArgY11_35);

                          succeeded = (Var_89 < Var_90);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_89 > Var_90);
                            if (succeeded)
                            {
                              SubResult11_36 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult11_36 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult11_36;
                          else
                          {
                            MR_Word SubResult12_39;
                            MR_Integer Var_91 = (MR_Integer) (ArgX12_37);
                            MR_Integer Var_92 = (MR_Integer) (ArgY12_38);

                            succeeded = (Var_91 < Var_92);
                            if (succeeded)
                            {
                              SubResult12_39 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_91 > Var_92);
                              if (succeeded)
                              {
                                SubResult12_39 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult12_39 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult12_39;
                            else
                            {
                              MR_Word SubResult13_42;
                              MR_Integer Var_93 = (MR_Integer) (ArgX13_40);
                              MR_Integer Var_94 = (MR_Integer) (ArgY13_41);

                              succeeded = (Var_93 < Var_94);
                              if (succeeded)
                              {
                                SubResult13_42 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (Var_93 > Var_94);
                                if (succeeded)
                                {
                                  SubResult13_42 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = MR_TRUE;
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    SubResult13_42 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult13_42;
                              else
                              {
                                MR_Word SubResult14_45;
                                MR_Integer Var_95 = (MR_Integer) (ArgX14_43);
                                MR_Integer Var_96 = (MR_Integer) (ArgY14_44);

                                succeeded = (Var_95 < Var_96);
                                if (succeeded)
                                {
                                  SubResult14_45 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (Var_95 > Var_96);
                                  if (succeeded)
                                  {
                                    SubResult14_45 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = MR_TRUE;
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      SubResult14_45 = (MR_Integer) 0;
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult14_45;
                                else
                                {
                                  MR_Word SubResult15_48;
                                  MR_Integer Var_97 = (MR_Integer) (ArgX15_46);
                                  MR_Integer Var_98 = (MR_Integer) (ArgY15_47);

                                  succeeded = (Var_97 < Var_98);
                                  if (succeeded)
                                  {
                                    SubResult15_48 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (Var_97 > Var_98);
                                    if (succeeded)
                                    {
                                      SubResult15_48 = (MR_Integer) 2;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = MR_TRUE;
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                      {
                                        SubResult15_48 = (MR_Integer) 0;
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult15_48;
                                  else
                                  {
                                    MR_Word SubResult16_51;

                                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_3[6]), &SubResult16_51, ((MR_Box) (ArgX16_49)), ((MR_Box) (ArgY16_50)));
                                    succeeded = (SubResult16_51 != (MR_Integer) 0);
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult16_51;
                                    else
                                      hlds__du_type_layout____Compare____maybe_show_type_repns_0_0(HeadVar__1_1, ArgX17_52, ArgY17_53);
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
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_show_type_repns_0_0(
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
      MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        MR_Word ArgY2_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word SubResult1_10;
        MR_Integer Var_19 = (MR_Integer) (Var_18);
        MR_Integer Var_20 = (MR_Integer) (ArgY1_9);

        succeeded = (Var_19 < Var_20);
        if (succeeded)
        {
          SubResult1_10 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_19 > Var_20);
          if (succeeded)
          {
            SubResult1_10 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult1_10 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
        {
          MR_Integer Var_21 = (MR_Integer) (Var_17);
          MR_Integer Var_22 = (MR_Integer) (ArgY2_12);

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
        MR_Integer ArgY2_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_10;
        uint8_t Var_19 = (uint8_t) (Var_18);
        uint8_t Var_20 = (uint8_t) (ArgY1_9);

        succeeded = (Var_19 < Var_20);
        if (succeeded)
        {
          SubResult1_10 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_19 > Var_20);
          if (succeeded)
          {
            SubResult1_10 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult1_10 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
        {
          succeeded = (Var_17 < ArgY2_12);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_17 > ArgY2_12);
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
hlds__du_type_layout____Unify____decide_du_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_37 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_38 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_37 == CastY_38);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_39_39;
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 12)) & (MR_Integer) 3);
      MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 12)) & (MR_Integer) 3);
      MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 11)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 11)) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
      MR_Word ArgX6_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 9)) & (MR_Integer) 1);
      MR_Word ArgY6_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 9)) & (MR_Integer) 1);
      MR_Word ArgX7_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgY7_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 8)) & (MR_Integer) 1);
      MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 7)) & (MR_Integer) 1);
      MR_Word ArgX9_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgY9_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 6)) & (MR_Integer) 1);
      MR_Word ArgX10_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgY10_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 5)) & (MR_Integer) 1);
      MR_Word ArgX11_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY11_24 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX12_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY12_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX13_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY13_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX14_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY14_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX15_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY15_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgX16_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY16_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX17_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY17_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__du_type_layout____Unify____maybe_primary_tags_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
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
                            succeeded = (ArgX12_25 == ArgY12_26);
                            if (succeeded)
                            {
                              succeeded = (ArgX13_27 == ArgY13_28);
                              if (succeeded)
                              {
                                succeeded = (ArgX14_29 == ArgY14_30);
                                if (succeeded)
                                {
                                  succeeded = (ArgX15_31 == ArgY15_32);
                                  if (succeeded)
                                  {
                                    TypeInfo_39_39 = (MR_Word) (&hlds__du_type_layout_scalar_common_3[6]);
                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_39_39, ((MR_Box) (ArgX16_33)), ((MR_Box) (ArgY16_34)));
                                    if (succeeded)
                                      succeeded = hlds__du_type_layout____Unify____maybe_show_type_repns_0_0(ArgX17_35, ArgY17_36);
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
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_show_type_repns_0_0(
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
      MR_Word ArgX1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY2_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
        succeeded = (ArgX1_5 == ArgY1_6);
        if (succeeded)
          succeeded = (ArgX2_7 == ArgY2_8);
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

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
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

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_3[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_3[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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
            MR_Word Var_27 = (MR_Word) ((MR_Word) (HeadVar__2_2));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_21 = (MR_Word) ((MR_Word) (HeadVar__3_3));

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
      MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
      MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Integer ArgY1_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 7);
        MR_Word SubResult1_10;

        succeeded = (Var_18 < ArgY1_9);
        if (succeeded)
        {
          SubResult1_10 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_18 > ArgY1_9);
          if (succeeded)
          {
            SubResult1_10 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult1_10 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
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
            MR_Word ArgX1_7 = (MR_Word) ((MR_Word) (HeadVar__1_1));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_8 = (MR_Word) ((MR_Word) (HeadVar__2_2));
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

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
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
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);
      MR_Word ArgY2_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
        succeeded = (ArgX1_5 == ArgY1_6);
        if (succeeded)
          succeeded = (ArgX2_7 == ArgY2_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____args_locn_0_0(
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
hlds__du_type_layout____Unify____args_locn_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__show_decisions_for_ctor_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__show_decisions_for_ctor__2762__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout__show_decisions_for_ctor_7_p_0(
  MR_Word Stream_8,
  MR_Word MaybePrimaryTags_9,
  MR_Word ForDevelopers_10,
  MR_String TypeCtorStr_11,
  MR_Word CtorRepn_12)
{
  {
    MR_bool succeeded;
    MR_Word MaybeExist_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_12, (MR_Integer) 1))));
    MR_Word CtorSymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_12, (MR_Integer) 2))));
    MR_Word ConsTag_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_12, (MR_Integer) 3))));
    MR_Word CtorArgRepns_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn_12, (MR_Integer) 4))));
    MR_Integer NumArgs_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CtorRepn_12, (MR_Integer) 5))));
    MR_String CtorName_21;
    MR_String CtorStr_22;
    MR_Word ArgsLocn_26;
    MR_Word ShowArgs_32;
    MR_Integer NumRemoteSectagWords_33;
    MR_String Var_229;
    MR_String Var_237;
    MR_Word ConsExistConstraints_64;

    CtorName_21 = mdbcomp__sym_name__unqualify_name_1_f_0(CtorSymName_16);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), NumArgs_19, &Var_229);
    Var_237 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_229);
    CtorStr_22 = mercury__string__f_43_43_2_f_0(CtorName_21, Var_237);
    switch (ForDevelopers_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "  CTOR ");
          mercury__io__write_string_4_p_0(Stream_8, TypeCtorStr_11);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
          mercury__io__write_string_4_p_0(Stream_8, CtorStr_22);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ": ");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "  ");
          mercury__io__write_string_4_p_0(Stream_8, CtorStr_22);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ": ");
        }
        break;
    }
    switch (MR_tag((MR_Word) ConsTag_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.show_decisions_for_ctor\'/7", (MR_String) "unexpected kind of tag for general du type");
          return;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.show_decisions_for_ctor\'/7", (MR_String) "unexpected kind of tag for general du type");
          return;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 14:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.show_decisions_for_ctor\'/7", (MR_String) "unexpected kind of tag for general du type");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Ptag_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));
              MR_Word LocalSectag_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 2))));
              MR_Unsigned Sectag_27;
              MR_Word SectagBits_29;
              MR_String PtagDesc_30;
              MR_String SectagDesc_31;

              ArgsLocn_26 = (MR_Integer) 0;
              Sectag_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_24, (MR_Integer) 0))));
              SectagBits_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalSectag_24, (MR_Integer) 2))));
              PtagDesc_30 = hlds__du_type_layout__show_ptag_2_f_0(MaybePrimaryTags_9, Ptag_23);
              SectagDesc_31 = hlds__du_type_layout__show_sectag_bits_4_f_0(MaybePrimaryTags_9, ArgsLocn_26, Sectag_27, SectagBits_29);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "no arguments, ");
              mercury__io__write_string_4_p_0(Stream_8, PtagDesc_30);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              mercury__io__write_string_4_p_0(Stream_8, SectagDesc_31);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
              ShowArgs_32 = (MR_Integer) 1;
              NumRemoteSectagWords_33 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word RemoteArgsTagInfo_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));

              ArgsLocn_26 = (MR_Integer) 1;
              switch (MR_tag((MR_Word) RemoteArgsTagInfo_36)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "remote arguments, only_functor\n");
                    ShowArgs_32 = (MR_Integer) 1;
                    NumRemoteSectagWords_33 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Ptag_205 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoteArgsTagInfo_36, (MR_Integer) 0))));
                    MR_String PtagDesc_206;

                    PtagDesc_206 = hlds__du_type_layout__show_ptag_2_f_0(MaybePrimaryTags_9, Ptag_205);
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "remote arguments, ");
                    mercury__io__write_string_4_p_0(Stream_8, PtagDesc_206);
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", no secondary tag\n");
                    ShowArgs_32 = (MR_Integer) 1;
                    NumRemoteSectagWords_33 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word RemoteSectag_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_36, (MR_Integer) 1))));
                    MR_Word SectagSize_38;
                    MR_Word Ptag_209 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_36, (MR_Integer) 0))));
                    MR_Unsigned Sectag_210;
                    MR_String PtagDesc_212;
                    MR_String SectagDesc_213;

                    PtagDesc_212 = hlds__du_type_layout__show_ptag_2_f_0(MaybePrimaryTags_9, Ptag_209);
                    Sectag_210 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag_37, (MR_Integer) 0))));
                    SectagSize_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_37, (MR_Integer) 1))));
                    if ((SectagSize_38 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Integer Var_111;
                      MR_String Var_261;
                      MR_String Var_268;

                      Var_111 = mercury__uint__cast_to_int_1_f_0(Sectag_210);
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), Var_111, &Var_261);
                      Var_268 = mercury__string__f_43_43_2_f_0(Var_261, (MR_String) " (in heap cell word 0, all bits)");
                      SectagDesc_213 = mercury__string__f_43_43_2_f_0((MR_String) "remote secondary tag ", Var_268);
                    }
                    else
                    {
                      MR_Word SectagBits_207 = (MR_Word) (MR_body((MR_Word) (SectagSize_38), (MR_Integer) 1));

                      SectagDesc_213 = hlds__du_type_layout__show_sectag_bits_4_f_0(MaybePrimaryTags_9, ArgsLocn_26, Sectag_210, SectagBits_207);
                    }
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "remote arguments, ");
                    mercury__io__write_string_4_p_0(Stream_8, PtagDesc_212);
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                    mercury__io__write_string_4_p_0(Stream_8, SectagDesc_213);
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
                    ShowArgs_32 = (MR_Integer) 1;
                    NumRemoteSectagWords_33 = (MR_Integer) 1;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Unsigned Data_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), RemoteArgsTagInfo_36, (MR_Integer) 0))));
                    MR_Integer Var_106;
                    MR_String Var_280;

                    Var_106 = mercury__uint__cast_to_int_1_f_0(Data_39);
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "constructor identifier ");
                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), Var_106, &Var_280);
                    mercury__io__write_string_4_p_0(Stream_8, Var_280);
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", every argument has its own field\n");
                    ShowArgs_32 = (MR_Integer) 0;
                    NumRemoteSectagWords_33 = (MR_Integer) 0;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word LocalArgsTagInfo_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));

              ArgsLocn_26 = (MR_Integer) 0;
              if ((LocalArgsTagInfo_34 == (MR_Word) ((MR_Unsigned) 0U)))
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "local arguments, only_functor");
              else
              {
                MR_Word Ptag_187 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgsTagInfo_34, (MR_Integer) 0))));
                MR_Word LocalSectag_188 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgsTagInfo_34, (MR_Integer) 1))));
                MR_Unsigned Sectag_189 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LocalSectag_188, (MR_Integer) 0))));
                MR_Word SectagBits_190 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalSectag_188, (MR_Integer) 2))));
                MR_String PtagDesc_191;
                MR_String SectagDesc_192;

                PtagDesc_191 = hlds__du_type_layout__show_ptag_2_f_0(MaybePrimaryTags_9, Ptag_187);
                SectagDesc_192 = hlds__du_type_layout__show_sectag_bits_4_f_0(MaybePrimaryTags_9, ArgsLocn_26, Sectag_189, SectagBits_190);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "local arguments, ");
                mercury__io__write_string_4_p_0(Stream_8, PtagDesc_191);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                mercury__io__write_string_4_p_0(Stream_8, SectagDesc_192);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
              }
              ShowArgs_32 = (MR_Integer) 1;
              NumRemoteSectagWords_33 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Ptag_224 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));
              MR_String PtagDesc_225;

              PtagDesc_225 = hlds__du_type_layout__show_ptag_2_f_0(MaybePrimaryTags_9, Ptag_224);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "direct arg, ");
              mercury__io__write_string_4_p_0(Stream_8, PtagDesc_225);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", rest of word is pointer to argument\n");
              ShowArgs_32 = (MR_Integer) 0;
              ArgsLocn_26 = (MR_Integer) 1;
              NumRemoteSectagWords_33 = (MR_Integer) 0;
            }
            break;
        }
        break;
    }
    succeeded = (ForDevelopers_10 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (MaybeExist_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        ConsExistConstraints_64 = (MR_Word) (MR_body((MR_Word) (MaybeExist_15), (MR_Integer) 1));
    }
    if (succeeded)
    {
      MR_Word Constraints_66;
      MR_Word UnconstrainedExistQTVars_67;
      MR_Integer NumTypeInfos_69;
      MR_Integer NumTypeClassInfos_70;
      MR_Integer TCIStart_72;
      MR_Word Var_143;

      {
        Var_143 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_143, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[8]));
        MR_hl_field(MR_mktag(0), Var_143, 1) = ((MR_Box) (hlds__du_type_layout__show_decisions_for_ctor_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_143, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_143, 3) = ((MR_Box) (ArgsLocn_26));
        MR_hl_field(MR_mktag(0), Var_143, 4) = ((MR_Box) ((MR_Integer) 1));
      }
      mercury__require__expect_3_p_0(Var_143, (MR_String) "predicate \140hlds.du_type_layout.show_decisions_for_ctor\'/7", (MR_String) "exist_constraints but ArgsLocn != args_remote");
      Constraints_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsExistConstraints_64, (MR_Integer) 1))));
      UnconstrainedExistQTVars_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsExistConstraints_64, (MR_Integer) 2))));
      mercury__list__length_2_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_1[2]), UnconstrainedExistQTVars_67, &NumTypeInfos_69);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Constraints_66, &NumTypeClassInfos_70);
      succeeded = (NumTypeInfos_69 == (MR_Integer) 0);
      if (!(succeeded))
      {
        succeeded = (NumTypeInfos_69 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_String Var_305;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "    ");
          mercury__io__write_string_4_p_0(Stream_8, CtorStr_22);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ": type_info in heap cell word ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), NumRemoteSectagWords_33, &Var_305);
          mercury__io__write_string_4_p_0(Stream_8, Var_305);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
        }
        else
        {
          MR_Integer Var_162;
          MR_Integer Var_163 = (MR_Integer) ((MR_Unsigned) NumRemoteSectagWords_33 + (MR_Unsigned) NumTypeInfos_69);
          MR_String Var_319;
          MR_String Var_329;

          Var_162 = (MR_Integer) ((MR_Unsigned) Var_163 - (MR_Unsigned) 1);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "    ");
          mercury__io__write_string_4_p_0(Stream_8, CtorStr_22);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ": type_infos in heap cell words ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), NumRemoteSectagWords_33, &Var_319);
          mercury__io__write_string_4_p_0(Stream_8, Var_319);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) " to ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), Var_162, &Var_329);
          mercury__io__write_string_4_p_0(Stream_8, Var_329);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
        }
      }
      TCIStart_72 = (MR_Integer) ((MR_Unsigned) NumRemoteSectagWords_33 + (MR_Unsigned) NumTypeInfos_69);
      succeeded = (NumTypeClassInfos_70 == (MR_Integer) 0);
      if (!(succeeded))
      {
        succeeded = (NumTypeClassInfos_70 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_String Var_343;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "    ");
          mercury__io__write_string_4_p_0(Stream_8, CtorStr_22);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ": typeclass_info in heap cell word ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), TCIStart_72, &Var_343);
          mercury__io__write_string_4_p_0(Stream_8, Var_343);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
        }
        else
        {
          MR_Integer Var_181;
          MR_Integer Var_182 = (MR_Integer) ((MR_Unsigned) TCIStart_72 + (MR_Unsigned) NumTypeClassInfos_70);
          MR_String Var_357;
          MR_String Var_367;

          Var_181 = (MR_Integer) ((MR_Unsigned) Var_182 - (MR_Unsigned) 1);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "    ");
          mercury__io__write_string_4_p_0(Stream_8, CtorStr_22);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ": typeclass_infos in heap cell words ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), TCIStart_72, &Var_357);
          mercury__io__write_string_4_p_0(Stream_8, Var_357);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) " to ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), Var_181, &Var_367);
          mercury__io__write_string_4_p_0(Stream_8, Var_367);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
        }
      }
    }
    switch (ShowArgs_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        hlds__du_type_layout__show_decisions_for_ctor_args_9_p_0(Stream_8, ForDevelopers_10, TypeCtorStr_11, CtorStr_22, ArgsLocn_26, (MR_Integer) 1, CtorArgRepns_18);
        break;
    }
  }
}

static MR_String MR_CALL 
hlds__du_type_layout__show_sectag_bits_4_f_0(
  MR_Word MaybePrimaryTags_6,
  MR_Word ArgsLocn_7,
  MR_Unsigned Sectag_8,
  MR_Word SectagBits_9)
{
  {
    MR_bool succeeded;
    MR_String Desc_10;
    uint8_t NumSectagBitsUint8_11 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), SectagBits_9, (MR_Integer) 0)));
    MR_Integer NumSectagBits_13;

    NumSectagBits_13 = mercury__uint8__cast_to_int_1_f_0(NumSectagBitsUint8_11);
    succeeded = (NumSectagBits_13 == (MR_Integer) 0);
    if (succeeded)
      Desc_10 = (MR_String) "no secondary tag";
    else
    {
      MR_Integer SectagInt_14;

      SectagInt_14 = mercury__uint__cast_to_int_1_f_0(Sectag_8);
      switch (ArgsLocn_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer NumPtagBits_16;
            MR_Integer Var_34;
            MR_Integer Var_35;
            MR_String Var_59;
            MR_String Var_66;
            MR_String Var_68;
            MR_String Var_69;
            MR_String Var_76;
            MR_String Var_78;
            MR_String Var_79;
            MR_String Var_86;

            if ((MaybePrimaryTags_6 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.du_type_layout.show_sectag_bits\'/4", (MR_String) "local sectag in the absence of ptags");
            else
              NumPtagBits_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrimaryTags_6, (MR_Integer) 1))));
            Var_35 = (MR_Integer) ((MR_Unsigned) NumPtagBits_16 + (MR_Unsigned) NumSectagBits_13);
            Var_34 = (MR_Integer) ((MR_Unsigned) Var_35 - (MR_Unsigned) 1);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), Var_34, &Var_59);
            Var_66 = mercury__string__f_43_43_2_f_0(Var_59, (MR_String) ")");
            Var_68 = mercury__string__f_43_43_2_f_0((MR_String) " to ", Var_66);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), NumPtagBits_16, &Var_69);
            Var_76 = mercury__string__f_43_43_2_f_0(Var_69, Var_68);
            Var_78 = mercury__string__f_43_43_2_f_0((MR_String) " (in bits ", Var_76);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), SectagInt_14, &Var_79);
            Var_86 = mercury__string__f_43_43_2_f_0(Var_79, Var_78);
            Desc_10 = mercury__string__f_43_43_2_f_0((MR_String) "local secondary tag ", Var_86);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_22 = (MR_Integer) ((MR_Unsigned) NumSectagBits_13 - (MR_Unsigned) 1);
            MR_String Var_39;
            MR_String Var_46;
            MR_String Var_48;
            MR_String Var_49;
            MR_String Var_56;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), Var_22, &Var_39);
            Var_46 = mercury__string__f_43_43_2_f_0(Var_39, (MR_String) ")");
            Var_48 = mercury__string__f_43_43_2_f_0((MR_String) " (in heap cell word 0, bits 0 to ", Var_46);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), SectagInt_14, &Var_49);
            Var_56 = mercury__string__f_43_43_2_f_0(Var_49, Var_48);
            Desc_10 = mercury__string__f_43_43_2_f_0((MR_String) "remote secondary tag ", Var_56);
          }
          break;
      }
    }
    return Desc_10;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__show_ptag_2_f_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__show_ptag__2897__1_2_p_0(((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_String MR_CALL 
hlds__du_type_layout__show_ptag_2_f_0(
  MR_Word MaybePrimaryTags_4,
  MR_Word Ptag_5)
{
  {
    MR_bool succeeded;
    MR_String Desc_6;
    uint8_t PtagUint8_7 = (uint8_t) (Ptag_5);

    if ((MaybePrimaryTags_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_19;

      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[9]));
        MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (hlds__du_type_layout__show_ptag_2_f_0_1));
        MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (MR_Word) (PtagUint8_7));
        MR_hl_field(MR_mktag(0), Var_19, 4) = ((MR_Box) (MR_Word) (UINT8_C(0)));
      }
      mercury__require__expect_3_p_0(Var_19, (MR_String) "function \140hlds.du_type_layout.show_ptag\'/2", (MR_String) "nonzero ptag in the absence of ptags");
      Desc_6 = (MR_String) "no primary tag";
    }
    else
    {
      MR_Integer NumPtagBits_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrimaryTags_4, (MR_Integer) 1))));
      MR_Integer Var_13;
      MR_Integer Var_16;
      MR_String Var_25;
      MR_String Var_32;
      MR_String Var_34;
      MR_String Var_35;
      MR_String Var_42;

      Var_13 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_7);
      Var_16 = (MR_Integer) ((MR_Unsigned) NumPtagBits_9 - (MR_Unsigned) 1);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), Var_16, &Var_25);
      Var_32 = mercury__string__f_43_43_2_f_0(Var_25, (MR_String) ")");
      Var_34 = mercury__string__f_43_43_2_f_0((MR_String) " (in bits 0 to ", Var_32);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), Var_13, &Var_35);
      Var_42 = mercury__string__f_43_43_2_f_0(Var_35, Var_34);
      Desc_6 = mercury__string__f_43_43_2_f_0((MR_String) "primary tag ", Var_42);
    }
    return Desc_6;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__show_decisions_for_ctor_args_9_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__show_decisions_for_ctor_args__2828__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__show_decisions_for_ctor_args_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__show_decisions_for_ctor_args__2833__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout__show_decisions_for_ctor_args_9_p_0(
  MR_Word Stream_1,
  MR_Word ForDevelopers_2,
  MR_String TypeCtorStr_3,
  MR_String CtorStr_4,
  MR_Word ArgsLocn_5,
  MR_Integer ArgNum_6,
  MR_Word HeadVar__7_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word CtorArgRepn_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 0))));
      MR_Word CtorArgRepns_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 1))));
      MR_Word ArgPosWidth_30;
      MR_Integer Var_128;
      MR_Integer next_value_of_ArgNum_6;
      MR_Word next_value_of_HeadVar__7_7;

      switch (ForDevelopers_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_String Var_211;

            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "    ");
            mercury__io__write_string_4_p_0(Stream_1, TypeCtorStr_3);
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_1, CtorStr_4);
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) " arg ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), ArgNum_6, &Var_211);
            mercury__io__write_string_4_p_0(Stream_1, Var_211);
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) ": ");
          }
          break;
        case (MR_Integer) 0:
          {
            MR_String Var_194;

            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "    arg ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), ArgNum_6, &Var_194);
            mercury__io__write_string_4_p_0(Stream_1, Var_194);
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) ": ");
          }
          break;
      }
      ArgPosWidth_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArgRepn_25, (MR_Integer) 2))));
      switch (MR_tag((MR_Word) ArgPosWidth_30)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "no bits\n");
          break;
        case (MR_Integer) 1:
          {
            MR_Word CellOffset_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgPosWidth_30, (MR_Integer) 1))));
            MR_Integer CellOffsetInt_34;
            MR_Word Var_119;
            MR_String Var_318;

            {
              Var_119 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[8]));
              MR_hl_field(MR_mktag(0), Var_119, 1) = ((MR_Box) (hlds__du_type_layout__show_decisions_for_ctor_args_9_p_0_2));
              MR_hl_field(MR_mktag(0), Var_119, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_119, 3) = ((MR_Box) (ArgsLocn_5));
              MR_hl_field(MR_mktag(0), Var_119, 4) = ((MR_Box) ((MR_Integer) 1));
            }
            mercury__require__expect_3_p_0(Var_119, (MR_String) "predicate \140hlds.du_type_layout.show_decisions_for_ctor_args\'/9", (MR_String) "apw_full not remote");
            CellOffsetInt_34 = (MR_Integer) (CellOffset_33);
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "heap cell word ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), CellOffsetInt_34, &Var_318);
            mercury__io__write_string_4_p_0(Stream_1, Var_318);
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\n");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word DWKind_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), ArgPosWidth_30, (MR_Integer) 2))) & (MR_Integer) 3);
            MR_Word Var_99;
            MR_Integer Var_109;
            MR_Word CellOffset_131 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_30, (MR_Integer) 1))));
            MR_Integer CellOffsetInt_132;
            MR_String Var_329;
            MR_String Var_338;

            {
              Var_99 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_99, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[8]));
              MR_hl_field(MR_mktag(0), Var_99, 1) = ((MR_Box) (hlds__du_type_layout__show_decisions_for_ctor_args_9_p_0_1));
              MR_hl_field(MR_mktag(0), Var_99, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_99, 3) = ((MR_Box) (ArgsLocn_5));
              MR_hl_field(MR_mktag(0), Var_99, 4) = ((MR_Box) ((MR_Integer) 1));
            }
            mercury__require__expect_3_p_0(Var_99, (MR_String) "predicate \140hlds.du_type_layout.show_decisions_for_ctor_args\'/9", (MR_String) "apw_double not remote");
            CellOffsetInt_132 = (MR_Integer) (CellOffset_131);
            Var_109 = (MR_Integer) ((MR_Unsigned) CellOffsetInt_132 + (MR_Unsigned) 1);
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "heap cell words ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), CellOffsetInt_132, &Var_329);
            mercury__io__write_string_4_p_0(Stream_1, Var_329);
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) " and ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), Var_109, &Var_338);
            mercury__io__write_string_4_p_0(Stream_1, Var_338);
            switch (ForDevelopers_2) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                switch (DWKind_36) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", float\n");
                    break;
                  case (MR_Integer) 1:
                    mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", int64\n");
                    break;
                  case (MR_Integer) 2:
                    mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", uint64\n");
                    break;
                }
                break;
              case (MR_Integer) 0:
                mercury__io__nl_3_p_0(Stream_1);
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_30, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Shift_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_30, (MR_Integer) 3))));
                MR_Word NumBits_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_30, (MR_Integer) 4))));
                MR_Word Fill_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_30, (MR_Integer) 6))) & (MR_Integer) 7);
                MR_Integer NumBitsInt_46 = (MR_Integer) (NumBits_39);
                MR_Integer MinBitPos_47 = (MR_Integer) (Shift_38);
                MR_Integer MaxBitPos_48;
                MR_Integer Var_74 = (MR_Integer) ((MR_Unsigned) MinBitPos_47 + (MR_Unsigned) NumBitsInt_46);
                MR_String Var_80;
                MR_Word CellOffset_133 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_30, (MR_Integer) 2))));
                MR_String Var_270;
                MR_String Var_279;

                MaxBitPos_48 = (MR_Integer) ((MR_Unsigned) Var_74 - (MR_Unsigned) 1);
                Var_80 = hlds__du_type_layout__arg_word_desc_2_f_0(ArgsLocn_5, CellOffset_133);
                mercury__io__write_string_4_p_0(Stream_1, Var_80);
                mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", bits ");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), MinBitPos_47, &Var_270);
                mercury__io__write_string_4_p_0(Stream_1, Var_270);
                mercury__io__write_string_4_p_0(Stream_1, (MR_String) " to ");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), MaxBitPos_48, &Var_279);
                mercury__io__write_string_4_p_0(Stream_1, Var_279);
                switch (ForDevelopers_2) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_String Var_96;
                      MR_String Var_292;
                      MR_String Var_302;

                      Var_96 = hlds__du_type_layout__fill_kind_to_str_1_f_0(Fill_41);
                      mercury__io__write_string_4_p_0(Stream_1, (MR_String) " (partial_");
                      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "first");
                      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", shift ");
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), MinBitPos_47, &Var_292);
                      mercury__io__write_string_4_p_0(Stream_1, Var_292);
                      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", num_bits ");
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), NumBitsInt_46, &Var_302);
                      mercury__io__write_string_4_p_0(Stream_1, Var_302);
                      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", fill ");
                      mercury__io__write_string_4_p_0(Stream_1, Var_96);
                      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ")\n");
                    }
                    break;
                  case (MR_Integer) 0:
                    mercury__io__nl_3_p_0(Stream_1);
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Shift_159 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_30, (MR_Integer) 3))));
                MR_Word NumBits_160 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_30, (MR_Integer) 4))));
                MR_Word Fill_161 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_30, (MR_Integer) 6))) & (MR_Integer) 7);
                MR_Integer NumBitsInt_164 = (MR_Integer) (NumBits_160);
                MR_Integer MinBitPos_165 = (MR_Integer) (Shift_159);
                MR_Integer MaxBitPos_166;
                MR_Integer Var_167 = (MR_Integer) ((MR_Unsigned) MinBitPos_165 + (MR_Unsigned) NumBitsInt_164);
                MR_String Var_173;
                MR_Word CellOffset_190 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_30, (MR_Integer) 2))));
                MR_String Var_223;
                MR_String Var_232;

                MaxBitPos_166 = (MR_Integer) ((MR_Unsigned) Var_167 - (MR_Unsigned) 1);
                Var_173 = hlds__du_type_layout__arg_word_desc_2_f_0(ArgsLocn_5, CellOffset_190);
                mercury__io__write_string_4_p_0(Stream_1, Var_173);
                mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", bits ");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), MinBitPos_165, &Var_223);
                mercury__io__write_string_4_p_0(Stream_1, Var_223);
                mercury__io__write_string_4_p_0(Stream_1, (MR_String) " to ");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), MaxBitPos_166, &Var_232);
                mercury__io__write_string_4_p_0(Stream_1, Var_232);
                switch (ForDevelopers_2) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_String Var_146;
                      MR_String Var_245;
                      MR_String Var_255;

                      Var_146 = hlds__du_type_layout__fill_kind_to_str_1_f_0(Fill_161);
                      mercury__io__write_string_4_p_0(Stream_1, (MR_String) " (partial_");
                      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "shifted");
                      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", shift ");
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), MinBitPos_165, &Var_245);
                      mercury__io__write_string_4_p_0(Stream_1, Var_245);
                      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", num_bits ");
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), NumBitsInt_164, &Var_255);
                      mercury__io__write_string_4_p_0(Stream_1, Var_255);
                      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", fill ");
                      mercury__io__write_string_4_p_0(Stream_1, Var_146);
                      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ")\n");
                    }
                    break;
                  case (MR_Integer) 0:
                    mercury__io__nl_3_p_0(Stream_1);
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String Var_72;
                MR_Word CellOffset_134 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_30, (MR_Integer) 2))));

                Var_72 = hlds__du_type_layout__arg_word_desc_2_f_0(ArgsLocn_5, CellOffset_134);
                mercury__io__write_string_4_p_0(Stream_1, Var_72);
                mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", no bits\n");
              }
              break;
          }
          break;
      }
      Var_128 = (MR_Integer) ((MR_Unsigned) ArgNum_6 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_ArgNum_6 = Var_128;
      next_value_of_HeadVar__7_7 = CtorArgRepns_26;
      ArgNum_6 = next_value_of_ArgNum_6;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      continue;
    }
    break;
  }
}

static MR_String MR_CALL 
hlds__du_type_layout__fill_kind_to_str_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2 = ((&hlds__du_type_layout_vector_common_14[0 + HeadVar__1_1]))->hlds__du_type_layout__vector_common_type_14_0__vct_14_f_0;

    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__arg_word_desc_2_f_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__int__f_greater_or_equal_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__arg_word_desc_2_f_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__arg_word_desc__2942__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_String MR_CALL 
hlds__du_type_layout__arg_word_desc_2_f_0(
  MR_Word ArgsLocn_4,
  MR_Word CellOffset_5)
{
  {
    MR_bool succeeded;
    MR_String Desc_6;
    MR_Integer CellOffsetInt_7 = (MR_Integer) (CellOffset_5);

    switch (ArgsLocn_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_16;

          {
            Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[3]));
            MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (hlds__du_type_layout__arg_word_desc_2_f_0_1));
            MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (CellOffsetInt_7));
            MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) ((MR_Integer) -2));
          }
          mercury__require__expect_3_p_0(Var_16, (MR_String) "function \140hlds.du_type_layout.arg_word_desc\'/2", (MR_String) "unexpected offset for local arg");
          Desc_6 = (MR_String) "local word";
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_8;
          MR_String Var_21;

          {
            Var_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[3]));
            MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (hlds__du_type_layout__arg_word_desc_2_f_0_2));
            MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (CellOffsetInt_7));
            MR_hl_field(MR_mktag(0), Var_8, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_8, (MR_String) "function \140hlds.du_type_layout.arg_word_desc\'/2", (MR_String) "negative offset for remote arg");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), CellOffsetInt_7, &Var_21);
          Desc_6 = mercury__string__f_43_43_2_f_0((MR_String) "heap cell word ", Var_21);
        }
        break;
    }
    return Desc_6;
  }
}

static void MR_CALL 
hlds__du_type_layout__show_decisions_if_du_type_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__du_type_layout__show_decisions_for_ctor_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__du_type_layout__show_decisions_if_du_type_7_p_0(
  MR_Word Stream_8,
  MR_Word MaybePrimaryTags_9,
  MR_Word ShowWhichTypes_10,
  MR_Word ForDevelopers_11,
  MR_Word TypeCtorTypeDefn_12)
{
  {
    MR_Word TypeCtor_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorTypeDefn_12, (MR_Integer) 0))));
    MR_Word TypeDefn_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorTypeDefn_12, (MR_Integer) 1))));
    MR_Word ShowType_16;

    switch (ShowWhichTypes_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ShowType_16 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        {
          MR_Word TypeStatus_17;

          hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_15, &TypeStatus_17);
          ShowType_16 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_17);
        }
        break;
    }
    switch (ShowType_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Body_18;

          hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_15, &Body_18);
          switch (MR_tag((MR_Word) Body_18)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MaybeRepn_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body_18, (MR_Integer) 2))));
                MR_Word Repn_27;
                MR_Word CtorRepns_28;
                MR_Word DuTypeKind_31;
                MR_Word TypeCtorSymName_33;
                MR_Integer TypeCtorArity_34;
                MR_String TypeCtorStr_37;

                if ((MaybeRepn_25 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.show_decisions_if_du_type\'/7", (MR_String) "MaybeRepn = no");
                    return;
                  }
                else
                  Repn_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRepn_25, (MR_Integer) 0))));
                CtorRepns_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_27, (MR_Integer) 0))));
                DuTypeKind_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Repn_27, (MR_Integer) 3))));
                TypeCtorSymName_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_14, (MR_Integer) 0))));
                TypeCtorArity_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_14, (MR_Integer) 1))));
                if (((MR_tag((MR_Word) TypeCtorSymName_33)) == (MR_Integer) 1))
                {
                  MR_Word TypeCtorModuleName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_33, (MR_Integer) 0))));
                  MR_String TypeCtorName_36 = ((MR_String) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_33, (MR_Integer) 1))));
                  MR_String Var_55;
                  MR_String Var_104;
                  MR_String Var_112;
                  MR_String Var_113;
                  MR_String Var_115;

                  Var_55 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(TypeCtorModuleName_35, (MR_String) ".");
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), TypeCtorArity_34, &Var_104);
                  Var_112 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_104);
                  Var_113 = mercury__string__f_43_43_2_f_0(TypeCtorName_36, Var_112);
                  Var_115 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_113);
                  TypeCtorStr_37 = mercury__string__f_43_43_2_f_0(Var_55, Var_115);
                }
                else
                {
                  MR_String TypeCtorName_87 = ((MR_String) ((MR_hl_field(MR_mktag(0), TypeCtorSymName_33, (MR_Integer) 0))));
                  MR_String Var_95;
                  MR_String Var_103;

                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), TypeCtorArity_34, &Var_95);
                  Var_103 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_95);
                  TypeCtorStr_37 = mercury__string__f_43_43_2_f_0(TypeCtorName_87, Var_103);
                }
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\ntype constructor ");
                mercury__io__write_string_4_p_0(Stream_8, TypeCtorStr_37);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ": ");
                switch (MR_tag((MR_Word) DuTypeKind_31)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(DuTypeKind_31)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Integer Var_83;
                          MR_String Var_123;

                          Var_83 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), CtorRepns_28);
                          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "mercury enumeration type with ");
                          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), Var_83, &Var_123);
                          mercury__io__write_string_4_p_0(Stream_8, Var_123);
                          mercury__io__write_string_4_p_0(Stream_8, (MR_String) " function symbols\n");
                        }
                        break;
                      case (MR_Integer) 1:
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "dummy type\n");
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word Var_69;
                          MR_Box conv0_STATE_VARIABLE_IO_43;

                          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "general discriminated union type\n");
                          {
                            Var_69 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_7[3]));
                            MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (hlds__du_type_layout__show_decisions_if_du_type_7_p_0_1));
                            MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (Stream_8));
                            MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) (MaybePrimaryTags_9));
                            MR_hl_field(MR_mktag(0), Var_69, 5) = ((MR_Box) (ForDevelopers_11));
                            MR_hl_field(MR_mktag(0), Var_69, 6) = ((MR_Box) (TypeCtorStr_37));
                          }
                          mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_69, CtorRepns_28, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_43);
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer Var_77;
                      MR_String Var_134;

                      Var_77 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), CtorRepns_28);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "foreign enumeration type with ");
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), Var_77, &Var_134);
                      mercury__io__write_string_4_p_0(Stream_8, Var_134);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " function symbols\n");
                    }
                    break;
                  case (MR_Integer) 2:
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "notag type\n");
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Body_18, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                  }
                  break;
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__describe_sub_word_4_p_0(
  MR_Word SubWord_5,
  MR_Word * Pieces_6,
  MR_Integer STATE_VARIABLE_TotalNumBits_0_14,
  MR_Integer * STATE_VARIABLE_TotalNumBits_15)
{
  {
    MR_Integer SubWordNumBits_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SubWord_5, (MR_Integer) 0))));
    MR_Word Id_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubWord_5, (MR_Integer) 1))));
    MR_String NumBitsStr_10;
    MR_String Var_55;

    *STATE_VARIABLE_TotalNumBits_15 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TotalNumBits_0_14 + (MR_Unsigned) SubWordNumBits_8);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_9[2]), SubWordNumBits_8, &Var_55);
    NumBitsStr_10 = mercury__string__f_43_43_2_f_0((MR_String) "#bits = ", Var_55);
    switch (MR_tag((MR_Word) Id_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_47;
          MR_Word Var_50;
          MR_Word Var_51;

          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_51, 0) = ((MR_Box) (NumBitsStr_10));
          }
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[10])));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[72])));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Pieces_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[71])));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_47));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgName_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), Id_9, (MR_Integer) 1))));
          MR_Word Var_23;
          MR_Word Var_24;
          MR_Word Var_25;
          MR_Word Var_28;
          MR_Word Var_29;

          {
            Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (ArgName_13));
          }
          {
            Var_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_29, 0) = ((MR_Box) (NumBitsStr_10));
          }
          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[10])));
          }
          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[63])));
            MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
          }
          {
            Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
            MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Pieces_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[68])));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_23));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgNum_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Id_9, (MR_Integer) 0))));
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_40;
          MR_Word Var_41;

          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (ArgNum_11));
          }
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_41, 0) = ((MR_Box) (NumBitsStr_10));
          }
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
            MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[10])));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[70])));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_40));
          }
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
            MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Pieces_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[69])));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_35));
          }
        }
        break;
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
    MR_Integer conv0_STATE_VARIABLE_TotalNumBits_15;

    hlds__du_type_layout__describe_sub_word_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Pieces_6, ((MR_Integer) (wrapper_arg_3)), &conv0_STATE_VARIABLE_TotalNumBits_15);
    *wrapper_arg_2 = ((MR_Box) (conv1_Pieces_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_TotalNumBits_15));
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
    mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[8]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__du_type_layout_scalar_common_3[15]), SubWords_7, &SubWordPieceLists_8, ((MR_Box) ((MR_Integer) 0)), &conv2_TotalNumBits_9);
    TotalNumBits_9 = ((MR_Integer) (conv2_TotalNumBits_9));
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), SubWordPieceLists_8, &SubWordPieces_10);
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (TotalNumBits_9));
    }
    succeeded = (TotalNumBits_9 == (MR_Integer) 1);
    if (succeeded)
      Var_29 = (MR_String) "bit.";
    else
      Var_29 = (MR_String) "bits.";
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[10])));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[67])));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
    }
    Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), SubWordPieces_10, Var_22);
    *Pieces_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[57])), Var_21);
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
          Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (SubWord_6));
          MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_22 = (MR_Integer) ((MR_Unsigned) BinSize_5 - (MR_Unsigned) SubWordNumBits_9);
        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (Var_20));
          MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (Var_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Bins_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.insert_subword_into_first_fit_bin\'/4", (MR_String) "SubWordNumBits >= BinSize");
          return;
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
          RevSubWords_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RevSubWords_15, 0) = ((MR_Box) (SubWord_6));
          MR_hl_field(MR_mktag(1), RevSubWords_15, 1) = ((MR_Box) (RevSubWords0_13));
        }
        RemainingBitsInBin_16 = (MR_Integer) ((MR_Unsigned) RemainingBitsInBin0_14 - (MR_Unsigned) SubWordNumBits_9);
        {
          HeadBin_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadBin_17, 0) = ((MR_Box) (RevSubWords_15));
          MR_hl_field(MR_mktag(0), HeadBin_17, 1) = ((MR_Box) (RemainingBitsInBin_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
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

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__is_direct_arg_ctor__1920__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
      succeeded = (ConsArgs_18 != (MR_Word) ((MR_Unsigned) 0U));
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
            Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[3]));
            MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) (hlds__du_type_layout__is_direct_arg_ctor_7_p_0_1));
            MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_42, 3) = ((MR_Box) (ConsArity_19));
            MR_hl_field(MR_mktag(0), Var_42, 4) = ((MR_Box) (Var_45));
          }
          mercury__require__expect_3_p_0(Var_42, Var_43, Var_44);
          ArgType_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConsArg_21, (MR_Integer) 1))));
          succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(ArgType_23, &ArgTypeCtor_25, &ArgTypeCtorArgTypes_26);
          if (succeeded)
          {
            {
              ConsConsId_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
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
                                    ArgCond_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
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
                        mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.du_type_layout.module_visibilities_allow_direct_arg\'/2", (MR_String) "inappropriate status for type");
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
                    mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.du_type_layout.module_visibilities_allow_direct_arg\'/2", (MR_String) "inappropriate status for type");
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word TypeImportLocn_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), OldImportStatus_56, (MR_Integer) 0))) & (MR_Integer) 7);

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
                          MR_Word Var_65;
                          MR_Word ArgTypeStatus_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgCond_28, (MR_Integer) 0))));

                          Var_65 = (MR_Word) (ArgTypeStatus_66);
                          succeeded = ((MR_tag((MR_Word) Var_65)) == (MR_Integer) 2);
                          if (succeeded)
                          {
                            ArgImportLocn_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Var_65, (MR_Integer) 0))) & (MR_Integer) 7);
                            succeeded = (ArgImportLocn_60 == (MR_Integer) 4);
                            if (succeeded)
                              succeeded = (TypeImportLocn_59 != (MR_Integer) 4);
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
    MR_bool succeeded;
    MR_Integer SizeA_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word CtorA_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer SizeB_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word CtorB_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (SizeA_4 < SizeB_6);
    if (succeeded)
      *Result_8 = (MR_Integer) 1;
    else
    {
      succeeded = (SizeA_4 > SizeB_6);
      if (succeeded)
        *Result_8 = (MR_Integer) 2;
      else
      {
        uint32_t OrdinalA_10 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), CtorA_5, (MR_Integer) 0)));
        uint32_t OrdinalB_11 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), CtorB_7, (MR_Integer) 0)));

        succeeded = (OrdinalA_10 < OrdinalB_11);
        if (succeeded)
          *Result_8 = (MR_Integer) 1;
        else
        {
          succeeded = (OrdinalA_10 > OrdinalB_11);
          if (succeeded)
            *Result_8 = (MR_Integer) 2;
          else
            *Result_8 = (MR_Integer) 0;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__decide_complex_du_type_ctor_13_p_0_4(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__decide_complex_du_type_ctor__965__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__decide_complex_du_type_ctor_13_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__decide_complex_du_type_ctor__994__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__decide_complex_du_type_ctor_13_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__decide_complex_du_type_ctor__1004__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__decide_complex_du_type_ctor_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__decide_complex_du_type_ctor__969__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
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
  MR_Integer NumRemoteSectagBits_20,
  MR_Word Ctor_21,
  MR_Word * CtorRepn_22,
  MR_Word STATE_VARIABLE_MaybeTagwordArgs_0_67,
  MR_Word * STATE_VARIABLE_MaybeTagwordArgs_68,
  MR_Word STATE_VARIABLE_Specs_0_69,
  MR_Word * STATE_VARIABLE_Specs_70)
{
  {
    MR_bool succeeded;
    uint32_t Ordinal_25 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 0)));
    MR_Word MaybeExistConstraints_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 1))));
    MR_Word CtorSymName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 2))));
    MR_Word CtorArgs_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 3))));
    MR_Integer CtorArity_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 4))));
    MR_Word CtorContext_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_21, (MR_Integer) 5))));
    MR_Word ConsId_31;
    MR_Word CtorTag_32;
    MR_Word CtorArgRepns_35;
    MR_Box conv0_CtorTag_32;

    {
      ConsId_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_31, 0) = ((MR_Box) ((MR_Unsigned) 2U));
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
            {
              MR_Word Var_73;

              {
                Var_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (hlds__du_type_layout__decide_complex_du_type_ctor_13_p_0_2));
                MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (CtorArgs_28));
                MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_73, (MR_String) "predicate \140hlds.du_type_layout.decide_complex_du_type_ctor\'/13", (MR_String) "enum or dummy type has args");
              CtorArgRepns_35 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_MaybeTagwordArgs_68 = STATE_VARIABLE_MaybeTagwordArgs_0_67;
              *STATE_VARIABLE_Specs_70 = STATE_VARIABLE_Specs_0_69;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_87;
              MR_Word CtorMaybeTagwordArgs_99;

              {
                Var_87 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (hlds__du_type_layout__decide_complex_du_type_ctor_13_p_0_4));
                MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (MaybeExistConstraints_26));
                MR_hl_field(MR_mktag(0), Var_87, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_87, (MR_String) "predicate \140hlds.du_type_layout.decide_complex_du_type_ctor\'/13", (MR_String) "no_exist_constraints but exist_constraints");
              hlds__du_type_layout__decide_complex_du_ctor_remote_args_14_p_0(ModuleInfo_14, Params_15, ComponentTypeMap_16, TypeStatus_18, NumRemoteSectagBits_20, CtorTag_32, MaybeExistConstraints_26, CtorSymName_27, CtorContext_30, CtorArgs_28, &CtorArgRepns_35, &CtorMaybeTagwordArgs_99, STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
              switch (CtorMaybeTagwordArgs_99) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_MaybeTagwordArgs_68 = STATE_VARIABLE_MaybeTagwordArgs_0_67;
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_MaybeTagwordArgs_68 = (MR_Integer) 1;
                  break;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_73;

          {
            Var_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[2]));
            MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (hlds__du_type_layout__decide_complex_du_type_ctor_13_p_0_2));
            MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (CtorArgs_28));
            MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_73, (MR_String) "predicate \140hlds.du_type_layout.decide_complex_du_type_ctor\'/13", (MR_String) "enum or dummy type has args");
          CtorArgRepns_35 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_MaybeTagwordArgs_68 = STATE_VARIABLE_MaybeTagwordArgs_0_67;
          *STATE_VARIABLE_Specs_70 = STATE_VARIABLE_Specs_0_69;
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.decide_complex_du_type_ctor\'/13", (MR_String) "unexpected tag");
          return;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CtorTag_32, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 14:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.decide_complex_du_type_ctor\'/13", (MR_String) "unexpected tag");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_73;

              {
                Var_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (hlds__du_type_layout__decide_complex_du_type_ctor_13_p_0_2));
                MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (CtorArgs_28));
                MR_hl_field(MR_mktag(0), Var_73, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_73, (MR_String) "predicate \140hlds.du_type_layout.decide_complex_du_type_ctor\'/13", (MR_String) "enum or dummy type has args");
              CtorArgRepns_35 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_MaybeTagwordArgs_68 = STATE_VARIABLE_MaybeTagwordArgs_0_67;
              *STATE_VARIABLE_Specs_70 = STATE_VARIABLE_Specs_0_69;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word CtorMaybeTagwordArgs_100;

              hlds__du_type_layout__decide_complex_du_ctor_remote_args_14_p_0(ModuleInfo_14, Params_15, ComponentTypeMap_16, TypeStatus_18, NumRemoteSectagBits_20, CtorTag_32, MaybeExistConstraints_26, CtorSymName_27, CtorContext_30, CtorArgs_28, &CtorArgRepns_35, &CtorMaybeTagwordArgs_100, STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
              switch (CtorMaybeTagwordArgs_100) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_MaybeTagwordArgs_68 = STATE_VARIABLE_MaybeTagwordArgs_0_67;
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_MaybeTagwordArgs_68 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word LocalArgsTagInfo_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CtorTag_32, (MR_Integer) 1))));
              MR_Word LocalSectag_39;
              MR_Word Var_79;

              if ((LocalArgsTagInfo_37 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.decide_complex_du_type_ctor\'/13", (MR_String) "local_args_only_functor");
                  return;
                }
              else
                LocalSectag_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LocalArgsTagInfo_37, (MR_Integer) 1))));
              {
                Var_79 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (hlds__du_type_layout__decide_complex_du_type_ctor_13_p_0_3));
                MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (MaybeExistConstraints_26));
                MR_hl_field(MR_mktag(0), Var_79, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_79, (MR_String) "predicate \140hlds.du_type_layout.decide_complex_du_type_ctor\'/13", (MR_String) "shared_local_tag_with_args but exist_constraints");
              hlds__du_type_layout__decide_complex_du_ctor_local_args_5_p_0(Params_15, ComponentTypeMap_16, LocalSectag_39, CtorArgs_28, &CtorArgRepns_35);
              *STATE_VARIABLE_MaybeTagwordArgs_68 = STATE_VARIABLE_MaybeTagwordArgs_0_67;
              *STATE_VARIABLE_Specs_70 = STATE_VARIABLE_Specs_0_69;
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word CtorMaybeTagwordArgs_36;
              MR_Word Var_83;

              {
                Var_83 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[1]));
                MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (hlds__du_type_layout__decide_complex_du_type_ctor_13_p_0_1));
                MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (MaybeExistConstraints_26));
                MR_hl_field(MR_mktag(0), Var_83, 4) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__require__expect_3_p_0(Var_83, (MR_String) "predicate \140hlds.du_type_layout.decide_complex_du_type_ctor\'/13", (MR_String) "direct_arg_tag but exist_constraints");
              hlds__du_type_layout__decide_complex_du_ctor_remote_args_14_p_0(ModuleInfo_14, Params_15, ComponentTypeMap_16, TypeStatus_18, NumRemoteSectagBits_20, CtorTag_32, MaybeExistConstraints_26, CtorSymName_27, CtorContext_30, CtorArgs_28, &CtorArgRepns_35, &CtorMaybeTagwordArgs_36, STATE_VARIABLE_Specs_0_69, STATE_VARIABLE_Specs_70);
              switch (CtorMaybeTagwordArgs_36) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_MaybeTagwordArgs_68 = STATE_VARIABLE_MaybeTagwordArgs_0_67;
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_MaybeTagwordArgs_68 = (MR_Integer) 1;
                  break;
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *CtorRepn_22 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_Word) (Ordinal_25));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeExistConstraints_26));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (CtorSymName_27));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (CtorTag_32));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (CtorArgRepns_35));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (CtorArity_29));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (CtorContext_30));
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_if_complex_du_type_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Params_9,
  MR_Word ComponentTypeMap_10,
  MR_Word TypeCtorTypeDefn0_11,
  MR_Word * TypeCtorTypeDefn_12,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorTypeDefn0_11, (MR_Integer) 0))));
    MR_Word TypeDefn0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorTypeDefn0_11, (MR_Integer) 1))));
    MR_Word Body0_16;

    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn0_15, &Body0_16);
    switch (MR_tag((MR_Word) Body0_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *TypeCtorTypeDefn_12 = TypeCtorTypeDefn0_11;
          *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ctors_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_16, (MR_Integer) 0))));
          MR_Word MaybeRepn0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_16, (MR_Integer) 2))));

          if ((MaybeRepn0_19 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Repn_22;
            MR_Word Body_23;
            MR_Word TypeDefn_24;
            MR_Word Var_31;
            MR_Word Var_33;
            MR_Word TypeStatus_49;
            MR_Word SingleCtor_50;
            MR_Word Var_51;
            MR_Word Var_34;
            MR_Word Var_35;
            MR_Word Var_37;

            Var_31 = mercury__list__one_or_more_to_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Ctors_17);
            hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn0_15, &TypeStatus_49);
            succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SingleCtor_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 0))));
              Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 1))));
              succeeded = (Var_51 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
              hlds__du_type_layout__decide_complex_du_type_single_ctor_8_p_0(ModuleInfo_8, Params_9, ComponentTypeMap_10, TypeStatus_49, SingleCtor_50, &Repn_22, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
            else
              hlds__du_type_layout__decide_complex_du_type_general_9_p_0(ModuleInfo_8, Params_9, ComponentTypeMap_10, TypeCtor_14, TypeStatus_49, Var_31, &Repn_22, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
            {
              Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Repn_22));
            }
            Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_16, (MR_Integer) 0))));
            Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_16, (MR_Integer) 1))));
            Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_16, (MR_Integer) 3))));
            {
              Body_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Body_23, 0) = ((MR_Box) (Var_34));
              MR_hl_field(MR_mktag(1), Body_23, 1) = ((MR_Box) (Var_35));
              MR_hl_field(MR_mktag(1), Body_23, 2) = ((MR_Box) (Var_33));
              MR_hl_field(MR_mktag(1), Body_23, 3) = ((MR_Box) (Var_37));
            }
            hlds__hlds_data__set_type_defn_body_3_p_0(Body_23, TypeDefn0_15, &TypeDefn_24);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *TypeCtorTypeDefn_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeCtor_14));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeDefn_24));
            }
          }
          else
          {
            *TypeCtorTypeDefn_12 = TypeCtorTypeDefn0_11;
            *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *TypeCtorTypeDefn_12 = TypeCtorTypeDefn0_11;
          *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
        }
        break;
      case (MR_Integer) 3:
        {
          *TypeCtorTypeDefn_12 = TypeCtorTypeDefn0_11;
          *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_type_general_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_HeadVar__3_3;

    hlds__hlds_data__insert_ctor_repn_into_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv7_HeadVar__3_3));
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_type_general_9_p_0_4(
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
    MR_Word conv3_STATE_VARIABLE_MaybeTagwordArgs_68;
    MR_Word conv2_STATE_VARIABLE_Specs_70;

    hlds__du_type_layout__decide_complex_du_type_ctor_13_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), &conv4_CtorRepn_22, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_MaybeTagwordArgs_68, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_Specs_70);
    *wrapper_arg_2 = ((MR_Box) (conv4_CtorRepn_22));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_MaybeTagwordArgs_68));
    *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_70));
  }
}

static MR_Box MR_CALL 
hlds__du_type_layout__decide_complex_du_type_general_9_p_0_3(
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
hlds__du_type_layout__decide_complex_du_type_general_9_p_0_2(
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

static MR_bool MR_CALL 
hlds__du_type_layout__decide_complex_du_type_general_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__decide_complex_du_type_general__784__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_type_general_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Params_11,
  MR_Word ComponentTypeMap_12,
  MR_Word TypeCtor_13,
  MR_Word TypeStatus_14,
  MR_Word Ctors_15,
  MR_Word * Repn_16,
  MR_Word STATE_VARIABLE_Specs_0_63,
  MR_Word * STATE_VARIABLE_Specs_64)
{
  {
    MR_bool succeeded;
    MR_Word Target_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_11, (MR_Integer) 2))) >> 12)) & (MR_Integer) 3);
    MR_Word UsesConstructors_19;
    MR_Word MaybePrimaryTags_20;
    MR_Unsigned NumRemoteSectags_21;
    MR_Word CtorTagMap_22;
    MR_Word DirectArgFunctorNames_23;
    MR_Integer NumRemoteSectagBitsInt_49;
    uint8_t NumRemoteSectagBits_50;
    MR_Word CtorRepns0_52;
    MR_Word MaybeTagwordArgs_53;
    MR_Word CtorRepns_54;
    MR_Word CtorRepnMap_58;
    MR_Word CheaperTagTest_59;
    MR_Word MaybeDirectArgFunctorNames_60;
    MR_Word STATE_VARIABLE_Specs_70_70;
    MR_Word Var_87;
    MR_Word Var_94;
    MR_Box conv6_MaybeTagwordArgs_53;
    MR_Box conv5_STATE_VARIABLE_Specs_64;
    MR_Box conv8_CtorRepnMap_58;

    UsesConstructors_19 = hlds__du_type_layout__target_uses_constructors_1_f_0(Target_18);
    MaybePrimaryTags_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_11, (MR_Integer) 1))));
    if ((MaybePrimaryTags_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      switch (UsesConstructors_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_84;

            Var_84 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0));
            hlds__du_type_layout__assign_unshared_then_shared_remote_args_tags_7_p_0(TypeCtor_13, UINT8_C(0), UINT8_C(0), Ctors_15, &NumRemoteSectags_21, Var_84, &CtorTagMap_22);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_86;

            Var_86 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0));
            hlds__du_type_layout__assign_ctor_remote_args_tags_6_p_0(TypeCtor_13, Ctors_15, (MR_Unsigned) 0U, &NumRemoteSectags_21, Var_86, &CtorTagMap_22);
          }
          break;
      }
      DirectArgFunctorNames_23 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_70_70 = STATE_VARIABLE_Specs_0_63;
    }
    else
    {
      MR_Word MaxPtag_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePrimaryTags_20, (MR_Integer) 0))));
      MR_Integer NumPtagBits_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrimaryTags_20, (MR_Integer) 1))));
      uint8_t MaxPtagUint8_26;
      MR_Word Constants_27;
      MR_Word Functors_28;
      MR_Word MaybeDirectArgs_29;
      MR_Word DirectArgFunctors_38;
      MR_Word NonDirectArgFunctors_39;
      MR_Word LocalPackedFunctors_40;
      MR_Word NonLocalPackedFunctors_41;
      MR_Word LocalSectagBits_42;
      MR_Word MustMask_43;
      MR_Word LeftOverDirectArgFunctors_48;
      MR_Word Var_65;
      MR_Word STATE_VARIABLE_CtorTagMap_73_73;
      MR_Word STATE_VARIABLE_CtorTagMap_75_75;
      uint8_t STATE_VARIABLE_CurPtagUint8_76_76;
      uint8_t STATE_VARIABLE_CurPtagUint8_78_78;
      MR_Word STATE_VARIABLE_CtorTagMap_79_79;
      MR_Word Var_80;

      {
        Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (hlds__du_type_layout__decide_complex_du_type_general_9_p_0_1));
        MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (UsesConstructors_19));
        MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_65, (MR_String) "predicate \140hlds.du_type_layout.decide_complex_du_type_general\'/9", (MR_String) "have ptags but UsesConstructors = yes");
      MaxPtagUint8_26 = (uint8_t) (MaxPtag_24);
      hlds__du_type_layout__separate_out_constants_3_p_0(Ctors_15, &Constants_27, &Functors_28);
      MaybeDirectArgs_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_11, (MR_Integer) 2))) & (MR_Integer) 1);
      switch (MaybeDirectArgs_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            DirectArgFunctors_38 = (MR_Word) ((MR_Unsigned) 0U);
            DirectArgFunctorNames_23 = (MR_Word) ((MR_Unsigned) 0U);
            NonDirectArgFunctors_39 = Functors_28;
            STATE_VARIABLE_Specs_70_70 = STATE_VARIABLE_Specs_0_63;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorSymName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_13, (MR_Integer) 0))));
            MR_Word TypeCtorModuleName_32;
            MR_Word DirectArgMap_33;
            MR_Word AssertedDirectArgFunctors_35;
            MR_Word TypeIsImported_36;
            MR_Word TypeDefinedHere_37;
            MR_Word Var_69;
            MR_Word DirectArgMapEntry_34;
            MR_Box conv0_DirectArgMapEntry_34;

            mdbcomp__sym_name__det_sym_name_get_module_name_2_p_0(TypeCtorSymName_30, &TypeCtorModuleName_32);
            DirectArgMap_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_11, (MR_Integer) 3))));
            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[4]), DirectArgMap_33, ((MR_Box) (TypeCtor_13)), &conv0_DirectArgMapEntry_34);
            if (succeeded)
            {
              DirectArgMapEntry_34 = ((MR_Word) (conv0_DirectArgMapEntry_34));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              AssertedDirectArgFunctors_35 = DirectArgMapEntry_34;
            else
              AssertedDirectArgFunctors_35 = (MR_Word) ((MR_Unsigned) 0U);
            TypeIsImported_36 = hlds__status__type_status_is_imported_1_f_0(TypeStatus_14);
            TypeDefinedHere_37 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_14);
            {
              Var_69 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_7[2]));
              MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (hlds__du_type_layout__decide_complex_du_type_general_9_p_0_2));
              MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (ComponentTypeMap_12));
              MR_hl_field(MR_mktag(0), Var_69, 4) = ((MR_Box) (TypeCtorModuleName_32));
              MR_hl_field(MR_mktag(0), Var_69, 5) = ((MR_Box) (TypeStatus_14));
              MR_hl_field(MR_mktag(0), Var_69, 6) = ((MR_Box) (TypeIsImported_36));
              MR_hl_field(MR_mktag(0), Var_69, 7) = ((MR_Box) (TypeDefinedHere_37));
              MR_hl_field(MR_mktag(0), Var_69, 8) = ((MR_Box) (AssertedDirectArgFunctors_35));
            }
            mercury__list__filter_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Var_69, Functors_28, &DirectArgFunctors_38, &NonDirectArgFunctors_39);
            hlds__du_type_layout__check_direct_arg_assertions_4_p_0(AssertedDirectArgFunctors_35, NonDirectArgFunctors_39, STATE_VARIABLE_Specs_0_63, &STATE_VARIABLE_Specs_70_70);
            DirectArgFunctorNames_23 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&hlds__du_type_layout_scalar_common_3[13]), DirectArgFunctors_38);
          }
          break;
      }
      hlds__du_type_layout__compute_local_packable_functors_9_p_0(Params_11, ComponentTypeMap_12, NumPtagBits_25, Constants_27, NonDirectArgFunctors_39, &LocalPackedFunctors_40, &NonLocalPackedFunctors_41, &LocalSectagBits_42, &MustMask_43);
      mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), &STATE_VARIABLE_CtorTagMap_73_73);
      succeeded = (Constants_27 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (LocalPackedFunctors_40 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        STATE_VARIABLE_CurPtagUint8_76_76 = UINT8_C(0);
        STATE_VARIABLE_CtorTagMap_75_75 = STATE_VARIABLE_CtorTagMap_73_73;
      }
      else
      {
        MR_Word LocalsPtag_45 = (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0))));
        MR_Unsigned CurLocalSectag1_47;
        MR_Word STATE_VARIABLE_CtorTagMap_74_74;

        hlds__du_type_layout__assign_tags_to_constants_10_p_0(TypeCtor_13, LocalsPtag_45, NumPtagBits_25, LocalSectagBits_42, MustMask_43, (MR_Unsigned) 0U, &CurLocalSectag1_47, Constants_27, STATE_VARIABLE_CtorTagMap_73_73, &STATE_VARIABLE_CtorTagMap_74_74);
        hlds__du_type_layout__assign_tags_to_local_packed_functors_8_p_0(TypeCtor_13, LocalsPtag_45, NumPtagBits_25, LocalSectagBits_42, CurLocalSectag1_47, LocalPackedFunctors_40, STATE_VARIABLE_CtorTagMap_74_74, &STATE_VARIABLE_CtorTagMap_75_75);
        STATE_VARIABLE_CurPtagUint8_76_76 = (UINT8_C(0) + UINT8_C(1));
      }
      hlds__du_type_layout__assign_tags_to_direct_arg_functors_9_p_0(TypeCtor_13, MaxPtagUint8_26, STATE_VARIABLE_CurPtagUint8_76_76, &STATE_VARIABLE_CurPtagUint8_78_78, DirectArgFunctors_38, NonDirectArgFunctors_39, &LeftOverDirectArgFunctors_48, STATE_VARIABLE_CtorTagMap_75_75, &STATE_VARIABLE_CtorTagMap_79_79);
      Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), LeftOverDirectArgFunctors_48, NonLocalPackedFunctors_41);
      hlds__du_type_layout__assign_unshared_then_shared_remote_args_tags_7_p_0(TypeCtor_13, MaxPtagUint8_26, STATE_VARIABLE_CurPtagUint8_78_78, Var_80, &NumRemoteSectags_21, STATE_VARIABLE_CtorTagMap_79_79, &CtorTagMap_22);
    }
    succeeded = (NumRemoteSectags_21 == (MR_Unsigned) 0U);
    if (succeeded)
    {
      NumRemoteSectagBitsInt_49 = (MR_Integer) 0;
      NumRemoteSectagBits_50 = UINT8_C(0);
    }
    else
    {
      MR_Integer NumRemoteSectagsInt_51;

      NumRemoteSectagsInt_51 = mercury__uint__cast_to_int_1_f_0(NumRemoteSectags_21);
      mercury__int__log2_2_p_0(NumRemoteSectagsInt_51, &NumRemoteSectagBitsInt_49);
      NumRemoteSectagBits_50 = mercury__uint8__det_from_int_1_f_0(NumRemoteSectagBitsInt_49);
    }
    {
      Var_87 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_13[0]));
      MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (hlds__du_type_layout__decide_complex_du_type_general_9_p_0_4));
      MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (ModuleInfo_10));
      MR_hl_field(MR_mktag(0), Var_87, 4) = ((MR_Box) (Params_11));
      MR_hl_field(MR_mktag(0), Var_87, 5) = ((MR_Box) (ComponentTypeMap_12));
      MR_hl_field(MR_mktag(0), Var_87, 6) = ((MR_Box) (TypeCtor_13));
      MR_hl_field(MR_mktag(0), Var_87, 7) = ((MR_Box) (TypeStatus_14));
      MR_hl_field(MR_mktag(0), Var_87, 8) = ((MR_Box) (CtorTagMap_22));
      MR_hl_field(MR_mktag(0), Var_87, 9) = ((MR_Box) (NumRemoteSectagBitsInt_49));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_tagword_args_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[1]), Var_87, Ctors_15, &CtorRepns0_52, ((MR_Box) ((MR_Integer) 0)), &conv6_MaybeTagwordArgs_53, ((MR_Box) (STATE_VARIABLE_Specs_70_70)), &conv5_STATE_VARIABLE_Specs_64);
    MaybeTagwordArgs_53 = ((MR_Word) (conv6_MaybeTagwordArgs_53));
    *STATE_VARIABLE_Specs_64 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_64));
    switch (MaybeTagwordArgs_53) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        CtorRepns_54 = CtorRepns0_52;
        break;
      case (MR_Integer) 1:
        {
          MR_Unsigned SectagMask_55;
          MR_Word SectagBits_56;
          MR_Word SectagSize_57;
          MR_Unsigned Var_90;

          Var_90 = mercury__uint__f_60_60_2_f_0((MR_Unsigned) 1U, NumRemoteSectagBitsInt_49);
          SectagMask_55 = (Var_90 - (MR_Unsigned) 1U);
          {
            SectagBits_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SectagBits_56, 0) = ((MR_Box) (MR_Word) (NumRemoteSectagBits_50));
            MR_hl_field(MR_mktag(0), SectagBits_56, 1) = ((MR_Box) (SectagMask_55));
          }
          SectagSize_57 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (SectagBits_56)));
          hlds__du_type_layout__set_remote_args_sectag_size_3_p_0(SectagSize_57, CtorRepns0_52, &CtorRepns_54);
        }
        break;
    }
    Var_94 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[5]));
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&hlds__du_type_layout_scalar_common_3[4]), (MR_Word) (&hlds__du_type_layout_scalar_common_3[14]), CtorRepns_54, ((MR_Box) (Var_94)), &conv8_CtorRepnMap_58);
    CtorRepnMap_58 = ((MR_Word) (conv8_CtorRepnMap_58));
    hlds__du_type_layout__compute_cheaper_tag_test_3_p_0(TypeCtor_13, CtorRepns_54, &CheaperTagTest_59);
    if ((DirectArgFunctorNames_23 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeDirectArgFunctorNames_60 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        MaybeDirectArgFunctorNames_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeDirectArgFunctorNames_60, 0) = ((MR_Box) (DirectArgFunctorNames_23));
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *Repn_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CtorRepns_54));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CtorRepnMap_58));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (CheaperTagTest_59));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MaybeDirectArgFunctorNames_60));
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
      MR_Word Var_10;
      MR_Word Var_13;

      hlds__du_type_layout__separate_out_constants_3_p_0(Ctors_5, &ConstantsTail_8, &FunctorsTail_9);
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 1))));
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_4, (MR_Integer) 3))));
      succeeded = (Var_10 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
    MR_bool succeeded = (CtorRepns_5 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word CtorRepnA_7;
    MR_Word CtorRepnB_8;
    MR_Word Var_25;
    MR_Word Var_26;

    if (succeeded)
    {
      CtorRepnA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorRepns_5, (MR_Integer) 0))));
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CtorRepns_5, (MR_Integer) 1))));
      succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
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
          ConsIdA_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsIdA_23, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), ConsIdA_23, 1) = ((MR_Box) (CtorSymNameA_11));
          MR_hl_field(MR_mktag(3), ConsIdA_23, 2) = ((MR_Box) (CtorArityA_14));
          MR_hl_field(MR_mktag(3), ConsIdA_23, 3) = ((MR_Box) (TypeCtor_4));
        }
        {
          ConsIdB_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsIdB_24, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), ConsIdB_24, 1) = ((MR_Box) (CtorSymNameB_18));
          MR_hl_field(MR_mktag(3), ConsIdB_24, 2) = ((MR_Box) (CtorArityB_21));
          MR_hl_field(MR_mktag(3), ConsIdB_24, 3) = ((MR_Box) (TypeCtor_4));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
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
            ConsIdA_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConsIdA_29, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), ConsIdA_29, 1) = ((MR_Box) (CtorSymNameA_11));
            MR_hl_field(MR_mktag(3), ConsIdA_29, 2) = ((MR_Box) (CtorArityA_14));
            MR_hl_field(MR_mktag(3), ConsIdA_29, 3) = ((MR_Box) (TypeCtor_4));
          }
          {
            ConsIdB_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ConsIdB_30, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), ConsIdB_30, 1) = ((MR_Box) (CtorSymNameB_18));
            MR_hl_field(MR_mktag(3), ConsIdB_30, 2) = ((MR_Box) (CtorArityB_21));
            MR_hl_field(MR_mktag(3), ConsIdB_30, 3) = ((MR_Box) (TypeCtor_4));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
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
        SymNameArity_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
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
          Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (SymNameArity_19));
        }
        {
          Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
          MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[40])));
        }
        {
          Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[58])));
          MR_hl_field(MR_mktag(1), Pieces_20, 1) = ((MR_Box) (Var_27));
        }
        {
          Var_40 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Pieces_20));
        }
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Msg_21, 0) = ((MR_Box) (Context_18));
          MR_hl_field(MR_mktag(1), Msg_21, 1) = ((MR_Box) (Var_39));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Msg_21));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 24U));
          MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (Var_44));
        }
        {
          STATE_VARIABLE_Specs_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
    MR_Integer Var_80;
    MR_Word Var_47;
    MR_Word Var_90;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Constants_13, &NumConstants_19);
    Var_80 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 0))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 1))));
    Var_90 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
    succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (Var_90 == (MR_Integer) 1);
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
        MR_Word Var_50;
        MR_Box conv1_Var_50;
        MR_Integer NumSectagBits0_35;
        MR_Integer Var_71;
        MR_Integer Var_72;
        MR_Integer Var_73;

        mercury__list__sort_3_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_3[5]), (MR_Word) (&hlds__du_type_layout_scalar_common_3[12]), SizedPackableFunctors_22, &SortedSizedPackableFunctors_27);
        mercury__list__det_last_2_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_3[5]), SortedSizedPackableFunctors_27, &conv1_Var_50);
        Var_50 = ((MR_Word) (conv1_Var_50));
        MaxPackableBits_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_50, (MR_Integer) 0))));
        mercury__list__length_2_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_3[5]), SizedPackableFunctors_22, &NumPackable_30);
        Var_71 = (MR_Integer) ((MR_Unsigned) NumConstants_19 + (MR_Unsigned) NumPackable_30);
        hlds__du_type_layout__num_bits_needed_for_n_things_2_p_0(Var_71, &NumSectagBits0_35);
        Var_73 = (MR_Integer) ((MR_Unsigned) NumPtagBits_12 + (MR_Unsigned) NumSectagBits0_35);
        Var_72 = (MR_Integer) ((MR_Unsigned) Var_73 + (MR_Unsigned) MaxPackableBits_28);
        succeeded = (Var_72 <= Var_80);
        if (succeeded)
        {
          mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), SizedPackableFunctors_22, PackedFunctors_15);
          *NonPackedFunctors_16 = NonPackableFunctors_23;
          NumSectagBits_24 = NumSectagBits0_35;
        }
        else
        {
          MR_Integer NumSectagValues0_36;
          MR_Integer TakeLimit0_37;
          MR_Word RevSizedPackedFunctors0_39;
          MR_Word SizedNonPackedFunctors0_40;
          MR_Word RevSizedPackedFunctors_41;
          MR_Word SizedNonPackedFunctors_42;
          MR_Word RevPackedFunctors_43;
          MR_Word NonPackedPackableFunctors_44;
          MR_Word Var_77;
          MR_Integer NumSectagBits0_79;
          MR_Integer _NumTaken_38;

          hlds__du_type_layout__num_bits_needed_for_n_things_2_p_0(NumConstants_19, &NumSectagBits0_79);
          NumSectagValues0_36 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, NumSectagBits0_79);
          TakeLimit0_37 = (MR_Integer) ((MR_Unsigned) NumSectagValues0_36 - (MR_Unsigned) NumConstants_19);
          hlds__du_type_layout__take_local_packable_functors_constant_sectag_bits_10_p_0(Var_80, NumPtagBits_12, NumSectagBits0_79, TakeLimit0_37, (MR_Integer) 0, &_NumTaken_38, SortedSizedPackableFunctors_27, (MR_Word) ((MR_Unsigned) 0U), &RevSizedPackedFunctors0_39, &SizedNonPackedFunctors0_40);
          hlds__du_type_layout__take_local_packable_functors_incr_sectag_bits_8_p_0(Var_80, NumPtagBits_12, NumSectagBits0_79, &NumSectagBits_24, RevSizedPackedFunctors0_39, SizedNonPackedFunctors0_40, &RevSizedPackedFunctors_41, &SizedNonPackedFunctors_42);
          mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), RevSizedPackedFunctors_41, &RevPackedFunctors_43);
          mercury__assoc_list__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), SizedNonPackedFunctors_42, &NonPackedPackableFunctors_44);
          mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), RevPackedFunctors_43, PackedFunctors_15);
          Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), NonPackableFunctors_23, NonPackedPackableFunctors_44);
          mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), Var_77, NonPackedFunctors_16);
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
  hlds__du_type_layout__num_bits_needed_for_n_things_loop_3_p_0(NumSharers_3, (MR_Integer) 0, NumBits_4);
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
      MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) NumBits0_5 + (MR_Unsigned) 1);
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
    NumBitsMask_5 = (MR_Integer) ((MR_Unsigned) Var_8 - (MR_Unsigned) 1);
    succeeded = mercury__uint8__from_int_2_p_0(NumBits_3, &NumBitsUint8_6);
    if (succeeded)
      succeeded = mercury__uint__from_int_2_p_0(NumBitsMask_5, &NumBitsMaskUint_7);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *SectagBits_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_Word) (NumBitsUint8_6));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NumBitsMaskUint_7));
      }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.compute_sectag_bits\'/2", (MR_String) "NumBitsNeeded does not fit in 8 bits");
        return;
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
      MR_Integer NumBits_17;
      MR_Integer Limit_16;
      MR_Word Args_40;
      MR_Word LeftOverArgs_42;
      MR_Integer Var_44;
      MR_Word Var_46;
      MR_Word _PackableArgs_41;

      hlds__du_type_layout__separate_out_local_sectag_packable_5_p_0(Params_1, ComponentTypeMap_2, Ctors_11, &PackableTail_14, &NonPackableTail_15);
      Limit_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_1, (MR_Integer) 0))));
      Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 1))));
      Args_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_10, (MR_Integer) 3))));
      succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_44 = (MR_Integer) 0;
        hlds__du_type_layout__find_initial_args_packable_within_limit_8_p_0(Params_1, ComponentTypeMap_2, Limit_16, Var_44, &NumBits_17, Args_40, &_PackableArgs_41, &LeftOverArgs_42);
        succeeded = (LeftOverArgs_42 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word Var_18;

        {
          Var_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (NumBits_17));
          MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (Ctor_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PackableTail_14));
        }
        *HeadVar__5_5 = NonPackableTail_15;
      }
      else
      {
        *HeadVar__4_4 = PackableTail_14;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Ctor_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NonPackableTail_15));
        }
      }
    }
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
      MR_Integer MaxPackableBits_19;
      MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevPackedFunctors0_13, (MR_Integer) 0))));
      MR_Integer Var_45;
      MR_Integer Var_46;
      MR_Integer Var_47;

      MaxPackableBits_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 0))));
      Var_47 = (MR_Integer) ((MR_Unsigned) NumPtagBits_10 + (MR_Unsigned) NumSectagBits0_11);
      Var_46 = (MR_Integer) ((MR_Unsigned) Var_47 + (MR_Unsigned) MaxPackableBits_19);
      Var_45 = (MR_Integer) ((MR_Unsigned) Var_46 + (MR_Unsigned) 1);
      succeeded = (Var_45 <= NumArgPackBits_9);
    }
    if (succeeded)
    {
      MR_Integer NumSectagBits1_22 = (MR_Integer) ((MR_Unsigned) NumSectagBits0_11 + (MR_Unsigned) 1);
      MR_Integer TakeLimit_23;
      MR_Integer NumTaken_24;
      MR_Word RevPackedFunctors1_25;
      MR_Word NonPackedFunctors1_26;
      MR_Integer Var_50;
      MR_Integer Var_52;

      Var_50 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, NumSectagBits1_22);
      Var_52 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, NumSectagBits0_11);
      TakeLimit_23 = (MR_Integer) ((MR_Unsigned) Var_50 - (MR_Unsigned) Var_52);
      hlds__du_type_layout__take_local_packable_functors_constant_sectag_bits_10_p_0(NumArgPackBits_9, NumPtagBits_10, NumSectagBits1_22, TakeLimit_23, (MR_Integer) 0, &NumTaken_24, NonPackedFunctors0_14, RevPackedFunctors0_13, &RevPackedFunctors1_25, &NonPackedFunctors1_26);
      succeeded = (NumTaken_24 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer next_value_of_NumSectagBits0_11 = NumSectagBits1_22;
        MR_Word next_value_of_RevPackedFunctors0_13 = RevPackedFunctors1_25;
        MR_Word next_value_of_NonPackedFunctors0_14 = NonPackedFunctors1_26;

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
      MR_Integer Var_58;
      MR_Integer Var_59;

      succeeded = (TakeLimit_4 > (MR_Integer) 0);
      if (succeeded)
      {
        Var_59 = (MR_Integer) ((MR_Unsigned) PtagBits_2 + (MR_Unsigned) SectagBits_3);
        Var_58 = (MR_Integer) ((MR_Unsigned) Var_59 + (MR_Unsigned) PackableBits_30);
        succeeded = (Var_58 <= ArgPackBits_1);
      }
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_RevPackedFunctors_63_63;
        MR_Integer STATE_VARIABLE_NumTaken_64_64;
        MR_Integer Var_66;
        MR_Integer next_value_of_TakeLimit_4;
        MR_Integer next_value_of_STATE_VARIABLE_NumTaken_0_5;
        MR_Word next_value_of_HeadVar__7_7;
        MR_Word next_value_of_STATE_VARIABLE_RevPackedFunctors_0_8;

        {
          STATE_VARIABLE_RevPackedFunctors_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPackedFunctors_63_63, 0) = ((MR_Box) (PackableFunctor_26));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPackedFunctors_63_63, 1) = ((MR_Box) (STATE_VARIABLE_RevPackedFunctors_0_8));
        }
        STATE_VARIABLE_NumTaken_64_64 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumTaken_0_5 + (MR_Unsigned) 1);
        Var_66 = (MR_Integer) ((MR_Unsigned) TakeLimit_4 - (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_TakeLimit_4 = Var_66;
        next_value_of_STATE_VARIABLE_NumTaken_0_5 = STATE_VARIABLE_NumTaken_64_64;
        next_value_of_HeadVar__7_7 = PackableFunctors_27;
        next_value_of_STATE_VARIABLE_RevPackedFunctors_0_8 = STATE_VARIABLE_RevPackedFunctors_63_63;
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
hlds__du_type_layout__assign_ctor_remote_args_tags_6_p_0(
  MR_Word TypeCtor_1,
  MR_Word HeadVar__2_2,
  MR_Unsigned STATE_VARIABLE_CurData_0_3,
  MR_Unsigned * STATE_VARIABLE_CurData_4,
  MR_Word STATE_VARIABLE_CtorTagMap_0_5,
  MR_Word * STATE_VARIABLE_CtorTagMap_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CtorTagMap_6 = STATE_VARIABLE_CtorTagMap_0_5;
      *STATE_VARIABLE_CurData_4 = STATE_VARIABLE_CurData_0_3;
    }
    else
    {
      MR_Word Ctor_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Ctors_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word SymName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_15, (MR_Integer) 2))));
      MR_Integer Arity_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_15, (MR_Integer) 4))));
      MR_Word ConsId_25;
      MR_Word ConsTag_26;
      MR_Word Var_31;
      MR_Word STATE_VARIABLE_CtorTagMap_32_32;
      MR_Unsigned STATE_VARIABLE_CurData_33_33;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Unsigned next_value_of_STATE_VARIABLE_CurData_0_3;
      MR_Word next_value_of_STATE_VARIABLE_CtorTagMap_0_5;

      {
        ConsId_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_25, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), ConsId_25, 1) = ((MR_Box) (SymName_21));
        MR_hl_field(MR_mktag(3), ConsId_25, 2) = ((MR_Box) (Arity_23));
        MR_hl_field(MR_mktag(3), ConsId_25, 3) = ((MR_Box) (TypeCtor_1));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) (STATE_VARIABLE_CurData_0_3));
      }
      {
        ConsTag_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsTag_26, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(MR_mktag(3), ConsTag_26, 1) = ((MR_Box) (Var_31));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), ((MR_Box) (ConsId_25)), ((MR_Box) (ConsTag_26)), STATE_VARIABLE_CtorTagMap_0_5, &STATE_VARIABLE_CtorTagMap_32_32);
      STATE_VARIABLE_CurData_33_33 = (STATE_VARIABLE_CurData_0_3 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Ctors_16;
      next_value_of_STATE_VARIABLE_CurData_0_3 = STATE_VARIABLE_CurData_33_33;
      next_value_of_STATE_VARIABLE_CtorTagMap_0_5 = STATE_VARIABLE_CtorTagMap_32_32;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_CurData_0_3 = next_value_of_STATE_VARIABLE_CurData_0_3;
      STATE_VARIABLE_CtorTagMap_0_5 = next_value_of_STATE_VARIABLE_CtorTagMap_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__assign_unshared_then_shared_remote_args_tags_7_p_0(
  MR_Word TypeCtor_1,
  uint8_t MaxPtagUint8_2,
  uint8_t STATE_VARIABLE_CurPtagUint8_0_3,
  MR_Word HeadVar__4_4,
  MR_Unsigned * HeadVar__5_5,
  MR_Word STATE_VARIABLE_CtorTagMap_0_6,
  MR_Word * STATE_VARIABLE_CtorTagMap_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Unsigned) 0U;
      *STATE_VARIABLE_CtorTagMap_7 = STATE_VARIABLE_CtorTagMap_0_6;
    }
    else
    {
      MR_Word Ctor_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Ctors_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Name_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_17, (MR_Integer) 2))));
      MR_Integer Arity_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_17, (MR_Integer) 4))));
      MR_Word ConsId_27;

      {
        ConsId_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_27, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), ConsId_27, 1) = ((MR_Box) (Name_23));
        MR_hl_field(MR_mktag(3), ConsId_27, 2) = ((MR_Box) (Arity_25));
        MR_hl_field(MR_mktag(3), ConsId_27, 3) = ((MR_Box) (TypeCtor_1));
      }
      succeeded = (STATE_VARIABLE_CurPtagUint8_0_3 == MaxPtagUint8_2);
      if (succeeded)
      {
        succeeded = (Ctors_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
      {
        MR_Word Var_36 = (MR_Word) (STATE_VARIABLE_CurPtagUint8_0_3);

        hlds__du_type_layout__assign_shared_remote_args_tags_7_p_0(TypeCtor_1, Var_36, HeadVar__4_4, (MR_Unsigned) 0U, HeadVar__5_5, STATE_VARIABLE_CtorTagMap_0_6, STATE_VARIABLE_CtorTagMap_7);
      }
      else
      {
        MR_Word ConsTag_32;
        MR_Word Var_39;
        MR_Word Var_40 = (MR_Word) (STATE_VARIABLE_CurPtagUint8_0_3);
        MR_Word STATE_VARIABLE_CtorTagMap_41_41;
        uint8_t STATE_VARIABLE_CurPtagUint8_42_42;
        uint8_t next_value_of_STATE_VARIABLE_CurPtagUint8_0_3;
        MR_Word next_value_of_HeadVar__4_4;
        MR_Word next_value_of_STATE_VARIABLE_CtorTagMap_0_6;

        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
        }
        {
          ConsTag_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsTag_32, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(MR_mktag(3), ConsTag_32, 1) = ((MR_Box) (Var_39));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), ((MR_Box) (ConsId_27)), ((MR_Box) (ConsTag_32)), STATE_VARIABLE_CtorTagMap_0_6, &STATE_VARIABLE_CtorTagMap_41_41);
        STATE_VARIABLE_CurPtagUint8_42_42 = (STATE_VARIABLE_CurPtagUint8_0_3 + UINT8_C(1));
        // direct tailcall eliminated
        ;
        next_value_of_STATE_VARIABLE_CurPtagUint8_0_3 = STATE_VARIABLE_CurPtagUint8_42_42;
        next_value_of_HeadVar__4_4 = Ctors_18;
        next_value_of_STATE_VARIABLE_CtorTagMap_0_6 = STATE_VARIABLE_CtorTagMap_41_41;
        STATE_VARIABLE_CurPtagUint8_0_3 = next_value_of_STATE_VARIABLE_CurPtagUint8_0_3;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_CtorTagMap_0_6 = next_value_of_STATE_VARIABLE_CtorTagMap_0_6;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__assign_shared_remote_args_tags_7_p_0(
  MR_Word TypeCtor_1,
  MR_Word Ptag_2,
  MR_Word HeadVar__3_3,
  MR_Unsigned STATE_VARIABLE_CurRemoteSectag_0_4,
  MR_Unsigned * STATE_VARIABLE_CurRemoteSectag_5,
  MR_Word STATE_VARIABLE_CtorTagMap_0_6,
  MR_Word * STATE_VARIABLE_CtorTagMap_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CtorTagMap_7 = STATE_VARIABLE_CtorTagMap_0_6;
      *STATE_VARIABLE_CurRemoteSectag_5 = STATE_VARIABLE_CurRemoteSectag_0_4;
    }
    else
    {
      MR_Word Ctor_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Ctors_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SymName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_18, (MR_Integer) 2))));
      MR_Integer Arity_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_18, (MR_Integer) 4))));
      MR_Word ConsId_28;
      MR_Word RemoteSectag_29;
      MR_Word ConsTag_30;
      MR_Word Var_36;
      MR_Word STATE_VARIABLE_CtorTagMap_37_37;
      MR_Unsigned STATE_VARIABLE_CurRemoteSectag_38_38;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Unsigned next_value_of_STATE_VARIABLE_CurRemoteSectag_0_4;
      MR_Word next_value_of_STATE_VARIABLE_CtorTagMap_0_6;

      {
        ConsId_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_28, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), ConsId_28, 1) = ((MR_Box) (SymName_24));
        MR_hl_field(MR_mktag(3), ConsId_28, 2) = ((MR_Box) (Arity_26));
        MR_hl_field(MR_mktag(3), ConsId_28, 3) = ((MR_Box) (TypeCtor_1));
      }
      {
        RemoteSectag_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), RemoteSectag_29, 0) = ((MR_Box) (STATE_VARIABLE_CurRemoteSectag_0_4));
        MR_hl_field(MR_mktag(0), RemoteSectag_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_36, 0) = ((MR_Box) (Ptag_2));
        MR_hl_field(MR_mktag(2), Var_36, 1) = ((MR_Box) (RemoteSectag_29));
      }
      {
        ConsTag_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsTag_30, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(MR_mktag(3), ConsTag_30, 1) = ((MR_Box) (Var_36));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), ((MR_Box) (ConsId_28)), ((MR_Box) (ConsTag_30)), STATE_VARIABLE_CtorTagMap_0_6, &STATE_VARIABLE_CtorTagMap_37_37);
      STATE_VARIABLE_CurRemoteSectag_38_38 = (STATE_VARIABLE_CurRemoteSectag_0_4 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Ctors_19;
      next_value_of_STATE_VARIABLE_CurRemoteSectag_0_4 = STATE_VARIABLE_CurRemoteSectag_38_38;
      next_value_of_STATE_VARIABLE_CtorTagMap_0_6 = STATE_VARIABLE_CtorTagMap_37_37;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_CurRemoteSectag_0_4 = next_value_of_STATE_VARIABLE_CurRemoteSectag_0_4;
      STATE_VARIABLE_CtorTagMap_0_6 = next_value_of_STATE_VARIABLE_CtorTagMap_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__du_type_layout__assign_tags_to_direct_arg_functors_9_p_0(
  MR_Word TypeCtor_1,
  uint8_t MaxPtagUint8_2,
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

      {
        ConsId_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_33, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), ConsId_33, 1) = ((MR_Box) (Name_29));
        MR_hl_field(MR_mktag(3), ConsId_33, 2) = ((MR_Box) (Arity_31));
        MR_hl_field(MR_mktag(3), ConsId_33, 3) = ((MR_Box) (TypeCtor_1));
      }
      succeeded = (HeadVar__3_3 == MaxPtagUint8_2);
      if (succeeded)
      {
        succeeded = (DirectArgCtors_23 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
        if (!(succeeded))
        {
          succeeded = (NonDirectArgCtors_6 != (MR_Word) ((MR_Unsigned) 0U));
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
        MR_Word ConsTag_38;
        MR_Word Var_43 = (MR_Word) (HeadVar__3_3);
        MR_Word STATE_VARIABLE_CtorTagMap_44_44;
        uint8_t STATE_VARIABLE_CurPtagUint8_45_45;
        uint8_t next_value_of_HeadVar__3_3;
        MR_Word next_value_of_HeadVar__5_5;
        MR_Word next_value_of_STATE_VARIABLE_CtorTagMap_0_8;

        {
          ConsTag_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConsTag_38, 0) = ((MR_Box) ((MR_Unsigned) 13U));
          MR_hl_field(MR_mktag(3), ConsTag_38, 1) = ((MR_Box) (Var_43));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), ((MR_Box) (ConsId_33)), ((MR_Box) (ConsTag_38)), STATE_VARIABLE_CtorTagMap_0_8, &STATE_VARIABLE_CtorTagMap_44_44);
        STATE_VARIABLE_CurPtagUint8_45_45 = (HeadVar__3_3 + UINT8_C(1));
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = STATE_VARIABLE_CurPtagUint8_45_45;
        next_value_of_HeadVar__5_5 = DirectArgCtors_23;
        next_value_of_STATE_VARIABLE_CtorTagMap_0_8 = STATE_VARIABLE_CtorTagMap_44_44;
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
  MR_Unsigned CurSectag_5,
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
      MR_Word Var_40;
      MR_Word STATE_VARIABLE_CtorTagMap_41_41;
      MR_Unsigned Var_42;
      MR_Unsigned next_value_of_CurSectag_5;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_CtorTagMap_0_7;

      {
        ConsId_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_31, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), ConsId_31, 1) = ((MR_Box) (SymName_27));
        MR_hl_field(MR_mktag(3), ConsId_31, 2) = ((MR_Box) (Arity_29));
        MR_hl_field(MR_mktag(3), ConsId_31, 3) = ((MR_Box) (TypeCtor_1));
      }
      PtagUint8_32 = (uint8_t) (Ptag_2);
      Var_38 = mercury__uint__f_60_60_2_f_0(CurSectag_5, NumPtagBits_3);
      Var_39 = mercury__uint8__cast_to_uint_1_f_0(PtagUint8_32);
      PrimSec_33 = (Var_38 | Var_39);
      {
        LocalSectag_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), LocalSectag_34, 0) = ((MR_Box) (CurSectag_5));
        MR_hl_field(MR_mktag(0), LocalSectag_34, 1) = ((MR_Box) (PrimSec_33));
        MR_hl_field(MR_mktag(0), LocalSectag_34, 2) = ((MR_Box) (SectagBits_4));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Ptag_2));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (LocalSectag_34));
      }
      {
        ConsTag_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsTag_35, 0) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(3), ConsTag_35, 1) = ((MR_Box) (Var_40));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), ((MR_Box) (ConsId_31)), ((MR_Box) (ConsTag_35)), STATE_VARIABLE_CtorTagMap_0_7, &STATE_VARIABLE_CtorTagMap_41_41);
      Var_42 = (CurSectag_5 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_CurSectag_5 = Var_42;
      next_value_of_HeadVar__6_6 = Ctors_23;
      next_value_of_STATE_VARIABLE_CtorTagMap_0_7 = STATE_VARIABLE_CtorTagMap_41_41;
      CurSectag_5 = next_value_of_CurSectag_5;
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
  MR_Unsigned STATE_VARIABLE_CurSectag_0_6,
  MR_Unsigned * STATE_VARIABLE_CurSectag_7,
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
      *STATE_VARIABLE_CurSectag_7 = STATE_VARIABLE_CurSectag_0_6;
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
      MR_Unsigned STATE_VARIABLE_CurSectag_49_49;
      MR_Unsigned next_value_of_STATE_VARIABLE_CurSectag_0_6;
      MR_Word next_value_of_HeadVar__8_8;
      MR_Word next_value_of_STATE_VARIABLE_CtorTagMap_0_9;

      {
        ConsId_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_37, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), ConsId_37, 1) = ((MR_Box) (SymName_33));
        MR_hl_field(MR_mktag(3), ConsId_37, 2) = ((MR_Box) (Arity_35));
        MR_hl_field(MR_mktag(3), ConsId_37, 3) = ((MR_Box) (TypeCtor_1));
      }
      PtagUint8_38 = (uint8_t) (Ptag_2);
      Var_46 = mercury__uint__f_60_60_2_f_0(STATE_VARIABLE_CurSectag_0_6, NumPtagBits_3);
      Var_47 = mercury__uint8__cast_to_uint_1_f_0(PtagUint8_38);
      PrimSec_39 = (Var_46 | Var_47);
      {
        LocalSectag_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), LocalSectag_40, 0) = ((MR_Box) (STATE_VARIABLE_CurSectag_0_6));
        MR_hl_field(MR_mktag(0), LocalSectag_40, 1) = ((MR_Box) (PrimSec_39));
        MR_hl_field(MR_mktag(0), LocalSectag_40, 2) = ((MR_Box) (SectagBits_4));
      }
      {
        ConsTag_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsTag_41, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), ConsTag_41, 1) = ((MR_Box) (Ptag_2));
        MR_hl_field(MR_mktag(3), ConsTag_41, 2) = ((MR_Box) (LocalSectag_40));
        MR_hl_field(MR_mktag(3), ConsTag_41, 3) = (MR_Box) ((MR_Unsigned) (MustMask_5));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), ((MR_Box) (ConsId_37)), ((MR_Box) (ConsTag_41)), STATE_VARIABLE_CtorTagMap_0_9, &STATE_VARIABLE_CtorTagMap_48_48);
      STATE_VARIABLE_CurSectag_49_49 = (STATE_VARIABLE_CurSectag_0_6 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_CurSectag_0_6 = STATE_VARIABLE_CurSectag_49_49;
      next_value_of_HeadVar__8_8 = Ctors_29;
      next_value_of_STATE_VARIABLE_CtorTagMap_0_9 = STATE_VARIABLE_CtorTagMap_48_48;
      STATE_VARIABLE_CurSectag_0_6 = next_value_of_STATE_VARIABLE_CurSectag_0_6;
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
hlds__du_type_layout__set_remote_args_sectag_size_3_p_0(
  MR_Word SectagSize_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word CtorRepn0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word CtorRepns0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word CtorRepn_8;
    MR_Word CtorRepns_9;
    MR_Word ConsTag0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn0_6, (MR_Integer) 3))));
    uint32_t Var_50 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), CtorRepn0_6, (MR_Integer) 0)));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn0_6, (MR_Integer) 1))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn0_6, (MR_Integer) 2))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn0_6, (MR_Integer) 4))));
    MR_Integer Var_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CtorRepn0_6, (MR_Integer) 5))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorRepn0_6, (MR_Integer) 6))));

    switch (MR_tag((MR_Word) ConsTag0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        CtorRepn_8 = CtorRepn0_6;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        CtorRepn_8 = CtorRepn0_6;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag0_10, (MR_Integer) 0))))) {
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
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
            CtorRepn_8 = CtorRepn0_6;
            break;
          case (MR_Integer) 11:
            {
              MR_Word RemoteArgsTagInfo0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag0_10, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) RemoteArgsTagInfo0_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  CtorRepn_8 = CtorRepn0_6;
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 3:
                  CtorRepn_8 = CtorRepn0_6;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Ptag_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo0_11, (MR_Integer) 0))));
                    MR_Word RemoteSectag0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo0_11, (MR_Integer) 1))));
                    MR_Unsigned Sectag_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RemoteSectag0_13, (MR_Integer) 0))));
                    MR_Word RemoteSectag_16;
                    MR_Word RemoteArgsTagInfo_17;
                    MR_Word ConsTag_18;

                    {
                      RemoteSectag_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), RemoteSectag_16, 0) = ((MR_Box) (Sectag_14));
                      MR_hl_field(MR_mktag(0), RemoteSectag_16, 1) = ((MR_Box) (SectagSize_1));
                    }
                    {
                      RemoteArgsTagInfo_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_17, 0) = ((MR_Box) (Ptag_12));
                      MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_17, 1) = ((MR_Box) (RemoteSectag_16));
                    }
                    {
                      ConsTag_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConsTag_18, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                      MR_hl_field(MR_mktag(3), ConsTag_18, 1) = ((MR_Box) (RemoteArgsTagInfo_17));
                    }
                    {
                      CtorRepn_8 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), CtorRepn_8, 0) = ((MR_Box) (MR_Word) (Var_50));
                      MR_hl_field(MR_mktag(0), CtorRepn_8, 1) = ((MR_Box) (Var_51));
                      MR_hl_field(MR_mktag(0), CtorRepn_8, 2) = ((MR_Box) (Var_52));
                      MR_hl_field(MR_mktag(0), CtorRepn_8, 3) = ((MR_Box) (ConsTag_18));
                      MR_hl_field(MR_mktag(0), CtorRepn_8, 4) = ((MR_Box) (Var_53));
                      MR_hl_field(MR_mktag(0), CtorRepn_8, 5) = ((MR_Box) (Var_54));
                      MR_hl_field(MR_mktag(0), CtorRepn_8, 6) = ((MR_Box) (Var_55));
                    }
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    hlds__du_type_layout__set_remote_args_sectag_size_3_p_0(SectagSize_1, CtorRepns0_7, &CtorRepns_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CtorRepn_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (CtorRepns_9));
    }
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
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36)
{
  {
    MR_bool succeeded;
    uint32_t Ordinal_16 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), SingleCtor_13, (MR_Integer) 0)));
    MR_Word MaybeExistConstraints_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleCtor_13, (MR_Integer) 1))));
    MR_Word SingleCtorSymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleCtor_13, (MR_Integer) 2))));
    MR_Word SingleCtorArgs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleCtor_13, (MR_Integer) 3))));
    MR_Integer SingleCtorArity_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SingleCtor_13, (MR_Integer) 4))));
    MR_Word SingleCtorContext_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SingleCtor_13, (MR_Integer) 5))));
    MR_Word SingleCtorTag_26;
    MR_Word SingleCtorArgRepns_28;
    MR_Word SingleCtorRepn_31;
    MR_Word CtorRepnMap_32;
    MR_String Var_48;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Integer NumPtagBits_23;
    MR_Integer Limit_24;
    MR_Word Var_37;
    MR_Integer Var_54;
    MR_Word Var_64;
    MR_Integer _NumBits_25;

    succeeded = (MaybeExistConstraints_17 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 0))));
      Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 1))));
      Var_64 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
      succeeded = (Var_64 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          NumPtagBits_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_37, (MR_Integer) 1))));
          Limit_24 = (MR_Integer) ((MR_Unsigned) Var_54 - (MR_Unsigned) NumPtagBits_23);
          succeeded = hlds__du_type_layout__ctor_has_all_packable_args_within_limit_5_p_0(Params_10, ComponentTypeMap_11, SingleCtor_13, Limit_24, &_NumBits_25);
        }
      }
    }
    if (succeeded)
    {
      SingleCtorTag_26 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[65]));
      hlds__du_type_layout__decide_complex_du_ctor_local_args_5_p_0(Params_10, ComponentTypeMap_11, (MR_Word) (&hlds__du_type_layout_scalar_common_3[8]), SingleCtorArgs_19, &SingleCtorArgRepns_28);
      *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_0_35;
    }
    else
    {
      MR_Word _MaybeTagwordArgs_30;

      SingleCtorTag_26 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[66]));
      hlds__du_type_layout__decide_complex_du_ctor_remote_args_14_p_0(ModuleInfo_9, Params_10, ComponentTypeMap_11, TypeStatus_12, (MR_Integer) 0, SingleCtorTag_26, MaybeExistConstraints_17, SingleCtorSymName_18, SingleCtorContext_21, SingleCtorArgs_19, &SingleCtorArgRepns_28, &_MaybeTagwordArgs_30, STATE_VARIABLE_Specs_0_35, STATE_VARIABLE_Specs_36);
    }
    {
      SingleCtorRepn_31 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SingleCtorRepn_31, 0) = ((MR_Box) (MR_Word) (Ordinal_16));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_31, 1) = ((MR_Box) (MaybeExistConstraints_17));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_31, 2) = ((MR_Box) (SingleCtorSymName_18));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_31, 3) = ((MR_Box) (SingleCtorTag_26));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_31, 4) = ((MR_Box) (SingleCtorArgRepns_28));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_31, 5) = ((MR_Box) (SingleCtorArity_20));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_31, 6) = ((MR_Box) (SingleCtorContext_21));
    }
    Var_48 = mdbcomp__sym_name__unqualify_name_1_f_0(SingleCtorSymName_18);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (SingleCtorRepn_31));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    CtorRepnMap_32 = mercury__map__singleton_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[5]), ((MR_Box) (Var_48)), ((MR_Box) (Var_49)));
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (SingleCtorRepn_31));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *Repn_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CtorRepnMap_32));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__ctor_has_all_packable_args_within_limit_5_p_0(
  MR_Word Params_6,
  MR_Word ComponentTypeMap_7,
  MR_Word Ctor_8,
  MR_Integer Limit_9,
  MR_Integer * NumBits_10)
{
  {
    MR_bool succeeded;
    MR_Word Args_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_8, (MR_Integer) 3))));
    MR_Word LeftOverArgs_13;
    MR_Integer Var_15;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_8, (MR_Integer) 1))));
    MR_Word _PackableArgs_12;

    succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_15 = (MR_Integer) 0;
      hlds__du_type_layout__find_initial_args_packable_within_limit_8_p_0(Params_6, ComponentTypeMap_7, Limit_9, Var_15, NumBits_10, Args_11, &_PackableArgs_12, &LeftOverArgs_13);
      succeeded = (LeftOverArgs_13 == (MR_Word) ((MR_Unsigned) 0U));
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_ctor_local_args_5_p_0(
  MR_Word Params_6,
  MR_Word ComponentTypeMap_7,
  MR_Word LocalSectag_8,
  MR_Word CtorArgs_9,
  MR_Word * CtorArgRepns_10)
{
  {
    MR_Word MaybePrimaryTags_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_6, (MR_Integer) 1))));
    MR_Integer NumPtagBits_13;
    MR_Word SectagBits_18;
    uint8_t NumSectagBits_19;
    MR_Integer NumPrimSectagBits_21;
    MR_Integer Var_26;
    MR_Word CtorArgsPackables_50;
    MR_Integer Var_51;

    if ((MaybePrimaryTags_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.decide_complex_du_ctor_local_args\'/5", (MR_String) "MaybePrimaryTags = no_primary_tags");
        return;
      }
    else
      NumPtagBits_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePrimaryTags_11, (MR_Integer) 1))));
    SectagBits_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalSectag_8, (MR_Integer) 2))));
    NumSectagBits_19 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(0), SectagBits_18, (MR_Integer) 0)));
    Var_26 = mercury__uint8__cast_to_int_1_f_0(NumSectagBits_19);
    NumPrimSectagBits_21 = (MR_Integer) ((MR_Unsigned) NumPtagBits_13 + (MR_Unsigned) Var_26);
    hlds__du_type_layout__pair_args_with_packable_4_p_0(Params_6, ComponentTypeMap_7, CtorArgs_9, &CtorArgsPackables_50);
    hlds__du_type_layout__decide_packed_arg_word_loop_7_p_0((MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_Integer) -2))), (MR_Word) (((MR_Box) ((MR_Integer) -2))), NumPrimSectagBits_21, &Var_51, CtorArgsPackables_50, CtorArgRepns_10);
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_ctor_remote_args_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word Params_16,
  MR_Word ComponentTypeMap_17,
  MR_Word TypeStatus_18,
  MR_Integer NumRemoteSectagBits_19,
  MR_Word CtorTag_20,
  MR_Word MaybeExistConstraints_21,
  MR_Word CtorSymName_22,
  MR_Word CtorContext_23,
  MR_Word CtorArgs_24,
  MR_Word * CtorArgRepns_25,
  MR_Word * MaybeTagwordArgs_26,
  MR_Word STATE_VARIABLE_Specs_0_57,
  MR_Word * STATE_VARIABLE_Specs_58)
{
  {
    MR_bool succeeded;
    MR_Integer NumExtraArgWords_28;
    MR_Word TagwordCtorArgRepns_39;
    MR_Word NonTagwordCtorArgs_40;
    MR_Integer NumTagwords_41;
    MR_Integer FirstCellWordNum_53;
    MR_Word NonTagwordCtorArgRepns_54;
    MR_Word MaybeInformPacking_55;
    MR_Word Var_69;

    if ((MaybeExistConstraints_21 == (MR_Word) ((MR_Unsigned) 0U)))
      NumExtraArgWords_28 = (MR_Integer) 0;
    else
    {
      MR_Word ExistConstraints_29 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_21), (MR_Integer) 1));
      MR_Word Constraints_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_29, (MR_Integer) 1))));
      MR_Word UnconstrainedExistQTVars_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ExistConstraints_29, (MR_Integer) 2))));
      MR_Integer NumTypeInfos_34;
      MR_Integer NumTypeClassInfos_35;

      mercury__list__length_2_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_1[2]), UnconstrainedExistQTVars_32, &NumTypeInfos_34);
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Constraints_31, &NumTypeClassInfos_35);
      NumExtraArgWords_28 = (MR_Integer) ((MR_Unsigned) NumTypeInfos_34 + (MR_Unsigned) NumTypeClassInfos_35);
    }
    switch (MR_tag((MR_Word) CtorTag_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *MaybeTagwordArgs_26 = (MR_Integer) 0;
          TagwordCtorArgRepns_39 = (MR_Word) ((MR_Unsigned) 0U);
          NonTagwordCtorArgs_40 = CtorArgs_24;
          NumTagwords_41 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CtorTag_20, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 11:
            {
              MR_Word Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CtorTag_20, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Var_122)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *MaybeTagwordArgs_26 = (MR_Integer) 0;
                    TagwordCtorArgRepns_39 = (MR_Word) ((MR_Unsigned) 0U);
                    NonTagwordCtorArgs_40 = CtorArgs_24;
                    NumTagwords_41 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *MaybeTagwordArgs_26 = (MR_Integer) 0;
                    TagwordCtorArgRepns_39 = (MR_Word) ((MR_Unsigned) 0U);
                    NonTagwordCtorArgs_40 = CtorArgs_24;
                    NumTagwords_41 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word PackableCtorArgs_46;
                    MR_Word LeftOverCtorArgs_47;
                    MR_Integer Limit_44;
                    MR_Word Var_60 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
                    MR_Integer Var_61;
                    MR_Integer Var_63;
                    MR_Integer Var_71 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 0))));
                    MR_Integer _NumBits_45;

                    succeeded = (Var_60 == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Var_61 = (MR_Integer) 0;
                      succeeded = (NumRemoteSectagBits_19 > Var_61);
                      if (succeeded)
                      {
                        succeeded = (NumExtraArgWords_28 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          Limit_44 = (MR_Integer) ((MR_Unsigned) Var_71 - (MR_Unsigned) NumRemoteSectagBits_19);
                          Var_63 = (MR_Integer) 0;
                          hlds__du_type_layout__find_initial_args_packable_within_limit_8_p_0(Params_16, ComponentTypeMap_17, Limit_44, Var_63, &_NumBits_45, CtorArgs_24, &PackableCtorArgs_46, &LeftOverCtorArgs_47);
                          succeeded = (PackableCtorArgs_46 != (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                          {
                          }
                        }
                      }
                    }
                    if (succeeded)
                    {
                      *MaybeTagwordArgs_26 = (MR_Integer) 1;
                      hlds__du_type_layout__decide_tagword_args_7_p_0(Params_16, ComponentTypeMap_17, (MR_Word) (((MR_Box) ((MR_Integer) -1))), (MR_Word) (((MR_Box) ((MR_Integer) 0))), NumRemoteSectagBits_19, PackableCtorArgs_46, &TagwordCtorArgRepns_39);
                      NonTagwordCtorArgs_40 = LeftOverCtorArgs_47;
                    }
                    else
                    {
                      *MaybeTagwordArgs_26 = (MR_Integer) 0;
                      TagwordCtorArgRepns_39 = (MR_Word) ((MR_Unsigned) 0U);
                      NonTagwordCtorArgs_40 = CtorArgs_24;
                    }
                    NumTagwords_41 = (MR_Integer) 1;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    *MaybeTagwordArgs_26 = (MR_Integer) 0;
                    TagwordCtorArgRepns_39 = (MR_Word) ((MR_Unsigned) 0U);
                    NonTagwordCtorArgs_40 = CtorArgs_24;
                    NumTagwords_41 = (MR_Integer) 0;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 13:
            {
              *MaybeTagwordArgs_26 = (MR_Integer) 0;
              TagwordCtorArgRepns_39 = (MR_Word) ((MR_Unsigned) 0U);
              NonTagwordCtorArgs_40 = CtorArgs_24;
              NumTagwords_41 = (MR_Integer) 0;
            }
            break;
        }
        break;
    }
    FirstCellWordNum_53 = (MR_Integer) ((MR_Unsigned) NumTagwords_41 + (MR_Unsigned) NumExtraArgWords_28);
    hlds__du_type_layout__decide_complex_du_ctor_remote_args_loop_7_p_0(ModuleInfo_15, Params_16, ComponentTypeMap_17, (MR_Integer) 0, FirstCellWordNum_53, NonTagwordCtorArgs_40, &NonTagwordCtorArgRepns_54);
    *CtorArgRepns_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), TagwordCtorArgRepns_39, NonTagwordCtorArgRepns_54);
    MaybeInformPacking_55 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 2))) >> 8)) & (MR_Integer) 1);
    succeeded = (MaybeInformPacking_55 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_69 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_18);
      succeeded = (Var_69 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word MaybeSectagAsPseudoArg_56;

      switch (*MaybeTagwordArgs_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeSectagAsPseudoArg_56 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            MaybeSectagAsPseudoArg_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeSectagAsPseudoArg_56, 0) = ((MR_Box) (NumRemoteSectagBits_19));
          }
          break;
      }
      hlds__du_type_layout__inform_about_any_suboptimal_packing_7_p_0(Params_16, CtorSymName_22, CtorContext_23, MaybeSectagAsPseudoArg_56, *CtorArgRepns_25, STATE_VARIABLE_Specs_0_57, STATE_VARIABLE_Specs_58);
    }
    else
      *STATE_VARIABLE_Specs_58 = STATE_VARIABLE_Specs_0_57;
  }
}

static void MR_CALL 
hlds__du_type_layout__find_initial_args_packable_within_limit_8_p_0(
  MR_Word Params_1,
  MR_Word ComponentTypeMap_2,
  MR_Integer Limit_3,
  MR_Integer STATE_VARIABLE_NumBits_0_4,
  MR_Integer * STATE_VARIABLE_NumBits_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_NumBits_5 = STATE_VARIABLE_NumBits_0_4;
    }
    else
    {
      MR_Word Arg_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Args_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word ArgType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_19, (MR_Integer) 1))));
      MR_Integer STATE_VARIABLE_NumBits_32_32;
      MR_Word Packable_26;

      succeeded = hlds__du_type_layout__may_pack_arg_type_4_p_0(Params_1, ComponentTypeMap_2, ArgType_24, &Packable_26);
      if (succeeded)
      {
        if ((Packable_26 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_NumBits_32_32 = STATE_VARIABLE_NumBits_0_4;
        else
        {
          MR_Integer ArgNumArgBits_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Packable_26, (MR_Integer) 0))));

          STATE_VARIABLE_NumBits_32_32 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumBits_0_4 + (MR_Unsigned) ArgNumArgBits_27);
        }
        succeeded = (STATE_VARIABLE_NumBits_32_32 <= Limit_3);
      }
      if (succeeded)
      {
        MR_Word PackableArgsTail_29;

        hlds__du_type_layout__find_initial_args_packable_within_limit_8_p_0(Params_1, ComponentTypeMap_2, Limit_3, STATE_VARIABLE_NumBits_32_32, STATE_VARIABLE_NumBits_5, Args_20, &PackableArgsTail_29, HeadVar__8_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PackableArgsTail_29));
        }
      }
      else
      {
        *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__8_8 = HeadVar__6_6;
        *STATE_VARIABLE_NumBits_5 = STATE_VARIABLE_NumBits_0_4;
      }
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__inform_about_any_suboptimal_packing_7_p_0_2(
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
hlds__du_type_layout__inform_about_any_suboptimal_packing_7_p_0_1(
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
hlds__du_type_layout__inform_about_any_suboptimal_packing_7_p_0(
  MR_Word Params_8,
  MR_Word CtorSymName_9,
  MR_Word CtorContext_10,
  MR_Word MaybeSectagAsPseudoArg_11,
  MR_Word CtorArgRepns_12,
  MR_Word STATE_VARIABLE_Specs_0_32,
  MR_Word * STATE_VARIABLE_Specs_33)
{
  {
    MR_bool succeeded;
    MR_Word SubWords0_14;
    MR_Integer ActualNumSubWords0_15;
    MR_Word SubWords_17;
    MR_Integer ActualNumSubWords_18;
    MR_Word SortedSubWords_19;
    MR_Word RevSortedSubWords_20;
    MR_Integer BinSize_21;
    MR_Word SubWordBins_22;
    MR_Integer NumSubWordBins_23;
    MR_Word Var_38;
    MR_Box conv1_SubWordBins_22;

    if ((MaybeSectagAsPseudoArg_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      SubWords0_14 = (MR_Word) ((MR_Unsigned) 0U);
      ActualNumSubWords0_15 = (MR_Integer) 0;
    }
    else
    {
      MR_Integer NumRemoteSectagBits_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeSectagAsPseudoArg_11, (MR_Integer) 0))));
      MR_Word Var_34;

      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (NumRemoteSectagBits_16));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        SubWords0_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SubWords0_14, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), SubWords0_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ActualNumSubWords0_15 = (MR_Integer) 1;
    }
    hlds__du_type_layout__record_subword_args_and_count_their_words_6_p_0(CtorArgRepns_12, (MR_Integer) 0, SubWords0_14, &SubWords_17, ActualNumSubWords0_15, &ActualNumSubWords_18);
    mercury__list__sort_2_p_0((MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_0), SubWords_17, &SortedSubWords_19);
    mercury__list__reverse_2_p_0((MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_0), SortedSubWords_19, &RevSortedSubWords_20);
    BinSize_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 0))));
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (hlds__du_type_layout__inform_about_any_suboptimal_packing_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (BinSize_21));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[7]), Var_38, RevSortedSubWords_20, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_SubWordBins_22);
    SubWordBins_22 = ((MR_Word) (conv1_SubWordBins_22));
    mercury__list__length_2_p_0((MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_bin_0), SubWordBins_22, &NumSubWordBins_23);
    succeeded = (NumSubWordBins_23 < ActualNumSubWords_18);
    if (succeeded)
    {
      MR_Integer CtorArity_24;
      MR_Word CtorSymNameArity_25;
      MR_Word StartPieces_26;
      MR_Word EndPieces_27;
      MR_Word SubWordBinPieceLists_28;
      MR_Word Pieces_29;
      MR_Word Msg_30;
      MR_Word Spec_31;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_66;
      MR_Word Var_69;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_String Var_76;
      MR_Word Var_79;
      MR_Word Var_82;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_String Var_89;
      MR_Word Var_97;
      MR_Word Var_98;
      MR_Word Var_99;
      MR_Word Var_100;
      MR_Word Var_104;
      MR_Box conv2_Var_76;

      mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), CtorArgRepns_12, &CtorArity_24);
      {
        CtorSymNameArity_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CtorSymNameArity_25, 0) = ((MR_Box) (CtorSymName_9));
        MR_hl_field(MR_mktag(0), CtorSymNameArity_25, 1) = ((MR_Box) (CtorArity_24));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (CtorSymNameArity_25));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[52])));
      }
      {
        StartPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), StartPieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[60])));
        MR_hl_field(MR_mktag(1), StartPieces_26, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (NumSubWordBins_23));
      }
      conv2_Var_76 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_bin_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SubWordBins_22, ((MR_Box) ((MR_String) "word")), ((MR_Box) ((MR_String) "words")));
      Var_76 = ((MR_String) (conv2_Var_76));
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (Var_76));
      }
      {
        Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (ActualNumSubWords_18));
      }
      succeeded = (ActualNumSubWords_18 == (MR_Integer) 1);
      if (succeeded)
        Var_89 = (MR_String) "word";
      else
        Var_89 = (MR_String) "words";
      {
        Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) (Var_89));
      }
      {
        Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
        MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[54])));
      }
      {
        Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_87));
      }
      {
        Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[64])));
        MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_85));
      }
      {
        Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[63])));
        MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_82));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_79));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_74));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[62])));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_72));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[61])));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
      }
      {
        EndPieces_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), EndPieces_27, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(1), EndPieces_27, 1) = ((MR_Box) (Var_66));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_sub_word_bin_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[8]), (MR_Word) (&hlds__du_type_layout_scalar_common_3[11]), SubWordBins_22, &SubWordBinPieceLists_28);
      Var_98 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), SubWordBinPieceLists_28);
      Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_98, EndPieces_27);
      Pieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), StartPieces_26, Var_97);
      {
        Var_100 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (Pieces_29));
      }
      {
        Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
        MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msg_30, 0) = ((MR_Box) (CtorContext_10));
        MR_hl_field(MR_mktag(1), Msg_30, 1) = ((MR_Box) (Var_99));
      }
      {
        Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Msg_30));
        MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_31, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(0), Spec_31, 1) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(0), Spec_31, 2) = ((MR_Box) (Var_104));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_33 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_31));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_32));
      }
    }
    else
      *STATE_VARIABLE_Specs_33 = STATE_VARIABLE_Specs_0_32;
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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), PosWidth_21, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgNumBits_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), PosWidth_21, (MR_Integer) 4))));
                MR_Integer NumBits_41;
                MR_Word Id_45;
                MR_Word SubWord_46;

                STATE_VARIABLE_NumWords_51_51 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumWords_0_5 + (MR_Unsigned) 1);
                NumBits_41 = (MR_Integer) (ArgNumBits_33);
                if ((MaybeFieldName_19 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    Id_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Id_45, 0) = ((MR_Box) (CurArgNum_2));
                  }
                else
                {
                  MR_Word SymName_42;
                  MR_String Name_44;
                  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldName_19, (MR_Integer) 0))));

                  SymName_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_53, (MR_Integer) 0))));
                  Name_44 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_42);
                  {
                    Id_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Id_45, 0) = ((MR_Box) (CurArgNum_2));
                    MR_hl_field(MR_mktag(1), Id_45, 1) = ((MR_Box) (Name_44));
                  }
                }
                {
                  SubWord_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SubWord_46, 0) = ((MR_Box) (NumBits_41));
                  MR_hl_field(MR_mktag(0), SubWord_46, 1) = ((MR_Box) (Id_45));
                }
                {
                  STATE_VARIABLE_SubWords_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
                    Id_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Id_73, 0) = ((MR_Box) (CurArgNum_2));
                  }
                else
                {
                  MR_Word SymName_60;
                  MR_String Name_62;
                  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldName_19, (MR_Integer) 0))));

                  SymName_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_63, (MR_Integer) 0))));
                  Name_62 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_60);
                  {
                    Id_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Id_73, 0) = ((MR_Box) (CurArgNum_2));
                    MR_hl_field(MR_mktag(1), Id_73, 1) = ((MR_Box) (Name_62));
                  }
                }
                {
                  SubWord_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SubWord_74, 0) = ((MR_Box) (NumBits_69));
                  MR_hl_field(MR_mktag(0), SubWord_74, 1) = ((MR_Box) (Id_73));
                }
                {
                  STATE_VARIABLE_SubWords_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
      Var_55 = (MR_Integer) ((MR_Unsigned) CurArgNum_2 + (MR_Unsigned) 1);
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
hlds__du_type_layout__decide_tagword_args_7_p_0(
  MR_Word Params_8,
  MR_Word ComponentTypeMap_9,
  MR_Word ArgOnlyOffset_10,
  MR_Word CellOffset_11,
  MR_Integer NumFixedBits_12,
  MR_Word CtorArgs_13,
  MR_Word * CtorArgRepns_14)
{
  {
    MR_Word CtorArgsPackables_15;
    MR_Integer Var_16;

    hlds__du_type_layout__pair_args_with_packable_4_p_0(Params_8, ComponentTypeMap_9, CtorArgs_13, &CtorArgsPackables_15);
    hlds__du_type_layout__decide_packed_arg_word_loop_7_p_0((MR_Integer) 0, ArgOnlyOffset_10, CellOffset_11, NumFixedBits_12, &Var_16, CtorArgsPackables_15, CtorArgRepns_14);
  }
}

static void MR_CALL 
hlds__du_type_layout__pair_args_with_packable_4_p_0(
  MR_Word Params_1,
  MR_Word ComponentTypeMap_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Arg_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Args_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgPackable_11;
      MR_Word ArgsPackables_12;
      MR_Word ArgType_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_9, (MR_Integer) 1))));
      MR_Word Packable_16;

      succeeded = hlds__du_type_layout__may_pack_arg_type_4_p_0(Params_1, ComponentTypeMap_2, ArgType_14, &Packable_16);
      if (succeeded)
        {
          ArgPackable_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ArgPackable_11, 0) = ((MR_Box) (Arg_9));
          MR_hl_field(MR_mktag(0), ArgPackable_11, 1) = ((MR_Box) (Packable_16));
        }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.pair_args_with_packable\'/4", (MR_String) "not packable");
          return;
        }
      hlds__du_type_layout__pair_args_with_packable_4_p_0(Params_1, ComponentTypeMap_2, Args_10, &ArgsPackables_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgPackable_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgsPackables_12));
      }
    }
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_complex_du_ctor_remote_args_loop_7_p_0(
  MR_Word ModuleInfo_1,
  MR_Word Params_2,
  MR_Word ComponentTypeMap_3,
  MR_Integer CurAOWordNum_4,
  MR_Integer CurCellWordNum_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Arg_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Args_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word ArgOnlyOffset_21 = (MR_Word) (CurAOWordNum_4);
      MR_Word CellOffset_22 = (MR_Word) (CurCellWordNum_5);
      MR_Integer NumAvailBits_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 0))));
      MR_Integer NumUsedBits_25;
      MR_Word ArgsPackables_26;
      MR_Word LeftOverArgs_27;

      hlds__du_type_layout__find_word_packable_args_8_p_0(Params_2, ComponentTypeMap_3, NumAvailBits_23, (MR_Integer) 0, &NumUsedBits_25, HeadVar__6_6, &ArgsPackables_26, &LeftOverArgs_27);
      if ((ArgsPackables_26 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word ArgName_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_18, (MR_Integer) 0))));
        MR_Word ArgType_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_18, (MR_Integer) 1))));
        MR_Word ArgContext_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_18, (MR_Integer) 2))));
        MR_Word DerefArgType_39;
        MR_Word ArgPosWidth_42;
        MR_Word HeadArgRepn_43;
        MR_Integer NextAOWordNum_60;
        MR_Integer NextCellWordNum_61;
        MR_Word TailArgRepns_62;
        MR_Word DWKind_41;
        MR_Word BuiltinType_40;
        MR_Word Var_169;
        MR_Word Var_172;
        MR_Word Var_173;

        hlds__du_type_layout__deref_eqv_types_3_p_0(ModuleInfo_1, ArgType_37, &DerefArgType_39);
        succeeded = ((MR_tag((MR_Word) DerefArgType_39)) == (MR_Integer) 2);
        if (succeeded)
        {
          BuiltinType_40 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DerefArgType_39, (MR_Integer) 0))));
          Var_173 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 2))) >> 11)) & (MR_Integer) 1);
          Var_172 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
          Var_169 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_2, (MR_Integer) 2))) >> 7)) & (MR_Integer) 1);
          if ((BuiltinType_40 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            succeeded = (Var_173 == (MR_Integer) 1);
            if (succeeded)
            {
              DWKind_41 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
          else
          if (((MR_tag((MR_Word) BuiltinType_40)) == (MR_Integer) 1))
          {
            MR_Word Var_194;

            succeeded = (Var_172 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = (Var_169 == (MR_Integer) 1);
              if (succeeded)
              {
                Var_194 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), BuiltinType_40, (MR_Integer) 0))) & (MR_Integer) 15);
                switch (Var_194) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 8:
                    {
                      DWKind_41 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 9:
                    {
                      DWKind_41 = (MR_Integer) 2;
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
            ArgPosWidth_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ArgPosWidth_42, 0) = ((MR_Box) (ArgOnlyOffset_21));
            MR_hl_field(MR_mktag(2), ArgPosWidth_42, 1) = ((MR_Box) (CellOffset_22));
            MR_hl_field(MR_mktag(2), ArgPosWidth_42, 2) = (MR_Box) ((MR_Unsigned) (DWKind_41));
          }
          NextAOWordNum_60 = (MR_Integer) ((MR_Unsigned) CurAOWordNum_4 + (MR_Unsigned) 2);
          NextCellWordNum_61 = (MR_Integer) ((MR_Unsigned) CurCellWordNum_5 + (MR_Unsigned) 2);
        }
        else
        {
          {
            ArgPosWidth_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgPosWidth_42, 0) = ((MR_Box) (ArgOnlyOffset_21));
            MR_hl_field(MR_mktag(1), ArgPosWidth_42, 1) = ((MR_Box) (CellOffset_22));
          }
          NextAOWordNum_60 = (MR_Integer) ((MR_Unsigned) CurAOWordNum_4 + (MR_Unsigned) 1);
          NextCellWordNum_61 = (MR_Integer) ((MR_Unsigned) CurCellWordNum_5 + (MR_Unsigned) 1);
        }
        {
          HeadArgRepn_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadArgRepn_43, 0) = ((MR_Box) (ArgName_36));
          MR_hl_field(MR_mktag(0), HeadArgRepn_43, 1) = ((MR_Box) (ArgType_37));
          MR_hl_field(MR_mktag(0), HeadArgRepn_43, 2) = ((MR_Box) (ArgPosWidth_42));
          MR_hl_field(MR_mktag(0), HeadArgRepn_43, 3) = ((MR_Box) (ArgContext_38));
        }
        hlds__du_type_layout__decide_complex_du_ctor_remote_args_loop_7_p_0(ModuleInfo_1, Params_2, ComponentTypeMap_3, NextAOWordNum_60, NextCellWordNum_61, Args_19, &TailArgRepns_62);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadArgRepn_43));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailArgRepns_62));
        }
      }
      else
      {
        MR_Word WordArgRepns_32;
        MR_Integer NextAOWordNum_33;
        MR_Integer NextCellWordNum_34;
        MR_Word TailArgRepns_35;
        MR_Integer Var_31;

        hlds__du_type_layout__decide_packed_arg_word_loop_7_p_0((MR_Integer) 1, ArgOnlyOffset_21, CellOffset_22, (MR_Integer) 0, &Var_31, ArgsPackables_26, &WordArgRepns_32);
        succeeded = (NumUsedBits_25 > (MR_Integer) 0);
        if (succeeded)
        {
          NextAOWordNum_33 = (MR_Integer) ((MR_Unsigned) CurAOWordNum_4 + (MR_Unsigned) 1);
          NextCellWordNum_34 = (MR_Integer) ((MR_Unsigned) CurCellWordNum_5 + (MR_Unsigned) 1);
        }
        else
        {
          NextAOWordNum_33 = CurAOWordNum_4;
          NextCellWordNum_34 = CurCellWordNum_5;
        }
        hlds__du_type_layout__decide_complex_du_ctor_remote_args_loop_7_p_0(ModuleInfo_1, Params_2, ComponentTypeMap_3, NextAOWordNum_33, NextCellWordNum_34, LeftOverArgs_27, &TailArgRepns_35);
        *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), WordArgRepns_32, TailArgRepns_35);
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
hlds__du_type_layout__find_word_packable_args_8_p_0(
  MR_Word Params_1,
  MR_Word ComponentTypeMap_2,
  MR_Integer NumAvailBits_3,
  MR_Integer STATE_VARIABLE_NumUsedBits_0_4,
  MR_Integer * STATE_VARIABLE_NumUsedBits_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_NumUsedBits_5 = STATE_VARIABLE_NumUsedBits_0_4;
    }
    else
    {
      MR_Word Arg_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word Args_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word ArgType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_19, (MR_Integer) 1))));
      MR_Word Packable_27;
      MR_Integer NextNumAvailBits_30;
      MR_Integer STATE_VARIABLE_NumUsedBits_36_36;
      MR_Integer Var_37;

      succeeded = hlds__du_type_layout__may_pack_arg_type_4_p_0(Params_1, ComponentTypeMap_2, ArgType_24, &Packable_27);
      if (succeeded)
      {
        if ((Packable_27 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          NextNumAvailBits_30 = NumAvailBits_3;
          STATE_VARIABLE_NumUsedBits_36_36 = STATE_VARIABLE_NumUsedBits_0_4;
        }
        else
        {
          MR_Integer NumArgBits_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Packable_27, (MR_Integer) 0))));

          NextNumAvailBits_30 = (MR_Integer) ((MR_Unsigned) NumAvailBits_3 - (MR_Unsigned) NumArgBits_28);
          STATE_VARIABLE_NumUsedBits_36_36 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumUsedBits_0_4 + (MR_Unsigned) NumArgBits_28);
        }
        Var_37 = (MR_Integer) 0;
        succeeded = (NextNumAvailBits_30 >= Var_37);
      }
      if (succeeded)
      {
        MR_Word TailArgsPackables_31;
        MR_Word TailLeftOverArgs_32;

        hlds__du_type_layout__find_word_packable_args_8_p_0(Params_1, ComponentTypeMap_2, NextNumAvailBits_30, STATE_VARIABLE_NumUsedBits_36_36, STATE_VARIABLE_NumUsedBits_5, Args_20, &TailArgsPackables_31, &TailLeftOverArgs_32);
        succeeded = (STATE_VARIABLE_NumUsedBits_0_4 > (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (TailArgsPackables_31 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (Packable_27 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
        {
          *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
          *HeadVar__8_8 = HeadVar__6_6;
        }
        else
        {
          MR_Word HeadArgPackable_33;

          {
            HeadArgPackable_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HeadArgPackable_33, 0) = ((MR_Box) (Arg_19));
            MR_hl_field(MR_mktag(0), HeadArgPackable_33, 1) = ((MR_Box) (Packable_27));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadArgPackable_33));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailArgsPackables_31));
          }
          *HeadVar__8_8 = TailLeftOverArgs_32;
        }
      }
      else
      {
        *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__8_8 = HeadVar__6_6;
        *STATE_VARIABLE_NumUsedBits_5 = STATE_VARIABLE_NumUsedBits_0_4;
      }
    }
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
    MR_Word Var_161;
    MR_Word Var_162;
    MR_Word Var_163;
    MR_Integer Var_171;
    MR_Word ComponentKind_10;
    MR_Word TypeCtorInfo_119_119;
    MR_Word TypeCtorInfo_120_120;
    MR_Box conv0_ComponentKind_10;

    succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(ArgType_7, &ArgTypeCtor_9);
    if (succeeded)
    {
      Var_171 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 0))));
      Var_163 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 2))) >> 6)) & (MR_Integer) 1);
      Var_162 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 2))) >> 5)) & (MR_Integer) 1);
      Var_161 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 2))) >> 4)) & (MR_Integer) 1);
      TypeCtorInfo_119_119 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
      TypeCtorInfo_120_120 = (MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0);
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_119_119, TypeCtorInfo_120_120, ComponentTypeMap_6, ((MR_Box) (ArgTypeCtor_9)), &conv0_ComponentKind_10);
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
            succeeded = (Var_161 == (MR_Integer) 1);
          else
          {
            MR_Integer NumArgBits_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), *PackableKind_8, (MR_Integer) 0))));

            succeeded = (NumArgBits_11 < Var_171);
          }
        }
      }
      else
      {
        MR_Word ArgBuiltinType_13;
        MR_Word FillKind_15;
        MR_Integer NumArgBits_22;

        succeeded = ((MR_tag((MR_Word) ArgType_7)) == (MR_Integer) 2);
        if (succeeded)
        {
          ArgBuiltinType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgType_7, (MR_Integer) 0))));
          if ((ArgBuiltinType_13 == (MR_Word) ((MR_Unsigned) 8U)))
          {
            succeeded = (Var_162 == (MR_Integer) 1);
            if (succeeded)
            {
              NumArgBits_22 = (MR_Integer) 21;
              FillKind_15 = (MR_Integer) 7;
              succeeded = MR_TRUE;
            }
          }
          else
          if (((MR_tag((MR_Word) ArgBuiltinType_13)) == (MR_Integer) 1))
          {
            MR_Word ArgIntType_14;

            succeeded = (Var_163 == (MR_Integer) 1);
            if (succeeded)
            {
              ArgIntType_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ArgBuiltinType_13, (MR_Integer) 0))) & (MR_Integer) 15);
              switch (ArgIntType_14) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 4:
                  {
                    NumArgBits_22 = (MR_Integer) 16;
                    FillKind_15 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Integer Var_21;

                    NumArgBits_22 = (MR_Integer) 32;
                    Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 0))));
                    succeeded = (NumArgBits_22 < Var_21);
                    if (succeeded)
                    {
                      FillKind_15 = (MR_Integer) 3;
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    NumArgBits_22 = (MR_Integer) 8;
                    FillKind_15 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    NumArgBits_22 = (MR_Integer) 16;
                    FillKind_15 = (MR_Integer) 5;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_Integer Var_20;

                    NumArgBits_22 = (MR_Integer) 32;
                    Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_5, (MR_Integer) 0))));
                    succeeded = (NumArgBits_22 < Var_20);
                    if (succeeded)
                    {
                      FillKind_15 = (MR_Integer) 6;
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    NumArgBits_22 = (MR_Integer) 8;
                    FillKind_15 = (MR_Integer) 4;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
            }
          }
          else
            succeeded = MR_FALSE;
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *PackableKind_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NumArgBits_22));
              MR_hl_field(MR_mktag(1), base, 1) = (MR_Box) ((MR_Unsigned) (FillKind_15));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_packed_arg_word_loop_7_p_0(
  MR_Word TreatAsFirst_1,
  MR_Word ArgOnlyOffset_2,
  MR_Word CellOffset_3,
  MR_Integer NumPrefixBits_4,
  MR_Integer * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = NumPrefixBits_4;
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ArgPackable_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
    MR_Word ArgsPackables_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
    MR_Word ArgRepn_19;
    MR_Word ArgRepns_20;
    MR_Word Arg_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgPackable_17, (MR_Integer) 0))));
    MR_Word Packable_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgPackable_17, (MR_Integer) 1))));
    MR_Word ArgPosWidth_27;
    MR_Word ArgName_28;
    MR_Word ArgType_29;
    MR_Word ArgContext_30;

    if ((Packable_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      hlds__du_type_layout__decide_packed_arg_word_loop_7_p_0(TreatAsFirst_1, ArgOnlyOffset_2, CellOffset_3, NumPrefixBits_4, HeadVar__5_5, ArgsPackables_18, &ArgRepns_20);
      switch (TreatAsFirst_1) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            ArgPosWidth_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ArgPosWidth_27, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), ArgPosWidth_27, 1) = ((MR_Box) (ArgOnlyOffset_2));
            MR_hl_field(MR_mktag(3), ArgPosWidth_27, 2) = ((MR_Box) (CellOffset_3));
          }
          break;
        case (MR_Integer) 1:
          ArgPosWidth_27 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
    }
    else
    {
      MR_Integer NumArgBits_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Packable_22, (MR_Integer) 0))));
      MR_Word FillKind_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Packable_22, (MR_Integer) 1))) & (MR_Integer) 7);
      MR_Integer CurShift_25;
      MR_Integer ArgMask_26;
      MR_Integer Var_32;

      hlds__du_type_layout__decide_packed_arg_word_loop_7_p_0((MR_Integer) 0, ArgOnlyOffset_2, CellOffset_3, NumPrefixBits_4, &CurShift_25, ArgsPackables_18, &ArgRepns_20);
      Var_32 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, NumArgBits_23);
      ArgMask_26 = (MR_Integer) ((MR_Unsigned) Var_32 - (MR_Unsigned) 1);
      switch (TreatAsFirst_1) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_35 = (MR_Word) (CurShift_25);
            MR_Word Var_36 = (MR_Word) (NumArgBits_23);
            MR_Word Var_37 = (MR_Word) (ArgMask_26);

            {
              ArgPosWidth_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ArgPosWidth_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), ArgPosWidth_27, 1) = ((MR_Box) (ArgOnlyOffset_2));
              MR_hl_field(MR_mktag(3), ArgPosWidth_27, 2) = ((MR_Box) (CellOffset_3));
              MR_hl_field(MR_mktag(3), ArgPosWidth_27, 3) = ((MR_Box) (Var_35));
              MR_hl_field(MR_mktag(3), ArgPosWidth_27, 4) = ((MR_Box) (Var_36));
              MR_hl_field(MR_mktag(3), ArgPosWidth_27, 5) = ((MR_Box) (Var_37));
              MR_hl_field(MR_mktag(3), ArgPosWidth_27, 6) = (MR_Box) ((MR_Unsigned) (FillKind_24));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_38 = (MR_Word) (CurShift_25);
            MR_Word Var_39 = (MR_Word) (NumArgBits_23);
            MR_Word Var_40 = (MR_Word) (ArgMask_26);

            {
              ArgPosWidth_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ArgPosWidth_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), ArgPosWidth_27, 1) = ((MR_Box) (ArgOnlyOffset_2));
              MR_hl_field(MR_mktag(3), ArgPosWidth_27, 2) = ((MR_Box) (CellOffset_3));
              MR_hl_field(MR_mktag(3), ArgPosWidth_27, 3) = ((MR_Box) (Var_38));
              MR_hl_field(MR_mktag(3), ArgPosWidth_27, 4) = ((MR_Box) (Var_39));
              MR_hl_field(MR_mktag(3), ArgPosWidth_27, 5) = ((MR_Box) (Var_40));
              MR_hl_field(MR_mktag(3), ArgPosWidth_27, 6) = (MR_Box) ((MR_Unsigned) (FillKind_24));
            }
          }
          break;
      }
      *HeadVar__5_5 = (MR_Integer) ((MR_Unsigned) CurShift_25 + (MR_Unsigned) NumArgBits_23);
    }
    ArgName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_21, (MR_Integer) 0))));
    ArgType_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_21, (MR_Integer) 1))));
    ArgContext_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_21, (MR_Integer) 2))));
    {
      ArgRepn_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ArgRepn_19, 0) = ((MR_Box) (ArgName_28));
      MR_hl_field(MR_mktag(0), ArgRepn_19, 1) = ((MR_Box) (ArgType_29));
      MR_hl_field(MR_mktag(0), ArgRepn_19, 2) = ((MR_Box) (ArgPosWidth_27));
      MR_hl_field(MR_mktag(0), ArgRepn_19, 3) = ((MR_Box) (ArgContext_30));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgRepn_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgRepns_20));
    }
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
      ConsArgRepn_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ConsArgRepn_4, 0) = ((MR_Box) (MaybeFieldName_5));
      MR_hl_field(MR_mktag(0), ConsArgRepn_4, 1) = ((MR_Box) (Type_6));
      MR_hl_field(MR_mktag(0), ConsArgRepn_4, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[24])));
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
    uint32_t Ordinal_12 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 0)));
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
      ConsId_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsId_18, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConsId_18, 1) = ((MR_Box) (SymName_14));
      MR_hl_field(MR_mktag(3), ConsId_18, 2) = ((MR_Box) (Arity_16));
      MR_hl_field(MR_mktag(3), ConsId_18, 3) = ((MR_Box) (TypeCtor_7));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0), ConsTagMap_8, ((MR_Box) (ConsId_18)), &conv0_ConsTag_19);
    ConsTag_19 = ((MR_Word) (conv0_ConsTag_19));
    ArgRepns_20 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), (MR_Word) (&hlds__du_type_layout_scalar_common_3[10]), Args_15);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *CtorRepn_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_Word) (Ordinal_12));
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
hlds__du_type_layout__decide_if_simple_du_type_11_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__decide_if_simple_du_type__276__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_if_simple_du_type_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word Params_13,
  MR_Word TypeCtorToForeignEnumMap_14,
  MR_Word TypeCtorTypeDefn0_15,
  MR_Word * TypeCtorTypeDefn_16,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_43,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_44,
  MR_Word STATE_VARIABLE_NoTagTypeMap_0_45,
  MR_Word * STATE_VARIABLE_NoTagTypeMap_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtor_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorTypeDefn0_15, (MR_Integer) 0))));
    MR_Word TypeDefn0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtorTypeDefn0_15, (MR_Integer) 1))));
    MR_Word Body0_22;

    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn0_21, &Body0_22);
    switch (MR_tag((MR_Word) Body0_22)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ForeignType_39 = (MR_Word) ((MR_Word) (Body0_22));

          hlds__du_type_layout__add_foreign_if_word_aligned_ptr_8_p_0(ModuleInfo_12, Params_13, TypeCtor_20, ForeignType_39, STATE_VARIABLE_ComponentTypeMap_0_43, STATE_VARIABLE_ComponentTypeMap_44, STATE_VARIABLE_Specs_0_47, STATE_VARIABLE_Specs_48);
          *TypeCtorTypeDefn_16 = TypeCtorTypeDefn0_15;
          *STATE_VARIABLE_NoTagTypeMap_46 = STATE_VARIABLE_NoTagTypeMap_0_45;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word OoMCtors_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_22, (MR_Integer) 0))));
          MR_Word MaybeCanonical_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_22, (MR_Integer) 1))));
          MR_Word MaybeRepn0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_22, (MR_Integer) 2))));
          MR_Word MaybeForeign_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_22, (MR_Integer) 3))));
          MR_Word HeadCtor_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_23, (MR_Integer) 0))));
          MR_Word TailCtors_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_23, (MR_Integer) 1))));
          MR_Word Var_52;
          MR_Tuple ForeignEnumTagMap_32;
          MR_Word TCFE_29;
          MR_Word MaybeForeignEnumTagMap_31;
          MR_Box conv0_TCFE_29;

          {
            Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[4]));
            MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (hlds__du_type_layout__decide_if_simple_du_type_11_p_0_1));
            MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (MaybeRepn0_25));
            MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__require__expect_3_p_0(Var_52, (MR_String) "predicate \140hlds.du_type_layout.decide_if_simple_du_type\'/11", (MR_String) "MaybeRepn0 != no");
          succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0), TypeCtorToForeignEnumMap_14, ((MR_Box) (TypeCtor_20)), &conv0_TCFE_29);
          if (succeeded)
          {
            TCFE_29 = ((MR_Word) (conv0_TCFE_29));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MaybeForeignEnumTagMap_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TCFE_29, (MR_Integer) 1))));
            succeeded = (MaybeForeignEnumTagMap_31 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              ForeignEnumTagMap_32 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeForeignEnumTagMap_31, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_49_93_95_48_10_p_0(Params_13, TypeCtor_20, TypeDefn0_21, Body0_22, OoMCtors_23, ForeignEnumTagMap_32, TypeCtorTypeDefn_16, STATE_VARIABLE_Specs_0_47, STATE_VARIABLE_Specs_48);
            *STATE_VARIABLE_NoTagTypeMap_46 = STATE_VARIABLE_NoTagTypeMap_0_45;
            *STATE_VARIABLE_ComponentTypeMap_44 = STATE_VARIABLE_ComponentTypeMap_0_43;
          }
          else
          {
            MR_Word Var_57;
            MR_Word Var_33;

            {
              Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (HeadCtor_27));
              MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (TailCtors_28));
            }
            succeeded = parse_tree__prog_data__ctors_are_all_constants_2_p_0(Var_57, &Var_33);
            if (succeeded)
            {
              hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_100_117_109_109_121_95_111_114_95_109_101_114_99_117_114_121_95_101_110_117_109_95_95_91_49_93_95_48_11_p_0(Params_13, TypeCtor_20, TypeDefn0_21, Body0_22, OoMCtors_23, TypeCtorTypeDefn_16, STATE_VARIABLE_ComponentTypeMap_0_43, STATE_VARIABLE_ComponentTypeMap_44, STATE_VARIABLE_Specs_0_47, STATE_VARIABLE_Specs_48);
              *STATE_VARIABLE_NoTagTypeMap_46 = STATE_VARIABLE_NoTagTypeMap_0_45;
            }
            else
            {
              succeeded = (TailCtors_28 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MR_Word SingleCtorSymName_36;
                MR_Word SingleArg_37;
                MR_Word SingleCtorContext_38;
                MR_Word Var_60;
                MR_Word Var_61;
                MR_Word Var_62;
                MR_Integer Var_63;
                MR_Word Var_64;

                succeeded = (MaybeCanonical_24 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor_27, (MR_Integer) 1))));
                  SingleCtorSymName_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor_27, (MR_Integer) 2))));
                  Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor_27, (MR_Integer) 3))));
                  Var_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadCtor_27, (MR_Integer) 4))));
                  SingleCtorContext_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor_27, (MR_Integer) 5))));
                  succeeded = (Var_60 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    succeeded = (Var_63 == (MR_Integer) 1);
                    if (succeeded)
                    {
                      succeeded = (Var_61 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        SingleArg_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_61, (MR_Integer) 0))));
                        Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_61, (MR_Integer) 1))));
                        succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_64 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 2))) >> 9)) & (MR_Integer) 1);
                          succeeded = (Var_64 == (MR_Integer) 1);
                        }
                      }
                    }
                  }
                }
                if (succeeded)
                {
                  hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_110_111_116_97_103_95_95_91_49_93_95_48_13_p_0(Params_13, TypeCtor_20, TypeDefn0_21, Body0_22, SingleCtorSymName_36, SingleArg_37, SingleCtorContext_38, TypeCtorTypeDefn_16, STATE_VARIABLE_NoTagTypeMap_0_45, STATE_VARIABLE_NoTagTypeMap_46, STATE_VARIABLE_Specs_0_47, STATE_VARIABLE_Specs_48);
                  *STATE_VARIABLE_ComponentTypeMap_44 = STATE_VARIABLE_ComponentTypeMap_0_43;
                }
                else
                {
                  hlds__du_type_layout__add_du_if_single_ctor_is_word_aligned_ptr_6_p_0(Params_13, TypeCtor_20, TypeDefn0_21, MaybeForeign_26, STATE_VARIABLE_ComponentTypeMap_0_43, STATE_VARIABLE_ComponentTypeMap_44);
                  *TypeCtorTypeDefn_16 = TypeCtorTypeDefn0_15;
                  *STATE_VARIABLE_Specs_48 = STATE_VARIABLE_Specs_0_47;
                  *STATE_VARIABLE_NoTagTypeMap_46 = STATE_VARIABLE_NoTagTypeMap_0_45;
                }
              }
              else
              {
                *TypeCtorTypeDefn_16 = TypeCtorTypeDefn0_15;
                *STATE_VARIABLE_Specs_48 = STATE_VARIABLE_Specs_0_47;
                *STATE_VARIABLE_NoTagTypeMap_46 = STATE_VARIABLE_NoTagTypeMap_0_45;
                *STATE_VARIABLE_ComponentTypeMap_44 = STATE_VARIABLE_ComponentTypeMap_0_43;
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *TypeCtorTypeDefn_16 = TypeCtorTypeDefn0_15;
          *STATE_VARIABLE_ComponentTypeMap_44 = STATE_VARIABLE_ComponentTypeMap_0_43;
          *STATE_VARIABLE_NoTagTypeMap_46 = STATE_VARIABLE_NoTagTypeMap_0_45;
          *STATE_VARIABLE_Specs_48 = STATE_VARIABLE_Specs_0_47;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Body0_22, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *TypeCtorTypeDefn_16 = TypeCtorTypeDefn0_15;
              *STATE_VARIABLE_ComponentTypeMap_44 = STATE_VARIABLE_ComponentTypeMap_0_43;
              *STATE_VARIABLE_NoTagTypeMap_46 = STATE_VARIABLE_NoTagTypeMap_0_45;
              *STATE_VARIABLE_Specs_48 = STATE_VARIABLE_Specs_0_47;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word AbstractDetails_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Body0_22, (MR_Integer) 1))));

              hlds__du_type_layout__add_abstract_if_packable_4_p_0(TypeCtor_20, AbstractDetails_40, STATE_VARIABLE_ComponentTypeMap_0_43, STATE_VARIABLE_ComponentTypeMap_44);
              *TypeCtorTypeDefn_16 = TypeCtorTypeDefn0_15;
              *STATE_VARIABLE_NoTagTypeMap_46 = STATE_VARIABLE_NoTagTypeMap_0_45;
              *STATE_VARIABLE_Specs_48 = STATE_VARIABLE_Specs_0_47;
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
    MR_Box conv0__DirectArgFunctors_38;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_110;

    {
      SingleArgRepn_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SingleArgRepn_29, 0) = ((MR_Box) (MaybeSingleArgFieldName_26));
      MR_hl_field(MR_mktag(0), SingleArgRepn_29, 1) = ((MR_Box) (SingleArgType_27));
      MR_hl_field(MR_mktag(0), SingleArgRepn_29, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[29])));
      MR_hl_field(MR_mktag(0), SingleArgRepn_29, 3) = ((MR_Box) (SingleArgContext_28));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (SingleArgRepn_29));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      SingleCtorRepn_30 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 0) = ((MR_Box) (MR_Word) (UINT32_C(0)));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 2) = ((MR_Box) (SingleCtorSymName_19));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 3) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 4) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 5) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), SingleCtorRepn_30, 6) = ((MR_Box) (SingleCtorContext_21));
    }
    Var_62 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[5]));
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
        MaybeSingleArgName_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeSingleArgName_33, 0) = ((MR_Box) (Var_64));
      }
    }
    {
      DuTypeKind_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), DuTypeKind_36, 0) = ((MR_Box) (SingleCtorSymName_19));
      MR_hl_field(MR_mktag(2), DuTypeKind_36, 1) = ((MR_Box) (SingleArgType_27));
      MR_hl_field(MR_mktag(2), DuTypeKind_36, 2) = ((MR_Box) (MaybeSingleArgName_33));
    }
    DirectArgMap_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_15, (MR_Integer) 3))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[4]), DirectArgMap_37, ((MR_Box) (TypeCtor_16)), &conv0__DirectArgFunctors_38);
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
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[31])));
      }
      {
        Pieces_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[58])));
        MR_hl_field(MR_mktag(1), Pieces_39, 1) = ((MR_Box) (Var_67));
      }
      Var_78 = mercury__term__context_init_0_f_0();
      {
        Var_80 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Pieces_39));
      }
      {
        Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msg_40, 0) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(1), Msg_40, 1) = ((MR_Box) (Var_79));
      }
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Msg_40));
        MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_41, 1) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(0), Spec_41, 2) = ((MR_Box) (Var_84));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_51 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_41));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_50));
      }
    }
    else
      *STATE_VARIABLE_Specs_51 = STATE_VARIABLE_Specs_0_50;
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (SingleCtorRepn_30));
      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Repn_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Repn_43, 0) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), Repn_43, 1) = ((MR_Box) (CtorRepnMap_31));
      MR_hl_field(MR_mktag(0), Repn_43, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Repn_43, 3) = ((MR_Box) (DuTypeKind_36));
      MR_hl_field(MR_mktag(0), Repn_43, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Repn_43));
    }
    Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_18, (MR_Integer) 0))));
    Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_18, (MR_Integer) 1))));
    Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_18, (MR_Integer) 3))));
    {
      Body_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Body_44, 0) = ((MR_Box) (Var_107));
      MR_hl_field(MR_mktag(1), Body_44, 1) = ((MR_Box) (Var_108));
      MR_hl_field(MR_mktag(1), Body_44, 2) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(1), Body_44, 3) = ((MR_Box) (Var_110));
    }
    hlds__hlds_data__set_type_defn_body_3_p_0(Body_44, TypeDefn0_17, &TypeDefn_45);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *TypeCtorTypeDefn_22 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeCtor_16));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeDefn_45));
    }
    hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn0_17, &TypeParams_46);
    {
      NoTagType_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
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
  MR_Word OoMCtors_17,
  MR_Word * TypeCtorTypeDefn_18,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_50,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_51,
  MR_Word STATE_VARIABLE_Specs_0_52,
  MR_Word * STATE_VARIABLE_Specs_53)
{
  {
    MR_bool succeeded;
    MR_Word HeadCtor_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_17, (MR_Integer) 0))));
    MR_Word TailCtors_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_17, (MR_Integer) 1))));
    MR_Word DuTypeKind_24;
    MR_Word CtorRepns_33;
    MR_Word CtorRepnMap_34;
    MR_Word ComponentKind_35;
    MR_Word DirectArgMap_40;
    MR_Word Repn_47;
    MR_Word Body_48;
    MR_Word TypeDefn_49;
    MR_Word Var_87;
    MR_Box conv0__DirectArgFunctors_41;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_108;

    if ((TailCtors_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      uint32_t Ordinal_25;
      MR_Word SingleCtorSymName_27;
      MR_Word SingleCtorContext_30;
      MR_Word SingleCtorRepn_32;
      MR_Word Var_63;

      DuTypeKind_24 = (MR_Word) ((MR_Unsigned) 4U);
      Ordinal_25 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), HeadCtor_21, (MR_Integer) 0)));
      SingleCtorSymName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor_21, (MR_Integer) 2))));
      SingleCtorContext_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadCtor_21, (MR_Integer) 5))));
      {
        SingleCtorRepn_32 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SingleCtorRepn_32, 0) = ((MR_Box) (MR_Word) (Ordinal_25));
        MR_hl_field(MR_mktag(0), SingleCtorRepn_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), SingleCtorRepn_32, 2) = ((MR_Box) (SingleCtorSymName_27));
        MR_hl_field(MR_mktag(0), SingleCtorRepn_32, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), SingleCtorRepn_32, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), SingleCtorRepn_32, 5) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), SingleCtorRepn_32, 6) = ((MR_Box) (SingleCtorContext_30));
      }
      {
        CtorRepns_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), CtorRepns_33, 0) = ((MR_Box) (SingleCtorRepn_32));
        MR_hl_field(MR_mktag(1), CtorRepns_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_63 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[5]));
      hlds__hlds_data__insert_ctor_repn_into_map_3_p_0(SingleCtorRepn_32, Var_63, &CtorRepnMap_34);
      ComponentKind_35 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_9[1]));
    }
    else
    {
      MR_Integer NextTag_38;
      MR_Integer NumBits_39;
      MR_Word Var_54;
      MR_Word Var_56;
      MR_Word Var_57;

      DuTypeKind_24 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (HeadCtor_21));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (TailCtors_22));
      }
      Var_56 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[5]));
      hlds__du_type_layout__assign_tags_to_enum_constants_6_p_0(Var_54, &CtorRepns_33, (MR_Integer) 0, &NextTag_38, Var_56, &CtorRepnMap_34);
      mercury__int__log2_2_p_0(NextTag_38, &NumBits_39);
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (NumBits_39));
        MR_hl_field(MR_mktag(1), Var_57, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      {
        ComponentKind_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ComponentKind_35, 0) = ((MR_Box) (Var_57));
      }
    }
    DirectArgMap_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_13, (MR_Integer) 3))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[4]), DirectArgMap_40, ((MR_Box) (TypeCtor_14)), &conv0__DirectArgFunctors_41);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      MR_Word Pieces_42;
      MR_Word Msg_43;
      MR_Word Spec_44;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_84;

      Var_68 = hlds__du_type_layout__type_ctor_sna_1_f_0(TypeCtor_14);
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[28])));
      }
      {
        Pieces_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[59])));
        MR_hl_field(MR_mktag(1), Pieces_42, 1) = ((MR_Box) (Var_67));
      }
      Var_78 = mercury__term__context_init_0_f_0();
      {
        Var_80 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Pieces_42));
      }
      {
        Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msg_43, 0) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(1), Msg_43, 1) = ((MR_Box) (Var_79));
      }
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Msg_43));
        MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_44 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_44, 1) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(0), Spec_44, 2) = ((MR_Box) (Var_84));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_53 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_44));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_52));
      }
    }
    else
      *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_0_52;
    {
      Repn_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Repn_47, 0) = ((MR_Box) (CtorRepns_33));
      MR_hl_field(MR_mktag(0), Repn_47, 1) = ((MR_Box) (CtorRepnMap_34));
      MR_hl_field(MR_mktag(0), Repn_47, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Repn_47, 3) = ((MR_Box) (DuTypeKind_24));
      MR_hl_field(MR_mktag(0), Repn_47, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Repn_47));
    }
    Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_16, (MR_Integer) 0))));
    Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_16, (MR_Integer) 1))));
    Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_16, (MR_Integer) 3))));
    {
      Body_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Body_48, 0) = ((MR_Box) (Var_105));
      MR_hl_field(MR_mktag(1), Body_48, 1) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(1), Body_48, 2) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(1), Body_48, 3) = ((MR_Box) (Var_108));
    }
    hlds__hlds_data__set_type_defn_body_3_p_0(Body_48, TypeDefn0_15, &TypeDefn_49);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *TypeCtorTypeDefn_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeCtor_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeDefn_49));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (ComponentKind_35)), STATE_VARIABLE_ComponentTypeMap_0_50, STATE_VARIABLE_ComponentTypeMap_51);
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__assign_tags_to_enum_constants_6_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__477__1_2_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__476__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__assign_tags_to_enum_constants__474__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
      uint32_t Ordinal_19 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor_13, (MR_Integer) 0)));
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
        Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (hlds__du_type_layout__assign_tags_to_enum_constants_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (MaybeExistConstraints_20));
        MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_30, (MR_String) "predicate \140hlds.du_type_layout.assign_tags_to_enum_constants\'/6", (MR_String) "enum constant has existential constraints");
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (hlds__du_type_layout__assign_tags_to_enum_constants_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (Args_22));
        MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_34, (MR_String) "predicate \140hlds.du_type_layout.assign_tags_to_enum_constants\'/6", (MR_String) "enum constant has arguments");
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[3]));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (hlds__du_type_layout__assign_tags_to_enum_constants_6_p_0_3));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Arity_23));
        MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) ((MR_Integer) 0));
      }
      mercury__require__expect_3_p_0(Var_38, (MR_String) "predicate \140hlds.du_type_layout.assign_tags_to_enum_constants\'/6", (MR_String) "enum constant has nonzero arity");
      {
        Var_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (STATE_VARIABLE_CurTag_0_3));
      }
      {
        CtorTag_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), CtorTag_25, 0) = ((MR_Box) (Var_42));
      }
      {
        CtorRepn_15 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CtorRepn_15, 0) = ((MR_Box) (MR_Word) (Ordinal_19));
        MR_hl_field(MR_mktag(0), CtorRepn_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), CtorRepn_15, 2) = ((MR_Box) (SymName_21));
        MR_hl_field(MR_mktag(0), CtorRepn_15, 3) = ((MR_Box) (CtorTag_25));
        MR_hl_field(MR_mktag(0), CtorRepn_15, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), CtorRepn_15, 5) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(0), CtorRepn_15, 6) = ((MR_Box) (Context_24));
      }
      STATE_VARIABLE_CurTag_46_46 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurTag_0_3 + (MR_Unsigned) 1);
      hlds__hlds_data__insert_ctor_repn_into_map_3_p_0(CtorRepn_15, STATE_VARIABLE_CtorRepnMap_0_5, &STATE_VARIABLE_CtorRepnMap_48_48);
      hlds__du_type_layout__assign_tags_to_enum_constants_6_p_0(Ctors_14, &CtorRepns_16, STATE_VARIABLE_CurTag_46_46, STATE_VARIABLE_CurTag_4, STATE_VARIABLE_CtorRepnMap_48_48, STATE_VARIABLE_CtorRepnMap_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
  MR_Word OoMCtors_16,
  MR_Tuple ForeignEnums_17,
  MR_Word * TypeCtorTypeDefn_18,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  {
    MR_bool succeeded;
    MR_Word ForeignEnumTagMap_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnums_17, (MR_Integer) 0))));
    MR_Word Lang_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnums_17, (MR_Integer) 1))));
    MR_Word DuKind_22;
    MR_Word DirectArgMap_23;
    MR_Word Ctors_28;
    MR_Word CtorRepns_33;
    MR_Word CtorRepnMap_34;
    MR_Word Repn_37;
    MR_Word Body_38;
    MR_Word TypeDefn_39;
    MR_Word STATE_VARIABLE_Specs_66_66;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Box conv0__DirectArgFunctors_24;
    MR_Word Var_29;
    MR_Box conv3_CtorRepnMap_34;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_117;

    {
      DuKind_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), DuKind_22, 0) = (MR_Box) ((MR_Unsigned) (Lang_21));
    }
    DirectArgMap_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 3))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[4]), DirectArgMap_23, ((MR_Box) (TypeCtor_13)), &conv0__DirectArgFunctors_24);
    if (succeeded)
      succeeded = MR_TRUE;
    if (succeeded)
    {
      MR_Word DirectArgPieces_25;
      MR_Word DirectArgMsg_26;
      MR_Word DirectArgSpec_27;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_64;

      Var_45 = hlds__du_type_layout__type_ctor_sna_1_f_0(TypeCtor_13);
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[16])));
      }
      {
        DirectArgPieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DirectArgPieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[58])));
        MR_hl_field(MR_mktag(1), DirectArgPieces_25, 1) = ((MR_Box) (Var_44));
      }
      Var_58 = mercury__term__context_init_0_f_0();
      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (DirectArgPieces_25));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        DirectArgMsg_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DirectArgMsg_26, 0) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(1), DirectArgMsg_26, 1) = ((MR_Box) (Var_59));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (DirectArgMsg_26));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        DirectArgSpec_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DirectArgSpec_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), DirectArgSpec_27, 1) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(0), DirectArgSpec_27, 2) = ((MR_Box) (Var_64));
      }
      {
        STATE_VARIABLE_Specs_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_66_66, 0) = ((MR_Box) (DirectArgSpec_27));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_66_66, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_40));
      }
    }
    else
      STATE_VARIABLE_Specs_66_66 = STATE_VARIABLE_Specs_0_40;
    Ctors_28 = mercury__list__one_or_more_to_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), OoMCtors_16);
    succeeded = parse_tree__prog_data__ctors_are_all_constants_2_p_0(Ctors_28, &Var_29);
    if (succeeded)
      *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_66_66;
    else
    {
      MR_Word NonEnumArgPieces_30;
      MR_Word NonEnumArgMsg_31;
      MR_Word NonEnumArgSpec_32;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_92;

      Var_70 = hlds__du_type_layout__type_ctor_sna_1_f_0(TypeCtor_13);
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[23])));
      }
      {
        NonEnumArgPieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NonEnumArgPieces_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[58])));
        MR_hl_field(MR_mktag(1), NonEnumArgPieces_30, 1) = ((MR_Box) (Var_69));
      }
      Var_86 = mercury__term__context_init_0_f_0();
      {
        Var_88 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_88, 0) = ((MR_Box) (NonEnumArgPieces_30));
      }
      {
        Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
        MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        NonEnumArgMsg_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NonEnumArgMsg_31, 0) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(1), NonEnumArgMsg_31, 1) = ((MR_Box) (Var_87));
      }
      {
        Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (NonEnumArgMsg_31));
        MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        NonEnumArgSpec_32 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NonEnumArgSpec_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), NonEnumArgSpec_32, 1) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(0), NonEnumArgSpec_32, 2) = ((MR_Box) (Var_92));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_41 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NonEnumArgSpec_32));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_66_66));
      }
    }
    {
      Var_95 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (hlds__du_type_layout__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_105_109_112_108_101_95_116_121_112_101_95_102_111_114_101_105_103_110_95_101_110_117_109_95_95_91_49_93_95_48_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_95, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_95, 3) = ((MR_Box) (TypeCtor_13));
      MR_hl_field(MR_mktag(0), Var_95, 4) = ((MR_Box) (ForeignEnumTagMap_20));
    }
    Var_96 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[5]));
    mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&hlds__du_type_layout_scalar_common_3[4]), Var_95, Ctors_28, &CtorRepns_33, ((MR_Box) (Var_96)), &conv3_CtorRepnMap_34);
    CtorRepnMap_34 = ((MR_Word) (conv3_CtorRepnMap_34));
    {
      Repn_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Repn_37, 0) = ((MR_Box) (CtorRepns_33));
      MR_hl_field(MR_mktag(0), Repn_37, 1) = ((MR_Box) (CtorRepnMap_34));
      MR_hl_field(MR_mktag(0), Repn_37, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Repn_37, 3) = ((MR_Box) (DuKind_22));
      MR_hl_field(MR_mktag(0), Repn_37, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Repn_37));
    }
    Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_15, (MR_Integer) 0))));
    Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_15, (MR_Integer) 1))));
    Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_15, (MR_Integer) 3))));
    {
      Body_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Body_38, 0) = ((MR_Box) (Var_114));
      MR_hl_field(MR_mktag(1), Body_38, 1) = ((MR_Box) (Var_115));
      MR_hl_field(MR_mktag(1), Body_38, 2) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(1), Body_38, 3) = ((MR_Box) (Var_117));
    }
    hlds__hlds_data__set_type_defn_body_3_p_0(Body_38, TypeDefn0_14, &TypeDefn_39);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *TypeCtorTypeDefn_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TypeCtor_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (TypeDefn_39));
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
      Var_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (TypeCtorSymName_5));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (TypeCtorArity_6));
    }
    {
      Piece_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Piece_4, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(MR_mktag(3), Piece_4, 1) = ((MR_Box) (Var_7));
    }
    return Piece_4;
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
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0), ((MR_Box) (TypeCtor_5)), ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_9[1]))), STATE_VARIABLE_ComponentTypeMap_0_11, STATE_VARIABLE_ComponentTypeMap_12);
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
          Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (NumBits_8));
          MR_hl_field(MR_mktag(1), Var_15, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          ComponentKind_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
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
    MR_Word DirectArgMap_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 3))));
    MR_Word Globals_20;
    MR_Word Target_21;
    MR_Box conv0__DirectArgFunctors_16;
    MR_Word Assertions_22;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[4]), DirectArgMap_15, ((MR_Box) (TypeCtor_11)), &conv0__DirectArgFunctors_16);
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
      MR_Word TypeCtorSymName_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_11, (MR_Integer) 0))));
      MR_Integer TypeCtorArity_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_11, (MR_Integer) 1))));
      MR_Word Var_78;

      {
        Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (TypeCtorSymName_76));
        MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (TypeCtorArity_77));
      }
      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (Var_78));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__du_type_layout_scalar_common_1[35])));
      }
      {
        DirectArgPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DirectArgPieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__du_type_layout_scalar_common_1[58])));
        MR_hl_field(MR_mktag(1), DirectArgPieces_17, 1) = ((MR_Box) (Var_30));
      }
      Var_41 = mercury__term__context_init_0_f_0();
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (DirectArgPieces_17));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        DirectArgMsg_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DirectArgMsg_18, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), DirectArgMsg_18, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (DirectArgMsg_18));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        DirectArgSpec_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DirectArgSpec_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), DirectArgSpec_19, 1) = ((MR_Box) ((MR_Unsigned) 24U));
        MR_hl_field(MR_mktag(0), DirectArgSpec_19, 2) = ((MR_Box) (Var_47));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0), ((MR_Box) (TypeCtor_11)), ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__du_type_layout_scalar_common_9[0]))), STATE_VARIABLE_ComponentTypeMap_0_24, STATE_VARIABLE_ComponentTypeMap_25);
      else
        *STATE_VARIABLE_ComponentTypeMap_25 = STATE_VARIABLE_ComponentTypeMap_0_24;
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.du_type_layout.add_foreign_if_word_aligned_ptr\'/8", (MR_String) "foreign type is not for this backend");
        return;
      }
  }
}

static void MR_CALL 
hlds__du_type_layout__add_du_if_single_ctor_is_word_aligned_ptr_6_p_0(
  MR_Word Params_7,
  MR_Word TypeCtor_8,
  MR_Word TypeDefn_9,
  MR_Word MaybeForeign_10,
  MR_Word STATE_VARIABLE_ComponentTypeMap_0_20,
  MR_Word * STATE_VARIABLE_ComponentTypeMap_21)
{
  {
    MR_bool succeeded;
    MR_Integer TypeCtorArity_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_8, (MR_Integer) 1))));
    MR_Word DirectArgMap_14;
    MR_Word TypeCtorInfo_59_59;
    MR_Word TypeInfo_60_60;
    MR_Box conv0__DirectArgFunctors_15;

    succeeded = (TypeCtorArity_13 == (MR_Integer) 0);
    if (succeeded)
    {
      DirectArgMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 3))));
      TypeCtorInfo_59_59 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
      TypeInfo_60_60 = (MR_Word) (&hlds__du_type_layout_scalar_common_1[4]);
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_59_59, TypeInfo_60_60, DirectArgMap_14, ((MR_Box) (TypeCtor_8)), &conv0__DirectArgFunctors_15);
      if (succeeded)
        succeeded = MR_TRUE;
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word Assertions_18;
      MR_Word Foreign_16;
      MR_Word Target_17;

      succeeded = (MaybeForeign_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Foreign_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeign_10, (MR_Integer) 0))));
        Target_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 2))) >> 12)) & (MR_Integer) 3);
        succeeded = hlds__du_type_layout__is_foreign_type_body_for_target_3_p_0(Foreign_16, Target_17, &Assertions_18);
      }
      if (succeeded)
      {
        succeeded = hlds__hlds_data__asserted_word_aligned_pointer_1_p_0(Assertions_18);
        if (succeeded)
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0), ((MR_Box) (TypeCtor_8)), ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__du_type_layout_scalar_common_9[0]))), STATE_VARIABLE_ComponentTypeMap_0_20, STATE_VARIABLE_ComponentTypeMap_21);
        else
          *STATE_VARIABLE_ComponentTypeMap_21 = STATE_VARIABLE_ComponentTypeMap_0_20;
      }
      else
      {
        MR_Word Var_24;
        MR_Word ComponentKind_26;

        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (TypeDefn_9));
        }
        {
          ComponentKind_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ComponentKind_26, 0) = ((MR_Box) (Var_24));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0), ((MR_Box) (TypeCtor_8)), ((MR_Box) (ComponentKind_26)), STATE_VARIABLE_ComponentTypeMap_0_20, STATE_VARIABLE_ComponentTypeMap_21);
      }
    }
    else
      *STATE_VARIABLE_ComponentTypeMap_21 = STATE_VARIABLE_ComponentTypeMap_0_20;
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

          succeeded = (Var_38 != (MR_Word) ((MR_Unsigned) 0U));
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

          succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
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

          succeeded = (Var_35 != (MR_Word) ((MR_Unsigned) 0U));
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

          succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
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
hlds__du_type_layout__decide_type_repns_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    hlds__du_type_layout__show_decisions_if_du_type_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv15_HeadVar__3_3;
    MR_Word conv14_HeadVar__5_5;

    hlds__add_foreign_enum__add_pragma_foreign_export_enum_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv15_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv14_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv15_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv14_HeadVar__5_5));
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_TypeCtorTypeDefn_12;
    MR_Word conv11_STATE_VARIABLE_Specs_30;

    hlds__du_type_layout__decide_if_complex_du_type_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv12_TypeCtorTypeDefn_12, ((MR_Word) (wrapper_arg_3)), &conv11_STATE_VARIABLE_Specs_30);
    *wrapper_arg_2 = ((MR_Box) (conv12_TypeCtorTypeDefn_12));
    *wrapper_arg_4 = ((MR_Box) (conv11_STATE_VARIABLE_Specs_30));
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_TypeCtorTypeDefn_16;
    MR_Word conv6_STATE_VARIABLE_ComponentTypeMap_44;
    MR_Word conv5_STATE_VARIABLE_NoTagTypeMap_46;
    MR_Word conv4_STATE_VARIABLE_Specs_48;

    hlds__du_type_layout__decide_if_simple_du_type_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv7_TypeCtorTypeDefn_16, ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_ComponentTypeMap_44, ((MR_Word) (wrapper_arg_5)), &conv5_STATE_VARIABLE_NoTagTypeMap_46, ((MR_Word) (wrapper_arg_7)), &conv4_STATE_VARIABLE_Specs_48);
    *wrapper_arg_2 = ((MR_Box) (conv7_TypeCtorTypeDefn_16));
    *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_ComponentTypeMap_44));
    *wrapper_arg_6 = ((MR_Box) (conv5_STATE_VARIABLE_NoTagTypeMap_46));
    *wrapper_arg_8 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_48));
  }
}

static void MR_CALL 
hlds__du_type_layout__decide_type_repns_6_p_0_1(
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

    hlds__add_foreign_enum__add_pragma_foreign_enum_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Tuple) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

void MR_CALL 
hlds__du_type_layout__decide_type_repns_6_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  {
    MR_Word TypeRepnDec_10;
    MR_Word TypeRepns_11;
    MR_Word DirectArgMap_12;
    MR_Word ForeignEnums_13;
    MR_Word ForeignExportEnums_14;
    MR_Word Globals_15;
    MR_Word Params_16;
    MR_Word TypeCtorToForeignEnumMap_18;
    MR_Word TypeTable0_19;
    MR_Word TypeCtorsTypeDefns0_20;
    MR_Word ComponentTypeMap0_21;
    MR_Word NoTagTypeMap0_22;
    MR_Word TypeCtorsTypeDefns1_23;
    MR_Word ComponentTypeMap_24;
    MR_Word NoTagTypeMap_25;
    MR_Word TypeCtorsTypeDefns_26;
    MR_Word SortedTypeCtorsTypeDefns_27;
    MR_Word TypeTable_28;
    MR_Word MaybeShowTypeRepns_29;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word STATE_VARIABLE_Specs_47_47;
    MR_Word Var_48;
    MR_Word STATE_VARIABLE_Specs_49_49;
    MR_Word STATE_VARIABLE_ModuleInfo_50_50;
    MR_Word Var_51;
    MR_Word STATE_VARIABLE_Specs_52_52;
    MR_Word STATE_VARIABLE_ModuleInfo_53_53;
    MR_Word STATE_VARIABLE_ModuleInfo_55_55;
    MR_Word _TypeRepnMap_17;
    MR_Box conv3_TypeCtorToForeignEnumMap_18;
    MR_Box conv2_STATE_VARIABLE_Specs_47_47;
    MR_Box conv10_ComponentTypeMap_24;
    MR_Box conv9_NoTagTypeMap_25;
    MR_Box conv8_STATE_VARIABLE_Specs_49_49;
    MR_Box conv13_STATE_VARIABLE_Specs_52_52;
    MR_Box conv17_STATE_VARIABLE_ModuleInfo_55_55;
    MR_Box conv16_STATE_VARIABLE_Specs_41;

    hlds__hlds_module__module_info_get_type_repn_dec_2_p_0(STATE_VARIABLE_ModuleInfo_0_38, &TypeRepnDec_10);
    TypeRepns_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnDec_10, (MR_Integer) 0))));
    DirectArgMap_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnDec_10, (MR_Integer) 1))));
    ForeignEnums_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnDec_10, (MR_Integer) 2))));
    ForeignExportEnums_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnDec_10, (MR_Integer) 3))));
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_38, &Globals_15);
    hlds__du_type_layout__setup_decide_du_params_3_p_0(Globals_15, DirectArgMap_12, &Params_16);
    Var_44 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[0]));
    hlds__du_type_layout__build_type_repn_map_3_p_0(TypeRepns_11, Var_44, &_TypeRepnMap_17);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (hlds__du_type_layout__decide_type_repns_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_38));
    }
    Var_46 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__add_foreign_enum__hlds__add_foreign_enum__type_ctor_info_type_ctor_foreign_enums_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_2[0]), (MR_Word) (&hlds__du_type_layout_scalar_common_3[0]), (MR_Word) (&hlds__du_type_layout_scalar_common_1[1]), Var_45, ForeignEnums_13, ((MR_Box) (Var_46)), &conv3_TypeCtorToForeignEnumMap_18, ((MR_Box) (STATE_VARIABLE_Specs_0_40)), &conv2_STATE_VARIABLE_Specs_47_47);
    TypeCtorToForeignEnumMap_18 = ((MR_Word) (conv3_TypeCtorToForeignEnumMap_18));
    STATE_VARIABLE_Specs_47_47 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_47_47));
    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_38, &TypeTable0_19);
    hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable0_19, &TypeCtorsTypeDefns0_20);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0), &ComponentTypeMap0_21);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0), &NoTagTypeMap0_22);
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (hlds__du_type_layout__decide_type_repns_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_38));
      MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (Params_16));
      MR_hl_field(MR_mktag(0), Var_48, 5) = ((MR_Box) (TypeCtorToForeignEnumMap_18));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__du_type_layout_scalar_common_3[1]), (MR_Word) (&hlds__du_type_layout_scalar_common_3[1]), (MR_Word) (&hlds__du_type_layout_scalar_common_3[2]), (MR_Word) (&hlds__du_type_layout_scalar_common_3[3]), (MR_Word) (&hlds__du_type_layout_scalar_common_1[1]), Var_48, TypeCtorsTypeDefns0_20, &TypeCtorsTypeDefns1_23, ((MR_Box) (ComponentTypeMap0_21)), &conv10_ComponentTypeMap_24, ((MR_Box) (NoTagTypeMap0_22)), &conv9_NoTagTypeMap_25, ((MR_Box) (STATE_VARIABLE_Specs_47_47)), &conv8_STATE_VARIABLE_Specs_49_49);
    ComponentTypeMap_24 = ((MR_Word) (conv10_ComponentTypeMap_24));
    NoTagTypeMap_25 = ((MR_Word) (conv9_NoTagTypeMap_25));
    STATE_VARIABLE_Specs_49_49 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_49_49));
    hlds__hlds_module__module_info_set_no_tag_types_3_p_0(NoTagTypeMap_25, STATE_VARIABLE_ModuleInfo_0_38, &STATE_VARIABLE_ModuleInfo_50_50);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (hlds__du_type_layout__decide_type_repns_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_50_50));
      MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) (Params_16));
      MR_hl_field(MR_mktag(0), Var_51, 5) = ((MR_Box) (ComponentTypeMap_24));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_3[1]), (MR_Word) (&hlds__du_type_layout_scalar_common_3[1]), (MR_Word) (&hlds__du_type_layout_scalar_common_1[1]), Var_51, TypeCtorsTypeDefns1_23, &TypeCtorsTypeDefns_26, ((MR_Box) (STATE_VARIABLE_Specs_49_49)), &conv13_STATE_VARIABLE_Specs_52_52);
    STATE_VARIABLE_Specs_52_52 = ((MR_Word) (conv13_STATE_VARIABLE_Specs_52_52));
    hlds__hlds_data__set_all_type_ctor_defns_3_p_0(TypeCtorsTypeDefns_26, &SortedTypeCtorsTypeDefns_27, &TypeTable_28);
    hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_28, STATE_VARIABLE_ModuleInfo_50_50, &STATE_VARIABLE_ModuleInfo_53_53);
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__du_type_layout_scalar_common_1[1]), (MR_Word) (&hlds__du_type_layout_scalar_common_3[9]), ForeignExportEnums_14, ((MR_Box) (STATE_VARIABLE_ModuleInfo_53_53)), &conv17_STATE_VARIABLE_ModuleInfo_55_55, ((MR_Box) (STATE_VARIABLE_Specs_52_52)), &conv16_STATE_VARIABLE_Specs_41);
    STATE_VARIABLE_ModuleInfo_55_55 = ((MR_Word) (conv17_STATE_VARIABLE_ModuleInfo_55_55));
    *STATE_VARIABLE_Specs_41 = ((MR_Word) (conv16_STATE_VARIABLE_Specs_41));
    MaybeShowTypeRepns_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 4))));
    if (!((MaybeShowTypeRepns_29 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word ShowWhichTypes_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeShowTypeRepns_29, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ForDevelopers_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeShowTypeRepns_29, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ModuleName_32;
      MR_String FileName_33;
      MR_Word FileResult_34;

      hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_55_55, &ModuleName_32);
      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_15, (MR_Integer) 0, (MR_String) ".type_repns", ModuleName_32, &FileName_33);
      mercury__io__open_output_4_p_0(FileName_33, &FileResult_34);
      if (!(((MR_tag((MR_Word) FileResult_34)) == (MR_Integer) 1)))
      {
        MR_Word Stream_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FileResult_34, (MR_Integer) 0))));
        MR_Word MaybePrimaryTags_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 1))));
        MR_Word Var_61;
        MR_Box conv18_STATE_VARIABLE_IO_62_62;

        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_7[1]));
          MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (hlds__du_type_layout__decide_type_repns_6_p_0_5));
          MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (Stream_35));
          MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) (MaybePrimaryTags_36));
          MR_hl_field(MR_mktag(0), Var_61, 5) = ((MR_Box) (ShowWhichTypes_30));
          MR_hl_field(MR_mktag(0), Var_61, 6) = ((MR_Box) (ForDevelopers_31));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&hlds__du_type_layout_scalar_common_3[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_61, TypeCtorsTypeDefns_26, ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_IO_62_62);
        mercury__io__close_output_3_p_0(Stream_35);
      }
    }
    hlds__du_type_layout__add_special_pred_decl_defns_for_types_maybe_lazily_3_p_0(SortedTypeCtorsTypeDefns_27, STATE_VARIABLE_ModuleInfo_55_55, STATE_VARIABLE_ModuleInfo_39);
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout__setup_decide_du_params_3_p_0_3(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__setup_decide_du_params__3200__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__setup_decide_du_params__3198__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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

    succeeded = hlds__du_type_layout__IntroducedFrom__pred__setup_decide_du_params__3196__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
    MR_Word AllowPackingChars_22;
    MR_Word AllowPackingDummies_23;
    MR_Word AllowPackingLocalSegtags_24;
    MR_Word AllowPackingRemoteSegtags_25;
    MR_Word AllowPackingMiniTypes_26;
    MR_Word HighLevelData_27;
    MR_Word MaybeDirectArgs_31;
    MR_Word InformPacking_32;
    MR_Word MaybeInformPacking_33;
    MR_Word ShowAllTypeRepns_34;
    MR_Word ShowLocalTypeRepns_35;
    MR_Word ShowDeveloperTypeRepns_36;
    MR_Word ForDevelopers_37;
    MR_Word MaybeShowTypeRepns_38;

    libs__globals__get_target_2_p_0(Globals_4, &Target_7);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 270, &AllowDoubleWords_8);
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

          libs__globals__lookup_int_option_3_p_0(Globals_4, (MR_Integer) 262, &TargetWordBits_9);
          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 248, &SinglePrecFloat_10);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 267, &UnboxedNoTagTypesBool_13);
    switch (UnboxedNoTagTypesBool_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UnboxedNoTagTypes_14 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        UnboxedNoTagTypes_14 = (MR_Integer) 1;
        break;
    }
    libs__globals__lookup_int_option_3_p_0(Globals_4, (MR_Integer) 261, &NumPtagBits_15);
    succeeded = (NumPtagBits_15 == (MR_Integer) 0);
    if (succeeded)
      MaybePrimaryTags_16 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      succeeded = (NumPtagBits_15 == (MR_Integer) 2);
      if (succeeded)
        {
          MaybePrimaryTags_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybePrimaryTags_16, 0) = ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(3)))));
          MR_hl_field(MR_mktag(1), MaybePrimaryTags_16, 1) = ((MR_Box) (NumPtagBits_15));
        }
      else
      {
        succeeded = (NumPtagBits_15 == (MR_Integer) 3);
        if (succeeded)
          {
            MaybePrimaryTags_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybePrimaryTags_16, 0) = ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(7)))));
            MR_hl_field(MR_mktag(1), MaybePrimaryTags_16, 1) = ((MR_Box) (NumPtagBits_15));
          }
        else
        {
          MR_Integer MaxPtagInt_17;
          uint8_t MaxPtagUint8_18;
          MR_Integer Var_48;
          MR_Word Var_51;

          Var_48 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, NumPtagBits_15);
          MaxPtagInt_17 = (MR_Integer) ((MR_Unsigned) Var_48 - (MR_Unsigned) 1);
          MaxPtagUint8_18 = mercury__uint8__det_from_int_1_f_0(MaxPtagInt_17);
          Var_51 = (MR_Word) (MaxPtagUint8_18);
          {
            MaybePrimaryTags_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybePrimaryTags_16, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(1), MaybePrimaryTags_16, 1) = ((MR_Box) (NumPtagBits_15));
          }
        }
      }
    }
    libs__globals__lookup_int_option_3_p_0(Globals_4, (MR_Integer) 268, &ArgPackBits_19);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 271, &AllowDoubleWordInts_20);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 273, &AllowPackingInts_21);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 274, &AllowPackingChars_22);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 272, &AllowPackingDummies_23);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 275, &AllowPackingLocalSegtags_24);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 276, &AllowPackingRemoteSegtags_25);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 277, &AllowPackingMiniTypes_26);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 285, &HighLevelData_27);
    switch (Target_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word AllowDirectArgs_28;
          MR_Word TermSizeWords_29;
          MR_Word TermSizeCells_30;

          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 269, &AllowDirectArgs_28);
          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 236, &TermSizeWords_29);
          libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 237, &TermSizeCells_30);
          succeeded = (AllowDirectArgs_28 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = (HighLevelData_27 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (TermSizeWords_29 == (MR_Integer) 0);
              if (succeeded)
                succeeded = (TermSizeCells_30 == (MR_Integer) 0);
            }
          }
          if (succeeded)
            MaybeDirectArgs_31 = (MR_Integer) 1;
          else
            MaybeDirectArgs_31 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        MaybeDirectArgs_31 = (MR_Integer) 0;
        break;
    }
    switch (HighLevelData_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_64;
          MR_Word Var_68;
          MR_Word Var_72;

          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (hlds__du_type_layout__setup_decide_du_params_3_p_0_1));
            MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (AllowDoubleWords_8));
            MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_64, (MR_String) "predicate \140hlds.du_type_layout.setup_decide_du_params\'/3", (MR_String) "AllowDoubleWords != no");
          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (hlds__du_type_layout__setup_decide_du_params_3_p_0_2));
            MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (AllowPackingInts_21));
            MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_68, (MR_String) "predicate \140hlds.du_type_layout.setup_decide_du_params\'/3", (MR_String) "AllowPackingInts != no");
          {
            Var_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&hlds__du_type_layout_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (hlds__du_type_layout__setup_decide_du_params_3_p_0_3));
            MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (AllowPackingDummies_23));
            MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_72, (MR_String) "predicate \140hlds.du_type_layout.setup_decide_du_params\'/3", (MR_String) "AllowPackingDummies != no");
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 62, &InformPacking_32);
    switch (InformPacking_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeInformPacking_33 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        MaybeInformPacking_33 = (MR_Integer) 1;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 164, &ShowAllTypeRepns_34);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 163, &ShowLocalTypeRepns_35);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 165, &ShowDeveloperTypeRepns_36);
    switch (ShowDeveloperTypeRepns_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ForDevelopers_37 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        ForDevelopers_37 = (MR_Integer) 1;
        break;
    }
    switch (ShowAllTypeRepns_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (ShowLocalTypeRepns_35) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MaybeShowTypeRepns_38 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MaybeShowTypeRepns_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeShowTypeRepns_38, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (ForDevelopers_37)));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MaybeShowTypeRepns_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeShowTypeRepns_38, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (ForDevelopers_37)));
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *Params_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ArgPackBits_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybePrimaryTags_16));
      MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) (((((MR_Unsigned) (Target_7) << 12)) | (((((MR_Unsigned) (DoubleWordFloats_11) << 11)) | (((((MR_Unsigned) (DoubleWordInt64s_12) << 10)) | (((((MR_Unsigned) (UnboxedNoTagTypes_14) << 9)) | (((((MR_Unsigned) (MaybeInformPacking_33) << 8)) | (((((MR_Unsigned) (AllowDoubleWordInts_20) << 7)) | (((((MR_Unsigned) (AllowPackingInts_21) << 6)) | (((((MR_Unsigned) (AllowPackingChars_22) << 5)) | (((((MR_Unsigned) (AllowPackingDummies_23) << 4)) | (((((MR_Unsigned) (AllowPackingLocalSegtags_24) << 3)) | (((((MR_Unsigned) (AllowPackingRemoteSegtags_25) << 2)) | (((((MR_Unsigned) (AllowPackingMiniTypes_26) << 1)) | (MR_Unsigned) (MaybeDirectArgs_31)))))))))))))))))))))))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (DirectArgMap_5));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MaybeShowTypeRepns_38));
    }
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

      mercury__list__length_2_p_0((MR_Word) (&hlds__du_type_layout_scalar_common_1[2]), ArgTVars_11, &Arity_16);
      {
        TypeCtor_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
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

static void MR_CALL 
hlds__du_type_layout__add_special_pred_decl_defns_for_types_maybe_lazily_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    else
    {
      MR_Word TypeCtor_7;
      MR_Word TypeDefn_8;
      MR_Word TypeCtorsTypeDefns_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_ModuleInfo_14_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;

      TypeCtor_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
      TypeDefn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1))));
      hlds__add_special_pred__add_special_pred_decl_defns_for_type_maybe_lazily_4_p_0(TypeCtor_7, TypeDefn_8, STATE_VARIABLE_ModuleInfo_0_2, &STATE_VARIABLE_ModuleInfo_14_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TypeCtorsTypeDefns_9;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_14_14;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____args_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____args_locn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____args_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____args_locn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
hlds__du_type_layout____Unify____maybe_for_developers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____maybe_for_developers_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_for_developers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____maybe_for_developers_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
hlds__du_type_layout____Unify____maybe_show_type_repns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____maybe_show_type_repns_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_show_type_repns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____maybe_show_type_repns_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_tagword_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____maybe_tagword_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_tagword_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____maybe_tagword_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__du_type_layout____Unify____maybe_treat_as_first_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____maybe_treat_as_first_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____maybe_treat_as_first_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____maybe_treat_as_first_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
hlds__du_type_layout____Unify____show_which_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__du_type_layout____Unify____show_which_types_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__du_type_layout____Compare____show_which_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__du_type_layout____Compare____show_which_types_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_args_locn_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_kind_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_component_type_map_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_decide_du_params_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_direct_arg_cond_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_field_id_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_direct_args_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_double_word_floats_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_double_word_int64s_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_for_developers_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_inform_about_packing_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_primary_tags_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_show_type_repns_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_tagword_args_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_treat_as_first_arg_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_maybe_unboxed_no_tag_types_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_packable_kind_0);
	MR_register_type_ctor_info(&hlds__du_type_layout__hlds__du_type_layout__type_ctor_info_show_which_types_0);
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
