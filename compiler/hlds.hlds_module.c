/*
** Automatically generated from `hlds_module.m'
** by the Mercury compiler,
** version rotd-2018-08-08
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


// :- module hlds.hlds_module.
// :- implementation.

/*
INIT mercury__hlds__hlds_module__init
ENDINIT
*/

#include "hlds.hlds_module.mih"


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
#include "libs.file_util.mih"
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
#include "counter.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_module__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_hlds__hlds_module__type_ctor_info_avail_module_entry_0;

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_avail_module_0_0[3];

static const MR_DuArgLocn hlds__hlds_module__hlds__hlds_module__field_locns_avail_module_0_0[3];

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_avail_module_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_avail_module_0_0[1];

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_avail_module_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_avail_module_0[1];

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_avail_module_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_avail_module_0;

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_avail_module_entry_0_0[3];

static const MR_DuArgLocn hlds__hlds_module__hlds__hlds_module__field_locns_avail_module_entry_0_0[3];

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_avail_module_entry_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_avail_module_entry_0_0[1];

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_avail_module_entry_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_avail_module_entry_0[1];

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_avail_module_entry_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0hlds__hlds_module__type_ctor_info_avail_module_entry_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_complexity_arg_info_0_0[2];

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_complexity_arg_info_0_0[2];

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_complexity_arg_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_complexity_arg_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_complexity_arg_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_complexity_arg_info_0[1];

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_complexity_arg_info_0[1];

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_complexity_arg_kind_0_0;

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_complexity_arg_kind_0_1;

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_complexity_arg_kind_0_2;

static const MR_EnumFunctorDescPtr hlds__hlds_module__hlds__hlds_module__enum_value_ordered_complexity_arg_kind_0[3];

static const MR_EnumFunctorDescPtr hlds__hlds_module__hlds__hlds_module__enum_name_ordered_complexity_arg_kind_0[3];

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_complexity_arg_kind_0[3];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_complexity_arg_info_0;

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_complexity_proc_info_0_0[3];

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_complexity_proc_info_0_0[3];

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_complexity_proc_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_complexity_proc_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_complexity_proc_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_complexity_proc_info_0[1];

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_complexity_proc_info_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_data__type_ctor_info_constructor_repn_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_exported_enum_info_0_0[5];

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_exported_enum_info_0_0[5];

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_exported_enum_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_exported_enum_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_exported_enum_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_exported_enum_info_0[1];

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_exported_enum_info_0[1];

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_item_foreign_enum_info_0_0[4];

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_item_foreign_enum_info_0_0[4];

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_item_foreign_enum_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_item_foreign_enum_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_item_foreign_enum_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_item_foreign_enum_info_0[1];

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_item_foreign_enum_info_0[1];

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_item_foreign_export_enum_info_0_0[4];

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_item_foreign_export_enum_info_0_0[4];

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_item_foreign_export_enum_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_item_foreign_export_enum_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_item_foreign_export_enum_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_item_foreign_export_enum_info_0[1];

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_item_foreign_export_enum_info_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_no_tag_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mode_id_0hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_data__type_ctor_info_inner_cons_entry_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_data__type_ctor_info_inner_cons_entry_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_module_info_0_0[10];

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_module_info_0_0[10];

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_module_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_module_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_module_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_module_info_0[1];

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_module_info_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__maybe__ti_maybe_1recompilation__type_ctor_info_recompilation_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__libs__dependency_graph__ti_dependency_info_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__maybe__ti_maybe_1libs__dependency_graph__ti_dependency_info_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_type_ctor_gen_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_module__type_ctor_info_table_struct_info_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2term__type_ctor_info_context_0counter__type_ctor_info_counter_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__maybe__ti_maybe_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_complexity_proc_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__set_ordlist__ti_set_ordlist_1hlds__hlds_module__type_ctor_info_proc_analysis_kind_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_exported_enum_info_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_module__type_ctor_info_oisu_preds_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_module_rare_info_0_0[38];

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_module_rare_info_0_0[38];

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_module_rare_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_module_rare_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_module_rare_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_module_rare_info_0[1];

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_module_rare_info_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_class_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__cord__ti_cord_1hlds__hlds_module__type_ctor_info_pragma_exported_proc_0;

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_module_sub_info_0_0[7];

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_module_sub_info_0_0[7];

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_module_sub_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_module_sub_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_module_sub_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_module_sub_info_0[1];

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_module_sub_info_0[1];

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_oisu_preds_0_0[3];

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_oisu_preds_0_0[3];

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_oisu_preds_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_oisu_preds_0_0[1];

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_oisu_preds_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_oisu_preds_0[1];

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_oisu_preds_0[1];

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_pragma_exported_proc_0_0[5];

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_pragma_exported_proc_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_pragma_exported_proc_0_0[1];

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_pragma_exported_proc_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_pragma_exported_proc_0[1];

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_pragma_exported_proc_0[1];

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_0;

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_1;

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_2;

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_3;

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_4;

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_5;

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_6;

static const MR_EnumFunctorDescPtr hlds__hlds_module__hlds__hlds_module__enum_value_ordered_proc_analysis_kind_0[7];

static const MR_EnumFunctorDescPtr hlds__hlds_module__hlds__hlds_module__enum_name_ordered_proc_analysis_kind_0[7];

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_proc_analysis_kind_0[7];

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_table_struct_info_0_0[2];

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_table_struct_info_0_0[2];

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_table_struct_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_table_struct_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_table_struct_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_table_struct_info_0[1];

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_table_struct_info_0[1];

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_type_ctor_gen_info_0_0[8];

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_type_ctor_gen_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_type_ctor_gen_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_type_ctor_gen_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_type_ctor_gen_info_0[1];

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_type_ctor_gen_info_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_repn_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_item_foreign_export_enum_info_0;

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_type_repn_decision_data_0_0[4];

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_type_repn_decision_data_0_0[4];

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_type_repn_decision_data_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_type_repn_decision_data_0_0[1];

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_type_repn_decision_data_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_type_repn_decision_data_0[1];

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_type_repn_decision_data_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0;

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_type_spec_info_0_0[4];

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_type_spec_info_0_0[4];

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_type_spec_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_type_spec_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_type_spec_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_type_spec_info_0[1];

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_type_spec_info_0[1];

static void MR_CALL 
hlds__hlds_module____Compare____module_sub_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____module_sub_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_module____Compare____module_rare_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____module_rare_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_module__get_unique_pred_proc_id_for_symname_and_arity_3_p_0(
  MR_Word MI_4,
  MR_Word HeadVar__2_2,
  MR_Word * PredProcId_7);

static void MR_CALL 
hlds__hlds_module__add_implicit_avail_module_4_p_0(
  MR_Word ImportOrUse_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_AvailModuleMap_0_9,
  MR_Word * STATE_VARIABLE_AvailModuleMap_10);

static void MR_CALL 
hlds__hlds_module__module_info_user_final_pred_procs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module__module_info_user_init_pred_procs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module__module_info_set_user_final_pred_c_names_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7);

static void MR_CALL 
hlds__hlds_module__module_info_set_user_init_pred_c_names_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7);

static void MR_CALL 
hlds__hlds_module__combine_old_new_avail_attrs_6_p_0(
  MR_Word OldSection_7,
  MR_Word NewSection_8,
  MR_Word OldImportOrUse_9,
  MR_Word NewImportOrUse_10,
  MR_Word * Section_11,
  MR_Word * ImportOrUse_12);

static void MR_CALL 
hlds__hlds_module__module_info_set_atomics_per_context_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7);

static void MR_CALL 
hlds__hlds_module__module_info_set_lambdas_per_context_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7);

static void MR_CALL 
hlds__hlds_module__module_info_set_num_errors_3_p_0(
  MR_Integer X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7);

static void MR_CALL 
hlds__hlds_module__module_info_init_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_module__module_info_init_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____avail_module_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____avail_module_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____avail_module_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____avail_module_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____avail_module_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____avail_module_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____complexity_arg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____complexity_arg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____complexity_arg_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____complexity_arg_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____complexity_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____complexity_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____complexity_proc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____complexity_proc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____direct_arg_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____direct_arg_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____exported_enum_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____exported_enum_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____item_foreign_enum_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____item_foreign_enum_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____item_foreign_export_enum_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____item_foreign_export_enum_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____module_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____module_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____module_rare_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____module_rare_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____module_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____module_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____oisu_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____oisu_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____oisu_preds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____oisu_preds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____pragma_exported_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____pragma_exported_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____proc_analysis_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____proc_analysis_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____table_struct_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____table_struct_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____table_struct_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____table_struct_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____type_ctor_gen_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____type_ctor_gen_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____type_repn_decision_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____type_repn_decision_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____type_spec_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____type_spec_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____unused_arg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____unused_arg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_module_scalar_common_1[30][2];

static /* final */ const MR_Box hlds__hlds_module_scalar_common_2[16][3];

static /* final */ const MR_Box hlds__hlds_module_scalar_common_3[1][7];

static /* final */ const MR_Box hlds__hlds_module_scalar_common_4[2][4];

static /* final */ const MR_Box hlds__hlds_module_scalar_common_5[1][1];

static /* final */ const MR_Box hlds__hlds_module_scalar_common_6[1][6];




static /* final */ const MR_Box hlds__hlds_module_scalar_common_1[30][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_info_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_module_scalar_common_1[16]))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_type_ctor_gen_info_0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 20 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 21 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_module_scalar_common_2[10]))
  },
  /* row 22 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_proc_info_0))
  },
  /* row 23 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0))
  },
  /* row 24 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_module_scalar_common_2[1]))
  },
  /* row 25 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0))
  },
  /* row 26 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 27 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0))
  },
  /* row 28 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row 29 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_item_foreign_export_enum_info_0))
  },
};

static /* final */ const MR_Box hlds__hlds_module_scalar_common_2[16][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_module_scalar_common_1[5]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_module_scalar_common_1[6]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module_scalar_common_1[3]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module_scalar_common_2[2]))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_module_scalar_common_1[0]))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module_scalar_common_1[1]))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module_scalar_common_1[2]))
  },
};

static /* final */ const MR_Box hlds__hlds_module_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_module__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_hlds__hlds_module__type_ctor_info_avail_module_entry_0)),
    ((MR_Box) (&hlds__hlds_module__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_hlds__hlds_module__type_ctor_info_avail_module_entry_0))
  },
};

static /* final */ const MR_Box hlds__hlds_module_scalar_common_4[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__hlds_module_scalar_common_3[0])),
    ((MR_Box) (hlds__hlds_module__module_info_init_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__hlds_module_scalar_common_3[0])),
    ((MR_Box) (hlds__hlds_module__module_info_init_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box hlds__hlds_module_scalar_common_5[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 4)) | (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 1)) | (MR_Unsigned) ((MR_Integer) 0)))))))))
  },
};

static /* final */ const MR_Box hlds__hlds_module_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_module__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_hlds__hlds_module__type_ctor_info_avail_module_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_avail_module_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuArgLocn hlds__hlds_module__hlds__hlds_module__field_locns_avail_module_0_0[3] = {
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
  }
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_avail_module_0_0 = {
  (MR_String) "avail_module",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_module__hlds__hlds_module__field_types_avail_module_0_0,
  NULL,
  hlds__hlds_module__hlds__hlds_module__field_locns_avail_module_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_avail_module_0_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_avail_module_0_0
};

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_avail_module_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_avail_module_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_avail_module_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_avail_module_0_0
};

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_avail_module_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____avail_module_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____avail_module_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "avail_module",
  {     hlds__hlds_module__hlds__hlds_module__du_name_ordered_avail_module_0 },
  {     hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_avail_module_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_module__hlds__hlds_module__functor_number_map_avail_module_0
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_avail_module_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_avail_module_entry_0_0[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_avail_module_0)
};

static const MR_DuArgLocn hlds__hlds_module__hlds__hlds_module__field_locns_avail_module_entry_0_0[3] = {
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
  }
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_avail_module_entry_0_0 = {
  (MR_String) "avail_module_entry",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_module__hlds__hlds_module__field_types_avail_module_entry_0_0,
  NULL,
  hlds__hlds_module__hlds__hlds_module__field_locns_avail_module_entry_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_avail_module_entry_0_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_avail_module_entry_0_0
};

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_avail_module_entry_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_avail_module_entry_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_avail_module_entry_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_avail_module_entry_0_0
};

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_avail_module_entry_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____avail_module_entry_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____avail_module_entry_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "avail_module_entry",
  {     hlds__hlds_module__hlds__hlds_module__du_name_ordered_avail_module_entry_0 },
  {     hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_avail_module_entry_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_module__hlds__hlds_module__functor_number_map_avail_module_entry_0
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0hlds__hlds_module__type_ctor_info_avail_module_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_module____Unify____avail_module_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____avail_module_map_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "avail_module_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0hlds__hlds_module__type_ctor_info_avail_module_entry_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_complexity_arg_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__maybe__ti_maybe_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_kind_0)
};

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_complexity_arg_info_0_0[2] = {
  (MR_String) "complexity_arg_name",
  (MR_String) "complexity_arg_kind"
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_complexity_arg_info_0_0 = {
  (MR_String) "complexity_arg_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_module__hlds__hlds_module__field_types_complexity_arg_info_0_0,
  hlds__hlds_module__hlds__hlds_module__field_names_complexity_arg_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_complexity_arg_info_0_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_complexity_arg_info_0_0
};

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_complexity_arg_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_complexity_arg_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_complexity_arg_info_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_complexity_arg_info_0_0
};

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_complexity_arg_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____complexity_arg_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____complexity_arg_info_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "complexity_arg_info",
  {     hlds__hlds_module__hlds__hlds_module__du_name_ordered_complexity_arg_info_0 },
  {     hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_complexity_arg_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_module__hlds__hlds_module__functor_number_map_complexity_arg_info_0
};

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_complexity_arg_kind_0_0 = {
  (MR_String) "complexity_input_variable_size",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_complexity_arg_kind_0_1 = {
  (MR_String) "complexity_input_fixed_size",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_complexity_arg_kind_0_2 = {
  (MR_String) "complexity_output",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr hlds__hlds_module__hlds__hlds_module__enum_value_ordered_complexity_arg_kind_0[3] = {
  &hlds__hlds_module__hlds__hlds_module__enum_functor_desc_complexity_arg_kind_0_0,
  &hlds__hlds_module__hlds__hlds_module__enum_functor_desc_complexity_arg_kind_0_1,
  &hlds__hlds_module__hlds__hlds_module__enum_functor_desc_complexity_arg_kind_0_2
};

static const MR_EnumFunctorDescPtr hlds__hlds_module__hlds__hlds_module__enum_name_ordered_complexity_arg_kind_0[3] = {
  &hlds__hlds_module__hlds__hlds_module__enum_functor_desc_complexity_arg_kind_0_1,
  &hlds__hlds_module__hlds__hlds_module__enum_functor_desc_complexity_arg_kind_0_0,
  &hlds__hlds_module__hlds__hlds_module__enum_functor_desc_complexity_arg_kind_0_2
};

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_complexity_arg_kind_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_module____Unify____complexity_arg_kind_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____complexity_arg_kind_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "complexity_arg_kind",
  {     hlds__hlds_module__hlds__hlds_module__enum_name_ordered_complexity_arg_kind_0 },
  {     hlds__hlds_module__hlds__hlds_module__enum_value_ordered_complexity_arg_kind_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__hlds_module__hlds__hlds_module__functor_number_map_complexity_arg_kind_0
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_complexity_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_complexity_proc_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_complexity_arg_info_0)
};

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_complexity_proc_info_0_0[3] = {
  (MR_String) "complexity_proc_num",
  (MR_String) "complexity_proc_name",
  (MR_String) "complexity_proc_args"
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_complexity_proc_info_0_0 = {
  (MR_String) "complexity_proc_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_module__hlds__hlds_module__field_types_complexity_proc_info_0_0,
  hlds__hlds_module__hlds__hlds_module__field_names_complexity_proc_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_complexity_proc_info_0_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_complexity_proc_info_0_0
};

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_complexity_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_complexity_proc_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_complexity_proc_info_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_complexity_proc_info_0_0
};

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_complexity_proc_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_proc_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____complexity_proc_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____complexity_proc_info_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "complexity_proc_info",
  {     hlds__hlds_module__hlds__hlds_module__du_name_ordered_complexity_proc_info_0 },
  {     hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_complexity_proc_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_module__hlds__hlds_module__functor_number_map_complexity_proc_info_0
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_proc_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_module____Unify____complexity_proc_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____complexity_proc_map_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "complexity_proc_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_module__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_direct_arg_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_module____Unify____direct_arg_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____direct_arg_map_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "direct_arg_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_data__type_ctor_info_constructor_repn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_exported_enum_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1hlds__hlds_data__type_ctor_info_constructor_repn_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_exported_enum_info_0_0[5] = {
  (MR_String) "eei_type_ctor",
  (MR_String) "eei_constants",
  (MR_String) "eei_language",
  (MR_String) "eei_name_map",
  (MR_String) "eei_context"
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_exported_enum_info_0_0 = {
  (MR_String) "exported_enum_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_module__hlds__hlds_module__field_types_exported_enum_info_0_0,
  hlds__hlds_module__hlds__hlds_module__field_names_exported_enum_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_exported_enum_info_0_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_exported_enum_info_0_0
};

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_exported_enum_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_exported_enum_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_exported_enum_info_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_exported_enum_info_0_0
};

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_exported_enum_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____exported_enum_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____exported_enum_info_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "exported_enum_info",
  {     hlds__hlds_module__hlds__hlds_module__du_name_ordered_exported_enum_info_0 },
  {     hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_exported_enum_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_module__hlds__hlds_module__functor_number_map_exported_enum_info_0
};

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_item_foreign_enum_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_enum_0),
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_item_foreign_enum_info_0_0[4] = {
  (MR_String) "fe_pragma",
  (MR_String) "fe_status",
  (MR_String) "fe_context",
  (MR_String) "fe_seq_num"
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_item_foreign_enum_info_0_0 = {
  (MR_String) "item_foreign_enum_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_module__hlds__hlds_module__field_types_item_foreign_enum_info_0_0,
  hlds__hlds_module__hlds__hlds_module__field_names_item_foreign_enum_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_item_foreign_enum_info_0_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_item_foreign_enum_info_0_0
};

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_item_foreign_enum_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_item_foreign_enum_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_item_foreign_enum_info_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_item_foreign_enum_info_0_0
};

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_item_foreign_enum_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_item_foreign_enum_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____item_foreign_enum_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____item_foreign_enum_info_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "item_foreign_enum_info",
  {     hlds__hlds_module__hlds__hlds_module__du_name_ordered_item_foreign_enum_info_0 },
  {     hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_item_foreign_enum_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_module__hlds__hlds_module__functor_number_map_item_foreign_enum_info_0
};

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_item_foreign_export_enum_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_export_enum_0),
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_item_foreign_export_enum_info_0_0[4] = {
  (MR_String) "fee_pragma",
  (MR_String) "fee_status",
  (MR_String) "fee_context",
  (MR_String) "fee_seq_num"
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_item_foreign_export_enum_info_0_0 = {
  (MR_String) "item_foreign_export_enum_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_module__hlds__hlds_module__field_types_item_foreign_export_enum_info_0_0,
  hlds__hlds_module__hlds__hlds_module__field_names_item_foreign_export_enum_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_item_foreign_export_enum_info_0_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_item_foreign_export_enum_info_0_0
};

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_item_foreign_export_enum_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_item_foreign_export_enum_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_item_foreign_export_enum_info_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_item_foreign_export_enum_info_0_0
};

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_item_foreign_export_enum_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_item_foreign_export_enum_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____item_foreign_export_enum_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____item_foreign_export_enum_info_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "item_foreign_export_enum_info",
  {     hlds__hlds_module__hlds__hlds_module__du_name_ordered_item_foreign_export_enum_info_0 },
  {     hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_item_foreign_export_enum_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_module__hlds__hlds_module__functor_number_map_item_foreign_export_enum_info_0
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_no_tag_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mode_id_0hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0),
    (MR_TypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_data__type_ctor_info_inner_cons_entry_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_inner_cons_entry_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_data__type_ctor_info_inner_cons_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&hlds__hlds_module__list__ti_list_1hlds__hlds_data__type_ctor_info_inner_cons_entry_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&hlds__hlds_module__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_module_info_0_0[10] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_sub_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_rare_info_0),
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
  (MR_PseudoTypeInfo) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_no_tag_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_inst_table_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mode_id_0hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_data__type_ctor_info_inner_cons_entry_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0)
};

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_module_info_0_0[10] = {
  (MR_String) "mi_sub_info",
  (MR_String) "mi_rare_info",
  (MR_String) "mi_globals",
  (MR_String) "mi_predicate_table",
  (MR_String) "mi_type_table",
  (MR_String) "mi_no_tag_type_table",
  (MR_String) "mi_inst_table",
  (MR_String) "mi_mode_table",
  (MR_String) "mi_cons_table",
  (MR_String) "mi_ctor_field_table"
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_module_info_0_0 = {
  (MR_String) "module_info",
  (MR_Integer) 10,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_module__hlds__hlds_module__field_types_module_info_0_0,
  hlds__hlds_module__hlds__hlds_module__field_names_module_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_module_info_0_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_module_info_0_0
};

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_module_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_module_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_module_info_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_module_info_0_0
};

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_module_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____module_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____module_info_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "module_info",
  {     hlds__hlds_module__hlds__hlds_module__du_name_ordered_module_info_0 },
  {     hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_module_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_module__hlds__hlds_module__functor_number_map_module_info_0
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__maybe__ti_maybe_1recompilation__type_ctor_info_recompilation_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&recompilation__recompilation__type_ctor_info_recompilation_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&hlds__hlds_module__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__libs__dependency_graph__ti_dependency_info_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_info_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__maybe__ti_maybe_1libs__dependency_graph__ti_dependency_info_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&hlds__hlds_module__libs__dependency_graph__ti_dependency_info_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_type_ctor_gen_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_type_ctor_gen_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&hlds__hlds_module__list__ti_list_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_module__type_ctor_info_table_struct_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2term__type_ctor_info_context_0counter__type_ctor_info_counter_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0),
    (MR_TypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__maybe__ti_maybe_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&hlds__hlds_module__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_complexity_proc_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_proc_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__set_ordlist__ti_set_ordlist_1hlds__hlds_module__type_ctor_info_proc_analysis_kind_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_module__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_exported_enum_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_module__type_ctor_info_oisu_preds_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_module_rare_info_0_0[38] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_partial_qualifier_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__maybe__ti_maybe_1recompilation__type_ctor_info_recompilation_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_proc_requests_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assertion_table_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_has_parallel_conj_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_has_user_event_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__maybe__ti_maybe_1libs__dependency_graph__ti_dependency_info_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_type_ctor_gen_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_module__type_ctor_info_table_struct_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2term__type_ctor_info_context_0counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2term__type_ctor_info_context_0counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0hlds__hlds_module__type_ctor_info_avail_module_entry_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__maybe__ti_maybe_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_complexity_proc_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__set_ordlist__ti_set_ordlist_1hlds__hlds_module__type_ctor_info_proc_analysis_kind_0),
  (MR_PseudoTypeInfo) (&analysis__analysis__type_ctor_info_analysis_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_exported_enum_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_set_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_module__type_ctor_info_oisu_preds_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_type_repn_decision_data_0)
};

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_module_rare_info_0_0[38] = {
  (MR_String) "mri_module_name",
  (MR_String) "mri_module_name_context",
  (MR_String) "mri_dump_base_file_name",
  (MR_String) "mri_partial_qualifier_info",
  (MR_String) "mri_maybe_recompilation_info",
  (MR_String) "mri_proc_requests",
  (MR_String) "mri_assertion_table",
  (MR_String) "mri_exclusive_table",
  (MR_String) "mri_has_parallel_conj",
  (MR_String) "mri_has_user_event",
  (MR_String) "mri_foreign_decl_codes",
  (MR_String) "mri_foreign_body_codes",
  (MR_String) "mri_fact_table_file_names",
  (MR_String) "mri_maybe_dependency_info",
  (MR_String) "mri_num_errors",
  (MR_String) "mri_type_ctor_gen_infos",
  (MR_String) "mri_must_be_stratified_preds",
  (MR_String) "mri_unused_arg_info",
  (MR_String) "mri_table_struct_map",
  (MR_String) "mri_lambdas_per_context",
  (MR_String) "mri_atomics_per_context",
  (MR_String) "mri_avail_module_map",
  (MR_String) "mri_indirectly_imported_module_names",
  (MR_String) "mri_used_modules",
  (MR_String) "mri_maybe_complexity_proc_map",
  (MR_String) "mri_complexity_proc_infos",
  (MR_String) "mri_proc_analysis_kinds",
  (MR_String) "mri_analysis_info",
  (MR_String) "mri_user_init_pred_c_names",
  (MR_String) "mri_user_final_pred_c_names",
  (MR_String) "mri_structure_reuse_preds",
  (MR_String) "mri_exported_enums",
  (MR_String) "mri_event_set",
  (MR_String) "mri_oisu_map",
  (MR_String) "mri_oisu_procs",
  (MR_String) "mri_ts_string_table_size",
  (MR_String) "mri_ts_rev_string_table",
  (MR_String) "mri_type_repn_dec"
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_module_rare_info_0_0 = {
  (MR_String) "module_rare_info",
  (MR_Integer) 38,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_module__hlds__hlds_module__field_types_module_rare_info_0_0,
  hlds__hlds_module__hlds__hlds_module__field_names_module_rare_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_module_rare_info_0_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_module_rare_info_0_0
};

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_module_rare_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_module_rare_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_module_rare_info_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_module_rare_info_0_0
};

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_module_rare_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_rare_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____module_rare_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____module_rare_info_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "module_rare_info",
  {     hlds__hlds_module__hlds__hlds_module__du_name_ordered_module_rare_info_0 },
  {     hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_module_rare_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_module__hlds__hlds_module__functor_number_map_module_rare_info_0
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_class_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_TypeInfo) (&hlds__hlds_module__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__cord__ti_cord_1hlds__hlds_module__type_ctor_info_pragma_exported_proc_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_module_sub_info_0_0[7] = {
  (MR_PseudoTypeInfo) (&hlds__special_pred__hlds__special_pred__type_ctor_info_special_pred_maps_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_class_defn_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_type_spec_info_0),
  (MR_PseudoTypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_db_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_modules_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__cord__ti_cord_1hlds__hlds_module__type_ctor_info_pragma_exported_proc_0)
};

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_module_sub_info_0_0[7] = {
  (MR_String) "msi_special_pred_maps",
  (MR_String) "mi_class_table",
  (MR_String) "msi_instance_table",
  (MR_String) "msi_type_spec_info",
  (MR_String) "msi_const_struct_db",
  (MR_String) "msi_foreign_import_modules",
  (MR_String) "msi_pragma_exported_procs"
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_module_sub_info_0_0 = {
  (MR_String) "module_sub_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_module__hlds__hlds_module__field_types_module_sub_info_0_0,
  hlds__hlds_module__hlds__hlds_module__field_names_module_sub_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_module_sub_info_0_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_module_sub_info_0_0
};

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_module_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_module_sub_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_module_sub_info_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_module_sub_info_0_0
};

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_module_sub_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_sub_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____module_sub_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____module_sub_info_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "module_sub_info",
  {     hlds__hlds_module__hlds__hlds_module__du_name_ordered_module_sub_info_0 },
  {     hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_module_sub_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_module__hlds__hlds_module__functor_number_map_module_sub_info_0
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_module____Unify____oisu_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____oisu_map_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "oisu_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_module__type_ctor_info_oisu_preds_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_oisu_preds_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)
};

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_oisu_preds_0_0[3] = {
  (MR_String) "op_creators",
  (MR_String) "op_mutators",
  (MR_String) "op_destructors"
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_oisu_preds_0_0 = {
  (MR_String) "oisu_preds",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_module__hlds__hlds_module__field_types_oisu_preds_0_0,
  hlds__hlds_module__hlds__hlds_module__field_names_oisu_preds_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_oisu_preds_0_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_oisu_preds_0_0
};

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_oisu_preds_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_oisu_preds_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_oisu_preds_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_oisu_preds_0_0
};

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_oisu_preds_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____oisu_preds_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____oisu_preds_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "oisu_preds",
  {     hlds__hlds_module__hlds__hlds_module__du_name_ordered_oisu_preds_0 },
  {     hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_oisu_preds_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_module__hlds__hlds_module__functor_number_map_oisu_preds_0
};

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_pragma_exported_proc_0_0[5] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_pragma_exported_proc_0_0 = {
  (MR_String) "pragma_exported_proc",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_module__hlds__hlds_module__field_types_pragma_exported_proc_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_pragma_exported_proc_0_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_pragma_exported_proc_0_0
};

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_pragma_exported_proc_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_pragma_exported_proc_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_pragma_exported_proc_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_pragma_exported_proc_0_0
};

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_pragma_exported_proc_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____pragma_exported_proc_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____pragma_exported_proc_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "pragma_exported_proc",
  {     hlds__hlds_module__hlds__hlds_module__du_name_ordered_pragma_exported_proc_0 },
  {     hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_pragma_exported_proc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_module__hlds__hlds_module__functor_number_map_pragma_exported_proc_0
};

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_0 = {
  (MR_String) "pak_exception",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_1 = {
  (MR_String) "pak_trailing",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_2 = {
  (MR_String) "pak_mm_tabling",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_3 = {
  (MR_String) "pak_termination",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_4 = {
  (MR_String) "pak_termination2",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_5 = {
  (MR_String) "pak_structure_sharing",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_6 = {
  (MR_String) "pak_structure_reuse",
  (MR_Integer) 6
};

static const MR_EnumFunctorDescPtr hlds__hlds_module__hlds__hlds_module__enum_value_ordered_proc_analysis_kind_0[7] = {
  &hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_0,
  &hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_1,
  &hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_2,
  &hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_3,
  &hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_4,
  &hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_5,
  &hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_6
};

static const MR_EnumFunctorDescPtr hlds__hlds_module__hlds__hlds_module__enum_name_ordered_proc_analysis_kind_0[7] = {
  &hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_0,
  &hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_2,
  &hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_6,
  &hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_5,
  &hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_3,
  &hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_4,
  &hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_1
};

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_proc_analysis_kind_0[7] = {
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_module____Unify____proc_analysis_kind_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____proc_analysis_kind_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "proc_analysis_kind",
  {     hlds__hlds_module__hlds__hlds_module__enum_name_ordered_proc_analysis_kind_0 },
  {     hlds__hlds_module__hlds__hlds_module__enum_value_ordered_proc_analysis_kind_0 },
  (MR_Integer) 7,
  (MR_Integer) 4,
  hlds__hlds_module__hlds__hlds_module__functor_number_map_proc_analysis_kind_0
};

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_table_struct_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_table_struct_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_table_attributes_0)
};

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_table_struct_info_0_0[2] = {
  (MR_String) "table_struct_proc",
  (MR_String) "table_struct_attrs"
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_table_struct_info_0_0 = {
  (MR_String) "table_struct_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_module__hlds__hlds_module__field_types_table_struct_info_0_0,
  hlds__hlds_module__hlds__hlds_module__field_names_table_struct_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_table_struct_info_0_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_table_struct_info_0_0
};

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_table_struct_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_table_struct_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_table_struct_info_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_table_struct_info_0_0
};

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_table_struct_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____table_struct_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____table_struct_info_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "table_struct_info",
  {     hlds__hlds_module__hlds__hlds_module__du_name_ordered_table_struct_info_0 },
  {     hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_table_struct_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_module__hlds__hlds_module__functor_number_map_table_struct_info_0
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_module____Unify____table_struct_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____table_struct_map_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "table_struct_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_module__type_ctor_info_table_struct_info_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_type_ctor_gen_info_0_0[8] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_type_status_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_type_ctor_gen_info_0_0 = {
  (MR_String) "type_ctor_gen_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_module__hlds__hlds_module__field_types_type_ctor_gen_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_type_ctor_gen_info_0_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_type_ctor_gen_info_0_0
};

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_type_ctor_gen_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_type_ctor_gen_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_type_ctor_gen_info_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_type_ctor_gen_info_0_0
};

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_type_ctor_gen_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_type_ctor_gen_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____type_ctor_gen_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____type_ctor_gen_info_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "type_ctor_gen_info",
  {     hlds__hlds_module__hlds__hlds_module__du_name_ordered_type_ctor_gen_info_0 },
  {     hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_type_ctor_gen_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_module__hlds__hlds_module__functor_number_map_type_ctor_gen_info_0
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_repn_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_item_foreign_export_enum_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_item_foreign_export_enum_info_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_type_repn_decision_data_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_type_repn_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_item_foreign_enum_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_item_foreign_export_enum_info_0)
};

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_type_repn_decision_data_0_0[4] = {
  (MR_String) "trdd_type_repns",
  (MR_String) "trdd_direct_arg_map",
  (MR_String) "trdd_foreign_enums",
  (MR_String) "trdd_foreign_exports"
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_type_repn_decision_data_0_0 = {
  (MR_String) "type_repn_decision_data",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_module__hlds__hlds_module__field_types_type_repn_decision_data_0_0,
  hlds__hlds_module__hlds__hlds_module__field_names_type_repn_decision_data_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_type_repn_decision_data_0_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_type_repn_decision_data_0_0
};

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_type_repn_decision_data_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_type_repn_decision_data_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_type_repn_decision_data_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_type_repn_decision_data_0_0
};

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_type_repn_decision_data_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_type_repn_decision_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____type_repn_decision_data_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____type_repn_decision_data_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "type_repn_decision_data",
  {     hlds__hlds_module__hlds__hlds_module__du_name_ordered_type_repn_decision_data_0 },
  {     hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_type_repn_decision_data_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_module__hlds__hlds_module__functor_number_map_type_repn_decision_data_0
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&hlds__hlds_module__list__ti_list_1parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_type_spec_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)
};

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_type_spec_info_0_0[4] = {
  (MR_String) "user_req_procs",
  (MR_String) "must_process_preds",
  (MR_String) "user_to_process_map",
  (MR_String) "pragma_map"
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_type_spec_info_0_0 = {
  (MR_String) "type_spec_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_module__hlds__hlds_module__field_types_type_spec_info_0_0,
  hlds__hlds_module__hlds__hlds_module__field_names_type_spec_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_type_spec_info_0_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_type_spec_info_0_0
};

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_type_spec_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_type_spec_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_type_spec_info_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_type_spec_info_0_0
};

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_type_spec_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_type_spec_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____type_spec_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____type_spec_info_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "type_spec_info",
  {     hlds__hlds_module__hlds__hlds_module__du_name_ordered_type_spec_info_0 },
  {     hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_type_spec_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_module__hlds__hlds_module__functor_number_map_type_spec_info_0
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_unused_arg_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_module____Unify____unused_arg_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____unused_arg_info_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "unused_arg_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

void MR_CALL 
hlds__hlds_module____Compare____unused_arg_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____unused_arg_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_module____Compare____type_ctor_gen_info_0_0(
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_String ArgX3_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgY3_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Integer ArgX4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgY4_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word Var_20;

      parse_tree__prog_data____Compare____type_ctor_0_0(&Var_20, ArgX1_4, ArgY1_5);
      succeeded = (Var_20 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_20;
      else
      {
        MR_Word Var_21;

        mdbcomp__sym_name____Compare____sym_name_0_0(&Var_21, ArgX2_6, ArgY2_7);
        succeeded = (Var_21 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_21;
        else
        {
          MR_Word Var_22;

          mercury__private_builtin__builtin_compare_string_3_p_0(&Var_22, ArgX3_8, ArgY3_9);
          succeeded = (Var_22 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_22;
          else
          {
            MR_Word Var_23;

            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_23, ArgX4_10, ArgY4_11);
            succeeded = (Var_23 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_23;
            else
            {
              MR_Word Var_24;

              hlds__status____Compare____type_status_0_0(&Var_24, ArgX5_12, ArgY5_13);
              succeeded = (Var_24 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_24;
              else
              {
                MR_Word Var_25;

                hlds__hlds_data____Compare____hlds_type_defn_0_0(&Var_25, ArgX6_14, ArgY6_15);
                succeeded = (Var_25 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_25;
                else
                {
                  MR_Word Var_26;

                  hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_26, ArgX7_16, ArgY7_17);
                  succeeded = (Var_26 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_26;
                  else
                    hlds__hlds_pred____Compare____pred_proc_id_0_0(HeadVar__1_1, ArgX8_18, ArgY8_19);
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
hlds__hlds_module____Unify____type_ctor_gen_info_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));

      succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = hlds__status____Unify____type_status_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                succeeded = hlds__hlds_data____Unify____hlds_type_defn_0_0(ArgX6_13, ArgY6_14);
                if (succeeded)
                {
                  succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX7_15, ArgY7_16);
                  if (succeeded)
                    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX8_17, ArgY8_18);
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
hlds__hlds_module____Compare____table_struct_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[8]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____table_struct_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[8]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_module____Compare____table_struct_info_0_0(
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_8;

      hlds__hlds_pred____Compare____proc_table_struct_info_0_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        parse_tree__prog_data_pragma____Compare____table_attributes_0_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____table_struct_info_0_0(
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

      succeeded = hlds__hlds_pred____Unify____proc_table_struct_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = parse_tree__prog_data_pragma____Unify____table_attributes_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_module____Compare____proc_analysis_kind_0_0(
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

MR_bool MR_CALL 
hlds__hlds_module____Unify____proc_analysis_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_module____Compare____pragma_exported_proc_0_0(
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_String ArgX4_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_String ArgY4_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word Var_14;
      MR_Integer Var_25 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_26 = (MR_Integer) (ArgY1_5);

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_14, Var_25, Var_26);
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        hlds__hlds_pred____Compare____pred_id_0_0(&Var_15, ArgX2_6, ArgY2_7);
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_16, ArgX3_8, ArgY3_9);
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            mercury__private_builtin__builtin_compare_string_3_p_0(&Var_17, ArgX4_10, ArgY4_11);
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
              mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX5_12, ArgY5_13);
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____pragma_exported_proc_0_0(
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
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgX4_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_String ArgY4_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (strcmp(ArgX4_9, ArgY4_10) == 0);
            if (succeeded)
              succeeded = mercury__term____Unify____context_0_0(ArgX5_11, ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_module____Compare____oisu_preds_0_0(
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word Var_10;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[1]), &Var_10, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[1]), &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____oisu_preds_0_0(
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&hlds__hlds_module_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&hlds__hlds_module_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_module____Compare____oisu_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[11]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____oisu_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[11]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____module_sub_info_0_0(
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word Var_18;

      hlds__special_pred____Compare____special_pred_maps_0_0(&Var_18, ArgX1_4, ArgY1_5);
      succeeded = (Var_18 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_18;
      else
      {
        MR_Word Var_19;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[12]), &Var_19, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_19 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_19;
        else
        {
          MR_Word Var_20;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[13]), &Var_20, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_20 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_20;
          else
          {
            MR_Word Var_21;

            hlds__hlds_module____Compare____type_spec_info_0_0(&Var_21, ArgX4_10, ArgY4_11);
            succeeded = (Var_21 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_21;
            else
            {
              MR_Word Var_22;

              hlds__const_struct____Compare____const_struct_db_0_0(&Var_22, ArgX5_12, ArgY5_13);
              succeeded = (Var_22 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_22;
              else
              {
                MR_Word Var_23;

                parse_tree__prog_data_foreign____Compare____foreign_import_modules_0_0(&Var_23, ArgX6_14, ArgY6_15);
                succeeded = (Var_23 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_23;
                else
                {
                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
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
hlds__hlds_module____Unify____module_sub_info_0_0(
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
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word TypeInfo_24_24;
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

      succeeded = hlds__special_pred____Unify____special_pred_maps_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_20_20 = (MR_Word) (&hlds__hlds_module_scalar_common_2[12]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_21_21 = (MR_Word) (&hlds__hlds_module_scalar_common_2[13]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            succeeded = hlds__hlds_module____Unify____type_spec_info_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              succeeded = hlds__const_struct____Unify____const_struct_db_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                succeeded = parse_tree__prog_data_foreign____Unify____foreign_import_modules_0_0(ArgX6_13, ArgY6_14);
                if (succeeded)
                {
                  TypeInfo_24_24 = (MR_Word) (&hlds__hlds_module_scalar_common_1[7]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
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
hlds__hlds_module____Compare____module_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_33 == CastY_34);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word ArgX9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY9_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word ArgX10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgY10_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
      MR_Word Var_24;
      MR_Integer CastX_65 = (MR_Integer) (ArgX1_4);
      MR_Integer CastY_66 = (MR_Integer) (ArgY1_5);

      succeeded = (CastX_65 == CastY_66);
      if (succeeded)
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_24 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word ArgX1_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_4, (MR_Integer) 0))));
        MR_Word ArgY1_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_5, (MR_Integer) 0))));
        MR_Word ArgX2_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_4, (MR_Integer) 1))));
        MR_Word ArgY2_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_5, (MR_Integer) 1))));
        MR_Word ArgX3_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_4, (MR_Integer) 2))));
        MR_Word ArgY3_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_5, (MR_Integer) 2))));
        MR_Word ArgX4_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_4, (MR_Integer) 3))));
        MR_Word ArgY4_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_5, (MR_Integer) 3))));
        MR_Word ArgX5_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_4, (MR_Integer) 4))));
        MR_Word ArgY5_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_5, (MR_Integer) 4))));
        MR_Word ArgX6_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_4, (MR_Integer) 5))));
        MR_Word ArgY6_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_5, (MR_Integer) 5))));
        MR_Word ArgX7_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_4, (MR_Integer) 6))));
        MR_Word ArgY7_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_5, (MR_Integer) 6))));
        MR_Word Var_59;

        hlds__special_pred____Compare____special_pred_maps_0_0(&Var_59, ArgX1_45, ArgY1_46);
        succeeded = (Var_59 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_24 = Var_59;
          succeeded = (Var_24 == (MR_Integer) 0);
          succeeded = !(succeeded);
        }
        else
        {
          MR_Word Var_60;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[12]), &Var_60, ((MR_Box) (ArgX2_47)), ((MR_Box) (ArgY2_48)));
          succeeded = (Var_60 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
          {
            Var_24 = Var_60;
            succeeded = (Var_24 == (MR_Integer) 0);
            succeeded = !(succeeded);
          }
          else
          {
            MR_Word Var_61;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[13]), &Var_61, ((MR_Box) (ArgX3_49)), ((MR_Box) (ArgY3_50)));
            succeeded = (Var_61 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
            {
              Var_24 = Var_61;
              succeeded = (Var_24 == (MR_Integer) 0);
              succeeded = !(succeeded);
            }
            else
            {
              MR_Word Var_62;

              hlds__hlds_module____Compare____type_spec_info_0_0(&Var_62, ArgX4_51, ArgY4_52);
              succeeded = (Var_62 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
              {
                Var_24 = Var_62;
                succeeded = (Var_24 == (MR_Integer) 0);
                succeeded = !(succeeded);
              }
              else
              {
                MR_Word Var_63;

                hlds__const_struct____Compare____const_struct_db_0_0(&Var_63, ArgX5_53, ArgY5_54);
                succeeded = (Var_63 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Var_24 = Var_63;
                  succeeded = (Var_24 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                }
                else
                {
                  MR_Word Var_64;

                  parse_tree__prog_data_foreign____Compare____foreign_import_modules_0_0(&Var_64, ArgX6_55, ArgY6_56);
                  succeeded = (Var_64 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    Var_24 = Var_64;
                    succeeded = (Var_24 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                  }
                  else
                  {
                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[7]), &Var_24, ((MR_Box) (ArgX7_57)), ((MR_Box) (ArgY7_58)));
                    succeeded = (Var_24 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                  }
                }
              }
            }
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = Var_24;
      else
      {
        MR_Word Var_25;

        hlds__hlds_module____Compare____module_rare_info_0_0(&Var_25, ArgX2_6, ArgY2_7);
        succeeded = (Var_25 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_25;
        else
        {
          MR_Word Var_26;

          libs__globals____Compare____globals_0_0(&Var_26, ArgX3_8, ArgY3_9);
          succeeded = (Var_26 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_26;
          else
          {
            MR_Word Var_27;

            hlds__pred_table____Compare____predicate_table_0_0(&Var_27, ArgX4_10, ArgY4_11);
            succeeded = (Var_27 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_27;
            else
            {
              MR_Word Var_28;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_type_table_0), &Var_28, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_28 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_28;
              else
              {
                MR_Word Var_29;

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[5]), &Var_29, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_29 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_29;
                else
                {
                  MR_Word Var_30;

                  hlds__hlds_inst_mode____Compare____inst_table_0_0(&Var_30, ArgX7_16, ArgY7_17);
                  succeeded = (Var_30 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_30;
                  else
                  {
                    MR_Word Var_31;

                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_mode_table_0), &Var_31, ((MR_Box) (ArgX8_18)), ((MR_Box) (ArgY8_19)));
                    succeeded = (Var_31 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_31;
                    else
                    {
                      MR_Word Var_32;

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_table_0), &Var_32, ((MR_Box) (ArgX9_20)), ((MR_Box) (ArgY9_21)));
                      succeeded = (Var_32 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_32;
                      else
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[6]), HeadVar__1_1, ((MR_Box) (ArgX10_22)), ((MR_Box) (ArgY10_23)));
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

void MR_CALL 
hlds__hlds_module____Compare____type_spec_info_0_0(
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word Var_12;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[26]), &Var_12, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[19]), &Var_13, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[14]), &Var_14, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[15]), HeadVar__1_1, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
          }
        }
      }
    }
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____module_rare_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_117 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_118 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_117 == CastY_118);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_String ArgX3_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgY3_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word ArgX9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY9_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word ArgX10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgY10_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
      MR_Word ArgX11_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Word ArgY11_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))));
      MR_Word ArgX12_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Word ArgY12_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11))));
      MR_Word ArgX13_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
      MR_Word ArgY13_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 12))));
      MR_Word ArgX14_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))));
      MR_Word ArgY14_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 13))));
      MR_Integer ArgX15_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))));
      MR_Integer ArgY15_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14))));
      MR_Word ArgX16_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15))));
      MR_Word ArgY16_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 15))));
      MR_Word ArgX17_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16))));
      MR_Word ArgY17_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 16))));
      MR_Word ArgX18_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 17))));
      MR_Word ArgY18_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 17))));
      MR_Word ArgX19_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 18))));
      MR_Word ArgY19_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 18))));
      MR_Word ArgX20_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 19))));
      MR_Word ArgY20_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 19))));
      MR_Word ArgX21_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 20))));
      MR_Word ArgY21_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 20))));
      MR_Word ArgX22_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 21))));
      MR_Word ArgY22_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 21))));
      MR_Word ArgX23_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 22))));
      MR_Word ArgY23_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 22))));
      MR_Word ArgX24_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 23))));
      MR_Word ArgY24_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 23))));
      MR_Word ArgX25_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 24))));
      MR_Word ArgY25_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 24))));
      MR_Word ArgX26_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 25))));
      MR_Word ArgY26_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 25))));
      MR_Word ArgX27_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 26))));
      MR_Word ArgY27_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 26))));
      MR_Word ArgX28_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 27))));
      MR_Word ArgY28_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 27))));
      MR_Word ArgX29_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 28))));
      MR_Word ArgY29_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 28))));
      MR_Word ArgX30_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 29))));
      MR_Word ArgY30_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 29))));
      MR_Word ArgX31_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 30))));
      MR_Word ArgY31_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 30))));
      MR_Word ArgX32_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 31))));
      MR_Word ArgY32_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 31))));
      MR_Word ArgX33_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 32))));
      MR_Word ArgY33_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 32))));
      MR_Word ArgX34_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 33))));
      MR_Word ArgY34_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 33))));
      MR_Word ArgX35_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 34))));
      MR_Word ArgY35_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 34))));
      MR_Integer ArgX36_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 35))));
      MR_Integer ArgY36_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 35))));
      MR_Word ArgX37_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 36))));
      MR_Word ArgY37_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 36))));
      MR_Word ArgX38_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 37))));
      MR_Word ArgY38_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 37))));
      MR_Word Var_80;

      mdbcomp__sym_name____Compare____sym_name_0_0(&Var_80, ArgX1_4, ArgY1_5);
      succeeded = (Var_80 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_80;
      else
      {
        MR_Word Var_81;

        mercury__term____Compare____context_0_0(&Var_81, ArgX2_6, ArgY2_7);
        succeeded = (Var_81 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_81;
        else
        {
          MR_Word Var_82;

          mercury__private_builtin__builtin_compare_string_3_p_0(&Var_82, ArgX3_8, ArgY3_9);
          succeeded = (Var_82 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_82;
          else
          {
            MR_Word Var_83;

            parse_tree__module_qual____Compare____partial_qualifier_info_0_0(&Var_83, ArgX4_10, ArgY4_11);
            succeeded = (Var_83 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_83;
            else
            {
              MR_Word Var_84;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[8]), &Var_84, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_84 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_84;
              else
              {
                MR_Word Var_85;

                check_hlds__proc_requests____Compare____proc_requests_0_0(&Var_85, ArgX6_14, ArgY6_15);
                succeeded = (Var_85 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_85;
                else
                {
                  MR_Word Var_86;

                  hlds__hlds_promise____Compare____assertion_table_0_0(&Var_86, ArgX7_16, ArgY7_17);
                  succeeded = (Var_86 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_86;
                  else
                  {
                    MR_Word Var_87;

                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_exclusive_table_0), &Var_87, ((MR_Box) (ArgX8_18)), ((MR_Box) (ArgY8_19)));
                    succeeded = (Var_87 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_87;
                    else
                    {
                      MR_Word Var_88;
                      MR_Integer Var_157 = (MR_Integer) (ArgX9_20);
                      MR_Integer Var_158 = (MR_Integer) (ArgY9_21);

                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_88, Var_157, Var_158);
                      succeeded = (Var_88 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_88;
                      else
                      {
                        MR_Word Var_89;
                        MR_Integer Var_159 = (MR_Integer) (ArgX10_22);
                        MR_Integer Var_160 = (MR_Integer) (ArgY10_23);

                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_89, Var_159, Var_160);
                        succeeded = (Var_89 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_89;
                        else
                        {
                          MR_Word Var_90;

                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[13]), &Var_90, ((MR_Box) (ArgX11_24)), ((MR_Box) (ArgY11_25)));
                          succeeded = (Var_90 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_90;
                          else
                          {
                            MR_Word Var_91;

                            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[14]), &Var_91, ((MR_Box) (ArgX12_26)), ((MR_Box) (ArgY12_27)));
                            succeeded = (Var_91 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_91;
                            else
                            {
                              MR_Word Var_92;

                              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[15]), &Var_92, ((MR_Box) (ArgX13_28)), ((MR_Box) (ArgY13_29)));
                              succeeded = (Var_92 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_92;
                              else
                              {
                                MR_Word Var_93;

                                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[17]), &Var_93, ((MR_Box) (ArgX14_30)), ((MR_Box) (ArgY14_31)));
                                succeeded = (Var_93 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  *HeadVar__1_1 = Var_93;
                                else
                                {
                                  MR_Word Var_94;

                                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_94, ArgX15_32, ArgY15_33);
                                  succeeded = (Var_94 == (MR_Integer) 0);
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                    *HeadVar__1_1 = Var_94;
                                  else
                                  {
                                    MR_Word Var_95;

                                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[18]), &Var_95, ((MR_Box) (ArgX16_34)), ((MR_Box) (ArgY16_35)));
                                    succeeded = (Var_95 == (MR_Integer) 0);
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                      *HeadVar__1_1 = Var_95;
                                    else
                                    {
                                      MR_Word Var_96;

                                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[19]), &Var_96, ((MR_Box) (ArgX17_36)), ((MR_Box) (ArgY17_37)));
                                      succeeded = (Var_96 == (MR_Integer) 0);
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                        *HeadVar__1_1 = Var_96;
                                      else
                                      {
                                        MR_Word Var_97;

                                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[7]), &Var_97, ((MR_Box) (ArgX18_38)), ((MR_Box) (ArgY18_39)));
                                        succeeded = (Var_97 == (MR_Integer) 0);
                                        succeeded = !(succeeded);
                                        if (succeeded)
                                          *HeadVar__1_1 = Var_97;
                                        else
                                        {
                                          MR_Word Var_98;

                                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[8]), &Var_98, ((MR_Box) (ArgX19_40)), ((MR_Box) (ArgY19_41)));
                                          succeeded = (Var_98 == (MR_Integer) 0);
                                          succeeded = !(succeeded);
                                          if (succeeded)
                                            *HeadVar__1_1 = Var_98;
                                          else
                                          {
                                            MR_Word Var_99;

                                            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[9]), &Var_99, ((MR_Box) (ArgX20_42)), ((MR_Box) (ArgY20_43)));
                                            succeeded = (Var_99 == (MR_Integer) 0);
                                            succeeded = !(succeeded);
                                            if (succeeded)
                                              *HeadVar__1_1 = Var_99;
                                            else
                                            {
                                              MR_Word Var_100;

                                              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[9]), &Var_100, ((MR_Box) (ArgX21_44)), ((MR_Box) (ArgY21_45)));
                                              succeeded = (Var_100 == (MR_Integer) 0);
                                              succeeded = !(succeeded);
                                              if (succeeded)
                                                *HeadVar__1_1 = Var_100;
                                              else
                                              {
                                                MR_Word Var_101;

                                                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[0]), &Var_101, ((MR_Box) (ArgX22_46)), ((MR_Box) (ArgY22_47)));
                                                succeeded = (Var_101 == (MR_Integer) 0);
                                                succeeded = !(succeeded);
                                                if (succeeded)
                                                  *HeadVar__1_1 = Var_101;
                                                else
                                                {
                                                  MR_Word Var_102;

                                                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[20]), &Var_102, ((MR_Box) (ArgX23_48)), ((MR_Box) (ArgY23_49)));
                                                  succeeded = (Var_102 == (MR_Integer) 0);
                                                  succeeded = !(succeeded);
                                                  if (succeeded)
                                                    *HeadVar__1_1 = Var_102;
                                                  else
                                                  {
                                                    MR_Word Var_103;

                                                    parse_tree__prog_data_used_modules____Compare____used_modules_0_0(&Var_103, ArgX24_50, ArgY24_51);
                                                    succeeded = (Var_103 == (MR_Integer) 0);
                                                    succeeded = !(succeeded);
                                                    if (succeeded)
                                                      *HeadVar__1_1 = Var_103;
                                                    else
                                                    {
                                                      MR_Word Var_104;

                                                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[21]), &Var_104, ((MR_Box) (ArgX25_52)), ((MR_Box) (ArgY25_53)));
                                                      succeeded = (Var_104 == (MR_Integer) 0);
                                                      succeeded = !(succeeded);
                                                      if (succeeded)
                                                        *HeadVar__1_1 = Var_104;
                                                      else
                                                      {
                                                        MR_Word Var_105;

                                                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[22]), &Var_105, ((MR_Box) (ArgX26_54)), ((MR_Box) (ArgY26_55)));
                                                        succeeded = (Var_105 == (MR_Integer) 0);
                                                        succeeded = !(succeeded);
                                                        if (succeeded)
                                                          *HeadVar__1_1 = Var_105;
                                                        else
                                                        {
                                                          MR_Word Var_106;

                                                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[23]), &Var_106, ((MR_Box) (ArgX27_56)), ((MR_Box) (ArgY27_57)));
                                                          succeeded = (Var_106 == (MR_Integer) 0);
                                                          succeeded = !(succeeded);
                                                          if (succeeded)
                                                            *HeadVar__1_1 = Var_106;
                                                          else
                                                          {
                                                            MR_Word Var_107;

                                                            analysis____Compare____analysis_info_0_0(&Var_107, ArgX28_58, ArgY28_59);
                                                            succeeded = (Var_107 == (MR_Integer) 0);
                                                            succeeded = !(succeeded);
                                                            if (succeeded)
                                                              *HeadVar__1_1 = Var_107;
                                                            else
                                                            {
                                                              MR_Word Var_108;

                                                              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[24]), &Var_108, ((MR_Box) (ArgX29_60)), ((MR_Box) (ArgY29_61)));
                                                              succeeded = (Var_108 == (MR_Integer) 0);
                                                              succeeded = !(succeeded);
                                                              if (succeeded)
                                                                *HeadVar__1_1 = Var_108;
                                                              else
                                                              {
                                                                MR_Word Var_109;

                                                                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[24]), &Var_109, ((MR_Box) (ArgX30_62)), ((MR_Box) (ArgY30_63)));
                                                                succeeded = (Var_109 == (MR_Integer) 0);
                                                                succeeded = !(succeeded);
                                                                if (succeeded)
                                                                  *HeadVar__1_1 = Var_109;
                                                                else
                                                                {
                                                                  MR_Word Var_110;

                                                                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[19]), &Var_110, ((MR_Box) (ArgX31_64)), ((MR_Box) (ArgY31_65)));
                                                                  succeeded = (Var_110 == (MR_Integer) 0);
                                                                  succeeded = !(succeeded);
                                                                  if (succeeded)
                                                                    *HeadVar__1_1 = Var_110;
                                                                  else
                                                                  {
                                                                    MR_Word Var_111;

                                                                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[25]), &Var_111, ((MR_Box) (ArgX32_66)), ((MR_Box) (ArgY32_67)));
                                                                    succeeded = (Var_111 == (MR_Integer) 0);
                                                                    succeeded = !(succeeded);
                                                                    if (succeeded)
                                                                      *HeadVar__1_1 = Var_111;
                                                                    else
                                                                    {
                                                                      MR_Word Var_112;

                                                                      parse_tree__prog_data_event____Compare____event_set_0_0(&Var_112, ArgX33_68, ArgY33_69);
                                                                      succeeded = (Var_112 == (MR_Integer) 0);
                                                                      succeeded = !(succeeded);
                                                                      if (succeeded)
                                                                        *HeadVar__1_1 = Var_112;
                                                                      else
                                                                      {
                                                                        MR_Word Var_113;

                                                                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[11]), &Var_113, ((MR_Box) (ArgX34_70)), ((MR_Box) (ArgY34_71)));
                                                                        succeeded = (Var_113 == (MR_Integer) 0);
                                                                        succeeded = !(succeeded);
                                                                        if (succeeded)
                                                                          *HeadVar__1_1 = Var_113;
                                                                        else
                                                                        {
                                                                          MR_Word Var_114;

                                                                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[26]), &Var_114, ((MR_Box) (ArgX35_72)), ((MR_Box) (ArgY35_73)));
                                                                          succeeded = (Var_114 == (MR_Integer) 0);
                                                                          succeeded = !(succeeded);
                                                                          if (succeeded)
                                                                            *HeadVar__1_1 = Var_114;
                                                                          else
                                                                          {
                                                                            MR_Word Var_115;

                                                                            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_115, ArgX36_74, ArgY36_75);
                                                                            succeeded = (Var_115 == (MR_Integer) 0);
                                                                            succeeded = !(succeeded);
                                                                            if (succeeded)
                                                                              *HeadVar__1_1 = Var_115;
                                                                            else
                                                                            {
                                                                              MR_Word Var_116;

                                                                              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[15]), &Var_116, ((MR_Box) (ArgX37_76)), ((MR_Box) (ArgY37_77)));
                                                                              succeeded = (Var_116 == (MR_Integer) 0);
                                                                              succeeded = !(succeeded);
                                                                              if (succeeded)
                                                                                *HeadVar__1_1 = Var_116;
                                                                              else
                                                                                hlds__hlds_module____Compare____type_repn_decision_data_0_0(HeadVar__1_1, ArgX38_78, ArgY38_79);
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
    }
  }
}

void MR_CALL 
hlds__hlds_module____Compare____type_repn_decision_data_0_0(
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word Var_12;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[27]), &Var_12, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[3]), &Var_13, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[28]), &Var_14, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[29]), HeadVar__1_1, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____module_info_0_0(
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
    {
      MR_Word TypeCtorInfo_27_27;
      MR_Word TypeInfo_28_28;
      MR_Word TypeCtorInfo_30_30;
      MR_Word TypeCtorInfo_31_31;
      MR_Word TypeInfo_32_32;
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
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Integer CastX_47 = (MR_Integer) (ArgX1_3);
      MR_Integer CastY_48 = (MR_Integer) (ArgY1_4);

      succeeded = (CastX_47 == CastY_48);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word TypeInfo_20_50;
        MR_Word TypeInfo_21_51;
        MR_Word TypeInfo_24_54;
        MR_Word ArgX1_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 0))));
        MR_Word ArgY1_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 0))));
        MR_Word ArgX2_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 1))));
        MR_Word ArgY2_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 1))));
        MR_Word ArgX3_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 2))));
        MR_Word ArgY3_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 2))));
        MR_Word ArgX4_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 3))));
        MR_Word ArgY4_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 3))));
        MR_Word ArgX5_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 4))));
        MR_Word ArgY5_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 4))));
        MR_Word ArgX6_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 5))));
        MR_Word ArgY6_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 5))));
        MR_Word ArgX7_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 6))));
        MR_Word ArgY7_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 6))));

        succeeded = hlds__special_pred____Unify____special_pred_maps_0_0(ArgX1_33, ArgY1_34);
        if (succeeded)
        {
          TypeInfo_20_50 = (MR_Word) (&hlds__hlds_module_scalar_common_2[12]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_50, ((MR_Box) (ArgX2_35)), ((MR_Box) (ArgY2_36)));
          if (succeeded)
          {
            TypeInfo_21_51 = (MR_Word) (&hlds__hlds_module_scalar_common_2[13]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_51, ((MR_Box) (ArgX3_37)), ((MR_Box) (ArgY3_38)));
            if (succeeded)
            {
              succeeded = hlds__hlds_module____Unify____type_spec_info_0_0(ArgX4_39, ArgY4_40);
              if (succeeded)
              {
                succeeded = hlds__const_struct____Unify____const_struct_db_0_0(ArgX5_41, ArgY5_42);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data_foreign____Unify____foreign_import_modules_0_0(ArgX6_43, ArgY6_44);
                  if (succeeded)
                  {
                    TypeInfo_24_54 = (MR_Word) (&hlds__hlds_module_scalar_common_1[7]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_54, ((MR_Box) (ArgX7_45)), ((MR_Box) (ArgY7_46)));
                  }
                }
              }
            }
          }
        }
      }
      if (succeeded)
      {
        succeeded = hlds__hlds_module____Unify____module_rare_info_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = libs__globals____Unify____globals_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = hlds__pred_table____Unify____predicate_table_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              TypeCtorInfo_27_27 = (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_type_table_0);
              succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_27_27, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_28_28 = (MR_Word) (&hlds__hlds_module_scalar_common_2[5]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  succeeded = hlds__hlds_inst_mode____Unify____inst_table_0_0(ArgX7_15, ArgY7_16);
                  if (succeeded)
                  {
                    TypeCtorInfo_30_30 = (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_mode_table_0);
                    succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_30_30, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeCtorInfo_31_31 = (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_table_0);
                      succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_31_31, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                      if (succeeded)
                      {
                        TypeInfo_32_32 = (MR_Word) (&hlds__hlds_module_scalar_common_2[6]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
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
hlds__hlds_module____Unify____type_spec_info_0_0(
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[26]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&hlds__hlds_module_scalar_common_1[19]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&hlds__hlds_module_scalar_common_2[14]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_16_16 = (MR_Word) (&hlds__hlds_module_scalar_common_2[15]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____module_rare_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_79 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_80 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_79 == CastY_80);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_84_84;
      MR_Word TypeCtorInfo_87_87;
      MR_Word TypeInfo_88_88;
      MR_Word TypeInfo_89_89;
      MR_Word TypeInfo_90_90;
      MR_Word TypeInfo_91_91;
      MR_Word TypeInfo_92_92;
      MR_Word TypeInfo_93_93;
      MR_Word TypeInfo_94_94;
      MR_Word TypeInfo_95_95;
      MR_Word TypeInfo_96_96;
      MR_Word TypeInfo_97_97;
      MR_Word TypeInfo_98_98;
      MR_Word TypeInfo_99_99;
      MR_Word TypeInfo_101_101;
      MR_Word TypeInfo_102_102;
      MR_Word TypeInfo_103_103;
      MR_Word TypeInfo_105_105;
      MR_Word TypeInfo_106_106;
      MR_Word TypeInfo_107_107;
      MR_Word TypeInfo_108_108;
      MR_Word TypeInfo_110_110;
      MR_Word TypeInfo_111_111;
      MR_Word TypeInfo_112_112;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
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
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))));
      MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11))));
      MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 12))));
      MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
      MR_Word ArgX14_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 13))));
      MR_Word ArgY14_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))));
      MR_Integer ArgX15_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14))));
      MR_Integer ArgY15_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))));
      MR_Word ArgX16_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 15))));
      MR_Word ArgY16_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 15))));
      MR_Word ArgX17_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 16))));
      MR_Word ArgY17_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 16))));
      MR_Word ArgX18_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 17))));
      MR_Word ArgY18_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 17))));
      MR_Word ArgX19_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 18))));
      MR_Word ArgY19_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 18))));
      MR_Word ArgX20_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 19))));
      MR_Word ArgY20_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 19))));
      MR_Word ArgX21_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 20))));
      MR_Word ArgY21_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 20))));
      MR_Word ArgX22_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 21))));
      MR_Word ArgY22_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 21))));
      MR_Word ArgX23_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 22))));
      MR_Word ArgY23_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 22))));
      MR_Word ArgX24_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 23))));
      MR_Word ArgY24_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 23))));
      MR_Word ArgX25_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 24))));
      MR_Word ArgY25_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 24))));
      MR_Word ArgX26_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 25))));
      MR_Word ArgY26_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 25))));
      MR_Word ArgX27_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 26))));
      MR_Word ArgY27_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 26))));
      MR_Word ArgX28_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 27))));
      MR_Word ArgY28_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 27))));
      MR_Word ArgX29_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 28))));
      MR_Word ArgY29_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 28))));
      MR_Word ArgX30_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 29))));
      MR_Word ArgY30_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 29))));
      MR_Word ArgX31_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 30))));
      MR_Word ArgY31_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 30))));
      MR_Word ArgX32_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 31))));
      MR_Word ArgY32_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 31))));
      MR_Word ArgX33_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 32))));
      MR_Word ArgY33_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 32))));
      MR_Word ArgX34_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 33))));
      MR_Word ArgY34_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 33))));
      MR_Word ArgX35_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 34))));
      MR_Word ArgY35_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 34))));
      MR_Integer ArgX36_73 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 35))));
      MR_Integer ArgY36_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 35))));
      MR_Word ArgX37_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 36))));
      MR_Word ArgY37_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 36))));
      MR_Word ArgX38_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 37))));
      MR_Word ArgY38_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 37))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = mercury__term____Unify____context_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
          if (succeeded)
          {
            succeeded = parse_tree__module_qual____Unify____partial_qualifier_info_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              TypeInfo_84_84 = (MR_Word) (&hlds__hlds_module_scalar_common_1[8]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_84_84, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                succeeded = check_hlds__proc_requests____Unify____proc_requests_0_0(ArgX6_13, ArgY6_14);
                if (succeeded)
                {
                  succeeded = hlds__hlds_promise____Unify____assertion_table_0_0(ArgX7_15, ArgY7_16);
                  if (succeeded)
                  {
                    TypeCtorInfo_87_87 = (MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_exclusive_table_0);
                    succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_87_87, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                      {
                        succeeded = (ArgX10_21 == ArgY10_22);
                        if (succeeded)
                        {
                          TypeInfo_88_88 = (MR_Word) (&hlds__hlds_module_scalar_common_1[13]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_88_88, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                          if (succeeded)
                          {
                            TypeInfo_89_89 = (MR_Word) (&hlds__hlds_module_scalar_common_1[14]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_89_89, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                            if (succeeded)
                            {
                              TypeInfo_90_90 = (MR_Word) (&hlds__hlds_module_scalar_common_1[15]);
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_90_90, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
                              if (succeeded)
                              {
                                TypeInfo_91_91 = (MR_Word) (&hlds__hlds_module_scalar_common_1[17]);
                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_91_91, ((MR_Box) (ArgX14_29)), ((MR_Box) (ArgY14_30)));
                                if (succeeded)
                                {
                                  succeeded = (ArgX15_31 == ArgY15_32);
                                  if (succeeded)
                                  {
                                    TypeInfo_92_92 = (MR_Word) (&hlds__hlds_module_scalar_common_1[18]);
                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_92_92, ((MR_Box) (ArgX16_33)), ((MR_Box) (ArgY16_34)));
                                    if (succeeded)
                                    {
                                      TypeInfo_93_93 = (MR_Word) (&hlds__hlds_module_scalar_common_1[19]);
                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_93_93, ((MR_Box) (ArgX17_35)), ((MR_Box) (ArgY17_36)));
                                      if (succeeded)
                                      {
                                        TypeInfo_94_94 = (MR_Word) (&hlds__hlds_module_scalar_common_2[7]);
                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_94_94, ((MR_Box) (ArgX18_37)), ((MR_Box) (ArgY18_38)));
                                        if (succeeded)
                                        {
                                          TypeInfo_95_95 = (MR_Word) (&hlds__hlds_module_scalar_common_2[8]);
                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_95_95, ((MR_Box) (ArgX19_39)), ((MR_Box) (ArgY19_40)));
                                          if (succeeded)
                                          {
                                            TypeInfo_96_96 = (MR_Word) (&hlds__hlds_module_scalar_common_2[9]);
                                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_96_96, ((MR_Box) (ArgX20_41)), ((MR_Box) (ArgY20_42)));
                                            if (succeeded)
                                            {
                                              TypeInfo_97_97 = (MR_Word) (&hlds__hlds_module_scalar_common_2[9]);
                                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_97_97, ((MR_Box) (ArgX21_43)), ((MR_Box) (ArgY21_44)));
                                              if (succeeded)
                                              {
                                                TypeInfo_98_98 = (MR_Word) (&hlds__hlds_module_scalar_common_2[0]);
                                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_98_98, ((MR_Box) (ArgX22_45)), ((MR_Box) (ArgY22_46)));
                                                if (succeeded)
                                                {
                                                  TypeInfo_99_99 = (MR_Word) (&hlds__hlds_module_scalar_common_1[20]);
                                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_99_99, ((MR_Box) (ArgX23_47)), ((MR_Box) (ArgY23_48)));
                                                  if (succeeded)
                                                  {
                                                    succeeded = parse_tree__prog_data_used_modules____Unify____used_modules_0_0(ArgX24_49, ArgY24_50);
                                                    if (succeeded)
                                                    {
                                                      TypeInfo_101_101 = (MR_Word) (&hlds__hlds_module_scalar_common_1[21]);
                                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_101_101, ((MR_Box) (ArgX25_51)), ((MR_Box) (ArgY25_52)));
                                                      if (succeeded)
                                                      {
                                                        TypeInfo_102_102 = (MR_Word) (&hlds__hlds_module_scalar_common_1[22]);
                                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_102_102, ((MR_Box) (ArgX26_53)), ((MR_Box) (ArgY26_54)));
                                                        if (succeeded)
                                                        {
                                                          TypeInfo_103_103 = (MR_Word) (&hlds__hlds_module_scalar_common_1[23]);
                                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_103_103, ((MR_Box) (ArgX27_55)), ((MR_Box) (ArgY27_56)));
                                                          if (succeeded)
                                                          {
                                                            succeeded = analysis____Unify____analysis_info_0_0(ArgX28_57, ArgY28_58);
                                                            if (succeeded)
                                                            {
                                                              TypeInfo_105_105 = (MR_Word) (&hlds__hlds_module_scalar_common_1[24]);
                                                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_105_105, ((MR_Box) (ArgX29_59)), ((MR_Box) (ArgY29_60)));
                                                              if (succeeded)
                                                              {
                                                                TypeInfo_106_106 = (MR_Word) (&hlds__hlds_module_scalar_common_1[24]);
                                                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_106_106, ((MR_Box) (ArgX30_61)), ((MR_Box) (ArgY30_62)));
                                                                if (succeeded)
                                                                {
                                                                  TypeInfo_107_107 = (MR_Word) (&hlds__hlds_module_scalar_common_1[19]);
                                                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_107_107, ((MR_Box) (ArgX31_63)), ((MR_Box) (ArgY31_64)));
                                                                  if (succeeded)
                                                                  {
                                                                    TypeInfo_108_108 = (MR_Word) (&hlds__hlds_module_scalar_common_1[25]);
                                                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_108_108, ((MR_Box) (ArgX32_65)), ((MR_Box) (ArgY32_66)));
                                                                    if (succeeded)
                                                                    {
                                                                      succeeded = parse_tree__prog_data_event____Unify____event_set_0_0(ArgX33_67, ArgY33_68);
                                                                      if (succeeded)
                                                                      {
                                                                        TypeInfo_110_110 = (MR_Word) (&hlds__hlds_module_scalar_common_2[11]);
                                                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_110_110, ((MR_Box) (ArgX34_69)), ((MR_Box) (ArgY34_70)));
                                                                        if (succeeded)
                                                                        {
                                                                          TypeInfo_111_111 = (MR_Word) (&hlds__hlds_module_scalar_common_1[26]);
                                                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_111_111, ((MR_Box) (ArgX35_71)), ((MR_Box) (ArgY35_72)));
                                                                          if (succeeded)
                                                                          {
                                                                            succeeded = (ArgX36_73 == ArgY36_74);
                                                                            if (succeeded)
                                                                            {
                                                                              TypeInfo_112_112 = (MR_Word) (&hlds__hlds_module_scalar_common_1[15]);
                                                                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_112_112, ((MR_Box) (ArgX37_75)), ((MR_Box) (ArgY37_76)));
                                                                              if (succeeded)
                                                                                succeeded = hlds__hlds_module____Unify____type_repn_decision_data_0_0(ArgX38_77, ArgY38_78);
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
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____type_repn_decision_data_0_0(
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[27]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&hlds__hlds_module_scalar_common_2[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&hlds__hlds_module_scalar_common_1[28]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_16_16 = (MR_Word) (&hlds__hlds_module_scalar_common_1[29]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_module____Compare____item_foreign_export_enum_info_0_0(
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Integer ArgX4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgY4_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word Var_12;

      parse_tree__prog_item____Compare____pragma_info_foreign_export_enum_0_0(&Var_12, ArgX1_4, ArgY1_5);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        hlds__status____Compare____item_mercury_status_0_0(&Var_13, ArgX2_6, ArgY2_7);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__term____Compare____context_0_0(&Var_14, ArgX3_8, ArgY3_9);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
            mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX4_10, ArgY4_11);
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____item_foreign_export_enum_info_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = parse_tree__prog_item____Unify____pragma_info_foreign_export_enum_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__status____Unify____item_mercury_status_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = mercury__term____Unify____context_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
            succeeded = (ArgX4_9 == ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_module____Compare____item_foreign_enum_info_0_0(
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Integer ArgX4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgY4_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word Var_12;

      parse_tree__prog_item____Compare____pragma_info_foreign_enum_0_0(&Var_12, ArgX1_4, ArgY1_5);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        hlds__status____Compare____item_mercury_status_0_0(&Var_13, ArgX2_6, ArgY2_7);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__term____Compare____context_0_0(&Var_14, ArgX3_8, ArgY3_9);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
            mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX4_10, ArgY4_11);
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____item_foreign_enum_info_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = parse_tree__prog_item____Unify____pragma_info_foreign_enum_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__status____Unify____item_mercury_status_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = mercury__term____Unify____context_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
            succeeded = (ArgX4_9 == ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_module____Compare____exported_enum_info_0_0(
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word Var_14;

      parse_tree__prog_data____Compare____type_ctor_0_0(&Var_14, ArgX1_4, ArgY1_5);
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[12]), &Var_15, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;
          MR_Integer Var_25 = (MR_Integer) (ArgX3_8);
          MR_Integer Var_26 = (MR_Integer) (ArgY3_9);

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_16, Var_25, Var_26);
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[4]), &Var_17, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
              mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX5_12, ArgY5_13);
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____exported_enum_info_0_0(
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
      MR_Word TypeInfo_17_17;
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

      succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) (&hlds__hlds_module_scalar_common_1[12]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            TypeInfo_17_17 = (MR_Word) (&hlds__hlds_module_scalar_common_2[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
              succeeded = mercury__term____Unify____context_0_0(ArgX5_11, ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_module____Compare____direct_arg_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____direct_arg_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_module____Compare____complexity_proc_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____complexity_proc_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_module____Compare____complexity_proc_info_0_0(
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
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_String ArgX2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word Var_10;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_10, ArgX1_4, ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__private_builtin__builtin_compare_string_3_p_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[11]), HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____complexity_proc_info_0_0(
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
      MR_Word TypeInfo_11_11;
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
        if (succeeded)
        {
          TypeInfo_11_11 = (MR_Word) (&hlds__hlds_module_scalar_common_1[11]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_module____Compare____complexity_arg_kind_0_0(
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

MR_bool MR_CALL 
hlds__hlds_module____Unify____complexity_arg_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_module____Compare____complexity_arg_info_0_0(
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[10]), &Var_8, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        MR_Integer Var_13 = (MR_Integer) (ArgX2_6);
        MR_Integer Var_14 = (MR_Integer) (ArgY2_7);

        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_13, Var_14);
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____complexity_arg_info_0_0(
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[10]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_module____Compare____avail_module_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____avail_module_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_module____Compare____avail_module_entry_0_0(
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
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Var_10;
      MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_10, Var_17, Var_18);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;
        MR_Integer Var_19 = (MR_Integer) (ArgX2_6);
        MR_Integer Var_20 = (MR_Integer) (ArgY2_7);

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_11, Var_19, Var_20);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____avail_module_entry_0_0(
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
      MR_Word TypeInfo_11_11;
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          TypeInfo_11_11 = (MR_Word) (&hlds__hlds_module_scalar_common_1[9]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__hlds_module____Compare____avail_module_0_0(
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
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Var_10;
      MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_10, Var_17, Var_18);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;
        MR_Integer Var_19 = (MR_Integer) (ArgX2_6);
        MR_Integer Var_20 = (MR_Integer) (ArgY2_7);

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_11, Var_19, Var_20);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX3_8, ArgY3_9);
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____avail_module_0_0(
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
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = mercury__term____Unify____context_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module__get_unique_pred_proc_id_for_symname_and_arity_3_p_0(
  MR_Word MI_4,
  MR_Word HeadVar__2_2,
  MR_Word * PredProcId_7)
{
  {
    MR_bool succeeded;
    MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word PredTable_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_4, (MR_Integer) 3))));
    MR_Word PredIds_9;
    MR_Word PredId_10;
    MR_Word Var_13;

    hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(PredTable_8, (MR_Integer) 1, SymName_5, Arity_6, &PredIds_9);
    succeeded = ((MR_tag((MR_Word) PredIds_9)) == (MR_Integer) 1);
    if (succeeded)
    {
      PredId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_9, (MR_Integer) 0))));
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PredIds_9, (MR_Integer) 1))));
      succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Integer ProcId_11;

      hlds__pred_table__get_proc_id_3_p_0(MI_4, PredId_10, &ProcId_11);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *PredProcId_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredId_10));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcId_11));
      }
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_module", (MR_String) "predicate \140hlds.hlds_module.get_unique_pred_proc_id_for_symname_and_arity\'/3", (MR_String) "lookup failed");
        return;
      }
    }
  }
}

static void MR_CALL 
hlds__hlds_module__add_implicit_avail_module_4_p_0(
  MR_Word ImportOrUse_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_AvailModuleMap_0_9,
  MR_Word * STATE_VARIABLE_AvailModuleMap_10)
{
  {
    MR_Word Entry_8;

    {
      Entry_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Entry_8, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << (MR_Integer) 1)) | (MR_Unsigned) (ImportOrUse_5)));
      MR_hl_field(MR_mktag(0), Entry_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), ((MR_Box) (ModuleName_6)), ((MR_Box) (Entry_8)), STATE_VARIABLE_AvailModuleMap_0_9, STATE_VARIABLE_AvailModuleMap_10);
  }
}

static void MR_CALL 
hlds__hlds_module__module_info_user_final_pred_procs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_PredProcId_7;

    hlds__hlds_module__get_unique_pred_proc_id_for_symname_and_arity_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_PredProcId_7);
    *wrapper_arg_2 = ((MR_Box) (conv0_PredProcId_7));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_user_final_pred_procs_2_p_0(
  MR_Word MI_3,
  MR_Word * PredProcIds_4)
{
  {
    MR_Word FinalPredCNames_5;
    MR_Word SymNameAndArities_6;
    MR_Word Var_7;
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    FinalPredCNames_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 29))));
    SymNameAndArities_6 = mercury__assoc_list__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FinalPredCNames_5);
    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&hlds__hlds_module_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (hlds__hlds_module__module_info_user_final_pred_procs_2_p_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (MI_3));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_7, SymNameAndArities_6, PredProcIds_4);
  }
}

static void MR_CALL 
hlds__hlds_module__module_info_user_init_pred_procs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_PredProcId_7;

    hlds__hlds_module__get_unique_pred_proc_id_for_symname_and_arity_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_PredProcId_7);
    *wrapper_arg_2 = ((MR_Box) (conv0_PredProcId_7));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_user_init_pred_procs_2_p_0(
  MR_Word MI_3,
  MR_Word * PredProcIds_4)
{
  {
    MR_Word InitPredCNames_5;
    MR_Word SymNameAndArities_6;
    MR_Word Var_7;
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    InitPredCNames_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 28))));
    SymNameAndArities_6 = mercury__assoc_list__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitPredCNames_5);
    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&hlds__hlds_module_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (hlds__hlds_module__module_info_user_init_pred_procs_2_p_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (MI_3));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_7, SymNameAndArities_6, PredProcIds_4);
  }
}

void MR_CALL 
hlds__hlds_module__module_info_user_final_pred_c_names_2_p_0(
  MR_Word MI_3,
  MR_Word * CNames_4)
{
  {
    MR_Word FinalPredCNames_5;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    FinalPredCNames_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 29))));
    *CNames_4 = mercury__assoc_list__values_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FinalPredCNames_5);
  }
}

void MR_CALL 
hlds__hlds_module__module_info_user_init_pred_c_names_2_p_0(
  MR_Word MI_3,
  MR_Word * CNames_4)
{
  {
    MR_Word InitPredCNames_5;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    InitPredCNames_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 28))));
    *CNames_4 = mercury__assoc_list__values_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitPredCNames_5);
  }
}

void MR_CALL 
hlds__hlds_module__module_info_new_user_final_pred_5_p_0(
  MR_Word SymName_6,
  MR_Integer Arity_7,
  MR_String * CName_8,
  MR_Word STATE_VARIABLE_MI_0_16,
  MR_Word * STATE_VARIABLE_MI_17)
{
  {
    MR_bool succeeded;
    MR_Word FinalPredCNames0_10;
    MR_Integer UserFinalPredNo_11;
    MR_Word ModuleSymName0_12;
    MR_Word ModuleSymName_13;
    MR_String ModuleName_14;
    MR_Word FinalPredCNames_15;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_String Var_31;
    MR_String Var_39;
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_16, (MR_Integer) 1))));

    FinalPredCNames0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 29))));
    UserFinalPredNo_11 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_module_scalar_common_2[1]), FinalPredCNames0_10);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_MI_0_16, &ModuleSymName0_12);
    succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleSymName0_12);
    if (succeeded)
    {
      ModuleSymName_13 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", ModuleSymName0_12);
    }
    else
      ModuleSymName_13 = ModuleSymName0_12;
    ModuleName_14 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_13);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_5[0]), UserFinalPredNo_11, &Var_31);
    Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "__user_final_pred_", Var_31);
    *CName_8 = mercury__string__f_43_43_2_f_0(ModuleName_14, Var_39);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (SymName_6));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (Arity_7));
    }
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (*CName_8));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    FinalPredCNames_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_module_scalar_common_2[1]), FinalPredCNames0_10, Var_25);
    hlds__hlds_module__module_info_set_user_final_pred_c_names_3_p_0(FinalPredCNames_15, STATE_VARIABLE_MI_0_16, STATE_VARIABLE_MI_17);
  }
}

static void MR_CALL 
hlds__hlds_module__module_info_set_user_final_pred_c_names_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_new_user_init_pred_5_p_0(
  MR_Word SymName_6,
  MR_Integer Arity_7,
  MR_String * CName_8,
  MR_Word STATE_VARIABLE_MI_0_16,
  MR_Word * STATE_VARIABLE_MI_17)
{
  {
    MR_bool succeeded;
    MR_Word InitPredCNames0_10;
    MR_Integer UserInitPredNo_11;
    MR_Word ModuleSymName0_12;
    MR_Word ModuleSymName_13;
    MR_String ModuleName_14;
    MR_Word InitPredCNames_15;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_String Var_31;
    MR_String Var_39;
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_16, (MR_Integer) 1))));

    InitPredCNames0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 28))));
    UserInitPredNo_11 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_module_scalar_common_2[1]), InitPredCNames0_10);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_MI_0_16, &ModuleSymName0_12);
    succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleSymName0_12);
    if (succeeded)
    {
      ModuleSymName_13 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", ModuleSymName0_12);
    }
    else
      ModuleSymName_13 = ModuleSymName0_12;
    ModuleName_14 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_13);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_5[0]), UserInitPredNo_11, &Var_31);
    Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "__user_init_pred_", Var_31);
    *CName_8 = mercury__string__f_43_43_2_f_0(ModuleName_14, Var_39);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (SymName_6));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (Arity_7));
    }
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (*CName_8));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    InitPredCNames_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_module_scalar_common_2[1]), InitPredCNames0_10, Var_25);
    hlds__hlds_module__module_info_set_user_init_pred_c_names_3_p_0(InitPredCNames_15, STATE_VARIABLE_MI_0_16, STATE_VARIABLE_MI_17);
  }
}

static void MR_CALL 
hlds__hlds_module__module_info_set_user_init_pred_c_names_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_add_parent_to_used_modules_3_p_0(
  MR_Word ModuleSpecifier_4,
  MR_Word STATE_VARIABLE_MI_0_8,
  MR_Word * STATE_VARIABLE_MI_9)
{
  {
    MR_Word UsedModules0_6;
    MR_Word UsedModules_7;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 1))));

    UsedModules0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 23))));
    parse_tree__prog_data_used_modules__record_module_and_ancestors_as_used_4_p_0((MR_Integer) 0, ModuleSpecifier_4, UsedModules0_6, &UsedModules_7);
    hlds__hlds_module__module_info_set_used_modules_3_p_0(UsedModules_7, STATE_VARIABLE_MI_0_8, STATE_VARIABLE_MI_9);
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_all_deps_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * AllImports_4)
{
  {
    MR_Word ModuleName_5;
    MR_Word Parents_6;
    MR_Word AvailModuleMap_7;
    MR_Word DirectImports_8;
    MR_Word IndirectImports_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleInfo_3, (MR_Integer) 1))));

    ModuleName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0))));
    Parents_6 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_5);
    hlds__hlds_module__module_info_get_avail_module_map_2_p_0(ModuleInfo_3, &AvailModuleMap_7);
    mercury__map__keys_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), AvailModuleMap_7, &DirectImports_8);
    hlds__hlds_module__module_info_get_indirectly_imported_module_names_2_p_0(ModuleInfo_3, &IndirectImports_9);
    Var_12 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DirectImports_8);
    Var_14 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Parents_6);
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_13));
    }
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (IndirectImports_9));
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (Var_11));
    }
    *AllImports_4 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_10);
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_visible_modules_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * STATE_VARIABLE_VisibleModules_8)
{
  {
    MR_Word ThisModule_5;
    MR_Word AvailModuleMap_6;
    MR_Word AvailModules_7;
    MR_Word STATE_VARIABLE_VisibleModules_9_9;
    MR_Word STATE_VARIABLE_VisibleModules_10_10;
    MR_Word Var_11;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleInfo_3, (MR_Integer) 1))));

    ThisModule_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
    hlds__hlds_module__module_info_get_avail_module_map_2_p_0(ModuleInfo_3, &AvailModuleMap_6);
    mercury__map__keys_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), AvailModuleMap_6, &AvailModules_7);
    mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AvailModules_7, &STATE_VARIABLE_VisibleModules_9_9);
    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ThisModule_5)), STATE_VARIABLE_VisibleModules_9_9, &STATE_VARIABLE_VisibleModules_10_10);
    Var_11 = mdbcomp__sym_name__get_ancestors_1_f_0(ThisModule_5);
    mercury__set__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_11, STATE_VARIABLE_VisibleModules_10_10, STATE_VARIABLE_VisibleModules_8);
  }
}

void MR_CALL 
hlds__hlds_module__module_add_indirectly_imported_module_name_3_p_0(
  MR_Word AddedModuleSpecifier_4,
  MR_Word STATE_VARIABLE_MI_0_8,
  MR_Word * STATE_VARIABLE_MI_9)
{
  {
    MR_Word Modules0_6;
    MR_Word Modules_7;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 1))));
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_String Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Integer Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Integer Var_104;
    MR_Word Var_105;
    MR_Word Var_106;

    Modules0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 22))));
    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (AddedModuleSpecifier_4)), Modules0_6, &Modules_7);
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 0))));
    Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 1))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 2))));
    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 3))));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 4))));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 5))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 6))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 7))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 8))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 9))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1))));
    Var_71 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 2))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 3))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 4))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 5))));
    Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 6))));
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 7))));
    Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 8))));
    Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 9))));
    Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 10))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 11))));
    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 12))));
    Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 13))));
    Var_83 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 14))));
    Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 15))));
    Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 16))));
    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 17))));
    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 18))));
    Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 19))));
    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 20))));
    Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 21))));
    Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 23))));
    Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 24))));
    Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 25))));
    Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 26))));
    Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 27))));
    Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 28))));
    Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 29))));
    Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 30))));
    Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 31))));
    Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 32))));
    Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 33))));
    Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 34))));
    Var_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 35))));
    Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 36))));
    Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 37))));
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), Var_13, 5) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), Var_13, 6) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), Var_13, 7) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), Var_13, 8) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), Var_13, 9) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), Var_13, 10) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), Var_13, 11) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), Var_13, 12) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), Var_13, 13) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), Var_13, 14) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), Var_13, 15) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), Var_13, 16) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), Var_13, 17) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), Var_13, 18) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), Var_13, 19) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), Var_13, 20) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(0), Var_13, 21) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(0), Var_13, 22) = ((MR_Box) (Modules_7));
      MR_hl_field(MR_mktag(0), Var_13, 23) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(0), Var_13, 24) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(0), Var_13, 25) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(0), Var_13, 26) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(0), Var_13, 27) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(0), Var_13, 28) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(0), Var_13, 29) = ((MR_Box) (Var_98));
      MR_hl_field(MR_mktag(0), Var_13, 30) = ((MR_Box) (Var_99));
      MR_hl_field(MR_mktag(0), Var_13, 31) = ((MR_Box) (Var_100));
      MR_hl_field(MR_mktag(0), Var_13, 32) = ((MR_Box) (Var_101));
      MR_hl_field(MR_mktag(0), Var_13, 33) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(0), Var_13, 34) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(0), Var_13, 35) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(0), Var_13, 36) = ((MR_Box) (Var_105));
      MR_hl_field(MR_mktag(0), Var_13, 37) = ((MR_Box) (Var_106));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_68));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_add_avail_module_name_6_p_0(
  MR_Word ModuleName_7,
  MR_Word NewSection_8,
  MR_Word NewImportOrUse_9,
  MR_Word MaybeContext_10,
  MR_Word STATE_VARIABLE_MI_0_24,
  MR_Word * STATE_VARIABLE_MI_25)
{
  {
    MR_bool succeeded;
    MR_Word NewAvails_12;
    MR_Word AvailMap0_14;
    MR_Word AvailMap_23;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word OldEntry_15;
    MR_Box conv0_OldEntry_15;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_String Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Integer Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Integer Var_123;
    MR_Word Var_124;
    MR_Word Var_125;

    if ((MaybeContext_10 == (MR_Word) ((MR_Unsigned) 0U)))
      NewAvails_12 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeContext_10, (MR_Integer) 0))));
      MR_Word Var_26;

      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_26, 0) = (MR_Box) (((((MR_Unsigned) (NewSection_8) << (MR_Integer) 1)) | (MR_Unsigned) (NewImportOrUse_9)));
        MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (Context_13));
      }
      {
        NewAvails_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NewAvails_12, 0) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(1), NewAvails_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_24, (MR_Integer) 1))));
    AvailMap0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_28, (MR_Integer) 21))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), AvailMap0_14, ((MR_Box) (ModuleName_7)), &conv0_OldEntry_15);
    if (succeeded)
    {
      OldEntry_15 = ((MR_Word) (conv0_OldEntry_15));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word OldSection_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OldEntry_15, (MR_Integer) 0))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word OldImportOrUse_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OldEntry_15, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word OldAvails_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldEntry_15, (MR_Integer) 1))));
      MR_Word Section_19;
      MR_Word ImportOrUse_20;
      MR_Word Avails_21;
      MR_Word NewEntry_22;
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), OldEntry_15, (MR_Integer) 0)));

      hlds__hlds_module__combine_old_new_avail_attrs_6_p_0(OldSection_16, NewSection_8, OldImportOrUse_17, NewImportOrUse_9, &Section_19, &ImportOrUse_20);
      Avails_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0), NewAvails_12, OldAvails_18);
      {
        NewEntry_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NewEntry_22, 0) = (MR_Box) (((((MR_Unsigned) (Section_19) << (MR_Integer) 1)) | (MR_Unsigned) (ImportOrUse_20)));
        MR_hl_field(MR_mktag(0), NewEntry_22, 1) = ((MR_Box) (Avails_21));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (NewEntry_22)), AvailMap0_14, &AvailMap_23);
    }
    else
    {
      MR_Word NewEntry_32;

      {
        NewEntry_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NewEntry_32, 0) = (MR_Box) (((((MR_Unsigned) (NewSection_8) << (MR_Integer) 1)) | (MR_Unsigned) (NewImportOrUse_9)));
        MR_hl_field(MR_mktag(0), NewEntry_32, 1) = ((MR_Box) (NewAvails_12));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (NewEntry_32)), AvailMap0_14, &AvailMap_23);
    }
    Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_24, (MR_Integer) 0))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_24, (MR_Integer) 1))));
    Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_24, (MR_Integer) 2))));
    Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_24, (MR_Integer) 3))));
    Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_24, (MR_Integer) 4))));
    Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_24, (MR_Integer) 5))));
    Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_24, (MR_Integer) 6))));
    Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_24, (MR_Integer) 7))));
    Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_24, (MR_Integer) 8))));
    Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_24, (MR_Integer) 9))));
    Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
    Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1))));
    Var_90 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 2))));
    Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 3))));
    Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 4))));
    Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 5))));
    Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 6))));
    Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 7))));
    Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 8))));
    Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 9))));
    Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 10))));
    Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 11))));
    Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 12))));
    Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 13))));
    Var_102 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 14))));
    Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 15))));
    Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 16))));
    Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 17))));
    Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 18))));
    Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 19))));
    Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 20))));
    Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 22))));
    Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 23))));
    Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 24))));
    Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 25))));
    Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 26))));
    Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 27))));
    Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 28))));
    Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 29))));
    Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 30))));
    Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 31))));
    Var_120 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 32))));
    Var_121 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 33))));
    Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 34))));
    Var_123 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 35))));
    Var_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 36))));
    Var_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 37))));
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(0), Var_31, 5) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(0), Var_31, 6) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(0), Var_31, 7) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(0), Var_31, 8) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(0), Var_31, 9) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(0), Var_31, 10) = ((MR_Box) (Var_98));
      MR_hl_field(MR_mktag(0), Var_31, 11) = ((MR_Box) (Var_99));
      MR_hl_field(MR_mktag(0), Var_31, 12) = ((MR_Box) (Var_100));
      MR_hl_field(MR_mktag(0), Var_31, 13) = ((MR_Box) (Var_101));
      MR_hl_field(MR_mktag(0), Var_31, 14) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(0), Var_31, 15) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(0), Var_31, 16) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(0), Var_31, 17) = ((MR_Box) (Var_105));
      MR_hl_field(MR_mktag(0), Var_31, 18) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(0), Var_31, 19) = ((MR_Box) (Var_107));
      MR_hl_field(MR_mktag(0), Var_31, 20) = ((MR_Box) (Var_108));
      MR_hl_field(MR_mktag(0), Var_31, 21) = ((MR_Box) (AvailMap_23));
      MR_hl_field(MR_mktag(0), Var_31, 22) = ((MR_Box) (Var_110));
      MR_hl_field(MR_mktag(0), Var_31, 23) = ((MR_Box) (Var_111));
      MR_hl_field(MR_mktag(0), Var_31, 24) = ((MR_Box) (Var_112));
      MR_hl_field(MR_mktag(0), Var_31, 25) = ((MR_Box) (Var_113));
      MR_hl_field(MR_mktag(0), Var_31, 26) = ((MR_Box) (Var_114));
      MR_hl_field(MR_mktag(0), Var_31, 27) = ((MR_Box) (Var_115));
      MR_hl_field(MR_mktag(0), Var_31, 28) = ((MR_Box) (Var_116));
      MR_hl_field(MR_mktag(0), Var_31, 29) = ((MR_Box) (Var_117));
      MR_hl_field(MR_mktag(0), Var_31, 30) = ((MR_Box) (Var_118));
      MR_hl_field(MR_mktag(0), Var_31, 31) = ((MR_Box) (Var_119));
      MR_hl_field(MR_mktag(0), Var_31, 32) = ((MR_Box) (Var_120));
      MR_hl_field(MR_mktag(0), Var_31, 33) = ((MR_Box) (Var_121));
      MR_hl_field(MR_mktag(0), Var_31, 34) = ((MR_Box) (Var_122));
      MR_hl_field(MR_mktag(0), Var_31, 35) = ((MR_Box) (Var_123));
      MR_hl_field(MR_mktag(0), Var_31, 36) = ((MR_Box) (Var_124));
      MR_hl_field(MR_mktag(0), Var_31, 37) = ((MR_Box) (Var_125));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_25 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_87));
    }
  }
}

static void MR_CALL 
hlds__hlds_module__combine_old_new_avail_attrs_6_p_0(
  MR_Word OldSection_7,
  MR_Word NewSection_8,
  MR_Word OldImportOrUse_9,
  MR_Word NewImportOrUse_10,
  MR_Word * Section_11,
  MR_Word * ImportOrUse_12)
{
  {
    MR_bool succeeded = (OldSection_7 == (MR_Integer) 0);

    if (!(succeeded))
      succeeded = (NewSection_8 == (MR_Integer) 0);
    if (succeeded)
      *Section_11 = (MR_Integer) 0;
    else
      *Section_11 = (MR_Integer) 1;
    succeeded = (OldImportOrUse_9 == (MR_Integer) 0);
    if (!(succeeded))
      succeeded = (NewImportOrUse_10 == (MR_Integer) 0);
    if (succeeded)
      *ImportOrUse_12 = (MR_Integer) 0;
    else
      *ImportOrUse_12 = (MR_Integer) 1;
  }
}

void MR_CALL 
hlds__hlds_module__module_info_next_atomic_count_4_p_0(
  MR_Word Context_5,
  MR_Integer * Count_6,
  MR_Word STATE_VARIABLE_MI_0_13,
  MR_Word * STATE_VARIABLE_MI_14)
{
  {
    MR_bool succeeded;
    MR_Word ContextCounter0_8;
    MR_Word ContextCounter_10;
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_13, (MR_Integer) 1))));
    MR_Word FoundContextCounter_9;
    MR_Word Var_15;

    ContextCounter0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 20))));
    Var_15 = mercury__counter__init_1_f_0((MR_Integer) 2);
    succeeded = mercury__map__insert_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), ((MR_Box) (Context_5)), ((MR_Box) (Var_15)), ContextCounter0_8, &FoundContextCounter_9);
    if (succeeded)
    {
      *Count_6 = (MR_Integer) 1;
      ContextCounter_10 = FoundContextCounter_9;
    }
    else
    {
      MR_Word Counter0_11;
      MR_Word Counter_12;
      MR_Box conv0_Counter0_11;

      mercury__map__lookup_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), ContextCounter0_8, ((MR_Box) (Context_5)), &conv0_Counter0_11);
      Counter0_11 = ((MR_Word) (conv0_Counter0_11));
      mercury__counter__allocate_3_p_0(Count_6, Counter0_11, &Counter_12);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), ((MR_Box) (Context_5)), ((MR_Box) (Counter_12)), ContextCounter0_8, &ContextCounter_10);
    }
    hlds__hlds_module__module_info_set_atomics_per_context_3_p_0(ContextCounter_10, STATE_VARIABLE_MI_0_13, STATE_VARIABLE_MI_14);
  }
}

static void MR_CALL 
hlds__hlds_module__module_info_set_atomics_per_context_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_next_lambda_count_4_p_0(
  MR_Word Context_5,
  MR_Integer * Count_6,
  MR_Word STATE_VARIABLE_MI_0_13,
  MR_Word * STATE_VARIABLE_MI_14)
{
  {
    MR_bool succeeded;
    MR_Word ContextCounter0_8;
    MR_Word ContextCounter_10;
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_13, (MR_Integer) 1))));
    MR_Word FoundContextCounter_9;
    MR_Word Var_15;

    ContextCounter0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 19))));
    Var_15 = mercury__counter__init_1_f_0((MR_Integer) 2);
    succeeded = mercury__map__insert_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), ((MR_Box) (Context_5)), ((MR_Box) (Var_15)), ContextCounter0_8, &FoundContextCounter_9);
    if (succeeded)
    {
      *Count_6 = (MR_Integer) 1;
      ContextCounter_10 = FoundContextCounter_9;
    }
    else
    {
      MR_Word Counter0_11;
      MR_Word Counter_12;
      MR_Box conv0_Counter0_11;

      mercury__map__lookup_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), ContextCounter0_8, ((MR_Box) (Context_5)), &conv0_Counter0_11);
      Counter0_11 = ((MR_Word) (conv0_Counter0_11));
      mercury__counter__allocate_3_p_0(Count_6, Counter0_11, &Counter_12);
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), ((MR_Box) (Context_5)), ((MR_Box) (Counter_12)), ContextCounter0_8, &ContextCounter_10);
    }
    hlds__hlds_module__module_info_set_lambdas_per_context_3_p_0(ContextCounter_10, STATE_VARIABLE_MI_0_13, STATE_VARIABLE_MI_14);
  }
}

static void MR_CALL 
hlds__hlds_module__module_info_set_lambdas_per_context_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_incr_num_errors_3_p_0(
  MR_Integer Incr_4,
  MR_Word STATE_VARIABLE_MI_0_8,
  MR_Word * STATE_VARIABLE_MI_9)
{
  {
    MR_Integer Errs0_6;
    MR_Integer Errs_7;
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 1))));

    Errs0_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 14))));
    Errs_7 = (MR_Integer) ((MR_Unsigned) Errs0_6 + (MR_Unsigned) Incr_4);
    hlds__hlds_module__module_info_set_num_errors_3_p_0(Errs_7, STATE_VARIABLE_MI_0_8, STATE_VARIABLE_MI_9);
  }
}

void MR_CALL 
hlds__hlds_module__module_info_incr_errors_2_p_0(
  MR_Word STATE_VARIABLE_MI_0_4,
  MR_Word * STATE_VARIABLE_MI_5)
{
  {
    MR_Integer Errs0_12;
    MR_Integer Errs_13;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_4, (MR_Integer) 1))));

    Errs0_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 14))));
    Errs_13 = (MR_Integer) ((MR_Unsigned) Errs0_12 + (MR_Unsigned) (MR_Integer) 1);
    hlds__hlds_module__module_info_set_num_errors_3_p_0(Errs_13, STATE_VARIABLE_MI_0_4, STATE_VARIABLE_MI_5);
  }
}

static void MR_CALL 
hlds__hlds_module__module_info_set_num_errors_3_p_0(
  MR_Integer X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Integer Var_115 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 14))));

    succeeded = (X_4 == Var_115);
    if (succeeded)
      *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
    else
    {
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
      MR_Word Var_11;
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
      MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
      MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
      MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
      MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
      MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
      MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
      MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
      MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1))));
      MR_String Var_69 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 2))));
      MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 3))));
      MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 4))));
      MR_Word Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 5))));
      MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 6))));
      MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 7))));
      MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 8))));
      MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 9))));
      MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 10))));
      MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 11))));
      MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 12))));
      MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 13))));
      MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 15))));
      MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 16))));
      MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 17))));
      MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 18))));
      MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 19))));
      MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 20))));
      MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 21))));
      MR_Word Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 22))));
      MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 23))));
      MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 24))));
      MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 25))));
      MR_Word Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 26))));
      MR_Word Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 27))));
      MR_Word Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 28))));
      MR_Word Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 29))));
      MR_Word Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 30))));
      MR_Word Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 31))));
      MR_Word Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 32))));
      MR_Word Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 33))));
      MR_Word Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 34))));
      MR_Integer Var_102 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 35))));
      MR_Word Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 36))));
      MR_Word Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 37))));

      {
        Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), Var_11, 4) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), Var_11, 5) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(0), Var_11, 6) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(0), Var_11, 7) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(0), Var_11, 8) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(0), Var_11, 9) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(0), Var_11, 10) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(0), Var_11, 11) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), Var_11, 12) = ((MR_Box) (Var_79));
        MR_hl_field(MR_mktag(0), Var_11, 13) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(0), Var_11, 14) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), Var_11, 15) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), Var_11, 16) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(0), Var_11, 17) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(0), Var_11, 18) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(0), Var_11, 19) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(0), Var_11, 20) = ((MR_Box) (Var_87));
        MR_hl_field(MR_mktag(0), Var_11, 21) = ((MR_Box) (Var_88));
        MR_hl_field(MR_mktag(0), Var_11, 22) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(0), Var_11, 23) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(0), Var_11, 24) = ((MR_Box) (Var_91));
        MR_hl_field(MR_mktag(0), Var_11, 25) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(0), Var_11, 26) = ((MR_Box) (Var_93));
        MR_hl_field(MR_mktag(0), Var_11, 27) = ((MR_Box) (Var_94));
        MR_hl_field(MR_mktag(0), Var_11, 28) = ((MR_Box) (Var_95));
        MR_hl_field(MR_mktag(0), Var_11, 29) = ((MR_Box) (Var_96));
        MR_hl_field(MR_mktag(0), Var_11, 30) = ((MR_Box) (Var_97));
        MR_hl_field(MR_mktag(0), Var_11, 31) = ((MR_Box) (Var_98));
        MR_hl_field(MR_mktag(0), Var_11, 32) = ((MR_Box) (Var_99));
        MR_hl_field(MR_mktag(0), Var_11, 33) = ((MR_Box) (Var_100));
        MR_hl_field(MR_mktag(0), Var_11, 34) = ((MR_Box) (Var_101));
        MR_hl_field(MR_mktag(0), Var_11, 35) = ((MR_Box) (Var_102));
        MR_hl_field(MR_mktag(0), Var_11, 36) = ((MR_Box) (Var_103));
        MR_hl_field(MR_mktag(0), Var_11, 37) = ((MR_Box) (Var_104));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_MI_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_66));
      }
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(
  MR_Word STATE_VARIABLE_MI_0_4,
  MR_Word * STATE_VARIABLE_MI_5)
{
  {
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_4, (MR_Integer) 1))));
    MR_Word Var_14;
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_4, (MR_Integer) 0))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_4, (MR_Integer) 2))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_4, (MR_Integer) 3))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_4, (MR_Integer) 4))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_4, (MR_Integer) 5))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_4, (MR_Integer) 6))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_4, (MR_Integer) 7))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_4, (MR_Integer) 8))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_4, (MR_Integer) 9))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1))));
    MR_String Var_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 2))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 3))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 4))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 5))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 6))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 7))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 8))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 9))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 10))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 11))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 12))));
    MR_Integer Var_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 14))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 15))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 16))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 17))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 18))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 19))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 20))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 21))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 22))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 23))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 24))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 25))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 26))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 27))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 28))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 29))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 30))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 31))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 32))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 33))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 34))));
    MR_Integer Var_59 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 35))));
    MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 36))));
    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 37))));

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_14, 6) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_14, 7) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_14, 8) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_14, 9) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_14, 10) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_14, 11) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_14, 12) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_14, 13) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Var_14, 14) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_14, 15) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_14, 16) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_14, 17) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_14, 18) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_14, 19) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_14, 20) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_14, 21) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_14, 22) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_14, 23) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_14, 24) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_14, 25) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_14, 26) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_14, 27) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_14, 28) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_14, 29) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_14, 30) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_14, 31) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_14, 32) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_14, 33) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), Var_14, 34) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), Var_14, 35) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), Var_14, 36) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), Var_14, 37) = ((MR_Box) (Var_61));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_23));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_dependency_info_3_p_0(
  MR_Word DependencyInfo_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_8;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_String Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Integer Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Integer Var_61;
    MR_Word Var_62;
    MR_Word Var_63;

    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (DependencyInfo_4));
    }
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1))));
    Var_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 2))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 3))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 4))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 5))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 6))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 7))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 8))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 9))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 10))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 11))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 12))));
    Var_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 14))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 15))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 16))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 17))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 18))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 19))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 20))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 21))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 22))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 23))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 24))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 25))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 26))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 27))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 28))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 29))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 30))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 31))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 32))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 33))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 34))));
    Var_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 35))));
    Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 36))));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 37))));
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_16, 5) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_16, 6) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_16, 7) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_16, 8) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_16, 9) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_16, 10) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_16, 11) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_16, 12) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_16, 13) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), Var_16, 14) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_16, 15) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_16, 16) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_16, 17) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_16, 18) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_16, 19) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_16, 20) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_16, 21) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_16, 22) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_16, 23) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_16, 24) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_16, 25) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_16, 26) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_16, 27) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_16, 28) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_16, 29) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_16, 30) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_16, 31) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), Var_16, 32) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), Var_16, 33) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), Var_16, 34) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), Var_16, 35) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), Var_16, 36) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), Var_16, 37) = ((MR_Box) (Var_63));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_25));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_dependency_info_2_p_0(
  MR_Word MI_3,
  MR_Word * DepInfo_4)
{
  {
    MR_Word MaybeDepInfo_5;
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    MaybeDepInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 13))));
    if ((MaybeDepInfo_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_module", (MR_String) "predicate \140hlds.hlds_module.module_info_dependency_info\'/2", (MR_String) "Attempted to access invalid dependency_info");
        return;
      }
    }
    else
      *DepInfo_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDepInfo_5, (MR_Integer) 0))));
  }
}

void MR_CALL 
hlds__hlds_module__module_add_fact_table_file_3_p_0(
  MR_String FileName_4,
  MR_Word STATE_VARIABLE_Module_0_8,
  MR_Word * STATE_VARIABLE_Module_9)
{
  {
    MR_Word FileNames0_6;
    MR_Word FileNames_7;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_8, (MR_Integer) 1))));
    MR_Word Var_13;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_8, (MR_Integer) 0))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_8, (MR_Integer) 2))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_8, (MR_Integer) 3))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_8, (MR_Integer) 4))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_8, (MR_Integer) 5))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_8, (MR_Integer) 6))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_8, (MR_Integer) 7))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_8, (MR_Integer) 8))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_8, (MR_Integer) 9))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1))));
    MR_String Var_25 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 2))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 3))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 4))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 5))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 6))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 7))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 8))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 9))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 10))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 11))));
    MR_Word Var_35;
    MR_Integer Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Integer Var_57;
    MR_Word Var_58;
    MR_Word Var_59;

    FileNames0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 12))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 13))));
    Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 14))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 15))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 16))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 17))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 18))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 19))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 20))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 21))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 22))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 23))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 24))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 25))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 26))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 27))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 28))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 29))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 30))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 31))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 32))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 33))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 34))));
    Var_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 35))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 36))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 37))));
    {
      FileNames_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FileNames_7, 0) = ((MR_Box) (FileName_4));
      MR_hl_field(MR_mktag(1), FileNames_7, 1) = ((MR_Box) (FileNames0_6));
    }
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_13, 5) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_13, 6) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_13, 7) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_13, 8) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_13, 9) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_13, 10) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_13, 11) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_13, 12) = ((MR_Box) (FileNames_7));
      MR_hl_field(MR_mktag(0), Var_13, 13) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_13, 14) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_13, 15) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_13, 16) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_13, 17) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_13, 18) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_13, 19) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_13, 20) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_13, 21) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_13, 22) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_13, 23) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_13, 24) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_13, 25) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_13, 26) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_13, 27) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_13, 28) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_13, 29) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_13, 30) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_13, 31) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_13, 32) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_13, 33) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_13, 34) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_13, 35) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), Var_13, 36) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), Var_13, 37) = ((MR_Box) (Var_59));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Module_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_22));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_add_foreign_import_module_3_p_0(
  MR_Word ForeignImportModule_4,
  MR_Word STATE_VARIABLE_Module_0_10,
  MR_Word * STATE_VARIABLE_Module_11)
{
  {
    MR_Word ForeignImportModules0_6;
    MR_Word Lang_7;
    MR_Word ModuleName_8;
    MR_Word ForeignImportModules_9;
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_10, (MR_Integer) 0))));
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;

    ForeignImportModules0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 5))));
    Lang_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignImportModule_4, (MR_Integer) 0))));
    ModuleName_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignImportModule_4, (MR_Integer) 1))));
    parse_tree__prog_data_foreign__add_foreign_import_module_4_p_0(Lang_7, ModuleName_8, ForeignImportModules0_6, &ForeignImportModules_9);
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_10, (MR_Integer) 0))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_10, (MR_Integer) 1))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_10, (MR_Integer) 2))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_10, (MR_Integer) 3))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_10, (MR_Integer) 4))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_10, (MR_Integer) 5))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_10, (MR_Integer) 6))));
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_10, (MR_Integer) 7))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_10, (MR_Integer) 8))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_10, (MR_Integer) 9))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0))));
    Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 2))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 3))));
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 4))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 6))));
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_37, 5) = ((MR_Box) (ForeignImportModules_9));
      MR_hl_field(MR_mktag(0), Var_37, 6) = ((MR_Box) (Var_53));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Module_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_46));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_add_foreign_body_code_3_p_0(
  MR_Word ForeignBodyCode_4,
  MR_Word STATE_VARIABLE_Module_0_8,
  MR_Word * STATE_VARIABLE_Module_9)
{
  {
    MR_Word ForeignBodyCodes0_6;
    MR_Word ForeignBodyCodes_7;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_8, (MR_Integer) 1))));

    ForeignBodyCodes0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 11))));
    ForeignBodyCodes_7 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), ForeignBodyCodes0_6, ((MR_Box) (ForeignBodyCode_4)));
    hlds__hlds_module__module_info_set_foreign_body_codes_3_p_0(ForeignBodyCodes_7, STATE_VARIABLE_Module_0_8, STATE_VARIABLE_Module_9);
  }
}

void MR_CALL 
hlds__hlds_module__module_add_foreign_decl_code_3_p_0(
  MR_Word ForeignDeclCode_4,
  MR_Word STATE_VARIABLE_Module_0_8,
  MR_Word * STATE_VARIABLE_Module_9)
{
  {
    MR_Word ForeignDeclCodes0_6;
    MR_Word ForeignDeclCodes_7;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Module_0_8, (MR_Integer) 1))));

    ForeignDeclCodes0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 10))));
    ForeignDeclCodes_7 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), ForeignDeclCodes0_6, ((MR_Box) (ForeignDeclCode_4)));
    hlds__hlds_module__module_info_set_foreign_decl_codes_3_p_0(ForeignDeclCodes_7, STATE_VARIABLE_Module_0_8, STATE_VARIABLE_Module_9);
  }
}

MR_Integer MR_CALL 
hlds__hlds_module__predicate_arity_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5)
{
  {
    MR_Integer Arity_6;
    MR_Word PredInfo_7;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_5, &PredInfo_7);
    Arity_6 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_7);
    return Arity_6;
  }
}

MR_String MR_CALL 
hlds__hlds_module__predicate_name_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5)
{
  {
    MR_String PredName_6;
    MR_Word PredInfo_7;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_5, &PredInfo_7);
    PredName_6 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_7);
    return PredName_6;
  }
}

MR_Word MR_CALL 
hlds__hlds_module__predicate_module_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5)
{
  {
    MR_Word ModuleName_6;
    MR_Word PredInfo_7;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_5, &PredInfo_7);
    ModuleName_6 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_7);
    return ModuleName_6;
  }
}

void MR_CALL 
hlds__hlds_module__predicate_id_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word * ModuleName_8,
  MR_String * PredName_9,
  MR_Integer * Arity_10)
{
  {
    MR_Word PredInfo_11;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_7, &PredInfo_11);
    *ModuleName_8 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_11);
    *PredName_9 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_11);
    *Arity_10 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_11);
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredInfo_8,
  MR_Word ProcInfo_9,
  MR_Word STATE_VARIABLE_MI_0_11,
  MR_Word * STATE_VARIABLE_MI_12)
{
  {
    MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ProcId_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Procs0_21;
    MR_Word Procs_22;
    MR_Word PredInfo_23;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_8, &Procs0_21);
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_7)), ((MR_Box) (ProcInfo_9)), Procs0_21, &Procs_22);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs_22, PredInfo_8, &PredInfo_23);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_6, PredInfo_23, STATE_VARIABLE_MI_0_11, STATE_VARIABLE_MI_12);
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word PredInfo0_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_MI_0_15,
  MR_Word * STATE_VARIABLE_MI_16)
{
  {
    MR_Word Procs0_12;
    MR_Word Procs_13;
    MR_Word PredInfo_14;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_9, &Procs0_12);
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_8)), ((MR_Box) (ProcInfo_10)), Procs0_12, &Procs_13);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs_13, PredInfo0_9, &PredInfo_14);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_7, PredInfo_14, STATE_VARIABLE_MI_0_15, STATE_VARIABLE_MI_16);
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_pred_info_4_p_0(
  MR_Word PredId_5,
  MR_Word PredInfo_6,
  MR_Word STATE_VARIABLE_MI_0_10,
  MR_Word * STATE_VARIABLE_MI_11)
{
  {
    MR_Word Preds0_8;
    MR_Word Preds_9;
    MR_Word PredTable_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_10, (MR_Integer) 3))));
    MR_Word PredTable0_33;
    MR_Word PredTable_34;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;

    hlds__pred_table__predicate_table_get_preds_2_p_0(PredTable_17, &Preds0_8);
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_5)), ((MR_Box) (PredInfo_6)), Preds0_8, &Preds_9);
    PredTable0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_10, (MR_Integer) 3))));
    hlds__pred_table__predicate_table_set_preds_3_p_0(Preds_9, PredTable0_33, &PredTable_34);
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_10, (MR_Integer) 0))));
    Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_10, (MR_Integer) 1))));
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_10, (MR_Integer) 2))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_10, (MR_Integer) 4))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_10, (MR_Integer) 5))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_10, (MR_Integer) 6))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_10, (MR_Integer) 7))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_10, (MR_Integer) 8))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_10, (MR_Integer) 9))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (PredTable_34));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_61));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_remove_predicate_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_MI_0_8,
  MR_Word * STATE_VARIABLE_MI_9)
{
  {
    MR_Word PredTable0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 3))));
    MR_Word PredTable_7;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;

    hlds__pred_table__predicate_table_remove_predicate_3_p_0(PredId_4, PredTable0_6, &PredTable_7);
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 0))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 1))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 2))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 4))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 5))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 6))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 7))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 8))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 9))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (PredTable_7));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_36));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_make_pred_ids_invalid_3_p_0(
  MR_Word PredIds_4,
  MR_Word STATE_VARIABLE_MI_0_8,
  MR_Word * STATE_VARIABLE_MI_9)
{
  {
    MR_Word PredTable0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 3))));
    MR_Word PredTable_7;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;

    hlds__pred_table__predicate_table_make_pred_ids_invalid_3_p_0(PredIds_4, PredTable0_6, &PredTable_7);
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 0))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 1))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 2))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 4))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 5))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 6))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 7))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 8))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 9))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (PredTable_7));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_36));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_make_pred_id_invalid_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_MI_0_8,
  MR_Word * STATE_VARIABLE_MI_9)
{
  {
    MR_Word PredTable0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 3))));
    MR_Word PredTable_7;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;

    hlds__pred_table__predicate_table_make_pred_id_invalid_3_p_0(PredId_4, PredTable0_6, &PredTable_7);
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 0))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 1))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 2))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 4))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 5))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 6))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 7))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 8))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 9))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (PredTable_7));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_36));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(
  MR_Word MI_3,
  MR_Word * PredIds_4)
{
  {
    MR_Word PredTable_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 3))));
    MR_Word PredIdSet_6;

    hlds__pred_table__predicate_table_get_valid_pred_id_set_2_p_0(PredTable_5, &PredIdSet_6);
    mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIdSet_6, PredIds_4);
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(
  MR_Word MI_3,
  MR_Word * PredIdSet_4)
{
  {
    MR_Word PredTable_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 3))));

    hlds__pred_table__predicate_table_get_valid_pred_id_set_2_p_0(PredTable_5, PredIdSet_4);
  }
}

void MR_CALL 
hlds__hlds_module__module_info_pred_proc_info_4_p_0(
  MR_Word MI_5,
  MR_Word HeadVar__2_2,
  MR_Word * PredInfo_8,
  MR_Word * ProcInfo_9)
{
  {
    MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ProcId_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Procs_15;
    MR_Box conv0_ProcInfo_9;

    hlds__hlds_module__module_info_pred_info_3_p_0(MI_5, PredId_6, PredInfo_8);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(*PredInfo_8, &Procs_15);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_15, ((MR_Box) (ProcId_7)), &conv0_ProcInfo_9);
    *ProcInfo_9 = ((MR_Word) (conv0_ProcInfo_9));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_pred_proc_info_5_p_0(
  MR_Word MI_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word * PredInfo_9,
  MR_Word * ProcInfo_10)
{
  {
    MR_Word Procs_11;
    MR_Box conv0_ProcInfo_10;

    hlds__hlds_module__module_info_pred_info_3_p_0(MI_6, PredId_7, PredInfo_9);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(*PredInfo_9, &Procs_11);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_11, ((MR_Box) (ProcId_8)), &conv0_ProcInfo_10);
    *ProcInfo_10 = ((MR_Word) (conv0_ProcInfo_10));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_proc_info_4_p_0(
  MR_Word MI_5,
  MR_Word PredId_6,
  MR_Integer ProcId_7,
  MR_Word * ProcInfo_8)
{
  {
    MR_Word Var_9;
    MR_Word Procs_15;
    MR_Box conv0_ProcInfo_8;

    hlds__hlds_module__module_info_pred_info_3_p_0(MI_5, PredId_6, &Var_9);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(Var_9, &Procs_15);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_15, ((MR_Box) (ProcId_7)), &conv0_ProcInfo_8);
    *ProcInfo_8 = ((MR_Word) (conv0_ProcInfo_8));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_proc_info_3_p_0(
  MR_Word MI_4,
  MR_Word PPId_5,
  MR_Word * ProcInfo_6)
{
  {
    MR_Word Var_7;
    MR_Word PredId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PPId_5, (MR_Integer) 0))));
    MR_Integer ProcId_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PPId_5, (MR_Integer) 1))));
    MR_Word Procs_18;
    MR_Box conv0_ProcInfo_6;

    hlds__hlds_module__module_info_pred_info_3_p_0(MI_4, PredId_11, &Var_7);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(Var_7, &Procs_18);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_18, ((MR_Box) (ProcId_12)), &conv0_ProcInfo_6);
    *ProcInfo_6 = ((MR_Word) (conv0_ProcInfo_6));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_pred_info_3_p_0(
  MR_Word MI_4,
  MR_Word PredId_5,
  MR_Word * PredInfo_6)
{
  {
    MR_bool succeeded;
    MR_Word Preds_7;
    MR_Word PredTable_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_4, (MR_Integer) 3))));
    MR_Word PredInfoPrime_8;
    MR_Box conv0_PredInfoPrime_8;

    hlds__pred_table__predicate_table_get_preds_2_p_0(PredTable_19, &Preds_7);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds_7, ((MR_Box) (PredId_5)), &conv0_PredInfoPrime_8);
    if (succeeded)
    {
      PredInfoPrime_8 = ((MR_Word) (conv0_PredInfoPrime_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *PredInfo_6 = PredInfoPrime_8;
    else
    {
      MR_Integer PredInt_9;
      MR_String PredStr_10;
      MR_String Var_13;

      hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_5, &PredInt_9);
      mercury__string__int_to_string_2_p_0(PredInt_9, &PredStr_10);
      Var_13 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find predicate number ", PredStr_10);
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_module", (MR_String) "predicate \140hlds.hlds_module.module_info_pred_info\'/3", Var_13);
        return;
      }
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_preds_3_p_0(
  MR_Word Preds_4,
  MR_Word STATE_VARIABLE_MI_0_8,
  MR_Word * STATE_VARIABLE_MI_9)
{
  {
    MR_Word PredTable0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 3))));
    MR_Word PredTable_7;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;

    hlds__pred_table__predicate_table_set_preds_3_p_0(Preds_4, PredTable0_6, &PredTable_7);
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 0))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 1))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 2))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 4))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 5))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 6))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 7))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 8))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 9))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (PredTable_7));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_36));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_preds_2_p_0(
  MR_Word MI_3,
  MR_Word * Preds_4)
{
  {
    MR_Word PredTable_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 3))));

    hlds__pred_table__predicate_table_get_preds_2_p_0(PredTable_5, Preds_4);
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_type_repn_dec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (X_4));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_ts_rev_string_table_4_p_0(
  MR_Integer X_5,
  MR_Word Y_6,
  MR_Word STATE_VARIABLE_MI_0_8,
  MR_Word * STATE_VARIABLE_MI_9)
{
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 1))));
    MR_Word Var_15;
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 0))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 2))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 3))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 4))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 5))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 6))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 7))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 8))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_8, (MR_Integer) 9))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
    MR_String Var_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 2))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 3))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 4))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 5))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 6))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 7))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 8))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 9))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 10))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 11))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 12))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 13))));
    MR_Integer Var_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 15))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 16))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 17))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 18))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 19))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 20))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 21))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 22))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 23))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 24))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 25))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 26))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 27))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 28))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 29))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 30))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 31))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 32))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 33))));
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 34))));
    MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 37))));
    MR_Word Var_63 = Var_16;
    MR_Word Var_65 = Var_17;
    MR_Word Var_66 = Var_18;
    MR_Word Var_67 = Var_19;
    MR_Word Var_68 = Var_20;
    MR_Word Var_69 = Var_21;
    MR_Word Var_70 = Var_22;
    MR_Word Var_71 = Var_23;
    MR_Word Var_72 = Var_24;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_15, 5) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_15, 6) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_15, 7) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_15, 8) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_15, 9) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_15, 10) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_15, 11) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_15, 12) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_15, 13) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_15, 14) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_15, 15) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_15, 16) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_15, 17) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_15, 18) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_15, 19) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_15, 20) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_15, 21) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_15, 22) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_15, 23) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_15, 24) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_15, 25) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_15, 26) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_15, 27) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_15, 28) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_15, 29) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_15, 30) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_15, 31) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_15, 32) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), Var_15, 33) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), Var_15, 34) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), Var_15, 35) = ((MR_Box) (X_5));
      MR_hl_field(MR_mktag(0), Var_15, 36) = ((MR_Box) (Y_6));
      MR_hl_field(MR_mktag(0), Var_15, 37) = ((MR_Box) (Var_62));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_72));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_oisu_procs_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_oisu_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_event_set_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_exported_enums_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_structure_reuse_preds_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_analysis_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_proc_analysis_kinds_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_complexity_proc_infos_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_maybe_complexity_proc_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_used_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_table_struct_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_unused_arg_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_must_be_stratified_preds_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_type_ctor_gen_infos_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_foreign_body_codes_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_foreign_decl_codes_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_has_user_event_2_p_0(
  MR_Word STATE_VARIABLE_MI_0_5,
  MR_Word * STATE_VARIABLE_MI_6)
{
  {
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_5, (MR_Integer) 1))));
    MR_Word Var_9;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_5, (MR_Integer) 0))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_5, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_5, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_5, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_5, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_5, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_5, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_5, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_5, (MR_Integer) 9))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
    MR_String Var_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 5))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 6))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 7))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 10))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 11))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 12))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 13))));
    MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 14))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 15))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 16))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 17))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 18))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 19))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 20))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 21))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 22))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 23))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 24))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 25))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 26))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 27))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 28))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 29))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 30))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 31))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 32))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 33))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 34))));
    MR_Integer Var_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 35))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 36))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 37))));

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_9, 4) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_9, 5) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_9, 6) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_9, 7) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_9, 8) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_9, 9) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_9, 10) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_9, 11) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_9, 12) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_9, 13) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_9, 14) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_9, 15) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_9, 16) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_9, 17) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_9, 18) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_9, 19) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_9, 20) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_9, 21) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_9, 22) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_9, 23) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_9, 24) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_9, 25) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_9, 26) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_9, 27) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_9, 28) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_9, 29) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_9, 30) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_9, 31) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_9, 32) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_9, 33) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_9, 34) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_9, 35) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_9, 36) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_9, 37) = ((MR_Box) (Var_56));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_18));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_has_parallel_conj_2_p_0(
  MR_Word STATE_VARIABLE_MI_0_5,
  MR_Word * STATE_VARIABLE_MI_6)
{
  {
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_5, (MR_Integer) 1))));
    MR_Word Var_9;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_5, (MR_Integer) 0))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_5, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_5, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_5, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_5, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_5, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_5, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_5, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_5, (MR_Integer) 9))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
    MR_String Var_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 5))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 6))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 9))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 10))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 11))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 12))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 13))));
    MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 14))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 15))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 16))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 17))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 18))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 19))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 20))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 21))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 22))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 23))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 24))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 25))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 26))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 27))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 28))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 29))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 30))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 31))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 32))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 33))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 34))));
    MR_Integer Var_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 35))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 36))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 37))));

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_9, 4) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_9, 5) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_9, 6) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_9, 7) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_9, 8) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Var_9, 9) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_9, 10) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_9, 11) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_9, 12) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_9, 13) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_9, 14) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_9, 15) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_9, 16) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_9, 17) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_9, 18) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_9, 19) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_9, 20) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_9, 21) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_9, 22) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_9, 23) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_9, 24) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_9, 25) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_9, 26) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_9, 27) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_9, 28) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_9, 29) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_9, 30) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_9, 31) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_9, 32) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_9, 33) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_9, 34) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_9, 35) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_9, 36) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_9, 37) = ((MR_Box) (Var_56));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_18));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_exclusive_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_assertion_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_proc_requests_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_String Var_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 15))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 16))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 17))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 18))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 19))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 20))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 21))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 22))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 23))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 24))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 25))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 26))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 27))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 28))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 29))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 30))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 31))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 32))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 33))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 34))));
    MR_Integer Var_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 35))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 36))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 37))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_10, 14) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_10, 15) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_10, 16) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_10, 17) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), Var_10, 18) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), Var_10, 19) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Var_10, 20) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), Var_10, 21) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_10, 22) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_10, 23) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_10, 24) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_10, 25) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_10, 26) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), Var_10, 27) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_10, 28) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(0), Var_10, 29) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), Var_10, 30) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), Var_10, 31) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), Var_10, 32) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_10, 33) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_10, 34) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_10, 35) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_10, 36) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_10, 37) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_maybe_recompilation_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));

    Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
    if (succeeded)
      *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
      MR_Word Var_12;
      MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
      MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
      MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
      MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
      MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
      MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
      MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
      MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))));
      MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
      MR_String Var_70 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 2))));
      MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 3))));
      MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 5))));
      MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 6))));
      MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 7))));
      MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 8))));
      MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 9))));
      MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 10))));
      MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 11))));
      MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 12))));
      MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 13))));
      MR_Integer Var_82 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))));
      MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 15))));
      MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 16))));
      MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 17))));
      MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 18))));
      MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 19))));
      MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 20))));
      MR_Word Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 21))));
      MR_Word Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 22))));
      MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 23))));
      MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 24))));
      MR_Word Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 25))));
      MR_Word Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 26))));
      MR_Word Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 27))));
      MR_Word Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 28))));
      MR_Word Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 29))));
      MR_Word Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 30))));
      MR_Word Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 31))));
      MR_Word Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 32))));
      MR_Word Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 33))));
      MR_Word Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 34))));
      MR_Integer Var_103 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 35))));
      MR_Word Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 36))));
      MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 37))));

      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), Var_12, 5) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(0), Var_12, 6) = ((MR_Box) (Var_74));
        MR_hl_field(MR_mktag(0), Var_12, 7) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(0), Var_12, 8) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(0), Var_12, 9) = ((MR_Box) (Var_77));
        MR_hl_field(MR_mktag(0), Var_12, 10) = ((MR_Box) (Var_78));
        MR_hl_field(MR_mktag(0), Var_12, 11) = ((MR_Box) (Var_79));
        MR_hl_field(MR_mktag(0), Var_12, 12) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(0), Var_12, 13) = ((MR_Box) (Var_81));
        MR_hl_field(MR_mktag(0), Var_12, 14) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), Var_12, 15) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(0), Var_12, 16) = ((MR_Box) (Var_84));
        MR_hl_field(MR_mktag(0), Var_12, 17) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(0), Var_12, 18) = ((MR_Box) (Var_86));
        MR_hl_field(MR_mktag(0), Var_12, 19) = ((MR_Box) (Var_87));
        MR_hl_field(MR_mktag(0), Var_12, 20) = ((MR_Box) (Var_88));
        MR_hl_field(MR_mktag(0), Var_12, 21) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(0), Var_12, 22) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(0), Var_12, 23) = ((MR_Box) (Var_91));
        MR_hl_field(MR_mktag(0), Var_12, 24) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(0), Var_12, 25) = ((MR_Box) (Var_93));
        MR_hl_field(MR_mktag(0), Var_12, 26) = ((MR_Box) (Var_94));
        MR_hl_field(MR_mktag(0), Var_12, 27) = ((MR_Box) (Var_95));
        MR_hl_field(MR_mktag(0), Var_12, 28) = ((MR_Box) (Var_96));
        MR_hl_field(MR_mktag(0), Var_12, 29) = ((MR_Box) (Var_97));
        MR_hl_field(MR_mktag(0), Var_12, 30) = ((MR_Box) (Var_98));
        MR_hl_field(MR_mktag(0), Var_12, 31) = ((MR_Box) (Var_99));
        MR_hl_field(MR_mktag(0), Var_12, 32) = ((MR_Box) (Var_100));
        MR_hl_field(MR_mktag(0), Var_12, 33) = ((MR_Box) (Var_101));
        MR_hl_field(MR_mktag(0), Var_12, 34) = ((MR_Box) (Var_102));
        MR_hl_field(MR_mktag(0), Var_12, 35) = ((MR_Box) (Var_103));
        MR_hl_field(MR_mktag(0), Var_12, 36) = ((MR_Box) (Var_104));
        MR_hl_field(MR_mktag(0), Var_12, 37) = ((MR_Box) (Var_105));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_MI_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_67));
      }
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_pragma_exported_procs_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));

    Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
    if (succeeded)
      *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
      MR_Word Var_12;
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))));
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 2))));
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 3))));
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 4))));
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 5))));

      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), Var_12, 5) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), Var_12, 6) = ((MR_Box) (X_4));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_MI_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_36));
      }
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_foreign_import_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_const_struct_db_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));

    Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
    if (succeeded)
      *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
      MR_Word Var_12;
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
      MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))));
      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 2))));
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 3))));
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 5))));
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 6))));

      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), Var_12, 5) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), Var_12, 6) = ((MR_Box) (Var_43));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_MI_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_36));
      }
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_type_spec_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_instance_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_special_pred_maps_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_ctor_field_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (X_4));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_class_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_19));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_inst_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_18));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_no_tag_types_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_18));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_type_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_18));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_predicate_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_18));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_globals_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_18));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_type_repn_dec_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 37))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_ts_rev_string_table_3_p_0(
  MR_Word MI_4,
  MR_Integer * X_5,
  MR_Word * Y_6)
{
  {
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_4, (MR_Integer) 1))));

    *X_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 35))));
    *Y_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 36))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_oisu_procs_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 34))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_oisu_map_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 33))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_event_set_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 32))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_exported_enums_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 31))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_structure_reuse_preds_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 30))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_analysis_info_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 27))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 26))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_complexity_proc_infos_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 25))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 24))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_used_modules_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 23))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_indirectly_imported_module_names_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 22))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_avail_module_map_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 21))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_table_struct_map_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 18))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_unused_arg_info_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 17))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 16))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 15))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_num_errors_2_p_0(
  MR_Word MI_3,
  MR_Integer * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_maybe_dependency_info_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 13))));
  }
}

void MR_CALL 
hlds__hlds_module__module_get_fact_table_file_names_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 12))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_foreign_body_codes_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 11))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_foreign_decl_codes_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 10))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_has_user_event_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 9))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_has_parallel_conj_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 8))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_exclusive_table_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 7))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_assertion_table_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_proc_requests_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_dump_hlds_base_file_name_2_p_0(
  MR_Word MI_3,
  MR_String * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_name_context_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_name_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 0))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_foreign_import_modules_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 0))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_const_struct_db_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 0))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_type_spec_info_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 0))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_instance_table_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 0))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 0))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 9))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_class_table_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 0))));

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1))));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_cons_table_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 8))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_mode_table_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_inst_table_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 6))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_no_tag_types_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 5))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_type_table_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 4))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_predicate_table_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 3))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_globals_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 2))));
}

void MR_CALL 
hlds__hlds_module__module_info_optimize_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15)
{
  {
    MR_Word Preds0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_0_14, (MR_Integer) 3))));
    MR_Word Preds_5;
    MR_Word InstTable0_6;
    MR_Word UserInstTable0_7;
    MR_Word UserInstTable_8;
    MR_Word InstTable_9;
    MR_Word Modes0_10;
    MR_Word Modes_11;
    MR_Word Ctors0_12;
    MR_Word Ctors_13;
    MR_Word STATE_VARIABLE_ModuleInfo_16_16;
    MR_Word STATE_VARIABLE_ModuleInfo_17_17;
    MR_Word STATE_VARIABLE_ModuleInfo_18_18;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_72;
    MR_Word Var_73;

    hlds__pred_table__predicate_table_optimize_2_p_0(Preds0_4, &Preds_5);
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_0_14, (MR_Integer) 0))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_0_14, (MR_Integer) 1))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_0_14, (MR_Integer) 2))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_0_14, (MR_Integer) 4))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_0_14, (MR_Integer) 5))));
    InstTable0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_0_14, (MR_Integer) 6))));
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_0_14, (MR_Integer) 7))));
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_0_14, (MR_Integer) 8))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_0_14, (MR_Integer) 9))));
    {
      STATE_VARIABLE_ModuleInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_16_16, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_16_16, 1) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_16_16, 2) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_16_16, 3) = ((MR_Box) (Preds_5));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_16_16, 4) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_16_16, 5) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_16_16, 6) = ((MR_Box) (InstTable0_6));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_16_16, 7) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_16_16, 8) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_16_16, 9) = ((MR_Box) (Var_47));
    }
    hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable0_6, &UserInstTable0_7);
    mercury__map__optimize_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable0_7, &UserInstTable_8);
    hlds__hlds_inst_mode__inst_table_set_user_insts_3_p_0(UserInstTable_8, InstTable0_6, &InstTable_9);
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_16_16, (MR_Integer) 0))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_16_16, (MR_Integer) 1))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_16_16, (MR_Integer) 2))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_16_16, (MR_Integer) 3))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_16_16, (MR_Integer) 4))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_16_16, (MR_Integer) 5))));
    Modes0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_16_16, (MR_Integer) 7))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_16_16, (MR_Integer) 8))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_16_16, (MR_Integer) 9))));
    {
      STATE_VARIABLE_ModuleInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_17_17, 0) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_17_17, 1) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_17_17, 2) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_17_17, 3) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_17_17, 4) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_17_17, 5) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_17_17, 6) = ((MR_Box) (InstTable_9));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_17_17, 7) = ((MR_Box) (Modes0_10));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_17_17, 8) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_17_17, 9) = ((MR_Box) (Var_73));
    }
    hlds__hlds_inst_mode__mode_table_optimize_2_p_0(Modes0_10, &Modes_11);
    hlds__hlds_module__module_info_set_mode_table_3_p_0(Modes_11, STATE_VARIABLE_ModuleInfo_17_17, &STATE_VARIABLE_ModuleInfo_18_18);
    Ctors0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleInfo_18_18, (MR_Integer) 8))));
    hlds__hlds_data__cons_table_optimize_2_p_0(Ctors0_12, &Ctors_13);
    hlds__hlds_module__module_info_set_cons_table_3_p_0(Ctors_13, STATE_VARIABLE_ModuleInfo_18_18, STATE_VARIABLE_ModuleInfo_15);
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_cons_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_18));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_mode_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_18));
    }
  }
}

static void MR_CALL 
hlds__hlds_module__module_info_init_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_AvailModuleMap_10;

    hlds__hlds_module__add_implicit_avail_module_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_AvailModuleMap_10);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_AvailModuleMap_10));
  }
}

static void MR_CALL 
hlds__hlds_module__module_info_init_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_AvailModuleMap_10;

    hlds__hlds_module__add_implicit_avail_module_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AvailModuleMap_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AvailModuleMap_10));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_init_6_p_0(
  MR_Word AugCompUnit_7,
  MR_String DumpBaseFileName_8,
  MR_Word Globals_9,
  MR_Word QualifierInfo_10,
  MR_Word MaybeRecompInfo_11,
  MR_Word * ModuleInfo_12)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 0))));
    MR_Word ModuleNameContext_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 1))));
    MR_Word SrcItemBlocks_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 3))));
    MR_Word DirectIntItemBlocks_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 4))));
    MR_Word IndirectIntItemBlocks_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 5))));
    MR_Word OptItemBlocks_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 6))));
    MR_Word IntForOptItemBlocks_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_7, (MR_Integer) 7))));
    MR_Word SpecialPredMaps_21;
    MR_Word ClassTable_22;
    MR_Word InstanceTable_23;
    MR_Word TypeSpecPreds_24;
    MR_Word TypeSpecForcePreds_25;
    MR_Word SpecMap_26;
    MR_Word PragmaMap_27;
    MR_Word TypeSpecInfo_28;
    MR_Word ConstStructDb_29;
    MR_Word ForeignImportModules_30;
    MR_Word PragmaExportedProcs_31;
    MR_Word ModuleSubInfo_32;
    MR_Word ProcRequests_33;
    MR_Word AssertionTable_34;
    MR_Word ExclusiveTable_35;
    MR_Word ForeignDeclInfo_38;
    MR_Word ForeignBodyInfo_39;
    MR_Word StratPreds_44;
    MR_Word UnusedArgInfo_45;
    MR_Word TablingStructMap_46;
    MR_Word LambdasPerContext_47;
    MR_Word AtomicsPerContext_48;
    MR_Word SrcImportDeps_49;
    MR_Word SrcUseDeps_50;
    MR_Word DirectIntImportDeps_51;
    MR_Word DirectIntUseDeps_52;
    MR_Word IndirectIntImportDeps_53;
    MR_Word IndirectIntUseDeps_54;
    MR_Word OptImportDeps_55;
    MR_Word OptUseDeps_56;
    MR_Word IntForOptImportDeps_57;
    MR_Word IntForOptUseDeps_58;
    MR_Word SrcImportDepsSet_59;
    MR_Word SrcUseDepsSet_60;
    MR_Word DirectIntImportDepsSet_61;
    MR_Word DirectIntUseDepsSet_62;
    MR_Word IndirectIntImportDepsSet_63;
    MR_Word IndirectIntUseDepsSet_64;
    MR_Word OptImportDepsSet_65;
    MR_Word OptUseDepsSet_66;
    MR_Word IntForOptImportDepsSet_67;
    MR_Word IntForOptUseDepsSet_68;
    MR_Word ImportedAvailModules_69;
    MR_Word UsedAvailModules_70;
    MR_Word OnlyUsedAvailModules_71;
    MR_Word AvailModuleMap0_72;
    MR_Word AvailModuleMap1_73;
    MR_Word AvailModuleMap_74;
    MR_Word IndirectlyImportedModules_75;
    MR_Word UsedModules_76;
    MR_Word ProcAnalysisKinds_79;
    MR_Word OpMode_80;
    MR_Word MakeAnalysisReg_81;
    MR_Word AnalysisInfo_82;
    MR_Word StructureReusePredIds_85;
    MR_Word EventSet_87;
    MR_Word OISUMap_88;
    MR_Word OISUProcs_89;
    MR_Word TypeRepnDecision_92;
    MR_Word ModuleRareInfo_93;
    MR_Word PredicateTable_94;
    MR_Word TypeTable_95;
    MR_Word NoTagTypes_96;
    MR_Word InstTable_97;
    MR_Word ModeTable_98;
    MR_Word CtorTable_99;
    MR_Word FieldNameTable_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_139;
    MR_Word Var_141;
    MR_Box conv1_AvailModuleMap1_73;
    MR_Box conv3_AvailModuleMap_74;
    MR_Word Var_135;
    MR_Word Var_136;

    Var_101 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
    Var_102 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
    Var_103 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
    {
      SpecialPredMaps_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SpecialPredMaps_21, 0) = ((MR_Box) (Var_101));
      MR_hl_field(MR_mktag(0), SpecialPredMaps_21, 1) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(0), SpecialPredMaps_21, 2) = ((MR_Box) (Var_103));
    }
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), &ClassTable_22);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_module_scalar_common_1[0]), &InstanceTable_23);
    mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &TypeSpecPreds_24);
    mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &TypeSpecForcePreds_25);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module_scalar_common_1[1]), &SpecMap_26);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module_scalar_common_1[2]), &PragmaMap_27);
    {
      TypeSpecInfo_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeSpecInfo_28, 0) = ((MR_Box) (TypeSpecPreds_24));
      MR_hl_field(MR_mktag(0), TypeSpecInfo_28, 1) = ((MR_Box) (TypeSpecForcePreds_25));
      MR_hl_field(MR_mktag(0), TypeSpecInfo_28, 2) = ((MR_Box) (SpecMap_26));
      MR_hl_field(MR_mktag(0), TypeSpecInfo_28, 3) = ((MR_Box) (PragmaMap_27));
    }
    hlds__const_struct__const_struct_db_init_2_p_0(Globals_9, &ConstStructDb_29);
    ForeignImportModules_30 = parse_tree__prog_data_foreign__init_foreign_import_modules_0_f_0();
    PragmaExportedProcs_31 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0));
    {
      ModuleSubInfo_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ModuleSubInfo_32, 0) = ((MR_Box) (SpecialPredMaps_21));
      MR_hl_field(MR_mktag(0), ModuleSubInfo_32, 1) = ((MR_Box) (ClassTable_22));
      MR_hl_field(MR_mktag(0), ModuleSubInfo_32, 2) = ((MR_Box) (InstanceTable_23));
      MR_hl_field(MR_mktag(0), ModuleSubInfo_32, 3) = ((MR_Box) (TypeSpecInfo_28));
      MR_hl_field(MR_mktag(0), ModuleSubInfo_32, 4) = ((MR_Box) (ConstStructDb_29));
      MR_hl_field(MR_mktag(0), ModuleSubInfo_32, 5) = ((MR_Box) (ForeignImportModules_30));
      MR_hl_field(MR_mktag(0), ModuleSubInfo_32, 6) = ((MR_Box) (PragmaExportedProcs_31));
    }
    check_hlds__proc_requests__init_requests_1_p_0(&ProcRequests_33);
    hlds__hlds_promise__assertion_table_init_1_p_0(&AssertionTable_34);
    hlds__hlds_promise__exclusive_table_init_1_p_0(&ExclusiveTable_35);
    ForeignDeclInfo_38 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0));
    ForeignBodyInfo_39 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0));
    mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &StratPreds_44);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module_scalar_common_1[3]), &UnusedArgInfo_45);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0), &TablingStructMap_46);
    mercury__map__init_1_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), &LambdasPerContext_47);
    mercury__map__init_1_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), &AtomicsPerContext_48);
    parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0), Globals_9, SrcItemBlocks_16, &SrcImportDeps_49, &SrcUseDeps_50);
    parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0), Globals_9, DirectIntItemBlocks_17, &DirectIntImportDeps_51, &DirectIntUseDeps_52);
    parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0), Globals_9, IndirectIntItemBlocks_18, &IndirectIntImportDeps_53, &IndirectIntUseDeps_54);
    parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0), Globals_9, OptItemBlocks_19, &OptImportDeps_55, &OptUseDeps_56);
    parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0), Globals_9, IntForOptItemBlocks_20, &IntForOptImportDeps_57, &IntForOptUseDeps_58);
    Var_104 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), SrcImportDeps_49);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_104, &SrcImportDepsSet_59);
    Var_105 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), SrcUseDeps_50);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_105, &SrcUseDepsSet_60);
    Var_106 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), DirectIntImportDeps_51);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_106, &DirectIntImportDepsSet_61);
    Var_107 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), DirectIntUseDeps_52);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_107, &DirectIntUseDepsSet_62);
    Var_108 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IndirectIntImportDeps_53);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_108, &IndirectIntImportDepsSet_63);
    Var_109 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IndirectIntUseDeps_54);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_109, &IndirectIntUseDepsSet_64);
    Var_110 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), OptImportDeps_55);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_110, &OptImportDepsSet_65);
    Var_111 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), OptUseDeps_56);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_111, &OptUseDepsSet_66);
    Var_112 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntForOptImportDeps_57);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_112, &IntForOptImportDepsSet_67);
    Var_113 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntForOptUseDeps_58);
    mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_113, &IntForOptUseDepsSet_68);
    {
      Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (IntForOptImportDepsSet_67));
      MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (OptImportDepsSet_65));
      MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) (Var_118));
    }
    {
      Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (IndirectIntImportDepsSet_63));
      MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_117));
    }
    {
      Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (DirectIntImportDepsSet_61));
      MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_116));
    }
    {
      Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (SrcImportDepsSet_59));
      MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_115));
    }
    ImportedAvailModules_69 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_114);
    {
      Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (IntForOptUseDepsSet_68));
      MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (IntForOptImportDepsSet_67));
      MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (Var_129));
    }
    {
      Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (OptUseDepsSet_66));
      MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (Var_128));
    }
    {
      Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (OptImportDepsSet_65));
      MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_127));
    }
    {
      Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (IndirectIntUseDepsSet_64));
      MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_126));
    }
    {
      Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (IndirectIntImportDepsSet_63));
      MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_125));
    }
    {
      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (DirectIntUseDepsSet_62));
      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_124));
    }
    {
      Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (DirectIntImportDepsSet_61));
      MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_123));
    }
    {
      Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (SrcUseDepsSet_60));
      MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_122));
    }
    {
      Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (SrcImportDepsSet_59));
      MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_121));
    }
    UsedAvailModules_70 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_120);
    OnlyUsedAvailModules_71 = mercury__set__difference_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), UsedAvailModules_70, ImportedAvailModules_69);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), &AvailModuleMap0_72);
    mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module_scalar_common_2[0]), (MR_Word) (&hlds__hlds_module_scalar_common_4[0]), ImportedAvailModules_69, ((MR_Box) (AvailModuleMap0_72)), &conv1_AvailModuleMap1_73);
    AvailModuleMap1_73 = ((MR_Word) (conv1_AvailModuleMap1_73));
    mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module_scalar_common_2[0]), (MR_Word) (&hlds__hlds_module_scalar_common_4[1]), OnlyUsedAvailModules_71, ((MR_Box) (AvailModuleMap1_73)), &conv3_AvailModuleMap_74);
    AvailModuleMap_74 = ((MR_Word) (conv3_AvailModuleMap_74));
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IndirectlyImportedModules_75);
    UsedModules_76 = parse_tree__prog_data_used_modules__used_modules_init_0_f_0();
    mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), &ProcAnalysisKinds_79);
    libs__globals__get_op_mode_2_p_0(Globals_9, &OpMode_80);
    succeeded = ((MR_tag((MR_Word) OpMode_80)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_80, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_135)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_135, (MR_Integer) 0))));
        succeeded = (Var_136 == (MR_Word) ((MR_Unsigned) 8U));
      }
    }
    if (succeeded)
      MakeAnalysisReg_81 = (MR_Integer) 1;
    else
      MakeAnalysisReg_81 = (MR_Integer) 0;
    AnalysisInfo_82 = analysis__init_analysis_info_3_f_0((MR_Word) (&hlds__hlds_module_scalar_common_1[4]), ((MR_Box) ((MR_Integer) 0)), ModuleName_13, MakeAnalysisReg_81);
    mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &StructureReusePredIds_85);
    Var_139 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
    {
      EventSet_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), EventSet_87, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), EventSet_87, 1) = ((MR_Box) (Var_139));
    }
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0), &OISUMap_88);
    mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &OISUProcs_89);
    Var_141 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_module_scalar_common_1[5]));
    {
      TypeRepnDecision_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeRepnDecision_92, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), TypeRepnDecision_92, 1) = ((MR_Box) (Var_141));
      MR_hl_field(MR_mktag(0), TypeRepnDecision_92, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), TypeRepnDecision_92, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ModuleRareInfo_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 38 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 0) = ((MR_Box) (ModuleName_13));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 1) = ((MR_Box) (ModuleNameContext_14));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 2) = ((MR_Box) (DumpBaseFileName_8));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 3) = ((MR_Box) (QualifierInfo_10));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 4) = ((MR_Box) (MaybeRecompInfo_11));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 5) = ((MR_Box) (ProcRequests_33));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 6) = ((MR_Box) (AssertionTable_34));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 7) = ((MR_Box) (ExclusiveTable_35));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 8) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 9) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 10) = ((MR_Box) (ForeignDeclInfo_38));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 11) = ((MR_Box) (ForeignBodyInfo_39));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 12) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 13) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 14) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 15) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 16) = ((MR_Box) (StratPreds_44));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 17) = ((MR_Box) (UnusedArgInfo_45));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 18) = ((MR_Box) (TablingStructMap_46));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 19) = ((MR_Box) (LambdasPerContext_47));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 20) = ((MR_Box) (AtomicsPerContext_48));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 21) = ((MR_Box) (AvailModuleMap_74));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 22) = ((MR_Box) (IndirectlyImportedModules_75));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 23) = ((MR_Box) (UsedModules_76));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 24) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 25) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 26) = ((MR_Box) (ProcAnalysisKinds_79));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 27) = ((MR_Box) (AnalysisInfo_82));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 28) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 29) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 30) = ((MR_Box) (StructureReusePredIds_85));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 31) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 32) = ((MR_Box) (EventSet_87));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 33) = ((MR_Box) (OISUMap_88));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 34) = ((MR_Box) (OISUProcs_89));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 35) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 36) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ModuleRareInfo_93, 37) = ((MR_Box) (TypeRepnDecision_92));
    }
    hlds__pred_table__predicate_table_init_1_p_0(&PredicateTable_94);
    TypeTable_95 = hlds__hlds_data__init_type_table_0_f_0();
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0), &NoTagTypes_96);
    hlds__hlds_inst_mode__inst_table_init_1_p_0(&InstTable_97);
    hlds__hlds_inst_mode__mode_table_init_1_p_0(&ModeTable_98);
    CtorTable_99 = hlds__hlds_data__init_cons_table_0_f_0();
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module_scalar_common_1[6]), &FieldNameTable_100);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *ModuleInfo_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleSubInfo_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleRareInfo_93));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Globals_9));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (PredicateTable_94));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (TypeTable_95));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (NoTagTypes_96));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (InstTable_97));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ModeTable_98));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (CtorTable_99));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (FieldNameTable_100));
    }
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____avail_module_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____avail_module_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____avail_module_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____avail_module_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____avail_module_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____avail_module_entry_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____avail_module_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____avail_module_entry_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____avail_module_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____avail_module_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____avail_module_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____avail_module_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____complexity_arg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____complexity_arg_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____complexity_arg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____complexity_arg_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____complexity_arg_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____complexity_arg_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____complexity_arg_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____complexity_arg_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____complexity_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____complexity_proc_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____complexity_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____complexity_proc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____complexity_proc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____complexity_proc_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____complexity_proc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____complexity_proc_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____direct_arg_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____direct_arg_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____direct_arg_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____direct_arg_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____exported_enum_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____exported_enum_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____exported_enum_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____exported_enum_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____item_foreign_enum_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____item_foreign_enum_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____item_foreign_enum_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____item_foreign_enum_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____item_foreign_export_enum_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____item_foreign_export_enum_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____item_foreign_export_enum_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____item_foreign_export_enum_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____module_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____module_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____module_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____module_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____module_rare_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____module_rare_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____module_rare_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____module_rare_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____module_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____module_sub_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____module_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____module_sub_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____oisu_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____oisu_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____oisu_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____oisu_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____oisu_preds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____oisu_preds_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____oisu_preds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____oisu_preds_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____pragma_exported_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____pragma_exported_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____pragma_exported_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____pragma_exported_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____proc_analysis_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____proc_analysis_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____proc_analysis_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____proc_analysis_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____table_struct_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____table_struct_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____table_struct_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____table_struct_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____table_struct_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____table_struct_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____table_struct_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____table_struct_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____type_ctor_gen_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____type_ctor_gen_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____type_ctor_gen_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____type_ctor_gen_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____type_repn_decision_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____type_repn_decision_data_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____type_repn_decision_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____type_repn_decision_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____type_spec_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____type_spec_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____type_spec_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____type_spec_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____unused_arg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_module____Unify____unused_arg_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__hlds_module____Compare____unused_arg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__hlds_module____Compare____unused_arg_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__hlds_module__init(void)
{
}

void mercury__hlds__hlds_module__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_map_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_kind_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_proc_info_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_proc_map_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_direct_arg_map_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_item_foreign_enum_info_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_item_foreign_export_enum_info_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_rare_info_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_sub_info_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_map_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_map_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_type_ctor_gen_info_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_type_repn_decision_data_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_type_spec_info_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_unused_arg_info_0);
}

void mercury__hlds__hlds_module__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_module__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_module.
