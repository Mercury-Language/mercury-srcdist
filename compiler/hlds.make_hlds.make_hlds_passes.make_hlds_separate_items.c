/*
** Automatically generated from `make_hlds_separate_items.m'
** by the Mercury compiler,
** version rotd-2023-08-20
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


// :- module hlds.make_hlds.make_hlds_passes.make_hlds_separate_items.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__init
ENDINIT
*/

#include "hlds.make_hlds.make_hlds_passes.make_hlds_separate_items.mih"


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
#include "term_subst.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.add_pred.mih"
#include "hlds.add_special_pred.mih"
#include "hlds.const_struct.mih"
#include "hlds.default_func_mode.mih"
#include "hlds.goal_mode.mih"
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
#include "hlds.make_hlds.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
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
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_stats.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_mode.mih"
#include "hlds.make_hlds.add_mutable_aux_preds.mih"
#include "hlds.make_hlds.add_pragma.mih"
#include "hlds.make_hlds.add_solver.mih"
#include "hlds.make_hlds.add_type.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.make_hlds_types.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__pti_cord_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0;

static const MR_VA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__pti_cord_1__pseudo___vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__list__pti_list_1__pseudo___vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0;

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__field_types_int_type_ctor_repns_0_0[2];

static const MR_DuArgLocn hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__field_locns_int_type_ctor_repns_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_functor_desc_int_type_ctor_repns_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_stag_ordered_int_type_ctor_repns_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_ptag_ordered_int_type_ctor_repns_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_name_ordered_int_type_ctor_repns_0[1];

static const MR_Integer hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__functor_number_map_int_type_ctor_repns_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_avail_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_avail_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_fim_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_typeclass_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_typeclass_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_instance_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_instance_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_clause_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_clause_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0;

static const MR_VA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1__vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_promise_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_promise_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_initialise_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_initialise_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_finalise_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_finalise_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__list__ti_list_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0;

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__field_types_item_accumulator_0_0[33];

static const MR_ConstString hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__field_names_item_accumulator_0_0[33];

static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_functor_desc_item_accumulator_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_stag_ordered_item_accumulator_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_ptag_ordered_item_accumulator_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_name_ordered_item_accumulator_0[1];

static const MR_Integer hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__functor_number_map_item_accumulator_0[1];

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntroducedFrom__pred__acc_parse_tree_int2__851__1_2_p_0(
  MR_Word ImpAvails_64,
  MR_Word HeadVar__2_98);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____module_int_type_ctor_repns_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____module_int_type_ctor_repns_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____item_accumulator_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____item_accumulator_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____int_type_ctor_repns_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____int_type_ctor_repns_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____ims_tuple_cord_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____ims_tuple_cord_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_trans_opt_3_p_0(
  MR_Word ParseTreeTransOpt_4,
  MR_Word STATE_VARIABLE_Acc_0_55,
  MR_Word * STATE_VARIABLE_Acc_56);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_plain_opt_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_plain_opt_3_p_0(
  MR_Word ParseTreePlainOpt_4,
  MR_Word STATE_VARIABLE_Acc_0_98,
  MR_Word * STATE_VARIABLE_Acc_99);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_type_repn_spec_3_p_0(
  MR_Word TypeRepnSpec_4,
  MR_Word STATE_VARIABLE_Acc_0_11,
  MR_Word * STATE_VARIABLE_Acc_12);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_int_for_opt_spec_3_p_0(
  MR_Word IntForOptSpec_4,
  MR_Word STATE_VARIABLE_Acc_0_12,
  MR_Word * STATE_VARIABLE_Acc_13);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_indirect_int2_spec_3_p_0(
  MR_Word IndirectInt2Spec_4,
  MR_Word STATE_VARIABLE_Acc_0_8,
  MR_Word * STATE_VARIABLE_Acc_9);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int2_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int2_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int2_4_p_0(
  MR_Word ParseTreeInt2_5,
  MR_Word ReadWhy2_6,
  MR_Word STATE_VARIABLE_Acc_0_93,
  MR_Word * STATE_VARIABLE_Acc_94);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_direct_int1_spec_3_p_0(
  MR_Word DirectInt1Spec_4,
  MR_Word STATE_VARIABLE_Acc_0_8,
  MR_Word * STATE_VARIABLE_Acc_9);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int1_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int1_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int1_4_p_0(
  MR_Word ParseTreeInt1_5,
  MR_Word ReadWhy1_6,
  MR_Word STATE_VARIABLE_Acc_0_107,
  MR_Word * STATE_VARIABLE_Acc_108);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ancestor_int_spec_3_p_0(
  MR_Word AncestorIntSpec_4,
  MR_Word STATE_VARIABLE_Acc_0_8,
  MR_Word * STATE_VARIABLE_Acc_9);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int0_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int0_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int0_4_p_0(
  MR_Word ParseTreeInt0_5,
  MR_Word ReadWhy0_6,
  MR_Word STATE_VARIABLE_Acc_0_120,
  MR_Word * STATE_VARIABLE_Acc_121);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_type_repn_map_3_p_0(
  MR_Word IntTypeRepns_4,
  MR_Word STATE_VARIABLE_Cord_0_9,
  MR_Word * STATE_VARIABLE_Cord_10);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_int_type_repn_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleMap_0_14,
  MR_Word * STATE_VARIABLE_ModuleMap_15);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_module_src_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_module_src_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_module_src_3_p_0(
  MR_Word ParseTreeModuleSrc_4,
  MR_Word STATE_VARIABLE_Acc_0_134,
  MR_Word * STATE_VARIABLE_Acc_135);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_tuple_list_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ImsItems_0_3,
  MR_Word * STATE_VARIABLE_ImsItems_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word ItemMercuryStatus_5,
  MR_Word Items_6,
  MR_Word STATE_VARIABLE_ImsCord_0_11,
  MR_Word * STATE_VARIABLE_ImsCord_12);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word SectionInfo_5,
  MR_Word Items_6,
  MR_Word STATE_VARIABLE_SecCord_0_11,
  MR_Word * STATE_VARIABLE_SecCord_12);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Abs_0_2,
  MR_Word * STATE_VARIABLE_Abs_3,
  MR_Word STATE_VARIABLE_Mer_0_4,
  MR_Word * STATE_VARIABLE_Mer_5,
  MR_Word STATE_VARIABLE_For_0_6,
  MR_Word * STATE_VARIABLE_For_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_avails_4_p_0(
  MR_Word ItemMercuryStatus_5,
  MR_Word Avails_6,
  MR_Word STATE_VARIABLE_AccAvails_0_11,
  MR_Word * STATE_VARIABLE_AccAvails_12);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____ims_tuple_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____ims_tuple_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____ims_tuple_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____ims_tuple_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____ims_tuple_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____ims_tuple_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____int_type_ctor_repns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____int_type_ctor_repns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____item_accumulator_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____item_accumulator_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____module_int_type_ctor_repns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____module_int_type_ctor_repns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[59][2];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[1][4];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[22][3];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[6][1];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_5[2][5];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_6[9][6];


struct hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__vector_common_type_7_0_s {
  const MR_Integer hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__vector_common_type_7_0_s hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_vector_common_7[8];

struct hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__vector_common_type_8_0_s {
  const MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__vector_common_type_8_0__vct_8_f_0;
  const MR_Word hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__vector_common_type_8_0__vct_8_f_1;
};

static /* final */ const struct hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__vector_common_type_8_0_s hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_vector_common_8[4];



static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[59][2] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[3]))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[5]))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0))
  },
  /* row  14 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0))
  },
  /* row  15 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0))
  },
  /* row  16 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0))
  },
  /* row  17 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0))
  },
  /* row  18 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0))
  },
  /* row  19 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0))
  },
  /* row  20 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
  /* row  21 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
  /* row  22 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[2]))
  },
  /* row  23 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row  24 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[0]))
  },
  /* row  25 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0))
  },
  /* row  26 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[2]))
  },
  /* row  27 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[4]))
  },
  /* row  28 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[6]))
  },
  /* row  29 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[7]))
  },
  /* row  30 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[8]))
  },
  /* row  31 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[9]))
  },
  /* row  32 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[10]))
  },
  /* row  33 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[11]))
  },
  /* row  34 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[12]))
  },
  /* row  35 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[0]))
  },
  /* row  36 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0))
  },
  /* row  37 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[13]))
  },
  /* row  38 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[14]))
  },
  /* row  39 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0))
  },
  /* row  40 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0))
  },
  /* row  41 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0))
  },
  /* row  42 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0))
  },
  /* row  43 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0))
  },
  /* row  44 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[15]))
  },
  /* row  45 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[16]))
  },
  /* row  46 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0))
  },
  /* row  47 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0))
  },
  /* row  48 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0))
  },
  /* row  49 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0))
  },
  /* row  50 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[17]))
  },
  /* row  51 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[18]))
  },
  /* row  52 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[19]))
  },
  /* row  53 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[20]))
  },
  /* row  54 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[0]))
  },
  /* row  55 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[0])),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  56 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[1])),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  57 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[2])),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[5]))),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[22][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[21]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[21]))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_module_src_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_module_src_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_6[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_6[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_6[2])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_6[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_6[4])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_6[5])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_6[6])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_6[7])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_6[8])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int0_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int0_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int1_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int1_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int2_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int2_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_plain_opt_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[6][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 4U) },
  /* row   5 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_5[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_6[9][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_repn_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__pti_cord_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__pti_cord_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0))
  },
};


static /* final */ const struct hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__vector_common_type_7_0_s hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_vector_common_7[8] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 3 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 1 },
  /* row   4 */   { (MR_Integer) 0 },
  /* row   5 */   { (MR_Integer) 3 },
  /* row   6 */   { (MR_Integer) 2 },
  /* row   7 */   { (MR_Integer) 1 },
};

static /* final */ const struct hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__vector_common_type_8_0_s hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_vector_common_8[4] = {
  /* row   0 */
  {
    (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[2])),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row   1 */
  {
    (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[1])),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row   2 */
  {
    (MR_Word) ((MR_Unsigned) 0U),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row   3 */
  {
    (MR_Word) ((MR_Unsigned) 4U),
    (MR_Word) ((MR_Unsigned) 4U)
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_repn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__pti_cord_1__plain_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0) }
};

static const MR_VA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__pti_cord_1__pseudo___vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1) }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_ims_tuple_cord_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____ims_tuple_cord_1_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____ims_tuple_cord_1_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_passes.make_hlds_separate_items",
  (MR_String) "ims_tuple_cord",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__pti_cord_1__pseudo___vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_ims_tuple_item_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____ims_tuple_item_1_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____ims_tuple_item_1_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_passes.make_hlds_separate_items",
  (MR_String) "ims_tuple_item",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__list__pti_list_1__pseudo___vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1) }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_ims_tuple_list_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____ims_tuple_list_1_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____ims_tuple_list_1_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_passes.make_hlds_separate_items",
  (MR_String) "ims_tuple_list",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__list__pti_list_1__pseudo___vpti_tuple_2__plain_hlds__status__type_ctor_info_item_mercury_status_0__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__field_types_int_type_ctor_repns_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__prog_item__ti_item_type_repn_info_general_1parse_tree__prog_item__type_ctor_info_type_ctor_repn_info_0)
};

static const MR_DuArgLocn hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__field_locns_int_type_ctor_repns_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_functor_desc_int_type_ctor_repns_0_0 = {
  (MR_String) "int_type_ctor_repns",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__field_types_int_type_ctor_repns_0_0,
  NULL,
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__field_locns_int_type_ctor_repns_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_stag_ordered_int_type_ctor_repns_0_0[1] = { &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_functor_desc_int_type_ctor_repns_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_ptag_ordered_int_type_ctor_repns_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_stag_ordered_int_type_ctor_repns_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_name_ordered_int_type_ctor_repns_0[1] = { &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_functor_desc_int_type_ctor_repns_0_0 };

static const MR_Integer hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__functor_number_map_int_type_ctor_repns_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____int_type_ctor_repns_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____int_type_ctor_repns_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_passes.make_hlds_separate_items",
  (MR_String) "int_type_ctor_repns",
  { hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_name_ordered_int_type_ctor_repns_0 },
  { hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_ptag_ordered_int_type_ctor_repns_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__functor_number_map_int_type_ctor_repns_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_avail_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_fim_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_typeclass_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_typeclass_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_typeclass_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_instance_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_instance_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_instance_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_clause_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_clause_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_clause_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0) }
};

static const MR_VA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0),
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1__vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_promise_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_promise_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_promise_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_initialise_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_initialise_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_initialise_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_finalise_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_finalise_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_finalise_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0) }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__list__ti_list_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__field_types_item_accumulator_0_0[33] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_avail_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_fim_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__ti_item_type_defn_info_general_1parse_tree__prog_data__type_ctor_info_type_defn_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_inst_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_inst_defn_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__ti_item_mode_defn_info_general_1parse_tree__prog_item__type_ctor_info_maybe_abstract_mode_defn_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_typeclass_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_instance_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_clause_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1__vti_tuple_2hlds__status__type_ctor_info_item_mercury_status_0parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_promise_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_initialise_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_ims_sub_list_1parse_tree__prog_item__type_ctor_info_item_finalise_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__cord__ti_cord_1hlds__make_hlds__make_hlds_types__ti_sec_sub_list_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__list__ti_list_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0)
};

static const MR_ConstString hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__field_names_item_accumulator_0_0[33] = {
  (MR_String) "ia_avails",
  (MR_String) "ia_fims",
  (MR_String) "ia_type_defns_abs",
  (MR_String) "ia_type_defns_mer",
  (MR_String) "ia_type_defns_for",
  (MR_String) "ia_inst_defns",
  (MR_String) "ia_mode_defns",
  (MR_String) "ia_typeclasses",
  (MR_String) "ia_instances",
  (MR_String) "ia_pred_decls",
  (MR_String) "ia_mode_decls",
  (MR_String) "ia_clauses",
  (MR_String) "ia_foreign_procs",
  (MR_String) "ia_foreign_enums",
  (MR_String) "ia_fees",
  (MR_String) "ia_decl_pragmas",
  (MR_String) "ia_decl_marker",
  (MR_String) "ia_decl_type_spec",
  (MR_String) "ia_decl_term",
  (MR_String) "ia_decl_term2",
  (MR_String) "ia_decl_str_sharing",
  (MR_String) "ia_decl_str_reuse",
  (MR_String) "ia_impl_pragmas",
  (MR_String) "ia_impl_marker",
  (MR_String) "ia_gen_unused_args",
  (MR_String) "ia_gen_exceptions",
  (MR_String) "ia_gen_trailing",
  (MR_String) "ia_gen_mm_tabling",
  (MR_String) "ia_promises",
  (MR_String) "ia_initialises",
  (MR_String) "ia_finalises",
  (MR_String) "ia_mutables",
  (MR_String) "ia_type_repns"
};

static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_functor_desc_item_accumulator_0_0 = {
  (MR_String) "item_accumulator",
  INT16_C(33),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__field_types_item_accumulator_0_0,
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__field_names_item_accumulator_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_stag_ordered_item_accumulator_0_0[1] = { &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_functor_desc_item_accumulator_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_ptag_ordered_item_accumulator_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_stag_ordered_item_accumulator_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_name_ordered_item_accumulator_0[1] = { &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_functor_desc_item_accumulator_0_0 };

static const MR_Integer hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__functor_number_map_item_accumulator_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____item_accumulator_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____item_accumulator_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_passes.make_hlds_separate_items",
  (MR_String) "item_accumulator",
  { hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_name_ordered_item_accumulator_0 },
  { hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__du_ptag_ordered_item_accumulator_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__functor_number_map_item_accumulator_0,

};

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_module_int_type_ctor_repns_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____module_int_type_ctor_repns_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____module_int_type_ctor_repns_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_passes.make_hlds_separate_items",
  (MR_String) "module_int_type_ctor_repns",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__list__ti_list_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntroducedFrom__pred__acc_parse_tree_int2__851__1_2_p_0(
  MR_Word ImpAvails_64,
  MR_Word HeadVar__2_98)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[23]), ((MR_Box) (ImpAvails_64)), ((MR_Box) (HeadVar__2_98)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____module_int_type_ctor_repns_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[54]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____module_int_type_ctor_repns_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[54]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____item_accumulator_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_102 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_103 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_102 == CastY_103);
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
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 10))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 11))));
    MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))));
    MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 12))));
    MR_Word ArgX14_43 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))));
    MR_Word ArgY14_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 13))));
    MR_Word ArgX15_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))));
    MR_Word ArgY15_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 14))));
    MR_Word ArgX16_49 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 15))));
    MR_Word ArgY16_50 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 15))));
    MR_Word ArgX17_52 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 16))));
    MR_Word ArgY17_53 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 16))));
    MR_Word ArgX18_55 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 17))));
    MR_Word ArgY18_56 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 17))));
    MR_Word ArgX19_58 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 18))));
    MR_Word ArgY19_59 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 18))));
    MR_Word ArgX20_61 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 19))));
    MR_Word ArgY20_62 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 19))));
    MR_Word ArgX21_64 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 20))));
    MR_Word ArgY21_65 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 20))));
    MR_Word ArgX22_67 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 21))));
    MR_Word ArgY22_68 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 21))));
    MR_Word ArgX23_70 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 22))));
    MR_Word ArgY23_71 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 22))));
    MR_Word ArgX24_73 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 23))));
    MR_Word ArgY24_74 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 23))));
    MR_Word ArgX25_76 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 24))));
    MR_Word ArgY25_77 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 24))));
    MR_Word ArgX26_79 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 25))));
    MR_Word ArgY26_80 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 25))));
    MR_Word ArgX27_82 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 26))));
    MR_Word ArgY27_83 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 26))));
    MR_Word ArgX28_85 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 27))));
    MR_Word ArgY28_86 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 27))));
    MR_Word ArgX29_88 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 28))));
    MR_Word ArgY29_89 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 28))));
    MR_Word ArgX30_91 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 29))));
    MR_Word ArgY30_92 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 29))));
    MR_Word ArgX31_94 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 30))));
    MR_Word ArgY31_95 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 30))));
    MR_Word ArgX32_97 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 31))));
    MR_Word ArgY32_98 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 31))));
    MR_Word ArgX33_100 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 32))));
    MR_Word ArgY33_101 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 32))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[24]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[25]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[26]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[26]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[26]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[27]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[28]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[29]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[30]), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[31]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[32]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                        succeeded = (SubResult11_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;

                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[33]), &SubResult12_39, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
                          succeeded = (SubResult12_39 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;

                            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[34]), &SubResult13_42, ((MR_Box) (ArgX13_40)), ((MR_Box) (ArgY13_41)));
                            succeeded = (SubResult13_42 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;

                              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[35]), &SubResult14_45, ((MR_Box) (ArgX14_43)), ((MR_Box) (ArgY14_44)));
                              succeeded = (SubResult14_45 != (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Word SubResult15_48;

                                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[36]), &SubResult15_48, ((MR_Box) (ArgX15_46)), ((MR_Box) (ArgY15_47)));
                                succeeded = (SubResult15_48 != (MR_Integer) 0);
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult15_48;
                                else
                                {
                                  MR_Word SubResult16_51;

                                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[37]), &SubResult16_51, ((MR_Box) (ArgX16_49)), ((MR_Box) (ArgY16_50)));
                                  succeeded = (SubResult16_51 != (MR_Integer) 0);
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult16_51;
                                  else
                                  {
                                    MR_Word SubResult17_54;

                                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[38]), &SubResult17_54, ((MR_Box) (ArgX17_52)), ((MR_Box) (ArgY17_53)));
                                    succeeded = (SubResult17_54 != (MR_Integer) 0);
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult17_54;
                                    else
                                    {
                                      MR_Word SubResult18_57;

                                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[39]), &SubResult18_57, ((MR_Box) (ArgX18_55)), ((MR_Box) (ArgY18_56)));
                                      succeeded = (SubResult18_57 != (MR_Integer) 0);
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult18_57;
                                      else
                                      {
                                        MR_Word SubResult19_60;

                                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[40]), &SubResult19_60, ((MR_Box) (ArgX19_58)), ((MR_Box) (ArgY19_59)));
                                        succeeded = (SubResult19_60 != (MR_Integer) 0);
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult19_60;
                                        else
                                        {
                                          MR_Word SubResult20_63;

                                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[41]), &SubResult20_63, ((MR_Box) (ArgX20_61)), ((MR_Box) (ArgY20_62)));
                                          succeeded = (SubResult20_63 != (MR_Integer) 0);
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult20_63;
                                          else
                                          {
                                            MR_Word SubResult21_66;

                                            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[42]), &SubResult21_66, ((MR_Box) (ArgX21_64)), ((MR_Box) (ArgY21_65)));
                                            succeeded = (SubResult21_66 != (MR_Integer) 0);
                                            if (succeeded)
                                              *HeadVar__1_1 = SubResult21_66;
                                            else
                                            {
                                              MR_Word SubResult22_69;

                                              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[43]), &SubResult22_69, ((MR_Box) (ArgX22_67)), ((MR_Box) (ArgY22_68)));
                                              succeeded = (SubResult22_69 != (MR_Integer) 0);
                                              if (succeeded)
                                                *HeadVar__1_1 = SubResult22_69;
                                              else
                                              {
                                                MR_Word SubResult23_72;

                                                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[44]), &SubResult23_72, ((MR_Box) (ArgX23_70)), ((MR_Box) (ArgY23_71)));
                                                succeeded = (SubResult23_72 != (MR_Integer) 0);
                                                if (succeeded)
                                                  *HeadVar__1_1 = SubResult23_72;
                                                else
                                                {
                                                  MR_Word SubResult24_75;

                                                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[45]), &SubResult24_75, ((MR_Box) (ArgX24_73)), ((MR_Box) (ArgY24_74)));
                                                  succeeded = (SubResult24_75 != (MR_Integer) 0);
                                                  if (succeeded)
                                                    *HeadVar__1_1 = SubResult24_75;
                                                  else
                                                  {
                                                    MR_Word SubResult25_78;

                                                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[46]), &SubResult25_78, ((MR_Box) (ArgX25_76)), ((MR_Box) (ArgY25_77)));
                                                    succeeded = (SubResult25_78 != (MR_Integer) 0);
                                                    if (succeeded)
                                                      *HeadVar__1_1 = SubResult25_78;
                                                    else
                                                    {
                                                      MR_Word SubResult26_81;

                                                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[47]), &SubResult26_81, ((MR_Box) (ArgX26_79)), ((MR_Box) (ArgY26_80)));
                                                      succeeded = (SubResult26_81 != (MR_Integer) 0);
                                                      if (succeeded)
                                                        *HeadVar__1_1 = SubResult26_81;
                                                      else
                                                      {
                                                        MR_Word SubResult27_84;

                                                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[48]), &SubResult27_84, ((MR_Box) (ArgX27_82)), ((MR_Box) (ArgY27_83)));
                                                        succeeded = (SubResult27_84 != (MR_Integer) 0);
                                                        if (succeeded)
                                                          *HeadVar__1_1 = SubResult27_84;
                                                        else
                                                        {
                                                          MR_Word SubResult28_87;

                                                          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[49]), &SubResult28_87, ((MR_Box) (ArgX28_85)), ((MR_Box) (ArgY28_86)));
                                                          succeeded = (SubResult28_87 != (MR_Integer) 0);
                                                          if (succeeded)
                                                            *HeadVar__1_1 = SubResult28_87;
                                                          else
                                                          {
                                                            MR_Word SubResult29_90;

                                                            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[50]), &SubResult29_90, ((MR_Box) (ArgX29_88)), ((MR_Box) (ArgY29_89)));
                                                            succeeded = (SubResult29_90 != (MR_Integer) 0);
                                                            if (succeeded)
                                                              *HeadVar__1_1 = SubResult29_90;
                                                            else
                                                            {
                                                              MR_Word SubResult30_93;

                                                              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[51]), &SubResult30_93, ((MR_Box) (ArgX30_91)), ((MR_Box) (ArgY30_92)));
                                                              succeeded = (SubResult30_93 != (MR_Integer) 0);
                                                              if (succeeded)
                                                                *HeadVar__1_1 = SubResult30_93;
                                                              else
                                                              {
                                                                MR_Word SubResult31_96;

                                                                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[52]), &SubResult31_96, ((MR_Box) (ArgX31_94)), ((MR_Box) (ArgY31_95)));
                                                                succeeded = (SubResult31_96 != (MR_Integer) 0);
                                                                if (succeeded)
                                                                  *HeadVar__1_1 = SubResult31_96;
                                                                else
                                                                {
                                                                  MR_Word SubResult32_99;

                                                                  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[53]), &SubResult32_99, ((MR_Box) (ArgX32_97)), ((MR_Box) (ArgY32_98)));
                                                                  succeeded = (SubResult32_99 != (MR_Integer) 0);
                                                                  if (succeeded)
                                                                    *HeadVar__1_1 = SubResult32_99;
                                                                  else
                                                                    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[54]), HeadVar__1_1, ((MR_Box) (ArgX33_100)), ((MR_Box) (ArgY33_101)));
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

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____item_accumulator_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_69 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_70 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_69 == CastY_70);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_72_72;
    MR_Word TypeInfo_73_73;
    MR_Word TypeInfo_74_74;
    MR_Word TypeInfo_75_75;
    MR_Word TypeInfo_76_76;
    MR_Word TypeInfo_77_77;
    MR_Word TypeInfo_78_78;
    MR_Word TypeInfo_79_79;
    MR_Word TypeInfo_80_80;
    MR_Word TypeInfo_81_81;
    MR_Word TypeInfo_82_82;
    MR_Word TypeInfo_83_83;
    MR_Word TypeInfo_84_84;
    MR_Word TypeInfo_85_85;
    MR_Word TypeInfo_86_86;
    MR_Word TypeInfo_87_87;
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
    MR_Word TypeInfo_100_100;
    MR_Word TypeInfo_101_101;
    MR_Word TypeInfo_102_102;
    MR_Word TypeInfo_103_103;
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
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 11))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))));
    MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))));
    MR_Word ArgX14_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 13))));
    MR_Word ArgY14_30 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))));
    MR_Word ArgX15_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 14))));
    MR_Word ArgY15_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 14))));
    MR_Word ArgX16_33 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 15))));
    MR_Word ArgY16_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 15))));
    MR_Word ArgX17_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 16))));
    MR_Word ArgY17_36 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 16))));
    MR_Word ArgX18_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 17))));
    MR_Word ArgY18_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 17))));
    MR_Word ArgX19_39 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 18))));
    MR_Word ArgY19_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 18))));
    MR_Word ArgX20_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 19))));
    MR_Word ArgY20_42 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 19))));
    MR_Word ArgX21_43 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 20))));
    MR_Word ArgY21_44 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 20))));
    MR_Word ArgX22_45 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 21))));
    MR_Word ArgY22_46 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 21))));
    MR_Word ArgX23_47 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 22))));
    MR_Word ArgY23_48 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 22))));
    MR_Word ArgX24_49 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 23))));
    MR_Word ArgY24_50 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 23))));
    MR_Word ArgX25_51 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 24))));
    MR_Word ArgY25_52 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 24))));
    MR_Word ArgX26_53 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 25))));
    MR_Word ArgY26_54 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 25))));
    MR_Word ArgX27_55 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 26))));
    MR_Word ArgY27_56 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 26))));
    MR_Word ArgX28_57 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 27))));
    MR_Word ArgY28_58 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 27))));
    MR_Word ArgX29_59 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 28))));
    MR_Word ArgY29_60 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 28))));
    MR_Word ArgX30_61 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 29))));
    MR_Word ArgY30_62 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 29))));
    MR_Word ArgX31_63 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 30))));
    MR_Word ArgY31_64 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 30))));
    MR_Word ArgX32_65 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 31))));
    MR_Word ArgY32_66 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 31))));
    MR_Word ArgX33_67 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 32))));
    MR_Word ArgY33_68 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 32))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[24]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_72_72 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[25]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_72_72, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_73_73 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[26]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_73_73, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_74_74 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[26]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_74_74, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_75_75 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[26]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_75_75, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_76_76 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[27]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_76_76, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_77_77 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[28]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_77_77, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_78_78 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[29]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_78_78, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    TypeInfo_79_79 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[30]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_79_79, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    if (succeeded)
                    {
                      TypeInfo_80_80 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[31]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_80_80, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                      if (succeeded)
                      {
                        TypeInfo_81_81 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[32]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_81_81, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                        if (succeeded)
                        {
                          TypeInfo_82_82 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[33]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_82_82, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                          if (succeeded)
                          {
                            TypeInfo_83_83 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[34]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_83_83, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
                            if (succeeded)
                            {
                              TypeInfo_84_84 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[35]);
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_84_84, ((MR_Box) (ArgX14_29)), ((MR_Box) (ArgY14_30)));
                              if (succeeded)
                              {
                                TypeInfo_85_85 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[36]);
                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_85_85, ((MR_Box) (ArgX15_31)), ((MR_Box) (ArgY15_32)));
                                if (succeeded)
                                {
                                  TypeInfo_86_86 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[37]);
                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_86_86, ((MR_Box) (ArgX16_33)), ((MR_Box) (ArgY16_34)));
                                  if (succeeded)
                                  {
                                    TypeInfo_87_87 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[38]);
                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_87_87, ((MR_Box) (ArgX17_35)), ((MR_Box) (ArgY17_36)));
                                    if (succeeded)
                                    {
                                      TypeInfo_88_88 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[39]);
                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_88_88, ((MR_Box) (ArgX18_37)), ((MR_Box) (ArgY18_38)));
                                      if (succeeded)
                                      {
                                        TypeInfo_89_89 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[40]);
                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_89_89, ((MR_Box) (ArgX19_39)), ((MR_Box) (ArgY19_40)));
                                        if (succeeded)
                                        {
                                          TypeInfo_90_90 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[41]);
                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_90_90, ((MR_Box) (ArgX20_41)), ((MR_Box) (ArgY20_42)));
                                          if (succeeded)
                                          {
                                            TypeInfo_91_91 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[42]);
                                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_91_91, ((MR_Box) (ArgX21_43)), ((MR_Box) (ArgY21_44)));
                                            if (succeeded)
                                            {
                                              TypeInfo_92_92 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[43]);
                                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_92_92, ((MR_Box) (ArgX22_45)), ((MR_Box) (ArgY22_46)));
                                              if (succeeded)
                                              {
                                                TypeInfo_93_93 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[44]);
                                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_93_93, ((MR_Box) (ArgX23_47)), ((MR_Box) (ArgY23_48)));
                                                if (succeeded)
                                                {
                                                  TypeInfo_94_94 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[45]);
                                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_94_94, ((MR_Box) (ArgX24_49)), ((MR_Box) (ArgY24_50)));
                                                  if (succeeded)
                                                  {
                                                    TypeInfo_95_95 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[46]);
                                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_95_95, ((MR_Box) (ArgX25_51)), ((MR_Box) (ArgY25_52)));
                                                    if (succeeded)
                                                    {
                                                      TypeInfo_96_96 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[47]);
                                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_96_96, ((MR_Box) (ArgX26_53)), ((MR_Box) (ArgY26_54)));
                                                      if (succeeded)
                                                      {
                                                        TypeInfo_97_97 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[48]);
                                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_97_97, ((MR_Box) (ArgX27_55)), ((MR_Box) (ArgY27_56)));
                                                        if (succeeded)
                                                        {
                                                          TypeInfo_98_98 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[49]);
                                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_98_98, ((MR_Box) (ArgX28_57)), ((MR_Box) (ArgY28_58)));
                                                          if (succeeded)
                                                          {
                                                            TypeInfo_99_99 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[50]);
                                                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_99_99, ((MR_Box) (ArgX29_59)), ((MR_Box) (ArgY29_60)));
                                                            if (succeeded)
                                                            {
                                                              TypeInfo_100_100 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[51]);
                                                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_100_100, ((MR_Box) (ArgX30_61)), ((MR_Box) (ArgY30_62)));
                                                              if (succeeded)
                                                              {
                                                                TypeInfo_101_101 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[52]);
                                                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_101_101, ((MR_Box) (ArgX31_63)), ((MR_Box) (ArgY31_64)));
                                                                if (succeeded)
                                                                {
                                                                  TypeInfo_102_102 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[53]);
                                                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_102_102, ((MR_Box) (ArgX32_65)), ((MR_Box) (ArgY32_66)));
                                                                  if (succeeded)
                                                                  {
                                                                    TypeInfo_103_103 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[54]);
                                                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_103_103, ((MR_Box) (ArgX33_67)), ((MR_Box) (ArgY33_68)));
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

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____int_type_ctor_repns_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____int_type_ctor_repns_0_0(
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
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____ims_tuple_list_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_9_9;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, TypeInfo_9_9, 2) = ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0));
    MR_hl_field(0, TypeInfo_9_9, 3) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__list____Compare____list_1_0(TypeInfo_9_9, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____ims_tuple_list_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, TypeInfo_8_8, 2) = ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0));
    MR_hl_field(0, TypeInfo_8_8, 3) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_8_8, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____ims_tuple_item_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Tuple HeadVar__2_2,
  MR_Tuple HeadVar__3_3)
{
  MR_Word TypeInfo_9_9;
  MR_Tuple Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Tuple Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, TypeInfo_9_9, 2) = ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0));
    MR_hl_field(0, TypeInfo_9_9, 3) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__builtin__compare_3_p_0(TypeInfo_9_9, HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____ims_tuple_item_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Tuple HeadVar__1_1,
  MR_Tuple HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_8_8;
  MR_Tuple Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Tuple Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, TypeInfo_8_8, 2) = ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0));
    MR_hl_field(0, TypeInfo_8_8, 3) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_8_8, ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____ims_tuple_cord_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_9_9;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, TypeInfo_9_9, 2) = ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0));
    MR_hl_field(0, TypeInfo_9_9, 3) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__cord____Compare____cord_1_0(TypeInfo_9_9, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____ims_tuple_cord_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, TypeInfo_8_8, 2) = ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0));
    MR_hl_field(0, TypeInfo_8_8, 3) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__cord____Unify____cord_1_0(TypeInfo_8_8, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_trans_opt_3_p_0(
  MR_Word ParseTreeTransOpt_4,
  MR_Word STATE_VARIABLE_Acc_0_55,
  MR_Word * STATE_VARIABLE_Acc_56)
{
  MR_Word TermInfos_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeTransOpt_4, (MR_Integer) 2))));
  MR_Word Term2Infos_9 = ((MR_Word) ((MR_hl_field(0, ParseTreeTransOpt_4, (MR_Integer) 3))));
  MR_Word Exceptions_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeTransOpt_4, (MR_Integer) 4))));
  MR_Word Trailings_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeTransOpt_4, (MR_Integer) 5))));
  MR_Word MMTablings_12 = ((MR_Word) ((MR_hl_field(0, ParseTreeTransOpt_4, (MR_Integer) 6))));
  MR_Word Sharings_13 = ((MR_Word) ((MR_hl_field(0, ParseTreeTransOpt_4, (MR_Integer) 7))));
  MR_Word Reuses_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeTransOpt_4, (MR_Integer) 8))));
  MR_Word AccAvails0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 0))));
  MR_Word AccFIMs0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 1))));
  MR_Word AccTypeDefnsAbs0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 2))));
  MR_Word AccTypeDefnsMer0_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 3))));
  MR_Word AccTypeDefnsFor0_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 4))));
  MR_Word AccInstDefns0_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 5))));
  MR_Word AccModeDefns0_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 6))));
  MR_Word AccTypeClasses0_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 7))));
  MR_Word AccInstances0_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 8))));
  MR_Word AccPredDecls0_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 9))));
  MR_Word AccModeDecls0_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 10))));
  MR_Word AccClauses0_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 11))));
  MR_Word AccForeignProcs0_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 12))));
  MR_Word AccForeignEnums0_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 13))));
  MR_Word AccForeignExportEnums0_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 14))));
  MR_Word AccDeclPragmas0_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 15))));
  MR_Word AccDeclMarkers0_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 16))));
  MR_Word AccDeclPragmasTypeSpec0_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 17))));
  MR_Word AccDeclPragmasTermInfo0_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 18))));
  MR_Word AccDeclPragmasTerm2Info0_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 19))));
  MR_Word AccDeclPragmasSharing0_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 20))));
  MR_Word AccDeclPragmasReuse0_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 21))));
  MR_Word AccImplPragmas0_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 22))));
  MR_Word AccImplMarkers0_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 23))));
  MR_Word AccGenPragmasUnusedArgs0_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 24))));
  MR_Word AccGenPragmasExceptions0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 25))));
  MR_Word AccGenPragmasTrailing0_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 26))));
  MR_Word AccGenPragmasMMTabling0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 27))));
  MR_Word AccPromises0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 28))));
  MR_Word AccInitialises0_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 29))));
  MR_Word AccFinalises0_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 30))));
  MR_Word AccMutables0_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 31))));
  MR_Word AccTypeRepns0_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_55, (MR_Integer) 32))));
  MR_Word AccDeclPragmasTermInfo_48;
  MR_Word AccDeclPragmasTerm2Info_49;
  MR_Word AccDeclPragmasSharing_50;
  MR_Word AccDeclPragmasReuse_51;
  MR_Word AccGenPragmasExceptions_52;
  MR_Word AccGenPragmasTrailing_53;
  MR_Word AccGenPragmasMMTabling_54;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;

  Var_57 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0), TermInfos_8);
  AccDeclPragmasTermInfo_48 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0), AccDeclPragmasTermInfo0_33, Var_57);
  Var_58 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0), Term2Infos_9);
  AccDeclPragmasTerm2Info_49 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0), AccDeclPragmasTerm2Info0_34, Var_58);
  Var_59 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0), Sharings_13);
  AccDeclPragmasSharing_50 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0), AccDeclPragmasSharing0_35, Var_59);
  Var_60 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0), Reuses_14);
  AccDeclPragmasReuse_51 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0), AccDeclPragmasReuse0_36, Var_60);
  Var_61 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0), Exceptions_10);
  AccGenPragmasExceptions_52 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0), AccGenPragmasExceptions0_40, Var_61);
  Var_62 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0), Trailings_11);
  AccGenPragmasTrailing_53 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0), AccGenPragmasTrailing0_41, Var_62);
  Var_63 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0), MMTablings_12);
  AccGenPragmasMMTabling_54 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0), AccGenPragmasMMTabling0_42, Var_63);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (33 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Acc_56 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (AccAvails0_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (AccFIMs0_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (AccTypeDefnsAbs0_17));
    MR_hl_field(0, base, 3) = ((MR_Box) (AccTypeDefnsMer0_18));
    MR_hl_field(0, base, 4) = ((MR_Box) (AccTypeDefnsFor0_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (AccInstDefns0_20));
    MR_hl_field(0, base, 6) = ((MR_Box) (AccModeDefns0_21));
    MR_hl_field(0, base, 7) = ((MR_Box) (AccTypeClasses0_22));
    MR_hl_field(0, base, 8) = ((MR_Box) (AccInstances0_23));
    MR_hl_field(0, base, 9) = ((MR_Box) (AccPredDecls0_24));
    MR_hl_field(0, base, 10) = ((MR_Box) (AccModeDecls0_25));
    MR_hl_field(0, base, 11) = ((MR_Box) (AccClauses0_26));
    MR_hl_field(0, base, 12) = ((MR_Box) (AccForeignProcs0_27));
    MR_hl_field(0, base, 13) = ((MR_Box) (AccForeignEnums0_28));
    MR_hl_field(0, base, 14) = ((MR_Box) (AccForeignExportEnums0_29));
    MR_hl_field(0, base, 15) = ((MR_Box) (AccDeclPragmas0_30));
    MR_hl_field(0, base, 16) = ((MR_Box) (AccDeclMarkers0_31));
    MR_hl_field(0, base, 17) = ((MR_Box) (AccDeclPragmasTypeSpec0_32));
    MR_hl_field(0, base, 18) = ((MR_Box) (AccDeclPragmasTermInfo_48));
    MR_hl_field(0, base, 19) = ((MR_Box) (AccDeclPragmasTerm2Info_49));
    MR_hl_field(0, base, 20) = ((MR_Box) (AccDeclPragmasSharing_50));
    MR_hl_field(0, base, 21) = ((MR_Box) (AccDeclPragmasReuse_51));
    MR_hl_field(0, base, 22) = ((MR_Box) (AccImplPragmas0_37));
    MR_hl_field(0, base, 23) = ((MR_Box) (AccImplMarkers0_38));
    MR_hl_field(0, base, 24) = ((MR_Box) (AccGenPragmasUnusedArgs0_39));
    MR_hl_field(0, base, 25) = ((MR_Box) (AccGenPragmasExceptions_52));
    MR_hl_field(0, base, 26) = ((MR_Box) (AccGenPragmasTrailing_53));
    MR_hl_field(0, base, 27) = ((MR_Box) (AccGenPragmasMMTabling_54));
    MR_hl_field(0, base, 28) = ((MR_Box) (AccPromises0_43));
    MR_hl_field(0, base, 29) = ((MR_Box) (AccInitialises0_44));
    MR_hl_field(0, base, 30) = ((MR_Box) (AccFinalises0_45));
    MR_hl_field(0, base, 31) = ((MR_Box) (AccMutables0_46));
    MR_hl_field(0, base, 32) = ((MR_Box) (AccTypeRepns0_47));
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_plain_opt_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_plain_opt_3_p_0(
  MR_Word ParseTreePlainOpt_4,
  MR_Word STATE_VARIABLE_Acc_0_98,
  MR_Word * STATE_VARIABLE_Acc_99)
{
  MR_Word ItemMercuryStatus_6 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[5]));
  MR_Word UseMap_10 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 2))));
  MR_Word FIMSpecs_11 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 3))));
  MR_Word TypeDefns_12 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 4))));
  MR_Word ForeignEnums_13 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 5))));
  MR_Word InstDefns_14 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 6))));
  MR_Word ModeDefns_15 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 7))));
  MR_Word TypeClasses_16 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 8))));
  MR_Word Instances_17 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 9))));
  MR_Word PredDecls_18 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 10))));
  MR_Word ModeDecls_19 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 11))));
  MR_Word Clauses_20 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 12))));
  MR_Word ForeignProcs_21 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 13))));
  MR_Word Promises_22 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 14))));
  MR_Word DeclMarkers_23 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 15))));
  MR_Word ImplMarkers_24 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 16))));
  MR_Word TypeSpecs_25 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 17))));
  MR_Word UnusedArgs_26 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 18))));
  MR_Word TermInfos_27 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 19))));
  MR_Word Term2Infos_28 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 20))));
  MR_Word Exceptions_29 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 21))));
  MR_Word Trailings_30 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 22))));
  MR_Word MMTablings_31 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 23))));
  MR_Word Sharings_32 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 24))));
  MR_Word Reuses_33 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 25))));
  MR_Word AccAvails0_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 0))));
  MR_Word AccFIMs0_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 1))));
  MR_Word AccTypeDefnsAbs0_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 2))));
  MR_Word AccTypeDefnsMer0_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 3))));
  MR_Word AccTypeDefnsFor0_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 4))));
  MR_Word AccInstDefns0_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 5))));
  MR_Word AccModeDefns0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 6))));
  MR_Word AccTypeClasses0_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 7))));
  MR_Word AccInstances0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 8))));
  MR_Word AccPredDecls0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 9))));
  MR_Word AccModeDecls0_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 10))));
  MR_Word AccClauses0_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 11))));
  MR_Word AccForeignProcs0_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 12))));
  MR_Word AccForeignEnums0_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 13))));
  MR_Word AccForeignExportEnums0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 14))));
  MR_Word AccDeclPragmas0_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 15))));
  MR_Word AccDeclMarkers0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 16))));
  MR_Word AccDeclPragmasTypeSpec0_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 17))));
  MR_Word AccDeclPragmasTermInfo0_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 18))));
  MR_Word AccDeclPragmasTerm2Info0_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 19))));
  MR_Word AccDeclPragmasSharing0_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 20))));
  MR_Word AccDeclPragmasReuse0_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 21))));
  MR_Word AccImplPragmas0_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 22))));
  MR_Word AccImplMarkers0_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 23))));
  MR_Word AccGenPragmasUnusedArgs0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 24))));
  MR_Word AccGenPragmasExceptions0_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 25))));
  MR_Word AccGenPragmasTrailing0_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 26))));
  MR_Word AccGenPragmasMMTabling0_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 27))));
  MR_Word AccPromises0_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 28))));
  MR_Word AccInitialises0_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 29))));
  MR_Word AccFinalises0_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 30))));
  MR_Word AccMutables0_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 31))));
  MR_Word AccTypeRepns0_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_98, (MR_Integer) 32))));
  MR_Word OptAvails_67;
  MR_Word AccAvails_68;
  MR_Word OptFIMs_69;
  MR_Word AccFIMs_70;
  MR_Word TypeDefnsAbs_71;
  MR_Word TypeDefnsMer_72;
  MR_Word TypeDefnsFor_73;
  MR_Word AccTypeDefnsAbs_74;
  MR_Word AccTypeDefnsMer_75;
  MR_Word AccTypeDefnsFor_76;
  MR_Word AccInstDefns_77;
  MR_Word AccModeDefns_78;
  MR_Word AccTypeClasses_79;
  MR_Word AccInstances_80;
  MR_Word AccPredDecls_81;
  MR_Word AccModeDecls_82;
  MR_Word AccClauses_83;
  MR_Word AccForeignProcs_84;
  MR_Word AccForeignEnums_85;
  MR_Word AccDeclMarkers_86;
  MR_Word AccDeclPragmasTypeSpec_87;
  MR_Word AccDeclPragmasTermInfo_88;
  MR_Word AccDeclPragmasTerm2Info_89;
  MR_Word AccDeclPragmasSharing_90;
  MR_Word AccDeclPragmasReuse_91;
  MR_Word AccImplMarkers_92;
  MR_Word AccGenPragmasUnusedArgs_93;
  MR_Word AccGenPragmasExceptions_94;
  MR_Word AccGenPragmasTrailing_95;
  MR_Word AccGenPragmasMMTabling_96;
  MR_Word AccPromises_97;
  MR_Word Var_103;
  MR_Word Var_104;
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

  OptAvails_67 = parse_tree__item_util__use_map_to_item_avails_1_f_0(UseMap_10);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_avails_4_p_0(ItemMercuryStatus_6, OptAvails_67, AccAvails0_34, &AccAvails_68);
  Var_103 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), FIMSpecs_11);
  OptFIMs_69 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[21]), Var_103);
  Var_104 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), OptFIMs_69);
  AccFIMs_70 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), AccFIMs0_35, Var_104);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(TypeDefns_12, (MR_Word) ((MR_Unsigned) 0U), &TypeDefnsAbs_71, (MR_Word) ((MR_Unsigned) 0U), &TypeDefnsMer_72, (MR_Word) ((MR_Unsigned) 0U), &TypeDefnsFor_73);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[58]), TypeDefnsAbs_71, AccTypeDefnsAbs0_36, &AccTypeDefnsAbs_74);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[58]), TypeDefnsMer_72, AccTypeDefnsMer0_37, &AccTypeDefnsMer_75);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[58]), TypeDefnsFor_73, AccTypeDefnsFor0_38, &AccTypeDefnsFor_76);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[3]), ItemMercuryStatus_6, InstDefns_14, AccInstDefns0_39, &AccInstDefns_77);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[5]), ItemMercuryStatus_6, ModeDefns_15, AccModeDefns0_40, &AccModeDefns_78);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[58]), TypeClasses_16, AccTypeClasses0_41, &AccTypeClasses_79);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ItemMercuryStatus_6, Instances_17, AccInstances0_42, &AccInstances_80);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[58]), PredDecls_18, AccPredDecls0_43, &AccPredDecls_81);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), ItemMercuryStatus_6, ModeDecls_19, AccModeDecls0_44, &AccModeDecls_82);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), ItemMercuryStatus_6, Clauses_20, AccClauses0_45, &AccClauses_83);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), ItemMercuryStatus_6, ForeignProcs_21, AccForeignProcs0_46, &AccForeignProcs_84);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_tuple_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ItemMercuryStatus_6, ForeignEnums_13, AccForeignEnums0_47, &AccForeignEnums_85);
  Var_108 = (MR_Word) (DeclMarkers_23);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), ItemMercuryStatus_6, Var_108, AccDeclMarkers0_50, &AccDeclMarkers_86);
  Var_109 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), TypeSpecs_25);
  AccDeclPragmasTypeSpec_87 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), AccDeclPragmasTypeSpec0_51, Var_109);
  Var_110 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0), TermInfos_27);
  AccDeclPragmasTermInfo_88 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0), AccDeclPragmasTermInfo0_52, Var_110);
  Var_111 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0), Term2Infos_28);
  AccDeclPragmasTerm2Info_89 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0), AccDeclPragmasTerm2Info0_53, Var_111);
  Var_112 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0), Sharings_32);
  AccDeclPragmasSharing_90 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0), AccDeclPragmasSharing0_54, Var_112);
  Var_113 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0), Reuses_33);
  AccDeclPragmasReuse_91 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0), AccDeclPragmasReuse0_55, Var_113);
  Var_114 = (MR_Word) (ImplMarkers_24);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0), ItemMercuryStatus_6, Var_114, AccImplMarkers0_57, &AccImplMarkers_92);
  Var_115 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0), UnusedArgs_26);
  AccGenPragmasUnusedArgs_93 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0), AccGenPragmasUnusedArgs0_58, Var_115);
  Var_116 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0), Exceptions_29);
  AccGenPragmasExceptions_94 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0), AccGenPragmasExceptions0_59, Var_116);
  Var_117 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0), Trailings_30);
  AccGenPragmasTrailing_95 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0), AccGenPragmasTrailing0_60, Var_117);
  Var_118 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0), MMTablings_31);
  AccGenPragmasMMTabling_96 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0), AccGenPragmasMMTabling0_61, Var_118);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), ItemMercuryStatus_6, Promises_22, AccPromises0_62, &AccPromises_97);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (33 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Acc_99 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (AccAvails_68));
    MR_hl_field(0, base, 1) = ((MR_Box) (AccFIMs_70));
    MR_hl_field(0, base, 2) = ((MR_Box) (AccTypeDefnsAbs_74));
    MR_hl_field(0, base, 3) = ((MR_Box) (AccTypeDefnsMer_75));
    MR_hl_field(0, base, 4) = ((MR_Box) (AccTypeDefnsFor_76));
    MR_hl_field(0, base, 5) = ((MR_Box) (AccInstDefns_77));
    MR_hl_field(0, base, 6) = ((MR_Box) (AccModeDefns_78));
    MR_hl_field(0, base, 7) = ((MR_Box) (AccTypeClasses_79));
    MR_hl_field(0, base, 8) = ((MR_Box) (AccInstances_80));
    MR_hl_field(0, base, 9) = ((MR_Box) (AccPredDecls_81));
    MR_hl_field(0, base, 10) = ((MR_Box) (AccModeDecls_82));
    MR_hl_field(0, base, 11) = ((MR_Box) (AccClauses_83));
    MR_hl_field(0, base, 12) = ((MR_Box) (AccForeignProcs_84));
    MR_hl_field(0, base, 13) = ((MR_Box) (AccForeignEnums_85));
    MR_hl_field(0, base, 14) = ((MR_Box) (AccForeignExportEnums0_48));
    MR_hl_field(0, base, 15) = ((MR_Box) (AccDeclPragmas0_49));
    MR_hl_field(0, base, 16) = ((MR_Box) (AccDeclMarkers_86));
    MR_hl_field(0, base, 17) = ((MR_Box) (AccDeclPragmasTypeSpec_87));
    MR_hl_field(0, base, 18) = ((MR_Box) (AccDeclPragmasTermInfo_88));
    MR_hl_field(0, base, 19) = ((MR_Box) (AccDeclPragmasTerm2Info_89));
    MR_hl_field(0, base, 20) = ((MR_Box) (AccDeclPragmasSharing_90));
    MR_hl_field(0, base, 21) = ((MR_Box) (AccDeclPragmasReuse_91));
    MR_hl_field(0, base, 22) = ((MR_Box) (AccImplPragmas0_56));
    MR_hl_field(0, base, 23) = ((MR_Box) (AccImplMarkers_92));
    MR_hl_field(0, base, 24) = ((MR_Box) (AccGenPragmasUnusedArgs_93));
    MR_hl_field(0, base, 25) = ((MR_Box) (AccGenPragmasExceptions_94));
    MR_hl_field(0, base, 26) = ((MR_Box) (AccGenPragmasTrailing_95));
    MR_hl_field(0, base, 27) = ((MR_Box) (AccGenPragmasMMTabling_96));
    MR_hl_field(0, base, 28) = ((MR_Box) (AccPromises_97));
    MR_hl_field(0, base, 29) = ((MR_Box) (AccInitialises0_63));
    MR_hl_field(0, base, 30) = ((MR_Box) (AccFinalises0_64));
    MR_hl_field(0, base, 31) = ((MR_Box) (AccMutables0_65));
    MR_hl_field(0, base, 32) = ((MR_Box) (AccTypeRepns0_66));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_type_repn_spec_3_p_0(
  MR_Word TypeRepnSpec_4,
  MR_Word STATE_VARIABLE_Acc_0_11,
  MR_Word * STATE_VARIABLE_Acc_12)
{
  MR_Word ParseTreeInt1_6 = (MR_Word) (TypeRepnSpec_4);
  MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_6, (MR_Integer) 0))));
  MR_Word IntTypeRepnMap_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_6, (MR_Integer) 17))));
  MR_Word AccTypeRepns0_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 32))));
  MR_Word AccTypeRepns_10;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 0))));
  MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 1))));
  MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 2))));
  MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 3))));
  MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 4))));
  MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 5))));
  MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 6))));
  MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 7))));
  MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 8))));
  MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 9))));
  MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 10))));
  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 11))));
  MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 12))));
  MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 13))));
  MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 14))));
  MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 15))));
  MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 16))));
  MR_Word Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 17))));
  MR_Word Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 18))));
  MR_Word Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 19))));
  MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 20))));
  MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 21))));
  MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 22))));
  MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 23))));
  MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 24))));
  MR_Word Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 25))));
  MR_Word Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 26))));
  MR_Word Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 27))));
  MR_Word Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 28))));
  MR_Word Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 29))));
  MR_Word Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 30))));
  MR_Word Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_11, (MR_Integer) 31))));

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (IntTypeRepnMap_8));
  }
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (ModuleName_7));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (Var_14));
  }
  {
    AccTypeRepns_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, AccTypeRepns_10, 0) = ((MR_Box) (Var_13));
    MR_hl_field(1, AccTypeRepns_10, 1) = ((MR_Box) (AccTypeRepns0_9));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (33 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Acc_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_52));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_53));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_54));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_55));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_56));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_57));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_58));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_59));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_60));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_61));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_62));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_63));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_64));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_65));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_66));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_67));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_68));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_69));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_70));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_71));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_72));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_73));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_74));
    MR_hl_field(0, base, 23) = ((MR_Box) (Var_75));
    MR_hl_field(0, base, 24) = ((MR_Box) (Var_76));
    MR_hl_field(0, base, 25) = ((MR_Box) (Var_77));
    MR_hl_field(0, base, 26) = ((MR_Box) (Var_78));
    MR_hl_field(0, base, 27) = ((MR_Box) (Var_79));
    MR_hl_field(0, base, 28) = ((MR_Box) (Var_80));
    MR_hl_field(0, base, 29) = ((MR_Box) (Var_81));
    MR_hl_field(0, base, 30) = ((MR_Box) (Var_82));
    MR_hl_field(0, base, 31) = ((MR_Box) (Var_83));
    MR_hl_field(0, base, 32) = ((MR_Box) (AccTypeRepns_10));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_int_for_opt_spec_3_p_0(
  MR_Word IntForOptSpec_4,
  MR_Word STATE_VARIABLE_Acc_0_12,
  MR_Word * STATE_VARIABLE_Acc_13)
{
  switch (MR_tag((MR_Word) IntForOptSpec_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ParseTreeInt0_6 = ((MR_Word) ((MR_hl_field(0, IntForOptSpec_4, (MR_Integer) 0))));
        MR_Word ReadWhy0_7 = ((MR_Unsigned) ((MR_hl_field(0, IntForOptSpec_4, (MR_Integer) 1))) & (MR_Integer) 1);

        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int0_4_p_0(ParseTreeInt0_6, ReadWhy0_7, STATE_VARIABLE_Acc_0_12, STATE_VARIABLE_Acc_13);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParseTreeInt1_8 = ((MR_Word) ((MR_hl_field(1, IntForOptSpec_4, (MR_Integer) 0))));
        MR_Word ReadWhy1_9 = ((MR_Unsigned) ((MR_hl_field(1, IntForOptSpec_4, (MR_Integer) 1))) & (MR_Integer) 7);

        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int1_4_p_0(ParseTreeInt1_8, ReadWhy1_9, STATE_VARIABLE_Acc_0_12, STATE_VARIABLE_Acc_13);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_10 = ((MR_Word) ((MR_hl_field(2, IntForOptSpec_4, (MR_Integer) 0))));
        MR_Word ReadWhy2_11 = ((MR_Unsigned) ((MR_hl_field(2, IntForOptSpec_4, (MR_Integer) 1))) & (MR_Integer) 3);

        hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int2_4_p_0(ParseTreeInt2_10, ReadWhy2_11, STATE_VARIABLE_Acc_0_12, STATE_VARIABLE_Acc_13);
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_indirect_int2_spec_3_p_0(
  MR_Word IndirectInt2Spec_4,
  MR_Word STATE_VARIABLE_Acc_0_8,
  MR_Word * STATE_VARIABLE_Acc_9)
{
  MR_Word ParseTreeInt2_6 = ((MR_Word) ((MR_hl_field(0, IndirectInt2Spec_4, (MR_Integer) 0))));
  MR_Word ReadWhy2_7 = ((MR_Unsigned) ((MR_hl_field(0, IndirectInt2Spec_4, (MR_Integer) 1))) & (MR_Integer) 3);

  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int2_4_p_0(ParseTreeInt2_6, ReadWhy2_7, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int2_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int2_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int2_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__IntroducedFrom__pred__acc_parse_tree_int2__851__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int2_4_p_0(
  MR_Word ParseTreeInt2_5,
  MR_Word ReadWhy2_6,
  MR_Word STATE_VARIABLE_Acc_0_93,
  MR_Word * STATE_VARIABLE_Acc_94)
{
  MR_bool succeeded;
  MR_Word IntItemImport_9 = ((&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_vector_common_8[0 + ReadWhy2_6]))->hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__vector_common_type_8_0__vct_8_f_0;
  MR_Word ImpItemImport_10 = ((&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_vector_common_8[0 + ReadWhy2_6]))->hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__vector_common_type_8_0__vct_8_f_1;
  MR_Word IntItemMercuryStatus_11;
  MR_Word ImpItemMercuryStatus_12;
  MR_Word IntSectionInfo_15;
  MR_Word ImpSectionInfo_16;
  MR_Word ModuleName_17;
  MR_Word UseMap_21;
  MR_Word IntFIMSpecs_22;
  MR_Word ImpFIMSpecs_23;
  MR_Word TypeCheckedMap_24;
  MR_Word InstCheckedMap_25;
  MR_Word ModeCheckedMap_26;
  MR_Word IntTypeClasses_27;
  MR_Word IntInstances_28;
  MR_Word IntTypeRepnMap_29;
  MR_Word AccAvails0_30;
  MR_Word AccFIMs0_31;
  MR_Word AccTypeDefnsAbs0_32;
  MR_Word AccTypeDefnsMer0_33;
  MR_Word AccTypeDefnsFor0_34;
  MR_Word AccInstDefns0_35;
  MR_Word AccModeDefns0_36;
  MR_Word AccTypeClasses0_37;
  MR_Word AccInstances0_38;
  MR_Word AccPredDecls0_39;
  MR_Word AccModeDecls0_40;
  MR_Word AccClauses0_41;
  MR_Word AccForeignProcs0_42;
  MR_Word AccForeignEnums0_43;
  MR_Word AccForeignExportEnums0_44;
  MR_Word AccDeclPragmas0_45;
  MR_Word AccDeclMarkers0_46;
  MR_Word AccDeclPragmasTypeSpec0_47;
  MR_Word AccDeclPragmasTermInfo0_48;
  MR_Word AccDeclPragmasTerm2Info0_49;
  MR_Word AccDeclPragmasSharing0_50;
  MR_Word AccDeclPragmasReuse0_51;
  MR_Word AccImplPragmas0_52;
  MR_Word AccImplMarkers0_53;
  MR_Word AccGenPragmasUnusedArgs0_54;
  MR_Word AccGenPragmasExceptions0_55;
  MR_Word AccGenPragmasTrailing0_56;
  MR_Word AccGenPragmasMMTabling0_57;
  MR_Word AccPromises0_58;
  MR_Word AccInitialises0_59;
  MR_Word AccFinalises0_60;
  MR_Word AccMutables0_61;
  MR_Word AccTypeRepns0_62;
  MR_Word IntAvails_63;
  MR_Word ImpAvails_64;
  MR_Word AccAvails_65;
  MR_Word IntFIMs_66;
  MR_Word ImpFIMs_67;
  MR_Word AccFIMs_68;
  MR_Word IntTypeDefns_69;
  MR_Word ImpTypeDefns_70;
  MR_Word IntTypeDefnsAbs_72;
  MR_Word IntTypeDefnsMer_73;
  MR_Word IntTypeDefnsFor_74;
  MR_Word ImpTypeDefnsAbs_75;
  MR_Word ImpTypeDefnsMer_76;
  MR_Word ImpTypeDefnsFor_77;
  MR_Word AccTypeDefnsAbs1_78;
  MR_Word AccTypeDefnsAbs_79;
  MR_Word AccTypeDefnsMer1_80;
  MR_Word AccTypeDefnsMer_81;
  MR_Word AccTypeDefnsFor1_82;
  MR_Word AccTypeDefnsFor_83;
  MR_Word IntInstDefns_84;
  MR_Word AccInstDefns_86;
  MR_Word IntModeDefns_87;
  MR_Word AccModeDefns_89;
  MR_Word AccTypeClasses_90;
  MR_Word AccInstances_91;
  MR_Word AccTypeRepns_92;
  MR_Word Var_95;
  MR_Word Var_100;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word Var_104;
  MR_Word Var_105;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word _ImpForeignEnums_71;
  MR_Word _ImpInstDefns_85;
  MR_Word _ImpModeDefns_88;

  {
    IntItemMercuryStatus_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, IntItemMercuryStatus_11, 0) = ((MR_Box) (IntItemImport_9));
  }
  {
    ImpItemMercuryStatus_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ImpItemMercuryStatus_12, 0) = ((MR_Box) (ImpItemImport_10));
  }
  {
    IntSectionInfo_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IntSectionInfo_15, 0) = ((MR_Box) (IntItemMercuryStatus_11));
    MR_hl_field(0, IntSectionInfo_15, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    ImpSectionInfo_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ImpSectionInfo_16, 0) = ((MR_Box) (ImpItemMercuryStatus_12));
    MR_hl_field(0, ImpSectionInfo_16, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  ModuleName_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, (MR_Integer) 0))));
  UseMap_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, (MR_Integer) 4))));
  IntFIMSpecs_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, (MR_Integer) 5))));
  ImpFIMSpecs_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, (MR_Integer) 6))));
  TypeCheckedMap_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, (MR_Integer) 7))));
  InstCheckedMap_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, (MR_Integer) 8))));
  ModeCheckedMap_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, (MR_Integer) 9))));
  IntTypeClasses_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, (MR_Integer) 10))));
  IntInstances_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, (MR_Integer) 11))));
  IntTypeRepnMap_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_5, (MR_Integer) 12))));
  AccAvails0_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 0))));
  AccFIMs0_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 1))));
  AccTypeDefnsAbs0_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 2))));
  AccTypeDefnsMer0_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 3))));
  AccTypeDefnsFor0_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 4))));
  AccInstDefns0_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 5))));
  AccModeDefns0_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 6))));
  AccTypeClasses0_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 7))));
  AccInstances0_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 8))));
  AccPredDecls0_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 9))));
  AccModeDecls0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 10))));
  AccClauses0_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 11))));
  AccForeignProcs0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 12))));
  AccForeignEnums0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 13))));
  AccForeignExportEnums0_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 14))));
  AccDeclPragmas0_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 15))));
  AccDeclMarkers0_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 16))));
  AccDeclPragmasTypeSpec0_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 17))));
  AccDeclPragmasTermInfo0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 18))));
  AccDeclPragmasTerm2Info0_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 19))));
  AccDeclPragmasSharing0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 20))));
  AccDeclPragmasReuse0_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 21))));
  AccImplPragmas0_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 22))));
  AccImplMarkers0_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 23))));
  AccGenPragmasUnusedArgs0_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 24))));
  AccGenPragmasExceptions0_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 25))));
  AccGenPragmasTrailing0_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 26))));
  AccGenPragmasMMTabling0_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 27))));
  AccPromises0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 28))));
  AccInitialises0_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 29))));
  AccFinalises0_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 30))));
  AccMutables0_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 31))));
  AccTypeRepns0_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_93, (MR_Integer) 32))));
  parse_tree__item_util__section_use_map_to_item_avails_3_p_0(UseMap_21, &IntAvails_63, &ImpAvails_64);
  {
    Var_95 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_95, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_5[1]));
    MR_hl_field(0, Var_95, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int2_4_p_0_1));
    MR_hl_field(0, Var_95, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_95, 3) = ((MR_Box) (ImpAvails_64));
    MR_hl_field(0, Var_95, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_95, (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.make_hlds_separate_items.acc_parse_tree_int2\'/4", (MR_String) "ImpAvails != []");
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_avails_4_p_0(IntItemMercuryStatus_11, IntAvails_63, AccAvails0_30, &AccAvails_65);
  Var_100 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), IntFIMSpecs_22);
  IntFIMs_66 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[19]), Var_100);
  Var_102 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs_23);
  ImpFIMs_67 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[20]), Var_102);
  Var_104 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), IntFIMs_66);
  Var_105 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), ImpFIMs_67);
  Var_103 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_104, Var_105);
  AccFIMs_68 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), AccFIMs0_31, Var_103);
  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCheckedMap_24, &IntTypeDefns_69, &ImpTypeDefns_70, &_ImpForeignEnums_71);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(IntTypeDefns_69, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsAbs_72, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsMer_73, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsFor_74);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(ImpTypeDefns_70, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsAbs_75, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsMer_76, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsFor_77);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_15, IntTypeDefnsAbs_72, AccTypeDefnsAbs0_32, &AccTypeDefnsAbs1_78);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_16, ImpTypeDefnsAbs_75, AccTypeDefnsAbs1_78, &AccTypeDefnsAbs_79);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_15, IntTypeDefnsMer_73, AccTypeDefnsMer0_33, &AccTypeDefnsMer1_80);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_16, ImpTypeDefnsMer_76, AccTypeDefnsMer1_80, &AccTypeDefnsMer_81);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_15, IntTypeDefnsFor_74, AccTypeDefnsFor0_34, &AccTypeDefnsFor1_82);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_16, ImpTypeDefnsFor_77, AccTypeDefnsFor1_82, &AccTypeDefnsFor_83);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCheckedMap_25, &IntInstDefns_84, &_ImpInstDefns_85);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[3]), IntItemMercuryStatus_11, IntInstDefns_84, AccInstDefns0_35, &AccInstDefns_86);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCheckedMap_26, &IntModeDefns_87, &_ImpModeDefns_88);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[5]), IntItemMercuryStatus_11, IntModeDefns_87, AccModeDefns0_36, &AccModeDefns_89);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntSectionInfo_15, IntTypeClasses_27, AccTypeClasses0_37, &AccTypeClasses_90);
  Var_112 = (MR_Word) (IntInstances_28);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntItemMercuryStatus_11, Var_112, AccInstances0_38, &AccInstances_91);
  {
    Var_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_114, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(0, Var_114, 1) = ((MR_Box) (IntTypeRepnMap_29));
  }
  {
    Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_113, 0) = ((MR_Box) (ModuleName_17));
    MR_hl_field(0, Var_113, 1) = ((MR_Box) (Var_114));
  }
  {
    AccTypeRepns_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, AccTypeRepns_92, 0) = ((MR_Box) (Var_113));
    MR_hl_field(1, AccTypeRepns_92, 1) = ((MR_Box) (AccTypeRepns0_62));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (33 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Acc_94 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (AccAvails_65));
    MR_hl_field(0, base, 1) = ((MR_Box) (AccFIMs_68));
    MR_hl_field(0, base, 2) = ((MR_Box) (AccTypeDefnsAbs_79));
    MR_hl_field(0, base, 3) = ((MR_Box) (AccTypeDefnsMer_81));
    MR_hl_field(0, base, 4) = ((MR_Box) (AccTypeDefnsFor_83));
    MR_hl_field(0, base, 5) = ((MR_Box) (AccInstDefns_86));
    MR_hl_field(0, base, 6) = ((MR_Box) (AccModeDefns_89));
    MR_hl_field(0, base, 7) = ((MR_Box) (AccTypeClasses_90));
    MR_hl_field(0, base, 8) = ((MR_Box) (AccInstances_91));
    MR_hl_field(0, base, 9) = ((MR_Box) (AccPredDecls0_39));
    MR_hl_field(0, base, 10) = ((MR_Box) (AccModeDecls0_40));
    MR_hl_field(0, base, 11) = ((MR_Box) (AccClauses0_41));
    MR_hl_field(0, base, 12) = ((MR_Box) (AccForeignProcs0_42));
    MR_hl_field(0, base, 13) = ((MR_Box) (AccForeignEnums0_43));
    MR_hl_field(0, base, 14) = ((MR_Box) (AccForeignExportEnums0_44));
    MR_hl_field(0, base, 15) = ((MR_Box) (AccDeclPragmas0_45));
    MR_hl_field(0, base, 16) = ((MR_Box) (AccDeclMarkers0_46));
    MR_hl_field(0, base, 17) = ((MR_Box) (AccDeclPragmasTypeSpec0_47));
    MR_hl_field(0, base, 18) = ((MR_Box) (AccDeclPragmasTermInfo0_48));
    MR_hl_field(0, base, 19) = ((MR_Box) (AccDeclPragmasTerm2Info0_49));
    MR_hl_field(0, base, 20) = ((MR_Box) (AccDeclPragmasSharing0_50));
    MR_hl_field(0, base, 21) = ((MR_Box) (AccDeclPragmasReuse0_51));
    MR_hl_field(0, base, 22) = ((MR_Box) (AccImplPragmas0_52));
    MR_hl_field(0, base, 23) = ((MR_Box) (AccImplMarkers0_53));
    MR_hl_field(0, base, 24) = ((MR_Box) (AccGenPragmasUnusedArgs0_54));
    MR_hl_field(0, base, 25) = ((MR_Box) (AccGenPragmasExceptions0_55));
    MR_hl_field(0, base, 26) = ((MR_Box) (AccGenPragmasTrailing0_56));
    MR_hl_field(0, base, 27) = ((MR_Box) (AccGenPragmasMMTabling0_57));
    MR_hl_field(0, base, 28) = ((MR_Box) (AccPromises0_58));
    MR_hl_field(0, base, 29) = ((MR_Box) (AccInitialises0_59));
    MR_hl_field(0, base, 30) = ((MR_Box) (AccFinalises0_60));
    MR_hl_field(0, base, 31) = ((MR_Box) (AccMutables0_61));
    MR_hl_field(0, base, 32) = ((MR_Box) (AccTypeRepns_92));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_direct_int1_spec_3_p_0(
  MR_Word DirectInt1Spec_4,
  MR_Word STATE_VARIABLE_Acc_0_8,
  MR_Word * STATE_VARIABLE_Acc_9)
{
  MR_Word ParseTreeInt1_6 = ((MR_Word) ((MR_hl_field(0, DirectInt1Spec_4, (MR_Integer) 0))));
  MR_Word ReadWhy1_7 = ((MR_Unsigned) ((MR_hl_field(0, DirectInt1Spec_4, (MR_Integer) 1))) & (MR_Integer) 7);

  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int1_4_p_0(ParseTreeInt1_6, ReadWhy1_7, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int1_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int1_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int1_4_p_0(
  MR_Word ParseTreeInt1_5,
  MR_Word ReadWhy1_6,
  MR_Word STATE_VARIABLE_Acc_0_107,
  MR_Word * STATE_VARIABLE_Acc_108)
{
  MR_Word IntNeedQual_9;
  MR_Word IntItemImport_10;
  MR_Word ImpItemImport_11;
  MR_Word ImpNeedQual_12;
  MR_Word IntItemMercuryStatus_13;
  MR_Word ImpItemMercuryStatus_14;
  MR_Word IntSectionInfo_15;
  MR_Word ImpSectionInfo_16;
  MR_Word ModuleName_17;
  MR_Word UseMap_21;
  MR_Word IntFIMSpecs_22;
  MR_Word ImpFIMSpecs_23;
  MR_Word TypeCheckedMap_24;
  MR_Word InstCheckedMap_25;
  MR_Word ModeCheckedMap_26;
  MR_Word IntTypeClasses_27;
  MR_Word IntInstances_28;
  MR_Word IntPredDecls_29;
  MR_Word IntModeDecls_30;
  MR_Word IntDeclPragmas_31;
  MR_Word IntDeclMarkers_32;
  MR_Word IntPromises_33;
  MR_Word IntTypeRepnMap_34;
  MR_Word ImpTypeClasses_35;
  MR_Word AccAvails0_36;
  MR_Word AccFIMs0_37;
  MR_Word AccTypeDefnsAbs0_38;
  MR_Word AccTypeDefnsMer0_39;
  MR_Word AccTypeDefnsFor0_40;
  MR_Word AccInstDefns0_41;
  MR_Word AccModeDefns0_42;
  MR_Word AccTypeClasses0_43;
  MR_Word AccInstances0_44;
  MR_Word AccPredDecls0_45;
  MR_Word AccModeDecls0_46;
  MR_Word AccClauses0_47;
  MR_Word AccForeignProcs0_48;
  MR_Word AccForeignEnums0_49;
  MR_Word AccForeignExportEnums0_50;
  MR_Word AccDeclPragmas0_51;
  MR_Word AccDeclMarkers0_52;
  MR_Word AccDeclPragmasTypeSpec0_53;
  MR_Word AccDeclPragmasTermInfo0_54;
  MR_Word AccDeclPragmasTerm2Info0_55;
  MR_Word AccDeclPragmasSharing0_56;
  MR_Word AccDeclPragmasReuse0_57;
  MR_Word AccImplPragmas0_58;
  MR_Word AccImplMarkers0_59;
  MR_Word AccGenPragmasUnusedArgs0_60;
  MR_Word AccGenPragmasExceptions0_61;
  MR_Word AccGenPragmasTrailing0_62;
  MR_Word AccGenPragmasMMTabling0_63;
  MR_Word AccPromises0_64;
  MR_Word AccInitialises0_65;
  MR_Word AccFinalises0_66;
  MR_Word AccMutables0_67;
  MR_Word AccTypeRepns0_68;
  MR_Word IntAvails_69;
  MR_Word ImpAvails_70;
  MR_Word AccAvails1_71;
  MR_Word AccAvails_72;
  MR_Word IntFIMs_73;
  MR_Word ImpFIMs_74;
  MR_Word AccFIMs_75;
  MR_Word IntTypeDefns_76;
  MR_Word ImpTypeDefns_77;
  MR_Word ImpForeignEnums_78;
  MR_Word IntTypeDefnsAbs_79;
  MR_Word IntTypeDefnsMer_80;
  MR_Word IntTypeDefnsFor_81;
  MR_Word ImpTypeDefnsAbs_82;
  MR_Word ImpTypeDefnsMer_83;
  MR_Word ImpTypeDefnsFor_84;
  MR_Word AccTypeDefnsAbs1_85;
  MR_Word AccTypeDefnsAbs_86;
  MR_Word AccTypeDefnsMer1_87;
  MR_Word AccTypeDefnsMer_88;
  MR_Word AccTypeDefnsFor1_89;
  MR_Word AccTypeDefnsFor_90;
  MR_Word IntInstDefns_91;
  MR_Word AccInstDefns_93;
  MR_Word IntModeDefns_94;
  MR_Word AccModeDefns_96;
  MR_Word AccTypeClasses1_97;
  MR_Word AccTypeClasses_98;
  MR_Word AccInstances_99;
  MR_Word AccPredDecls_100;
  MR_Word AccModeDecls_101;
  MR_Word AccForeignEnums_102;
  MR_Word AccDeclPragmas_103;
  MR_Word AccDeclMarkers_104;
  MR_Word AccPromises_105;
  MR_Word AccTypeRepns_106;
  MR_Word Var_112;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_117;
  MR_Word Var_124;
  MR_Word Var_125;
  MR_Word Var_126;
  MR_Word Var_127;
  MR_Word _ImpInstDefns_92;
  MR_Word _ImpModeDefns_95;

  switch (ReadWhy1_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        IntNeedQual_9 = (MR_Integer) 1;
        IntItemImport_10 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[1]));
        ImpItemImport_11 = (MR_Word) ((MR_Unsigned) 0U);
        ImpNeedQual_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 3:
      {
        IntNeedQual_9 = (MR_Integer) 0;
        IntItemImport_10 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[1]));
        ImpItemImport_11 = (MR_Word) ((MR_Unsigned) 0U);
        ImpNeedQual_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 0:
      {
        IntNeedQual_9 = (MR_Integer) 1;
        IntItemImport_10 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[2]));
        ImpItemImport_11 = (MR_Word) ((MR_Unsigned) 0U);
        ImpNeedQual_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        IntNeedQual_9 = (MR_Integer) 0;
        IntItemImport_10 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[2]));
        ImpItemImport_11 = (MR_Word) ((MR_Unsigned) 0U);
        ImpNeedQual_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 4:
      {
        IntNeedQual_9 = (MR_Integer) 1;
        IntItemImport_10 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[2]));
        ImpItemImport_11 = (MR_Word) ((MR_Unsigned) 0U);
        ImpNeedQual_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 5:
      {
        IntItemImport_10 = (MR_Word) ((MR_Unsigned) 4U);
        ImpItemImport_11 = (MR_Word) ((MR_Unsigned) 4U);
        IntNeedQual_9 = (MR_Integer) 0;
        ImpNeedQual_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 6:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.make_hlds_separate_items.acc_parse_tree_int1\'/4", (MR_String) "rwi1_type_repn");
        return;
      }
      break;
  }
  {
    IntItemMercuryStatus_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, IntItemMercuryStatus_13, 0) = ((MR_Box) (IntItemImport_10));
  }
  {
    ImpItemMercuryStatus_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ImpItemMercuryStatus_14, 0) = ((MR_Box) (ImpItemImport_11));
  }
  {
    IntSectionInfo_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IntSectionInfo_15, 0) = ((MR_Box) (IntItemMercuryStatus_13));
    MR_hl_field(0, IntSectionInfo_15, 1) = (MR_Box) ((MR_Unsigned) (IntNeedQual_9));
  }
  {
    ImpSectionInfo_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ImpSectionInfo_16, 0) = ((MR_Box) (ImpItemMercuryStatus_14));
    MR_hl_field(0, ImpSectionInfo_16, 1) = (MR_Box) ((MR_Unsigned) (ImpNeedQual_12));
  }
  ModuleName_17 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 0))));
  UseMap_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 4))));
  IntFIMSpecs_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 5))));
  ImpFIMSpecs_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 6))));
  TypeCheckedMap_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 7))));
  InstCheckedMap_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 8))));
  ModeCheckedMap_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 9))));
  IntTypeClasses_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 10))));
  IntInstances_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 11))));
  IntPredDecls_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 12))));
  IntModeDecls_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 13))));
  IntDeclPragmas_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 14))));
  IntDeclMarkers_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 15))));
  IntPromises_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 16))));
  IntTypeRepnMap_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 17))));
  ImpTypeClasses_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_5, (MR_Integer) 18))));
  AccAvails0_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 0))));
  AccFIMs0_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 1))));
  AccTypeDefnsAbs0_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 2))));
  AccTypeDefnsMer0_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 3))));
  AccTypeDefnsFor0_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 4))));
  AccInstDefns0_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 5))));
  AccModeDefns0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 6))));
  AccTypeClasses0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 7))));
  AccInstances0_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 8))));
  AccPredDecls0_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 9))));
  AccModeDecls0_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 10))));
  AccClauses0_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 11))));
  AccForeignProcs0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 12))));
  AccForeignEnums0_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 13))));
  AccForeignExportEnums0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 14))));
  AccDeclPragmas0_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 15))));
  AccDeclMarkers0_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 16))));
  AccDeclPragmasTypeSpec0_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 17))));
  AccDeclPragmasTermInfo0_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 18))));
  AccDeclPragmasTerm2Info0_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 19))));
  AccDeclPragmasSharing0_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 20))));
  AccDeclPragmasReuse0_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 21))));
  AccImplPragmas0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 22))));
  AccImplMarkers0_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 23))));
  AccGenPragmasUnusedArgs0_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 24))));
  AccGenPragmasExceptions0_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 25))));
  AccGenPragmasTrailing0_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 26))));
  AccGenPragmasMMTabling0_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 27))));
  AccPromises0_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 28))));
  AccInitialises0_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 29))));
  AccFinalises0_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 30))));
  AccMutables0_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 31))));
  AccTypeRepns0_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_107, (MR_Integer) 32))));
  parse_tree__item_util__section_use_map_to_item_avails_3_p_0(UseMap_21, &IntAvails_69, &ImpAvails_70);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_avails_4_p_0(IntItemMercuryStatus_13, IntAvails_69, AccAvails0_36, &AccAvails1_71);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_avails_4_p_0(ImpItemMercuryStatus_14, ImpAvails_70, AccAvails1_71, &AccAvails_72);
  Var_112 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), IntFIMSpecs_22);
  IntFIMs_73 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[17]), Var_112);
  Var_114 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs_23);
  ImpFIMs_74 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[18]), Var_114);
  Var_116 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), IntFIMs_73);
  Var_117 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), ImpFIMs_74);
  Var_115 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_116, Var_117);
  AccFIMs_75 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), AccFIMs0_37, Var_115);
  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCheckedMap_24, &IntTypeDefns_76, &ImpTypeDefns_77, &ImpForeignEnums_78);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(IntTypeDefns_76, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsAbs_79, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsMer_80, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsFor_81);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(ImpTypeDefns_77, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsAbs_82, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsMer_83, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsFor_84);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_15, IntTypeDefnsAbs_79, AccTypeDefnsAbs0_38, &AccTypeDefnsAbs1_85);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_16, ImpTypeDefnsAbs_82, AccTypeDefnsAbs1_85, &AccTypeDefnsAbs_86);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_15, IntTypeDefnsMer_80, AccTypeDefnsMer0_39, &AccTypeDefnsMer1_87);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_16, ImpTypeDefnsMer_83, AccTypeDefnsMer1_87, &AccTypeDefnsMer_88);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_15, IntTypeDefnsFor_81, AccTypeDefnsFor0_40, &AccTypeDefnsFor1_89);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_16, ImpTypeDefnsFor_84, AccTypeDefnsFor1_89, &AccTypeDefnsFor_90);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCheckedMap_25, &IntInstDefns_91, &_ImpInstDefns_92);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[3]), IntItemMercuryStatus_13, IntInstDefns_91, AccInstDefns0_41, &AccInstDefns_93);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCheckedMap_26, &IntModeDefns_94, &_ImpModeDefns_95);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[5]), IntItemMercuryStatus_13, IntModeDefns_94, AccModeDefns0_42, &AccModeDefns_96);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntSectionInfo_15, IntTypeClasses_27, AccTypeClasses0_43, &AccTypeClasses1_97);
  Var_124 = (MR_Word) (ImpTypeClasses_35);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpSectionInfo_16, Var_124, AccTypeClasses1_97, &AccTypeClasses_98);
  Var_125 = (MR_Word) (IntInstances_28);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntItemMercuryStatus_13, Var_125, AccInstances0_44, &AccInstances_99);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IntSectionInfo_15, IntPredDecls_29, AccPredDecls0_45, &AccPredDecls_100);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), IntItemMercuryStatus_13, IntModeDecls_30, AccModeDecls0_46, &AccModeDecls_101);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_tuple_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ImpItemMercuryStatus_14, ImpForeignEnums_78, AccForeignEnums0_49, &AccForeignEnums_102);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), IntItemMercuryStatus_13, IntDeclPragmas_31, AccDeclPragmas0_51, &AccDeclPragmas_103);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), IntItemMercuryStatus_13, IntDeclMarkers_32, AccDeclMarkers0_52, &AccDeclMarkers_104);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntItemMercuryStatus_13, IntPromises_33, AccPromises0_64, &AccPromises_105);
  {
    Var_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_127, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, Var_127, 1) = ((MR_Box) (IntTypeRepnMap_34));
  }
  {
    Var_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_126, 0) = ((MR_Box) (ModuleName_17));
    MR_hl_field(0, Var_126, 1) = ((MR_Box) (Var_127));
  }
  {
    AccTypeRepns_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, AccTypeRepns_106, 0) = ((MR_Box) (Var_126));
    MR_hl_field(1, AccTypeRepns_106, 1) = ((MR_Box) (AccTypeRepns0_68));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (33 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Acc_108 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (AccAvails_72));
    MR_hl_field(0, base, 1) = ((MR_Box) (AccFIMs_75));
    MR_hl_field(0, base, 2) = ((MR_Box) (AccTypeDefnsAbs_86));
    MR_hl_field(0, base, 3) = ((MR_Box) (AccTypeDefnsMer_88));
    MR_hl_field(0, base, 4) = ((MR_Box) (AccTypeDefnsFor_90));
    MR_hl_field(0, base, 5) = ((MR_Box) (AccInstDefns_93));
    MR_hl_field(0, base, 6) = ((MR_Box) (AccModeDefns_96));
    MR_hl_field(0, base, 7) = ((MR_Box) (AccTypeClasses_98));
    MR_hl_field(0, base, 8) = ((MR_Box) (AccInstances_99));
    MR_hl_field(0, base, 9) = ((MR_Box) (AccPredDecls_100));
    MR_hl_field(0, base, 10) = ((MR_Box) (AccModeDecls_101));
    MR_hl_field(0, base, 11) = ((MR_Box) (AccClauses0_47));
    MR_hl_field(0, base, 12) = ((MR_Box) (AccForeignProcs0_48));
    MR_hl_field(0, base, 13) = ((MR_Box) (AccForeignEnums_102));
    MR_hl_field(0, base, 14) = ((MR_Box) (AccForeignExportEnums0_50));
    MR_hl_field(0, base, 15) = ((MR_Box) (AccDeclPragmas_103));
    MR_hl_field(0, base, 16) = ((MR_Box) (AccDeclMarkers_104));
    MR_hl_field(0, base, 17) = ((MR_Box) (AccDeclPragmasTypeSpec0_53));
    MR_hl_field(0, base, 18) = ((MR_Box) (AccDeclPragmasTermInfo0_54));
    MR_hl_field(0, base, 19) = ((MR_Box) (AccDeclPragmasTerm2Info0_55));
    MR_hl_field(0, base, 20) = ((MR_Box) (AccDeclPragmasSharing0_56));
    MR_hl_field(0, base, 21) = ((MR_Box) (AccDeclPragmasReuse0_57));
    MR_hl_field(0, base, 22) = ((MR_Box) (AccImplPragmas0_58));
    MR_hl_field(0, base, 23) = ((MR_Box) (AccImplMarkers0_59));
    MR_hl_field(0, base, 24) = ((MR_Box) (AccGenPragmasUnusedArgs0_60));
    MR_hl_field(0, base, 25) = ((MR_Box) (AccGenPragmasExceptions0_61));
    MR_hl_field(0, base, 26) = ((MR_Box) (AccGenPragmasTrailing0_62));
    MR_hl_field(0, base, 27) = ((MR_Box) (AccGenPragmasMMTabling0_63));
    MR_hl_field(0, base, 28) = ((MR_Box) (AccPromises_105));
    MR_hl_field(0, base, 29) = ((MR_Box) (AccInitialises0_65));
    MR_hl_field(0, base, 30) = ((MR_Box) (AccFinalises0_66));
    MR_hl_field(0, base, 31) = ((MR_Box) (AccMutables0_67));
    MR_hl_field(0, base, 32) = ((MR_Box) (AccTypeRepns_106));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ancestor_int_spec_3_p_0(
  MR_Word AncestorIntSpec_4,
  MR_Word STATE_VARIABLE_Acc_0_8,
  MR_Word * STATE_VARIABLE_Acc_9)
{
  MR_Word ParseTreeInt0_6 = ((MR_Word) ((MR_hl_field(0, AncestorIntSpec_4, (MR_Integer) 0))));
  MR_Word ReadWhy0_7 = ((MR_Unsigned) ((MR_hl_field(0, AncestorIntSpec_4, (MR_Integer) 1))) & (MR_Integer) 1);

  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int0_4_p_0(ParseTreeInt0_6, ReadWhy0_7, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int0_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int0_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_int0_4_p_0(
  MR_Word ParseTreeInt0_5,
  MR_Word ReadWhy0_6,
  MR_Word STATE_VARIABLE_Acc_0_120,
  MR_Word * STATE_VARIABLE_Acc_121)
{
  MR_Word IntItemImport_10;
  MR_Word ImpItemImport_11;
  MR_Word IntNeedQual_12;
  MR_Word ImpNeedQual_13;
  MR_Word IntItemMercuryStatus_14;
  MR_Word ImpItemMercuryStatus_15;
  MR_Word IntSectionInfo_16;
  MR_Word ImpSectionInfo_17;
  MR_Word ImportUseMap_22;
  MR_Word IntFIMSpecs_23;
  MR_Word ImpFIMSpecs_24;
  MR_Word TypeCtorCheckedMap_25;
  MR_Word InstCtorCheckedMap_26;
  MR_Word ModeCtorCheckedMap_27;
  MR_Word IntTypeClasses_28;
  MR_Word IntInstances_29;
  MR_Word IntPredDecls_30;
  MR_Word IntModeDecls_31;
  MR_Word IntDeclPragmas_32;
  MR_Word IntDeclMarkers_33;
  MR_Word IntPromises_34;
  MR_Word ImpTypeClasses_35;
  MR_Word ImpInstances_36;
  MR_Word ImpPredDecls_37;
  MR_Word ImpModeDecls_38;
  MR_Word ImpDeclPragmas_39;
  MR_Word ImpDeclMarkers_40;
  MR_Word ImpPromises_41;
  MR_Word AccAvails0_42;
  MR_Word AccFIMs0_43;
  MR_Word AccTypeDefnsAbs0_44;
  MR_Word AccTypeDefnsMer0_45;
  MR_Word AccTypeDefnsFor0_46;
  MR_Word AccInstDefns0_47;
  MR_Word AccModeDefns0_48;
  MR_Word AccTypeClasses0_49;
  MR_Word AccInstances0_50;
  MR_Word AccPredDecls0_51;
  MR_Word AccModeDecls0_52;
  MR_Word AccClauses0_53;
  MR_Word AccForeignProcs0_54;
  MR_Word AccForeignEnums0_55;
  MR_Word AccForeignExportEnums0_56;
  MR_Word AccDeclPragmas0_57;
  MR_Word AccDeclMarkers0_58;
  MR_Word AccDeclPragmasTypeSpec0_59;
  MR_Word AccDeclPragmasTermInfo0_60;
  MR_Word AccDeclPragmasTerm2Info0_61;
  MR_Word AccDeclPragmasSharing0_62;
  MR_Word AccDeclPragmasReuse0_63;
  MR_Word AccImplPragmas0_64;
  MR_Word AccImplMarkers0_65;
  MR_Word AccGenPragmasUnusedArgs0_66;
  MR_Word AccGenPragmasExceptions0_67;
  MR_Word AccGenPragmasTrailing0_68;
  MR_Word AccGenPragmasMMTabling0_69;
  MR_Word AccPromises0_70;
  MR_Word AccInitialises0_71;
  MR_Word AccFinalises0_72;
  MR_Word AccMutables0_73;
  MR_Word AccTypeRepns0_74;
  MR_Word IntAvails_75;
  MR_Word ImpAvails_76;
  MR_Word AccAvails1_77;
  MR_Word AccAvails_78;
  MR_Word IntFIMs_79;
  MR_Word ImpFIMs_80;
  MR_Word AccFIMs_81;
  MR_Word IntTypeDefns_82;
  MR_Word ImpTypeDefns_83;
  MR_Word ImpForeignEnums_84;
  MR_Word IntTypeDefnsAbs_85;
  MR_Word IntTypeDefnsMer_86;
  MR_Word IntTypeDefnsFor_87;
  MR_Word ImpTypeDefnsAbs_88;
  MR_Word ImpTypeDefnsMer_89;
  MR_Word ImpTypeDefnsFor_90;
  MR_Word AccTypeDefnsAbs1_91;
  MR_Word AccTypeDefnsAbs_92;
  MR_Word AccTypeDefnsMer1_93;
  MR_Word AccTypeDefnsMer_94;
  MR_Word AccTypeDefnsFor1_95;
  MR_Word AccTypeDefnsFor_96;
  MR_Word IntInstDefns_97;
  MR_Word ImpInstDefns_98;
  MR_Word AccInstDefns1_99;
  MR_Word AccInstDefns_100;
  MR_Word IntModeDefns_101;
  MR_Word ImpModeDefns_102;
  MR_Word AccModeDefns1_103;
  MR_Word AccModeDefns_104;
  MR_Word AccTypeClasses1_105;
  MR_Word AccTypeClasses_106;
  MR_Word AccInstances1_107;
  MR_Word AccInstances_108;
  MR_Word AccPredDecls1_109;
  MR_Word AccPredDecls_110;
  MR_Word AccModeDecls1_111;
  MR_Word AccModeDecls_112;
  MR_Word AccForeignEnums_113;
  MR_Word AccDeclPragmas1_114;
  MR_Word AccDeclMarkers1_115;
  MR_Word AccDeclPragmas_116;
  MR_Word AccDeclMarkers_117;
  MR_Word AccPromises1_118;
  MR_Word AccPromises_119;
  MR_Word Var_123;
  MR_Word Var_125;
  MR_Word Var_126;
  MR_Word Var_127;
  MR_Word Var_128;
  MR_Word Var_135;
  MR_Word Var_136;

  switch (ReadWhy0_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        IntItemImport_10 = (MR_Word) ((MR_Unsigned) 4U);
        ImpItemImport_11 = (MR_Word) ((MR_Unsigned) 4U);
        IntNeedQual_12 = (MR_Integer) 0;
        ImpNeedQual_13 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 0:
      {
        IntItemImport_10 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[3]));
        ImpItemImport_11 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[4]));
        IntNeedQual_12 = (MR_Integer) 1;
        ImpNeedQual_13 = (MR_Integer) 1;
      }
      break;
  }
  {
    IntItemMercuryStatus_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, IntItemMercuryStatus_14, 0) = ((MR_Box) (IntItemImport_10));
  }
  {
    ImpItemMercuryStatus_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ImpItemMercuryStatus_15, 0) = ((MR_Box) (ImpItemImport_11));
  }
  {
    IntSectionInfo_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, IntSectionInfo_16, 0) = ((MR_Box) (IntItemMercuryStatus_14));
    MR_hl_field(0, IntSectionInfo_16, 1) = (MR_Box) ((MR_Unsigned) (IntNeedQual_12));
  }
  {
    ImpSectionInfo_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ImpSectionInfo_17, 0) = ((MR_Box) (ImpItemMercuryStatus_15));
    MR_hl_field(0, ImpSectionInfo_17, 1) = (MR_Box) ((MR_Unsigned) (ImpNeedQual_13));
  }
  ImportUseMap_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 4))));
  IntFIMSpecs_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 5))));
  ImpFIMSpecs_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 6))));
  TypeCtorCheckedMap_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 7))));
  InstCtorCheckedMap_26 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 8))));
  ModeCtorCheckedMap_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 9))));
  IntTypeClasses_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 10))));
  IntInstances_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 11))));
  IntPredDecls_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 12))));
  IntModeDecls_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 13))));
  IntDeclPragmas_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 14))));
  IntDeclMarkers_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 15))));
  IntPromises_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 16))));
  ImpTypeClasses_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 17))));
  ImpInstances_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 18))));
  ImpPredDecls_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 19))));
  ImpModeDecls_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 20))));
  ImpDeclPragmas_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 21))));
  ImpDeclMarkers_40 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 22))));
  ImpPromises_41 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_5, (MR_Integer) 23))));
  AccAvails0_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 0))));
  AccFIMs0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 1))));
  AccTypeDefnsAbs0_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 2))));
  AccTypeDefnsMer0_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 3))));
  AccTypeDefnsFor0_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 4))));
  AccInstDefns0_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 5))));
  AccModeDefns0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 6))));
  AccTypeClasses0_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 7))));
  AccInstances0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 8))));
  AccPredDecls0_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 9))));
  AccModeDecls0_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 10))));
  AccClauses0_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 11))));
  AccForeignProcs0_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 12))));
  AccForeignEnums0_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 13))));
  AccForeignExportEnums0_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 14))));
  AccDeclPragmas0_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 15))));
  AccDeclMarkers0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 16))));
  AccDeclPragmasTypeSpec0_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 17))));
  AccDeclPragmasTermInfo0_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 18))));
  AccDeclPragmasTerm2Info0_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 19))));
  AccDeclPragmasSharing0_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 20))));
  AccDeclPragmasReuse0_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 21))));
  AccImplPragmas0_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 22))));
  AccImplMarkers0_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 23))));
  AccGenPragmasUnusedArgs0_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 24))));
  AccGenPragmasExceptions0_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 25))));
  AccGenPragmasTrailing0_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 26))));
  AccGenPragmasMMTabling0_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 27))));
  AccPromises0_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 28))));
  AccInitialises0_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 29))));
  AccFinalises0_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 30))));
  AccMutables0_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 31))));
  AccTypeRepns0_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_120, (MR_Integer) 32))));
  parse_tree__item_util__section_import_and_or_use_map_to_item_avails_3_p_0(ImportUseMap_22, &IntAvails_75, &ImpAvails_76);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_avails_4_p_0(IntItemMercuryStatus_14, IntAvails_75, AccAvails0_42, &AccAvails1_77);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_avails_4_p_0(ImpItemMercuryStatus_15, ImpAvails_76, AccAvails1_77, &AccAvails_78);
  Var_123 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), IntFIMSpecs_23);
  IntFIMs_79 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[15]), Var_123);
  Var_125 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), ImpFIMSpecs_24);
  ImpFIMs_80 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[16]), Var_125);
  Var_127 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), IntFIMs_79);
  Var_128 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), ImpFIMs_80);
  Var_126 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_127, Var_128);
  AccFIMs_81 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), AccFIMs0_43, Var_126);
  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_25, &IntTypeDefns_82, &ImpTypeDefns_83, &ImpForeignEnums_84);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(IntTypeDefns_82, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsAbs_85, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsMer_86, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsFor_87);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(ImpTypeDefns_83, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsAbs_88, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsMer_89, (MR_Word) ((MR_Unsigned) 0U), &ImpTypeDefnsFor_90);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_16, IntTypeDefnsAbs_85, AccTypeDefnsAbs0_44, &AccTypeDefnsAbs1_91);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_17, ImpTypeDefnsAbs_88, AccTypeDefnsAbs1_91, &AccTypeDefnsAbs_92);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_16, IntTypeDefnsMer_86, AccTypeDefnsMer0_45, &AccTypeDefnsMer1_93);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_17, ImpTypeDefnsMer_89, AccTypeDefnsMer1_93, &AccTypeDefnsMer_94);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), IntSectionInfo_16, IntTypeDefnsFor_87, AccTypeDefnsFor0_46, &AccTypeDefnsFor1_95);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), ImpSectionInfo_17, ImpTypeDefnsFor_90, AccTypeDefnsFor1_95, &AccTypeDefnsFor_96);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_26, &IntInstDefns_97, &ImpInstDefns_98);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[3]), IntItemMercuryStatus_14, IntInstDefns_97, AccInstDefns0_47, &AccInstDefns1_99);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[3]), ImpItemMercuryStatus_15, ImpInstDefns_98, AccInstDefns1_99, &AccInstDefns_100);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_27, &IntModeDefns_101, &ImpModeDefns_102);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[5]), IntItemMercuryStatus_14, IntModeDefns_101, AccModeDefns0_48, &AccModeDefns1_103);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[5]), ImpItemMercuryStatus_15, ImpModeDefns_102, AccModeDefns1_103, &AccModeDefns_104);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), IntSectionInfo_16, IntTypeClasses_28, AccTypeClasses0_49, &AccTypeClasses1_105);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), ImpSectionInfo_17, ImpTypeClasses_35, AccTypeClasses1_105, &AccTypeClasses_106);
  Var_135 = (MR_Word) (IntInstances_29);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), IntItemMercuryStatus_14, Var_135, AccInstances0_50, &AccInstances1_107);
  Var_136 = (MR_Word) (ImpInstances_36);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), ImpItemMercuryStatus_15, Var_136, AccInstances1_107, &AccInstances_108);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IntSectionInfo_16, IntPredDecls_30, AccPredDecls0_51, &AccPredDecls1_109);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), ImpSectionInfo_17, ImpPredDecls_37, AccPredDecls1_109, &AccPredDecls_110);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), IntItemMercuryStatus_14, IntModeDecls_31, AccModeDecls0_52, &AccModeDecls1_111);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), ImpItemMercuryStatus_15, ImpModeDecls_38, AccModeDecls1_111, &AccModeDecls_112);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_tuple_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ImpItemMercuryStatus_15, ImpForeignEnums_84, AccForeignEnums0_55, &AccForeignEnums_113);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), IntItemMercuryStatus_14, IntDeclPragmas_32, AccDeclPragmas0_57, &AccDeclPragmas1_114);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), IntItemMercuryStatus_14, IntDeclMarkers_33, AccDeclMarkers0_58, &AccDeclMarkers1_115);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), ImpItemMercuryStatus_15, ImpDeclPragmas_39, AccDeclPragmas1_114, &AccDeclPragmas_116);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), ImpItemMercuryStatus_15, ImpDeclMarkers_40, AccDeclMarkers1_115, &AccDeclMarkers_117);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), IntItemMercuryStatus_14, IntPromises_34, AccPromises0_70, &AccPromises1_118);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), ImpItemMercuryStatus_15, ImpPromises_41, AccPromises1_118, &AccPromises_119);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (33 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Acc_121 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (AccAvails_78));
    MR_hl_field(0, base, 1) = ((MR_Box) (AccFIMs_81));
    MR_hl_field(0, base, 2) = ((MR_Box) (AccTypeDefnsAbs_92));
    MR_hl_field(0, base, 3) = ((MR_Box) (AccTypeDefnsMer_94));
    MR_hl_field(0, base, 4) = ((MR_Box) (AccTypeDefnsFor_96));
    MR_hl_field(0, base, 5) = ((MR_Box) (AccInstDefns_100));
    MR_hl_field(0, base, 6) = ((MR_Box) (AccModeDefns_104));
    MR_hl_field(0, base, 7) = ((MR_Box) (AccTypeClasses_106));
    MR_hl_field(0, base, 8) = ((MR_Box) (AccInstances_108));
    MR_hl_field(0, base, 9) = ((MR_Box) (AccPredDecls_110));
    MR_hl_field(0, base, 10) = ((MR_Box) (AccModeDecls_112));
    MR_hl_field(0, base, 11) = ((MR_Box) (AccClauses0_53));
    MR_hl_field(0, base, 12) = ((MR_Box) (AccForeignProcs0_54));
    MR_hl_field(0, base, 13) = ((MR_Box) (AccForeignEnums_113));
    MR_hl_field(0, base, 14) = ((MR_Box) (AccForeignExportEnums0_56));
    MR_hl_field(0, base, 15) = ((MR_Box) (AccDeclPragmas_116));
    MR_hl_field(0, base, 16) = ((MR_Box) (AccDeclMarkers_117));
    MR_hl_field(0, base, 17) = ((MR_Box) (AccDeclPragmasTypeSpec0_59));
    MR_hl_field(0, base, 18) = ((MR_Box) (AccDeclPragmasTermInfo0_60));
    MR_hl_field(0, base, 19) = ((MR_Box) (AccDeclPragmasTerm2Info0_61));
    MR_hl_field(0, base, 20) = ((MR_Box) (AccDeclPragmasSharing0_62));
    MR_hl_field(0, base, 21) = ((MR_Box) (AccDeclPragmasReuse0_63));
    MR_hl_field(0, base, 22) = ((MR_Box) (AccImplPragmas0_64));
    MR_hl_field(0, base, 23) = ((MR_Box) (AccImplMarkers0_65));
    MR_hl_field(0, base, 24) = ((MR_Box) (AccGenPragmasUnusedArgs0_66));
    MR_hl_field(0, base, 25) = ((MR_Box) (AccGenPragmasExceptions0_67));
    MR_hl_field(0, base, 26) = ((MR_Box) (AccGenPragmasTrailing0_68));
    MR_hl_field(0, base, 27) = ((MR_Box) (AccGenPragmasMMTabling0_69));
    MR_hl_field(0, base, 28) = ((MR_Box) (AccPromises_119));
    MR_hl_field(0, base, 29) = ((MR_Box) (AccInitialises0_71));
    MR_hl_field(0, base, 30) = ((MR_Box) (AccFinalises0_72));
    MR_hl_field(0, base, 31) = ((MR_Box) (AccMutables0_73));
    MR_hl_field(0, base, 32) = ((MR_Box) (AccTypeRepns0_74));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_type_repn_map_3_p_0(
  MR_Word IntTypeRepns_4,
  MR_Word STATE_VARIABLE_Cord_0_9,
  MR_Word * STATE_VARIABLE_Cord_10)
{
  MR_Word TypeCtorRepnMap_7 = ((MR_Word) ((MR_hl_field(0, IntTypeRepns_4, (MR_Integer) 1))));
  MR_Word TypeCtorRepnPairs_8;
  MR_Word Var_12;

  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[21]), TypeCtorRepnMap_7, &TypeCtorRepnPairs_8);
  Var_12 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[2]), TypeCtorRepnPairs_8);
  *STATE_VARIABLE_Cord_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[2]), STATE_VARIABLE_Cord_0_9, Var_12);
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_int_type_repn_map_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleMap_0_14,
  MR_Word * STATE_VARIABLE_ModuleMap_15)
{
  MR_bool succeeded;
  MR_Word ModuleName_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word IntTypeRepns_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word IntFileKind_7 = ((MR_Unsigned) ((MR_hl_field(0, IntTypeRepns_5, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word OldIntTypeRepns_9;
  MR_Box conv0_OldIntTypeRepns_9;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0), STATE_VARIABLE_ModuleMap_0_14, ((MR_Box) (ModuleName_4)), &conv0_OldIntTypeRepns_9);
  if (succeeded)
  {
    OldIntTypeRepns_9 = ((MR_Word) (conv0_OldIntTypeRepns_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word OldIntFileKind_10 = ((MR_Unsigned) ((MR_hl_field(0, OldIntTypeRepns_9, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Integer Content_12 = ((&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_vector_common_7[0 + IntFileKind_7]))->hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__vector_common_type_7_0__vct_7_f_0;
    MR_Integer OldContent_13 = ((&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_vector_common_7[4 + OldIntFileKind_10]))->hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__vector_common_type_7_0__vct_7_f_0;

    succeeded = (Content_12 > OldContent_13);
    if (succeeded)
      mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0), ((MR_Box) (ModuleName_4)), ((MR_Box) (IntTypeRepns_5)), STATE_VARIABLE_ModuleMap_0_14, STATE_VARIABLE_ModuleMap_15);
    else
      *STATE_VARIABLE_ModuleMap_15 = STATE_VARIABLE_ModuleMap_0_14;
  }
  else
    mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0), ((MR_Box) (ModuleName_4)), ((MR_Box) (IntTypeRepns_5)), STATE_VARIABLE_ModuleMap_0_14, STATE_VARIABLE_ModuleMap_15);
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_STATE_VARIABLE_Cord_10;

  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_type_repn_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv16_STATE_VARIABLE_Cord_10);
  *wrapper_arg_3 = ((MR_Box) (conv16_STATE_VARIABLE_Cord_10));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_STATE_VARIABLE_ModuleMap_15;

  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_int_type_repn_map_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_ModuleMap_15);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_ModuleMap_15));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_Acc_12;

  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_type_repn_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_Acc_12);
  *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_Acc_12));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_Acc_56;

  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_trans_opt_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_Acc_56);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_Acc_56));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Acc_99;

  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_plain_opt_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Acc_99);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Acc_99));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Acc_13;

  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_int_for_opt_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Acc_13);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Acc_13));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Acc_9;

  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_indirect_int2_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Acc_9);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Acc_9));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Acc_9;

  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_direct_int1_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Acc_9);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Acc_9));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Acc_9;

  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ancestor_int_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Acc_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Acc_9));
}

void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_36_p_0(
  MR_Word AugCompUnit_37,
  MR_Word * InclMap_38,
  MR_Word * Avails_39,
  MR_Word * FIMs_40,
  MR_Word * TypeDefnsAbstract_41,
  MR_Word * TypeDefnsMercury_42,
  MR_Word * TypeDefnsForeign_43,
  MR_Word * InstDefns_44,
  MR_Word * ModeDefns_45,
  MR_Word * PredDecls_46,
  MR_Word * ModeDecls_47,
  MR_Word * Promises_48,
  MR_Word * TypeClasses_49,
  MR_Word * Instances_50,
  MR_Word * Initialises_51,
  MR_Word * Finalises_52,
  MR_Word * Mutables_53,
  MR_Word * TypeRepnMap_54,
  MR_Word * ForeignEnums_55,
  MR_Word * ForeignExportEnums_56,
  MR_Word * DeclPragmas_57,
  MR_Word * DeclMarkers_58,
  MR_Word * DeclPragmasTypeSpec_59,
  MR_Word * DeclPragmasTermInfo_60,
  MR_Word * DeclPragmasTerm2Info_61,
  MR_Word * DeclPragmasSharing_62,
  MR_Word * DeclPragmasReuse_63,
  MR_Word * ImplPragmas_64,
  MR_Word * ImplMarkers_65,
  MR_Word * GenPragmasUnusedArgs_66,
  MR_Word * GenPragmasExceptions_67,
  MR_Word * GenPragmasTrailing_68,
  MR_Word * GenPragmasMMTabling_69,
  MR_Word * Clauses_70,
  MR_Word * ForeignProcs_71,
  MR_Word * IntBadPreds_72)
{
  MR_Word ParseTreeModuleSrc_73 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_37, (MR_Integer) 0))));
  MR_Word AncestorIntSpecs_74 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_37, (MR_Integer) 1))));
  MR_Word DirectInt1Specs_75 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_37, (MR_Integer) 2))));
  MR_Word IndirectInt2Specs_76 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_37, (MR_Integer) 3))));
  MR_Word PlainOpts_77 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_37, (MR_Integer) 4))));
  MR_Word TransOpts_78 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_37, (MR_Integer) 5))));
  MR_Word IntForOptSpecs_79 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_37, (MR_Integer) 6))));
  MR_Word TypeRepnSpecs_80 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_37, (MR_Integer) 7))));
  MR_Word AvailsCord_83;
  MR_Word FIMsCord_84;
  MR_Word TypeDefnsAbstractCord_85;
  MR_Word TypeDefnsMercuryCord_86;
  MR_Word TypeDefnsForeignCord_87;
  MR_Word InstDefnsCord_88;
  MR_Word ModeDefnsCord_89;
  MR_Word TypeClassesCord_90;
  MR_Word InstancesCord_91;
  MR_Word PredDeclsCord_92;
  MR_Word ModeDeclsCord_93;
  MR_Word ClausesCord_94;
  MR_Word ForeignProcsCord_95;
  MR_Word ForeignEnumsCord_96;
  MR_Word ForeignExportEnumsCord_97;
  MR_Word DeclPragmasCord_98;
  MR_Word DeclMarkersCord_99;
  MR_Word DeclPragmasTypeSpecCord_100;
  MR_Word DeclPragmasTermInfoCord_101;
  MR_Word DeclPragmasTerm2InfoCord_102;
  MR_Word DeclPragmasSharingCord_103;
  MR_Word DeclPragmasReuseCord_104;
  MR_Word ImplPragmasCord_105;
  MR_Word ImplMarkersCord_106;
  MR_Word GenPragmasUnusedArgsCord_107;
  MR_Word GenPragmasExceptionsCord_108;
  MR_Word GenPragmasTrailingCord_109;
  MR_Word GenPragmasMMTablingCord_110;
  MR_Word PromisesCord_111;
  MR_Word InitialisesCord_112;
  MR_Word FinalisesCord_113;
  MR_Word MutablesCord_114;
  MR_Word ModuleIntTypeRepns_115;
  MR_Word ModuleIntTypeRepnMap_116;
  MR_Word TypeCtorRepnsCord_117;
  MR_Word STATE_VARIABLE_Acc_118_118;
  MR_Word Var_119;
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
  MR_Word Var_135;
  MR_Word Var_136;
  MR_Word Var_137;
  MR_Word Var_138;
  MR_Word Var_139;
  MR_Word Var_140;
  MR_Word Var_141;
  MR_Word Var_142;
  MR_Word Var_143;
  MR_Word Var_144;
  MR_Word Var_145;
  MR_Word Var_146;
  MR_Word Var_147;
  MR_Word Var_148;
  MR_Word Var_149;
  MR_Word Var_150;
  MR_Word STATE_VARIABLE_Acc_152_152;
  MR_Word STATE_VARIABLE_Acc_154_154;
  MR_Word STATE_VARIABLE_Acc_156_156;
  MR_Word STATE_VARIABLE_Acc_158_158;
  MR_Word STATE_VARIABLE_Acc_160_160;
  MR_Word STATE_VARIABLE_Acc_162_162;
  MR_Word STATE_VARIABLE_Acc_164_164;
  MR_Word STATE_VARIABLE_Acc_166_166;
  MR_Word Var_168;
  MR_Word Var_170;
  MR_Word Var_171;
  MR_Box conv1_STATE_VARIABLE_Acc_154_154;
  MR_Box conv3_STATE_VARIABLE_Acc_156_156;
  MR_Box conv5_STATE_VARIABLE_Acc_158_158;
  MR_Box conv7_STATE_VARIABLE_Acc_160_160;
  MR_Box conv9_STATE_VARIABLE_Acc_162_162;
  MR_Box conv11_STATE_VARIABLE_Acc_164_164;
  MR_Box conv13_STATE_VARIABLE_Acc_166_166;
  MR_Box conv15_ModuleIntTypeRepnMap_116;
  MR_Box conv17_TypeCtorRepnsCord_117;

  Var_119 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[0]));
  Var_120 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0));
  Var_121 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[2]));
  Var_122 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[2]));
  Var_123 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[2]));
  Var_124 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[4]));
  Var_125 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[6]));
  Var_126 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[7]));
  Var_127 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[8]));
  Var_128 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[9]));
  Var_129 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[10]));
  Var_130 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[11]));
  Var_131 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[12]));
  Var_132 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[0]));
  Var_133 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0));
  Var_134 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[13]));
  Var_135 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[14]));
  Var_136 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0));
  Var_137 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0));
  Var_138 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0));
  Var_139 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0));
  Var_140 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0));
  Var_141 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[15]));
  Var_142 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[16]));
  Var_143 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0));
  Var_144 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0));
  Var_145 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0));
  Var_146 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0));
  Var_147 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[17]));
  Var_148 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[18]));
  Var_149 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[19]));
  Var_150 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[20]));
  {
    STATE_VARIABLE_Acc_118_118 = (MR_Word) MR_new_object(MR_Word, (33 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 0) = ((MR_Box) (Var_119));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 1) = ((MR_Box) (Var_120));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 2) = ((MR_Box) (Var_121));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 3) = ((MR_Box) (Var_122));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 4) = ((MR_Box) (Var_123));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 5) = ((MR_Box) (Var_124));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 6) = ((MR_Box) (Var_125));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 7) = ((MR_Box) (Var_126));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 8) = ((MR_Box) (Var_127));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 9) = ((MR_Box) (Var_128));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 10) = ((MR_Box) (Var_129));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 11) = ((MR_Box) (Var_130));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 12) = ((MR_Box) (Var_131));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 13) = ((MR_Box) (Var_132));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 14) = ((MR_Box) (Var_133));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 15) = ((MR_Box) (Var_134));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 16) = ((MR_Box) (Var_135));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 17) = ((MR_Box) (Var_136));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 18) = ((MR_Box) (Var_137));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 19) = ((MR_Box) (Var_138));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 20) = ((MR_Box) (Var_139));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 21) = ((MR_Box) (Var_140));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 22) = ((MR_Box) (Var_141));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 23) = ((MR_Box) (Var_142));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 24) = ((MR_Box) (Var_143));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 25) = ((MR_Box) (Var_144));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 26) = ((MR_Box) (Var_145));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 27) = ((MR_Box) (Var_146));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 28) = ((MR_Box) (Var_147));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 29) = ((MR_Box) (Var_148));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 30) = ((MR_Box) (Var_149));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 31) = ((MR_Box) (Var_150));
    MR_hl_field(0, STATE_VARIABLE_Acc_118_118, 32) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_module_src_3_p_0(ParseTreeModuleSrc_73, STATE_VARIABLE_Acc_118_118, &STATE_VARIABLE_Acc_152_152);
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[6]), AncestorIntSpecs_74, ((MR_Box) (STATE_VARIABLE_Acc_152_152)), &conv1_STATE_VARIABLE_Acc_154_154);
  STATE_VARIABLE_Acc_154_154 = ((MR_Word) (conv1_STATE_VARIABLE_Acc_154_154));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[7]), DirectInt1Specs_75, ((MR_Box) (STATE_VARIABLE_Acc_154_154)), &conv3_STATE_VARIABLE_Acc_156_156);
  STATE_VARIABLE_Acc_156_156 = ((MR_Word) (conv3_STATE_VARIABLE_Acc_156_156));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[8]), IndirectInt2Specs_76, ((MR_Box) (STATE_VARIABLE_Acc_156_156)), &conv5_STATE_VARIABLE_Acc_158_158);
  STATE_VARIABLE_Acc_158_158 = ((MR_Word) (conv5_STATE_VARIABLE_Acc_158_158));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[9]), IntForOptSpecs_79, ((MR_Box) (STATE_VARIABLE_Acc_158_158)), &conv7_STATE_VARIABLE_Acc_160_160);
  STATE_VARIABLE_Acc_160_160 = ((MR_Word) (conv7_STATE_VARIABLE_Acc_160_160));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[10]), PlainOpts_77, ((MR_Box) (STATE_VARIABLE_Acc_160_160)), &conv9_STATE_VARIABLE_Acc_162_162);
  STATE_VARIABLE_Acc_162_162 = ((MR_Word) (conv9_STATE_VARIABLE_Acc_162_162));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_trans_opt_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[11]), TransOpts_78, ((MR_Box) (STATE_VARIABLE_Acc_162_162)), &conv11_STATE_VARIABLE_Acc_164_164);
  STATE_VARIABLE_Acc_164_164 = ((MR_Word) (conv11_STATE_VARIABLE_Acc_164_164));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_repn_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[12]), TypeRepnSpecs_80, ((MR_Box) (STATE_VARIABLE_Acc_164_164)), &conv13_STATE_VARIABLE_Acc_166_166);
  STATE_VARIABLE_Acc_166_166 = ((MR_Word) (conv13_STATE_VARIABLE_Acc_166_166));
  AvailsCord_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 0))));
  FIMsCord_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 1))));
  TypeDefnsAbstractCord_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 2))));
  TypeDefnsMercuryCord_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 3))));
  TypeDefnsForeignCord_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 4))));
  InstDefnsCord_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 5))));
  ModeDefnsCord_89 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 6))));
  TypeClassesCord_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 7))));
  InstancesCord_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 8))));
  PredDeclsCord_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 9))));
  ModeDeclsCord_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 10))));
  ClausesCord_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 11))));
  ForeignProcsCord_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 12))));
  ForeignEnumsCord_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 13))));
  ForeignExportEnumsCord_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 14))));
  DeclPragmasCord_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 15))));
  DeclMarkersCord_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 16))));
  DeclPragmasTypeSpecCord_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 17))));
  DeclPragmasTermInfoCord_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 18))));
  DeclPragmasTerm2InfoCord_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 19))));
  DeclPragmasSharingCord_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 20))));
  DeclPragmasReuseCord_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 21))));
  ImplPragmasCord_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 22))));
  ImplMarkersCord_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 23))));
  GenPragmasUnusedArgsCord_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 24))));
  GenPragmasExceptionsCord_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 25))));
  GenPragmasTrailingCord_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 26))));
  GenPragmasMMTablingCord_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 27))));
  PromisesCord_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 28))));
  InitialisesCord_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 29))));
  FinalisesCord_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 30))));
  MutablesCord_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 31))));
  ModuleIntTypeRepns_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_166_166, (MR_Integer) 32))));
  *Avails_39 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[0]), AvailsCord_83);
  *FIMs_40 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), FIMsCord_84);
  *TypeDefnsAbstract_41 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[2]), TypeDefnsAbstractCord_85);
  *TypeDefnsMercury_42 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[2]), TypeDefnsMercuryCord_86);
  *TypeDefnsForeign_43 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[2]), TypeDefnsForeignCord_87);
  *InstDefns_44 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[4]), InstDefnsCord_88);
  *ModeDefns_45 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[6]), ModeDefnsCord_89);
  *TypeClasses_49 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[7]), TypeClassesCord_90);
  *Instances_50 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[8]), InstancesCord_91);
  *PredDecls_46 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[9]), PredDeclsCord_92);
  *ModeDecls_47 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[10]), ModeDeclsCord_93);
  *Clauses_70 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[11]), ClausesCord_94);
  *ForeignProcs_71 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[12]), ForeignProcsCord_95);
  *ForeignEnums_55 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_2[0]), ForeignEnumsCord_96);
  *ForeignExportEnums_56 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), ForeignExportEnumsCord_97);
  *DeclPragmas_57 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[13]), DeclPragmasCord_98);
  *DeclMarkers_58 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[14]), DeclMarkersCord_99);
  *DeclPragmasTypeSpec_59 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), DeclPragmasTypeSpecCord_100);
  *DeclPragmasTermInfo_60 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination_info_0), DeclPragmasTermInfoCord_101);
  *DeclPragmasTerm2Info_61 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_termination2_info_0), DeclPragmasTerm2InfoCord_102);
  *DeclPragmasSharing_62 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_sharing_info_0), DeclPragmasSharingCord_103);
  *DeclPragmasReuse_63 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_struct_reuse_info_0), DeclPragmasReuseCord_104);
  *ImplPragmas_64 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[15]), ImplPragmasCord_105);
  *ImplMarkers_65 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[16]), ImplMarkersCord_106);
  *GenPragmasUnusedArgs_66 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0), GenPragmasUnusedArgsCord_107);
  *GenPragmasExceptions_67 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_exceptions_info_0), GenPragmasExceptionsCord_108);
  *GenPragmasTrailing_68 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_trailing_info_0), GenPragmasTrailingCord_109);
  *GenPragmasMMTabling_69 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_mm_tabling_info_0), GenPragmasMMTablingCord_110);
  *Promises_48 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[17]), PromisesCord_111);
  *Initialises_51 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[18]), InitialisesCord_112);
  *Finalises_52 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[19]), FinalisesCord_113);
  *Mutables_53 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[20]), MutablesCord_114);
  Var_168 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0));
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[0]), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[1]), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[13]), ModuleIntTypeRepns_115, ((MR_Box) (Var_168)), &conv15_ModuleIntTypeRepnMap_116);
  ModuleIntTypeRepnMap_116 = ((MR_Word) (conv15_ModuleIntTypeRepnMap_116));
  Var_170 = mercury__cord__init_0_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[2]));
  mercury__map__foldl_values_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[22]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[14]), ModuleIntTypeRepnMap_116, ((MR_Box) (Var_170)), &conv17_TypeCtorRepnsCord_117);
  TypeCtorRepnsCord_117 = ((MR_Word) (conv17_TypeCtorRepnsCord_117));
  Var_171 = mercury__cord__list_1_f_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[2]), TypeCtorRepnsCord_117);
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[21]), Var_171, TypeRepnMap_54);
  *InclMap_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_73, (MR_Integer) 2))));
  *IntBadPreds_72 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_73, (MR_Integer) 20))));
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_module_src_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_module_src_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__item_util__fim_spec_to_item_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_parse_tree_module_src_3_p_0(
  MR_Word ParseTreeModuleSrc_4,
  MR_Word STATE_VARIABLE_Acc_0_134,
  MR_Word * STATE_VARIABLE_Acc_135)
{
  MR_bool succeeded;
  MR_Word InclMap_8 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 2))));
  MR_Word ImportUseMap_9 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 3))));
  MR_Word IntFIMSpecMap_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 4))));
  MR_Word ImpFIMSpecMap_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 5))));
  MR_Word TypeCtorCheckedMap_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 8))));
  MR_Word InstCtorCheckedMap_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 9))));
  MR_Word ModeCtorCheckedMap_16 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 10))));
  MR_Word IntTypeClasses_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 13))));
  MR_Word IntInstances_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 14))));
  MR_Word IntPredDecls_21 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 15))));
  MR_Word IntModeDecls_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 16))));
  MR_Word IntDeclPragmas_23 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 17))));
  MR_Word IntDeclMarkers_24 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 18))));
  MR_Word IntPromises_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 19))));
  MR_Word SubTypeClasses_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 21))));
  MR_Word SubInstances_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 22))));
  MR_Word SubPredDecls_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 23))));
  MR_Word SubModeDecls_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 24))));
  MR_Word ImpClauses_31 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 25))));
  MR_Word ImpForeignProcs_32 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 26))));
  MR_Word ImpForeignExportEnums_33 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 27))));
  MR_Word SubDeclPragmas_34 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 28))));
  MR_Word SubDeclMarkers_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 29))));
  MR_Word ImpImplPragmas_36 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 30))));
  MR_Word ImpImplMarkers_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 31))));
  MR_Word SubPromises_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 32))));
  MR_Word ImpInitialises_39 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 33))));
  MR_Word ImpFinalises_40 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 34))));
  MR_Word SubMutables_41 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_4, (MR_Integer) 35))));
  MR_Word SubItemMercuryStatus_46;
  MR_Word SubSectionInfo_47;
  MR_Word AccAvails0_48;
  MR_Word AccFIMs0_49;
  MR_Word AccTypeDefnsAbs0_50;
  MR_Word AccTypeDefnsMer0_51;
  MR_Word AccTypeDefnsFor0_52;
  MR_Word AccInstDefns0_53;
  MR_Word AccModeDefns0_54;
  MR_Word AccTypeClasses0_55;
  MR_Word AccInstances0_56;
  MR_Word AccPredDecls0_57;
  MR_Word AccModeDecls0_58;
  MR_Word AccClauses0_59;
  MR_Word AccForeignProcs0_60;
  MR_Word AccForeignEnums0_61;
  MR_Word AccForeignExportEnums0_62;
  MR_Word AccDeclPragmas0_63;
  MR_Word AccDeclMarkers0_64;
  MR_Word AccDeclPragmasTypeSpec0_65;
  MR_Word AccDeclPragmasTermInfo0_66;
  MR_Word AccDeclPragmasTerm2Info0_67;
  MR_Word AccDeclPragmasSharing0_68;
  MR_Word AccDeclPragmasReuse0_69;
  MR_Word AccImplPragmas0_70;
  MR_Word AccImplMarkers0_71;
  MR_Word AccGenPragmasUnusedArgs0_72;
  MR_Word AccGenPragmasExceptions0_73;
  MR_Word AccGenPragmasTrailing0_74;
  MR_Word AccGenPragmasMMTabling0_75;
  MR_Word AccPromises0_76;
  MR_Word AccInitialises0_77;
  MR_Word AccFinalises0_78;
  MR_Word AccMutables0_79;
  MR_Word AccTypeRepns0_80;
  MR_Word IntAvails_81;
  MR_Word ImpAvails_82;
  MR_Word AccAvails1_83;
  MR_Word AccAvails_84;
  MR_Word IntFIMs_85;
  MR_Word ImpFIMs_86;
  MR_Word AccFIMs_87;
  MR_Word IntTypeDefns_88;
  MR_Word SubTypeDefns_89;
  MR_Word SubForeignEnums_90;
  MR_Word IntTypeDefnsAbs_91;
  MR_Word IntTypeDefnsMer_92;
  MR_Word IntTypeDefnsFor_93;
  MR_Word SubTypeDefnsAbs_94;
  MR_Word SubTypeDefnsMer_95;
  MR_Word SubTypeDefnsFor_96;
  MR_Word AccTypeDefnsAbs1_97;
  MR_Word AccTypeDefnsAbs_98;
  MR_Word AccTypeDefnsMer1_99;
  MR_Word AccTypeDefnsMer_100;
  MR_Word AccTypeDefnsFor1_101;
  MR_Word AccTypeDefnsFor_102;
  MR_Word IntInstDefns_103;
  MR_Word SubInstDefns_104;
  MR_Word AccInstDefns1_105;
  MR_Word AccInstDefns_106;
  MR_Word IntModeDefns_107;
  MR_Word SubModeDefns_108;
  MR_Word AccModeDefns1_109;
  MR_Word AccModeDefns_110;
  MR_Word AccTypeClasses1_111;
  MR_Word AccTypeClasses_112;
  MR_Word AccInstances1_113;
  MR_Word AccInstances_114;
  MR_Word AccPredDecls1_115;
  MR_Word AccPredDecls_116;
  MR_Word AccModeDecls1_117;
  MR_Word AccModeDecls_118;
  MR_Word AccClauses_119;
  MR_Word AccForeignProcs_120;
  MR_Word AccForeignEnums_121;
  MR_Word AccForeignExportEnums_122;
  MR_Word AccDeclPragmas1_123;
  MR_Word AccDeclMarkers1_124;
  MR_Word AccDeclPragmas_125;
  MR_Word AccDeclMarkers_126;
  MR_Word AccImplPragmas_127;
  MR_Word AccImplMarkers_128;
  MR_Word AccPromises1_129;
  MR_Word AccPromises_130;
  MR_Word AccInitialises_131;
  MR_Word AccFinalises_132;
  MR_Word AccMutables_133;
  MR_Word Var_144;
  MR_Word Var_146;
  MR_Word Var_147;
  MR_Word Var_148;
  MR_Word Var_149;
  MR_Word Var_156;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), InclMap_8);
  if (succeeded)
  {
    SubItemMercuryStatus_46 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[1]);
    SubSectionInfo_47 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[56]);
  }
  else
  {
    SubItemMercuryStatus_46 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[2]);
    SubSectionInfo_47 = (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[57]);
  }
  AccAvails0_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 0))));
  AccFIMs0_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 1))));
  AccTypeDefnsAbs0_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 2))));
  AccTypeDefnsMer0_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 3))));
  AccTypeDefnsFor0_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 4))));
  AccInstDefns0_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 5))));
  AccModeDefns0_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 6))));
  AccTypeClasses0_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 7))));
  AccInstances0_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 8))));
  AccPredDecls0_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 9))));
  AccModeDecls0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 10))));
  AccClauses0_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 11))));
  AccForeignProcs0_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 12))));
  AccForeignEnums0_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 13))));
  AccForeignExportEnums0_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 14))));
  AccDeclPragmas0_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 15))));
  AccDeclMarkers0_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 16))));
  AccDeclPragmasTypeSpec0_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 17))));
  AccDeclPragmasTermInfo0_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 18))));
  AccDeclPragmasTerm2Info0_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 19))));
  AccDeclPragmasSharing0_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 20))));
  AccDeclPragmasReuse0_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 21))));
  AccImplPragmas0_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 22))));
  AccImplMarkers0_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 23))));
  AccGenPragmasUnusedArgs0_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 24))));
  AccGenPragmasExceptions0_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 25))));
  AccGenPragmasTrailing0_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 26))));
  AccGenPragmasMMTabling0_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 27))));
  AccPromises0_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 28))));
  AccInitialises0_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 29))));
  AccFinalises0_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 30))));
  AccMutables0_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 31))));
  AccTypeRepns0_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Acc_0_134, (MR_Integer) 32))));
  parse_tree__item_util__import_and_or_use_map_to_item_avails_4_p_0((MR_Integer) 1, ImportUseMap_9, &IntAvails_81, &ImpAvails_82);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_avails_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[0]), IntAvails_81, AccAvails0_48, &AccAvails1_83);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_avails_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[1]), ImpAvails_82, AccAvails1_83, &AccAvails_84);
  Var_144 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntFIMSpecMap_10);
  IntFIMs_85 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[4]), Var_144);
  Var_146 = mercury__map__keys_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpFIMSpecMap_11);
  ImpFIMs_86 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_3[5]), Var_146);
  Var_148 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), IntFIMs_85);
  Var_149 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), ImpFIMs_86);
  Var_147 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), Var_148, Var_149);
  AccFIMs_87 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_fim_0), AccFIMs0_49, Var_147);
  parse_tree__item_util__type_ctor_checked_map_get_src_defns_4_p_0(TypeCtorCheckedMap_14, &IntTypeDefns_88, &SubTypeDefns_89, &SubForeignEnums_90);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(IntTypeDefns_88, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsAbs_91, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsMer_92, (MR_Word) ((MR_Unsigned) 0U), &IntTypeDefnsFor_93);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(SubTypeDefns_89, (MR_Word) ((MR_Unsigned) 0U), &SubTypeDefnsAbs_94, (MR_Word) ((MR_Unsigned) 0U), &SubTypeDefnsMer_95, (MR_Word) ((MR_Unsigned) 0U), &SubTypeDefnsFor_96);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[55]), IntTypeDefnsAbs_91, AccTypeDefnsAbs0_50, &AccTypeDefnsAbs1_97);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), SubSectionInfo_47, SubTypeDefnsAbs_94, AccTypeDefnsAbs1_97, &AccTypeDefnsAbs_98);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[55]), IntTypeDefnsMer_92, AccTypeDefnsMer0_51, &AccTypeDefnsMer1_99);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), SubSectionInfo_47, SubTypeDefnsMer_95, AccTypeDefnsMer1_99, &AccTypeDefnsMer_100);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[55]), IntTypeDefnsFor_93, AccTypeDefnsFor0_52, &AccTypeDefnsFor1_101);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[1]), SubSectionInfo_47, SubTypeDefnsFor_96, AccTypeDefnsFor1_101, &AccTypeDefnsFor_102);
  parse_tree__item_util__inst_ctor_checked_map_get_src_defns_3_p_0(InstCtorCheckedMap_15, &IntInstDefns_103, &SubInstDefns_104);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[3]), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[0]), IntInstDefns_103, AccInstDefns0_53, &AccInstDefns1_105);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[3]), SubItemMercuryStatus_46, SubInstDefns_104, AccInstDefns1_105, &AccInstDefns_106);
  parse_tree__item_util__mode_ctor_checked_map_get_src_defns_3_p_0(ModeCtorCheckedMap_16, &IntModeDefns_107, &SubModeDefns_108);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[5]), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[0]), IntModeDefns_107, AccModeDefns0_54, &AccModeDefns1_109);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[5]), SubItemMercuryStatus_46, SubModeDefns_108, AccModeDefns1_109, &AccModeDefns_110);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[55]), IntTypeClasses_19, AccTypeClasses0_55, &AccTypeClasses1_111);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0), SubSectionInfo_47, SubTypeClasses_27, AccTypeClasses1_111, &AccTypeClasses_112);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[0]), IntInstances_20, AccInstances0_56, &AccInstances1_113);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0), SubItemMercuryStatus_46, SubInstances_28, AccInstances1_113, &AccInstances_114);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[55]), IntPredDecls_21, AccPredDecls0_57, &AccPredDecls1_115);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), SubSectionInfo_47, SubPredDecls_29, AccPredDecls1_115, &AccPredDecls_116);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[0]), IntModeDecls_22, AccModeDecls0_58, &AccModeDecls1_117);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), SubItemMercuryStatus_46, SubModeDecls_30, AccModeDecls1_117, &AccModeDecls_118);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[1]), ImpClauses_31, AccClauses0_59, &AccClauses_119);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[1]), ImpForeignProcs_32, AccForeignProcs0_60, &AccForeignProcs_120);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_tuple_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), SubItemMercuryStatus_46, SubForeignEnums_90, AccForeignEnums0_61, &AccForeignEnums_121);
  Var_156 = mercury__cord__from_list_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), ImpForeignExportEnums_33);
  AccForeignExportEnums_122 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_export_enum_info_0), AccForeignExportEnums0_62, Var_156);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[0]), IntDeclPragmas_23, AccDeclPragmas0_63, &AccDeclPragmas1_123);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[0]), IntDeclMarkers_24, AccDeclMarkers0_64, &AccDeclMarkers1_124);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_pragma_info_0), SubItemMercuryStatus_46, SubDeclPragmas_34, AccDeclPragmas1_123, &AccDeclPragmas_125);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_decl_marker_info_0), SubItemMercuryStatus_46, SubDeclMarkers_35, AccDeclMarkers1_124, &AccDeclMarkers_126);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_pragma_info_0), SubItemMercuryStatus_46, ImpImplPragmas_36, AccImplPragmas0_70, &AccImplPragmas_127);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_impl_marker_info_0), SubItemMercuryStatus_46, ImpImplMarkers_37, AccImplMarkers0_71, &AccImplMarkers_128);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[0]), IntPromises_25, AccPromises0_76, &AccPromises1_129);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0), SubItemMercuryStatus_46, SubPromises_38, AccPromises1_129, &AccPromises_130);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[1]), ImpInitialises_39, AccInitialises0_77, &AccInitialises_131);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_4[1]), ImpFinalises_40, AccFinalises0_78, &AccFinalises_132);
  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0), SubSectionInfo_47, SubMutables_41, AccMutables0_79, &AccMutables_133);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (33 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Acc_135 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (AccAvails_84));
    MR_hl_field(0, base, 1) = ((MR_Box) (AccFIMs_87));
    MR_hl_field(0, base, 2) = ((MR_Box) (AccTypeDefnsAbs_98));
    MR_hl_field(0, base, 3) = ((MR_Box) (AccTypeDefnsMer_100));
    MR_hl_field(0, base, 4) = ((MR_Box) (AccTypeDefnsFor_102));
    MR_hl_field(0, base, 5) = ((MR_Box) (AccInstDefns_106));
    MR_hl_field(0, base, 6) = ((MR_Box) (AccModeDefns_110));
    MR_hl_field(0, base, 7) = ((MR_Box) (AccTypeClasses_112));
    MR_hl_field(0, base, 8) = ((MR_Box) (AccInstances_114));
    MR_hl_field(0, base, 9) = ((MR_Box) (AccPredDecls_116));
    MR_hl_field(0, base, 10) = ((MR_Box) (AccModeDecls_118));
    MR_hl_field(0, base, 11) = ((MR_Box) (AccClauses_119));
    MR_hl_field(0, base, 12) = ((MR_Box) (AccForeignProcs_120));
    MR_hl_field(0, base, 13) = ((MR_Box) (AccForeignEnums_121));
    MR_hl_field(0, base, 14) = ((MR_Box) (AccForeignExportEnums_122));
    MR_hl_field(0, base, 15) = ((MR_Box) (AccDeclPragmas_125));
    MR_hl_field(0, base, 16) = ((MR_Box) (AccDeclMarkers_126));
    MR_hl_field(0, base, 17) = ((MR_Box) (AccDeclPragmasTypeSpec0_65));
    MR_hl_field(0, base, 18) = ((MR_Box) (AccDeclPragmasTermInfo0_66));
    MR_hl_field(0, base, 19) = ((MR_Box) (AccDeclPragmasTerm2Info0_67));
    MR_hl_field(0, base, 20) = ((MR_Box) (AccDeclPragmasSharing0_68));
    MR_hl_field(0, base, 21) = ((MR_Box) (AccDeclPragmasReuse0_69));
    MR_hl_field(0, base, 22) = ((MR_Box) (AccImplPragmas_127));
    MR_hl_field(0, base, 23) = ((MR_Box) (AccImplMarkers_128));
    MR_hl_field(0, base, 24) = ((MR_Box) (AccGenPragmasUnusedArgs0_72));
    MR_hl_field(0, base, 25) = ((MR_Box) (AccGenPragmasExceptions0_73));
    MR_hl_field(0, base, 26) = ((MR_Box) (AccGenPragmasTrailing0_74));
    MR_hl_field(0, base, 27) = ((MR_Box) (AccGenPragmasMMTabling0_75));
    MR_hl_field(0, base, 28) = ((MR_Box) (AccPromises_130));
    MR_hl_field(0, base, 29) = ((MR_Box) (AccInitialises_131));
    MR_hl_field(0, base, 30) = ((MR_Box) (AccFinalises_132));
    MR_hl_field(0, base, 31) = ((MR_Box) (AccMutables_133));
    MR_hl_field(0, base, 32) = ((MR_Box) (AccTypeRepns0_80));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_tuple_list_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ImsItems_0_3,
  MR_Word * STATE_VARIABLE_ImsItems_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ImsItems_4 = STATE_VARIABLE_ImsItems_0_3;
    else
    {
      MR_Word TypeInfo_20_20;
      MR_Box Item_10 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      MR_Word Items_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Tuple Var_15;
      MR_Word STATE_VARIABLE_ImsItems_16_16;
      MR_Word conv0_STATE_VARIABLE_ImsItems_16_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ImsItems_0_3;

      {
        Var_15 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_15, 0) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(0, Var_15, 1) = Item_10;
      }
      {
        TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
        MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, TypeInfo_20_20, 2) = ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0));
        MR_hl_field(0, TypeInfo_20_20, 3) = ((MR_Box) (TypeInfo_for_T_17));
      }
      mercury__cord__snoc_3_p_0(TypeInfo_20_20, ((MR_Box) (Var_15)), (MR_Word) (STATE_VARIABLE_ImsItems_0_3), &conv0_STATE_VARIABLE_ImsItems_16_16);
      STATE_VARIABLE_ImsItems_16_16 = (MR_Word) (conv0_STATE_VARIABLE_ImsItems_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Items_11;
      next_value_of_STATE_VARIABLE_ImsItems_0_3 = STATE_VARIABLE_ImsItems_16_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ImsItems_0_3 = next_value_of_STATE_VARIABLE_ImsItems_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_list_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word ItemMercuryStatus_5,
  MR_Word Items_6,
  MR_Word STATE_VARIABLE_ImsCord_0_11,
  MR_Word * STATE_VARIABLE_ImsCord_12)
{
  if ((Items_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_ImsCord_12 = STATE_VARIABLE_ImsCord_0_11;
  else
  {
    MR_Word TypeInfo_15_15;
    MR_Word ImsSubList_10;
    MR_Word conv0_STATE_VARIABLE_ImsCord_12;

    {
      ImsSubList_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ImsSubList_10, 0) = ((MR_Box) (ItemMercuryStatus_5));
      MR_hl_field(0, ImsSubList_10, 1) = ((MR_Box) (Items_6));
    }
    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_ims_sub_list_1));
      MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_13));
    }
    mercury__cord__snoc_3_p_0(TypeInfo_15_15, ((MR_Box) (ImsSubList_10)), (MR_Word) (STATE_VARIABLE_ImsCord_0_11), &conv0_STATE_VARIABLE_ImsCord_12);
    *STATE_VARIABLE_ImsCord_12 = (MR_Word) (conv0_STATE_VARIABLE_ImsCord_12);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_sec_list_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word SectionInfo_5,
  MR_Word Items_6,
  MR_Word STATE_VARIABLE_SecCord_0_11,
  MR_Word * STATE_VARIABLE_SecCord_12)
{
  if ((Items_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_SecCord_12 = STATE_VARIABLE_SecCord_0_11;
  else
  {
    MR_Word TypeInfo_15_15;
    MR_Word SecSubList_10;
    MR_Word conv0_STATE_VARIABLE_SecCord_12;

    {
      SecSubList_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SecSubList_10, 0) = ((MR_Box) (SectionInfo_5));
      MR_hl_field(0, SecSubList_10, 1) = ((MR_Box) (Items_6));
    }
    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_15_15, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_types__hlds__make_hlds__make_hlds_types__type_ctor_info_sec_sub_list_1));
      MR_hl_field(0, TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_13));
    }
    mercury__cord__snoc_3_p_0(TypeInfo_15_15, ((MR_Box) (SecSubList_10)), (MR_Word) (STATE_VARIABLE_SecCord_0_11), &conv0_STATE_VARIABLE_SecCord_12);
    *STATE_VARIABLE_SecCord_12 = (MR_Word) (conv0_STATE_VARIABLE_SecCord_12);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Abs_0_2,
  MR_Word * STATE_VARIABLE_Abs_3,
  MR_Word STATE_VARIABLE_Mer_0_4,
  MR_Word * STATE_VARIABLE_Mer_5,
  MR_Word STATE_VARIABLE_For_0_6,
  MR_Word * STATE_VARIABLE_For_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_For_7 = STATE_VARIABLE_For_0_6;
    *STATE_VARIABLE_Mer_5 = STATE_VARIABLE_Mer_0_4;
    *STATE_VARIABLE_Abs_3 = STATE_VARIABLE_Abs_0_2;
  }
  else
  {
    MR_Word Item_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Items_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TypeDefn_24;
    MR_Word STATE_VARIABLE_Abs_40_40;
    MR_Word STATE_VARIABLE_Mer_41_41;
    MR_Word STATE_VARIABLE_For_42_42;

    hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_type_defns_abs_mer_for_7_p_0(Items_18, STATE_VARIABLE_Abs_0_2, &STATE_VARIABLE_Abs_40_40, STATE_VARIABLE_Mer_0_4, &STATE_VARIABLE_Mer_41_41, STATE_VARIABLE_For_0_6, &STATE_VARIABLE_For_42_42);
    TypeDefn_24 = ((MR_Word) ((MR_hl_field(0, Item_17, (MR_Integer) 2))));
    switch (MR_tag((MR_Word) TypeDefn_24)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Mer_5 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Item_17));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Mer_41_41));
          }
          *STATE_VARIABLE_Abs_3 = STATE_VARIABLE_Abs_40_40;
          *STATE_VARIABLE_For_7 = STATE_VARIABLE_For_42_42;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TypeDefn_24, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Mer_5 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Item_17));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Mer_41_41));
              }
              *STATE_VARIABLE_Abs_3 = STATE_VARIABLE_Abs_40_40;
              *STATE_VARIABLE_For_7 = STATE_VARIABLE_For_42_42;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Abs_3 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Item_17));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Abs_40_40));
              }
              *STATE_VARIABLE_Mer_5 = STATE_VARIABLE_Mer_41_41;
              *STATE_VARIABLE_For_7 = STATE_VARIABLE_For_42_42;
            }
            break;
          case (MR_Integer) 2:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_For_7 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Item_17));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_For_42_42));
              }
              *STATE_VARIABLE_Abs_3 = STATE_VARIABLE_Abs_40_40;
              *STATE_VARIABLE_Mer_5 = STATE_VARIABLE_Mer_41_41;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__acc_ims_avails_4_p_0(
  MR_Word ItemMercuryStatus_5,
  MR_Word Avails_6,
  MR_Word STATE_VARIABLE_AccAvails_0_11,
  MR_Word * STATE_VARIABLE_AccAvails_12)
{
  if ((Avails_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_AccAvails_12 = STATE_VARIABLE_AccAvails_0_11;
  else
  {
    MR_Word ImsSubList_10;

    {
      ImsSubList_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ImsSubList_10, 0) = ((MR_Box) (ItemMercuryStatus_5));
      MR_hl_field(0, ImsSubList_10, 1) = ((MR_Box) (Avails_6));
    }
    mercury__cord__snoc_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items_scalar_common_1[0]), ((MR_Box) (ImsSubList_10)), STATE_VARIABLE_AccAvails_0_11, STATE_VARIABLE_AccAvails_12);
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____ims_tuple_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____ims_tuple_cord_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____ims_tuple_cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____ims_tuple_cord_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____ims_tuple_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____ims_tuple_item_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Tuple) (wrapper_arg_2)), ((MR_Tuple) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____ims_tuple_item_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____ims_tuple_item_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Tuple) (wrapper_arg_3)), ((MR_Tuple) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____ims_tuple_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____ims_tuple_list_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____ims_tuple_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____ims_tuple_list_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____int_type_ctor_repns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____int_type_ctor_repns_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____int_type_ctor_repns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____int_type_ctor_repns_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____item_accumulator_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____item_accumulator_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____item_accumulator_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____item_accumulator_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____module_int_type_ctor_repns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Unify____module_int_type_ctor_repns_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____module_int_type_ctor_repns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_passes__make_hlds_separate_items____Compare____module_int_type_ctor_repns_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__init(void)
{
}

void mercury__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_ims_tuple_cord_1);
	MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_ims_tuple_item_1);
	MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_ims_tuple_list_1);
	MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_int_type_ctor_repns_0);
	MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_item_accumulator_0);
	MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__type_ctor_info_module_int_type_ctor_repns_0);
}

void mercury__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.make_hlds_passes.make_hlds_separate_items.
