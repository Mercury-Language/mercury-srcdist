/*
** Automatically generated from `hlds_module.m'
** by the Mercury compiler,
** version rotd-2023-04-08
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
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
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




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

static const MR_DuArgLocn hlds__hlds_module__hlds__hlds_module__field_locns_complexity_arg_info_0_0[2];

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_complexity_arg_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_complexity_arg_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_complexity_arg_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_complexity_arg_info_0[1];

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_complexity_arg_info_0[1];

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_complexity_arg_kind_0_0;

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_complexity_arg_kind_0_1;

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_complexity_arg_kind_0_2;

static const MR_EnumFunctorDescPtr hlds__hlds_module__hlds__hlds_module__enum_ordinal_ordered_complexity_arg_kind_0[3];

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

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_direct_arg_proc_0_0[1];

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_direct_arg_proc_0_0[1];

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_direct_arg_proc_0_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_direct_arg_proc_0_1[2];

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_direct_arg_proc_0_1[2];

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_direct_arg_proc_0_1;

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_direct_arg_proc_0_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_direct_arg_proc_0_1[1];

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_direct_arg_proc_0[2];

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_direct_arg_proc_0[2];

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_direct_arg_proc_0[2];

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_module__type_ctor_info_direct_arg_proc_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_data__type_ctor_info_constructor_repn_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_exported_enum_info_0_0[5];

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_exported_enum_info_0_0[5];

static const MR_DuArgLocn hlds__hlds_module__hlds__hlds_module__field_locns_exported_enum_info_0_0[5];

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_exported_enum_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_exported_enum_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_exported_enum_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_exported_enum_info_0[1];

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_exported_enum_info_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_no_tag_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mode_ctor_0hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_cons__type_ctor_info_inner_cons_entry_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_cons__type_ctor_info_inner_cons_entry_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0;

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_module_info_0_0[10];

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_module_info_0_0[10];

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_module_info_0_0;

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_module_info_0_0[1];

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_module_info_0[1];

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_module_info_0[1];

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_module_info_0[1];

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_include_module_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__maybe__ti_maybe_1recompilation__type_ctor_info_recompilation_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__libs__dependency_graph__ti_dependency_info_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__maybe__ti_maybe_1libs__dependency_graph__ti_dependency_info_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_type_ctor_gen_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_module__type_ctor_info_table_struct_info_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2term_context__type_ctor_info_term_context_0counter__type_ctor_info_counter_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__maybe__ti_maybe_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_complexity_proc_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__set_ordlist__ti_set_ordlist_1hlds__hlds_module__type_ctor_info_proc_analysis_kind_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_exported_enum_info_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_module__type_ctor_info_oisu_preds_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_module_rare_info_0_0[44];

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_module_rare_info_0_0[44];

static const MR_DuArgLocn hlds__hlds_module__hlds__hlds_module__field_locns_module_rare_info_0_0[44];

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

static const MR_DuArgLocn hlds__hlds_module__hlds__hlds_module__field_locns_pragma_exported_proc_0_0[5];

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

static const MR_EnumFunctorDescPtr hlds__hlds_module__hlds__hlds_module__enum_ordinal_ordered_proc_analysis_kind_0[7];

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

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_VA_TypeInfo_Struct2 hlds__hlds_module____vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1__vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0;

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
hlds__hlds_module__get_unique_pred_proc_id_for_pred_sym_name_arity_3_p_0(
  MR_Word MI_4,
  MR_Word SNA_5,
  MR_Word * PredProcId_6);

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
hlds__hlds_module__module_info_get_indirectly_imported_module_names_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4);

static void MR_CALL 
hlds__hlds_module__combine_old_new_avail_attrs_6_p_0(
  MR_Word OldSection_7,
  MR_Word NewSection_8,
  MR_Word OldImportOrUse_9,
  MR_Word NewImportOrUse_10,
  MR_Word * Section_11,
  MR_Word * ImportOrUse_12);

static void MR_CALL 
hlds__hlds_module__module_info_set_loop_invs_per_context_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7);

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
hlds__hlds_module__module_info_init_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_module__add_implicit_avail_module_4_p_0(
  MR_Word ImportOrUse_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_AvailModuleMap_0_9,
  MR_Word * STATE_VARIABLE_AvailModuleMap_10);

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
hlds__hlds_module____Unify____direct_arg_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____direct_arg_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__hlds_module____Unify____direct_arg_proc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_module____Compare____direct_arg_proc_map_0_0_10001(
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


static /* final */ const MR_Box hlds__hlds_module_scalar_common_1[32][2];

static /* final */ const MR_Box hlds__hlds_module_scalar_common_2[19][3];

static /* final */ const MR_Box hlds__hlds_module_scalar_common_3[2][4];

static /* final */ const MR_Box hlds__hlds_module_scalar_common_4[1][7];

static /* final */ const MR_Box hlds__hlds_module_scalar_common_5[1][6];




static /* final */ const MR_Box hlds__hlds_module_scalar_common_1[32][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   4 */
  {
    ((MR_Box) (base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_module_scalar_common_2[1]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row  14 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0))
  },
  /* row  15 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0))
  },
  /* row  16 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0))
  },
  /* row  17 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row  18 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0))
  },
  /* row  19 */
  {
    ((MR_Box) (&libs__dependency_graph__libs__dependency_graph__type_ctor_info_dependency_info_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row  20 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_module_scalar_common_1[19]))
  },
  /* row  21 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_type_ctor_gen_info_0))
  },
  /* row  22 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row  23 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row  24 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_module_scalar_common_2[12]))
  },
  /* row  25 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_proc_info_0))
  },
  /* row  26 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0))
  },
  /* row  27 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0))
  },
  /* row  28 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row  29 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row  30 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_module_scalar_common_3[0]))
  },
  /* row  31 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0))
  },
};

static /* final */ const MR_Box hlds__hlds_module_scalar_common_2[19][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_module_scalar_common_1[12]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_direct_arg_proc_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_module_scalar_common_1[6]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module_scalar_common_1[3]))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module_scalar_common_2[2]))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0))
  },
  /* row  14 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0))
  },
  /* row  15 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_module_scalar_common_1[0]))
  },
  /* row  16 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_module_scalar_common_1[29]))
  },
  /* row  17 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module_scalar_common_1[1]))
  },
  /* row  18 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module_scalar_common_1[2]))
  },
};

static /* final */ const MR_Box hlds__hlds_module_scalar_common_3[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__hlds_module_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_module__module_info_init_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box hlds__hlds_module_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_import_or_use_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_module__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_hlds__hlds_module__type_ctor_info_avail_module_entry_0)),
    ((MR_Box) (&hlds__hlds_module__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_hlds__hlds_module__type_ctor_info_avail_module_entry_0))
  },
};

static /* final */ const MR_Box hlds__hlds_module_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



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
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
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
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_avail_module_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____avail_module_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____avail_module_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "avail_module",
  { hlds__hlds_module__hlds__hlds_module__du_name_ordered_avail_module_0 },
  { hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_avail_module_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_module__hlds__hlds_module__functor_number_map_avail_module_0,

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
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_avail_module_entry_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____avail_module_entry_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____avail_module_entry_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "avail_module_entry",
  { hlds__hlds_module__hlds__hlds_module__du_name_ordered_avail_module_entry_0 },
  { hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_avail_module_entry_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_module__hlds__hlds_module__functor_number_map_avail_module_entry_0,

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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_module____Unify____avail_module_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____avail_module_map_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "avail_module_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0hlds__hlds_module__type_ctor_info_avail_module_entry_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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

static const MR_DuArgLocn hlds__hlds_module__hlds__hlds_module__field_locns_complexity_arg_info_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_complexity_arg_info_0_0 = {
  (MR_String) "complexity_arg_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_module__hlds__hlds_module__field_types_complexity_arg_info_0_0,
  hlds__hlds_module__hlds__hlds_module__field_names_complexity_arg_info_0_0,
  hlds__hlds_module__hlds__hlds_module__field_locns_complexity_arg_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_complexity_arg_info_0_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_complexity_arg_info_0_0
};

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_complexity_arg_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_complexity_arg_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____complexity_arg_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____complexity_arg_info_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "complexity_arg_info",
  { hlds__hlds_module__hlds__hlds_module__du_name_ordered_complexity_arg_info_0 },
  { hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_complexity_arg_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_module__hlds__hlds_module__functor_number_map_complexity_arg_info_0,

};

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_complexity_arg_kind_0_0 = {
  (MR_String) "complexity_input_variable_size",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_complexity_arg_kind_0_1 = {
  (MR_String) "complexity_input_fixed_size",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_complexity_arg_kind_0_2 = {
  (MR_String) "complexity_output",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr hlds__hlds_module__hlds__hlds_module__enum_ordinal_ordered_complexity_arg_kind_0[3] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_module____Unify____complexity_arg_kind_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____complexity_arg_kind_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "complexity_arg_kind",
  { hlds__hlds_module__hlds__hlds_module__enum_name_ordered_complexity_arg_kind_0 },
  { hlds__hlds_module__hlds__hlds_module__enum_ordinal_ordered_complexity_arg_kind_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  hlds__hlds_module__hlds__hlds_module__functor_number_map_complexity_arg_kind_0,

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
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_complexity_proc_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____complexity_proc_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____complexity_proc_info_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "complexity_proc_info",
  { hlds__hlds_module__hlds__hlds_module__du_name_ordered_complexity_proc_info_0 },
  { hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_complexity_proc_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_module__hlds__hlds_module__functor_number_map_complexity_proc_info_0,

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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_module____Unify____complexity_proc_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____complexity_proc_map_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "complexity_proc_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_module__list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_direct_arg_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_module____Unify____direct_arg_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____direct_arg_map_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "direct_arg_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_direct_arg_proc_0_0[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0)
};

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_direct_arg_proc_0_0[1] = {
  (MR_String) "clone_daio_args"
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_direct_arg_proc_0_0 = {
  (MR_String) "direct_arg_clone_proc",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_module__hlds__hlds_module__field_types_direct_arg_proc_0_0,
  hlds__hlds_module__hlds__hlds_module__field_names_direct_arg_proc_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_direct_arg_proc_0_1[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__one_or_more__ti_one_or_more_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_direct_arg_proc_0_1[2] = {
  (MR_String) "problem_args",
  (MR_String) "no_problem_args"
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_direct_arg_proc_0_1 = {
  (MR_String) "direct_arg_problem_proc",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__hlds_module__hlds__hlds_module__field_types_direct_arg_proc_0_1,
  hlds__hlds_module__hlds__hlds_module__field_names_direct_arg_proc_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_direct_arg_proc_0_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_direct_arg_proc_0_0
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_direct_arg_proc_0_1[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_direct_arg_proc_0_1
};

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_direct_arg_proc_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_direct_arg_proc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_direct_arg_proc_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_name_ordered_direct_arg_proc_0[2] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_direct_arg_proc_0_0,
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_direct_arg_proc_0_1
};

static const MR_Integer hlds__hlds_module__hlds__hlds_module__functor_number_map_direct_arg_proc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_direct_arg_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____direct_arg_proc_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____direct_arg_proc_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "direct_arg_proc",
  { hlds__hlds_module__hlds__hlds_module__du_name_ordered_direct_arg_proc_0 },
  { hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_direct_arg_proc_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_module__hlds__hlds_module__functor_number_map_direct_arg_proc_0,

};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_module__type_ctor_info_direct_arg_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_direct_arg_proc_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_direct_arg_proc_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_module____Unify____direct_arg_proc_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____direct_arg_proc_map_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "direct_arg_proc_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_module__type_ctor_info_direct_arg_proc_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_exported_enum_info_0_0[5] = {
  (MR_String) "eei_type_ctor",
  (MR_String) "eei_constants",
  (MR_String) "eei_language",
  (MR_String) "eei_name_map",
  (MR_String) "eei_context"
};

static const MR_DuArgLocn hlds__hlds_module__hlds__hlds_module__field_locns_exported_enum_info_0_0[5] = {
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
    (MR_Integer) 2
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

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_exported_enum_info_0_0 = {
  (MR_String) "exported_enum_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_module__hlds__hlds_module__field_types_exported_enum_info_0_0,
  hlds__hlds_module__hlds__hlds_module__field_names_exported_enum_info_0_0,
  hlds__hlds_module__hlds__hlds_module__field_locns_exported_enum_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_exported_enum_info_0_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_exported_enum_info_0_0
};

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_exported_enum_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_exported_enum_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____exported_enum_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____exported_enum_info_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "exported_enum_info",
  { hlds__hlds_module__hlds__hlds_module__du_name_ordered_exported_enum_info_0 },
  { hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_exported_enum_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_module__hlds__hlds_module__functor_number_map_exported_enum_info_0,

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

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mode_ctor_0hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_cons__type_ctor_info_inner_cons_entry_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_inner_cons_entry_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_cons__type_ctor_info_inner_cons_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&hlds__hlds_module__list__ti_list_1hlds__hlds_cons__type_ctor_info_inner_cons_entry_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&hlds__hlds_module__list__ti_list_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0)
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
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mode_ctor_0hlds__hlds_inst_mode__type_ctor_info_hlds_mode_defn_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_cons__type_ctor_info_inner_cons_entry_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1hlds__hlds_cons__type_ctor_info_hlds_ctor_field_defn_0)
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
  INT16_C(10),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_module_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____module_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____module_info_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "module_info",
  { hlds__hlds_module__hlds__hlds_module__du_name_ordered_module_info_0 },
  { hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_module_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_module__hlds__hlds_module__functor_number_map_module_info_0,

};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_include_module_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)
  }
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

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0)
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

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2term_context__type_ctor_info_term_context_0counter__type_ctor_info_counter_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
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

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_module_rare_info_0_0[44] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__prog_item__type_ctor_info_include_module_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__module_qual__parse_tree__module_qual__type_ctor_info_partial_qualifier_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__maybe__ti_maybe_1recompilation__type_ctor_info_recompilation_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__proc_requests__check_hlds__proc_requests__type_ctor_info_proc_requests_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_assertion_table_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_id_0list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_module__type_ctor_info_direct_arg_proc_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_has_parallel_conj_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_has_user_event_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__cord__ti_cord_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__maybe__ti_maybe_1libs__dependency_graph__ti_dependency_info_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_type_ctor_gen_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_module__type_ctor_info_table_struct_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2term_context__type_ctor_info_term_context_0counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2term_context__type_ctor_info_term_context_0counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2term_context__type_ctor_info_term_context_0counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0hlds__hlds_module__type_ctor_info_avail_module_entry_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_modules_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__maybe__ti_maybe_1pair__ti_pair_2builtin__type_ctor_info_int_0tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_complexity_proc_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__set_ordlist__ti_set_ordlist_1hlds__hlds_module__type_ctor_info_proc_analysis_kind_0),
  (MR_PseudoTypeInfo) (&analysis__analysis__type_ctor_info_analysis_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_pred_target_names_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_pred_target_names_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1hlds__hlds_module__type_ctor_info_exported_enum_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_set_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_module__type_ctor_info_oisu_preds_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_type_repn_decision_data_0)
};

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_module_rare_info_0_0[44] = {
  (MR_String) "mri_module_name",
  (MR_String) "mri_module_name_context",
  (MR_String) "mri_dump_base_file_name",
  (MR_String) "mri_include_module_map",
  (MR_String) "mri_partial_qualifier_info",
  (MR_String) "mri_maybe_recompilation_info",
  (MR_String) "mri_proc_requests",
  (MR_String) "mri_assertion_table",
  (MR_String) "mri_exclusive_table",
  (MR_String) "mri_direct_arg_proc_map",
  (MR_String) "mri_has_parallel_conj",
  (MR_String) "mri_has_user_event",
  (MR_String) "mri_foreign_decl_codes_user",
  (MR_String) "mri_foreign_decl_codes_aux",
  (MR_String) "mri_foreign_body_codes",
  (MR_String) "mri_fact_table_file_names",
  (MR_String) "mri_int_bad_clauses",
  (MR_String) "mri_maybe_dependency_info",
  (MR_String) "mri_type_ctor_gen_infos",
  (MR_String) "mri_must_be_stratified_preds",
  (MR_String) "mri_unused_arg_info",
  (MR_String) "mri_table_struct_map",
  (MR_String) "mri_lambdas_per_context",
  (MR_String) "mri_atomics_per_context",
  (MR_String) "mri_loop_invs_per_context",
  (MR_String) "mri_avail_module_map",
  (MR_String) "mri_indirectly_imported_module_names",
  (MR_String) "mri_used_modules",
  (MR_String) "mri_ancestor_avail_modules",
  (MR_String) "mri_maybe_complexity_proc_map",
  (MR_String) "mri_complexity_proc_infos",
  (MR_String) "mri_proc_analysis_kinds",
  (MR_String) "mri_analysis_info",
  (MR_String) "mri_user_init_pred_target_names",
  (MR_String) "mri_user_final_pred_target_names",
  (MR_String) "mri_structure_reuse_preds",
  (MR_String) "mri_format_call_pragma_preds",
  (MR_String) "mri_exported_enums",
  (MR_String) "mri_event_set",
  (MR_String) "mri_oisu_map",
  (MR_String) "mri_oisu_procs",
  (MR_String) "mri_ts_string_table_size",
  (MR_String) "mri_ts_rev_string_table",
  (MR_String) "mri_type_repn_dec"
};

static const MR_DuArgLocn hlds__hlds_module__hlds__hlds_module__field_locns_module_rare_info_0_0[44] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 13,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 15,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 16,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 17,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 18,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 19,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 20,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 21,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 22,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 23,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 24,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 25,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 26,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 27,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 28,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 29,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 30,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 31,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 32,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 33,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 34,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 35,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 36,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 37,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 38,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 39,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 40,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 41,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 42,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_module_rare_info_0_0 = {
  (MR_String) "module_rare_info",
  INT16_C(44),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_module__hlds__hlds_module__field_types_module_rare_info_0_0,
  hlds__hlds_module__hlds__hlds_module__field_names_module_rare_info_0_0,
  hlds__hlds_module__hlds__hlds_module__field_locns_module_rare_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_module_rare_info_0_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_module_rare_info_0_0
};

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_module_rare_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_module_rare_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____module_rare_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____module_rare_info_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "module_rare_info",
  { hlds__hlds_module__hlds__hlds_module__du_name_ordered_module_rare_info_0 },
  { hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_module_rare_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_module__hlds__hlds_module__functor_number_map_module_rare_info_0,

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
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_c_j_cs_fims_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__cord__ti_cord_1hlds__hlds_module__type_ctor_info_pragma_exported_proc_0)
};

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_module_sub_info_0_0[7] = {
  (MR_String) "msi_special_pred_maps",
  (MR_String) "msi_class_table",
  (MR_String) "msi_instance_table",
  (MR_String) "msi_type_spec_info",
  (MR_String) "msi_const_struct_db",
  (MR_String) "msi_c_j_cs_fims",
  (MR_String) "msi_pragma_exported_procs"
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_module_sub_info_0_0 = {
  (MR_String) "module_sub_info",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_module_sub_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____module_sub_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____module_sub_info_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "module_sub_info",
  { hlds__hlds_module__hlds__hlds_module__du_name_ordered_module_sub_info_0 },
  { hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_module_sub_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_module__hlds__hlds_module__functor_number_map_module_sub_info_0,

};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_module____Unify____oisu_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____oisu_map_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "oisu_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_module__type_ctor_info_oisu_preds_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_oisu_preds_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____oisu_preds_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____oisu_preds_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "oisu_preds",
  { hlds__hlds_module__hlds__hlds_module__du_name_ordered_oisu_preds_0 },
  { hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_oisu_preds_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_module__hlds__hlds_module__functor_number_map_oisu_preds_0,

};

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_pragma_exported_proc_0_0[5] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuArgLocn hlds__hlds_module__hlds__hlds_module__field_locns_pragma_exported_proc_0_0[5] = {
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
  }
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_pragma_exported_proc_0_0 = {
  (MR_String) "pragma_exported_proc",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__hlds_module__hlds__hlds_module__field_types_pragma_exported_proc_0_0,
  NULL,
  hlds__hlds_module__hlds__hlds_module__field_locns_pragma_exported_proc_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__hlds_module__hlds__hlds_module__du_stag_ordered_pragma_exported_proc_0_0[1] = {
  &hlds__hlds_module__hlds__hlds_module__du_functor_desc_pragma_exported_proc_0_0
};

static const MR_DuPtagLayout hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_pragma_exported_proc_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_pragma_exported_proc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____pragma_exported_proc_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____pragma_exported_proc_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "pragma_exported_proc",
  { hlds__hlds_module__hlds__hlds_module__du_name_ordered_pragma_exported_proc_0 },
  { hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_pragma_exported_proc_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_module__hlds__hlds_module__functor_number_map_pragma_exported_proc_0,

};

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_0 = {
  (MR_String) "pak_exception",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_1 = {
  (MR_String) "pak_trailing",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_2 = {
  (MR_String) "pak_mm_tabling",
  INT32_C(2)
};

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_3 = {
  (MR_String) "pak_termination",
  INT32_C(3)
};

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_4 = {
  (MR_String) "pak_termination2",
  INT32_C(4)
};

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_5 = {
  (MR_String) "pak_structure_sharing",
  INT32_C(5)
};

static const MR_EnumFunctorDesc hlds__hlds_module__hlds__hlds_module__enum_functor_desc_proc_analysis_kind_0_6 = {
  (MR_String) "pak_structure_reuse",
  INT32_C(6)
};

static const MR_EnumFunctorDescPtr hlds__hlds_module__hlds__hlds_module__enum_ordinal_ordered_proc_analysis_kind_0[7] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_module____Unify____proc_analysis_kind_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____proc_analysis_kind_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "proc_analysis_kind",
  { hlds__hlds_module__hlds__hlds_module__enum_name_ordered_proc_analysis_kind_0 },
  { hlds__hlds_module__hlds__hlds_module__enum_ordinal_ordered_proc_analysis_kind_0 },
  (MR_Integer) 7,
  UINT16_C(12),
  hlds__hlds_module__hlds__hlds_module__functor_number_map_proc_analysis_kind_0,

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
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_table_struct_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____table_struct_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____table_struct_info_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "table_struct_info",
  { hlds__hlds_module__hlds__hlds_module__du_name_ordered_table_struct_info_0 },
  { hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_table_struct_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_module__hlds__hlds_module__functor_number_map_table_struct_info_0,

};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_module____Unify____table_struct_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____table_struct_map_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "table_struct_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_module__type_ctor_info_table_struct_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_type_ctor_gen_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____type_ctor_gen_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____type_ctor_gen_info_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "type_ctor_gen_info",
  { hlds__hlds_module__hlds__hlds_module__du_name_ordered_type_ctor_gen_info_0 },
  { hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_type_ctor_gen_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_module__hlds__hlds_module__functor_number_map_type_ctor_gen_info_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_module__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)
  }
};

static const MR_VA_TypeInfo_Struct2 hlds__hlds_module____vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1__vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_module____vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__hlds_module__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0)
  }
};

static const MR_PseudoTypeInfo hlds__hlds_module__hlds__hlds_module__field_types_type_repn_decision_data_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0list__ti_list_1parse_tree__prog_data__type_ctor_info_sym_name_arity_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1__vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0)
};

static const MR_ConstString hlds__hlds_module__hlds__hlds_module__field_names_type_repn_decision_data_0_0[4] = {
  (MR_String) "trdd_type_repns",
  (MR_String) "trdd_direct_arg_map",
  (MR_String) "trdd_foreign_enums",
  (MR_String) "trdd_foreign_exports"
};

static const MR_DuFunctorDesc hlds__hlds_module__hlds__hlds_module__du_functor_desc_type_repn_decision_data_0_0 = {
  (MR_String) "type_repn_decision_data",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_type_repn_decision_data_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____type_repn_decision_data_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____type_repn_decision_data_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "type_repn_decision_data",
  { hlds__hlds_module__hlds__hlds_module__du_name_ordered_type_repn_decision_data_0 },
  { hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_type_repn_decision_data_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_module__hlds__hlds_module__functor_number_map_type_repn_decision_data_0,

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
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__hlds_module__hlds__hlds_module__du_stag_ordered_type_spec_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_module____Unify____type_spec_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____type_spec_info_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "type_spec_info",
  { hlds__hlds_module__hlds__hlds_module__du_name_ordered_type_spec_info_0 },
  { hlds__hlds_module__hlds__hlds_module__du_ptag_ordered_type_spec_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__hlds_module__hlds__hlds_module__functor_number_map_type_spec_info_0,

};

const MR_TypeCtorInfo_Struct hlds__hlds_module__hlds__hlds_module__type_ctor_info_unused_arg_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_module____Unify____unused_arg_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_module____Compare____unused_arg_info_0_0_10001)),
  (MR_String) "hlds.hlds_module",
  (MR_String) "unused_arg_info",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__hlds_module__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
hlds__hlds_module____Compare____unused_arg_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[9]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____unused_arg_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[9]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
hlds__hlds_module____Compare____type_ctor_gen_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word SubResult1_6;

    parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
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
            MR_Word SubResult5_18;

            hlds__status____Compare____type_status_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              hlds__hlds_data____Compare____hlds_type_defn_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                  hlds__hlds_pred____Compare____pred_proc_id_0_0(HeadVar__1_1, ArgX8_25, ArgY8_26);
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
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));

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

void MR_CALL 
hlds__hlds_module____Compare____table_struct_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[10]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____table_struct_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[10]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
hlds__hlds_module____Compare____table_struct_info_0_0(
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
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____proc_table_struct_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__prog_data_pragma____Compare____table_attributes_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____table_struct_info_0_0(
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
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = hlds__hlds_pred____Unify____proc_table_struct_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = parse_tree__prog_data_pragma____Unify____table_attributes_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_module____Compare____proc_analysis_kind_0_0(
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
hlds__hlds_module____Unify____proc_analysis_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__hlds_module____Compare____pragma_exported_proc_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_String ArgX4_13 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_String ArgY4_14 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
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

      hlds__hlds_pred____Compare____pred_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
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

          mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
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
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_String ArgX4_9 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_String ArgY4_10 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));

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
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX5_11, ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_module____Compare____oisu_preds_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____oisu_preds_0_0(
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

void MR_CALL 
hlds__hlds_module____Compare____oisu_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[13]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____oisu_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[13]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____module_sub_info_0_0(
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
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word SubResult1_6;

    hlds__special_pred____Compare____special_pred_maps_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[14]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[15]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          hlds__hlds_module____Compare____type_spec_info_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            hlds__const_struct____Compare____const_struct_db_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              parse_tree__prog_data_foreign____Compare____c_j_cs_fims_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
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
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));

    succeeded = hlds__special_pred____Unify____special_pred_maps_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_20_20 = (MR_Word) (&hlds__hlds_module_scalar_common_2[14]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_21_21 = (MR_Word) (&hlds__hlds_module_scalar_common_2[15]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          succeeded = hlds__hlds_module____Unify____type_spec_info_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = hlds__const_struct____Unify____const_struct_db_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              succeeded = parse_tree__prog_data_foreign____Unify____c_j_cs_fims_0_0(ArgX6_13, ArgY6_14);
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

void MR_CALL 
hlds__hlds_module____Compare____module_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_33 == CastY_34);
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
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))));
    MR_Word SubResult1_6;
    MR_Integer CastX_65 = (MR_Integer) (ArgX1_4);
    MR_Integer CastY_66 = (MR_Integer) (ArgY1_5);

    succeeded = (CastX_65 == CastY_66);
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
    {
      MR_Word ArgX1_45 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, (MR_Integer) 0))));
      MR_Word ArgY1_46 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, (MR_Integer) 0))));
      MR_Word ArgX2_48 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, (MR_Integer) 1))));
      MR_Word ArgY2_49 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, (MR_Integer) 1))));
      MR_Word ArgX3_51 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, (MR_Integer) 2))));
      MR_Word ArgY3_52 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, (MR_Integer) 2))));
      MR_Word ArgX4_54 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, (MR_Integer) 3))));
      MR_Word ArgY4_55 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, (MR_Integer) 3))));
      MR_Word ArgX5_57 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, (MR_Integer) 4))));
      MR_Word ArgY5_58 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, (MR_Integer) 4))));
      MR_Word ArgX6_60 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, (MR_Integer) 5))));
      MR_Word ArgY6_61 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, (MR_Integer) 5))));
      MR_Word ArgX7_63 = ((MR_Word) ((MR_hl_field(0, ArgX1_4, (MR_Integer) 6))));
      MR_Word ArgY7_64 = ((MR_Word) ((MR_hl_field(0, ArgY1_5, (MR_Integer) 6))));
      MR_Word SubResult1_47;

      hlds__special_pred____Compare____special_pred_maps_0_0(&SubResult1_47, ArgX1_45, ArgY1_46);
      succeeded = (SubResult1_47 != (MR_Integer) 0);
      if (succeeded)
      {
        SubResult1_6 = SubResult1_47;
        succeeded = (SubResult1_6 != (MR_Integer) 0);
      }
      else
      {
        MR_Word SubResult2_50;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[14]), &SubResult2_50, ((MR_Box) (ArgX2_48)), ((MR_Box) (ArgY2_49)));
        succeeded = (SubResult2_50 != (MR_Integer) 0);
        if (succeeded)
        {
          SubResult1_6 = SubResult2_50;
          succeeded = (SubResult1_6 != (MR_Integer) 0);
        }
        else
        {
          MR_Word SubResult3_53;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[15]), &SubResult3_53, ((MR_Box) (ArgX3_51)), ((MR_Box) (ArgY3_52)));
          succeeded = (SubResult3_53 != (MR_Integer) 0);
          if (succeeded)
          {
            SubResult1_6 = SubResult3_53;
            succeeded = (SubResult1_6 != (MR_Integer) 0);
          }
          else
          {
            MR_Word SubResult4_56;

            hlds__hlds_module____Compare____type_spec_info_0_0(&SubResult4_56, ArgX4_54, ArgY4_55);
            succeeded = (SubResult4_56 != (MR_Integer) 0);
            if (succeeded)
            {
              SubResult1_6 = SubResult4_56;
              succeeded = (SubResult1_6 != (MR_Integer) 0);
            }
            else
            {
              MR_Word SubResult5_59;

              hlds__const_struct____Compare____const_struct_db_0_0(&SubResult5_59, ArgX5_57, ArgY5_58);
              succeeded = (SubResult5_59 != (MR_Integer) 0);
              if (succeeded)
              {
                SubResult1_6 = SubResult5_59;
                succeeded = (SubResult1_6 != (MR_Integer) 0);
              }
              else
              {
                MR_Word SubResult6_62;

                parse_tree__prog_data_foreign____Compare____c_j_cs_fims_0_0(&SubResult6_62, ArgX6_60, ArgY6_61);
                succeeded = (SubResult6_62 != (MR_Integer) 0);
                if (succeeded)
                {
                  SubResult1_6 = SubResult6_62;
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                }
                else
                {
                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[7]), &SubResult1_6, ((MR_Box) (ArgX7_63)), ((MR_Box) (ArgY7_64)));
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                }
              }
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

      hlds__hlds_module____Compare____module_rare_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        libs__globals____Compare____globals_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          hlds__pred_table____Compare____predicate_table_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_type_table_0), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[6]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                hlds__hlds_inst_mode____Compare____inst_table_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_mode_table_0), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_cons_table_0), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
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

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[28]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[22]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[17]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[18]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
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
  MR_bool succeeded;
  MR_Integer CastX_135 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_136 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_135 == CastY_136);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))));
    MR_Word ArgX11_34 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY11_35 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 10))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX12_37 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))) & (MR_Integer) 1);
    MR_Word ArgY12_38 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 10))) & (MR_Integer) 1);
    MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 11))));
    MR_Word ArgX14_43 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))));
    MR_Word ArgY14_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 12))));
    MR_Word ArgX15_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))));
    MR_Word ArgY15_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 13))));
    MR_Word ArgX16_49 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))));
    MR_Word ArgY16_50 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 14))));
    MR_Word ArgX17_52 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 15))));
    MR_Word ArgY17_53 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 15))));
    MR_Word ArgX18_55 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 16))));
    MR_Word ArgY18_56 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 16))));
    MR_Word ArgX19_58 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 17))));
    MR_Word ArgY19_59 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 17))));
    MR_Word ArgX20_61 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 18))));
    MR_Word ArgY20_62 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 18))));
    MR_Word ArgX21_64 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 19))));
    MR_Word ArgY21_65 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 19))));
    MR_Word ArgX22_67 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 20))));
    MR_Word ArgY22_68 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 20))));
    MR_Word ArgX23_70 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 21))));
    MR_Word ArgY23_71 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 21))));
    MR_Word ArgX24_73 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 22))));
    MR_Word ArgY24_74 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 22))));
    MR_Word ArgX25_76 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 23))));
    MR_Word ArgY25_77 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 23))));
    MR_Word ArgX26_79 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 24))));
    MR_Word ArgY26_80 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 24))));
    MR_Word ArgX27_82 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 25))));
    MR_Word ArgY27_83 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 25))));
    MR_Word ArgX28_85 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 26))));
    MR_Word ArgY28_86 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 26))));
    MR_Word ArgX29_88 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 27))));
    MR_Word ArgY29_89 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 27))));
    MR_Word ArgX30_91 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 28))));
    MR_Word ArgY30_92 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 28))));
    MR_Word ArgX31_94 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 29))));
    MR_Word ArgY31_95 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 29))));
    MR_Word ArgX32_97 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 30))));
    MR_Word ArgY32_98 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 30))));
    MR_Word ArgX33_100 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 31))));
    MR_Word ArgY33_101 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 31))));
    MR_Word ArgX34_103 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 32))));
    MR_Word ArgY34_104 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 32))));
    MR_Word ArgX35_106 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 33))));
    MR_Word ArgY35_107 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 33))));
    MR_Word ArgX36_109 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 34))));
    MR_Word ArgY36_110 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 34))));
    MR_Word ArgX37_112 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 35))));
    MR_Word ArgY37_113 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 35))));
    MR_Word ArgX38_115 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 36))));
    MR_Word ArgY38_116 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 36))));
    MR_Word ArgX39_118 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 37))));
    MR_Word ArgY39_119 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 37))));
    MR_Word ArgX40_121 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 38))));
    MR_Word ArgY40_122 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 38))));
    MR_Word ArgX41_124 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 39))));
    MR_Word ArgY41_125 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 39))));
    MR_Integer ArgX42_127 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 40))));
    MR_Integer ArgY42_128 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 40))));
    MR_Word ArgX43_130 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 41))));
    MR_Word ArgY43_131 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 41))));
    MR_Word ArgX44_133 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 42))));
    MR_Word ArgY44_134 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 42))));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[8]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            parse_tree__module_qual____Compare____partial_qualifier_info_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[8]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                check_hlds__proc_requests____Compare____proc_requests_0_0(&SubResult7_24, ArgX7_22, ArgY7_23);
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  hlds__hlds_promise____Compare____assertion_table_0_0(&SubResult8_27, ArgX8_25, ArgY8_26);
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_exclusive_table_0), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[4]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;
                        MR_Integer Var_181 = (MR_Integer) (ArgX11_34);
                        MR_Integer Var_182 = (MR_Integer) (ArgY11_35);

                        succeeded = (Var_181 < Var_182);
                        if (succeeded)
                        {
                          SubResult11_36 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_181 > Var_182);
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
                          MR_Integer Var_183 = (MR_Integer) (ArgX12_37);
                          MR_Integer Var_184 = (MR_Integer) (ArgY12_38);

                          succeeded = (Var_183 < Var_184);
                          if (succeeded)
                          {
                            SubResult12_39 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_183 > Var_184);
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

                            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[15]), &SubResult13_42, ((MR_Box) (ArgX13_40)), ((MR_Box) (ArgY13_41)));
                            succeeded = (SubResult13_42 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;

                              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[15]), &SubResult14_45, ((MR_Box) (ArgX14_43)), ((MR_Box) (ArgY14_44)));
                              succeeded = (SubResult14_45 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Word SubResult15_48;

                                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[16]), &SubResult15_48, ((MR_Box) (ArgX15_46)), ((MR_Box) (ArgY15_47)));
                                succeeded = (SubResult15_48 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult15_48;
                                else
                                {
                                  MR_Word SubResult16_51;

                                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[17]), &SubResult16_51, ((MR_Box) (ArgX16_49)), ((MR_Box) (ArgY16_50)));
                                  succeeded = (SubResult16_51 != (MR_Integer) 0);
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult16_51;
                                  else
                                  {
                                    MR_Word SubResult17_54;

                                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[18]), &SubResult17_54, ((MR_Box) (ArgX17_52)), ((MR_Box) (ArgY17_53)));
                                    succeeded = (SubResult17_54 != (MR_Integer) 0);
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult17_54;
                                    else
                                    {
                                      MR_Word SubResult18_57;

                                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[20]), &SubResult18_57, ((MR_Box) (ArgX18_55)), ((MR_Box) (ArgY18_56)));
                                      succeeded = (SubResult18_57 != (MR_Integer) 0);
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult18_57;
                                      else
                                      {
                                        MR_Word SubResult19_60;

                                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[21]), &SubResult19_60, ((MR_Box) (ArgX19_58)), ((MR_Box) (ArgY19_59)));
                                        succeeded = (SubResult19_60 != (MR_Integer) 0);
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult19_60;
                                        else
                                        {
                                          MR_Word SubResult20_63;

                                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[22]), &SubResult20_63, ((MR_Box) (ArgX20_61)), ((MR_Box) (ArgY20_62)));
                                          succeeded = (SubResult20_63 != (MR_Integer) 0);
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult20_63;
                                          else
                                          {
                                            MR_Word SubResult21_66;

                                            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[9]), &SubResult21_66, ((MR_Box) (ArgX21_64)), ((MR_Box) (ArgY21_65)));
                                            succeeded = (SubResult21_66 != (MR_Integer) 0);
                                            if (succeeded)
                                              *HeadVar__1_1 = SubResult21_66;
                                            else
                                            {
                                              MR_Word SubResult22_69;

                                              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[10]), &SubResult22_69, ((MR_Box) (ArgX22_67)), ((MR_Box) (ArgY22_68)));
                                              succeeded = (SubResult22_69 != (MR_Integer) 0);
                                              if (succeeded)
                                                *HeadVar__1_1 = SubResult22_69;
                                              else
                                              {
                                                MR_Word SubResult23_72;

                                                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[11]), &SubResult23_72, ((MR_Box) (ArgX23_70)), ((MR_Box) (ArgY23_71)));
                                                succeeded = (SubResult23_72 != (MR_Integer) 0);
                                                if (succeeded)
                                                  *HeadVar__1_1 = SubResult23_72;
                                                else
                                                {
                                                  MR_Word SubResult24_75;

                                                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[11]), &SubResult24_75, ((MR_Box) (ArgX24_73)), ((MR_Box) (ArgY24_74)));
                                                  succeeded = (SubResult24_75 != (MR_Integer) 0);
                                                  if (succeeded)
                                                    *HeadVar__1_1 = SubResult24_75;
                                                  else
                                                  {
                                                    MR_Word SubResult25_78;

                                                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[11]), &SubResult25_78, ((MR_Box) (ArgX25_76)), ((MR_Box) (ArgY25_77)));
                                                    succeeded = (SubResult25_78 != (MR_Integer) 0);
                                                    if (succeeded)
                                                      *HeadVar__1_1 = SubResult25_78;
                                                    else
                                                    {
                                                      MR_Word SubResult26_81;

                                                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[0]), &SubResult26_81, ((MR_Box) (ArgX26_79)), ((MR_Box) (ArgY26_80)));
                                                      succeeded = (SubResult26_81 != (MR_Integer) 0);
                                                      if (succeeded)
                                                        *HeadVar__1_1 = SubResult26_81;
                                                      else
                                                      {
                                                        MR_Word SubResult27_84;

                                                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[23]), &SubResult27_84, ((MR_Box) (ArgX27_82)), ((MR_Box) (ArgY27_83)));
                                                        succeeded = (SubResult27_84 != (MR_Integer) 0);
                                                        if (succeeded)
                                                          *HeadVar__1_1 = SubResult27_84;
                                                        else
                                                        {
                                                          MR_Word SubResult28_87;

                                                          parse_tree__prog_data_used_modules____Compare____used_modules_0_0(&SubResult28_87, ArgX28_85, ArgY28_86);
                                                          succeeded = (SubResult28_87 != (MR_Integer) 0);
                                                          if (succeeded)
                                                            *HeadVar__1_1 = SubResult28_87;
                                                          else
                                                          {
                                                            MR_Word SubResult29_90;

                                                            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[23]), &SubResult29_90, ((MR_Box) (ArgX29_88)), ((MR_Box) (ArgY29_89)));
                                                            succeeded = (SubResult29_90 != (MR_Integer) 0);
                                                            if (succeeded)
                                                              *HeadVar__1_1 = SubResult29_90;
                                                            else
                                                            {
                                                              MR_Word SubResult30_93;

                                                              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[24]), &SubResult30_93, ((MR_Box) (ArgX30_91)), ((MR_Box) (ArgY30_92)));
                                                              succeeded = (SubResult30_93 != (MR_Integer) 0);
                                                              if (succeeded)
                                                                *HeadVar__1_1 = SubResult30_93;
                                                              else
                                                              {
                                                                MR_Word SubResult31_96;

                                                                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[25]), &SubResult31_96, ((MR_Box) (ArgX31_94)), ((MR_Box) (ArgY31_95)));
                                                                succeeded = (SubResult31_96 != (MR_Integer) 0);
                                                                if (succeeded)
                                                                  *HeadVar__1_1 = SubResult31_96;
                                                                else
                                                                {
                                                                  MR_Word SubResult32_99;

                                                                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[26]), &SubResult32_99, ((MR_Box) (ArgX32_97)), ((MR_Box) (ArgY32_98)));
                                                                  succeeded = (SubResult32_99 != (MR_Integer) 0);
                                                                  if (succeeded)
                                                                    *HeadVar__1_1 = SubResult32_99;
                                                                  else
                                                                  {
                                                                    MR_Word SubResult33_102;

                                                                    analysis____Compare____analysis_info_0_0(&SubResult33_102, ArgX33_100, ArgY33_101);
                                                                    succeeded = (SubResult33_102 != (MR_Integer) 0);
                                                                    if (succeeded)
                                                                      *HeadVar__1_1 = SubResult33_102;
                                                                    else
                                                                    {
                                                                      MR_Word SubResult34_105;

                                                                      parse_tree__prog_foreign____Compare____pred_target_names_0_0(&SubResult34_105, ArgX34_103, ArgY34_104);
                                                                      succeeded = (SubResult34_105 != (MR_Integer) 0);
                                                                      if (succeeded)
                                                                        *HeadVar__1_1 = SubResult34_105;
                                                                      else
                                                                      {
                                                                        MR_Word SubResult35_108;

                                                                        parse_tree__prog_foreign____Compare____pred_target_names_0_0(&SubResult35_108, ArgX35_106, ArgY35_107);
                                                                        succeeded = (SubResult35_108 != (MR_Integer) 0);
                                                                        if (succeeded)
                                                                          *HeadVar__1_1 = SubResult35_108;
                                                                        else
                                                                        {
                                                                          MR_Word SubResult36_111;

                                                                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[22]), &SubResult36_111, ((MR_Box) (ArgX36_109)), ((MR_Box) (ArgY36_110)));
                                                                          succeeded = (SubResult36_111 != (MR_Integer) 0);
                                                                          if (succeeded)
                                                                            *HeadVar__1_1 = SubResult36_111;
                                                                          else
                                                                          {
                                                                            MR_Word SubResult37_114;

                                                                            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[22]), &SubResult37_114, ((MR_Box) (ArgX37_112)), ((MR_Box) (ArgY37_113)));
                                                                            succeeded = (SubResult37_114 != (MR_Integer) 0);
                                                                            if (succeeded)
                                                                              *HeadVar__1_1 = SubResult37_114;
                                                                            else
                                                                            {
                                                                              MR_Word SubResult38_117;

                                                                              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[27]), &SubResult38_117, ((MR_Box) (ArgX38_115)), ((MR_Box) (ArgY38_116)));
                                                                              succeeded = (SubResult38_117 != (MR_Integer) 0);
                                                                              if (succeeded)
                                                                                *HeadVar__1_1 = SubResult38_117;
                                                                              else
                                                                              {
                                                                                MR_Word SubResult39_120;

                                                                                parse_tree__prog_data_event____Compare____event_set_0_0(&SubResult39_120, ArgX39_118, ArgY39_119);
                                                                                succeeded = (SubResult39_120 != (MR_Integer) 0);
                                                                                if (succeeded)
                                                                                  *HeadVar__1_1 = SubResult39_120;
                                                                                else
                                                                                {
                                                                                  MR_Word SubResult40_123;

                                                                                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[13]), &SubResult40_123, ((MR_Box) (ArgX40_121)), ((MR_Box) (ArgY40_122)));
                                                                                  succeeded = (SubResult40_123 != (MR_Integer) 0);
                                                                                  if (succeeded)
                                                                                    *HeadVar__1_1 = SubResult40_123;
                                                                                  else
                                                                                  {
                                                                                    MR_Word SubResult41_126;

                                                                                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[28]), &SubResult41_126, ((MR_Box) (ArgX41_124)), ((MR_Box) (ArgY41_125)));
                                                                                    succeeded = (SubResult41_126 != (MR_Integer) 0);
                                                                                    if (succeeded)
                                                                                      *HeadVar__1_1 = SubResult41_126;
                                                                                    else
                                                                                    {
                                                                                      MR_Word SubResult42_129;

                                                                                      succeeded = (ArgX42_127 < ArgY42_128);
                                                                                      if (succeeded)
                                                                                      {
                                                                                        SubResult42_129 = (MR_Integer) 1;
                                                                                        succeeded = MR_TRUE;
                                                                                      }
                                                                                      else
                                                                                      {
                                                                                        succeeded = (ArgX42_127 > ArgY42_128);
                                                                                        if (succeeded)
                                                                                        {
                                                                                          SubResult42_129 = (MR_Integer) 2;
                                                                                          succeeded = MR_TRUE;
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                          succeeded = MR_TRUE;
                                                                                          succeeded = !(succeeded);
                                                                                          if (succeeded)
                                                                                          {
                                                                                            SubResult42_129 = (MR_Integer) 0;
                                                                                            succeeded = MR_TRUE;
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                      if (succeeded)
                                                                                        *HeadVar__1_1 = SubResult42_129;
                                                                                      else
                                                                                      {
                                                                                        MR_Word SubResult43_132;

                                                                                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[17]), &SubResult43_132, ((MR_Box) (ArgX43_130)), ((MR_Box) (ArgY43_131)));
                                                                                        succeeded = (SubResult43_132 != (MR_Integer) 0);
                                                                                        if (succeeded)
                                                                                          *HeadVar__1_1 = SubResult43_132;
                                                                                        else
                                                                                          hlds__hlds_module____Compare____type_repn_decision_data_0_0(HeadVar__1_1, ArgX44_133, ArgY44_134);
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

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[16]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[30]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[31]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____module_info_0_0(
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
  {
    MR_Word TypeCtorInfo_27_27;
    MR_Word TypeInfo_28_28;
    MR_Word TypeCtorInfo_30_30;
    MR_Word TypeCtorInfo_31_31;
    MR_Word TypeInfo_32_32;
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
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
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
      MR_Word ArgX1_33 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 0))));
      MR_Word ArgY1_34 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 0))));
      MR_Word ArgX2_35 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 1))));
      MR_Word ArgY2_36 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 1))));
      MR_Word ArgX3_37 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 2))));
      MR_Word ArgY3_38 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 2))));
      MR_Word ArgX4_39 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 3))));
      MR_Word ArgY4_40 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 3))));
      MR_Word ArgX5_41 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 4))));
      MR_Word ArgY5_42 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 4))));
      MR_Word ArgX6_43 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 5))));
      MR_Word ArgY6_44 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 5))));
      MR_Word ArgX7_45 = ((MR_Word) ((MR_hl_field(0, ArgX1_3, (MR_Integer) 6))));
      MR_Word ArgY7_46 = ((MR_Word) ((MR_hl_field(0, ArgY1_4, (MR_Integer) 6))));

      succeeded = hlds__special_pred____Unify____special_pred_maps_0_0(ArgX1_33, ArgY1_34);
      if (succeeded)
      {
        TypeInfo_20_50 = (MR_Word) (&hlds__hlds_module_scalar_common_2[14]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_50, ((MR_Box) (ArgX2_35)), ((MR_Box) (ArgY2_36)));
        if (succeeded)
        {
          TypeInfo_21_51 = (MR_Word) (&hlds__hlds_module_scalar_common_2[15]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_51, ((MR_Box) (ArgX3_37)), ((MR_Box) (ArgY3_38)));
          if (succeeded)
          {
            succeeded = hlds__hlds_module____Unify____type_spec_info_0_0(ArgX4_39, ArgY4_40);
            if (succeeded)
            {
              succeeded = hlds__const_struct____Unify____const_struct_db_0_0(ArgX5_41, ArgY5_42);
              if (succeeded)
              {
                succeeded = parse_tree__prog_data_foreign____Unify____c_j_cs_fims_0_0(ArgX6_43, ArgY6_44);
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
              TypeInfo_28_28 = (MR_Word) (&hlds__hlds_module_scalar_common_2[6]);
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
                    TypeCtorInfo_31_31 = (MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_cons_table_0);
                    succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_31_31, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      TypeInfo_32_32 = (MR_Word) (&hlds__hlds_module_scalar_common_2[7]);
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

MR_bool MR_CALL 
hlds__hlds_module____Unify____type_spec_info_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[28]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&hlds__hlds_module_scalar_common_1[22]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&hlds__hlds_module_scalar_common_2[17]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&hlds__hlds_module_scalar_common_2[18]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____module_rare_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_91 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_92 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_91 == CastY_92);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_95_95;
    MR_Word TypeInfo_97_97;
    MR_Word TypeCtorInfo_100_100;
    MR_Word TypeInfo_101_101;
    MR_Word TypeInfo_102_102;
    MR_Word TypeInfo_103_103;
    MR_Word TypeInfo_104_104;
    MR_Word TypeInfo_105_105;
    MR_Word TypeInfo_106_106;
    MR_Word TypeInfo_107_107;
    MR_Word TypeInfo_108_108;
    MR_Word TypeInfo_109_109;
    MR_Word TypeInfo_110_110;
    MR_Word TypeInfo_111_111;
    MR_Word TypeInfo_112_112;
    MR_Word TypeInfo_113_113;
    MR_Word TypeInfo_114_114;
    MR_Word TypeInfo_115_115;
    MR_Word TypeInfo_116_116;
    MR_Word TypeInfo_118_118;
    MR_Word TypeInfo_119_119;
    MR_Word TypeInfo_120_120;
    MR_Word TypeInfo_121_121;
    MR_Word TypeInfo_125_125;
    MR_Word TypeInfo_126_126;
    MR_Word TypeInfo_127_127;
    MR_Word TypeInfo_129_129;
    MR_Word TypeInfo_130_130;
    MR_Word TypeInfo_131_131;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
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
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgX11_23 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY11_24 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX12_25 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))) & (MR_Integer) 1);
    MR_Word ArgY12_26 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))) & (MR_Integer) 1);
    MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 11))));
    MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Word ArgX14_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))));
    MR_Word ArgY14_30 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))));
    MR_Word ArgX15_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 13))));
    MR_Word ArgY15_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))));
    MR_Word ArgX16_33 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 14))));
    MR_Word ArgY16_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))));
    MR_Word ArgX17_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 15))));
    MR_Word ArgY17_36 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 15))));
    MR_Word ArgX18_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 16))));
    MR_Word ArgY18_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 16))));
    MR_Word ArgX19_39 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 17))));
    MR_Word ArgY19_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 17))));
    MR_Word ArgX20_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 18))));
    MR_Word ArgY20_42 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 18))));
    MR_Word ArgX21_43 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 19))));
    MR_Word ArgY21_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 19))));
    MR_Word ArgX22_45 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 20))));
    MR_Word ArgY22_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 20))));
    MR_Word ArgX23_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 21))));
    MR_Word ArgY23_48 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 21))));
    MR_Word ArgX24_49 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 22))));
    MR_Word ArgY24_50 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 22))));
    MR_Word ArgX25_51 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 23))));
    MR_Word ArgY25_52 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 23))));
    MR_Word ArgX26_53 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 24))));
    MR_Word ArgY26_54 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 24))));
    MR_Word ArgX27_55 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 25))));
    MR_Word ArgY27_56 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 25))));
    MR_Word ArgX28_57 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 26))));
    MR_Word ArgY28_58 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 26))));
    MR_Word ArgX29_59 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 27))));
    MR_Word ArgY29_60 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 27))));
    MR_Word ArgX30_61 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 28))));
    MR_Word ArgY30_62 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 28))));
    MR_Word ArgX31_63 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 29))));
    MR_Word ArgY31_64 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 29))));
    MR_Word ArgX32_65 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 30))));
    MR_Word ArgY32_66 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 30))));
    MR_Word ArgX33_67 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 31))));
    MR_Word ArgY33_68 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 31))));
    MR_Word ArgX34_69 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 32))));
    MR_Word ArgY34_70 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 32))));
    MR_Word ArgX35_71 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 33))));
    MR_Word ArgY35_72 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 33))));
    MR_Word ArgX36_73 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 34))));
    MR_Word ArgY36_74 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 34))));
    MR_Word ArgX37_75 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 35))));
    MR_Word ArgY37_76 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 35))));
    MR_Word ArgX38_77 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 36))));
    MR_Word ArgY38_78 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 36))));
    MR_Word ArgX39_79 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 37))));
    MR_Word ArgY39_80 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 37))));
    MR_Word ArgX40_81 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 38))));
    MR_Word ArgY40_82 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 38))));
    MR_Word ArgX41_83 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 39))));
    MR_Word ArgY41_84 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 39))));
    MR_Integer ArgX42_85 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 40))));
    MR_Integer ArgY42_86 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 40))));
    MR_Word ArgX43_87 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 41))));
    MR_Word ArgY43_88 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 41))));
    MR_Word ArgX44_89 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 42))));
    MR_Word ArgY44_90 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 42))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
        if (succeeded)
        {
          TypeInfo_95_95 = (MR_Word) (&hlds__hlds_module_scalar_common_2[8]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_95_95, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = parse_tree__module_qual____Unify____partial_qualifier_info_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              TypeInfo_97_97 = (MR_Word) (&hlds__hlds_module_scalar_common_1[8]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_97_97, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                succeeded = check_hlds__proc_requests____Unify____proc_requests_0_0(ArgX7_15, ArgY7_16);
                if (succeeded)
                {
                  succeeded = hlds__hlds_promise____Unify____assertion_table_0_0(ArgX8_17, ArgY8_18);
                  if (succeeded)
                  {
                    TypeCtorInfo_100_100 = (MR_Word) (&hlds__hlds_promise__hlds__hlds_promise__type_ctor_info_exclusive_table_0);
                    succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_100_100, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      TypeInfo_101_101 = (MR_Word) (&hlds__hlds_module_scalar_common_2[4]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_101_101, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                      if (succeeded)
                      {
                        succeeded = (ArgX11_23 == ArgY11_24);
                        if (succeeded)
                        {
                          succeeded = (ArgX12_25 == ArgY12_26);
                          if (succeeded)
                          {
                            TypeInfo_102_102 = (MR_Word) (&hlds__hlds_module_scalar_common_1[15]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_102_102, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
                            if (succeeded)
                            {
                              TypeInfo_103_103 = (MR_Word) (&hlds__hlds_module_scalar_common_1[15]);
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_103_103, ((MR_Box) (ArgX14_29)), ((MR_Box) (ArgY14_30)));
                              if (succeeded)
                              {
                                TypeInfo_104_104 = (MR_Word) (&hlds__hlds_module_scalar_common_1[16]);
                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_104_104, ((MR_Box) (ArgX15_31)), ((MR_Box) (ArgY15_32)));
                                if (succeeded)
                                {
                                  TypeInfo_105_105 = (MR_Word) (&hlds__hlds_module_scalar_common_1[17]);
                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_105_105, ((MR_Box) (ArgX16_33)), ((MR_Box) (ArgY16_34)));
                                  if (succeeded)
                                  {
                                    TypeInfo_106_106 = (MR_Word) (&hlds__hlds_module_scalar_common_1[18]);
                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_106_106, ((MR_Box) (ArgX17_35)), ((MR_Box) (ArgY17_36)));
                                    if (succeeded)
                                    {
                                      TypeInfo_107_107 = (MR_Word) (&hlds__hlds_module_scalar_common_1[20]);
                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_107_107, ((MR_Box) (ArgX18_37)), ((MR_Box) (ArgY18_38)));
                                      if (succeeded)
                                      {
                                        TypeInfo_108_108 = (MR_Word) (&hlds__hlds_module_scalar_common_1[21]);
                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_108_108, ((MR_Box) (ArgX19_39)), ((MR_Box) (ArgY19_40)));
                                        if (succeeded)
                                        {
                                          TypeInfo_109_109 = (MR_Word) (&hlds__hlds_module_scalar_common_1[22]);
                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_109_109, ((MR_Box) (ArgX20_41)), ((MR_Box) (ArgY20_42)));
                                          if (succeeded)
                                          {
                                            TypeInfo_110_110 = (MR_Word) (&hlds__hlds_module_scalar_common_2[9]);
                                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_110_110, ((MR_Box) (ArgX21_43)), ((MR_Box) (ArgY21_44)));
                                            if (succeeded)
                                            {
                                              TypeInfo_111_111 = (MR_Word) (&hlds__hlds_module_scalar_common_2[10]);
                                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_111_111, ((MR_Box) (ArgX22_45)), ((MR_Box) (ArgY22_46)));
                                              if (succeeded)
                                              {
                                                TypeInfo_112_112 = (MR_Word) (&hlds__hlds_module_scalar_common_2[11]);
                                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_112_112, ((MR_Box) (ArgX23_47)), ((MR_Box) (ArgY23_48)));
                                                if (succeeded)
                                                {
                                                  TypeInfo_113_113 = (MR_Word) (&hlds__hlds_module_scalar_common_2[11]);
                                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_113_113, ((MR_Box) (ArgX24_49)), ((MR_Box) (ArgY24_50)));
                                                  if (succeeded)
                                                  {
                                                    TypeInfo_114_114 = (MR_Word) (&hlds__hlds_module_scalar_common_2[11]);
                                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_114_114, ((MR_Box) (ArgX25_51)), ((MR_Box) (ArgY25_52)));
                                                    if (succeeded)
                                                    {
                                                      TypeInfo_115_115 = (MR_Word) (&hlds__hlds_module_scalar_common_2[0]);
                                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_115_115, ((MR_Box) (ArgX26_53)), ((MR_Box) (ArgY26_54)));
                                                      if (succeeded)
                                                      {
                                                        TypeInfo_116_116 = (MR_Word) (&hlds__hlds_module_scalar_common_1[23]);
                                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_116_116, ((MR_Box) (ArgX27_55)), ((MR_Box) (ArgY27_56)));
                                                        if (succeeded)
                                                        {
                                                          succeeded = parse_tree__prog_data_used_modules____Unify____used_modules_0_0(ArgX28_57, ArgY28_58);
                                                          if (succeeded)
                                                          {
                                                            TypeInfo_118_118 = (MR_Word) (&hlds__hlds_module_scalar_common_1[23]);
                                                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_118_118, ((MR_Box) (ArgX29_59)), ((MR_Box) (ArgY29_60)));
                                                            if (succeeded)
                                                            {
                                                              TypeInfo_119_119 = (MR_Word) (&hlds__hlds_module_scalar_common_1[24]);
                                                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_119_119, ((MR_Box) (ArgX30_61)), ((MR_Box) (ArgY30_62)));
                                                              if (succeeded)
                                                              {
                                                                TypeInfo_120_120 = (MR_Word) (&hlds__hlds_module_scalar_common_1[25]);
                                                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_120_120, ((MR_Box) (ArgX31_63)), ((MR_Box) (ArgY31_64)));
                                                                if (succeeded)
                                                                {
                                                                  TypeInfo_121_121 = (MR_Word) (&hlds__hlds_module_scalar_common_1[26]);
                                                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_121_121, ((MR_Box) (ArgX32_65)), ((MR_Box) (ArgY32_66)));
                                                                  if (succeeded)
                                                                  {
                                                                    succeeded = analysis____Unify____analysis_info_0_0(ArgX33_67, ArgY33_68);
                                                                    if (succeeded)
                                                                    {
                                                                      succeeded = parse_tree__prog_foreign____Unify____pred_target_names_0_0(ArgX34_69, ArgY34_70);
                                                                      if (succeeded)
                                                                      {
                                                                        succeeded = parse_tree__prog_foreign____Unify____pred_target_names_0_0(ArgX35_71, ArgY35_72);
                                                                        if (succeeded)
                                                                        {
                                                                          TypeInfo_125_125 = (MR_Word) (&hlds__hlds_module_scalar_common_1[22]);
                                                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_125_125, ((MR_Box) (ArgX36_73)), ((MR_Box) (ArgY36_74)));
                                                                          if (succeeded)
                                                                          {
                                                                            TypeInfo_126_126 = (MR_Word) (&hlds__hlds_module_scalar_common_1[22]);
                                                                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_126_126, ((MR_Box) (ArgX37_75)), ((MR_Box) (ArgY37_76)));
                                                                            if (succeeded)
                                                                            {
                                                                              TypeInfo_127_127 = (MR_Word) (&hlds__hlds_module_scalar_common_1[27]);
                                                                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_127_127, ((MR_Box) (ArgX38_77)), ((MR_Box) (ArgY38_78)));
                                                                              if (succeeded)
                                                                              {
                                                                                succeeded = parse_tree__prog_data_event____Unify____event_set_0_0(ArgX39_79, ArgY39_80);
                                                                                if (succeeded)
                                                                                {
                                                                                  TypeInfo_129_129 = (MR_Word) (&hlds__hlds_module_scalar_common_2[13]);
                                                                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_129_129, ((MR_Box) (ArgX40_81)), ((MR_Box) (ArgY40_82)));
                                                                                  if (succeeded)
                                                                                  {
                                                                                    TypeInfo_130_130 = (MR_Word) (&hlds__hlds_module_scalar_common_1[28]);
                                                                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_130_130, ((MR_Box) (ArgX41_83)), ((MR_Box) (ArgY41_84)));
                                                                                    if (succeeded)
                                                                                    {
                                                                                      succeeded = (ArgX42_85 == ArgY42_86);
                                                                                      if (succeeded)
                                                                                      {
                                                                                        TypeInfo_131_131 = (MR_Word) (&hlds__hlds_module_scalar_common_1[17]);
                                                                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_131_131, ((MR_Box) (ArgX43_87)), ((MR_Box) (ArgY43_88)));
                                                                                        if (succeeded)
                                                                                          succeeded = hlds__hlds_module____Unify____type_repn_decision_data_0_0(ArgX44_89, ArgY44_90);
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
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____type_repn_decision_data_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[16]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&hlds__hlds_module_scalar_common_2[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&hlds__hlds_module_scalar_common_1[30]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&hlds__hlds_module_scalar_common_1[31]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_module____Compare____exported_enum_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word SubResult1_6;

    parse_tree__prog_data____Compare____type_ctor_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[14]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
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

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[5]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));

    succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_16_16 = (MR_Word) (&hlds__hlds_module_scalar_common_1[14]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) (&hlds__hlds_module_scalar_common_2[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX5_11, ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_module____Compare____direct_arg_proc_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____direct_arg_proc_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
hlds__hlds_module____Compare____direct_arg_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[13]), HeadVar__1_1, ((MR_Box) (Var_22)), ((MR_Box) (ArgY1_5)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_14;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[13]), &SubResult1_14, ((MR_Box) (Var_24)), ((MR_Box) (ArgY1_13)));
      succeeded = (SubResult1_14 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_14;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_23)), ((MR_Box) (ArgY2_16)));
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____direct_arg_proc_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_11_11 = (MR_Word) (&hlds__hlds_module_scalar_common_1[13]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      TypeInfo_12_12 = (MR_Word) (&hlds__hlds_module_scalar_common_1[13]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&hlds__hlds_module_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_module____Compare____direct_arg_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____direct_arg_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
hlds__hlds_module____Compare____complexity_proc_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____complexity_proc_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
hlds__hlds_module____Compare____complexity_proc_info_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[11]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____complexity_proc_info_0_0(
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
    MR_Word TypeInfo_11_11;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

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

void MR_CALL 
hlds__hlds_module____Compare____complexity_arg_kind_0_0(
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
hlds__hlds_module____Unify____complexity_arg_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__hlds_module____Compare____complexity_arg_info_0_0(
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
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[10]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
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

MR_bool MR_CALL 
hlds__hlds_module____Unify____complexity_arg_info_0_0(
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
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[10]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
hlds__hlds_module____Compare____avail_module_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____avail_module_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
hlds__hlds_module____Compare____avail_module_entry_0_0(
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
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_17 > Var_18);
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
      MR_Integer Var_19 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_20 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_19 < Var_20);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_19 > Var_20);
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
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_module_scalar_common_1[9]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____avail_module_entry_0_0(
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
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

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

void MR_CALL 
hlds__hlds_module____Compare____avail_module_0_0(
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
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_17 > Var_18);
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
      MR_Integer Var_19 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_20 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_19 < Var_20);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_19 > Var_20);
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
        mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
hlds__hlds_module____Unify____avail_module_0_0(
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
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = mercury__term_context____Unify____term_context_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module__get_unique_pred_proc_id_for_pred_sym_name_arity_3_p_0(
  MR_Word MI_4,
  MR_Word SNA_5,
  MR_Word * PredProcId_6)
{
  MR_bool succeeded;
  MR_Word PredTable_7 = ((MR_Word) ((MR_hl_field(0, MI_4, (MR_Integer) 3))));
  MR_Word SymName_8 = ((MR_Word) ((MR_hl_field(0, SNA_5, (MR_Integer) 0))));
  MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(0, SNA_5, (MR_Integer) 1))));
  MR_Word UserArity_10 = (MR_Word) (Arity_9);
  MR_Word PredIds_11;
  MR_Word PredId_12;
  MR_Word Var_15;

  hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(PredTable_7, (MR_Integer) 1, SymName_8, UserArity_10, &PredIds_11);
  succeeded = (PredIds_11 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    PredId_12 = ((MR_Word) ((MR_hl_field(1, PredIds_11, (MR_Integer) 0))));
    Var_15 = ((MR_Word) ((MR_hl_field(1, PredIds_11, (MR_Integer) 1))));
    succeeded = (Var_15 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Integer ProcId_13;

    hlds__pred_table__get_single_proc_id_3_p_0(MI_4, PredId_12, &ProcId_13);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *PredProcId_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (PredId_12));
      MR_hl_field(0, base, 1) = ((MR_Box) (ProcId_13));
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_module.get_unique_pred_proc_id_for_pred_sym_name_arity\'/3", (MR_String) "lookup failed");
      return;
    }
}

static void MR_CALL 
hlds__hlds_module__module_info_user_final_pred_procs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_PredProcId_6;

  hlds__hlds_module__get_unique_pred_proc_id_for_pred_sym_name_arity_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_PredProcId_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_PredProcId_6));
}

void MR_CALL 
hlds__hlds_module__module_info_user_final_pred_procs_2_p_0(
  MR_Word MI_3,
  MR_Word * PredProcIds_4)
{
  MR_Word FinalPredTargetNames_5;
  MR_Word SeqNumToPredTargetNamesMap_6;
  MR_Word PredTargetNamesLists_7;
  MR_Word PredTargetNames_8;
  MR_Word SymNamesArities_9;
  MR_Word Var_10;
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  FinalPredTargetNames_5 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 33))));
  SeqNumToPredTargetNamesMap_6 = (MR_Word) (FinalPredTargetNames_5);
  mercury__map__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_module_scalar_common_1[5]), SeqNumToPredTargetNamesMap_6, &PredTargetNamesLists_7);
  mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[1]), PredTargetNamesLists_7, &PredTargetNames_8);
  SymNamesArities_9 = mercury__assoc_list__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PredTargetNames_8);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&hlds__hlds_module_scalar_common_5[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (hlds__hlds_module__module_info_user_final_pred_procs_2_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (MI_3));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_10, SymNamesArities_9, PredProcIds_4);
}

static void MR_CALL 
hlds__hlds_module__module_info_user_init_pred_procs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_PredProcId_6;

  hlds__hlds_module__get_unique_pred_proc_id_for_pred_sym_name_arity_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_PredProcId_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_PredProcId_6));
}

void MR_CALL 
hlds__hlds_module__module_info_user_init_pred_procs_2_p_0(
  MR_Word MI_3,
  MR_Word * PredProcIds_4)
{
  MR_Word InitPredTargetNames_5;
  MR_Word SeqNumToPredTargetNamesMap_6;
  MR_Word PredTargetNamesLists_7;
  MR_Word PredTargetNames_8;
  MR_Word SymNamesArities_9;
  MR_Word Var_10;
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  InitPredTargetNames_5 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 32))));
  SeqNumToPredTargetNamesMap_6 = (MR_Word) (InitPredTargetNames_5);
  mercury__map__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_module_scalar_common_1[5]), SeqNumToPredTargetNamesMap_6, &PredTargetNamesLists_7);
  mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[1]), PredTargetNamesLists_7, &PredTargetNames_8);
  SymNamesArities_9 = mercury__assoc_list__keys_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PredTargetNames_8);
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&hlds__hlds_module_scalar_common_5[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (hlds__hlds_module__module_info_user_init_pred_procs_2_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (MI_3));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_10, SymNamesArities_9, PredProcIds_4);
}

void MR_CALL 
hlds__hlds_module__module_info_user_final_pred_target_names_2_p_0(
  MR_Word MI_3,
  MR_Word * CNames_4)
{
  MR_Word FinalPredTargetNames_5;
  MR_Word SeqNumToPredTargetNamesMap_6;
  MR_Word PredTargetNamesLists_7;
  MR_Word PredTargetNames_8;
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  FinalPredTargetNames_5 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 33))));
  SeqNumToPredTargetNamesMap_6 = (MR_Word) (FinalPredTargetNames_5);
  mercury__map__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_module_scalar_common_1[5]), SeqNumToPredTargetNamesMap_6, &PredTargetNamesLists_7);
  mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[1]), PredTargetNamesLists_7, &PredTargetNames_8);
  *CNames_4 = mercury__assoc_list__values_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PredTargetNames_8);
}

void MR_CALL 
hlds__hlds_module__module_info_user_init_pred_target_names_2_p_0(
  MR_Word MI_3,
  MR_Word * CNames_4)
{
  MR_Word InitPredTargetNames_5;
  MR_Word SeqNumToPredTargetNamesMap_6;
  MR_Word PredTargetNamesLists_7;
  MR_Word PredTargetNames_8;
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  InitPredTargetNames_5 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 32))));
  SeqNumToPredTargetNamesMap_6 = (MR_Word) (InitPredTargetNames_5);
  mercury__map__values_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_module_scalar_common_1[5]), SeqNumToPredTargetNamesMap_6, &PredTargetNamesLists_7);
  mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_module_scalar_common_2[1]), PredTargetNamesLists_7, &PredTargetNames_8);
  *CNames_4 = mercury__assoc_list__values_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PredTargetNames_8);
}

void MR_CALL 
hlds__hlds_module__module_info_add_module_to_public_used_modules_3_p_0(
  MR_Word ModuleName_4,
  MR_Word STATE_VARIABLE_MI_0_8,
  MR_Word * STATE_VARIABLE_MI_9)
{
  MR_Word UsedModules0_6;
  MR_Word UsedModules_7;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 1))));

  UsedModules0_6 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 26))));
  parse_tree__prog_data_used_modules__record_module_and_ancestors_as_used_4_p_0((MR_Integer) 0, ModuleName_4, UsedModules0_6, &UsedModules_7);
  hlds__hlds_module__module_info_set_used_modules_3_p_0(UsedModules_7, STATE_VARIABLE_MI_0_8, STATE_VARIABLE_MI_9);
}

void MR_CALL 
hlds__hlds_module__module_info_get_all_deps_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * AllImports_4)
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
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, ModuleInfo_3, (MR_Integer) 1))));

  ModuleName_5 = ((MR_Word) ((MR_hl_field(0, Var_18, (MR_Integer) 0))));
  Parents_6 = mdbcomp__sym_name__get_ancestors_1_f_0(ModuleName_5);
  hlds__hlds_module__module_info_get_avail_module_map_2_p_0(ModuleInfo_3, &AvailModuleMap_7);
  mercury__map__keys_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), AvailModuleMap_7, &DirectImports_8);
  hlds__hlds_module__module_info_get_indirectly_imported_module_names_2_p_0(ModuleInfo_3, &IndirectImports_9);
  Var_12 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DirectImports_8);
  Var_14 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Parents_6);
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_14));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (Var_12));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_13));
  }
  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (IndirectImports_9));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) (Var_11));
  }
  *AllImports_4 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_10);
}

static void MR_CALL 
hlds__hlds_module__module_info_get_indirectly_imported_module_names_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 25))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_visible_modules_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * STATE_VARIABLE_VisibleModules_8)
{
  MR_Word ThisModule_5;
  MR_Word AvailModuleMap_6;
  MR_Word AvailModules_7;
  MR_Word STATE_VARIABLE_VisibleModules_9_9;
  MR_Word STATE_VARIABLE_VisibleModules_10_10;
  MR_Word Var_11;
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, ModuleInfo_3, (MR_Integer) 1))));

  ThisModule_5 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 0))));
  hlds__hlds_module__module_info_get_avail_module_map_2_p_0(ModuleInfo_3, &AvailModuleMap_6);
  mercury__map__keys_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), AvailModuleMap_6, &AvailModules_7);
  mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AvailModules_7, &STATE_VARIABLE_VisibleModules_9_9);
  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ThisModule_5)), STATE_VARIABLE_VisibleModules_9_9, &STATE_VARIABLE_VisibleModules_10_10);
  Var_11 = mdbcomp__sym_name__get_ancestors_1_f_0(ThisModule_5);
  mercury__set__insert_list_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_11, STATE_VARIABLE_VisibleModules_10_10, STATE_VARIABLE_VisibleModules_8);
}

void MR_CALL 
hlds__hlds_module__module_add_indirectly_imported_module_name_3_p_0(
  MR_Word AddedModuleSpecifier_4,
  MR_Word STATE_VARIABLE_MI_0_8,
  MR_Word * STATE_VARIABLE_MI_9)
{
  MR_Word Modules0_6;
  MR_Word Modules_7;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 1))));
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_String Var_77;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_90;
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
  MR_Integer Var_116;
  MR_Word Var_117;
  MR_Word Var_118;
  MR_Unsigned packed_word_1;

  Modules0_6 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 25))));
  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (AddedModuleSpecifier_4)), Modules0_6, &Modules_7);
  Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 0))));
  Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 1))));
  Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 2))));
  Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 3))));
  Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 4))));
  Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 5))));
  Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 6))));
  Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 7))));
  Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 8))));
  Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 9))));
  Var_75 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 0))));
  Var_76 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 1))));
  Var_77 = ((MR_String) ((MR_hl_field(0, Var_12, (MR_Integer) 2))));
  Var_78 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 3))));
  Var_79 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 4))));
  Var_80 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 5))));
  Var_81 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 6))));
  Var_82 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 7))));
  Var_83 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 8))));
  Var_84 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 9))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_12, (MR_Integer) 10)));
  Var_87 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 11))));
  Var_88 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 12))));
  Var_89 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 13))));
  Var_90 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 14))));
  Var_91 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 15))));
  Var_92 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 16))));
  Var_93 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 17))));
  Var_94 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 18))));
  Var_95 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 19))));
  Var_96 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 20))));
  Var_97 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 21))));
  Var_98 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 22))));
  Var_99 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 23))));
  Var_100 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 24))));
  Var_102 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 26))));
  Var_103 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 27))));
  Var_104 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 28))));
  Var_105 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 29))));
  Var_106 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 30))));
  Var_107 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 31))));
  Var_108 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 32))));
  Var_109 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 33))));
  Var_110 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 34))));
  Var_111 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 35))));
  Var_112 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 36))));
  Var_113 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 37))));
  Var_114 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 38))));
  Var_115 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 39))));
  Var_116 = ((MR_Integer) ((MR_hl_field(0, Var_12, (MR_Integer) 40))));
  Var_117 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 41))));
  Var_118 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 42))));
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (Var_75));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (Var_76));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) (Var_77));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Var_78));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) (Var_79));
    MR_hl_field(0, Var_13, 5) = ((MR_Box) (Var_80));
    MR_hl_field(0, Var_13, 6) = ((MR_Box) (Var_81));
    MR_hl_field(0, Var_13, 7) = ((MR_Box) (Var_82));
    MR_hl_field(0, Var_13, 8) = ((MR_Box) (Var_83));
    MR_hl_field(0, Var_13, 9) = ((MR_Box) (Var_84));
    MR_hl_field(0, Var_13, 10) = (MR_Box) (packed_word_1);
    MR_hl_field(0, Var_13, 11) = ((MR_Box) (Var_87));
    MR_hl_field(0, Var_13, 12) = ((MR_Box) (Var_88));
    MR_hl_field(0, Var_13, 13) = ((MR_Box) (Var_89));
    MR_hl_field(0, Var_13, 14) = ((MR_Box) (Var_90));
    MR_hl_field(0, Var_13, 15) = ((MR_Box) (Var_91));
    MR_hl_field(0, Var_13, 16) = ((MR_Box) (Var_92));
    MR_hl_field(0, Var_13, 17) = ((MR_Box) (Var_93));
    MR_hl_field(0, Var_13, 18) = ((MR_Box) (Var_94));
    MR_hl_field(0, Var_13, 19) = ((MR_Box) (Var_95));
    MR_hl_field(0, Var_13, 20) = ((MR_Box) (Var_96));
    MR_hl_field(0, Var_13, 21) = ((MR_Box) (Var_97));
    MR_hl_field(0, Var_13, 22) = ((MR_Box) (Var_98));
    MR_hl_field(0, Var_13, 23) = ((MR_Box) (Var_99));
    MR_hl_field(0, Var_13, 24) = ((MR_Box) (Var_100));
    MR_hl_field(0, Var_13, 25) = ((MR_Box) (Modules_7));
    MR_hl_field(0, Var_13, 26) = ((MR_Box) (Var_102));
    MR_hl_field(0, Var_13, 27) = ((MR_Box) (Var_103));
    MR_hl_field(0, Var_13, 28) = ((MR_Box) (Var_104));
    MR_hl_field(0, Var_13, 29) = ((MR_Box) (Var_105));
    MR_hl_field(0, Var_13, 30) = ((MR_Box) (Var_106));
    MR_hl_field(0, Var_13, 31) = ((MR_Box) (Var_107));
    MR_hl_field(0, Var_13, 32) = ((MR_Box) (Var_108));
    MR_hl_field(0, Var_13, 33) = ((MR_Box) (Var_109));
    MR_hl_field(0, Var_13, 34) = ((MR_Box) (Var_110));
    MR_hl_field(0, Var_13, 35) = ((MR_Box) (Var_111));
    MR_hl_field(0, Var_13, 36) = ((MR_Box) (Var_112));
    MR_hl_field(0, Var_13, 37) = ((MR_Box) (Var_113));
    MR_hl_field(0, Var_13, 38) = ((MR_Box) (Var_114));
    MR_hl_field(0, Var_13, 39) = ((MR_Box) (Var_115));
    MR_hl_field(0, Var_13, 40) = ((MR_Box) (Var_116));
    MR_hl_field(0, Var_13, 41) = ((MR_Box) (Var_117));
    MR_hl_field(0, Var_13, 42) = ((MR_Box) (Var_118));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_66));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_67));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_68));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_69));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_70));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_71));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_72));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_73));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_74));
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
  MR_bool succeeded;
  MR_Word NewAvails_12;
  MR_Word AvailMap0_14;
  MR_Word AvailMap_23;
  MR_Word Var_28;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word OldEntry_15;
  MR_Box conv0_OldEntry_15;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_String Var_96;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_103;
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
  MR_Word Var_130;
  MR_Word Var_131;
  MR_Word Var_132;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Integer Var_135;
  MR_Word Var_136;
  MR_Word Var_137;
  MR_Unsigned packed_word_2;

  if ((MaybeContext_10 == (MR_Word) ((MR_Unsigned) 0U)))
    NewAvails_12 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Context_13 = ((MR_Word) ((MR_hl_field(1, MaybeContext_10, (MR_Integer) 0))));
    MR_Word Var_26;

    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_26, 0) = (MR_Box) (((((MR_Unsigned) (NewSection_8) << 1)) | (MR_Unsigned) (NewImportOrUse_9)));
      MR_hl_field(0, Var_26, 1) = ((MR_Box) (Context_13));
    }
    {
      NewAvails_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, NewAvails_12, 0) = ((MR_Box) (Var_26));
      MR_hl_field(1, NewAvails_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_24, (MR_Integer) 1))));
  AvailMap0_14 = ((MR_Word) ((MR_hl_field(0, Var_28, (MR_Integer) 24))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), AvailMap0_14, ((MR_Box) (ModuleName_7)), &conv0_OldEntry_15);
  if (succeeded)
  {
    OldEntry_15 = ((MR_Word) (conv0_OldEntry_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word OldSection_16 = ((((MR_Unsigned) ((MR_hl_field(0, OldEntry_15, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word OldImportOrUse_17 = ((MR_Unsigned) ((MR_hl_field(0, OldEntry_15, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word OldAvails_18 = ((MR_Word) ((MR_hl_field(0, OldEntry_15, (MR_Integer) 1))));
    MR_Word Section_19;
    MR_Word ImportOrUse_20;
    MR_Word Avails_21;
    MR_Word NewEntry_22;

    hlds__hlds_module__combine_old_new_avail_attrs_6_p_0(OldSection_16, NewSection_8, OldImportOrUse_17, NewImportOrUse_9, &Section_19, &ImportOrUse_20);
    Avails_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0), NewAvails_12, OldAvails_18);
    {
      NewEntry_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NewEntry_22, 0) = (MR_Box) (((((MR_Unsigned) (Section_19) << 1)) | (MR_Unsigned) (ImportOrUse_20)));
      MR_hl_field(0, NewEntry_22, 1) = ((MR_Box) (Avails_21));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (NewEntry_22)), AvailMap0_14, &AvailMap_23);
  }
  else
  {
    MR_Word NewEntry_32;

    {
      NewEntry_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NewEntry_32, 0) = (MR_Box) (((((MR_Unsigned) (NewSection_8) << 1)) | (MR_Unsigned) (NewImportOrUse_9)));
      MR_hl_field(0, NewEntry_32, 1) = ((MR_Box) (NewAvails_12));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), ((MR_Box) (ModuleName_7)), ((MR_Box) (NewEntry_32)), AvailMap0_14, &AvailMap_23);
  }
  Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_24, (MR_Integer) 0))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_24, (MR_Integer) 1))));
  Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_24, (MR_Integer) 2))));
  Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_24, (MR_Integer) 3))));
  Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_24, (MR_Integer) 4))));
  Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_24, (MR_Integer) 5))));
  Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_24, (MR_Integer) 6))));
  Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_24, (MR_Integer) 7))));
  Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_24, (MR_Integer) 8))));
  Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_24, (MR_Integer) 9))));
  Var_94 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
  Var_95 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 1))));
  Var_96 = ((MR_String) ((MR_hl_field(0, Var_30, (MR_Integer) 2))));
  Var_97 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 3))));
  Var_98 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 4))));
  Var_99 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 5))));
  Var_100 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 6))));
  Var_101 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 7))));
  Var_102 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 8))));
  Var_103 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 9))));
  packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, Var_30, (MR_Integer) 10)));
  Var_106 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 11))));
  Var_107 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 12))));
  Var_108 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 13))));
  Var_109 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 14))));
  Var_110 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 15))));
  Var_111 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 16))));
  Var_112 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 17))));
  Var_113 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 18))));
  Var_114 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 19))));
  Var_115 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 20))));
  Var_116 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 21))));
  Var_117 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 22))));
  Var_118 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 23))));
  Var_120 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 25))));
  Var_121 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 26))));
  Var_122 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 27))));
  Var_123 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 28))));
  Var_124 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 29))));
  Var_125 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 30))));
  Var_126 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 31))));
  Var_127 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 32))));
  Var_128 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 33))));
  Var_129 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 34))));
  Var_130 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 35))));
  Var_131 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 36))));
  Var_132 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 37))));
  Var_133 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 38))));
  Var_134 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 39))));
  Var_135 = ((MR_Integer) ((MR_hl_field(0, Var_30, (MR_Integer) 40))));
  Var_136 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 41))));
  Var_137 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 42))));
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (Var_94));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (Var_95));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) (Var_96));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (Var_97));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (Var_98));
    MR_hl_field(0, Var_31, 5) = ((MR_Box) (Var_99));
    MR_hl_field(0, Var_31, 6) = ((MR_Box) (Var_100));
    MR_hl_field(0, Var_31, 7) = ((MR_Box) (Var_101));
    MR_hl_field(0, Var_31, 8) = ((MR_Box) (Var_102));
    MR_hl_field(0, Var_31, 9) = ((MR_Box) (Var_103));
    MR_hl_field(0, Var_31, 10) = (MR_Box) (packed_word_2);
    MR_hl_field(0, Var_31, 11) = ((MR_Box) (Var_106));
    MR_hl_field(0, Var_31, 12) = ((MR_Box) (Var_107));
    MR_hl_field(0, Var_31, 13) = ((MR_Box) (Var_108));
    MR_hl_field(0, Var_31, 14) = ((MR_Box) (Var_109));
    MR_hl_field(0, Var_31, 15) = ((MR_Box) (Var_110));
    MR_hl_field(0, Var_31, 16) = ((MR_Box) (Var_111));
    MR_hl_field(0, Var_31, 17) = ((MR_Box) (Var_112));
    MR_hl_field(0, Var_31, 18) = ((MR_Box) (Var_113));
    MR_hl_field(0, Var_31, 19) = ((MR_Box) (Var_114));
    MR_hl_field(0, Var_31, 20) = ((MR_Box) (Var_115));
    MR_hl_field(0, Var_31, 21) = ((MR_Box) (Var_116));
    MR_hl_field(0, Var_31, 22) = ((MR_Box) (Var_117));
    MR_hl_field(0, Var_31, 23) = ((MR_Box) (Var_118));
    MR_hl_field(0, Var_31, 24) = ((MR_Box) (AvailMap_23));
    MR_hl_field(0, Var_31, 25) = ((MR_Box) (Var_120));
    MR_hl_field(0, Var_31, 26) = ((MR_Box) (Var_121));
    MR_hl_field(0, Var_31, 27) = ((MR_Box) (Var_122));
    MR_hl_field(0, Var_31, 28) = ((MR_Box) (Var_123));
    MR_hl_field(0, Var_31, 29) = ((MR_Box) (Var_124));
    MR_hl_field(0, Var_31, 30) = ((MR_Box) (Var_125));
    MR_hl_field(0, Var_31, 31) = ((MR_Box) (Var_126));
    MR_hl_field(0, Var_31, 32) = ((MR_Box) (Var_127));
    MR_hl_field(0, Var_31, 33) = ((MR_Box) (Var_128));
    MR_hl_field(0, Var_31, 34) = ((MR_Box) (Var_129));
    MR_hl_field(0, Var_31, 35) = ((MR_Box) (Var_130));
    MR_hl_field(0, Var_31, 36) = ((MR_Box) (Var_131));
    MR_hl_field(0, Var_31, 37) = ((MR_Box) (Var_132));
    MR_hl_field(0, Var_31, 38) = ((MR_Box) (Var_133));
    MR_hl_field(0, Var_31, 39) = ((MR_Box) (Var_134));
    MR_hl_field(0, Var_31, 40) = ((MR_Box) (Var_135));
    MR_hl_field(0, Var_31, 41) = ((MR_Box) (Var_136));
    MR_hl_field(0, Var_31, 42) = ((MR_Box) (Var_137));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_25 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_85));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_86));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_87));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_88));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_89));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_90));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_91));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_92));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_93));
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

void MR_CALL 
hlds__hlds_module__module_info_next_loop_inv_count_4_p_0(
  MR_Word Context_5,
  MR_Integer * Count_6,
  MR_Word STATE_VARIABLE_MI_0_13,
  MR_Word * STATE_VARIABLE_MI_14)
{
  MR_bool succeeded;
  MR_Word ContextCounter0_8;
  MR_Word ContextCounter_10;
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_13, (MR_Integer) 1))));
  MR_Word FoundContextCounter_9;
  MR_Word Var_15;

  ContextCounter0_8 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 23))));
  Var_15 = mercury__counter__init_1_f_0((MR_Integer) 2);
  succeeded = mercury__map__insert_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), ((MR_Box) (Context_5)), ((MR_Box) (Var_15)), ContextCounter0_8, &FoundContextCounter_9);
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

    mercury__map__lookup_3_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), ContextCounter0_8, ((MR_Box) (Context_5)), &conv0_Counter0_11);
    Counter0_11 = ((MR_Word) (conv0_Counter0_11));
    mercury__counter__allocate_3_p_0(Count_6, Counter0_11, &Counter_12);
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), ((MR_Box) (Context_5)), ((MR_Box) (Counter_12)), ContextCounter0_8, &ContextCounter_10);
  }
  hlds__hlds_module__module_info_set_loop_invs_per_context_3_p_0(ContextCounter_10, STATE_VARIABLE_MI_0_13, STATE_VARIABLE_MI_14);
}

static void MR_CALL 
hlds__hlds_module__module_info_set_loop_invs_per_context_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_next_atomic_count_4_p_0(
  MR_Word Context_5,
  MR_Integer * Count_6,
  MR_Word STATE_VARIABLE_MI_0_13,
  MR_Word * STATE_VARIABLE_MI_14)
{
  MR_bool succeeded;
  MR_Word ContextCounter0_8;
  MR_Word ContextCounter_10;
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_13, (MR_Integer) 1))));
  MR_Word FoundContextCounter_9;
  MR_Word Var_15;

  ContextCounter0_8 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 22))));
  Var_15 = mercury__counter__init_1_f_0((MR_Integer) 2);
  succeeded = mercury__map__insert_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), ((MR_Box) (Context_5)), ((MR_Box) (Var_15)), ContextCounter0_8, &FoundContextCounter_9);
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

    mercury__map__lookup_3_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), ContextCounter0_8, ((MR_Box) (Context_5)), &conv0_Counter0_11);
    Counter0_11 = ((MR_Word) (conv0_Counter0_11));
    mercury__counter__allocate_3_p_0(Count_6, Counter0_11, &Counter_12);
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), ((MR_Box) (Context_5)), ((MR_Box) (Counter_12)), ContextCounter0_8, &ContextCounter_10);
  }
  hlds__hlds_module__module_info_set_atomics_per_context_3_p_0(ContextCounter_10, STATE_VARIABLE_MI_0_13, STATE_VARIABLE_MI_14);
}

static void MR_CALL 
hlds__hlds_module__module_info_set_atomics_per_context_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_next_lambda_count_4_p_0(
  MR_Word Context_5,
  MR_Integer * Count_6,
  MR_Word STATE_VARIABLE_MI_0_13,
  MR_Word * STATE_VARIABLE_MI_14)
{
  MR_bool succeeded;
  MR_Word ContextCounter0_8;
  MR_Word ContextCounter_10;
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_13, (MR_Integer) 1))));
  MR_Word FoundContextCounter_9;
  MR_Word Var_15;

  ContextCounter0_8 = ((MR_Word) ((MR_hl_field(0, Var_21, (MR_Integer) 21))));
  Var_15 = mercury__counter__init_1_f_0((MR_Integer) 2);
  succeeded = mercury__map__insert_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), ((MR_Box) (Context_5)), ((MR_Box) (Var_15)), ContextCounter0_8, &FoundContextCounter_9);
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

    mercury__map__lookup_3_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), ContextCounter0_8, ((MR_Box) (Context_5)), &conv0_Counter0_11);
    Counter0_11 = ((MR_Word) (conv0_Counter0_11));
    mercury__counter__allocate_3_p_0(Count_6, Counter0_11, &Counter_12);
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), ((MR_Box) (Context_5)), ((MR_Box) (Counter_12)), ContextCounter0_8, &ContextCounter_10);
  }
  hlds__hlds_module__module_info_set_lambdas_per_context_3_p_0(ContextCounter_10, STATE_VARIABLE_MI_0_13, STATE_VARIABLE_MI_14);
}

static void MR_CALL 
hlds__hlds_module__module_info_set_lambdas_per_context_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(
  MR_Word STATE_VARIABLE_MI_0_4,
  MR_Word * STATE_VARIABLE_MI_5)
{
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_4, (MR_Integer) 1))));
  MR_Word Var_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_4, (MR_Integer) 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_4, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_4, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_4, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_4, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_4, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_4, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_4, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_4, (MR_Integer) 9))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 0))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 1))));
  MR_String Var_20 = ((MR_String) ((MR_hl_field(0, Var_7, (MR_Integer) 2))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 3))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 4))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 7))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 8))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 9))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 11))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 12))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 13))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 14))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 15))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 17))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 18))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 19))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 20))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 21))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 22))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 23))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 24))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 25))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 26))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 27))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 28))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 29))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 30))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 31))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 32))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 33))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 34))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 35))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 36))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 37))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 38))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 39))));
  MR_Integer Var_59 = ((MR_Integer) ((MR_hl_field(0, Var_7, (MR_Integer) 40))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 41))));
  MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_7, (MR_Integer) 10)));

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_8, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_8, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_8, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_8, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_8, 8) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_8, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_8, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_8, 11) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_8, 12) = ((MR_Box) (Var_31));
    MR_hl_field(0, Var_8, 13) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_8, 14) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_8, 15) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_8, 16) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Var_8, 17) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_8, 18) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_8, 19) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_8, 20) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_8, 21) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_8, 22) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_8, 23) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_8, 24) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_8, 25) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_8, 26) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_8, 27) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_8, 28) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_8, 29) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_8, 30) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_8, 31) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_8, 32) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_8, 33) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_8, 34) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_8, 35) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_8, 36) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_8, 37) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_8, 38) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_8, 39) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_8, 40) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_8, 41) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_8, 42) = ((MR_Box) (Var_61));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_dependency_info_3_p_0(
  MR_Word DependencyInfo_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_String Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
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
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Integer Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Unsigned packed_word_0;

  {
    Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_8, 0) = ((MR_Box) (DependencyInfo_4));
  }
  Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));
  Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_8));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_dependency_info_2_p_0(
  MR_Word MI_3,
  MR_Word * DepInfo_4)
{
  MR_Word MaybeDepInfo_5;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  MaybeDepInfo_5 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  if ((MaybeDepInfo_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_module.module_info_dependency_info\'/2", (MR_String) "attempted to access invalid dependency_info");
      return;
    }
  else
    *DepInfo_4 = ((MR_Word) ((MR_hl_field(1, MaybeDepInfo_5, (MR_Integer) 0))));
}

void MR_CALL 
hlds__hlds_module__module_add_fact_table_file_3_p_0(
  MR_String FileName_4,
  MR_Word STATE_VARIABLE_Module_0_8,
  MR_Word * STATE_VARIABLE_Module_9)
{
  MR_Word FileNames0_6;
  MR_Word FileNames_7;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_8, (MR_Integer) 1))));
  MR_Word Var_13;
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_8, (MR_Integer) 0))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_8, (MR_Integer) 2))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_8, (MR_Integer) 3))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_8, (MR_Integer) 4))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_8, (MR_Integer) 5))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_8, (MR_Integer) 6))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_8, (MR_Integer) 7))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_8, (MR_Integer) 8))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_8, (MR_Integer) 9))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 0))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 1))));
  MR_String Var_25 = ((MR_String) ((MR_hl_field(0, Var_10, (MR_Integer) 2))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 3))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 4))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 5))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 6))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 7))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 8))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 9))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 11))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 12))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 13))));
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
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Integer Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_10, (MR_Integer) 10)));

  FileNames0_6 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 14))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 15))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 16))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 17))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 18))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 19))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 20))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 21))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 22))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 23))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 24))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 25))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 26))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 27))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 28))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 29))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 30))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 31))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 32))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 33))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 34))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 35))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 36))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 37))));
  Var_61 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 38))));
  Var_62 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 39))));
  Var_63 = ((MR_Integer) ((MR_hl_field(0, Var_10, (MR_Integer) 40))));
  Var_64 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 41))));
  Var_65 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 42))));
  {
    FileNames_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, FileNames_7, 0) = ((MR_Box) (FileName_4));
    MR_hl_field(1, FileNames_7, 1) = ((MR_Box) (FileNames0_6));
  }
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_13, 5) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_13, 6) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_13, 7) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_13, 8) = ((MR_Box) (Var_31));
    MR_hl_field(0, Var_13, 9) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_13, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_13, 11) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_13, 12) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_13, 13) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_13, 14) = ((MR_Box) (FileNames_7));
    MR_hl_field(0, Var_13, 15) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_13, 16) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_13, 17) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_13, 18) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_13, 19) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_13, 20) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_13, 21) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_13, 22) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_13, 23) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_13, 24) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_13, 25) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_13, 26) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_13, 27) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_13, 28) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_13, 29) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_13, 30) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_13, 31) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_13, 32) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_13, 33) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_13, 34) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_13, 35) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_13, 36) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_13, 37) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_13, 38) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_13, 39) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_13, 40) = ((MR_Box) (Var_63));
    MR_hl_field(0, Var_13, 41) = ((MR_Box) (Var_64));
    MR_hl_field(0, Var_13, 42) = ((MR_Box) (Var_65));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Module_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_22));
  }
}

void MR_CALL 
hlds__hlds_module__module_add_item_fim_3_p_0(
  MR_Word ItemFIM_4,
  MR_Word STATE_VARIABLE_Module_0_12,
  MR_Word * STATE_VARIABLE_Module_13)
{
  MR_Word FIMs0_6;
  MR_Word Lang_7;
  MR_Word ModuleName_8;
  MR_Word FIMs_11;
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_12, (MR_Integer) 0))));
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
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
  MR_Word Var_47;

  FIMs0_6 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 5))));
  Lang_7 = ((MR_Unsigned) ((MR_hl_field(0, ItemFIM_4, (MR_Integer) 0))) & (MR_Integer) 3);
  ModuleName_8 = ((MR_Word) ((MR_hl_field(0, ItemFIM_4, (MR_Integer) 1))));
  parse_tree__prog_data_foreign__add_fim_4_p_0(Lang_7, ModuleName_8, FIMs0_6, &FIMs_11);
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_12, (MR_Integer) 0))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_12, (MR_Integer) 1))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_12, (MR_Integer) 2))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_12, (MR_Integer) 3))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_12, (MR_Integer) 4))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_12, (MR_Integer) 5))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_12, (MR_Integer) 6))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_12, (MR_Integer) 7))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_12, (MR_Integer) 8))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_12, (MR_Integer) 9))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 1))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 2))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 3))));
  Var_45 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 4))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, Var_30, (MR_Integer) 6))));
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_31, 5) = ((MR_Box) (FIMs_11));
    MR_hl_field(0, Var_31, 6) = ((MR_Box) (Var_47));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Module_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_33));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_40));
  }
}

void MR_CALL 
hlds__hlds_module__module_add_foreign_body_code_3_p_0(
  MR_Word ForeignBodyCode_4,
  MR_Word STATE_VARIABLE_Module_0_8,
  MR_Word * STATE_VARIABLE_Module_9)
{
  MR_Word ForeignBodyCodes0_6;
  MR_Word ForeignBodyCodes_7;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_8, (MR_Integer) 1))));

  ForeignBodyCodes0_6 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 13))));
  ForeignBodyCodes_7 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), ForeignBodyCodes0_6, ((MR_Box) (ForeignBodyCode_4)));
  hlds__hlds_module__module_info_set_foreign_body_codes_3_p_0(ForeignBodyCodes_7, STATE_VARIABLE_Module_0_8, STATE_VARIABLE_Module_9);
}

void MR_CALL 
hlds__hlds_module__module_add_foreign_decl_code_aux_3_p_0(
  MR_Word ForeignDeclCode_4,
  MR_Word STATE_VARIABLE_Module_0_8,
  MR_Word * STATE_VARIABLE_Module_9)
{
  MR_Word ForeignDeclCodes0_6;
  MR_Word ForeignDeclCodes_7;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_8, (MR_Integer) 1))));

  ForeignDeclCodes0_6 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 12))));
  ForeignDeclCodes_7 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), ForeignDeclCodes0_6, ((MR_Box) (ForeignDeclCode_4)));
  hlds__hlds_module__module_info_set_foreign_decl_codes_aux_3_p_0(ForeignDeclCodes_7, STATE_VARIABLE_Module_0_8, STATE_VARIABLE_Module_9);
}

void MR_CALL 
hlds__hlds_module__module_add_foreign_decl_code_user_3_p_0(
  MR_Word ForeignDeclCode_4,
  MR_Word STATE_VARIABLE_Module_0_8,
  MR_Word * STATE_VARIABLE_Module_9)
{
  MR_Word ForeignDeclCodes0_6;
  MR_Word ForeignDeclCodes_7;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Module_0_8, (MR_Integer) 1))));

  ForeignDeclCodes0_6 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 11))));
  ForeignDeclCodes_7 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), ForeignDeclCodes0_6, ((MR_Box) (ForeignDeclCode_4)));
  hlds__hlds_module__module_info_set_foreign_decl_codes_user_3_p_0(ForeignDeclCodes_7, STATE_VARIABLE_Module_0_8, STATE_VARIABLE_Module_9);
}

MR_Integer MR_CALL 
hlds__hlds_module__predicate_arity_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5)
{
  MR_Integer Arity_6;
  MR_Word PredInfo_7;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_5, &PredInfo_7);
  Arity_6 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_7);
  return Arity_6;
}

MR_String MR_CALL 
hlds__hlds_module__predicate_name_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5)
{
  MR_String PredName_6;
  MR_Word PredInfo_7;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_5, &PredInfo_7);
  PredName_6 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_7);
  return PredName_6;
}

MR_Word MR_CALL 
hlds__hlds_module__predicate_module_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5)
{
  MR_Word ModuleName_6;
  MR_Word PredInfo_7;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_5, &PredInfo_7);
  ModuleName_6 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_7);
  return ModuleName_6;
}

void MR_CALL 
hlds__hlds_module__predicate_id_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word * ModuleName_8,
  MR_String * PredName_9,
  MR_Integer * Arity_10)
{
  MR_Word PredInfo_11;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_7, &PredInfo_11);
  *ModuleName_8 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_11);
  *PredName_9 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_11);
  *Arity_10 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_11);
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
  MR_Word Procs0_12;
  MR_Word Procs_13;
  MR_Word PredInfo_14;

  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_9, &Procs0_12);
  mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_8)), ((MR_Box) (ProcInfo_10)), Procs0_12, &Procs_13);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs_13, PredInfo0_9, &PredInfo_14);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_7, PredInfo_14, STATE_VARIABLE_MI_0_15, STATE_VARIABLE_MI_16);
}

void MR_CALL 
hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredInfo_8,
  MR_Word ProcInfo_9,
  MR_Word STATE_VARIABLE_MI_0_11,
  MR_Word * STATE_VARIABLE_MI_12)
{
  MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer ProcId_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word Procs0_13;
  MR_Word Procs_14;
  MR_Word PredInfo_15;

  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_8, &Procs0_13);
  mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_7)), ((MR_Box) (ProcInfo_9)), Procs0_13, &Procs_14);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs_14, PredInfo_8, &PredInfo_15);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_6, PredInfo_15, STATE_VARIABLE_MI_0_11, STATE_VARIABLE_MI_12);
}

void MR_CALL 
hlds__hlds_module__module_info_set_pred_info_4_p_0(
  MR_Word PredId_5,
  MR_Word PredInfo_6,
  MR_Word STATE_VARIABLE_MI_0_10,
  MR_Word * STATE_VARIABLE_MI_11)
{
  MR_Word PredIdTable0_8;
  MR_Word PredIdTable_9;
  MR_Word PredTable_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_10, (MR_Integer) 3))));
  MR_Word PredTable0_24;
  MR_Word PredTable_25;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;

  hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredTable_14, &PredIdTable0_8);
  mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_5)), ((MR_Box) (PredInfo_6)), PredIdTable0_8, &PredIdTable_9);
  PredTable0_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_10, (MR_Integer) 3))));
  hlds__pred_table__predicate_table_set_pred_id_table_3_p_0(PredIdTable_9, PredTable0_24, &PredTable_25);
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_10, (MR_Integer) 0))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_10, (MR_Integer) 1))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_10, (MR_Integer) 2))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_10, (MR_Integer) 4))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_10, (MR_Integer) 5))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_10, (MR_Integer) 6))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_10, (MR_Integer) 7))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_10, (MR_Integer) 8))));
  Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_10, (MR_Integer) 9))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 3) = ((MR_Box) (PredTable_25));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_42));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_43));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_44));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_remove_predicate_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_MI_0_8,
  MR_Word * STATE_VARIABLE_MI_9)
{
  MR_Word PredTable0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 3))));
  MR_Word PredTable_7;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;

  hlds__pred_table__predicate_table_remove_predicate_3_p_0(PredId_4, PredTable0_6, &PredTable_7);
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 0))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 1))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 2))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 4))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 5))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 6))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 7))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 8))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 9))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 3) = ((MR_Box) (PredTable_7));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_28));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_make_pred_ids_invalid_3_p_0(
  MR_Word PredIds_4,
  MR_Word STATE_VARIABLE_MI_0_8,
  MR_Word * STATE_VARIABLE_MI_9)
{
  MR_Word PredTable0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 3))));
  MR_Word PredTable_7;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;

  hlds__pred_table__predicate_table_make_pred_ids_invalid_3_p_0(PredIds_4, PredTable0_6, &PredTable_7);
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 0))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 1))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 2))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 4))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 5))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 6))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 7))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 8))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 9))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 3) = ((MR_Box) (PredTable_7));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_28));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_make_pred_id_invalid_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_MI_0_8,
  MR_Word * STATE_VARIABLE_MI_9)
{
  MR_Word PredTable0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 3))));
  MR_Word PredTable_7;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;

  hlds__pred_table__predicate_table_make_pred_id_invalid_3_p_0(PredId_4, PredTable0_6, &PredTable_7);
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 0))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 1))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 2))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 4))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 5))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 6))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 7))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 8))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 9))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 3) = ((MR_Box) (PredTable_7));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_28));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(
  MR_Word MI_3,
  MR_Word * PredIds_4)
{
  MR_Word PredTable_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 3))));
  MR_Word PredIdSet_6;

  hlds__pred_table__predicate_table_get_valid_pred_id_set_2_p_0(PredTable_5, &PredIdSet_6);
  mercury__set_tree234__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIdSet_6, PredIds_4);
}

void MR_CALL 
hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(
  MR_Word MI_3,
  MR_Word * PredIdSet_4)
{
  MR_Word PredTable_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 3))));

  hlds__pred_table__predicate_table_get_valid_pred_id_set_2_p_0(PredTable_5, PredIdSet_4);
}

void MR_CALL 
hlds__hlds_module__module_info_pred_proc_info_4_p_0(
  MR_Word MI_5,
  MR_Word HeadVar__2_2,
  MR_Word * PredInfo_8,
  MR_Word * ProcInfo_9)
{
  MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Integer ProcId_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word Procs_10;
  MR_Box conv0_ProcInfo_9;

  hlds__hlds_module__module_info_pred_info_3_p_0(MI_5, PredId_6, PredInfo_8);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(*PredInfo_8, &Procs_10);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_10, ((MR_Box) (ProcId_7)), &conv0_ProcInfo_9);
  *ProcInfo_9 = ((MR_Word) (conv0_ProcInfo_9));
}

void MR_CALL 
hlds__hlds_module__module_info_pred_proc_info_5_p_0(
  MR_Word MI_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word * PredInfo_9,
  MR_Word * ProcInfo_10)
{
  MR_Word Procs_11;
  MR_Box conv0_ProcInfo_10;

  hlds__hlds_module__module_info_pred_info_3_p_0(MI_6, PredId_7, PredInfo_9);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(*PredInfo_9, &Procs_11);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_11, ((MR_Box) (ProcId_8)), &conv0_ProcInfo_10);
  *ProcInfo_10 = ((MR_Word) (conv0_ProcInfo_10));
}

void MR_CALL 
hlds__hlds_module__module_info_proc_info_4_p_0(
  MR_Word MI_5,
  MR_Word PredId_6,
  MR_Integer ProcId_7,
  MR_Word * ProcInfo_8)
{
  MR_Word Var_9;
  MR_Word Procs_10;
  MR_Box conv0_ProcInfo_8;

  hlds__hlds_module__module_info_pred_info_3_p_0(MI_5, PredId_6, &Var_9);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(Var_9, &Procs_10);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_10, ((MR_Box) (ProcId_7)), &conv0_ProcInfo_8);
  *ProcInfo_8 = ((MR_Word) (conv0_ProcInfo_8));
}

void MR_CALL 
hlds__hlds_module__module_info_proc_info_3_p_0(
  MR_Word MI_4,
  MR_Word PPId_5,
  MR_Word * ProcInfo_6)
{
  MR_Word Var_7;
  MR_Word PredId_8 = ((MR_Word) ((MR_hl_field(0, PPId_5, (MR_Integer) 0))));
  MR_Integer ProcId_9 = ((MR_Integer) ((MR_hl_field(0, PPId_5, (MR_Integer) 1))));
  MR_Word Procs_10;
  MR_Box conv0_ProcInfo_6;

  hlds__hlds_module__module_info_pred_info_3_p_0(MI_4, PredId_8, &Var_7);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(Var_7, &Procs_10);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_10, ((MR_Box) (ProcId_9)), &conv0_ProcInfo_6);
  *ProcInfo_6 = ((MR_Word) (conv0_ProcInfo_6));
}

void MR_CALL 
hlds__hlds_module__module_info_pred_info_3_p_0(
  MR_Word MI_4,
  MR_Word PredId_5,
  MR_Word * PredInfo_6)
{
  MR_bool succeeded;
  MR_Word PredIdTable_7;
  MR_Word PredTable_16 = ((MR_Word) ((MR_hl_field(0, MI_4, (MR_Integer) 3))));
  MR_Word PredInfoPrime_8;
  MR_Box conv0_PredInfoPrime_8;

  hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredTable_16, &PredIdTable_7);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_7, ((MR_Box) (PredId_5)), &conv0_PredInfoPrime_8);
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
    MR_String Var_12;

    hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_5, &PredInt_9);
    mercury__string__int_to_string_2_p_0(PredInt_9, &PredStr_10);
    Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find predicate number ", PredStr_10);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.hlds_module.module_info_pred_info\'/3", Var_12);
      return;
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_pred_id_table_3_p_0(
  MR_Word PredIdTable_4,
  MR_Word STATE_VARIABLE_MI_0_8,
  MR_Word * STATE_VARIABLE_MI_9)
{
  MR_Word PredTable0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 3))));
  MR_Word PredTable_7;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;

  hlds__pred_table__predicate_table_set_pred_id_table_3_p_0(PredIdTable_4, PredTable0_6, &PredTable_7);
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 0))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 1))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 2))));
  Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 4))));
  Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 5))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 6))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 7))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 8))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 9))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 3) = ((MR_Box) (PredTable_7));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_24));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_25));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_26));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_28));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_pred_id_table_2_p_0(
  MR_Word MI_3,
  MR_Word * PredIdTable_4)
{
  MR_Word PredTable_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 3))));

  hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredTable_5, PredIdTable_4);
}

void MR_CALL 
hlds__hlds_module__module_info_set_type_repn_dec_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (X_4));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_ts_rev_string_table_4_p_0(
  MR_Integer X_5,
  MR_Word Y_6,
  MR_Word STATE_VARIABLE_MI_0_8,
  MR_Word * STATE_VARIABLE_MI_9)
{
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 1))));
  MR_Word Var_15;
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 0))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 2))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 3))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 4))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 5))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 6))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 7))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 8))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 9))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 0))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 1))));
  MR_String Var_27 = ((MR_String) ((MR_hl_field(0, Var_11, (MR_Integer) 2))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 3))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 4))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 5))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 6))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 7))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 8))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 9))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 11))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 12))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 13))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 14))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 15))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 16))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 17))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 18))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 19))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 20))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 21))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 22))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 23))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 24))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 25))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 26))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 27))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 28))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 29))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 30))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 31))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 32))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 33))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 34))));
  MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 35))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 36))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 37))));
  MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 38))));
  MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 39))));
  MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_11, (MR_Integer) 10)));

  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_15, 5) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_15, 6) = ((MR_Box) (Var_31));
    MR_hl_field(0, Var_15, 7) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_15, 8) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_15, 9) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_15, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_15, 11) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_15, 12) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_15, 13) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_15, 14) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_15, 15) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_15, 16) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_15, 17) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_15, 18) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_15, 19) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_15, 20) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_15, 21) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_15, 22) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_15, 23) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_15, 24) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_15, 25) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_15, 26) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_15, 27) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_15, 28) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_15, 29) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_15, 30) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_15, 31) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_15, 32) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_15, 33) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_15, 34) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_15, 35) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_15, 36) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_15, 37) = ((MR_Box) (Var_63));
    MR_hl_field(0, Var_15, 38) = ((MR_Box) (Var_64));
    MR_hl_field(0, Var_15, 39) = ((MR_Box) (Var_65));
    MR_hl_field(0, Var_15, 40) = ((MR_Box) (X_5));
    MR_hl_field(0, Var_15, 41) = ((MR_Box) (Y_6));
    MR_hl_field(0, Var_15, 42) = ((MR_Box) (Var_68));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_24));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_oisu_procs_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_oisu_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_event_set_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_exported_enums_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_format_call_pragma_preds_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_structure_reuse_preds_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_user_final_pred_target_names_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_user_init_pred_target_names_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_analysis_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_proc_analysis_kinds_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_complexity_proc_infos_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_maybe_complexity_proc_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_ancestor_avail_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_used_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_table_struct_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_unused_arg_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_must_be_stratified_preds_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_type_ctor_gen_infos_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_int_bad_clauses_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_foreign_body_codes_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_foreign_decl_codes_aux_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_foreign_decl_codes_user_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_direct_arg_proc_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_has_user_event_2_p_0(
  MR_Word STATE_VARIABLE_MI_0_5,
  MR_Word * STATE_VARIABLE_MI_6)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_5, (MR_Integer) 1))));
  MR_Word Var_9;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_5, (MR_Integer) 0))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_5, (MR_Integer) 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_5, (MR_Integer) 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_5, (MR_Integer) 4))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_5, (MR_Integer) 5))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_5, (MR_Integer) 6))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_5, (MR_Integer) 7))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_5, (MR_Integer) 8))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_5, (MR_Integer) 9))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 0))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 1))));
  MR_String Var_21 = ((MR_String) ((MR_hl_field(0, Var_8, (MR_Integer) 2))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 3))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 4))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 5))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 6))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 7))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 8))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 9))));
  MR_Word Var_29 = ((((MR_Unsigned) ((MR_hl_field(0, Var_8, (MR_Integer) 10))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 11))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 12))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 13))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 14))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 15))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 16))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 17))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 18))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 19))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 20))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 21))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 22))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 23))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 24))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 25))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 26))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 27))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 28))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 29))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 30))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 31))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 32))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 33))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 34))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 35))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 36))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 37))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 38))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 39))));
  MR_Integer Var_60 = ((MR_Integer) ((MR_hl_field(0, Var_8, (MR_Integer) 40))));
  MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 41))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 42))));

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_9, 4) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_9, 5) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_9, 6) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_9, 7) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_9, 8) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_9, 9) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_9, 10) = (MR_Box) (((((MR_Unsigned) (Var_29) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
    MR_hl_field(0, Var_9, 11) = ((MR_Box) (Var_31));
    MR_hl_field(0, Var_9, 12) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_9, 13) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_9, 14) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_9, 15) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_9, 16) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_9, 17) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_9, 18) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_9, 19) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_9, 20) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_9, 21) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_9, 22) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_9, 23) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_9, 24) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_9, 25) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_9, 26) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_9, 27) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_9, 28) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_9, 29) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_9, 30) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_9, 31) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_9, 32) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_9, 33) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_9, 34) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_9, 35) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_9, 36) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_9, 37) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_9, 38) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_9, 39) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_9, 40) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_9, 41) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_9, 42) = ((MR_Box) (Var_62));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_18));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_has_parallel_conj_2_p_0(
  MR_Word STATE_VARIABLE_MI_0_5,
  MR_Word * STATE_VARIABLE_MI_6)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_5, (MR_Integer) 1))));
  MR_Word Var_9;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_5, (MR_Integer) 0))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_5, (MR_Integer) 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_5, (MR_Integer) 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_5, (MR_Integer) 4))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_5, (MR_Integer) 5))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_5, (MR_Integer) 6))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_5, (MR_Integer) 7))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_5, (MR_Integer) 8))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_5, (MR_Integer) 9))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 0))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 1))));
  MR_String Var_21 = ((MR_String) ((MR_hl_field(0, Var_8, (MR_Integer) 2))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 3))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 4))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 5))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 6))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 7))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 8))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 9))));
  MR_Word Var_30 = ((MR_Unsigned) ((MR_hl_field(0, Var_8, (MR_Integer) 10))) & (MR_Integer) 1);
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 11))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 12))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 13))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 14))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 15))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 16))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 17))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 18))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 19))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 20))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 21))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 22))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 23))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 24))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 25))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 26))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 27))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 28))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 29))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 30))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 31))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 32))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 33))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 34))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 35))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 36))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 37))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 38))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 39))));
  MR_Integer Var_60 = ((MR_Integer) ((MR_hl_field(0, Var_8, (MR_Integer) 40))));
  MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 41))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 42))));

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_9, 4) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_9, 5) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_9, 6) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_9, 7) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_9, 8) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_9, 9) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_9, 10) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (Var_30)));
    MR_hl_field(0, Var_9, 11) = ((MR_Box) (Var_31));
    MR_hl_field(0, Var_9, 12) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_9, 13) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_9, 14) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_9, 15) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_9, 16) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_9, 17) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_9, 18) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_9, 19) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_9, 20) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_9, 21) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_9, 22) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_9, 23) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_9, 24) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_9, 25) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_9, 26) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_9, 27) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_9, 28) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_9, 29) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_9, 30) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_9, 31) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_9, 32) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_9, 33) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_9, 34) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_9, 35) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_9, 36) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_9, 37) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_9, 38) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_9, 39) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_9, 40) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_9, 41) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_9, 42) = ((MR_Box) (Var_62));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_18));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_exclusive_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_assertion_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_proc_requests_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_String Var_22 = ((MR_String) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 13))));
  MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 14))));
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 15))));
  MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 16))));
  MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 17))));
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 18))));
  MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 19))));
  MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 20))));
  MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 21))));
  MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 22))));
  MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 23))));
  MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 24))));
  MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 25))));
  MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 26))));
  MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 27))));
  MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 28))));
  MR_Word Var_50 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 29))));
  MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 30))));
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 31))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 32))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 33))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 34))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 35))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 36))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 37))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 38))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 39))));
  MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 40))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 41))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 42))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 10)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 10) = (MR_Box) (packed_word_0);
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 13) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_10, 14) = ((MR_Box) (Var_35));
    MR_hl_field(0, Var_10, 15) = ((MR_Box) (Var_36));
    MR_hl_field(0, Var_10, 16) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 17) = ((MR_Box) (Var_38));
    MR_hl_field(0, Var_10, 18) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_10, 19) = ((MR_Box) (Var_40));
    MR_hl_field(0, Var_10, 20) = ((MR_Box) (Var_41));
    MR_hl_field(0, Var_10, 21) = ((MR_Box) (Var_42));
    MR_hl_field(0, Var_10, 22) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_10, 23) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_10, 24) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_10, 25) = ((MR_Box) (Var_46));
    MR_hl_field(0, Var_10, 26) = ((MR_Box) (Var_47));
    MR_hl_field(0, Var_10, 27) = ((MR_Box) (Var_48));
    MR_hl_field(0, Var_10, 28) = ((MR_Box) (Var_49));
    MR_hl_field(0, Var_10, 29) = ((MR_Box) (Var_50));
    MR_hl_field(0, Var_10, 30) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_10, 31) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_10, 32) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_10, 33) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_10, 34) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_10, 35) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_10, 36) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_10, 37) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_10, 38) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_10, 39) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_10, 40) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_10, 41) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_10, 42) = ((MR_Box) (Var_63));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_maybe_recompilation_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_bool succeeded;
  MR_Word Var_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));

  Var_8 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_12;
    MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 0))));
    MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 1))));
    MR_String Var_76 = ((MR_String) ((MR_hl_field(0, Var_11, (MR_Integer) 2))));
    MR_Word Var_77 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 3))));
    MR_Word Var_78 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 4))));
    MR_Word Var_80 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 6))));
    MR_Word Var_81 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 7))));
    MR_Word Var_82 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 8))));
    MR_Word Var_83 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 9))));
    MR_Word Var_86 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 11))));
    MR_Word Var_87 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 12))));
    MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 13))));
    MR_Word Var_89 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 14))));
    MR_Word Var_90 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 15))));
    MR_Word Var_91 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 16))));
    MR_Word Var_92 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 17))));
    MR_Word Var_93 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 18))));
    MR_Word Var_94 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 19))));
    MR_Word Var_95 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 20))));
    MR_Word Var_96 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 21))));
    MR_Word Var_97 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 22))));
    MR_Word Var_98 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 23))));
    MR_Word Var_99 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 24))));
    MR_Word Var_100 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 25))));
    MR_Word Var_101 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 26))));
    MR_Word Var_102 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 27))));
    MR_Word Var_103 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 28))));
    MR_Word Var_104 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 29))));
    MR_Word Var_105 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 30))));
    MR_Word Var_106 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 31))));
    MR_Word Var_107 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 32))));
    MR_Word Var_108 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 33))));
    MR_Word Var_109 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 34))));
    MR_Word Var_110 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 35))));
    MR_Word Var_111 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 36))));
    MR_Word Var_112 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 37))));
    MR_Word Var_113 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 38))));
    MR_Word Var_114 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 39))));
    MR_Integer Var_115 = ((MR_Integer) ((MR_hl_field(0, Var_11, (MR_Integer) 40))));
    MR_Word Var_116 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 41))));
    MR_Word Var_117 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 42))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_11, (MR_Integer) 10)));

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_74));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) (Var_75));
      MR_hl_field(0, Var_12, 2) = ((MR_Box) (Var_76));
      MR_hl_field(0, Var_12, 3) = ((MR_Box) (Var_77));
      MR_hl_field(0, Var_12, 4) = ((MR_Box) (Var_78));
      MR_hl_field(0, Var_12, 5) = ((MR_Box) (X_4));
      MR_hl_field(0, Var_12, 6) = ((MR_Box) (Var_80));
      MR_hl_field(0, Var_12, 7) = ((MR_Box) (Var_81));
      MR_hl_field(0, Var_12, 8) = ((MR_Box) (Var_82));
      MR_hl_field(0, Var_12, 9) = ((MR_Box) (Var_83));
      MR_hl_field(0, Var_12, 10) = (MR_Box) (packed_word_1);
      MR_hl_field(0, Var_12, 11) = ((MR_Box) (Var_86));
      MR_hl_field(0, Var_12, 12) = ((MR_Box) (Var_87));
      MR_hl_field(0, Var_12, 13) = ((MR_Box) (Var_88));
      MR_hl_field(0, Var_12, 14) = ((MR_Box) (Var_89));
      MR_hl_field(0, Var_12, 15) = ((MR_Box) (Var_90));
      MR_hl_field(0, Var_12, 16) = ((MR_Box) (Var_91));
      MR_hl_field(0, Var_12, 17) = ((MR_Box) (Var_92));
      MR_hl_field(0, Var_12, 18) = ((MR_Box) (Var_93));
      MR_hl_field(0, Var_12, 19) = ((MR_Box) (Var_94));
      MR_hl_field(0, Var_12, 20) = ((MR_Box) (Var_95));
      MR_hl_field(0, Var_12, 21) = ((MR_Box) (Var_96));
      MR_hl_field(0, Var_12, 22) = ((MR_Box) (Var_97));
      MR_hl_field(0, Var_12, 23) = ((MR_Box) (Var_98));
      MR_hl_field(0, Var_12, 24) = ((MR_Box) (Var_99));
      MR_hl_field(0, Var_12, 25) = ((MR_Box) (Var_100));
      MR_hl_field(0, Var_12, 26) = ((MR_Box) (Var_101));
      MR_hl_field(0, Var_12, 27) = ((MR_Box) (Var_102));
      MR_hl_field(0, Var_12, 28) = ((MR_Box) (Var_103));
      MR_hl_field(0, Var_12, 29) = ((MR_Box) (Var_104));
      MR_hl_field(0, Var_12, 30) = ((MR_Box) (Var_105));
      MR_hl_field(0, Var_12, 31) = ((MR_Box) (Var_106));
      MR_hl_field(0, Var_12, 32) = ((MR_Box) (Var_107));
      MR_hl_field(0, Var_12, 33) = ((MR_Box) (Var_108));
      MR_hl_field(0, Var_12, 34) = ((MR_Box) (Var_109));
      MR_hl_field(0, Var_12, 35) = ((MR_Box) (Var_110));
      MR_hl_field(0, Var_12, 36) = ((MR_Box) (Var_111));
      MR_hl_field(0, Var_12, 37) = ((MR_Box) (Var_112));
      MR_hl_field(0, Var_12, 38) = ((MR_Box) (Var_113));
      MR_hl_field(0, Var_12, 39) = ((MR_Box) (Var_114));
      MR_hl_field(0, Var_12, 40) = ((MR_Box) (Var_115));
      MR_hl_field(0, Var_12, 41) = ((MR_Box) (Var_116));
      MR_hl_field(0, Var_12, 42) = ((MR_Box) (Var_117));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_65));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_66));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_67));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_68));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_69));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_70));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_71));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_72));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_73));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_pragma_exported_procs_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_bool succeeded;
  MR_Word Var_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));

  Var_8 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12;
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 0))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 1))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 2))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 3))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 4))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 5))));

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_37));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) (Var_38));
      MR_hl_field(0, Var_12, 2) = ((MR_Box) (Var_39));
      MR_hl_field(0, Var_12, 3) = ((MR_Box) (Var_40));
      MR_hl_field(0, Var_12, 4) = ((MR_Box) (Var_41));
      MR_hl_field(0, Var_12, 5) = ((MR_Box) (Var_42));
      MR_hl_field(0, Var_12, 6) = ((MR_Box) (X_4));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_12));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_28));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_29));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_30));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_31));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_32));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_34));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_35));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_36));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_c_j_cs_fims_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_const_struct_db_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_bool succeeded;
  MR_Word Var_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));

  Var_8 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12;
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 0))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 1))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 2))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 3))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 5))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 6))));

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_37));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) (Var_38));
      MR_hl_field(0, Var_12, 2) = ((MR_Box) (Var_39));
      MR_hl_field(0, Var_12, 3) = ((MR_Box) (Var_40));
      MR_hl_field(0, Var_12, 4) = ((MR_Box) (X_4));
      MR_hl_field(0, Var_12, 5) = ((MR_Box) (Var_42));
      MR_hl_field(0, Var_12, 6) = ((MR_Box) (Var_43));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_12));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_28));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_29));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_30));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_31));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_32));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_34));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_35));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_36));
    }
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_type_spec_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_instance_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_class_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_special_pred_maps_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_26));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_19));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_ctor_field_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (X_4));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_cons_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_mode_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_inst_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_no_tag_types_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_type_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_predicate_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_set_globals_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 8))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 9))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_17));
  }
}

void MR_CALL 
hlds__hlds_module__module_info_get_type_repn_dec_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 42))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_ts_rev_string_table_3_p_0(
  MR_Word MI_4,
  MR_Integer * X_5,
  MR_Word * Y_6)
{
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, MI_4, (MR_Integer) 1))));

  *X_5 = ((MR_Integer) ((MR_hl_field(0, Var_7, (MR_Integer) 40))));
  *Y_6 = ((MR_Word) ((MR_hl_field(0, Var_7, (MR_Integer) 41))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_oisu_procs_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 39))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_oisu_map_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 38))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_event_set_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 37))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_exported_enums_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 36))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_format_call_pragma_preds_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 35))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_structure_reuse_preds_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 34))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_user_final_pred_target_names_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 33))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_user_init_pred_target_names_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 32))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_analysis_info_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 31))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_proc_analysis_kinds_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 30))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_complexity_proc_infos_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 29))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 28))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_ancestor_avail_modules_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 27))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_used_modules_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 26))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_avail_module_map_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 24))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_table_struct_map_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 20))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_unused_arg_info_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 19))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 18))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 17))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_maybe_dependency_info_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 16))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_int_bad_clauses_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 15))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_fact_table_file_names_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 14))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_foreign_body_codes_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 13))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_foreign_decl_codes_aux_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 12))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_foreign_decl_codes_user_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 11))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_direct_arg_proc_map_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 9))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_has_user_event_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 10))) & (MR_Integer) 1);
}

void MR_CALL 
hlds__hlds_module__module_info_get_has_parallel_conj_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 10))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
hlds__hlds_module__module_info_get_exclusive_table_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 8))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_assertion_table_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 7))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_proc_requests_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 6))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_maybe_recompilation_info_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 5))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 4))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_include_module_map_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 3))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_dump_hlds_base_file_name_2_p_0(
  MR_Word MI_3,
  MR_String * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_String) ((MR_hl_field(0, Var_5, (MR_Integer) 2))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_name_context_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 1))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_name_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 0))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 6))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_c_j_cs_fims_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 5))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_const_struct_db_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 4))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_type_spec_info_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 3))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_instance_table_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 2))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_class_table_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 1))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 0))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 0))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 9))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_cons_table_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 8))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_mode_table_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_inst_table_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 6))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_no_tag_types_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 5))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_type_table_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 4))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_predicate_table_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 3))));
}

void MR_CALL 
hlds__hlds_module__module_info_get_globals_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 2))));
}

void MR_CALL 
hlds__hlds_module__module_info_optimize_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15)
{
  MR_Word Preds0_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_0_14, (MR_Integer) 3))));
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
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_77;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_96;

  hlds__pred_table__predicate_table_optimize_2_p_0(Preds0_4, &Preds_5);
  Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_0_14, (MR_Integer) 0))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_0_14, (MR_Integer) 1))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_0_14, (MR_Integer) 2))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_0_14, (MR_Integer) 4))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_0_14, (MR_Integer) 5))));
  InstTable0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_0_14, (MR_Integer) 6))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_0_14, (MR_Integer) 7))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_0_14, (MR_Integer) 8))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_0_14, (MR_Integer) 9))));
  {
    STATE_VARIABLE_ModuleInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_16_16, 0) = ((MR_Box) (Var_30));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_16_16, 1) = ((MR_Box) (Var_31));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_16_16, 2) = ((MR_Box) (Var_32));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_16_16, 3) = ((MR_Box) (Preds_5));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_16_16, 4) = ((MR_Box) (Var_34));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_16_16, 5) = ((MR_Box) (Var_35));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_16_16, 6) = ((MR_Box) (InstTable0_6));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_16_16, 7) = ((MR_Box) (Var_37));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_16_16, 8) = ((MR_Box) (Var_38));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_16_16, 9) = ((MR_Box) (Var_39));
  }
  hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable0_6, &UserInstTable0_7);
  mercury__map__optimize_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0), UserInstTable0_7, &UserInstTable_8);
  hlds__hlds_inst_mode__inst_table_set_user_insts_3_p_0(UserInstTable_8, InstTable0_6, &InstTable_9);
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_16_16, (MR_Integer) 0))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_16_16, (MR_Integer) 1))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_16_16, (MR_Integer) 2))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_16_16, (MR_Integer) 3))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_16_16, (MR_Integer) 4))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_16_16, (MR_Integer) 5))));
  Modes0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_16_16, (MR_Integer) 7))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_16_16, (MR_Integer) 8))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_16_16, (MR_Integer) 9))));
  {
    STATE_VARIABLE_ModuleInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_17_17, 0) = ((MR_Box) (Var_49));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_17_17, 1) = ((MR_Box) (Var_50));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_17_17, 2) = ((MR_Box) (Var_51));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_17_17, 3) = ((MR_Box) (Var_52));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_17_17, 4) = ((MR_Box) (Var_53));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_17_17, 5) = ((MR_Box) (Var_54));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_17_17, 6) = ((MR_Box) (InstTable_9));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_17_17, 7) = ((MR_Box) (Modes0_10));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_17_17, 8) = ((MR_Box) (Var_57));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_17_17, 9) = ((MR_Box) (Var_58));
  }
  hlds__hlds_inst_mode__mode_table_optimize_2_p_0(Modes0_10, &Modes_11);
  Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_17_17, (MR_Integer) 0))));
  Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_17_17, (MR_Integer) 1))));
  Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_17_17, (MR_Integer) 2))));
  Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_17_17, (MR_Integer) 3))));
  Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_17_17, (MR_Integer) 4))));
  Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_17_17, (MR_Integer) 5))));
  Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_17_17, (MR_Integer) 6))));
  Ctors0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_17_17, (MR_Integer) 8))));
  Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_17_17, (MR_Integer) 9))));
  {
    STATE_VARIABLE_ModuleInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_18_18, 0) = ((MR_Box) (Var_68));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_18_18, 1) = ((MR_Box) (Var_69));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_18_18, 2) = ((MR_Box) (Var_70));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_18_18, 3) = ((MR_Box) (Var_71));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_18_18, 4) = ((MR_Box) (Var_72));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_18_18, 5) = ((MR_Box) (Var_73));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_18_18, 6) = ((MR_Box) (Var_74));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_18_18, 7) = ((MR_Box) (Modes_11));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_18_18, 8) = ((MR_Box) (Ctors0_12));
    MR_hl_field(0, STATE_VARIABLE_ModuleInfo_18_18, 9) = ((MR_Box) (Var_77));
  }
  hlds__hlds_cons__cons_table_optimize_2_p_0(Ctors0_12, &Ctors_13);
  Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_18_18, (MR_Integer) 0))));
  Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_18_18, (MR_Integer) 1))));
  Var_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_18_18, (MR_Integer) 2))));
  Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_18_18, (MR_Integer) 3))));
  Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_18_18, (MR_Integer) 4))));
  Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_18_18, (MR_Integer) 5))));
  Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_18_18, (MR_Integer) 6))));
  Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_18_18, (MR_Integer) 7))));
  Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModuleInfo_18_18, (MR_Integer) 9))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_ModuleInfo_15 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_87));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_88));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_89));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_90));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_91));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_92));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_93));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_94));
    MR_hl_field(0, base, 8) = ((MR_Box) (Ctors_13));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_96));
  }
}

static void MR_CALL 
hlds__hlds_module__module_info_init_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_AvailModuleMap_10;

  hlds__hlds_module__add_implicit_avail_module_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_AvailModuleMap_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_AvailModuleMap_10));
}

void MR_CALL 
hlds__hlds_module__module_info_init_11_p_0(
  MR_Word Globals_12,
  MR_Word ModuleName_13,
  MR_Word ModuleNameContext_14,
  MR_String DumpBaseFileName_15,
  MR_Word InclMap_16,
  MR_Word UsedModules_17,
  MR_Word ImplicitlyUsedModules_18,
  MR_Word QualifierInfo_19,
  MR_Word MaybeRecompInfo_20,
  MR_Word TypeRepnDec_21,
  MR_Word * ModuleInfo_22)
{
  MR_bool succeeded;
  MR_Word SpecialPredMaps_23;
  MR_Word ClassTable_24;
  MR_Word InstanceTable_25;
  MR_Word TypeSpecPreds_26;
  MR_Word TypeSpecForcePreds_27;
  MR_Word SpecMap_28;
  MR_Word PragmaMap_29;
  MR_Word TypeSpecInfo_30;
  MR_Word ConstStructDb_31;
  MR_Word ForeignImportModules_32;
  MR_Word PragmaExportedProcs_33;
  MR_Word ModuleSubInfo_34;
  MR_Word ProcRequests_35;
  MR_Word AssertionTable_36;
  MR_Word ExclusiveTable_37;
  MR_Word DirectArgInOutMap_38;
  MR_Word ForeignDeclsUser_41;
  MR_Word ForeignDeclsAux_42;
  MR_Word ForeignBodies_43;
  MR_Word IntBadPreds_45;
  MR_Word StratPreds_48;
  MR_Word UnusedArgInfo_49;
  MR_Word TablingStructMap_50;
  MR_Word LambdasPerContext_51;
  MR_Word AtomicsPerContext_52;
  MR_Word LoopInvsPerContext_53;
  MR_Word AvailModuleMap0_54;
  MR_Word AvailModuleMap1_55;
  MR_Word AvailModuleMap_56;
  MR_Word IndirectlyImportedModules_57;
  MR_Word AncestorAvailModules_58;
  MR_Word ProcAnalysisKinds_61;
  MR_Word OpMode_62;
  MR_Word MakeAnalysisReg_64;
  MR_Word AnalysisInfo_65;
  MR_Word UserInitPredTargetNames_66;
  MR_Word UserFinalPredTargetNames_67;
  MR_Word StructureReusePredIds_68;
  MR_Word FormatCallPragmaPredIds_69;
  MR_Word EventSet_71;
  MR_Word OISUMap_72;
  MR_Word OISUProcs_73;
  MR_Word ModuleRareInfo_76;
  MR_Word PredicateTable_77;
  MR_Word TypeTable_78;
  MR_Word NoTagTypes_79;
  MR_Word InstTable_80;
  MR_Word ModeTable_81;
  MR_Word CtorTable_82;
  MR_Word FieldNameTable_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_88;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_97;
  MR_Box conv1_AvailModuleMap_56;
  MR_Word Var_91;
  MR_Word Var_92;

  Var_84 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  Var_85 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  Var_86 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0));
  {
    SpecialPredMaps_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SpecialPredMaps_23, 0) = ((MR_Box) (Var_84));
    MR_hl_field(0, SpecialPredMaps_23, 1) = ((MR_Box) (Var_85));
    MR_hl_field(0, SpecialPredMaps_23, 2) = ((MR_Box) (Var_86));
  }
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), &ClassTable_24);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_module_scalar_common_1[0]), &InstanceTable_25);
  mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &TypeSpecPreds_26);
  mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &TypeSpecForcePreds_27);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module_scalar_common_1[1]), &SpecMap_28);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module_scalar_common_1[2]), &PragmaMap_29);
  {
    TypeSpecInfo_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeSpecInfo_30, 0) = ((MR_Box) (TypeSpecPreds_26));
    MR_hl_field(0, TypeSpecInfo_30, 1) = ((MR_Box) (TypeSpecForcePreds_27));
    MR_hl_field(0, TypeSpecInfo_30, 2) = ((MR_Box) (SpecMap_28));
    MR_hl_field(0, TypeSpecInfo_30, 3) = ((MR_Box) (PragmaMap_29));
  }
  hlds__const_struct__const_struct_db_init_2_p_0(Globals_12, &ConstStructDb_31);
  ForeignImportModules_32 = parse_tree__prog_data_foreign__init_foreign_import_modules_0_f_0();
  PragmaExportedProcs_33 = mercury__cord__init_0_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0));
  {
    ModuleSubInfo_34 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ModuleSubInfo_34, 0) = ((MR_Box) (SpecialPredMaps_23));
    MR_hl_field(0, ModuleSubInfo_34, 1) = ((MR_Box) (ClassTable_24));
    MR_hl_field(0, ModuleSubInfo_34, 2) = ((MR_Box) (InstanceTable_25));
    MR_hl_field(0, ModuleSubInfo_34, 3) = ((MR_Box) (TypeSpecInfo_30));
    MR_hl_field(0, ModuleSubInfo_34, 4) = ((MR_Box) (ConstStructDb_31));
    MR_hl_field(0, ModuleSubInfo_34, 5) = ((MR_Box) (ForeignImportModules_32));
    MR_hl_field(0, ModuleSubInfo_34, 6) = ((MR_Box) (PragmaExportedProcs_33));
  }
  check_hlds__proc_requests__init_requests_1_p_0(&ProcRequests_35);
  hlds__hlds_promise__assertion_table_init_1_p_0(&AssertionTable_36);
  hlds__hlds_promise__exclusive_table_init_1_p_0(&ExclusiveTable_37);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_direct_arg_proc_0), &DirectArgInOutMap_38);
  ForeignDeclsUser_41 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0));
  ForeignDeclsAux_42 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0));
  ForeignBodies_43 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0));
  mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_pf_name_arity_0), &IntBadPreds_45);
  mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &StratPreds_48);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module_scalar_common_1[3]), &UnusedArgInfo_49);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0), &TablingStructMap_50);
  mercury__map__init_1_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), &LambdasPerContext_51);
  mercury__map__init_1_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), &AtomicsPerContext_52);
  mercury__map__init_1_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&mercury__counter__counter__type_ctor_info_counter_0), &LoopInvsPerContext_53);
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), &AvailModuleMap0_54);
  Var_88 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  hlds__hlds_module__add_implicit_avail_module_4_p_0((MR_Integer) 0, Var_88, AvailModuleMap0_54, &AvailModuleMap1_55);
  mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module_scalar_common_2[0]), (MR_Word) (&hlds__hlds_module_scalar_common_3[1]), ImplicitlyUsedModules_18, ((MR_Box) (AvailModuleMap1_55)), &conv1_AvailModuleMap_56);
  AvailModuleMap_56 = ((MR_Word) (conv1_AvailModuleMap_56));
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IndirectlyImportedModules_57);
  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &AncestorAvailModules_58);
  mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_proc_analysis_kind_0), &ProcAnalysisKinds_61);
  libs__globals__get_op_mode_2_p_0(Globals_12, &OpMode_62);
  succeeded = ((MR_tag((MR_Word) OpMode_62)) == (MR_Integer) 3);
  if (succeeded)
  {
    Var_91 = ((MR_Word) ((MR_hl_field(3, OpMode_62, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_91)) == (MR_Integer) 2);
    if (succeeded)
    {
      Var_92 = ((MR_Word) ((MR_hl_field(2, Var_91, (MR_Integer) 0))));
      succeeded = (Var_92 == (MR_Word) ((MR_Unsigned) 8U));
    }
  }
  if (succeeded)
    MakeAnalysisReg_64 = (MR_Integer) 1;
  else
    MakeAnalysisReg_64 = (MR_Integer) 0;
  AnalysisInfo_65 = analysis__init_analysis_info_3_f_0((MR_Word) (&hlds__hlds_module_scalar_common_1[4]), ((MR_Box) ((MR_Integer) 0)), ModuleName_13, MakeAnalysisReg_64);
  Var_94 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_module_scalar_common_1[5]));
  UserInitPredTargetNames_66 = (MR_Word) (Var_94);
  Var_95 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__hlds_module_scalar_common_1[5]));
  UserFinalPredTargetNames_67 = (MR_Word) (Var_95);
  mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &StructureReusePredIds_68);
  mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &FormatCallPragmaPredIds_69);
  Var_97 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0));
  {
    EventSet_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, EventSet_71, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, EventSet_71, 1) = ((MR_Box) (Var_97));
  }
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_oisu_preds_0), &OISUMap_72);
  mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &OISUProcs_73);
  {
    ModuleRareInfo_76 = (MR_Word) MR_new_object(MR_Word, (43 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ModuleRareInfo_76, 0) = ((MR_Box) (ModuleName_13));
    MR_hl_field(0, ModuleRareInfo_76, 1) = ((MR_Box) (ModuleNameContext_14));
    MR_hl_field(0, ModuleRareInfo_76, 2) = ((MR_Box) (DumpBaseFileName_15));
    MR_hl_field(0, ModuleRareInfo_76, 3) = ((MR_Box) (InclMap_16));
    MR_hl_field(0, ModuleRareInfo_76, 4) = ((MR_Box) (QualifierInfo_19));
    MR_hl_field(0, ModuleRareInfo_76, 5) = ((MR_Box) (MaybeRecompInfo_20));
    MR_hl_field(0, ModuleRareInfo_76, 6) = ((MR_Box) (ProcRequests_35));
    MR_hl_field(0, ModuleRareInfo_76, 7) = ((MR_Box) (AssertionTable_36));
    MR_hl_field(0, ModuleRareInfo_76, 8) = ((MR_Box) (ExclusiveTable_37));
    MR_hl_field(0, ModuleRareInfo_76, 9) = ((MR_Box) (DirectArgInOutMap_38));
    MR_hl_field(0, ModuleRareInfo_76, 10) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    MR_hl_field(0, ModuleRareInfo_76, 11) = ((MR_Box) (ForeignDeclsUser_41));
    MR_hl_field(0, ModuleRareInfo_76, 12) = ((MR_Box) (ForeignDeclsAux_42));
    MR_hl_field(0, ModuleRareInfo_76, 13) = ((MR_Box) (ForeignBodies_43));
    MR_hl_field(0, ModuleRareInfo_76, 14) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ModuleRareInfo_76, 15) = ((MR_Box) (IntBadPreds_45));
    MR_hl_field(0, ModuleRareInfo_76, 16) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ModuleRareInfo_76, 17) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ModuleRareInfo_76, 18) = ((MR_Box) (StratPreds_48));
    MR_hl_field(0, ModuleRareInfo_76, 19) = ((MR_Box) (UnusedArgInfo_49));
    MR_hl_field(0, ModuleRareInfo_76, 20) = ((MR_Box) (TablingStructMap_50));
    MR_hl_field(0, ModuleRareInfo_76, 21) = ((MR_Box) (LambdasPerContext_51));
    MR_hl_field(0, ModuleRareInfo_76, 22) = ((MR_Box) (AtomicsPerContext_52));
    MR_hl_field(0, ModuleRareInfo_76, 23) = ((MR_Box) (LoopInvsPerContext_53));
    MR_hl_field(0, ModuleRareInfo_76, 24) = ((MR_Box) (AvailModuleMap_56));
    MR_hl_field(0, ModuleRareInfo_76, 25) = ((MR_Box) (IndirectlyImportedModules_57));
    MR_hl_field(0, ModuleRareInfo_76, 26) = ((MR_Box) (UsedModules_17));
    MR_hl_field(0, ModuleRareInfo_76, 27) = ((MR_Box) (AncestorAvailModules_58));
    MR_hl_field(0, ModuleRareInfo_76, 28) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ModuleRareInfo_76, 29) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ModuleRareInfo_76, 30) = ((MR_Box) (ProcAnalysisKinds_61));
    MR_hl_field(0, ModuleRareInfo_76, 31) = ((MR_Box) (AnalysisInfo_65));
    MR_hl_field(0, ModuleRareInfo_76, 32) = ((MR_Box) (UserInitPredTargetNames_66));
    MR_hl_field(0, ModuleRareInfo_76, 33) = ((MR_Box) (UserFinalPredTargetNames_67));
    MR_hl_field(0, ModuleRareInfo_76, 34) = ((MR_Box) (StructureReusePredIds_68));
    MR_hl_field(0, ModuleRareInfo_76, 35) = ((MR_Box) (FormatCallPragmaPredIds_69));
    MR_hl_field(0, ModuleRareInfo_76, 36) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ModuleRareInfo_76, 37) = ((MR_Box) (EventSet_71));
    MR_hl_field(0, ModuleRareInfo_76, 38) = ((MR_Box) (OISUMap_72));
    MR_hl_field(0, ModuleRareInfo_76, 39) = ((MR_Box) (OISUProcs_73));
    MR_hl_field(0, ModuleRareInfo_76, 40) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, ModuleRareInfo_76, 41) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ModuleRareInfo_76, 42) = ((MR_Box) (TypeRepnDec_21));
  }
  hlds__pred_table__predicate_table_init_1_p_0(&PredicateTable_77);
  TypeTable_78 = hlds__hlds_data__init_type_table_0_f_0();
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0), &NoTagTypes_79);
  hlds__hlds_inst_mode__inst_table_init_1_p_0(&InstTable_80);
  hlds__hlds_inst_mode__mode_table_init_1_p_0(&ModeTable_81);
  CtorTable_82 = hlds__hlds_cons__init_cons_table_0_f_0();
  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module_scalar_common_1[6]), &FieldNameTable_83);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    *ModuleInfo_22 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleSubInfo_34));
    MR_hl_field(0, base, 1) = ((MR_Box) (ModuleRareInfo_76));
    MR_hl_field(0, base, 2) = ((MR_Box) (Globals_12));
    MR_hl_field(0, base, 3) = ((MR_Box) (PredicateTable_77));
    MR_hl_field(0, base, 4) = ((MR_Box) (TypeTable_78));
    MR_hl_field(0, base, 5) = ((MR_Box) (NoTagTypes_79));
    MR_hl_field(0, base, 6) = ((MR_Box) (InstTable_80));
    MR_hl_field(0, base, 7) = ((MR_Box) (ModeTable_81));
    MR_hl_field(0, base, 8) = ((MR_Box) (CtorTable_82));
    MR_hl_field(0, base, 9) = ((MR_Box) (FieldNameTable_83));
  }
}

static void MR_CALL 
hlds__hlds_module__add_implicit_avail_module_4_p_0(
  MR_Word ImportOrUse_5,
  MR_Word ModuleName_6,
  MR_Word STATE_VARIABLE_AvailModuleMap_0_9,
  MR_Word * STATE_VARIABLE_AvailModuleMap_10)
{
  MR_Word Entry_8;

  {
    Entry_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entry_8, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (ImportOrUse_5)));
    MR_hl_field(0, Entry_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), ((MR_Box) (ModuleName_6)), ((MR_Box) (Entry_8)), STATE_VARIABLE_AvailModuleMap_0_9, STATE_VARIABLE_AvailModuleMap_10);
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____avail_module_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____avail_module_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____avail_module_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____avail_module_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____avail_module_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____avail_module_entry_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____avail_module_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____avail_module_entry_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____avail_module_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____avail_module_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____avail_module_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____avail_module_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____complexity_arg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____complexity_arg_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____complexity_arg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____complexity_arg_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____complexity_arg_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____complexity_arg_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____complexity_arg_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____complexity_arg_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____complexity_proc_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____complexity_proc_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____complexity_proc_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____complexity_proc_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____complexity_proc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____complexity_proc_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____complexity_proc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____complexity_proc_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____direct_arg_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____direct_arg_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____direct_arg_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____direct_arg_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____direct_arg_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____direct_arg_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____direct_arg_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____direct_arg_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____direct_arg_proc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____direct_arg_proc_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____direct_arg_proc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____direct_arg_proc_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____exported_enum_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____exported_enum_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____exported_enum_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____exported_enum_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____module_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____module_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____module_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____module_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____module_rare_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____module_rare_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____module_rare_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____module_rare_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____module_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____module_sub_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____module_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____module_sub_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____oisu_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____oisu_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____oisu_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____oisu_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____oisu_preds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____oisu_preds_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____oisu_preds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____oisu_preds_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____pragma_exported_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____pragma_exported_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____pragma_exported_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____pragma_exported_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____proc_analysis_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____proc_analysis_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____proc_analysis_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____proc_analysis_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____table_struct_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____table_struct_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____table_struct_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____table_struct_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____table_struct_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____table_struct_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____table_struct_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____table_struct_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____type_ctor_gen_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____type_ctor_gen_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____type_ctor_gen_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____type_ctor_gen_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____type_repn_decision_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____type_repn_decision_data_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____type_repn_decision_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____type_repn_decision_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____type_spec_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____type_spec_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____type_spec_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____type_spec_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__hlds_module____Unify____unused_arg_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_module____Unify____unused_arg_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_module____Compare____unused_arg_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_module____Compare____unused_arg_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_direct_arg_proc_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_direct_arg_proc_map_0);
	MR_register_type_ctor_info(&hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0);
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
