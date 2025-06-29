/*
** Automatically generated from `old_type_constraints.m'
** by the Mercury compiler,
** version rotd-2025-06-29
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


// :- module check_hlds.old_type_constraints.
// :- implementation.

/*
INIT mercury__check_hlds__old_type_constraints__init
ENDINIT
*/

#include "check_hlds.old_type_constraints.mih"


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
#include "edit_seq.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_path.mih"
#include "hlds.goal_transform.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
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
#include "hlds.var_table_hlds.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_event.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_construct.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__bimap__pti_bimap_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__maybe__pti_maybe_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__old_type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0check_hlds__old_type_constraints__type_ctor_info_type_domain_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0check_hlds__old_type_constraints__type_ctor_info_type_domain_0;

static const MR_VA_PseudoTypeInfo_Struct3 check_hlds__old_type_constraints____vpti_pred_3__plain_check_hlds__old_type_constraints__type_ctor_info_type_constraint_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_constraint_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_constraint_0;

static const MR_VA_PseudoTypeInfo_Struct3 check_hlds__old_type_constraints____vpti_pred_3__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__list__pti_list_1__plain_check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__old_type_constraints__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints____vpti_pred_2__plain_check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__maybe__pti_maybe_error_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__list__pti_list_1__plain_check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

static const MR_VA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints____vpti_pred_1__plain_builtin__type_ctor_info_int_0;

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_int_0__plain_list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__old_type_constraints__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_class_defn_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__list__ti_list_1check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_goal_id_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_PseudoTypeInfo check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_conj_type_constraint_0_0[5];

static const MR_ConstString check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_names_conj_type_constraint_0_0[5];

static const MR_DuArgLocn check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_locns_conj_type_constraint_0_0[5];

static const MR_DuFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_conj_type_constraint_0_0;

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_conj_type_constraint_0_0[1];

static const MR_DuPtagLayout check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_ptag_ordered_conj_type_constraint_0[1];

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_name_ordered_conj_type_constraint_0[1];

static const MR_Integer check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_conj_type_constraint_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__old_type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data_event__type_ctor_info_event_spec_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__list__ti_list_1hlds__hlds_cons__type_ctor_info_inner_cons_entry_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__old_type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_cons__type_ctor_info_inner_cons_entry_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__old_type_constraints__bimap__ti_bimap_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__old_type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_simple_type_constraint_0_0[2];

static const MR_DuFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_simple_type_constraint_0_0;

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_simple_type_constraint_0_0[1];

static const MR_DuPtagLayout check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_ptag_ordered_simple_type_constraint_0[1];

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_name_ordered_simple_type_constraint_0[1];

static const MR_Integer check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_simple_type_constraint_0[1];

static const MR_EnumFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__enum_functor_desc_tconstr_activity_0_0;

static const MR_EnumFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__enum_functor_desc_tconstr_activity_0_1;

static const MR_EnumFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__enum_ordinal_ordered_tconstr_activity_0[2];

static const MR_EnumFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__enum_name_ordered_tconstr_activity_0[2];

static const MR_Integer check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_tconstr_activity_0[2];

static const MR_PseudoTypeInfo check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_tconstr_environment_0_0[4];

static const MR_ConstString check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_names_tconstr_environment_0_0[4];

static const MR_DuFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_tconstr_environment_0_0;

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_tconstr_environment_0_0[1];

static const MR_DuPtagLayout check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_ptag_ordered_tconstr_environment_0[1];

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_name_ordered_tconstr_environment_0[1];

static const MR_Integer check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_tconstr_environment_0[1];

static const MR_PseudoTypeInfo check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_type_constraint_0_0[1];

static const MR_DuFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_constraint_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__list__ti_list_1check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__maybe__ti_maybe_1check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0;

static const MR_PseudoTypeInfo check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_type_constraint_0_1[2];

static const MR_DuFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_constraint_0_1;

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_type_constraint_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_type_constraint_0_1[1];

static const MR_DuPtagLayout check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_ptag_ordered_type_constraint_0[2];

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_name_ordered_type_constraint_0[2];

static const MR_Integer check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_type_constraint_0[2];

static const MR_FA_TypeInfo_Struct2 check_hlds__old_type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__old_type_constraints__type_ctor_info_type_constraint_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__old_type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_type_constraint_info_0_0[6];

static const MR_ConstString check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_names_type_constraint_info_0_0[6];

static const MR_DuFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_constraint_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_type_constraint_info_0_0[1];

static const MR_DuPtagLayout check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_ptag_ordered_type_constraint_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_name_ordered_type_constraint_info_0[1];

static const MR_Integer check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_type_constraint_info_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__list__ti_list_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0check_hlds__old_type_constraints__type_ctor_info_type_domain_0;

static const MR_PseudoTypeInfo check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_type_constraint_solution_0_0[3];

static const MR_ConstString check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_names_type_constraint_solution_0_0[3];

static const MR_DuArgLocn check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_locns_type_constraint_solution_0_0[3];

static const MR_DuFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_constraint_solution_0_0;

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_type_constraint_solution_0_0[1];

static const MR_DuPtagLayout check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_ptag_ordered_type_constraint_solution_0[1];

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_name_ordered_type_constraint_solution_0[1];

static const MR_Integer check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_type_constraint_solution_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_type_domain_0_0[1];

static const MR_DuFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_domain_0_0;

static const MR_PseudoTypeInfo check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_type_domain_0_1[1];

static const MR_DuFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_domain_0_1;

static const MR_DuFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_domain_0_2;

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_type_domain_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_type_domain_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_type_domain_0_2[1];

static const MR_DuPtagLayout check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_ptag_ordered_type_domain_0[3];

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_name_ordered_type_domain_0[3];

static const MR_Integer check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_type_domain_0[3];

static MR_bool MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__min_unsat_constraints__2193__1_2_p_0(
  MR_Word NewD_26,
  MR_Word HeadVar__2_83);

static void MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__min_unsat_constraints__2182__3_4_p_0(
  MR_Word HeadVar__1_43,
  MR_Word HeadVar__2_59,
  MR_Word HeadVar__3_60,
  MR_Word * HeadVar__4_61);

static void MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__min_unsat_constraints__2182__2_3_p_0(
  MR_Word HeadVar__1_44,
  MR_Word HeadVar__2_64,
  MR_Word * HeadVar__3_65);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__min_unsat_constraints__2182__1_2_p_0(
  MR_Word Union_16,
  MR_Integer HeadVar__2_67);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__constraint_is_satisfiable__1868__1_3_p_0(
  MR_Word DomainMap_3,
  MR_Word HeadVar__2_16,
  MR_Word * HeadVar__3_17);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__unify_equal_tvars__1550__1_2_p_0(
  MR_Word Replaced_10,
  MR_Word HeadVar__2_64);

static void MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__find_domain__1418__1_4_p_0(
  MR_Word HeadVar__1_35,
  MR_Word HeadVar__2_50,
  MR_Word HeadVar__3_51,
  MR_Word * HeadVar__4_52);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__propagate__1366__1_3_p_0(
  MR_Word VarConstraints_9,
  MR_Word HeadVar__2_60,
  MR_Word * HeadVar__3_61);

static void MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__solve_constraint_labeling__1273__1_4_p_0(
  MR_Word HeadVar__1_48,
  MR_Word HeadVar__2_86,
  MR_Word HeadVar__3_87,
  MR_Word * HeadVar__4_88);

static MR_Word MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__func__solve_constraint_labeling__1246__1_3_f_0(
  MR_Word Guesses_11,
  MR_Word Var_22,
  MR_Word HeadVar__3_64);

static void MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__find_type_constraint_solutions__1208__1_4_p_0(
  MR_Word HeadVar__1_48,
  MR_Word HeadVar__2_83,
  MR_Word HeadVar__3_84,
  MR_Word * HeadVar__4_85);

static void MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__find_type_constraint_solutions__1197__1_4_p_0(
  MR_Word HeadVar__1_45,
  MR_Word HeadVar__2_74,
  MR_Word HeadVar__3_75,
  MR_Word * HeadVar__4_76);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__create_vartypes_map__491__1_2_p_0(
  MR_Word HeadVar__1_29,
  MR_Word * HeadVar__2_30);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__update_goal__422__1_2_p_0(
  MR_Word HeadVar__1_50,
  MR_Word * HeadVar__2_51);

static void MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__update_goal__420__1_3_p_0(
  MR_Word HeadVar__1_26,
  MR_Word HeadVar__2_43,
  MR_Word * HeadVar__3_44);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____var_constraint_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____var_constraint_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_domain_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_domain_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_domain_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_domain_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_solution_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_solution_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_id_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_counter_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_counter_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____tconstr_environment_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____tconstr_environment_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____tconstr_activity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____tconstr_activity_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____simple_type_constraint_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____simple_type_constraint_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____simple_prog_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____simple_prog_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____prog_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____prog_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____pred_env_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____pred_env_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____func_env_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____func_env_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____event_env_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____event_env_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____error_specs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____error_specs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____conj_type_constraint_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____conj_type_constraint_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____class_env_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____class_env_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__has_multiple_disjuncts_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__has_multiple_disjuncts_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Cs_5);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__get_first_disjunct_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__get_first_disjunct_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * C_2);

static void MR_CALL 
check_hlds__old_type_constraints__set_clause_body_3_p_0(
  MR_Word BodyGoal_4,
  MR_Word STATE_VARIABLE_Clause_0_6,
  MR_Word * STATE_VARIABLE_Clause_7);

static void MR_CALL 
check_hlds__old_type_constraints__get_clause_body_2_p_0(
  MR_Word Clause_3,
  MR_Word * BodyGoal_4);

static void MR_CALL 
check_hlds__old_type_constraints__print_domain_map_change_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__print_domain_map_change_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__print_domain_map_change_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__print_domain_map_change_6_p_0(
  MR_Word OutputStream_7,
  MR_Word TVarSet_8,
  MR_Word OldDomainMap_9,
  MR_Word HeadVar__4_4);

static void MR_CALL 
check_hlds__old_type_constraints__print_type_domain_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__print_type_domain_5_p_0(
  MR_Word OutputStream_6,
  MR_Word TVarSet_7,
  MR_Word HeadVar__3_3);

static void MR_CALL 
check_hlds__old_type_constraints__print_guess_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__print_guess_5_p_0(
  MR_Word OutputStream_6,
  MR_Word TVarSet_7,
  MR_Word Guess_8);

static void MR_CALL 
check_hlds__old_type_constraints__conj_constraint_get_context_2_p_0(
  MR_Word Constraint_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints__bracket_context_to_string_2_p_0(
  MR_Word Context_3,
  MR_String * String_4);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__next_min_unsat_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__old_type_constraints__next_min_unsat_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
check_hlds__old_type_constraints__next_min_unsat_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__next_min_unsat_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__next_min_unsat_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__old_type_constraints__next_min_unsat_8_p_0(
  MR_Word Constraint_9,
  MR_Integer C_10,
  MR_Word STATE_VARIABLE_D_0_14,
  MR_Word * STATE_VARIABLE_D_15,
  MR_Word STATE_VARIABLE_P_0_16,
  MR_Word * STATE_VARIABLE_P_17,
  MR_Word STATE_VARIABLE_MinUnsats_0_18,
  MR_Word * STATE_VARIABLE_MinUnsats_19);

static void MR_CALL 
check_hlds__old_type_constraints__error_from_one_min_set_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__error_from_one_min_set_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__error_from_one_min_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__error_from_one_min_set_3_p_0(
  MR_Word ConstraintMap_4,
  MR_Word MinUnsatSet_5,
  MR_Word * Components_6);

static void MR_CALL 
check_hlds__old_type_constraints__diagnose_unsatisfiability_error_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__diagnose_unsatisfiability_error_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__old_type_constraints__diagnose_unsatisfiability_error_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
check_hlds__old_type_constraints__diagnose_unsatisfiability_error_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__diagnose_unsatisfiability_error_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__diagnose_unsatisfiability_error_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__old_type_constraints__diagnose_unsatisfiability_error_5_p_0(
  MR_Word TCInfo_6,
  MR_Word Context_7,
  MR_Word ProgVarSet_8,
  MR_Word TypeVar_9,
  MR_Word * Msg_10);

static void MR_CALL 
check_hlds__old_type_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_115_105_110_103_108_101_95_95_91_49_93_95_48_3_p_0(
  MR_Box E_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__pred_constraint_info_2_p_0(
  MR_Word Constraint_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints__ambig_pred_error_message_3_p_0(
  MR_Word PredEnv_4,
  MR_Word HeadVar__2_2,
  MR_Word * Component_7);

static void MR_CALL 
check_hlds__old_type_constraints__diagnose_ambig_pred_error_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__diagnose_ambig_pred_error_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__diagnose_ambig_pred_error_3_p_0(
  MR_Word PredEnv_4,
  MR_Word Conjunctions_5,
  MR_Word * Msg_6);

static void MR_CALL 
check_hlds__old_type_constraints__merge_type_constraints2_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Result_6);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__merge_type_constraints_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__old_type_constraints__merge_type_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__merge_type_constraints_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Result_6);

static void MR_CALL 
check_hlds__old_type_constraints__get_constraints_from_conj_2_p_0(
  MR_Word Conj_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints__add_unused_prog_var_4_p_0(
  MR_Word TCInfo_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_VarTypes_0_9,
  MR_Word * STATE_VARIABLE_VarTypes_10);

static MR_Word MR_CALL 
check_hlds__old_type_constraints__to_singleton_type_domain_1_f_0(
  MR_Word Type_3);

static void MR_CALL 
check_hlds__old_type_constraints__domain_size_compare_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Result_8);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__has_ambiguous_domain_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__constraint_has_one_solution_1_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__constraint_has_one_solution_1_p_0(
  MR_Word DomainMap_2);

static void MR_CALL 
check_hlds__old_type_constraints__tvars_in_simple_constraint_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints__update_singleton_domain_3_p_0(
  MR_Word TVar_4,
  MR_Word STATE_VARIABLE_DomainMap_0_8,
  MR_Word * STATE_VARIABLE_DomainMap_9);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__is_singleton_domain_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Type_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__has_singleton_domain_2_p_0(
  MR_Word DomainMap_3,
  MR_Word TVar_4);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__has_empty_domain_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * TVar_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__domain_map_unchanged_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__domain_map_unchanged_2_p_0(
  MR_Word DomainMap_3,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__non_empty_domain_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__still_active_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
check_hlds__old_type_constraints__type_domain_union_3_p_0(
  MR_Word DomainA_4,
  MR_Word DomainB_5,
  MR_Word * Domain_6);

static void MR_CALL 
check_hlds__old_type_constraints__find_type_of_tvar_3_p_0(
  MR_Word DomainMap_4,
  MR_Word STATE_VARIABLE_Type_0_9,
  MR_Word * STATE_VARIABLE_Type_10);

static void MR_CALL 
check_hlds__old_type_constraints__update_replacement_map_5_p_0(
  MR_Word VarMap_6,
  MR_Word Replacement_7,
  MR_Word OldVar_8,
  MR_Word STATE_VARIABLE_ReplacementMap_0_11,
  MR_Word * STATE_VARIABLE_ReplacementMap_12);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__to_simple_constraints_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__find_unified_var_3_p_0(
  MR_Word Target_4,
  MR_Word HeadVar__2_2,
  MR_Word * Unified_8);

static void MR_CALL 
check_hlds__old_type_constraints__unify_equal_tvars_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__unify_equal_tvars_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__old_type_constraints__unify_equal_tvars_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__unify_equal_tvars_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__unify_equal_tvars_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__unify_equal_tvars_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__unify_equal_tvars_8_p_0(
  MR_Word TCInfo_9,
  MR_Word Replaced_10,
  MR_Word Replacement_11,
  MR_Word Target_12,
  MR_Word STATE_VARIABLE_ReplacementMap_0_34,
  MR_Word * STATE_VARIABLE_ReplacementMap_35,
  MR_Word STATE_VARIABLE_DomainMap_0_36,
  MR_Word * STATE_VARIABLE_DomainMap_37);

static void MR_CALL 
check_hlds__old_type_constraints__simple_find_domain_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__simple_find_domain_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__simple_find_domain_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__simple_find_domain_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__simple_find_domain_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_DomainMap_0_25,
  MR_Word * STATE_VARIABLE_DomainMap_26);

static void MR_CALL 
check_hlds__old_type_constraints__restrict_domain_4_p_0(
  MR_Word TVar_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_DomainMap_0_11,
  MR_Word * STATE_VARIABLE_DomainMap_12);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__type_domain_intersect_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__type_domain_intersect_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__type_domain_intersect_3_p_0(
  MR_Word DomainA_4,
  MR_Word DomainB_5,
  MR_Word * Domain_6);

static void MR_CALL 
check_hlds__old_type_constraints__td_list_intersect_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__unify_types_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__unify_types_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__unify_types_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__unify_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__unify_types_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Type_6);

static void MR_CALL 
check_hlds__old_type_constraints__create_domain_4_p_0(
  MR_Word STATE_VARIABLE_DomainMap_0_7,
  MR_Word STATE_VARIABLE_Constraint_0_8,
  MR_Word * STATE_VARIABLE_Constraint_9,
  MR_Word * STATE_VARIABLE_DomainMap_10);

static void MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0(
  MR_Word TVarSet_8,
  MR_Word VarConstraints_9,
  MR_Integer ConstraintId_10,
  MR_Word STATE_VARIABLE_ConstraintMap_0_23,
  MR_Word * STATE_VARIABLE_ConstraintMap_24,
  MR_Word STATE_VARIABLE_DomainMap_0_25,
  MR_Word * STATE_VARIABLE_DomainMap_26);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__conj_find_domain_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__conj_find_domain_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__conj_find_domain_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__conj_find_domain_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__conj_find_domain_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__conj_find_domain_4_p_0(
  MR_Word STATE_VARIABLE_ConjTypeConstraint_0_18,
  MR_Word * STATE_VARIABLE_ConjTypeConstraint_19,
  MR_Word DomainMap0_6,
  MR_Word * DomainMap_7);

static void MR_CALL 
check_hlds__old_type_constraints__type_constraint_solution_get_constraint_map_2_p_0(
  MR_Word T_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints__type_constraint_solution_get_domains_2_p_0(
  MR_Word T_3,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__solution_is_invalid_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
check_hlds__old_type_constraints__get_case_goal_2_p_0(
  MR_Word Case_3,
  MR_Word * HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__old_type_constraints__create_stconstr_2_f_0(
  MR_Word TVar_4,
  MR_Word Type_5);

static void MR_CALL 
check_hlds__old_type_constraints__map_var_to_constraint_4_p_0(
  MR_Integer Id_5,
  MR_Word TVar_6,
  MR_Word STATE_VARIABLE_VarConstraints_0_9,
  MR_Word * STATE_VARIABLE_VarConstraints_10);

static MR_Box MR_CALL 
check_hlds__old_type_constraints__ho_pred_unif_constraint_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__ho_pred_unif_constraint_8_p_0(
  MR_Word PredTable_9,
  MR_Word Info_10,
  MR_Word LHSTVar_11,
  MR_Word ArgTVars_12,
  MR_Word PredId_13,
  MR_Word * Constraint_14,
  MR_Word STATE_VARIABLE_TCInfo_0_35,
  MR_Word * STATE_VARIABLE_TCInfo_36);

static MR_Box MR_CALL 
check_hlds__old_type_constraints__functor_unif_constraint_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__old_type_constraints__functor_unif_constraint_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__old_type_constraints__functor_unif_constraint_7_p_0(
  MR_Word LTVar_8,
  MR_Word ArgTVars_9,
  MR_Word Info_10,
  MR_Word ConsDefn_11,
  MR_Word * Constraints_12,
  MR_Word STATE_VARIABLE_TCInfo_0_32,
  MR_Word * STATE_VARIABLE_TCInfo_33);

static void MR_CALL 
check_hlds__old_type_constraints__goal_to_constraint_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__goal_to_constraint_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__goal_to_constraint_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__goal_to_constraint_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__goal_to_constraint_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
check_hlds__old_type_constraints__goal_to_constraint_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__old_type_constraints__goal_to_constraint_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__old_type_constraints__shorthand_goal_to_constraint_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__goal_to_constraint_4_p_0(
  MR_Word tscc_proc_1_input_1_Environment_5,
  MR_Word tscc_proc_1_input_2_Goal_6,
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_TCInfo_46);

static void MR_CALL 
check_hlds__old_type_constraints__shorthand_goal_to_constraint_5_p_0(
  MR_Word tscc_proc_2_input_1_Environment_6,
  MR_Word tscc_proc_2_input_2_GoalExpr_7,
  MR_Word tscc_proc_2_input_3_GoalInfo_8,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_TCInfo_0_40,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_TCInfo_46);

static MR_Box MR_CALL 
check_hlds__old_type_constraints__unify_goal_to_constraint_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__old_type_constraints__unify_goal_to_constraint_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__unify_goal_to_constraint_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__old_type_constraints__unify_goal_to_constraint_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__old_type_constraints__unify_goal_to_constraint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__old_type_constraints__unify_goal_to_constraint_5_p_0(
  MR_Word Environment_6,
  MR_Word GoalExpr_7,
  MR_Word GoalInfo_8,
  MR_Word STATE_VARIABLE_TCInfo_0_57,
  MR_Word * STATE_VARIABLE_TCInfo_58);

static MR_Box MR_CALL 
check_hlds__old_type_constraints__generic_call_goal_to_constraint_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__old_type_constraints__generic_call_goal_to_constraint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__old_type_constraints__generic_call_goal_to_constraint_5_p_0(
  MR_Word Environment_6,
  MR_Word GoalExpr_7,
  MR_Word GoalInfo_8,
  MR_Word STATE_VARIABLE_TCInfo_0_45,
  MR_Word * STATE_VARIABLE_TCInfo_46);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__pred_has_arity_3_p_0(
  MR_Word Preds_4,
  MR_Integer Arity_5,
  MR_Word PredId_6);

static void MR_CALL 
check_hlds__old_type_constraints__variable_assignment_constraint_5_p_0(
  MR_Word Context_6,
  MR_Word Var_7,
  MR_Word Type_8,
  MR_Word STATE_VARIABLE_TCInfo_0_13,
  MR_Word * STATE_VARIABLE_TCInfo_14);

static MR_Box MR_CALL 
check_hlds__old_type_constraints__pred_call_constraint_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__pred_call_constraint_8_p_0(
  MR_Word PredTable_9,
  MR_Word Info_10,
  MR_Word ArgTVars_11,
  MR_Word PredId_12,
  MR_Word * Constraint_13,
  MR_Word * TVars_14,
  MR_Word STATE_VARIABLE_TCInfo_0_27,
  MR_Word * STATE_VARIABLE_TCInfo_28);

static void MR_CALL 
check_hlds__old_type_constraints__plain_call_goal_to_constraint_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__old_type_constraints__plain_call_goal_to_constraint_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__plain_call_goal_to_constraint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__old_type_constraints__plain_call_goal_to_constraint_5_p_0(
  MR_Word Environment_6,
  MR_Word GoalExpr_7,
  MR_Word GoalInfo_8,
  MR_Word STATE_VARIABLE_TCInfo_0_27,
  MR_Word * STATE_VARIABLE_TCInfo_28);

static void MR_CALL 
check_hlds__old_type_constraints__add_message_to_spec_3_p_0(
  MR_Word ErrMsg_4,
  MR_Word STATE_VARIABLE_TCInfo_0_7,
  MR_Word * STATE_VARIABLE_TCInfo_8);

static MR_Word MR_CALL 
check_hlds__old_type_constraints__tvar_to_type_1_f_0(
  MR_Word TVar_3);

static void MR_CALL 
check_hlds__old_type_constraints__get_var_type_4_p_0(
  MR_Word Var_5,
  MR_Word * TVar_6,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__old_type_constraints__add_type_constraint_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__add_type_constraint_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__add_type_constraint_4_p_0(
  MR_Word Constraints_5,
  MR_Word TVars_6,
  MR_Word STATE_VARIABLE_TConstrInfo_0_20,
  MR_Word * STATE_VARIABLE_TConstrInfo_21);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__builtin_atomic_type_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
check_hlds__old_type_constraints__find_variable_type_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__find_variable_type_9_p_0(
  MR_Word Context_10,
  MR_Word ProgVarSet_11,
  MR_Word TVarSet_12,
  MR_Word VarMap_13,
  MR_Word DomainMap_14,
  MR_Word ReplacementMap_15,
  MR_Word Var_16,
  MR_Word * Type_17,
  MR_Word * MaybeMsg_18);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__has_one_disjunct_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__has_one_disjunct_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * C_2);

static void MR_CALL 
check_hlds__old_type_constraints__set_goal_pred_id_3_p_0(
  MR_Word PredId_4,
  MR_Word Goal0_5,
  MR_Word * MaybeGoal_6);

static void MR_CALL 
check_hlds__old_type_constraints__apply_pred_data_to_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__apply_pred_data_to_goal_4_p_0(
  MR_Word ForwardGoalPathMap_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Goal_0_12,
  MR_Word * STATE_VARIABLE_Goal_13);

static void MR_CALL 
check_hlds__old_type_constraints__update_goal_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__update_goal_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__update_goal_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__update_goal_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__update_goal_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__update_goal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__update_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__update_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__update_goal_6_p_0(
  MR_Word PredEnv_7,
  MR_Word ConstraintMap_8,
  MR_Word ForwardGoalPathMap_9,
  MR_Word STATE_VARIABLE_Goal_0_19,
  MR_Word * STATE_VARIABLE_Goal_20,
  MR_Word * Errors_11);

static void MR_CALL 
check_hlds__old_type_constraints__typecheck_one_predicate_if_needed_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_Environment_0_22,
  MR_Word * STATE_VARIABLE_Environment_23,
  MR_Word STATE_VARIABLE_HLDS_0_24,
  MR_Word * STATE_VARIABLE_HLDS_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_Environment_0_45,
  MR_Word * STATE_VARIABLE_Environment_46,
  MR_Word STATE_VARIABLE_HLDS_0_47,
  MR_Word * STATE_VARIABLE_HLDS_48,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50);

static void MR_CALL 
check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0(
  MR_Word Context_6,
  MR_Word ProgVarSet_7,
  MR_Word * DomainMap_8,
  MR_Word STATE_VARIABLE_TCInfo_0_29,
  MR_Word * STATE_VARIABLE_TCInfo_30);

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0(
  MR_Word TVarSet_7,
  MR_Word VarConstraints_8,
  MR_Word ConstraintMap0_9,
  MR_Word DomainMap0_10,
  MR_Word Guesses_11,
  MR_Word * Solution_12);

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_6_p_0(
  MR_Word TVarSet_7,
  MR_Word VarConstraints_8,
  MR_Word STATE_VARIABLE_ConstraintMap_0_14,
  MR_Word * STATE_VARIABLE_ConstraintMap_15,
  MR_Word STATE_VARIABLE_DomainMap_0_16,
  MR_Word * STATE_VARIABLE_DomainMap_17);

static MR_bool MR_CALL 
check_hlds__old_type_constraints__create_vartypes_map_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints__create_vartypes_map_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__old_type_constraints__create_vartypes_map_8_p_0(
  MR_Word Context_9,
  MR_Word ProgVarSet_10,
  MR_Word TVarSet_11,
  MR_Word VarMap_12,
  MR_Word DomainMap_13,
  MR_Word ReplacementMap_14,
  MR_Word * VarTypes_15,
  MR_Word * Errors_16);

static void MR_CALL 
check_hlds__old_type_constraints__old_typecheck_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____class_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____class_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____conj_type_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____conj_type_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____error_specs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____error_specs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____event_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____event_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____func_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____func_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____pred_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____pred_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____prog_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____prog_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____simple_prog_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____simple_prog_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____simple_type_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____simple_type_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____tconstr_activity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____tconstr_activity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____tconstr_environment_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____tconstr_environment_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_counter_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_counter_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_solution_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_solution_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_domain_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_domain_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_domain_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_domain_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____var_constraint_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__old_type_constraints____Compare____var_constraint_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_1[67][2];

static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_2[74][3];

static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_3[3][1];

static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_4[3][10];

static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_5[1][12];

static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_6[25][5];

static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_7[23][6];

static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_8[9][4];

static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_9[10][7];

static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_10[2][9];

static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_11[3][8];

static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_12[4][11];


struct check_hlds__old_type_constraints__vector_common_type_13_0_s {
  const MR_Word check_hlds__old_type_constraints__vector_common_type_13_0__vct_13_f_0;
};

static /* final */ const struct check_hlds__old_type_constraints__vector_common_type_13_0_s check_hlds__old_type_constraints_vector_common_13[5];



static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_1[67][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_2[2]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_1[2]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_2[1]))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_1[11]))
  },
  /* row  14 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row  15 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row  16 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0))
  },
  /* row  17 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row  18 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "ambiguous overloading causes type ambiguity."))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Possible type assignments include:"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The constructor"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has not been defined."))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[23])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "by constraint-based type checking."))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[23])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The given type is not supported"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The predicate with id"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Incorrect number of arguments"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "provided to method"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of typeclass"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[23])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The typeclass"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does not have the given method."))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[23])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is undefined."))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[23])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "by constraint-based typechecking."))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[23])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Event calls are not yet supported"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[43])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "There is not event named"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Possible predicates include:"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[48])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Ambiguous predicate call."))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[50])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_String) "("))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[23])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ") or"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[57])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Conflicting type assignments for the"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "variable"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "sets of goals"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[57])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The problem is most likely due to one of the following"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[63])))
  },
  /* row  66 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[65])))
  },
};

static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_2[74][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_1[1])),
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_1[2]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_1[2])),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_1[2])),
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_1[3]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_1[2])),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_1[1])),
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_1[2]))
  },
  /* row   9 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_4[0])),
    ((MR_Box) (check_hlds__old_type_constraints__old_typecheck_constraints_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[0])),
    ((MR_Box) (check_hlds__old_type_constraints__create_vartypes_map_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[0])),
    ((MR_Box) (check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_8[0])),
    ((MR_Box) (check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[1])),
    ((MR_Box) (check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[1])),
    ((MR_Box) (check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_8[1])),
    ((MR_Box) (check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[2])),
    ((MR_Box) (check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[3])),
    ((MR_Box) (check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[2])),
    ((MR_Box) (check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[3])),
    ((MR_Box) (check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[2])),
    ((MR_Box) (check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[4])),
    ((MR_Box) (check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[3])),
    ((MR_Box) (check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[0])),
    ((MR_Box) (check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[0])),
    ((MR_Box) (check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[5])),
    ((MR_Box) (check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  26 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[4])),
    ((MR_Box) (check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  27 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[3])),
    ((MR_Box) (check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  28 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[6])),
    ((MR_Box) (check_hlds__old_type_constraints__update_goal_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  29 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[7])),
    ((MR_Box) (check_hlds__old_type_constraints__update_goal_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  30 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[8])),
    ((MR_Box) (check_hlds__old_type_constraints__update_goal_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  31 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[7])),
    ((MR_Box) (check_hlds__old_type_constraints__update_goal_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  32 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[9])),
    ((MR_Box) (check_hlds__old_type_constraints__update_goal_6_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  33 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_8[6])),
    ((MR_Box) (check_hlds__old_type_constraints__has_one_disjunct_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  34 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[7])),
    ((MR_Box) (check_hlds__old_type_constraints__plain_call_goal_to_constraint_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  35 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[10])),
    ((MR_Box) (check_hlds__old_type_constraints__pred_call_constraint_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  36 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[7])),
    ((MR_Box) (check_hlds__old_type_constraints__generic_call_goal_to_constraint_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  37 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[10])),
    ((MR_Box) (check_hlds__old_type_constraints__generic_call_goal_to_constraint_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  38 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[7])),
    ((MR_Box) (check_hlds__old_type_constraints__unify_goal_to_constraint_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  39 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[7])),
    ((MR_Box) (check_hlds__old_type_constraints__unify_goal_to_constraint_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  40 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[10])),
    ((MR_Box) (check_hlds__old_type_constraints__unify_goal_to_constraint_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  41 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[11])),
    ((MR_Box) (check_hlds__old_type_constraints__goal_to_constraint_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  42 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[12])),
    ((MR_Box) (check_hlds__old_type_constraints__goal_to_constraint_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  43 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[13])),
    ((MR_Box) (check_hlds__old_type_constraints__goal_to_constraint_4_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  44 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[10])),
    ((MR_Box) (check_hlds__old_type_constraints__functor_unif_constraint_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  45 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[10])),
    ((MR_Box) (check_hlds__old_type_constraints__functor_unif_constraint_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  46 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[10])),
    ((MR_Box) (check_hlds__old_type_constraints__ho_pred_unif_constraint_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  47 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[11])),
    ((MR_Box) (check_hlds__old_type_constraints__conj_find_domain_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  48 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[14])),
    ((MR_Box) (check_hlds__old_type_constraints__conj_find_domain_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  49 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_8[7])),
    ((MR_Box) (check_hlds__old_type_constraints__conj_find_domain_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  50 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_8[6])),
    ((MR_Box) (check_hlds__old_type_constraints__propagate_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  51 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[0])),
    ((MR_Box) (check_hlds__old_type_constraints__propagate_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  52 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[0])),
    ((MR_Box) (check_hlds__old_type_constraints__propagate_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  53 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_8[6])),
    ((MR_Box) (check_hlds__old_type_constraints__propagate_7_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  54 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[14])),
    ((MR_Box) (check_hlds__old_type_constraints__propagate_7_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  55 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[16])),
    ((MR_Box) (check_hlds__old_type_constraints__propagate_7_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  56 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[14])),
    ((MR_Box) (check_hlds__old_type_constraints__propagate_7_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  57 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[13])),
    ((MR_Box) (check_hlds__old_type_constraints__propagate_7_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  58 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[15])),
    ((MR_Box) (check_hlds__old_type_constraints__unify_types_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  59 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[15])),
    ((MR_Box) (check_hlds__old_type_constraints__unify_types_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  60 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[15])),
    ((MR_Box) (check_hlds__old_type_constraints__unify_types_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  61 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[15])),
    ((MR_Box) (check_hlds__old_type_constraints__unify_types_3_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  62 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[18])),
    ((MR_Box) (check_hlds__old_type_constraints__unify_equal_tvars_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  63 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[15])),
    ((MR_Box) (check_hlds__old_type_constraints__domain_map_unchanged_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  64 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[20])),
    ((MR_Box) (check_hlds__old_type_constraints__constraint_has_one_solution_1_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  65 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[19])),
    ((MR_Box) (check_hlds__old_type_constraints__merge_type_constraints_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  66 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_8[6])),
    ((MR_Box) (check_hlds__old_type_constraints__merge_type_constraints_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  67 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[7])),
    ((MR_Box) (check_hlds__old_type_constraints__diagnose_ambig_pred_error_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  68 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[6])),
    ((MR_Box) (check_hlds__old_type_constraints__error_from_one_min_set_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  69 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[23])),
    ((MR_Box) (check_hlds__old_type_constraints__error_from_one_min_set_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  70 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[24])),
    ((MR_Box) (check_hlds__old_type_constraints__error_from_one_min_set_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  71 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[15])),
    ((MR_Box) (check_hlds__old_type_constraints__print_domain_map_change_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  72 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_8[6])),
    ((MR_Box) (check_hlds__old_type_constraints__get_first_disjunct_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  73 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_8[6])),
    ((MR_Box) (check_hlds__old_type_constraints__has_multiple_disjuncts_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_3[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "Goal was not a plain call")) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   2 */
  { ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[52]))) },
};

static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_4[3][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_tconstr_environment_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_tconstr_environment_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__old_type_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0))
  },
};

static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_5[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__bimap__pti_bimap_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__maybe__pti_maybe_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
};

static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_6[25][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__old_type_constraints__maybe__pti_maybe_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_solution_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0check_hlds__old_type_constraints__type_ctor_info_type_domain_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_solution_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_constraint_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__old_type_constraints__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__list__pti_list_1__plain_check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__old_type_constraints__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row  11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row  12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row  13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row  14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row  15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0))
  },
  /* row  16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__list__pti_list_1__plain_check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0))
  },
  /* row  17 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row  18 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__list__pti_list_1__plain_check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0))
  },
  /* row  19 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__old_type_constraints__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row  20 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row  21 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__old_type_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row  22 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__old_type_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row  23 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row  24 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_7[23][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__old_type_constraints__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__list__pti_list_1__plain_check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__old_type_constraints____vpti_pred_2__plain_check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__list__pti_list_1__plain_check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__maybe__pti_maybe_error_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__old_type_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0))
  },
  /* row  11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0))
  },
  /* row  12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0))
  },
  /* row  13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0))
  },
  /* row  14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row  15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row  16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row  17 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row  18 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row  19 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0))
  },
  /* row  20 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0))
  },
  /* row  21 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__old_type_constraints____vpti_pred_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__list__pti_list_1__plain_builtin__type_ctor_info_int_0))
  },
  /* row  22 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_8[9][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__old_type_constraints__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_solution_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[1])),
    ((MR_Box) (check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_13)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_2[20]))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[2])),
    ((MR_Box) (check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_2[23]))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[2])),
    ((MR_Box) (check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0_7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_2[24]))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[6])),
    ((MR_Box) (check_hlds__old_type_constraints__update_goal_6_p_0_6)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_2[31]))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[2])),
    ((MR_Box) (check_hlds__old_type_constraints__propagate_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_2[51]))
  },
};

static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_9[10][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__old_type_constraints____vpti_pred_3__plain_check_hlds__old_type_constraints__type_ctor_info_type_constraint_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_constraint_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_constraint_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__old_type_constraints____vpti_pred_3__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_tconstr_environment_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_list__ti_list_1builtin__type_ctor_info_int_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__old_type_constraints____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_int_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_list__ti_list_1builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_10[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&check_hlds__old_type_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_list__ti_list_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_solution_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
};

static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_11[3][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__old_type_constraints__bimap__pti_bimap_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__old_type_constraints_scalar_common_12[4][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&check_hlds__old_type_constraints__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0))
  },
};


static /* final */ const struct check_hlds__old_type_constraints__vector_common_type_13_0_s check_hlds__old_type_constraints_vector_common_13[5] = {
  /* row   0 */   { (MR_Word) ((MR_Unsigned) 4U) },
  /* row   1 */   { (MR_Word) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_3[1])) },
  /* row   2 */   { (MR_Word) ((MR_Unsigned) 4U) },
  /* row   3 */   { (MR_Word) ((MR_Unsigned) 4U) },
  /* row   4 */   { (MR_Word) ((MR_Unsigned) 4U) },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__bimap__pti_bimap_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__maybe__pti_maybe_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__list__ti_list_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__old_type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0check_hlds__old_type_constraints__type_ctor_info_type_domain_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0check_hlds__old_type_constraints__type_ctor_info_type_domain_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0check_hlds__old_type_constraints__type_ctor_info_type_domain_0) }
};

static const MR_VA_PseudoTypeInfo_Struct3 check_hlds__old_type_constraints____vpti_pred_3__plain_check_hlds__old_type_constraints__type_ctor_info_type_constraint_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_constraint_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_constraint_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0),
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0),
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 check_hlds__old_type_constraints____vpti_pred_3__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0__plain_check_hlds__old_type_constraints__type_ctor_info_type_domain_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0),
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0),
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__pair__pti_pair_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__list__pti_list_1__plain_check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__old_type_constraints__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints____vpti_pred_2__plain_check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0),
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__pair__ti_pair_2mdbcomp__goal_path__type_ctor_info_goal_id_0hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__maybe__pti_maybe_error_2__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__list__pti_list_1__plain_check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_VA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints____vpti_pred_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_VA_PseudoTypeInfo_Struct2 check_hlds__old_type_constraints____vpti_pred_2__plain_list__ti_list_1builtin__type_ctor_info_int_0__plain_list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__list__ti_list_1builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__list__ti_list_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__list__pti_list_1__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__old_type_constraints__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__old_type_constraints__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_class_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_class_env_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__old_type_constraints____Unify____class_env_0_0_10001)),
  ((MR_Box) (check_hlds__old_type_constraints____Compare____class_env_0_0_10001)),
  (MR_String) "check_hlds.old_type_constraints",
  (MR_String) "class_env",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_class_defn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__list__ti_list_1check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_PseudoTypeInfo check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_conj_type_constraint_0_0[5] = {
  (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__list__ti_list_1check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0),
  (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_tconstr_activity_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__maybe__ti_maybe_1mdbcomp__goal_path__type_ctor_info_goal_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_id_0)
};

static const MR_ConstString check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_names_conj_type_constraint_0_0[5] = {
  (MR_String) "tconstr_simples",
  (MR_String) "tconstr_activity",
  (MR_String) "tconstr_context",
  (MR_String) "tconstr_goal_id",
  (MR_String) "tconstr_pred_id"
};

static const MR_DuArgLocn check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_locns_conj_type_constraint_0_0[5] = {
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
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_conj_type_constraint_0_0 = {
  (MR_String) "ctconstr",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_conj_type_constraint_0_0,
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_names_conj_type_constraint_0_0,
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_locns_conj_type_constraint_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_conj_type_constraint_0_0[1] = { &check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_conj_type_constraint_0_0 };

static const MR_DuPtagLayout check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_ptag_ordered_conj_type_constraint_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_conj_type_constraint_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_name_ordered_conj_type_constraint_0[1] = { &check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_conj_type_constraint_0_0 };

static const MR_Integer check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_conj_type_constraint_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__old_type_constraints____Unify____conj_type_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__old_type_constraints____Compare____conj_type_constraint_0_0_10001)),
  (MR_String) "check_hlds.old_type_constraints",
  (MR_String) "conj_type_constraint",
  { check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_name_ordered_conj_type_constraint_0 },
  { check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_ptag_ordered_conj_type_constraint_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_conj_type_constraint_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_error_specs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__old_type_constraints____Unify____error_specs_0_0_10001)),
  ((MR_Box) (check_hlds__old_type_constraints____Compare____error_specs_0_0_10001)),
  (MR_String) "check_hlds.old_type_constraints",
  (MR_String) "error_specs",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__old_type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data_event__type_ctor_info_event_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&parse_tree__prog_data_event__parse_tree__prog_data_event__type_ctor_info_event_spec_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_event_env_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__old_type_constraints____Unify____event_env_0_0_10001)),
  ((MR_Box) (check_hlds__old_type_constraints____Compare____event_env_0_0_10001)),
  (MR_String) "check_hlds.old_type_constraints",
  (MR_String) "event_env",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data_event__type_ctor_info_event_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__list__ti_list_1hlds__hlds_cons__type_ctor_info_inner_cons_entry_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_inner_cons_entry_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__old_type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_cons__type_ctor_info_inner_cons_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&check_hlds__old_type_constraints__list__ti_list_1hlds__hlds_cons__type_ctor_info_inner_cons_entry_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_func_env_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__old_type_constraints____Unify____func_env_0_0_10001)),
  ((MR_Box) (check_hlds__old_type_constraints____Compare____func_env_0_0_10001)),
  (MR_String) "check_hlds.old_type_constraints",
  (MR_String) "func_env",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_cons__type_ctor_info_inner_cons_entry_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_pred_env_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__old_type_constraints____Unify____pred_env_0_0_10001)),
  ((MR_Box) (check_hlds__old_type_constraints____Compare____pred_env_0_0_10001)),
  (MR_String) "check_hlds.old_type_constraints",
  (MR_String) "pred_env",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__old_type_constraints__bimap__ti_bimap_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) (&check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_prog_var_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__old_type_constraints____Unify____prog_var_map_0_0_10001)),
  ((MR_Box) (check_hlds__old_type_constraints____Compare____prog_var_map_0_0_10001)),
  (MR_String) "check_hlds.old_type_constraints",
  (MR_String) "prog_var_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__bimap__ti_bimap_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__old_type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_simple_prog_var_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__old_type_constraints____Unify____simple_prog_var_map_0_0_10001)),
  ((MR_Box) (check_hlds__old_type_constraints____Compare____simple_prog_var_map_0_0_10001)),
  (MR_String) "check_hlds.old_type_constraints",
  (MR_String) "simple_prog_var_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_simple_type_constraint_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_simple_type_constraint_0_0 = {
  (MR_String) "stconstr",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_simple_type_constraint_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_simple_type_constraint_0_0[1] = { &check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_simple_type_constraint_0_0 };

static const MR_DuPtagLayout check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_ptag_ordered_simple_type_constraint_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_simple_type_constraint_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_name_ordered_simple_type_constraint_0[1] = { &check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_simple_type_constraint_0_0 };

static const MR_Integer check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_simple_type_constraint_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__old_type_constraints____Unify____simple_type_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__old_type_constraints____Compare____simple_type_constraint_0_0_10001)),
  (MR_String) "check_hlds.old_type_constraints",
  (MR_String) "simple_type_constraint",
  { check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_name_ordered_simple_type_constraint_0 },
  { check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_ptag_ordered_simple_type_constraint_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_simple_type_constraint_0,

};

static const MR_EnumFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__enum_functor_desc_tconstr_activity_0_0 = {
  (MR_String) "tconstr_active",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__enum_functor_desc_tconstr_activity_0_1 = {
  (MR_String) "tconstr_unsatisfiable",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__enum_ordinal_ordered_tconstr_activity_0[2] = {
  &check_hlds__old_type_constraints__check_hlds__old_type_constraints__enum_functor_desc_tconstr_activity_0_0,
  &check_hlds__old_type_constraints__check_hlds__old_type_constraints__enum_functor_desc_tconstr_activity_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__enum_name_ordered_tconstr_activity_0[2] = {
  &check_hlds__old_type_constraints__check_hlds__old_type_constraints__enum_functor_desc_tconstr_activity_0_0,
  &check_hlds__old_type_constraints__check_hlds__old_type_constraints__enum_functor_desc_tconstr_activity_0_1
};

static const MR_Integer check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_tconstr_activity_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_tconstr_activity_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__old_type_constraints____Unify____tconstr_activity_0_0_10001)),
  ((MR_Box) (check_hlds__old_type_constraints____Compare____tconstr_activity_0_0_10001)),
  (MR_String) "check_hlds.old_type_constraints",
  (MR_String) "tconstr_activity",
  { check_hlds__old_type_constraints__check_hlds__old_type_constraints__enum_name_ordered_tconstr_activity_0 },
  { check_hlds__old_type_constraints__check_hlds__old_type_constraints__enum_ordinal_ordered_tconstr_activity_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_tconstr_activity_0,

};

static const MR_PseudoTypeInfo check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_tconstr_environment_0_0[4] = {
  (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_string_0parse_tree__prog_data_event__type_ctor_info_event_spec_0),
  (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_class_defn_0),
  (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_string_0list__ti_list_1hlds__hlds_cons__type_ctor_info_inner_cons_entry_0),
  (MR_PseudoTypeInfo) (&hlds__pred_table__hlds__pred_table__type_ctor_info_predicate_table_0)
};

static const MR_ConstString check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_names_tconstr_environment_0_0[4] = {
  (MR_String) "tce_event_env",
  (MR_String) "tce_class_env",
  (MR_String) "tce_func_env",
  (MR_String) "tce_pred_env"
};

static const MR_DuFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_tconstr_environment_0_0 = {
  (MR_String) "tconstr_environment",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_tconstr_environment_0_0,
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_names_tconstr_environment_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_tconstr_environment_0_0[1] = { &check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_tconstr_environment_0_0 };

static const MR_DuPtagLayout check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_ptag_ordered_tconstr_environment_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_tconstr_environment_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_name_ordered_tconstr_environment_0[1] = { &check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_tconstr_environment_0_0 };

static const MR_Integer check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_tconstr_environment_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_tconstr_environment_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__old_type_constraints____Unify____tconstr_environment_0_0_10001)),
  ((MR_Box) (check_hlds__old_type_constraints____Compare____tconstr_environment_0_0_10001)),
  (MR_String) "check_hlds.old_type_constraints",
  (MR_String) "tconstr_environment",
  { check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_name_ordered_tconstr_environment_0 },
  { check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_ptag_ordered_tconstr_environment_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_tconstr_environment_0,

};

static const MR_PseudoTypeInfo check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_type_constraint_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0) };

static const MR_DuFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_constraint_0_0 = {
  (MR_String) "tconstr_conj",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_type_constraint_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__list__ti_list_1check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__maybe__ti_maybe_1check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0) }
};

static const MR_PseudoTypeInfo check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_type_constraint_0_1[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__list__ti_list_1check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0),
  (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__maybe__ti_maybe_1check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0)
};

static const MR_DuFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_constraint_0_1 = {
  (MR_String) "tconstr_disj",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_type_constraint_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_type_constraint_0_0[1] = { &check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_constraint_0_0 };

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_type_constraint_0_1[1] = { &check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_constraint_0_1 };

static const MR_DuPtagLayout check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_ptag_ordered_type_constraint_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_type_constraint_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_type_constraint_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_name_ordered_type_constraint_0[2] = {
  &check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_constraint_0_0,
  &check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_constraint_0_1
};

static const MR_Integer check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_type_constraint_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__old_type_constraints____Unify____type_constraint_0_0_10001)),
  ((MR_Box) (check_hlds__old_type_constraints____Compare____type_constraint_0_0_10001)),
  (MR_String) "check_hlds.old_type_constraints",
  (MR_String) "type_constraint",
  { check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_name_ordered_type_constraint_0 },
  { check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_ptag_ordered_type_constraint_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_type_constraint_0,

};

const MR_TypeCtorInfo_Struct check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_counter_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__old_type_constraints____Unify____type_constraint_counter_0_0_10001)),
  ((MR_Box) (check_hlds__old_type_constraints____Compare____type_constraint_counter_0_0_10001)),
  (MR_String) "check_hlds.old_type_constraints",
  (MR_String) "type_constraint_counter",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__old_type_constraints____Unify____type_constraint_id_0_0_10001)),
  ((MR_Box) (check_hlds__old_type_constraints____Compare____type_constraint_id_0_0_10001)),
  (MR_String) "check_hlds.old_type_constraints",
  (MR_String) "type_constraint_id",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__old_type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__old_type_constraints__type_ctor_info_type_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__old_type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__old_type_constraints__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&check_hlds__old_type_constraints__list__ti_list_1builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_type_constraint_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__bimap__ti_bimap_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0),
  (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__old_type_constraints__type_ctor_info_type_constraint_0),
  (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
};

static const MR_ConstString check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_names_type_constraint_info_0_0[6] = {
  (MR_String) "tconstr_var_map",
  (MR_String) "tconstr_constraint_counter",
  (MR_String) "tconstr_constraint_map",
  (MR_String) "tconstr_var_constraints",
  (MR_String) "tconstr_tvarset",
  (MR_String) "tconstr_error_specs"
};

static const MR_DuFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_constraint_info_0_0 = {
  (MR_String) "tconstr_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_type_constraint_info_0_0,
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_names_type_constraint_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_type_constraint_info_0_0[1] = { &check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_constraint_info_0_0 };

static const MR_DuPtagLayout check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_ptag_ordered_type_constraint_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_type_constraint_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_name_ordered_type_constraint_info_0[1] = { &check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_constraint_info_0_0 };

static const MR_Integer check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_type_constraint_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__old_type_constraints____Unify____type_constraint_info_0_0_10001)),
  ((MR_Box) (check_hlds__old_type_constraints____Compare____type_constraint_info_0_0_10001)),
  (MR_String) "check_hlds.old_type_constraints",
  (MR_String) "type_constraint_info",
  { check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_name_ordered_type_constraint_info_0 },
  { check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_ptag_ordered_type_constraint_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_type_constraint_info_0,

};

const MR_TypeCtorInfo_Struct check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__old_type_constraints____Unify____type_constraint_map_0_0_10001)),
  ((MR_Box) (check_hlds__old_type_constraints____Compare____type_constraint_map_0_0_10001)),
  (MR_String) "check_hlds.old_type_constraints",
  (MR_String) "type_constraint_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__old_type_constraints__type_ctor_info_type_constraint_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_set_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__old_type_constraints____Unify____type_constraint_set_0_0_10001)),
  ((MR_Box) (check_hlds__old_type_constraints____Compare____type_constraint_set_0_0_10001)),
  (MR_String) "check_hlds.old_type_constraints",
  (MR_String) "type_constraint_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__list__ti_list_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0check_hlds__old_type_constraints__type_ctor_info_type_domain_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__old_type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0check_hlds__old_type_constraints__type_ctor_info_type_domain_0) }
};

static const MR_PseudoTypeInfo check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_type_constraint_solution_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__list__ti_list_1tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0check_hlds__old_type_constraints__type_ctor_info_type_domain_0),
  (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__old_type_constraints__type_ctor_info_type_constraint_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_names_type_constraint_solution_0_0[3] = {
  (MR_String) "tconstr_sol_domain_maps",
  (MR_String) "tconstr_sol_constraint_map",
  (MR_String) "tconstr_sol_success"
};

static const MR_DuArgLocn check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_locns_type_constraint_solution_0_0[3] = {
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_constraint_solution_0_0 = {
  (MR_String) "tconstr_solution",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_type_constraint_solution_0_0,
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_names_type_constraint_solution_0_0,
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_locns_type_constraint_solution_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_type_constraint_solution_0_0[1] = { &check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_constraint_solution_0_0 };

static const MR_DuPtagLayout check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_ptag_ordered_type_constraint_solution_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_type_constraint_solution_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_name_ordered_type_constraint_solution_0[1] = { &check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_constraint_solution_0_0 };

static const MR_Integer check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_type_constraint_solution_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_solution_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__old_type_constraints____Unify____type_constraint_solution_0_0_10001)),
  ((MR_Box) (check_hlds__old_type_constraints____Compare____type_constraint_solution_0_0_10001)),
  (MR_String) "check_hlds.old_type_constraints",
  (MR_String) "type_constraint_solution",
  { check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_name_ordered_type_constraint_solution_0 },
  { check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_ptag_ordered_type_constraint_solution_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_type_constraint_solution_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__old_type_constraints__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_type_domain_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_mer_type_0) };

static const MR_DuFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_domain_0_0 = {
  (MR_String) "tdomain_nonfixed",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_type_domain_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_type_domain_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) };

static const MR_DuFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_domain_0_1 = {
  (MR_String) "tdomain_singleton",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__field_types_type_domain_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_domain_0_2 = {
  (MR_String) "tdomain_any",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_type_domain_0_0[1] = { &check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_domain_0_2 };

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_type_domain_0_1[1] = { &check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_domain_0_0 };

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_type_domain_0_2[1] = { &check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_domain_0_1 };

static const MR_DuPtagLayout check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_ptag_ordered_type_domain_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_type_domain_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_type_domain_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_stag_ordered_type_domain_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_name_ordered_type_domain_0[3] = {
  &check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_domain_0_2,
  &check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_domain_0_0,
  &check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_functor_desc_type_domain_0_1
};

static const MR_Integer check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_type_domain_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__old_type_constraints____Unify____type_domain_0_0_10001)),
  ((MR_Box) (check_hlds__old_type_constraints____Compare____type_domain_0_0_10001)),
  (MR_String) "check_hlds.old_type_constraints",
  (MR_String) "type_domain",
  { check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_name_ordered_type_domain_0 },
  { check_hlds__old_type_constraints__check_hlds__old_type_constraints__du_ptag_ordered_type_domain_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__old_type_constraints__check_hlds__old_type_constraints__functor_number_map_type_domain_0,

};

const MR_TypeCtorInfo_Struct check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__old_type_constraints____Unify____type_domain_map_0_0_10001)),
  ((MR_Box) (check_hlds__old_type_constraints____Compare____type_domain_map_0_0_10001)),
  (MR_String) "check_hlds.old_type_constraints",
  (MR_String) "type_domain_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0check_hlds__old_type_constraints__type_ctor_info_type_domain_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_var_constraint_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__old_type_constraints____Unify____var_constraint_map_0_0_10001)),
  ((MR_Box) (check_hlds__old_type_constraints____Compare____var_constraint_map_0_0_10001)),
  (MR_String) "check_hlds.old_type_constraints",
  (MR_String) "var_constraint_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__old_type_constraints__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0list__ti_list_1builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__min_unsat_constraints__2193__1_2_p_0(
  MR_Word NewD_26,
  MR_Word HeadVar__2_83)
{
  MR_bool succeeded;

  succeeded = mercury__set__superset_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), NewD_26, HeadVar__2_83);
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__min_unsat_constraints__2182__3_4_p_0(
  MR_Word HeadVar__1_43,
  MR_Word HeadVar__2_59,
  MR_Word HeadVar__3_60,
  MR_Word * HeadVar__4_61)
{
  mercury__map__det_transform_value_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[3]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), HeadVar__1_43, ((MR_Box) (HeadVar__2_59)), HeadVar__3_60, HeadVar__4_61);
}

static void MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__min_unsat_constraints__2182__2_3_p_0(
  MR_Word HeadVar__1_44,
  MR_Word HeadVar__2_64,
  MR_Word * HeadVar__3_65)
{
  mercury__list__filter_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVar__1_44, HeadVar__2_64, HeadVar__3_65);
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__min_unsat_constraints__2182__1_2_p_0(
  MR_Word Union_16,
  MR_Integer HeadVar__2_67)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Union_16, ((MR_Box) (HeadVar__2_67)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__constraint_is_satisfiable__1868__1_3_p_0(
  MR_Word DomainMap_3,
  MR_Word HeadVar__2_16,
  MR_Word * HeadVar__3_17)
{
  MR_bool succeeded;
  MR_Box conv0_HeadVar__3_17;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), DomainMap_3, ((MR_Box) (HeadVar__2_16)), &conv0_HeadVar__3_17);
  if (succeeded)
  {
    *HeadVar__3_17 = ((MR_Word) (conv0_HeadVar__3_17));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__unify_equal_tvars__1550__1_2_p_0(
  MR_Word Replaced_10,
  MR_Word HeadVar__2_64)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), Replaced_10, ((MR_Box) (HeadVar__2_64)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__find_domain__1418__1_4_p_0(
  MR_Word HeadVar__1_35,
  MR_Word HeadVar__2_50,
  MR_Word HeadVar__3_51,
  MR_Word * HeadVar__4_52)
{
  mercury__map__intersect_4_p_1((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), HeadVar__1_35, HeadVar__2_50, HeadVar__3_51, HeadVar__4_52);
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__propagate__1366__1_3_p_0(
  MR_Word VarConstraints_9,
  MR_Word HeadVar__2_60,
  MR_Word * HeadVar__3_61)
{
  MR_bool succeeded;
  MR_Box conv0_HeadVar__3_61;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[3]), VarConstraints_9, ((MR_Box) (HeadVar__2_60)), &conv0_HeadVar__3_61);
  if (succeeded)
  {
    *HeadVar__3_61 = ((MR_Word) (conv0_HeadVar__3_61));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__solve_constraint_labeling__1273__1_4_p_0(
  MR_Word HeadVar__1_48,
  MR_Word HeadVar__2_86,
  MR_Word HeadVar__3_87,
  MR_Word * HeadVar__4_88)
{
  mercury__map__union_4_p_1((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVar__1_48, HeadVar__2_86, HeadVar__3_87, HeadVar__4_88);
}

static MR_Word MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__func__solve_constraint_labeling__1246__1_3_f_0(
  MR_Word Guesses_11,
  MR_Word Var_22,
  MR_Word HeadVar__3_64)
{
  MR_Word HeadVar__4_65;

  HeadVar__4_65 = mercury__map__set_3_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), Guesses_11, ((MR_Box) (Var_22)), ((MR_Box) (HeadVar__3_64)));
  return HeadVar__4_65;
}

static void MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__find_type_constraint_solutions__1208__1_4_p_0(
  MR_Word HeadVar__1_48,
  MR_Word HeadVar__2_83,
  MR_Word HeadVar__3_84,
  MR_Word * HeadVar__4_85)
{
  mercury__map__union_4_p_1((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), HeadVar__1_48, HeadVar__2_83, HeadVar__3_84, HeadVar__4_85);
}

static void MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__find_type_constraint_solutions__1197__1_4_p_0(
  MR_Word HeadVar__1_45,
  MR_Word HeadVar__2_74,
  MR_Word HeadVar__3_75,
  MR_Word * HeadVar__4_76)
{
  mercury__map__union_4_p_1((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), HeadVar__1_45, HeadVar__2_74, HeadVar__3_75, HeadVar__4_76);
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__create_vartypes_map__491__1_2_p_0(
  MR_Word HeadVar__1_29,
  MR_Word * HeadVar__2_30)
{
  MR_bool succeeded;
  MR_Box conv0_HeadVar__2_30;

  succeeded = mercury__maybe__maybe_is_yes_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), HeadVar__1_29, &conv0_HeadVar__2_30);
  if (succeeded)
  {
    *HeadVar__2_30 = ((MR_Word) (conv0_HeadVar__2_30));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__update_goal__422__1_2_p_0(
  MR_Word HeadVar__1_50,
  MR_Word * HeadVar__2_51)
{
  MR_bool succeeded;
  MR_Box conv0_HeadVar__2_51;

  succeeded = mercury__list__head_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[2]), HeadVar__1_50, &conv0_HeadVar__2_51);
  if (succeeded)
  {
    *HeadVar__2_51 = ((MR_Word) (conv0_HeadVar__2_51));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__IntroducedFrom__pred__update_goal__420__1_3_p_0(
  MR_Word HeadVar__1_26,
  MR_Word HeadVar__2_43,
  MR_Word * HeadVar__3_44)
{
  mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[2]), HeadVar__1_26, HeadVar__2_43, HeadVar__3_44);
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____var_constraint_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____var_constraint_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_domain_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_domain_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_domain_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[18]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
            }
            break;
        }
        break;
      case (MR_Integer) 2:
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
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));

              parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_domain_0_0(
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
          MR_Word TypeInfo_11_11;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            TypeInfo_11_11 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[18]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_solution_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[9]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer Var_17 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_18 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_17 < Var_18);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_17 > Var_18);
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
check_hlds__old_type_constraints____Unify____type_constraint_solution_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 1);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[9]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_set_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[11]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_set_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[11]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_info_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[8]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__counter____Compare____counter_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[5]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[3]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[17]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_info_0_0(
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
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_22_22;
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[8]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = mercury__counter____Unify____counter_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_19_19 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_20_20 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_21_21 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[17]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_22_22 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

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
check_hlds__old_type_constraints____Unify____type_constraint_id_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_counter_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__counter____Compare____counter_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_counter_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__counter____Unify____counter_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

      check_hlds__old_type_constraints____Compare____conj_type_constraint_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word SubResult1_8;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[5]), &SubResult1_8, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
    succeeded = (SubResult1_8 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_8;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[16]), HeadVar__1_1, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
  }
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_0_0(
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
    MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      succeeded = check_hlds__old_type_constraints____Unify____conj_type_constraint_0_0(ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Word TypeInfo_11_11;
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      TypeInfo_11_11 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[16]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____tconstr_environment_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[7]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[6]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_cons_table_0), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          hlds__pred_table____Compare____predicate_table_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____tconstr_environment_0_0(
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
    MR_Word TypeCtorInfo_15_15;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[7]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeCtorInfo_15_15 = (MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_cons_table_0);
        succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
          succeeded = hlds__pred_table____Unify____predicate_table_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____tconstr_activity_0_0(
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
check_hlds__old_type_constraints____Unify____tconstr_activity_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____simple_type_constraint_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____simple_type_constraint_0_0(
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
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____simple_prog_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____simple_prog_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____prog_var_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[8]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____prog_var_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[8]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____pred_env_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  hlds__pred_table____Compare____predicate_table_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____pred_env_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = hlds__pred_table____Unify____predicate_table_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____func_env_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_cons_table_0), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____func_env_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_cons_table_0), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____event_env_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____event_env_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____error_specs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____error_specs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____conj_type_constraint_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[10]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_25 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_26 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_25 < Var_26);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_25 > Var_26);
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

        mercury__term_context____Compare____term_context_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[14]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[15]), HeadVar__1_1, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____conj_type_constraint_0_0(
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
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[10]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__term_context____Unify____term_context_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[14]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[15]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____class_env_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[6]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____class_env_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[6]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__has_multiple_disjuncts_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__old_type_constraints__still_active_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__has_multiple_disjuncts_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Cs_5)
{
  MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1);
  MR_Word TypeCtorInfo_12_12;
  MR_Word Cs0_3;
  MR_Word Var_9;
  MR_Word Var_10;

  if (succeeded)
  {
    Cs0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    Var_9 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[73]);
    TypeCtorInfo_12_12 = (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0);
    mercury__list__filter_3_p_0(TypeCtorInfo_12_12, Var_9, Cs0_3, Cs_5);
    succeeded = (*Cs_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_10 = ((MR_Word) ((MR_hl_field(1, *Cs_5, 1))));
      succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__get_first_disjunct_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__old_type_constraints__still_active_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__get_first_disjunct_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * C_2)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    *C_2 = (MR_Word) ((MR_Word) (HeadVar__1_1));
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if ((Var_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_8;

      mercury__list__filter_3_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[72]), Var_16, &Var_8);
      succeeded = (Var_8 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        *C_2 = ((MR_Word) ((MR_hl_field(1, Var_8, 0))));
    }
    else
    {
      *C_2 = ((MR_Word) ((MR_hl_field(1, Var_15, 0))));
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__set_clause_body_3_p_0(
  MR_Word BodyGoal_4,
  MR_Word STATE_VARIABLE_Clause_0_6,
  MR_Word * STATE_VARIABLE_Clause_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Clause_0_6, 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Clause_0_6, 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Clause_0_6, 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Clause_0_6, 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Clause_0_6, 5))));
  MR_Word Var_14 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Clause_0_6, 6))) & (MR_Integer) 1);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Clause_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (BodyGoal_4));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = (MR_Box) ((MR_Unsigned) (Var_14));
  }
}

static void MR_CALL 
check_hlds__old_type_constraints__get_clause_body_2_p_0(
  MR_Word Clause_3,
  MR_Word * BodyGoal_4)
{
  *BodyGoal_4 = hlds__hlds_clauses__clause_body_1_f_0(Clause_3);
}

static void MR_CALL 
check_hlds__old_type_constraints__print_domain_map_change_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv3_HeadVar__3_3;

  parse_tree__parse_tree_out_type__type_to_debug_string_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__old_type_constraints__print_domain_map_change_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__3_3;

  parse_tree__parse_tree_out_type__type_to_debug_string_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__print_domain_map_change_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_Type_6;

  succeeded = check_hlds__old_type_constraints__unify_types_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Type_6);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv1_Type_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__print_domain_map_change_6_p_0(
  MR_Word OutputStream_7,
  MR_Word TVarSet_8,
  MR_Word OldDomainMap_9,
  MR_Word HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word TVar_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, 0))));
  MR_Word NewDomain_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, 1))));
  MR_Word OldDomain_13;
  MR_Box conv0_OldDomain_13;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), OldDomainMap_9, ((MR_Box) (TVar_10)), &conv0_OldDomain_13);
  if (succeeded)
  {
    OldDomain_13 = ((MR_Word) (conv0_OldDomain_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    switch (MR_tag((MR_Word) OldDomain_13)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        succeeded = (NewDomain_11 == (MR_Word) ((MR_Unsigned) 0U));
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_13_43;
          MR_Word TypeCtorInfo_17_44;
          MR_Word A_36 = ((MR_Word) ((MR_hl_field(1, OldDomain_13, 0))));
          MR_Word B_37;
          MR_Integer C_38;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Integer Var_45;
          MR_Word Var_39;

          succeeded = ((MR_tag((MR_Word) NewDomain_11)) == (MR_Integer) 1);
          if (succeeded)
          {
            B_37 = ((MR_Word) ((MR_hl_field(1, NewDomain_11, 0))));
            TypeCtorInfo_13_43 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
            mercury__set__count_2_p_0(TypeCtorInfo_13_43, A_36, &C_38);
            mercury__set__count_2_p_0(TypeCtorInfo_13_43, B_37, &Var_45);
            succeeded = (C_38 == Var_45);
            if (succeeded)
            {
              Var_40 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[71]);
              TypeCtorInfo_17_44 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
              Var_41 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_17_44, A_36);
              Var_42 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_17_44, B_37);
              succeeded = mercury__list__map_corresponding_4_p_1(TypeCtorInfo_17_44, TypeCtorInfo_17_44, TypeCtorInfo_17_44, Var_40, Var_41, Var_42, &Var_39);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_33 = ((MR_Word) ((MR_hl_field(2, OldDomain_13, 0))));
          MR_Word B_34;
          MR_Word Var_35;

          succeeded = ((MR_tag((MR_Word) NewDomain_11)) == (MR_Integer) 2);
          if (succeeded)
          {
            B_34 = ((MR_Word) ((MR_hl_field(2, NewDomain_11, 0))));
            succeeded = check_hlds__old_type_constraints__unify_types_3_p_0(A_33, B_34, &Var_35);
          }
        }
        break;
    }
    if (!(succeeded))
    {
      MR_Word Var_18;
      MR_Word Var_22;
      MR_Word TVar_46;
      MR_Word Domain_47;
      MR_String DomainName_48;
      MR_String TVarName_49;
      MR_String Var_51;
      MR_String Var_53;
      MR_String Var_54;
      MR_String Var_56;
      MR_Word TVar_68;
      MR_Word Domain_69;
      MR_String DomainName_70;
      MR_String TVarName_71;
      MR_String Var_73;
      MR_String Var_75;
      MR_String Var_76;
      MR_String Var_78;

      mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "  Old domain:");
      Var_18 = mercury__pair__pair_2_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVar_10)), ((MR_Box) (OldDomain_13)));
      TVar_46 = ((MR_Word) ((MR_hl_field(0, Var_18, 0))));
      Domain_47 = ((MR_Word) ((MR_hl_field(0, Var_18, 1))));
      switch (MR_tag((MR_Word) Domain_47)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          DomainName_48 = (MR_String) "any";
          break;
        case (MR_Integer) 1:
          {
            MR_Word DomainSet_61 = ((MR_Word) ((MR_hl_field(1, Domain_47, 0))));
            MR_Word DomainTypeNames_62;
            MR_Word Var_63;
            MR_Word Var_64;

            {
              Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_63, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[8]));
              MR_hl_field(0, Var_63, 1) = ((MR_Box) (check_hlds__old_type_constraints__print_domain_map_change_6_p_0_2));
              MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_63, 3) = ((MR_Box) (TVarSet_8));
            }
            Var_64 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), DomainSet_61);
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_63, Var_64, &DomainTypeNames_62);
            DomainName_48 = mercury__string__join_list_2_f_0((MR_String) ", ", DomainTypeNames_62);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_60 = ((MR_Word) ((MR_hl_field(2, Domain_47, 0))));

            parse_tree__parse_tree_out_type__type_to_debug_string_3_p_0(TVarSet_8, Type_60, &DomainName_48);
          }
          break;
      }
      TVarName_49 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_8, (MR_Integer) 1, TVar_46);
      Var_56 = mercury__string__f_43_43_2_f_0(DomainName_48, (MR_String) "}\n");
      Var_54 = mercury__string__f_43_43_2_f_0((MR_String) " -> {", Var_56);
      Var_53 = mercury__string__f_43_43_2_f_0(TVarName_49, Var_54);
      Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "  ", Var_53);
      mercury__io__print_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OutputStream_7, ((MR_Box) (Var_51)));
      mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "  New domain:");
      Var_22 = mercury__pair__pair_2_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVar_10)), ((MR_Box) (NewDomain_11)));
      TVar_68 = ((MR_Word) ((MR_hl_field(0, Var_22, 0))));
      Domain_69 = ((MR_Word) ((MR_hl_field(0, Var_22, 1))));
      switch (MR_tag((MR_Word) Domain_69)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          DomainName_70 = (MR_String) "any";
          break;
        case (MR_Integer) 1:
          {
            MR_Word DomainSet_83 = ((MR_Word) ((MR_hl_field(1, Domain_69, 0))));
            MR_Word DomainTypeNames_84;
            MR_Word Var_85;
            MR_Word Var_86;

            {
              Var_85 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_85, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[8]));
              MR_hl_field(0, Var_85, 1) = ((MR_Box) (check_hlds__old_type_constraints__print_domain_map_change_6_p_0_3));
              MR_hl_field(0, Var_85, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_85, 3) = ((MR_Box) (TVarSet_8));
            }
            Var_86 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), DomainSet_83);
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_85, Var_86, &DomainTypeNames_84);
            DomainName_70 = mercury__string__join_list_2_f_0((MR_String) ", ", DomainTypeNames_84);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_82 = ((MR_Word) ((MR_hl_field(2, Domain_69, 0))));

            parse_tree__parse_tree_out_type__type_to_debug_string_3_p_0(TVarSet_8, Type_82, &DomainName_70);
          }
          break;
      }
      TVarName_71 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_8, (MR_Integer) 1, TVar_68);
      Var_78 = mercury__string__f_43_43_2_f_0(DomainName_70, (MR_String) "}\n");
      Var_76 = mercury__string__f_43_43_2_f_0((MR_String) " -> {", Var_78);
      Var_75 = mercury__string__f_43_43_2_f_0(TVarName_71, Var_76);
      Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "  ", Var_75);
      mercury__io__print_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OutputStream_7, ((MR_Box) (Var_73)));
    }
  }
  else
  {
    MR_Word Var_26;

    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "  New domain added:");
    Var_26 = mercury__pair__pair_2_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVar_10)), ((MR_Box) (NewDomain_11)));
    check_hlds__old_type_constraints__print_type_domain_5_p_0(OutputStream_7, TVarSet_8, Var_26);
  }
}

static void MR_CALL 
check_hlds__old_type_constraints__print_type_domain_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  parse_tree__parse_tree_out_type__type_to_debug_string_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__old_type_constraints__print_type_domain_5_p_0(
  MR_Word OutputStream_6,
  MR_Word TVarSet_7,
  MR_Word HeadVar__3_3)
{
  MR_Word TVar_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
  MR_Word Domain_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
  MR_String DomainName_11;
  MR_String TVarName_12;
  MR_String Var_16;
  MR_String Var_19;
  MR_String Var_20;
  MR_String Var_22;

  switch (MR_tag((MR_Word) Domain_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DomainName_11 = (MR_String) "any";
      break;
    case (MR_Integer) 1:
      {
        MR_Word DomainSet_27 = ((MR_Word) ((MR_hl_field(1, Domain_9, 0))));
        MR_Word DomainTypeNames_28;
        MR_Word Var_29;
        MR_Word Var_30;

        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_29, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[8]));
          MR_hl_field(0, Var_29, 1) = ((MR_Box) (check_hlds__old_type_constraints__print_type_domain_5_p_0_1));
          MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_29, 3) = ((MR_Box) (TVarSet_7));
        }
        Var_30 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), DomainSet_27);
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_29, Var_30, &DomainTypeNames_28);
        DomainName_11 = mercury__string__join_list_2_f_0((MR_String) ", ", DomainTypeNames_28);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Type_26 = ((MR_Word) ((MR_hl_field(2, Domain_9, 0))));

        parse_tree__parse_tree_out_type__type_to_debug_string_3_p_0(TVarSet_7, Type_26, &DomainName_11);
      }
      break;
  }
  TVarName_12 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_7, (MR_Integer) 1, TVar_8);
  Var_22 = mercury__string__f_43_43_2_f_0(DomainName_11, (MR_String) "}\n");
  Var_20 = mercury__string__f_43_43_2_f_0((MR_String) " -> {", Var_22);
  Var_19 = mercury__string__f_43_43_2_f_0(TVarName_12, Var_20);
  Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "  ", Var_19);
  mercury__io__print_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OutputStream_6, ((MR_Box) (Var_16)));
}

static void MR_CALL 
check_hlds__old_type_constraints__print_guess_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  parse_tree__parse_tree_out_type__type_to_debug_string_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__old_type_constraints__print_guess_5_p_0(
  MR_Word OutputStream_6,
  MR_Word TVarSet_7,
  MR_Word Guess_8)
{
  MR_Word TVar_15;
  MR_Word Domain_16;
  MR_String DomainName_17;
  MR_String TVarName_18;
  MR_String Var_20;
  MR_String Var_22;
  MR_String Var_23;
  MR_String Var_25;

  mercury__io__print_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OutputStream_6, ((MR_Box) ((MR_String) "        Guessing ")));
  TVar_15 = ((MR_Word) ((MR_hl_field(0, Guess_8, 0))));
  Domain_16 = ((MR_Word) ((MR_hl_field(0, Guess_8, 1))));
  switch (MR_tag((MR_Word) Domain_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      DomainName_17 = (MR_String) "any";
      break;
    case (MR_Integer) 1:
      {
        MR_Word DomainSet_30 = ((MR_Word) ((MR_hl_field(1, Domain_16, 0))));
        MR_Word DomainTypeNames_31;
        MR_Word Var_32;
        MR_Word Var_33;

        {
          Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_32, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[8]));
          MR_hl_field(0, Var_32, 1) = ((MR_Box) (check_hlds__old_type_constraints__print_guess_5_p_0_1));
          MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_32, 3) = ((MR_Box) (TVarSet_7));
        }
        Var_33 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), DomainSet_30);
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_32, Var_33, &DomainTypeNames_31);
        DomainName_17 = mercury__string__join_list_2_f_0((MR_String) ", ", DomainTypeNames_31);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Type_29 = ((MR_Word) ((MR_hl_field(2, Domain_16, 0))));

        parse_tree__parse_tree_out_type__type_to_debug_string_3_p_0(TVarSet_7, Type_29, &DomainName_17);
      }
      break;
  }
  TVarName_18 = parse_tree__parse_tree_out_term__mercury_var_to_string_vs_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_7, (MR_Integer) 1, TVar_15);
  Var_25 = mercury__string__f_43_43_2_f_0(DomainName_17, (MR_String) "}\n");
  Var_23 = mercury__string__f_43_43_2_f_0((MR_String) " -> {", Var_25);
  Var_22 = mercury__string__f_43_43_2_f_0(TVarName_18, Var_23);
  Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "  ", Var_22);
  mercury__io__print_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OutputStream_6, ((MR_Box) (Var_20)));
}

static void MR_CALL 
check_hlds__old_type_constraints__conj_constraint_get_context_2_p_0(
  MR_Word Constraint_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, Constraint_3, 2))));
}

static void MR_CALL 
check_hlds__old_type_constraints__bracket_context_to_string_2_p_0(
  MR_Word Context_3,
  MR_String * String_4)
{
  MR_String FileName_5;
  MR_String LineNumber_6;
  MR_Integer Var_7;
  MR_String Var_9;
  MR_String Var_10;
  MR_String Var_12;

  FileName_5 = mercury__term_context__context_file_1_f_0(Context_3);
  Var_7 = mercury__term_context__context_line_1_f_0(Context_3);
  LineNumber_6 = mercury__string__int_to_string_1_f_0(Var_7);
  Var_12 = mercury__string__f_43_43_2_f_0(LineNumber_6, (MR_String) "]");
  Var_10 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_12);
  Var_9 = mercury__string__f_43_43_2_f_0(FileName_5, Var_10);
  *String_4 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_9);
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__next_min_unsat_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__old_type_constraints__IntroducedFrom__pred__min_unsat_constraints__2193__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__next_min_unsat_8_p_0_4(
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
  MR_Word conv5_STATE_VARIABLE_D_15;
  MR_Word conv4_STATE_VARIABLE_P_17;
  MR_Word conv3_STATE_VARIABLE_MinUnsats_19;

  check_hlds__old_type_constraints__next_min_unsat_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_D_15, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_P_17, ((MR_Word) (wrapper_arg_6)), &conv3_STATE_VARIABLE_MinUnsats_19);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_D_15));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_P_17));
  *wrapper_arg_7 = ((MR_Box) (conv3_STATE_VARIABLE_MinUnsats_19));
}

static void MR_CALL 
check_hlds__old_type_constraints__next_min_unsat_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_61;

  check_hlds__old_type_constraints__IntroducedFrom__pred__min_unsat_constraints__2182__3_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__4_61);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_61));
}

static void MR_CALL 
check_hlds__old_type_constraints__next_min_unsat_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_65;

  check_hlds__old_type_constraints__IntroducedFrom__pred__min_unsat_constraints__2182__2_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_65);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_65));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__next_min_unsat_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__old_type_constraints__IntroducedFrom__pred__min_unsat_constraints__2182__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__next_min_unsat_8_p_0(
  MR_Word Constraint_9,
  MR_Integer C_10,
  MR_Word STATE_VARIABLE_D_0_14,
  MR_Word * STATE_VARIABLE_D_15,
  MR_Word STATE_VARIABLE_P_0_16,
  MR_Word * STATE_VARIABLE_P_17,
  MR_Word STATE_VARIABLE_MinUnsats_0_18,
  MR_Word * STATE_VARIABLE_MinUnsats_19)
{
  MR_bool succeeded;
  MR_Word VarMap_21;
  MR_Word ConstraintMap_23;
  MR_Word VarConstraints0_24;
  MR_Word TVarSet_25;
  MR_Word Union_27;
  MR_Word VarConstraints_28;
  MR_Word UnionConstraintMap_29;
  MR_Word Constraint_30;
  MR_Word Success_33;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Box conv2_VarConstraints_28;

  mercury__set__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (C_10)), STATE_VARIABLE_P_0_16, STATE_VARIABLE_P_17);
  VarMap_21 = ((MR_Word) ((MR_hl_field(0, Constraint_9, 0))));
  ConstraintMap_23 = ((MR_Word) ((MR_hl_field(0, Constraint_9, 2))));
  VarConstraints0_24 = ((MR_Word) ((MR_hl_field(0, Constraint_9, 3))));
  TVarSet_25 = ((MR_Word) ((MR_hl_field(0, Constraint_9, 4))));
  mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), *STATE_VARIABLE_P_17, STATE_VARIABLE_D_0_14, &Union_27);
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[21]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (check_hlds__old_type_constraints__next_min_unsat_8_p_0_1));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_39, 3) = ((MR_Box) (Union_27));
  }
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[21]));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) (check_hlds__old_type_constraints__next_min_unsat_8_p_0_2));
    MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_38, 3) = ((MR_Box) (Var_39));
  }
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[9]));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (check_hlds__old_type_constraints__next_min_unsat_8_p_0_3));
    MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_36, 3) = ((MR_Box) (Var_38));
  }
  Var_37 = mercury__map__keys_1_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[3]), VarConstraints0_24);
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[3]), Var_36, Var_37, ((MR_Box) (VarConstraints0_24)), &conv2_VarConstraints_28);
  VarConstraints_28 = ((MR_Word) (conv2_VarConstraints_28));
  mercury__map__select_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0), ConstraintMap_23, Union_27, &UnionConstraintMap_29);
  Var_40 = mercury__counter__init_1_f_0((MR_Integer) 0);
  {
    Constraint_30 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Constraint_30, 0) = ((MR_Box) (VarMap_21));
    MR_hl_field(0, Constraint_30, 1) = ((MR_Box) (Var_40));
    MR_hl_field(0, Constraint_30, 2) = ((MR_Box) (UnionConstraintMap_29));
    MR_hl_field(0, Constraint_30, 3) = ((MR_Box) (VarConstraints_28));
    MR_hl_field(0, Constraint_30, 4) = ((MR_Box) (TVarSet_25));
    MR_hl_field(0, Constraint_30, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_43 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0));
  Var_44 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0));
  check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0(TVarSet_25, VarConstraints_28, UnionConstraintMap_29, Var_43, Var_44, &Var_45);
  Success_33 = ((MR_Unsigned) ((MR_hl_field(0, Var_45, 2))) & (MR_Integer) 1);
  switch (Success_33) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NewD_34;
        MR_Word Var_46;
        MR_Word STATE_VARIABLE_MinUnsats_1_47;
        MR_Box conv8_NewD_34;
        MR_Box conv7_Var_35;
        MR_Box conv6_STATE_VARIABLE_MinUnsats_1_47;
        MR_Word Var_48;

        {
          Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_46, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_12[3]));
          MR_hl_field(0, Var_46, 1) = ((MR_Box) (check_hlds__old_type_constraints__next_min_unsat_8_p_0_4));
          MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_46, 3) = ((MR_Box) (Constraint_30));
        }
        mercury__set__fold3_8_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[11]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[11]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[13]), Var_46, *STATE_VARIABLE_P_17, ((MR_Box) (STATE_VARIABLE_D_0_14)), &conv8_NewD_34, ((MR_Box) (*STATE_VARIABLE_P_17)), &conv7_Var_35, ((MR_Box) (STATE_VARIABLE_MinUnsats_0_18)), &conv6_STATE_VARIABLE_MinUnsats_1_47);
        NewD_34 = ((MR_Word) (conv8_NewD_34));
        STATE_VARIABLE_MinUnsats_1_47 = ((MR_Word) (conv6_STATE_VARIABLE_MinUnsats_1_47));
        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_48, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[22]));
          MR_hl_field(0, Var_48, 1) = ((MR_Box) (check_hlds__old_type_constraints__next_min_unsat_8_p_0_5));
          MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_48, 3) = ((MR_Box) (NewD_34));
        }
        succeeded = mercury__list__all_false_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[11]), Var_48, STATE_VARIABLE_MinUnsats_1_47);
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_MinUnsats_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (NewD_34));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_MinUnsats_1_47));
          }
        else
          *STATE_VARIABLE_MinUnsats_19 = STATE_VARIABLE_MinUnsats_1_47;
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_MinUnsats_19 = STATE_VARIABLE_MinUnsats_0_18;
      break;
  }
  mercury__set__insert_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (C_10)), STATE_VARIABLE_D_0_14, STATE_VARIABLE_D_15);
}

static void MR_CALL 
check_hlds__old_type_constraints__error_from_one_min_set_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv2_String_4;

  check_hlds__old_type_constraints__bracket_context_to_string_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_String_4);
  *wrapper_arg_2 = ((MR_Box) (conv2_String_4));
}

static void MR_CALL 
check_hlds__old_type_constraints__error_from_one_min_set_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  check_hlds__old_type_constraints__conj_constraint_get_context_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__error_from_one_min_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_C_2;

  succeeded = check_hlds__old_type_constraints__get_first_disjunct_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_C_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_C_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__error_from_one_min_set_3_p_0(
  MR_Word ConstraintMap_4,
  MR_Word MinUnsatSet_5,
  MR_Word * Components_6)
{
  MR_bool succeeded;
  MR_Word MinUnsatList_7;
  MR_Word Constraints_8;
  MR_Word ConjConstraints_9;
  MR_Word Contexts_10;
  MR_Word ContextStrings_11;

  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), MinUnsatSet_5, &MinUnsatList_7);
  mercury__map__apply_to_list_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0), MinUnsatList_7, ConstraintMap_4, &Constraints_8);
  mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[68]), Constraints_8, &ConjConstraints_9);
  mercury__list__map_3_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[69]), ConjConstraints_9, &Contexts_10);
  mercury__list__map_3_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[70]), Contexts_10, &ContextStrings_11);
  *Components_6 = parse_tree__error_spec__fixed_list_to_pieces_2_f_0((MR_String) "and", ContextStrings_11);
}

static void MR_CALL 
check_hlds__old_type_constraints__diagnose_unsatisfiability_error_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_Components_6;

  check_hlds__old_type_constraints__error_from_one_min_set_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv10_Components_6);
  *wrapper_arg_2 = ((MR_Box) (conv10_Components_6));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__diagnose_unsatisfiability_error_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__old_type_constraints__IntroducedFrom__pred__min_unsat_constraints__2193__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__diagnose_unsatisfiability_error_5_p_0_4(
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
  MR_Word conv6_STATE_VARIABLE_D_15;
  MR_Word conv5_STATE_VARIABLE_P_17;
  MR_Word conv4_STATE_VARIABLE_MinUnsats_19;

  check_hlds__old_type_constraints__next_min_unsat_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_D_15, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_P_17, ((MR_Word) (wrapper_arg_6)), &conv4_STATE_VARIABLE_MinUnsats_19);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_D_15));
  *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_P_17));
  *wrapper_arg_7 = ((MR_Box) (conv4_STATE_VARIABLE_MinUnsats_19));
}

static void MR_CALL 
check_hlds__old_type_constraints__diagnose_unsatisfiability_error_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__4_61;

  check_hlds__old_type_constraints__IntroducedFrom__pred__min_unsat_constraints__2182__3_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__4_61);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_61));
}

static void MR_CALL 
check_hlds__old_type_constraints__diagnose_unsatisfiability_error_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_65;

  check_hlds__old_type_constraints__IntroducedFrom__pred__min_unsat_constraints__2182__2_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_65);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_65));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__diagnose_unsatisfiability_error_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__old_type_constraints__IntroducedFrom__pred__min_unsat_constraints__2182__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__diagnose_unsatisfiability_error_5_p_0(
  MR_Word TCInfo_6,
  MR_Word Context_7,
  MR_Word ProgVarSet_8,
  MR_Word TypeVar_9,
  MR_Word * Msg_10)
{
  MR_bool succeeded;
  MR_Word VarMap_11 = ((MR_Word) ((MR_hl_field(0, TCInfo_6, 0))));
  MR_Word ConstraintMap_13 = ((MR_Word) ((MR_hl_field(0, TCInfo_6, 2))));
  MR_Word VarConstraints_14 = ((MR_Word) ((MR_hl_field(0, TCInfo_6, 3))));
  MR_Word TVarSet_15 = ((MR_Word) ((MR_hl_field(0, TCInfo_6, 4))));
  MR_Word ConstraintIds_17;
  MR_Word ConstraintSet_18;
  MR_Word MinUnsats_19;
  MR_Word MinUnsatPieces_20;
  MR_Word ErrorLocations0_21;
  MR_Word ErrorLocations_22;
  MR_String VarName_24;
  MR_String VarKind_25;
  MR_Word Pieces_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_30;
  MR_Word Var_40;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_64;
  MR_Word VarMap_82;
  MR_Word ConstraintMap_84;
  MR_Word VarConstraints0_85;
  MR_Word TVarSet_86;
  MR_Word Union_88;
  MR_Word VarConstraints_89;
  MR_Word UnionConstraintMap_90;
  MR_Word Constraint_91;
  MR_Word Success_94;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_104;
  MR_Word Var_105;
  MR_Word Var_106;
  MR_Box conv0_ConstraintIds_17;
  MR_Box conv3_VarConstraints_89;
  MR_Word ProgVar_23;
  MR_Box conv11_ProgVar_23;

  mercury__map__lookup_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[3]), VarConstraints_14, ((MR_Box) (TypeVar_9)), &conv0_ConstraintIds_17);
  ConstraintIds_17 = ((MR_Word) (conv0_ConstraintIds_17));
  Var_27 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  mercury__set__insert_list_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ConstraintIds_17, Var_27, &ConstraintSet_18);
  Var_28 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  VarMap_82 = ((MR_Word) ((MR_hl_field(0, TCInfo_6, 0))));
  ConstraintMap_84 = ((MR_Word) ((MR_hl_field(0, TCInfo_6, 2))));
  VarConstraints0_85 = ((MR_Word) ((MR_hl_field(0, TCInfo_6, 3))));
  TVarSet_86 = ((MR_Word) ((MR_hl_field(0, TCInfo_6, 4))));
  mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ConstraintSet_18, Var_28, &Union_88);
  {
    Var_100 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_100, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[21]));
    MR_hl_field(0, Var_100, 1) = ((MR_Box) (check_hlds__old_type_constraints__diagnose_unsatisfiability_error_5_p_0_1));
    MR_hl_field(0, Var_100, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_100, 3) = ((MR_Box) (Union_88));
  }
  {
    Var_99 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_99, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[21]));
    MR_hl_field(0, Var_99, 1) = ((MR_Box) (check_hlds__old_type_constraints__diagnose_unsatisfiability_error_5_p_0_2));
    MR_hl_field(0, Var_99, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_99, 3) = ((MR_Box) (Var_100));
  }
  {
    Var_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_97, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[9]));
    MR_hl_field(0, Var_97, 1) = ((MR_Box) (check_hlds__old_type_constraints__diagnose_unsatisfiability_error_5_p_0_3));
    MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_97, 3) = ((MR_Box) (Var_99));
  }
  Var_98 = mercury__map__keys_1_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[3]), VarConstraints0_85);
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[3]), Var_97, Var_98, ((MR_Box) (VarConstraints0_85)), &conv3_VarConstraints_89);
  VarConstraints_89 = ((MR_Word) (conv3_VarConstraints_89));
  mercury__map__select_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0), ConstraintMap_84, Union_88, &UnionConstraintMap_90);
  Var_101 = mercury__counter__init_1_f_0((MR_Integer) 0);
  {
    Constraint_91 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Constraint_91, 0) = ((MR_Box) (VarMap_82));
    MR_hl_field(0, Constraint_91, 1) = ((MR_Box) (Var_101));
    MR_hl_field(0, Constraint_91, 2) = ((MR_Box) (UnionConstraintMap_90));
    MR_hl_field(0, Constraint_91, 3) = ((MR_Box) (VarConstraints_89));
    MR_hl_field(0, Constraint_91, 4) = ((MR_Box) (TVarSet_86));
    MR_hl_field(0, Constraint_91, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_104 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0));
  Var_105 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0));
  check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0(TVarSet_86, VarConstraints_89, UnionConstraintMap_90, Var_104, Var_105, &Var_106);
  Success_94 = ((MR_Unsigned) ((MR_hl_field(0, Var_106, 2))) & (MR_Integer) 1);
  switch (Success_94) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NewD_95;
        MR_Word Var_107;
        MR_Word STATE_VARIABLE_MinUnsats_1_108;
        MR_Box conv9_NewD_95;
        MR_Box conv8_Var_96;
        MR_Box conv7_STATE_VARIABLE_MinUnsats_1_108;
        MR_Word Var_109;

        {
          Var_107 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_107, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_12[3]));
          MR_hl_field(0, Var_107, 1) = ((MR_Box) (check_hlds__old_type_constraints__diagnose_unsatisfiability_error_5_p_0_4));
          MR_hl_field(0, Var_107, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_107, 3) = ((MR_Box) (Constraint_91));
        }
        mercury__set__fold3_8_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[11]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[11]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[13]), Var_107, ConstraintSet_18, ((MR_Box) (Var_28)), &conv9_NewD_95, ((MR_Box) (ConstraintSet_18)), &conv8_Var_96, ((MR_Box) ((MR_Unsigned) 0U)), &conv7_STATE_VARIABLE_MinUnsats_1_108);
        NewD_95 = ((MR_Word) (conv9_NewD_95));
        STATE_VARIABLE_MinUnsats_1_108 = ((MR_Word) (conv7_STATE_VARIABLE_MinUnsats_1_108));
        {
          Var_109 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_109, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[22]));
          MR_hl_field(0, Var_109, 1) = ((MR_Box) (check_hlds__old_type_constraints__diagnose_unsatisfiability_error_5_p_0_5));
          MR_hl_field(0, Var_109, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_109, 3) = ((MR_Box) (NewD_95));
        }
        succeeded = mercury__list__all_false_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[11]), Var_109, STATE_VARIABLE_MinUnsats_1_108);
        if (succeeded)
          {
            MinUnsats_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MinUnsats_19, 0) = ((MR_Box) (NewD_95));
            MR_hl_field(1, MinUnsats_19, 1) = ((MR_Box) (STATE_VARIABLE_MinUnsats_1_108));
          }
        else
          MinUnsats_19 = STATE_VARIABLE_MinUnsats_1_108;
      }
      break;
    case (MR_Integer) 1:
      MinUnsats_19 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[22]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (check_hlds__old_type_constraints__diagnose_unsatisfiability_error_5_p_0_6));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (ConstraintMap_13));
  }
  mercury__list__map_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[11]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[12]), Var_30, MinUnsats_19, &MinUnsatPieces_20);
  check_hlds__old_type_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_115_105_110_103_108_101_95_95_91_49_93_95_48_3_p_0(((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[59]))), MinUnsatPieces_20, &ErrorLocations0_21);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ErrorLocations0_21, &ErrorLocations_22);
  succeeded = mercury__bimap__reverse_search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), VarMap_11, &conv11_ProgVar_23, ((MR_Box) (TypeVar_9)));
  if (succeeded)
  {
    ProgVar_23 = ((MR_Word) (conv11_ProgVar_23));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    VarName_24 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_8, ProgVar_23);
    VarKind_25 = (MR_String) "program";
  }
  else
  {
    VarName_24 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_15, TypeVar_9);
    VarKind_25 = (MR_String) "type";
  }
  {
    Var_44 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_44, 0) = ((MR_Box) (VarKind_25));
  }
  {
    Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_49, 1) = ((MR_Box) (VarName_24));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[66])));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[61])));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_45));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[60])));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
  }
  Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ErrorLocations_22, (MR_Word) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[55])));
  Pieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_64);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Msg_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Context_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (Pieces_26));
  }
}

static void MR_CALL 
check_hlds__old_type_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_115_105_110_103_108_101_95_95_91_49_93_95_48_3_p_0(
  MR_Box E_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Box Var_19 = (MR_hl_field(1, HeadVar__2_2, 0));

    if ((Var_18 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = Var_19;
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    else
    {
      MR_Word Bs_13;
      MR_Word Var_15;
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, Var_18, 1))));
      MR_Box Var_34 = (MR_hl_field(1, Var_18, 0));

      if ((Var_33 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Bs_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Bs_13, 0) = Var_34;
          MR_hl_field(1, Bs_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      else
      {
        MR_Word Bs_29;
        MR_Word Var_31;

        check_hlds__old_type_constraints__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_122_105_112_95_115_105_110_103_108_101_95_95_91_49_93_95_48_3_p_0(E_1, Var_33, &Bs_29);
        {
          Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_31, 0) = E_1;
          MR_hl_field(1, Var_31, 1) = ((MR_Box) (Bs_29));
        }
        {
          Bs_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Bs_13, 0) = Var_34;
          MR_hl_field(1, Bs_13, 1) = ((MR_Box) (Var_31));
        }
      }
      {
        Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_15, 0) = E_1;
        MR_hl_field(1, Var_15, 1) = ((MR_Box) (Bs_13));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = Var_19;
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_15));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__pred_constraint_info_2_p_0(
  MR_Word Constraint_3,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Path_4;
  MR_Word PredId_5;
  MR_Word Var_8 = ((MR_Unsigned) ((MR_hl_field(0, Constraint_3, 1))) & (MR_Integer) 1);
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, Constraint_3, 3))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, Constraint_3, 4))));

  succeeded = (Var_8 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (Var_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Path_4 = ((MR_Word) ((MR_hl_field(1, Var_9, 0))));
      succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        PredId_5 = ((MR_Word) ((MR_hl_field(1, Var_10, 0))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__2_2 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Path_4));
          MR_hl_field(0, base, 1) = ((MR_Box) (PredId_5));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__ambig_pred_error_message_3_p_0(
  MR_Word PredEnv_4,
  MR_Word HeadVar__2_2,
  MR_Word * Component_7)
{
  MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Word PredTable_8;
  MR_Word PredInfo_9;
  MR_Word PredPieces_10;
  MR_Word Context_11;
  MR_Integer LineNumber_12;
  MR_String FileName_13;
  MR_Word Pieces_14;
  MR_Word Var_18;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Box conv0_PredInfo_9;

  hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredEnv_4, &PredTable_8);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_8, ((MR_Box) (PredId_6)), &conv0_PredInfo_9);
  PredInfo_9 = ((MR_Word) (conv0_PredInfo_9));
  PredPieces_10 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), PredInfo_9);
  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_9, &Context_11);
  LineNumber_12 = mercury__term_context__context_line_1_f_0(Context_11);
  FileName_13 = mercury__term_context__context_file_1_f_0(Context_11);
  {
    Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_22, 1) = ((MR_Box) (FileName_13));
  }
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (LineNumber_12));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[55])));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[22])));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_23));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[53])));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_21));
  }
  Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_10, Var_18);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *Component_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Pieces_14));
  }
}

static void MR_CALL 
check_hlds__old_type_constraints__diagnose_ambig_pred_error_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Component_7;

  check_hlds__old_type_constraints__ambig_pred_error_message_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Component_7);
  *wrapper_arg_2 = ((MR_Box) (conv2_Component_7));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__diagnose_ambig_pred_error_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  succeeded = check_hlds__old_type_constraints__pred_constraint_info_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__diagnose_ambig_pred_error_3_p_0(
  MR_Word PredEnv_4,
  MR_Word Conjunctions_5,
  MR_Word * Msg_6)
{
  MR_bool succeeded;
  MR_Word TypeInfo_29_29;
  MR_Word TypeCtorInfo_34_34;
  MR_Word HeadConjunct_7;
  MR_Word Context_8;
  MR_Word AmbigPredData_9;
  MR_Word Components_10;
  MR_Word Pieces_11;
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Box conv0_HeadConjunct_7;
  MR_Word TypeCtorInfo_30_30;
  MR_Word TypeCtorInfo_31_31;
  MR_Word Var_13;

  succeeded = mercury__list__head_2_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), Conjunctions_5, &conv0_HeadConjunct_7);
  if (succeeded)
  {
    HeadConjunct_7 = ((MR_Word) (conv0_HeadConjunct_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    Context_8 = ((MR_Word) ((MR_hl_field(0, HeadConjunct_7, 2))));
    Var_12 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[67]);
    TypeInfo_29_29 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[2]);
    mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), TypeInfo_29_29, Var_12, Conjunctions_5, &AmbigPredData_9);
    TypeCtorInfo_30_30 = (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0);
    TypeCtorInfo_31_31 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
    Var_13 = mercury__assoc_list__values_1_f_0(TypeCtorInfo_30_30, TypeCtorInfo_31_31, AmbigPredData_9);
    succeeded = mercury__list__all_same_1_p_0(TypeCtorInfo_31_31, Var_13);
    succeeded = !(succeeded);
    if (succeeded)
    {
      TypeCtorInfo_34_34 = (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_component_0);
      {
        Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_14, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[20]));
        MR_hl_field(0, Var_14, 1) = ((MR_Box) (check_hlds__old_type_constraints__diagnose_ambig_pred_error_3_p_0_2));
        MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_14, 3) = ((MR_Box) (PredEnv_4));
      }
      mercury__list__map_3_p_0(TypeInfo_29_29, TypeCtorInfo_34_34, Var_14, AmbigPredData_9, &Components_10);
      Var_15 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_3[2]);
      {
        Pieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_11, 0) = ((MR_Box) (Var_15));
        MR_hl_field(1, Pieces_11, 1) = ((MR_Box) (Components_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Msg_6 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (Context_8));
        MR_hl_field(2, base, 1) = ((MR_Box) (Pieces_11));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__merge_type_constraints2_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Word Var_7 = ((MR_Unsigned) ((MR_hl_field(0, A_4, 1))) & (MR_Integer) 1);
  MR_Word Var_8;

  succeeded = (Var_7 == (MR_Integer) 1);
  if (succeeded)
  {
    Var_8 = ((MR_Unsigned) ((MR_hl_field(0, B_5, 1))) & (MR_Integer) 1);
    succeeded = (Var_8 == (MR_Integer) 1);
  }
  if (succeeded)
    *Result_6 = A_4;
  else
  {
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, A_4, 0))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, A_4, 2))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, A_4, 3))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, A_4, 4))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_21));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_22));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__merge_type_constraints_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__old_type_constraints__still_active_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__merge_type_constraints_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_6;

  check_hlds__old_type_constraints__merge_type_constraints2_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
}

static void MR_CALL 
check_hlds__old_type_constraints__merge_type_constraints_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Word ConjsA_8;
  MR_Word ConjsB_11;
  MR_Word Conjs_13;
  MR_Word SingletonConj_14;
  MR_Word Var_18;

  if (((MR_tag((MR_Word) A_4)) == (MR_Integer) 0))
  {
    MR_Word ConjA_7 = (MR_Word) ((MR_Word) (A_4));

    {
      ConjsA_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ConjsA_8, 0) = ((MR_Box) (ConjA_7));
      MR_hl_field(1, ConjsA_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    ConjsA_8 = ((MR_Word) ((MR_hl_field(1, A_4, 0))));
  if (((MR_tag((MR_Word) B_5)) == (MR_Integer) 0))
  {
    MR_Word ConjB_10 = (MR_Word) ((MR_Word) (B_5));

    {
      ConjsB_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ConjsB_11, 0) = ((MR_Box) (ConjB_10));
      MR_hl_field(1, ConjsB_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    ConjsB_11 = ((MR_Word) ((MR_hl_field(1, B_5, 0))));
  mercury__list__map_corresponding_4_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[65]), ConjsA_8, ConjsB_11, &Conjs_13);
  succeeded = (Conjs_13 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    SingletonConj_14 = ((MR_Word) ((MR_hl_field(1, Conjs_13, 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(1, Conjs_13, 1))));
    succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    *Result_6 = (MR_Word) ((MR_Word) (SingletonConj_14));
  else
  {
    MR_Word SingletonConj_24;
    MR_Word TypeInfo_31_31;
    MR_Word Var_20;
    MR_Word Var_30;

    mercury__list__filter_3_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[66]), Conjs_13, &Var_20);
    succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SingletonConj_24 = ((MR_Word) ((MR_hl_field(1, Var_20, 0))));
      Var_30 = ((MR_Word) ((MR_hl_field(1, Var_20, 1))));
      TypeInfo_31_31 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_30)));
    }
    if (succeeded)
    {
      MR_Word Var_22;

      {
        Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_22, 0) = ((MR_Box) (SingletonConj_24));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Conjs_13));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_22));
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Conjs_13));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
  }
}

static void MR_CALL 
check_hlds__old_type_constraints__get_constraints_from_conj_2_p_0(
  MR_Word Conj_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, Conj_3, 0))));
}

static void MR_CALL 
check_hlds__old_type_constraints__add_unused_prog_var_4_p_0(
  MR_Word TCInfo_5,
  MR_Word Var_6,
  MR_Word STATE_VARIABLE_VarTypes_0_9,
  MR_Word * STATE_VARIABLE_VarTypes_10)
{
  MR_bool succeeded;

  succeeded = parse_tree__vartypes__is_in_vartypes_2_p_0(STATE_VARIABLE_VarTypes_0_9, Var_6);
  if (succeeded)
    *STATE_VARIABLE_VarTypes_10 = STATE_VARIABLE_VarTypes_0_9;
  else
  {
    MR_Word TVar_8;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, TCInfo_5, 0))));
    MR_Word Var_12;
    MR_Box conv0_TVar_8;

    mercury__bimap__lookup_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), Var_11, ((MR_Box) (Var_6)), &conv0_TVar_8);
    TVar_8 = ((MR_Word) (conv0_TVar_8));
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (TVar_8));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__vartypes__add_var_type_4_p_0(Var_6, Var_12, STATE_VARIABLE_VarTypes_0_9, STATE_VARIABLE_VarTypes_10);
  }
}

static MR_Word MR_CALL 
check_hlds__old_type_constraints__to_singleton_type_domain_1_f_0(
  MR_Word Type_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__2_2, 0) = ((MR_Box) (Type_3));
  }
  return HeadVar__2_2;
}

static void MR_CALL 
check_hlds__old_type_constraints__domain_size_compare_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Result_8)
{
  MR_bool succeeded;
  MR_Word A_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word B_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Word D1_9;
  MR_Word D2_10;

  succeeded = ((MR_tag((MR_Word) A_5)) == (MR_Integer) 1);
  if (succeeded)
  {
    D1_9 = ((MR_Word) ((MR_hl_field(1, A_5, 0))));
    succeeded = ((MR_tag((MR_Word) B_7)) == (MR_Integer) 1);
    if (succeeded)
      D2_10 = ((MR_Word) ((MR_hl_field(1, B_7, 0))));
  }
  if (succeeded)
  {
    MR_Integer L1_11;
    MR_Integer L2_12;
    MR_Word Var_13;
    MR_Word Var_14;

    Var_13 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), D1_9);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_13, &L1_11);
    Var_14 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), D2_10);
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_14, &L2_12);
    succeeded = (L1_11 < L2_12);
    if (succeeded)
      *Result_8 = (MR_Integer) 1;
    else
    {
      succeeded = (L1_11 > L2_12);
      if (succeeded)
        *Result_8 = (MR_Integer) 2;
      else
        *Result_8 = (MR_Integer) 0;
    }
  }
  else
    *Result_8 = (MR_Integer) 0;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__has_ambiguous_domain_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_7_7;
  MR_Word Dom_3;
  MR_Integer Size_4;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Integer Var_6;

  succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 1);
  if (succeeded)
  {
    Dom_3 = ((MR_Word) ((MR_hl_field(1, Var_5, 0))));
    TypeCtorInfo_7_7 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    mercury__set__count_2_p_0(TypeCtorInfo_7_7, Dom_3, &Size_4);
    Var_6 = (MR_Integer) 1;
    succeeded = (Size_4 > Var_6);
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__constraint_has_one_solution_1_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_Type_2;

  succeeded = check_hlds__old_type_constraints__is_singleton_domain_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Type_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_Type_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__constraint_has_one_solution_1_p_0(
  MR_Word DomainMap_2)
{
  MR_bool succeeded;
  MR_Word Var_5;
  MR_Word Var_3;

  Var_5 = mercury__map__values_1_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), DomainMap_2);
  succeeded = mercury__list__map_3_p_2((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[64]), Var_5, &Var_3);
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__tvars_in_simple_constraint_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_Word TVar_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word Type_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word TVars_5;

  parse_tree__prog_type_scan__type_vars_in_type_2_p_0(Type_4, &TVars_5);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__2_2 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (TVar_3));
    MR_hl_field(1, base, 1) = ((MR_Box) (TVars_5));
  }
}

static void MR_CALL 
check_hlds__old_type_constraints__update_singleton_domain_3_p_0(
  MR_Word TVar_4,
  MR_Word STATE_VARIABLE_DomainMap_0_8,
  MR_Word * STATE_VARIABLE_DomainMap_9)
{
  MR_bool succeeded;
  MR_Word Type_7;
  MR_Word TypeCtorInfo_14_14;
  MR_Word Domain_6;
  MR_Word Var_10;
  MR_Box conv0_Var_10;
  MR_Box conv1_Type_7;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), STATE_VARIABLE_DomainMap_0_8, ((MR_Box) (TVar_4)), &conv0_Var_10);
  if (succeeded)
  {
    Var_10 = ((MR_Word) (conv0_Var_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_Integer) 1);
    if (succeeded)
    {
      Domain_6 = ((MR_Word) ((MR_hl_field(1, Var_10, 0))));
      TypeCtorInfo_14_14 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      succeeded = mercury__set__is_singleton_2_p_0(TypeCtorInfo_14_14, Domain_6, &conv1_Type_7);
      if (succeeded)
      {
        Type_7 = ((MR_Word) (conv1_Type_7));
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    MR_Word Var_11;

    {
      Var_11 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_11, 0) = ((MR_Box) (Type_7));
    }
    mercury__map__set_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVar_4)), ((MR_Box) (Var_11)), STATE_VARIABLE_DomainMap_0_8, STATE_VARIABLE_DomainMap_9);
  }
  else
    *STATE_VARIABLE_DomainMap_9 = STATE_VARIABLE_DomainMap_0_8;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__is_singleton_domain_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Type_2)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word Domain_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Box conv0_Type_2;

    succeeded = mercury__set__is_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Domain_4, &conv0_Type_2);
    if (succeeded)
    {
      *Type_2 = ((MR_Word) (conv0_Type_2));
      succeeded = MR_TRUE;
    }
  }
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 2))
  {
    *Type_2 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__has_singleton_domain_2_p_0(
  MR_Word DomainMap_3,
  MR_Word TVar_4)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_10_10;
  MR_Word Domain_5;
  MR_Word Var_7;
  MR_Box conv0_Var_7;
  MR_Box conv1_Var_6;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), DomainMap_3, ((MR_Box) (TVar_4)), &conv0_Var_7);
  if (succeeded)
  {
    Var_7 = ((MR_Word) (conv0_Var_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 1);
    if (succeeded)
    {
      Domain_5 = ((MR_Word) ((MR_hl_field(1, Var_7, 0))));
      TypeCtorInfo_10_10 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      succeeded = mercury__set__is_singleton_2_p_0(TypeCtorInfo_10_10, Domain_5, &conv1_Var_6);
      if (succeeded)
        succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__has_empty_domain_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * TVar_3)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_6_6;
  MR_Word Domain_4;
  MR_Word Var_5;

  *TVar_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  Var_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 1);
  if (succeeded)
  {
    Domain_4 = ((MR_Word) ((MR_hl_field(1, Var_5, 0))));
    TypeCtorInfo_6_6 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_6_6, Domain_4);
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__domain_map_unchanged_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_Type_6;

  succeeded = check_hlds__old_type_constraints__unify_types_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Type_6);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv1_Type_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__domain_map_unchanged_2_p_0(
  MR_Word DomainMap_3,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TVar_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Word Domain_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Word Domain0_6;
  MR_Box conv0_Domain0_6;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), DomainMap_3, ((MR_Box) (TVar_4)), &conv0_Domain0_6);
  if (succeeded)
  {
    Domain0_6 = ((MR_Word) (conv0_Domain0_6));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    switch (MR_tag((MR_Word) Domain0_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        succeeded = (Domain_5 == (MR_Word) ((MR_Unsigned) 0U));
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_13_19;
          MR_Word TypeCtorInfo_17_20;
          MR_Word A_12 = ((MR_Word) ((MR_hl_field(1, Domain0_6, 0))));
          MR_Word B_13;
          MR_Integer C_14;
          MR_Word Var_16;
          MR_Word Var_17;
          MR_Word Var_18;
          MR_Integer Var_21;
          MR_Word Var_15;

          succeeded = ((MR_tag((MR_Word) Domain_5)) == (MR_Integer) 1);
          if (succeeded)
          {
            B_13 = ((MR_Word) ((MR_hl_field(1, Domain_5, 0))));
            TypeCtorInfo_13_19 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
            mercury__set__count_2_p_0(TypeCtorInfo_13_19, A_12, &C_14);
            mercury__set__count_2_p_0(TypeCtorInfo_13_19, B_13, &Var_21);
            succeeded = (C_14 == Var_21);
            if (succeeded)
            {
              Var_16 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[63]);
              TypeCtorInfo_17_20 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
              Var_17 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_17_20, A_12);
              Var_18 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_17_20, B_13);
              succeeded = mercury__list__map_corresponding_4_p_1(TypeCtorInfo_17_20, TypeCtorInfo_17_20, TypeCtorInfo_17_20, Var_16, Var_17, Var_18, &Var_15);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_9 = ((MR_Word) ((MR_hl_field(2, Domain0_6, 0))));
          MR_Word B_10;
          MR_Word Var_11;

          succeeded = ((MR_tag((MR_Word) Domain_5)) == (MR_Integer) 2);
          if (succeeded)
          {
            B_10 = ((MR_Word) ((MR_hl_field(2, Domain_5, 0))));
            succeeded = check_hlds__old_type_constraints__unify_types_3_p_0(A_9, B_10, &Var_11);
          }
        }
        break;
    }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__non_empty_domain_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 1:
      {
        MR_Word D_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

        succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), D_3);
      }
      break;
    case (MR_Integer) 2:
      succeeded = MR_TRUE;
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__still_active_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word Var_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);

  succeeded = (Var_6 == (MR_Integer) 0);
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__type_domain_union_3_p_0(
  MR_Word DomainA_4,
  MR_Word DomainB_5,
  MR_Word * Domain_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) DomainA_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Domain_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, DomainA_4, 0))));

        switch (MR_tag((MR_Word) DomainB_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Domain_6 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Word Types_13;
              MR_Word TypesB_22 = ((MR_Word) ((MR_hl_field(1, DomainB_5, 0))));

              mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_30, TypesB_22, &Types_13);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Domain_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Types_13));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeB_21 = ((MR_Word) ((MR_hl_field(2, DomainB_5, 0))));

              succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_30);
              if (succeeded)
                *Domain_6 = DomainB_5;
              else
              {
                MR_Word Var_19;

                Var_19 = mercury__set__insert_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_30, ((MR_Box) (TypeB_21)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Domain_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_19));
                }
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_31 = ((MR_Word) ((MR_hl_field(2, DomainA_4, 0))));

        switch (MR_tag((MR_Word) DomainB_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Domain_6 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypesB_10 = ((MR_Word) ((MR_hl_field(1, DomainB_5, 0))));

              succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypesB_10);
              if (succeeded)
                *Domain_6 = DomainA_4;
              else
              {
                MR_Word Var_18;

                Var_18 = mercury__set__insert_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypesB_10, ((MR_Box) (Var_31)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Domain_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_18));
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeB_9 = ((MR_Word) ((MR_hl_field(2, DomainB_5, 0))));

              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Var_31, TypeB_9);
              if (succeeded)
                *Domain_6 = DomainA_4;
              else
              {
                MR_Word Var_14;
                MR_Word Var_15;
                MR_Word Var_16;

                {
                  Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_16, 0) = ((MR_Box) (TypeB_9));
                  MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_15, 0) = ((MR_Box) (Var_31));
                  MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_16));
                }
                Var_14 = mercury__set__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_15);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Domain_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_14));
                }
              }
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
check_hlds__old_type_constraints__find_type_of_tvar_3_p_0(
  MR_Word DomainMap_4,
  MR_Word STATE_VARIABLE_Type_0_9,
  MR_Word * STATE_VARIABLE_Type_10)
{
  MR_bool succeeded = ((MR_tag((MR_Word) STATE_VARIABLE_Type_0_9)) == (MR_Integer) 0);
  MR_Word KnownType_8;
  MR_Word TypeInfo_12_12;
  MR_Word TypeCtorInfo_13_13;
  MR_Word TVar_6;
  MR_Word Var_11;
  MR_Box conv0_Var_11;

  if (succeeded)
  {
    TVar_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Type_0_9, 0))));
    TypeInfo_12_12 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]);
    TypeCtorInfo_13_13 = (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0);
    succeeded = mercury__map__search_3_p_0(TypeInfo_12_12, TypeCtorInfo_13_13, DomainMap_4, ((MR_Box) (TVar_6)), &conv0_Var_11);
    if (succeeded)
    {
      Var_11 = ((MR_Word) (conv0_Var_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 2);
      if (succeeded)
        KnownType_8 = ((MR_Word) ((MR_hl_field(2, Var_11, 0))));
    }
  }
  if (succeeded)
    *STATE_VARIABLE_Type_10 = KnownType_8;
  else
    *STATE_VARIABLE_Type_10 = STATE_VARIABLE_Type_0_9;
}

static void MR_CALL 
check_hlds__old_type_constraints__update_replacement_map_5_p_0(
  MR_Word VarMap_6,
  MR_Word Replacement_7,
  MR_Word OldVar_8,
  MR_Word STATE_VARIABLE_ReplacementMap_0_11,
  MR_Word * STATE_VARIABLE_ReplacementMap_12)
{
  MR_bool succeeded;
  MR_Word ProgVar_10;
  MR_Box conv0_ProgVar_10;

  succeeded = mercury__bimap__reverse_search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), VarMap_6, &conv0_ProgVar_10, ((MR_Box) (OldVar_8)));
  if (succeeded)
  {
    ProgVar_10 = ((MR_Word) (conv0_ProgVar_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    mercury__map__set_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), ((MR_Box) (ProgVar_10)), ((MR_Box) (Replacement_7)), STATE_VARIABLE_ReplacementMap_0_11, STATE_VARIABLE_ReplacementMap_12);
  else
    *STATE_VARIABLE_ReplacementMap_12 = STATE_VARIABLE_ReplacementMap_0_11;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__to_simple_constraints_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word Conj_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));

    *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, Conj_3, 0))));
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Conj_5;
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));

    succeeded = (Var_6 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Conj_5 = ((MR_Word) ((MR_hl_field(1, Var_6, 0))));
      *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, Conj_5, 0))));
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__find_unified_var_3_p_0(
  MR_Word Target_4,
  MR_Word HeadVar__2_2,
  MR_Word * Unified_8)
{
  MR_bool succeeded;
  MR_Word LHS_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Word RHS_6;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Word Unified0_9;
  MR_Word TypeInfo_12_12;

  succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_Integer) 0);
  if (succeeded)
  {
    RHS_6 = ((MR_Word) ((MR_hl_field(0, Var_10, 0))));
    TypeInfo_12_12 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (LHS_5)), ((MR_Box) (Target_4)));
    if (succeeded)
    {
      Unified0_9 = RHS_6;
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *Unified_8 = Unified0_9;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), ((MR_Box) (RHS_6)), ((MR_Box) (Target_4)));
      if (succeeded)
      {
        *Unified_8 = LHS_5;
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__unify_equal_tvars_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_HeadVar__3_3;

  parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv12_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__old_type_constraints__unify_equal_tvars_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_ReplacementMap_35;
  MR_Word conv6_STATE_VARIABLE_DomainMap_37;

  check_hlds__old_type_constraints__unify_equal_tvars_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_ReplacementMap_35, ((MR_Word) (wrapper_arg_4)), &conv6_STATE_VARIABLE_DomainMap_37);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_ReplacementMap_35));
  *wrapper_arg_5 = ((MR_Box) (conv6_STATE_VARIABLE_DomainMap_37));
}

static void MR_CALL 
check_hlds__old_type_constraints__unify_equal_tvars_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_ReplacementMap_12;

  check_hlds__old_type_constraints__update_replacement_map_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ReplacementMap_12);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ReplacementMap_12));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__unify_equal_tvars_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__old_type_constraints__IntroducedFrom__pred__unify_equal_tvars__1550__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__unify_equal_tvars_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv3_Unified_8;

  succeeded = check_hlds__old_type_constraints__find_unified_var_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_Unified_8);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv3_Unified_8));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__unify_equal_tvars_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  succeeded = check_hlds__old_type_constraints__to_simple_constraints_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__unify_equal_tvars_8_p_0(
  MR_Word TCInfo_9,
  MR_Word Replaced_10,
  MR_Word Replacement_11,
  MR_Word Target_12,
  MR_Word STATE_VARIABLE_ReplacementMap_0_34,
  MR_Word * STATE_VARIABLE_ReplacementMap_35,
  MR_Word STATE_VARIABLE_DomainMap_0_36,
  MR_Word * STATE_VARIABLE_DomainMap_37)
{
  MR_bool succeeded;
  MR_Word VarMap_15 = ((MR_Word) ((MR_hl_field(0, TCInfo_9, 0))));
  MR_Word ConstraintMap_17 = ((MR_Word) ((MR_hl_field(0, TCInfo_9, 2))));
  MR_Word VarConstraints_18 = ((MR_Word) ((MR_hl_field(0, TCInfo_9, 3))));
  MR_Word Renaming_21;
  MR_Word ConstraintIds_22;
  MR_Word TypeInfo_55_55;
  MR_Word Var_83;
  MR_Box conv0_Var_83;
  MR_Integer CastX_90;
  MR_Integer CastY_91;
  MR_Box conv1_ConstraintIds_22;

  Renaming_21 = mercury__map__singleton_2_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), ((MR_Box) (Target_12)), ((MR_Box) (Replacement_11)));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), STATE_VARIABLE_DomainMap_0_36, ((MR_Box) (Target_12)), &conv0_Var_83);
  if (succeeded)
  {
    Var_83 = ((MR_Word) (conv0_Var_83));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    CastX_90 = (MR_Integer) ((MR_Word) ((MR_Unsigned) 0U));
    CastY_91 = (MR_Integer) (Var_83);
    succeeded = (CastX_90 == CastY_91);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer CastY_89 = (MR_Integer) (Var_83);

      succeeded = (CastY_89 == (MR_Integer) ((MR_Word) ((MR_Unsigned) 0U)));
    }
    if (succeeded)
    {
      TypeInfo_55_55 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[3]);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), TypeInfo_55_55, VarConstraints_18, ((MR_Box) (Target_12)), &conv1_ConstraintIds_22);
      if (succeeded)
      {
        ConstraintIds_22 = ((MR_Word) (conv1_ConstraintIds_22));
        succeeded = MR_TRUE;
      }
    }
  }
  if (succeeded)
  {
    MR_Word Constraints_23;
    MR_Word SimpleConstraints0_24;
    MR_Word SimpleConstraints_25;
    MR_Word UnifiedVars0_26;
    MR_Word UnifiedVars_28;
    MR_Word Replaced1_29;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word STATE_VARIABLE_ReplacementMap_1_43;
    MR_Word Var_44;
    MR_Word Var_27;
    MR_Box conv5_STATE_VARIABLE_ReplacementMap_1_43;
    MR_Box conv9_STATE_VARIABLE_ReplacementMap_35;
    MR_Box conv8_STATE_VARIABLE_DomainMap_37;

    mercury__map__apply_to_list_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0), ConstraintIds_22, ConstraintMap_17, &Constraints_23);
    mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[10]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[62]), Constraints_23, &SimpleConstraints0_24);
    mercury__list__condense_2_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0), SimpleConstraints0_24, &SimpleConstraints_25);
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[17]));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) (check_hlds__old_type_constraints__unify_equal_tvars_8_p_0_2));
      MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_40, 3) = ((MR_Box) (Target_12));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), Var_40, SimpleConstraints_25, &UnifiedVars0_26);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[19]));
      MR_hl_field(0, Var_41, 1) = ((MR_Box) (check_hlds__old_type_constraints__unify_equal_tvars_8_p_0_3));
      MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_41, 3) = ((MR_Box) (Replaced_10));
    }
    mercury__list__filter_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), Var_41, UnifiedVars0_26, &Var_27, &UnifiedVars_28);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_11[2]));
      MR_hl_field(0, Var_42, 1) = ((MR_Box) (check_hlds__old_type_constraints__unify_equal_tvars_8_p_0_4));
      MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_42, 3) = ((MR_Box) (VarMap_15));
      MR_hl_field(0, Var_42, 4) = ((MR_Box) (Replacement_11));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[0]), Var_42, UnifiedVars_28, ((MR_Box) (STATE_VARIABLE_ReplacementMap_0_34)), &conv5_STATE_VARIABLE_ReplacementMap_1_43);
    STATE_VARIABLE_ReplacementMap_1_43 = ((MR_Word) (conv5_STATE_VARIABLE_ReplacementMap_1_43));
    mercury__set__insert_list_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), UnifiedVars_28, Replaced_10, &Replaced1_29);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_44, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_12[0]));
      MR_hl_field(0, Var_44, 1) = ((MR_Box) (check_hlds__old_type_constraints__unify_equal_tvars_8_p_0_5));
      MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_44, 3) = ((MR_Box) (TCInfo_9));
      MR_hl_field(0, Var_44, 4) = ((MR_Box) (Replaced1_29));
      MR_hl_field(0, Var_44, 5) = ((MR_Box) (Replacement_11));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[0]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[1]), Var_44, UnifiedVars_28, ((MR_Box) (STATE_VARIABLE_ReplacementMap_1_43)), &conv9_STATE_VARIABLE_ReplacementMap_35, ((MR_Box) (STATE_VARIABLE_DomainMap_0_36)), &conv8_STATE_VARIABLE_DomainMap_37);
    *STATE_VARIABLE_ReplacementMap_35 = ((MR_Word) (conv9_STATE_VARIABLE_ReplacementMap_35));
    *STATE_VARIABLE_DomainMap_37 = ((MR_Word) (conv8_STATE_VARIABLE_DomainMap_37));
  }
  else
  {
    MR_Word Type0_30;
    MR_Word Var_47;
    MR_Box conv10_Var_47;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), STATE_VARIABLE_DomainMap_0_36, ((MR_Box) (Target_12)), &conv10_Var_47);
    if (succeeded)
    {
      Var_47 = ((MR_Word) (conv10_Var_47));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 2);
      if (succeeded)
        Type0_30 = ((MR_Word) ((MR_hl_field(2, Var_47, 0))));
    }
    if (succeeded)
    {
      MR_Word Type_31;
      MR_Word Var_48;

      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(Renaming_21, Type0_30, &Type_31);
      {
        Var_48 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_48, 0) = ((MR_Box) (Type_31));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (Target_12)), ((MR_Box) (Var_48)), STATE_VARIABLE_DomainMap_0_36, STATE_VARIABLE_DomainMap_37);
    }
    else
    {
      MR_Word Types0_32;
      MR_Word Var_50;
      MR_Box conv11_Var_50;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), STATE_VARIABLE_DomainMap_0_36, ((MR_Box) (Target_12)), &conv11_Var_50);
      if (succeeded)
      {
        Var_50 = ((MR_Word) (conv11_Var_50));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_Integer) 1);
        if (succeeded)
          Types0_32 = ((MR_Word) ((MR_hl_field(1, Var_50, 0))));
      }
      if (succeeded)
      {
        MR_Word Types_33;
        MR_Word Var_51;
        MR_Word Var_52;

        {
          Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_51, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[18]));
          MR_hl_field(0, Var_51, 1) = ((MR_Box) (check_hlds__old_type_constraints__unify_equal_tvars_8_p_0_6));
          MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_51, 3) = ((MR_Box) (Renaming_21));
        }
        mercury__set__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_51, Types0_32, &Types_33);
        {
          Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_52, 0) = ((MR_Box) (Types_33));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (Target_12)), ((MR_Box) (Var_52)), STATE_VARIABLE_DomainMap_0_36, STATE_VARIABLE_DomainMap_37);
      }
      else
        *STATE_VARIABLE_DomainMap_37 = STATE_VARIABLE_DomainMap_0_36;
    }
    *STATE_VARIABLE_ReplacementMap_35 = STATE_VARIABLE_ReplacementMap_0_34;
  }
}

static void MR_CALL 
check_hlds__old_type_constraints__simple_find_domain_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_Type_10;

  check_hlds__old_type_constraints__find_type_of_tvar_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv7_STATE_VARIABLE_Type_10);
  *wrapper_arg_2 = ((MR_Box) (conv7_STATE_VARIABLE_Type_10));
}

static void MR_CALL 
check_hlds__old_type_constraints__simple_find_domain_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_Type_10;

  check_hlds__old_type_constraints__find_type_of_tvar_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv5_STATE_VARIABLE_Type_10);
  *wrapper_arg_2 = ((MR_Box) (conv5_STATE_VARIABLE_Type_10));
}

static void MR_CALL 
check_hlds__old_type_constraints__simple_find_domain_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Type_10;

  check_hlds__old_type_constraints__find_type_of_tvar_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_Type_10);
  *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_Type_10));
}

static void MR_CALL 
check_hlds__old_type_constraints__simple_find_domain_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Type_10;

  check_hlds__old_type_constraints__find_type_of_tvar_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Type_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Type_10));
}

static void MR_CALL 
check_hlds__old_type_constraints__simple_find_domain_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_DomainMap_0_25,
  MR_Word * STATE_VARIABLE_DomainMap_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TVarA_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word TypeA_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TypeA_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TVarB_7 = ((MR_Word) ((MR_hl_field(0, TypeA_5, 0))));
          MR_Word DomainB_10;
          MR_Word STATE_VARIABLE_DomainMap_1_27;
          MR_Word DomainBPrime_9;
          MR_Box conv8_DomainBPrime_9;
          MR_Word DomainA_11;
          MR_Box conv9_DomainA_11;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), STATE_VARIABLE_DomainMap_0_25, ((MR_Box) (TVarB_7)), &conv8_DomainBPrime_9);
          if (succeeded)
          {
            DomainBPrime_9 = ((MR_Word) (conv8_DomainBPrime_9));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            DomainB_10 = DomainBPrime_9;
            STATE_VARIABLE_DomainMap_1_27 = STATE_VARIABLE_DomainMap_0_25;
          }
          else
          {
            DomainB_10 = (MR_Word) ((MR_Unsigned) 0U);
            mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVarB_7)), ((MR_Box) (DomainB_10)), STATE_VARIABLE_DomainMap_0_25, &STATE_VARIABLE_DomainMap_1_27);
          }
          succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), STATE_VARIABLE_DomainMap_1_27, ((MR_Box) (TVarA_4)), &conv9_DomainA_11);
          if (succeeded)
          {
            DomainA_11 = ((MR_Word) (conv9_DomainA_11));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word NewDomain_12;
            MR_Word STATE_VARIABLE_DomainMap_2_28;

            check_hlds__old_type_constraints__type_domain_intersect_3_p_0(DomainA_11, DomainB_10, &NewDomain_12);
            mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVarA_4)), ((MR_Box) (NewDomain_12)), STATE_VARIABLE_DomainMap_1_27, &STATE_VARIABLE_DomainMap_2_28);
            mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVarB_7)), ((MR_Box) (NewDomain_12)), STATE_VARIABLE_DomainMap_2_28, STATE_VARIABLE_DomainMap_26);
          }
          else
            mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVarA_4)), ((MR_Box) (DomainB_10)), STATE_VARIABLE_DomainMap_1_27, STATE_VARIABLE_DomainMap_26);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Name_13 = ((MR_Word) ((MR_hl_field(1, TypeA_5, 0))));
          MR_Word ArgTypes0_14 = ((MR_Word) ((MR_hl_field(1, TypeA_5, 1))));
          MR_Word Kind_15 = ((MR_Word) ((MR_hl_field(1, TypeA_5, 2))));
          MR_Word ArgTypes_16;
          MR_Word NewTypeA_17;
          MR_Word Var_31;
          MR_Word CurrDomain_96;
          MR_Word NewDomain_97;
          MR_Word Var_98;
          MR_Word Var_99;
          MR_Word CurrDomain0_95;
          MR_Box conv4_CurrDomain0_95;

          {
            Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_31, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[16]));
            MR_hl_field(0, Var_31, 1) = ((MR_Box) (check_hlds__old_type_constraints__simple_find_domain_3_p_0_2));
            MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_31, 3) = ((MR_Box) (STATE_VARIABLE_DomainMap_0_25));
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_31, ArgTypes0_14, &ArgTypes_16);
          {
            NewTypeA_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NewTypeA_17, 0) = ((MR_Box) (Name_13));
            MR_hl_field(1, NewTypeA_17, 1) = ((MR_Box) (ArgTypes_16));
            MR_hl_field(1, NewTypeA_17, 2) = ((MR_Box) (Kind_15));
          }
          succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), STATE_VARIABLE_DomainMap_0_25, ((MR_Box) (TVarA_4)), &conv4_CurrDomain0_95);
          if (succeeded)
          {
            CurrDomain0_95 = ((MR_Word) (conv4_CurrDomain0_95));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            CurrDomain_96 = CurrDomain0_95;
          else
            CurrDomain_96 = (MR_Word) ((MR_Unsigned) 0U);
          Var_99 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (NewTypeA_17)));
          {
            Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
          }
          check_hlds__old_type_constraints__type_domain_intersect_3_p_0(CurrDomain_96, Var_98, &NewDomain_97);
          mercury__map__set_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVarA_4)), ((MR_Box) (NewDomain_97)), STATE_VARIABLE_DomainMap_0_25, STATE_VARIABLE_DomainMap_26);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CurrDomain_86;
          MR_Word NewDomain_87;
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Word CurrDomain0_85;
          MR_Box conv2_CurrDomain0_85;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), STATE_VARIABLE_DomainMap_0_25, ((MR_Box) (TVarA_4)), &conv2_CurrDomain0_85);
          if (succeeded)
          {
            CurrDomain0_85 = ((MR_Word) (conv2_CurrDomain0_85));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            CurrDomain_86 = CurrDomain0_85;
          else
            CurrDomain_86 = (MR_Word) ((MR_Unsigned) 0U);
          Var_89 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (TypeA_5)));
          {
            Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
          }
          check_hlds__old_type_constraints__type_domain_intersect_3_p_0(CurrDomain_86, Var_88, &NewDomain_87);
          mercury__map__set_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVarA_4)), ((MR_Box) (NewDomain_87)), STATE_VARIABLE_DomainMap_0_25, STATE_VARIABLE_DomainMap_26);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TypeA_5, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_34;
              MR_Word ArgTypes0_42 = ((MR_Word) ((MR_hl_field(3, TypeA_5, 1))));
              MR_Word Kind_43 = ((MR_Word) ((MR_hl_field(3, TypeA_5, 2))));
              MR_Word ArgTypes_44;
              MR_Word NewTypeA_45;

              {
                Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_34, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[16]));
                MR_hl_field(0, Var_34, 1) = ((MR_Box) (check_hlds__old_type_constraints__simple_find_domain_3_p_0_4));
                MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_34, 3) = ((MR_Box) (STATE_VARIABLE_DomainMap_0_25));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_34, ArgTypes0_42, &ArgTypes_44);
              {
                NewTypeA_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, NewTypeA_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, NewTypeA_45, 1) = ((MR_Box) (ArgTypes_44));
                MR_hl_field(3, NewTypeA_45, 2) = ((MR_Box) (Kind_43));
              }
              check_hlds__old_type_constraints__restrict_domain_4_p_0(TVarA_4, NewTypeA_45, STATE_VARIABLE_DomainMap_0_25, STATE_VARIABLE_DomainMap_26);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_19 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_5, 1))) & (MR_Integer) 1);
              MR_Word HOInstInfo_20 = ((MR_Word) ((MR_hl_field(3, TypeA_5, 3))));
              MR_Word Purity_21 = ((MR_Unsigned) ((MR_hl_field(3, TypeA_5, 4))) & (MR_Integer) 3);
              MR_Word Var_36;
              MR_Word ArgTypes0_46 = ((MR_Word) ((MR_hl_field(3, TypeA_5, 2))));
              MR_Word ArgTypes_47;
              MR_Word NewTypeA_48;
              MR_Word CurrDomain_106;
              MR_Word NewDomain_107;
              MR_Word Var_108;
              MR_Word Var_109;
              MR_Word CurrDomain0_105;
              MR_Box conv6_CurrDomain0_105;

              {
                Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_36, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[16]));
                MR_hl_field(0, Var_36, 1) = ((MR_Box) (check_hlds__old_type_constraints__simple_find_domain_3_p_0_3));
                MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_36, 3) = ((MR_Box) (STATE_VARIABLE_DomainMap_0_25));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_36, ArgTypes0_46, &ArgTypes_47);
              {
                NewTypeA_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, NewTypeA_48, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, NewTypeA_48, 1) = (MR_Box) ((MR_Unsigned) (PorF_19));
                MR_hl_field(3, NewTypeA_48, 2) = ((MR_Box) (ArgTypes_47));
                MR_hl_field(3, NewTypeA_48, 3) = ((MR_Box) (HOInstInfo_20));
                MR_hl_field(3, NewTypeA_48, 4) = (MR_Box) ((MR_Unsigned) (Purity_21));
              }
              succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), STATE_VARIABLE_DomainMap_0_25, ((MR_Box) (TVarA_4)), &conv6_CurrDomain0_105);
              if (succeeded)
              {
                CurrDomain0_105 = ((MR_Word) (conv6_CurrDomain0_105));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                CurrDomain_106 = CurrDomain0_105;
              else
                CurrDomain_106 = (MR_Word) ((MR_Unsigned) 0U);
              Var_109 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (NewTypeA_48)));
              {
                Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_108, 0) = ((MR_Box) (Var_109));
              }
              check_hlds__old_type_constraints__type_domain_intersect_3_p_0(CurrDomain_106, Var_108, &NewDomain_107);
              mercury__map__set_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVarA_4)), ((MR_Box) (NewDomain_107)), STATE_VARIABLE_DomainMap_0_25, STATE_VARIABLE_DomainMap_26);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Return_22 = ((MR_Word) ((MR_hl_field(3, TypeA_5, 1))));
              MR_Word Var_38;
              MR_Word ArgTypes0_49 = ((MR_Word) ((MR_hl_field(3, TypeA_5, 2))));
              MR_Word Kind_50 = ((MR_Word) ((MR_hl_field(3, TypeA_5, 3))));
              MR_Word ArgTypes_51;
              MR_Word NewTypeA_52;
              MR_Word CurrDomain_76;
              MR_Word NewDomain_77;
              MR_Word Var_78;
              MR_Word Var_79;
              MR_Word CurrDomain0_75;
              MR_Box conv1_CurrDomain0_75;

              {
                Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_38, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[16]));
                MR_hl_field(0, Var_38, 1) = ((MR_Box) (check_hlds__old_type_constraints__simple_find_domain_3_p_0_1));
                MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_38, 3) = ((MR_Box) (STATE_VARIABLE_DomainMap_0_25));
              }
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_38, ArgTypes0_49, &ArgTypes_51);
              {
                NewTypeA_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, NewTypeA_52, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, NewTypeA_52, 1) = ((MR_Box) (Return_22));
                MR_hl_field(3, NewTypeA_52, 2) = ((MR_Box) (ArgTypes_51));
                MR_hl_field(3, NewTypeA_52, 3) = ((MR_Box) (Kind_50));
              }
              succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), STATE_VARIABLE_DomainMap_0_25, ((MR_Box) (TVarA_4)), &conv1_CurrDomain0_75);
              if (succeeded)
              {
                CurrDomain0_75 = ((MR_Word) (conv1_CurrDomain0_75));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                CurrDomain_76 = CurrDomain0_75;
              else
                CurrDomain_76 = (MR_Word) ((MR_Unsigned) 0U);
              Var_79 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (NewTypeA_52)));
              {
                Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
              }
              check_hlds__old_type_constraints__type_domain_intersect_3_p_0(CurrDomain_76, Var_78, &NewDomain_77);
              mercury__map__set_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVarA_4)), ((MR_Box) (NewDomain_77)), STATE_VARIABLE_DomainMap_0_25, STATE_VARIABLE_DomainMap_26);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word KindedTypeA_23 = ((MR_Word) ((MR_hl_field(3, TypeA_5, 1))));
              MR_Word Var_40;
              MR_Word next_value_of_HeadVar__1_1;

              {
                Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_40, 0) = ((MR_Box) (TVarA_4));
                MR_hl_field(0, Var_40, 1) = ((MR_Box) (KindedTypeA_23));
              }
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Var_40;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__old_type_constraints__restrict_domain_4_p_0(
  MR_Word TVar_5,
  MR_Word Type_6,
  MR_Word STATE_VARIABLE_DomainMap_0_11,
  MR_Word * STATE_VARIABLE_DomainMap_12)
{
  MR_bool succeeded;
  MR_Word CurrDomain_9;
  MR_Word NewDomain_10;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word CurrDomain0_8;
  MR_Box conv0_CurrDomain0_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), STATE_VARIABLE_DomainMap_0_11, ((MR_Box) (TVar_5)), &conv0_CurrDomain0_8);
  if (succeeded)
  {
    CurrDomain0_8 = ((MR_Word) (conv0_CurrDomain0_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    CurrDomain_9 = CurrDomain0_8;
  else
    CurrDomain_9 = (MR_Word) ((MR_Unsigned) 0U);
  Var_14 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (Type_6)));
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_14));
  }
  check_hlds__old_type_constraints__type_domain_intersect_3_p_0(CurrDomain_9, Var_13, &NewDomain_10);
  mercury__map__set_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (TVar_5)), ((MR_Box) (NewDomain_10)), STATE_VARIABLE_DomainMap_0_11, STATE_VARIABLE_DomainMap_12);
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__type_domain_intersect_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv2_Type_6;

  succeeded = check_hlds__old_type_constraints__unify_types_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Type_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv2_Type_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__type_domain_intersect_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_Type_6;

  succeeded = check_hlds__old_type_constraints__unify_types_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_Type_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__type_domain_intersect_3_p_0(
  MR_Word DomainA_4,
  MR_Word DomainB_5,
  MR_Word * Domain_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) DomainA_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Domain_6 = DomainB_5;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_38 = ((MR_Word) ((MR_hl_field(1, DomainA_4, 0))));

        switch (MR_tag((MR_Word) DomainB_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Domain_6 = DomainA_4;
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeListA_16;
              MR_Word TypeListB_17;
              MR_Word TypeList_18;
              MR_Word Types_19;
              MR_Word TypesB_28 = ((MR_Word) ((MR_hl_field(1, DomainB_5, 0))));

              mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_38, &TypeListA_16);
              mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypesB_28, &TypeListB_17);
              check_hlds__old_type_constraints__td_list_intersect_3_p_0(TypeListB_17, TypeListA_16, &TypeList_18);
              mercury__set__sorted_list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeList_18, &Types_19);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Domain_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Types_19));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_22;
              MR_Word TypeB_25 = ((MR_Word) ((MR_hl_field(2, DomainB_5, 0))));
              MR_Word UnifiedTypes_26;
              MR_Word SingletonType_24;
              MR_Box conv1_SingletonType_24;

              {
                Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_22, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[15]));
                MR_hl_field(0, Var_22, 1) = ((MR_Box) (check_hlds__old_type_constraints__type_domain_intersect_3_p_0_1));
                MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_22, 3) = ((MR_Box) (TypeB_25));
              }
              mercury__set__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_22, Var_38, &UnifiedTypes_26);
              succeeded = mercury__set__is_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), UnifiedTypes_26, &conv1_SingletonType_24);
              if (succeeded)
              {
                SingletonType_24 = ((MR_Word) (conv1_SingletonType_24));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Domain_6 = base;
                  MR_hl_field(2, base, 0) = ((MR_Box) (SingletonType_24));
                }
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Domain_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (UnifiedTypes_26));
                }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_39 = ((MR_Word) ((MR_hl_field(2, DomainA_4, 0))));

        switch (MR_tag((MR_Word) DomainB_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Domain_6 = DomainA_4;
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypesB_11 = ((MR_Word) ((MR_hl_field(1, DomainB_5, 0))));
              MR_Word UnifiedTypes_12;
              MR_Word Var_21;
              MR_Word SingletonType_13;
              MR_Box conv3_SingletonType_13;

              {
                Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_21, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[15]));
                MR_hl_field(0, Var_21, 1) = ((MR_Box) (check_hlds__old_type_constraints__type_domain_intersect_3_p_0_2));
                MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_21, 3) = ((MR_Box) (Var_39));
              }
              mercury__set__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_21, TypesB_11, &UnifiedTypes_12);
              succeeded = mercury__set__is_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), UnifiedTypes_12, &conv3_SingletonType_13);
              if (succeeded)
              {
                SingletonType_13 = ((MR_Word) (conv3_SingletonType_13));
                succeeded = MR_TRUE;
              }
              if (succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Domain_6 = base;
                  MR_hl_field(2, base, 0) = ((MR_Box) (SingletonType_13));
                }
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Domain_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (UnifiedTypes_12));
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeB_9 = ((MR_Word) ((MR_hl_field(2, DomainB_5, 0))));
              MR_Word Type_10;

              succeeded = check_hlds__old_type_constraints__unify_types_3_p_0(Var_39, TypeB_9, &Type_10);
              if (succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Domain_6 = base;
                  MR_hl_field(2, base, 0) = ((MR_Box) (Type_10));
                }
              else
              {
                MR_Word Var_20;

                Var_20 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Domain_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
                }
              }
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
check_hlds__old_type_constraints__td_list_intersect_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word B_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_Word Bs_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word AB_12;

        succeeded = check_hlds__old_type_constraints__unify_types_3_p_0(Var_20, B_9, &AB_12);
        if (succeeded)
        {
          MR_Word Cs0_13;

          check_hlds__old_type_constraints__td_list_intersect_3_p_0(Var_19, Bs_10, &Cs0_13);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (AB_12));
            MR_hl_field(1, base, 1) = ((MR_Box) (Cs0_13));
          }
        }
        else
        {
          MR_Word R_14;

          parse_tree__prog_data____Compare____mer_type_0_0(&R_14, Var_20, B_9);
          switch (R_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word next_value_of_HeadVar__1_1 = Var_19;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Cs0_17;

                check_hlds__old_type_constraints__td_list_intersect_3_p_0(Var_19, Bs_10, &Cs0_17);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
                  MR_hl_field(1, base, 1) = ((MR_Box) (Cs0_17));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word next_value_of_HeadVar__2_2 = Bs_10;

                // direct tailcall eliminated
                ;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                continue;
              }
              break;
          }
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__unify_types_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv3_Type_6;

  succeeded = check_hlds__old_type_constraints__unify_types_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Type_6);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv3_Type_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__unify_types_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv2_Type_6;

  succeeded = check_hlds__old_type_constraints__unify_types_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_Type_6);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv2_Type_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__unify_types_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_Type_6;

  succeeded = check_hlds__old_type_constraints__unify_types_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Type_6);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv1_Type_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__unify_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_Type_6;

  succeeded = check_hlds__old_type_constraints__unify_types_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Type_6);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_Type_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__unify_types_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * Type_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) B_5)) == (MR_Integer) 0);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *Type_6 = A_4;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = ((MR_tag((MR_Word) A_4)) == (MR_Integer) 0);
      if (succeeded)
      {
        *Type_6 = B_5;
        succeeded = MR_TRUE;
      }
      else
        switch (MR_tag((MR_Word) A_4)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeCtorInfo_46_46;
              MR_Word TypeCtorInfo_50_50;
              MR_Word Name_11 = ((MR_Word) ((MR_hl_field(1, A_4, 0))));
              MR_Word ArgsA_12 = ((MR_Word) ((MR_hl_field(1, A_4, 1))));
              MR_Word Kind_13 = ((MR_Word) ((MR_hl_field(1, A_4, 2))));
              MR_Word ArgsB_14;
              MR_Word Args_15;
              MR_Word Var_24;
              MR_Word Var_66;
              MR_Word Var_67;

              succeeded = ((MR_tag((MR_Word) B_5)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_66 = ((MR_Word) ((MR_hl_field(1, B_5, 0))));
                ArgsB_14 = ((MR_Word) ((MR_hl_field(1, B_5, 1))));
                Var_67 = ((MR_Word) ((MR_hl_field(1, B_5, 2))));
                succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Name_11, Var_66);
                if (succeeded)
                {
                  succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_13, Var_67);
                  if (succeeded)
                  {
                    TypeCtorInfo_46_46 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                    succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_46_46, TypeCtorInfo_46_46, ArgsA_12, ArgsB_14);
                    if (succeeded)
                    {
                      Var_24 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[59]);
                      TypeCtorInfo_50_50 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                      succeeded = mercury__list__map_corresponding_4_p_1(TypeCtorInfo_50_50, TypeCtorInfo_50_50, TypeCtorInfo_50_50, Var_24, ArgsA_12, ArgsB_14, &Args_15);
                      if (succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          *Type_6 = base;
                          MR_hl_field(1, base, 0) = ((MR_Box) (Name_11));
                          MR_hl_field(1, base, 1) = ((MR_Box) (Args_15));
                          MR_hl_field(1, base, 2) = ((MR_Box) (Kind_13));
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word T_16 = ((MR_Word) ((MR_hl_field(2, A_4, 0))));
              MR_Word Var_68;

              succeeded = ((MR_tag((MR_Word) B_5)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_68 = ((MR_Word) ((MR_hl_field(2, B_5, 0))));
                succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(T_16, Var_68);
                if (succeeded)
                {
                  *Type_6 = A_4;
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, A_4, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word TypeCtorInfo_51_51;
                  MR_Word TypeCtorInfo_55_55;
                  MR_Word Var_25;
                  MR_Word Args_28;
                  MR_Word ArgsA_30 = ((MR_Word) ((MR_hl_field(3, A_4, 1))));
                  MR_Word Kind_31 = ((MR_Word) ((MR_hl_field(3, A_4, 2))));
                  MR_Word ArgsB_32;
                  MR_Word Var_69;

                  succeeded = ((((MR_tag((MR_Word) B_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, B_5, 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgsB_32 = ((MR_Word) ((MR_hl_field(3, B_5, 1))));
                    Var_69 = ((MR_Word) ((MR_hl_field(3, B_5, 2))));
                    succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_31, Var_69);
                    if (succeeded)
                    {
                      TypeCtorInfo_51_51 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                      succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_51_51, TypeCtorInfo_51_51, ArgsA_30, ArgsB_32);
                      if (succeeded)
                      {
                        Var_25 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[61]);
                        TypeCtorInfo_55_55 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                        succeeded = mercury__list__map_corresponding_4_p_1(TypeCtorInfo_55_55, TypeCtorInfo_55_55, TypeCtorInfo_55_55, Var_25, ArgsA_30, ArgsB_32, &Args_28);
                        if (succeeded)
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            *Type_6 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(3, base, 1) = ((MR_Box) (Args_28));
                            MR_hl_field(3, base, 2) = ((MR_Box) (Kind_31));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word TypeCtorInfo_56_56;
                  MR_Word TypeCtorInfo_60_60;
                  MR_Word PorF_17 = ((MR_Unsigned) ((MR_hl_field(3, A_4, 1))) & (MR_Integer) 1);
                  MR_Word HOInstInfo_18 = ((MR_Word) ((MR_hl_field(3, A_4, 3))));
                  MR_Word Purity_19 = ((MR_Unsigned) ((MR_hl_field(3, A_4, 4))) & (MR_Integer) 3);
                  MR_Word Var_26;
                  MR_Word Args_34;
                  MR_Word ArgsA_36 = ((MR_Word) ((MR_hl_field(3, A_4, 2))));
                  MR_Word ArgsB_37;
                  MR_Word Var_70;
                  MR_Word Var_71;
                  MR_Word Var_72;

                  succeeded = ((((MR_tag((MR_Word) B_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, B_5, 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_70 = ((MR_Unsigned) ((MR_hl_field(3, B_5, 1))) & (MR_Integer) 1);
                    ArgsB_37 = ((MR_Word) ((MR_hl_field(3, B_5, 2))));
                    Var_71 = ((MR_Word) ((MR_hl_field(3, B_5, 3))));
                    Var_72 = ((MR_Unsigned) ((MR_hl_field(3, B_5, 4))) & (MR_Integer) 3);
                    succeeded = (PorF_17 == Var_70);
                    if (succeeded)
                    {
                      succeeded = parse_tree__prog_data____Unify____ho_inst_info_0_0(HOInstInfo_18, Var_71);
                      if (succeeded)
                      {
                        succeeded = (Purity_19 == Var_72);
                        if (succeeded)
                        {
                          TypeCtorInfo_56_56 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                          succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_56_56, TypeCtorInfo_56_56, ArgsA_36, ArgsB_37);
                          if (succeeded)
                          {
                            Var_26 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[60]);
                            TypeCtorInfo_60_60 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                            succeeded = mercury__list__map_corresponding_4_p_1(TypeCtorInfo_60_60, TypeCtorInfo_60_60, TypeCtorInfo_60_60, Var_26, ArgsA_36, ArgsB_37, &Args_34);
                            if (succeeded)
                            {
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                                *Type_6 = base;
                                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                                MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (PorF_17));
                                MR_hl_field(3, base, 2) = ((MR_Box) (Args_34));
                                MR_hl_field(3, base, 3) = ((MR_Box) (HOInstInfo_18));
                                MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_19));
                              }
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word TypeCtorInfo_61_61;
                  MR_Word TypeCtorInfo_65_65;
                  MR_Word TVarA_20 = ((MR_Word) ((MR_hl_field(3, A_4, 1))));
                  MR_Word Var_27;
                  MR_Word Args_39;
                  MR_Word ArgsA_41 = ((MR_Word) ((MR_hl_field(3, A_4, 2))));
                  MR_Word Kind_42 = ((MR_Word) ((MR_hl_field(3, A_4, 3))));
                  MR_Word ArgsB_43;
                  MR_Word Var_73;

                  succeeded = ((((MR_tag((MR_Word) B_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, B_5, 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgsB_43 = ((MR_Word) ((MR_hl_field(3, B_5, 2))));
                    Var_73 = ((MR_Word) ((MR_hl_field(3, B_5, 3))));
                    succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_42, Var_73);
                    if (succeeded)
                    {
                      TypeCtorInfo_61_61 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                      succeeded = mercury__list__same_length_2_p_0(TypeCtorInfo_61_61, TypeCtorInfo_61_61, ArgsA_41, ArgsB_43);
                      if (succeeded)
                      {
                        Var_27 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[58]);
                        TypeCtorInfo_65_65 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
                        succeeded = mercury__list__map_corresponding_4_p_1(TypeCtorInfo_65_65, TypeCtorInfo_65_65, TypeCtorInfo_65_65, Var_27, ArgsA_41, ArgsB_43, &Args_39);
                        if (succeeded)
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *Type_6 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                            MR_hl_field(3, base, 1) = ((MR_Box) (TVarA_20));
                            MR_hl_field(3, base, 2) = ((MR_Box) (Args_39));
                            MR_hl_field(3, base, 3) = ((MR_Box) (Kind_42));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word TypeA_22 = ((MR_Word) ((MR_hl_field(3, A_4, 1))));
                  MR_Word TypeB_23;
                  MR_Word Kind_45 = ((MR_Word) ((MR_hl_field(3, A_4, 2))));
                  MR_Word Var_74;
                  MR_Word next_value_of_A_4;
                  MR_Word next_value_of_B_5;

                  succeeded = ((((MR_tag((MR_Word) B_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, B_5, 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    TypeB_23 = ((MR_Word) ((MR_hl_field(3, B_5, 1))));
                    Var_74 = ((MR_Word) ((MR_hl_field(3, B_5, 2))));
                    succeeded = parse_tree__prog_data____Unify____kind_0_0(Kind_45, Var_74);
                    if (succeeded)
                    {
                      // direct tailcall eliminated
                      ;
                      next_value_of_A_4 = TypeA_22;
                      next_value_of_B_5 = TypeB_23;
                      A_4 = next_value_of_A_4;
                      B_5 = next_value_of_B_5;
                      continue;
                    }
                  }
                }
                break;
            }
            break;
        }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__old_type_constraints__create_domain_4_p_0(
  MR_Word STATE_VARIABLE_DomainMap_0_7,
  MR_Word STATE_VARIABLE_Constraint_0_8,
  MR_Word * STATE_VARIABLE_Constraint_9,
  MR_Word * STATE_VARIABLE_DomainMap_10)
{
  check_hlds__old_type_constraints__conj_find_domain_4_p_0(STATE_VARIABLE_Constraint_0_8, STATE_VARIABLE_Constraint_9, STATE_VARIABLE_DomainMap_0_7, STATE_VARIABLE_DomainMap_10);
}

static void MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_STATE_VARIABLE_ConstraintMap_24;
  MR_Word conv13_STATE_VARIABLE_DomainMap_26;

  check_hlds__old_type_constraints__propagate_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_ConstraintMap_24, ((MR_Word) (wrapper_arg_4)), &conv13_STATE_VARIABLE_DomainMap_26);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_ConstraintMap_24));
  *wrapper_arg_5 = ((MR_Box) (conv13_STATE_VARIABLE_DomainMap_26));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv12_HeadVar__3_61;

  succeeded = check_hlds__old_type_constraints__IntroducedFrom__pred__propagate__1366__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv12_HeadVar__3_61);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__3_61));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_DomainMap_9;

  check_hlds__old_type_constraints__update_singleton_domain_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_DomainMap_9);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_DomainMap_9));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__old_type_constraints__has_singleton_domain_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_HeadVar__2_2;

  check_hlds__old_type_constraints__tvars_in_simple_constraint_2_p_0(((MR_Word) (wrapper_arg_1)), &conv9_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_2));
}

static void MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__2_2;

  check_hlds__old_type_constraints__get_constraints_from_conj_2_p_0(((MR_Word) (wrapper_arg_1)), &conv8_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_2));
}

static void MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_HeadVar__2_2;

  check_hlds__old_type_constraints__tvars_in_simple_constraint_2_p_0(((MR_Word) (wrapper_arg_1)), &conv7_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__old_type_constraints__still_active_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_Domain_6;

  check_hlds__old_type_constraints__type_domain_intersect_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_Domain_6);
  *wrapper_arg_3 = ((MR_Box) (conv6_Domain_6));
}

static void MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__4_52;

  check_hlds__old_type_constraints__IntroducedFrom__pred__find_domain__1418__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__4_52);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__4_52));
}

static void MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Domain_6;

  check_hlds__old_type_constraints__type_domain_union_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Domain_6);
  *wrapper_arg_3 = ((MR_Box) (conv3_Domain_6));
}

static void MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Constraint_9;
  MR_Word conv1_STATE_VARIABLE_DomainMap_10;

  check_hlds__old_type_constraints__create_domain_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_Constraint_9, &conv1_STATE_VARIABLE_DomainMap_10);
  *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Constraint_9));
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_DomainMap_10));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__old_type_constraints__still_active_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__propagate_7_p_0(
  MR_Word TVarSet_8,
  MR_Word VarConstraints_9,
  MR_Integer ConstraintId_10,
  MR_Word STATE_VARIABLE_ConstraintMap_0_23,
  MR_Word * STATE_VARIABLE_ConstraintMap_24,
  MR_Word STATE_VARIABLE_DomainMap_0_25,
  MR_Word * STATE_VARIABLE_DomainMap_26)
{
  MR_bool succeeded;
  MR_Word Constraint0_13;
  MR_Word Constraint_14;
  MR_Word TVars_19;
  MR_Word SingletonVars_20;
  MR_Word PropConstraints0_21;
  MR_Word PropConstraints_22;
  MR_Word STATE_VARIABLE_DomainMap_1_37;
  MR_Word STATE_VARIABLE_ConstraintMap_1_38;
  MR_Word Var_39;
  MR_Word STATE_VARIABLE_DomainMap_2_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Box conv0_Constraint0_13;
  MR_Box conv11_STATE_VARIABLE_DomainMap_2_41;
  MR_Box conv16_STATE_VARIABLE_ConstraintMap_24;
  MR_Box conv15_STATE_VARIABLE_DomainMap_26;

  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0), STATE_VARIABLE_ConstraintMap_0_23, ConstraintId_10, &conv0_Constraint0_13);
  Constraint0_13 = ((MR_Word) (conv0_Constraint0_13));
  if (((MR_tag((MR_Word) Constraint0_13)) == (MR_Integer) 0))
  {
    MR_Word ConjConstraints0_71 = (MR_Word) ((MR_Word) (Constraint0_13));
    MR_Word ConjConstraints_72;

    check_hlds__old_type_constraints__conj_find_domain_4_p_0(ConjConstraints0_71, &ConjConstraints_72, STATE_VARIABLE_DomainMap_0_25, &STATE_VARIABLE_DomainMap_1_37);
    Constraint_14 = (MR_Word) ((MR_Word) (ConjConstraints_72));
  }
  else
  {
    MR_Word Var_100 = ((MR_Word) ((MR_hl_field(1, Constraint0_13, 1))));
    MR_Word Var_101 = ((MR_Word) ((MR_hl_field(1, Constraint0_13, 0))));

    if ((Var_100 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word DisjConstraints_75;
      MR_Word InactiveConstraints_76;
      MR_Word Domains_77;
      MR_Word DisjDomain_78;
      MR_Word Active_81;
      MR_Word SingleConstraint_83;
      MR_Word STATE_VARIABLE_DisjConstraints_2_86;
      MR_Word Var_87;
      MR_Word STATE_VARIABLE_DisjConstraints_3_88;
      MR_Word SingleConstraint0_82;
      MR_Word Var_93;

      mercury__list__filter_4_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[50]), Var_101, &STATE_VARIABLE_DisjConstraints_2_86, &InactiveConstraints_76);
      {
        Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_87, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[8]));
        MR_hl_field(0, Var_87, 1) = ((MR_Box) (check_hlds__old_type_constraints__propagate_7_p_0_2));
        MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_87, 3) = ((MR_Box) (STATE_VARIABLE_DomainMap_0_25));
      }
      mercury__list__map2_4_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[1]), Var_87, STATE_VARIABLE_DisjConstraints_2_86, &STATE_VARIABLE_DisjConstraints_3_88, &Domains_77);
      if ((Domains_77 == (MR_Word) ((MR_Unsigned) 0U)))
        DisjDomain_78 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0));
      else
      {
        MR_Word HeadDomain_79 = ((MR_Word) ((MR_hl_field(1, Domains_77, 0))));
        MR_Word TailDomains_80 = ((MR_Word) ((MR_hl_field(1, Domains_77, 1))));
        MR_Box conv5_DisjDomain_78;

        mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_8[8]), TailDomains_80, ((MR_Box) (HeadDomain_79)), &conv5_DisjDomain_78);
        DisjDomain_78 = ((MR_Word) (conv5_DisjDomain_78));
      }
      mercury__map__union_4_p_1((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[52]), DisjDomain_78, STATE_VARIABLE_DomainMap_0_25, &STATE_VARIABLE_DomainMap_1_37);
      mercury__list__filter_3_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[53]), STATE_VARIABLE_DisjConstraints_3_88, &Active_81);
      succeeded = (Active_81 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SingleConstraint0_82 = ((MR_Word) ((MR_hl_field(1, Active_81, 0))));
        Var_93 = ((MR_Word) ((MR_hl_field(1, Active_81, 1))));
        succeeded = (Var_93 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
        {
          SingleConstraint_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SingleConstraint_83, 0) = ((MR_Box) (SingleConstraint0_82));
        }
      else
        SingleConstraint_83 = (MR_Word) ((MR_Unsigned) 0U);
      mercury__list__append_3_p_1((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), InactiveConstraints_76, STATE_VARIABLE_DisjConstraints_3_88, &DisjConstraints_75);
      {
        Constraint_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Constraint_14, 0) = ((MR_Box) (DisjConstraints_75));
        MR_hl_field(1, Constraint_14, 1) = ((MR_Box) (SingleConstraint_83));
      }
    }
    else
    {
      MR_Word SingleConstraints0_73 = ((MR_Word) ((MR_hl_field(1, Var_100, 0))));
      MR_Word SingleConstraints_74;
      MR_Word Var_84;

      check_hlds__old_type_constraints__conj_find_domain_4_p_0(SingleConstraints0_73, &SingleConstraints_74, STATE_VARIABLE_DomainMap_0_25, &STATE_VARIABLE_DomainMap_1_37);
      {
        Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_84, 0) = ((MR_Box) (SingleConstraints_74));
      }
      {
        Constraint_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Constraint_14, 0) = ((MR_Box) (Var_101));
        MR_hl_field(1, Constraint_14, 1) = ((MR_Box) (Var_84));
      }
    }
  }
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0), ConstraintId_10, ((MR_Box) (Constraint_14)), STATE_VARIABLE_ConstraintMap_0_23, &STATE_VARIABLE_ConstraintMap_1_38);
  if (((MR_tag((MR_Word) Constraint_14)) == (MR_Integer) 0))
  {
    MR_Word Constraints_102;
    MR_Word TVarLists_107;
    MR_Word Var_108 = (MR_Word) ((MR_Word) (Constraint_14));

    Constraints_102 = ((MR_Word) ((MR_hl_field(0, Var_108, 0))));
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[8]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[54]), Constraints_102, &TVarLists_107);
    mercury__list__condense_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), TVarLists_107, &TVars_19);
  }
  else
  {
    MR_Word Disjuncts0_110 = ((MR_Word) ((MR_hl_field(1, Constraint_14, 0))));
    MR_Word Disjuncts_112;
    MR_Word Constraints_113;
    MR_Word TVarLists_114;

    mercury__list__map_3_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[10]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[55]), Disjuncts0_110, &Disjuncts_112);
    mercury__list__condense_2_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0), Disjuncts_112, &Constraints_113);
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[8]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[56]), Constraints_113, &TVarLists_114);
    mercury__list__condense_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), TVarLists_114, &TVars_19);
  }
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[17]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (check_hlds__old_type_constraints__propagate_7_p_0_10));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_39, 3) = ((MR_Box) (STATE_VARIABLE_DomainMap_1_37));
  }
  mercury__list__filter_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), Var_39, TVars_19, &SingletonVars_20);
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[57]), SingletonVars_20, ((MR_Box) (STATE_VARIABLE_DomainMap_1_37)), &conv11_STATE_VARIABLE_DomainMap_2_41);
  STATE_VARIABLE_DomainMap_2_41 = ((MR_Word) (conv11_STATE_VARIABLE_DomainMap_2_41));
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[14]));
    MR_hl_field(0, Var_42, 1) = ((MR_Box) (check_hlds__old_type_constraints__propagate_7_p_0_12));
    MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_42, 3) = ((MR_Box) (VarConstraints_9));
  }
  mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[3]), Var_42, SingletonVars_20, &PropConstraints0_21);
  Var_43 = mercury__list__condense_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), PropConstraints0_21);
  PropConstraints_22 = mercury__list__remove_dups_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_43);
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_4[1]));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (check_hlds__old_type_constraints__propagate_7_p_0_13));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (TVarSet_8));
    MR_hl_field(0, Var_44, 4) = ((MR_Box) (VarConstraints_9));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[5]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[1]), Var_44, PropConstraints_22, ((MR_Box) (STATE_VARIABLE_ConstraintMap_1_38)), &conv16_STATE_VARIABLE_ConstraintMap_24, ((MR_Box) (STATE_VARIABLE_DomainMap_2_41)), &conv15_STATE_VARIABLE_DomainMap_26);
  *STATE_VARIABLE_ConstraintMap_24 = ((MR_Word) (conv16_STATE_VARIABLE_ConstraintMap_24));
  *STATE_VARIABLE_DomainMap_26 = ((MR_Word) (conv15_STATE_VARIABLE_DomainMap_26));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__conj_find_domain_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__old_type_constraints__domain_map_unchanged_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__conj_find_domain_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__old_type_constraints__non_empty_domain_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__conj_find_domain_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__3_17;

  succeeded = check_hlds__old_type_constraints__IntroducedFrom__pred__constraint_is_satisfiable__1868__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__3_17);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_17));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__conj_find_domain_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  check_hlds__old_type_constraints__tvars_in_simple_constraint_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
}

static void MR_CALL 
check_hlds__old_type_constraints__conj_find_domain_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DomainMap_26;

  check_hlds__old_type_constraints__simple_find_domain_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DomainMap_26);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DomainMap_26));
}

static void MR_CALL 
check_hlds__old_type_constraints__conj_find_domain_4_p_0(
  MR_Word STATE_VARIABLE_ConjTypeConstraint_0_18,
  MR_Word * STATE_VARIABLE_ConjTypeConstraint_19,
  MR_Word DomainMap0_6,
  MR_Word * DomainMap_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConjTypeConstraint_0_18, 4))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConjTypeConstraint_0_18, 3))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConjTypeConstraint_0_18, 2))));
    MR_Word Var_39 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ConjTypeConstraint_0_18, 1))) & (MR_Integer) 1);
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ConjTypeConstraint_0_18, 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (Var_39) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DomainMap1_16;
          MR_Box conv1_DomainMap1_16;
          MR_Word TVars0_41;
          MR_Word TVars_42;
          MR_Word Domains_43;
          MR_Word Var_45;

          mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[47]), Var_40, ((MR_Box) (DomainMap0_6)), &conv1_DomainMap1_16);
          DomainMap1_16 = ((MR_Word) (conv1_DomainMap1_16));
          mercury__list__map_3_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[8]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[48]), Var_40, &TVars0_41);
          mercury__list__condense_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), TVars0_41, &TVars_42);
          {
            Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_45, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[12]));
            MR_hl_field(0, Var_45, 1) = ((MR_Box) (check_hlds__old_type_constraints__conj_find_domain_4_p_0_3));
            MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_45, 3) = ((MR_Box) (DomainMap1_16));
          }
          mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), Var_45, TVars_42, &Domains_43);
          succeeded = mercury__list__all_true_2_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[49]), Domains_43);
          if (succeeded)
          {
            MR_Word AssocDomain1_17;
            MR_Word Var_23;

            mercury__map__to_assoc_list_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), DomainMap1_16, &AssocDomain1_17);
            {
              Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_23, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_6[15]));
              MR_hl_field(0, Var_23, 1) = ((MR_Box) (check_hlds__old_type_constraints__conj_find_domain_4_p_0_5));
              MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_23, 3) = ((MR_Box) (DomainMap0_6));
            }
            succeeded = mercury__list__all_true_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[4]), Var_23, AssocDomain1_17);
            if (succeeded)
            {
              *DomainMap_7 = DomainMap1_16;
              *STATE_VARIABLE_ConjTypeConstraint_19 = STATE_VARIABLE_ConjTypeConstraint_0_18;
            }
            else
            {
              MR_Word next_value_of_DomainMap0_6 = DomainMap1_16;

              // direct tailcall eliminated
              ;
              DomainMap0_6 = next_value_of_DomainMap0_6;
              continue;
            }
          }
          else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_ConjTypeConstraint_19 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_40));
              MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_38));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_37));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_36));
            }
            *DomainMap_7 = DomainMap1_16;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *DomainMap_7 = DomainMap0_6;
          *STATE_VARIABLE_ConjTypeConstraint_19 = STATE_VARIABLE_ConjTypeConstraint_0_18;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__old_type_constraints__type_constraint_solution_get_constraint_map_2_p_0(
  MR_Word T_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, T_3, 1))));
}

static void MR_CALL 
check_hlds__old_type_constraints__type_constraint_solution_get_domains_2_p_0(
  MR_Word T_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, T_3, 0))));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__solution_is_invalid_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word Var_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) & (MR_Integer) 1);

  succeeded = (Var_4 == (MR_Integer) 0);
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__get_case_goal_2_p_0(
  MR_Word Case_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, Case_3, 2))));
}

static MR_Word MR_CALL 
check_hlds__old_type_constraints__create_stconstr_2_f_0(
  MR_Word TVar_4,
  MR_Word Type_5)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (TVar_4));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Type_5));
  }
  return HeadVar__3_3;
}

static void MR_CALL 
check_hlds__old_type_constraints__map_var_to_constraint_4_p_0(
  MR_Integer Id_5,
  MR_Word TVar_6,
  MR_Word STATE_VARIABLE_VarConstraints_0_9,
  MR_Word * STATE_VARIABLE_VarConstraints_10)
{
  MR_bool succeeded;
  MR_Word OldIds_8;
  MR_Box conv0_OldIds_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[3]), STATE_VARIABLE_VarConstraints_0_9, ((MR_Box) (TVar_6)), &conv0_OldIds_8);
  if (succeeded)
  {
    OldIds_8 = ((MR_Word) (conv0_OldIds_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    succeeded = mercury__list__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), OldIds_8, ((MR_Box) (Id_5)));
    if (succeeded)
      *STATE_VARIABLE_VarConstraints_10 = STATE_VARIABLE_VarConstraints_0_9;
    else
    {
      MR_Word Var_11;

      {
        Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_11, 0) = ((MR_Box) (Id_5));
        MR_hl_field(1, Var_11, 1) = ((MR_Box) (OldIds_8));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[3]), ((MR_Box) (TVar_6)), ((MR_Box) (Var_11)), STATE_VARIABLE_VarConstraints_0_9, STATE_VARIABLE_VarConstraints_10);
    }
  }
  else
  {
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_13, 0) = ((MR_Box) (Id_5));
      MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[3]), ((MR_Box) (TVar_6)), ((MR_Box) (Var_13)), STATE_VARIABLE_VarConstraints_0_9, STATE_VARIABLE_VarConstraints_10);
  }
}

static MR_Box MR_CALL 
check_hlds__old_type_constraints__ho_pred_unif_constraint_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = check_hlds__old_type_constraints__create_stconstr_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__ho_pred_unif_constraint_8_p_0(
  MR_Word PredTable_9,
  MR_Word Info_10,
  MR_Word LHSTVar_11,
  MR_Word ArgTVars_12,
  MR_Word PredId_13,
  MR_Word * Constraint_14,
  MR_Word STATE_VARIABLE_TCInfo_0_35,
  MR_Word * STATE_VARIABLE_TCInfo_36)
{
  MR_bool succeeded;
  MR_Word Context_16;
  MR_Word Constraints_31;
  MR_Word GoalId_34;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word PredInfo_17;
  MR_Box conv0_PredInfo_17;

  Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(Info_10);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_9, ((MR_Box) (PredId_13)), &conv0_PredInfo_17);
  if (succeeded)
  {
    PredInfo_17 = ((MR_Word) (conv0_PredInfo_17));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word TypeInfo_73_73;
    MR_Word TypeCtorInfo_74_74;
    MR_Word TypeCtorInfo_75_75;
    MR_Word PredArgTypes0_18;
    MR_Word PredTVarSet_19;
    MR_Word Purity_20;
    MR_Word PredOrFunc_21;
    MR_Word NewTVarSet_22;
    MR_Word TVarRenaming_23;
    MR_Word PredArgTypes_24;
    MR_Word HOArgTypes_25;
    MR_Word LambdaTypes_26;
    MR_Word ArgConstraints_27;
    MR_Word Type_29;
    MR_Word LHSConstraint_30;
    MR_Word Var_37;
    MR_Integer Var_39;
    MR_Word Var_40;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_68;
    MR_Word ReturnType_28;
    MR_Word Var_41;

    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_17, &PredArgTypes0_18);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_17, &PredTVarSet_19);
    hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_17, &Purity_20);
    PredOrFunc_21 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_17);
    Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_35, 4))));
    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(Var_37, PredTVarSet_19, &NewTVarSet_22, &TVarRenaming_23);
    Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_35, 0))));
    Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_35, 1))));
    Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_35, 2))));
    Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_35, 3))));
    Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_35, 5))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_TCInfo_36 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_63));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_64));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_65));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_66));
      MR_hl_field(0, base, 4) = ((MR_Box) (NewTVarSet_22));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_68));
    }
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(TVarRenaming_23, PredArgTypes0_18, &PredArgTypes_24);
    Var_39 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), ArgTVars_12);
    succeeded = mercury__list__split_list_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_39, PredArgTypes_24, &HOArgTypes_25, &LambdaTypes_26);
    if (succeeded)
    {
      TypeInfo_73_73 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]);
      TypeCtorInfo_74_74 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
      TypeCtorInfo_75_75 = (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0);
      Var_40 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[46]);
      ArgConstraints_27 = mercury__list__map_corresponding_3_f_0(TypeInfo_73_73, TypeCtorInfo_74_74, TypeCtorInfo_75_75, Var_40, ArgTVars_12, HOArgTypes_25);
      succeeded = (PredOrFunc_21 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (LambdaTypes_26 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ReturnType_28 = ((MR_Word) ((MR_hl_field(1, LambdaTypes_26, 0))));
          Var_41 = ((MR_Word) ((MR_hl_field(1, LambdaTypes_26, 1))));
          succeeded = (Var_41 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
        Type_29 = ReturnType_28;
      else
        {
          Type_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Type_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Type_29, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
          MR_hl_field(3, Type_29, 2) = ((MR_Box) (LambdaTypes_26));
          MR_hl_field(3, Type_29, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Type_29, 4) = (MR_Box) ((MR_Unsigned) (Purity_20));
        }
      {
        LHSConstraint_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, LHSConstraint_30, 0) = ((MR_Box) (LHSTVar_11));
        MR_hl_field(0, LHSConstraint_30, 1) = ((MR_Box) (Type_29));
      }
      {
        Constraints_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Constraints_31, 0) = ((MR_Box) (LHSConstraint_30));
        MR_hl_field(1, Constraints_31, 1) = ((MR_Box) (ArgConstraints_27));
      }
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Word Pieces_32;
    MR_Word ErrMsg_33;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Integer Var_47;
    MR_Word Spec_76;
    MR_Word Var_80;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;

    Var_47 = hlds__hlds_pred__pred_id_to_int_1_f_0(PredId_13);
    {
      Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_46, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[26])));
    }
    {
      Pieces_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_32, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[31])));
      MR_hl_field(1, Pieces_32, 1) = ((MR_Box) (Var_45));
    }
    {
      ErrMsg_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ErrMsg_33, 0) = ((MR_Box) (Context_16));
      MR_hl_field(0, ErrMsg_33, 1) = ((MR_Box) (Pieces_32));
    }
    {
      Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_80, 0) = ((MR_Box) (ErrMsg_33));
      MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_76 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_76, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.old_type_constraints.add_message_to_spec\'/3"));
      MR_hl_field(2, Spec_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_76, 2) = ((MR_Box) ((MR_Unsigned) 52U));
      MR_hl_field(2, Spec_76, 3) = ((MR_Box) (Var_80));
    }
    Var_84 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_35, 0))));
    Var_85 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_35, 1))));
    Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_35, 2))));
    Var_87 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_35, 3))));
    Var_88 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_35, 4))));
    Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_35, 5))));
    {
      Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_82, 0) = ((MR_Box) (Spec_76));
      MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_83));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_TCInfo_36 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_84));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_85));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_86));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_87));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_88));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_82));
    }
    Constraints_31 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    GoalId_34 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(Info_10);
    Var_55 = (MR_Integer) 0;
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (GoalId_34));
    }
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (PredId_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *Constraint_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Constraints_31));
      MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) (Var_55));
      MR_hl_field(0, base, 2) = ((MR_Box) (Context_16));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_56));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_57));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__old_type_constraints__functor_unif_constraint_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = check_hlds__old_type_constraints__create_stconstr_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  return wrapper_arg_3;
}

static MR_Box MR_CALL 
check_hlds__old_type_constraints__functor_unif_constraint_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = check_hlds__old_type_constraints__tvar_to_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__old_type_constraints__functor_unif_constraint_7_p_0(
  MR_Word LTVar_8,
  MR_Word ArgTVars_9,
  MR_Word Info_10,
  MR_Word ConsDefn_11,
  MR_Word * Constraints_12,
  MR_Word STATE_VARIABLE_TCInfo_0_32,
  MR_Word * STATE_VARIABLE_TCInfo_33)
{
  MR_Word TypeCtor_14 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, 0))));
  MR_Word FunctorTVarSet_15 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, 1))));
  MR_Word TypeParams0_16 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, 2))));
  MR_Word FuncArgs_19 = ((MR_Word) ((MR_hl_field(0, ConsDefn_11, 5))));
  MR_Word Context_21;
  MR_Word GoalId_22;
  MR_Word FuncArgTypes0_23;
  MR_Word NewTVarSet_24;
  MR_Word TVarRenaming_25;
  MR_Word TypeParams_26;
  MR_Word FuncArgTypes_27;
  MR_Word Params_28;
  MR_Word ResultType_29;
  MR_Word LHS_Constraint_30;
  MR_Word RHS_Constraints_31;
  MR_Word Var_34;
  MR_Word Var_38;
  MR_Word Var_40;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_52;

  Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(Info_10);
  GoalId_22 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(Info_10);
  parse_tree__prog_data__get_ctor_arg_types_2_p_0(FuncArgs_19, &FuncArgTypes0_23);
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_32, 4))));
  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(Var_34, FunctorTVarSet_15, &NewTVarSet_24, &TVarRenaming_25);
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_32, 0))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_32, 1))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_32, 2))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_32, 3))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_32, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TCInfo_33 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_50));
    MR_hl_field(0, base, 4) = ((MR_Box) (NewTVarSet_24));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_52));
  }
  parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(TVarRenaming_25, TypeParams0_16, &TypeParams_26);
  parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(TVarRenaming_25, FuncArgTypes0_23, &FuncArgTypes_27);
  Params_28 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[44]), TypeParams_26);
  parse_tree__prog_type_construct__construct_type_3_p_0(TypeCtor_14, Params_28, &ResultType_29);
  {
    LHS_Constraint_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LHS_Constraint_30, 0) = ((MR_Box) (LTVar_8));
    MR_hl_field(0, LHS_Constraint_30, 1) = ((MR_Box) (ResultType_29));
  }
  RHS_Constraints_31 = mercury__list__map_corresponding_3_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[45]), ArgTVars_9, FuncArgTypes_27);
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (LHS_Constraint_30));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (RHS_Constraints_31));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (GoalId_22));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Constraints_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, base, 2) = ((MR_Box) (Context_21));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
check_hlds__old_type_constraints__goal_to_constraint_4_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_TCInfo_46;

  check_hlds__old_type_constraints__goal_to_constraint_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_TCInfo_46);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_TCInfo_46));
}

static void MR_CALL 
check_hlds__old_type_constraints__goal_to_constraint_4_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_HeadVar__2_2;

  check_hlds__old_type_constraints__get_case_goal_2_p_0(((MR_Word) (wrapper_arg_1)), &conv9_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_2));
}

static void MR_CALL 
check_hlds__old_type_constraints__goal_to_constraint_4_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_TCInfo_46;

  check_hlds__old_type_constraints__goal_to_constraint_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_TCInfo_46);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_TCInfo_46));
}

static void MR_CALL 
check_hlds__old_type_constraints__goal_to_constraint_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_TCInfo_46;

  check_hlds__old_type_constraints__goal_to_constraint_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_TCInfo_46);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_TCInfo_46));
}

static void MR_CALL 
check_hlds__old_type_constraints__goal_to_constraint_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_TCInfo_14;

  check_hlds__old_type_constraints__variable_assignment_constraint_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_TCInfo_14);
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_TCInfo_14));
}

static MR_Box MR_CALL 
check_hlds__old_type_constraints__goal_to_constraint_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__old_type_constraints__goal_to_constraint_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__old_type_constraints__shorthand_goal_to_constraint_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_TCInfo_46;

  check_hlds__old_type_constraints__goal_to_constraint_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_TCInfo_46);
  *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_TCInfo_46));
}

static void MR_CALL 
check_hlds__old_type_constraints__goal_to_constraint_4_p_0(
  MR_Word tscc_proc_1_input_1_Environment_5,
  MR_Word tscc_proc_1_input_2_Goal_6,
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_TCInfo_46)
{
  MR_Word tscc_proc_2_input_1_Environment_6;
  MR_Word tscc_proc_2_input_2_GoalExpr_7;
  MR_Word tscc_proc_2_input_3_GoalInfo_8;
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_TCInfo_0_40;
  MR_Word tscc_output_1_STATE_VARIABLE_TCInfo_46;

  // The code for TSCC PROC 1: pred check_hlds.old_type_constraints.goal_to_constraint/4-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred check_hlds.old_type_constraints.goal_to_constraint/4-0
  ;
  // proc 2 in TSCC: pred check_hlds.old_type_constraints.shorthand_goal_to_constraint/5-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Environment_5 = tscc_proc_1_input_1_Environment_5;
    MR_Word Goal_6 = tscc_proc_1_input_2_Goal_6;
    MR_Word STATE_VARIABLE_TCInfo_0_45 = tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;
    MR_Word STATE_VARIABLE_TCInfo_46;
    MR_bool succeeded;
    MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Goal_6, 0))));
    MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(0, Goal_6, 1))));

    switch (MR_tag((MR_Word) GoalExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_35 = (MR_Word) ((MR_Word) (GoalExpr_8));
          MR_Word next_value_of_tscc_proc_1_input_1_Environment_5 = Environment_5;
          MR_Word next_value_of_tscc_proc_1_input_2_Goal_6 = SubGoal_35;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = STATE_VARIABLE_TCInfo_0_45;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Environment_5 = next_value_of_tscc_proc_1_input_1_Environment_5;
          tscc_proc_1_input_2_Goal_6 = next_value_of_tscc_proc_1_input_2_Goal_6;
          tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        check_hlds__old_type_constraints__unify_goal_to_constraint_5_p_0(Environment_5, GoalExpr_8, GoalInfo_9, STATE_VARIABLE_TCInfo_0_45, &STATE_VARIABLE_TCInfo_46);
        break;
      case (MR_Integer) 2:
        check_hlds__old_type_constraints__plain_call_goal_to_constraint_5_p_0(Environment_5, GoalExpr_8, GoalInfo_9, STATE_VARIABLE_TCInfo_0_45, &STATE_VARIABLE_TCInfo_46);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_8, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__old_type_constraints__generic_call_goal_to_constraint_5_p_0(Environment_5, GoalExpr_8, GoalInfo_9, STATE_VARIABLE_TCInfo_0_45, &STATE_VARIABLE_TCInfo_46);
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredId_86 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));
              MR_Word ForeignArgs_88 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 4))));
              MR_Word Context_92;
              MR_Word ArgVars_93;
              MR_Word ArgTypes0_94;
              MR_Word Preds_95;
              MR_Word Var_103;
              MR_Word PredInfo_96;
              MR_Box conv2_PredInfo_96;

              Context_92 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
              ArgVars_93 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[41]), ForeignArgs_88);
              ArgTypes0_94 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[42]), ForeignArgs_88);
              Var_103 = ((MR_Word) ((MR_hl_field(0, Environment_5, 3))));
              hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(Var_103, &Preds_95);
              succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds_95, ((MR_Box) (PredId_86)), &conv2_PredInfo_96);
              if (succeeded)
              {
                PredInfo_96 = ((MR_Word) (conv2_PredInfo_96));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word PredTVarSet_97;
                MR_Word NewTVarSet_98;
                MR_Word TVarRenaming_99;
                MR_Word ArgTypes_100;
                MR_Word Var_104;
                MR_Word STATE_VARIABLE_TCInfo_1_105;
                MR_Word Var_106;
                MR_Word Var_117;
                MR_Word Var_118;
                MR_Word Var_119;
                MR_Word Var_120;
                MR_Word Var_122;
                MR_Box conv4_STATE_VARIABLE_TCInfo_46;

                hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_96, &PredTVarSet_97);
                Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_45, 4))));
                parse_tree__prog_data__tvarset_merge_renaming_4_p_0(Var_104, PredTVarSet_97, &NewTVarSet_98, &TVarRenaming_99);
                Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_45, 0))));
                Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_45, 1))));
                Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_45, 2))));
                Var_120 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_45, 3))));
                Var_122 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_45, 5))));
                {
                  STATE_VARIABLE_TCInfo_1_105 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_TCInfo_1_105, 0) = ((MR_Box) (Var_117));
                  MR_hl_field(0, STATE_VARIABLE_TCInfo_1_105, 1) = ((MR_Box) (Var_118));
                  MR_hl_field(0, STATE_VARIABLE_TCInfo_1_105, 2) = ((MR_Box) (Var_119));
                  MR_hl_field(0, STATE_VARIABLE_TCInfo_1_105, 3) = ((MR_Box) (Var_120));
                  MR_hl_field(0, STATE_VARIABLE_TCInfo_1_105, 4) = ((MR_Box) (NewTVarSet_98));
                  MR_hl_field(0, STATE_VARIABLE_TCInfo_1_105, 5) = ((MR_Box) (Var_122));
                }
                parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(TVarRenaming_99, ArgTypes0_94, &ArgTypes_100);
                {
                  Var_106 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_106, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_11[1]));
                  MR_hl_field(0, Var_106, 1) = ((MR_Box) (check_hlds__old_type_constraints__goal_to_constraint_4_p_0_3));
                  MR_hl_field(0, Var_106, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_106, 3) = ((MR_Box) (Context_92));
                }
                mercury__list__foldl_corresponding_5_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0), Var_106, ArgVars_93, ArgTypes_100, ((MR_Box) (STATE_VARIABLE_TCInfo_1_105)), &conv4_STATE_VARIABLE_TCInfo_46);
                STATE_VARIABLE_TCInfo_46 = ((MR_Word) (conv4_STATE_VARIABLE_TCInfo_46));
              }
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.old_type_constraints.foreign_proc_goal_to_constraint\'/5", (MR_String) "cannot find pred_info for foreign_proc");
                  return;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));
              MR_Word Var_51;
              MR_Box conv6_STATE_VARIABLE_TCInfo_46;

              {
                Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_51, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[3]));
                MR_hl_field(0, Var_51, 1) = ((MR_Box) (check_hlds__old_type_constraints__goal_to_constraint_4_p_0_4));
                MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_51, 3) = ((MR_Box) (Environment_5));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0), Var_51, Goals_34, ((MR_Box) (STATE_VARIABLE_TCInfo_0_45)), &conv6_STATE_VARIABLE_TCInfo_46);
              STATE_VARIABLE_TCInfo_46 = ((MR_Word) (conv6_STATE_VARIABLE_TCInfo_46));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_53;
              MR_Word Goals_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 1))));
              MR_Box conv8_STATE_VARIABLE_TCInfo_46;

              {
                Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_53, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[3]));
                MR_hl_field(0, Var_53, 1) = ((MR_Box) (check_hlds__old_type_constraints__goal_to_constraint_4_p_0_5));
                MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_53, 3) = ((MR_Box) (Environment_5));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0), Var_53, Goals_64, ((MR_Box) (STATE_VARIABLE_TCInfo_0_45)), &conv8_STATE_VARIABLE_TCInfo_46);
              STATE_VARIABLE_TCInfo_46 = ((MR_Word) (conv8_STATE_VARIABLE_TCInfo_46));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 3))));
              MR_Word Var_61;
              MR_Word Goals_66;
              MR_Box conv11_STATE_VARIABLE_TCInfo_46;

              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[43]), Cases_43, &Goals_66);
              {
                Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_61, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[3]));
                MR_hl_field(0, Var_61, 1) = ((MR_Box) (check_hlds__old_type_constraints__goal_to_constraint_4_p_0_7));
                MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_61, 3) = ((MR_Box) (Environment_5));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0), Var_61, Goals_66, ((MR_Box) (STATE_VARIABLE_TCInfo_0_45)), &conv11_STATE_VARIABLE_TCInfo_46);
              STATE_VARIABLE_TCInfo_46 = ((MR_Word) (conv11_STATE_VARIABLE_TCInfo_46));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Environment_5 = Environment_5;
              MR_Word next_value_of_tscc_proc_1_input_2_Goal_6 = SubGoal_65;
              MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = STATE_VARIABLE_TCInfo_0_45;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Environment_5 = next_value_of_tscc_proc_1_input_1_Environment_5;
              tscc_proc_1_input_2_Goal_6 = next_value_of_tscc_proc_1_input_2_Goal_6;
              tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));
              MR_Word Then_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 3))));
              MR_Word Else_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 4))));
              MR_Word STATE_VARIABLE_TCInfo_9_57;
              MR_Word STATE_VARIABLE_TCInfo_10_58;
              MR_Word next_value_of_tscc_proc_1_input_1_Environment_5;
              MR_Word next_value_of_tscc_proc_1_input_2_Goal_6;
              MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;

              check_hlds__old_type_constraints__goal_to_constraint_4_p_0(Environment_5, Cond_38, STATE_VARIABLE_TCInfo_0_45, &STATE_VARIABLE_TCInfo_9_57);
              check_hlds__old_type_constraints__goal_to_constraint_4_p_0(Environment_5, Then_39, STATE_VARIABLE_TCInfo_9_57, &STATE_VARIABLE_TCInfo_10_58);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Environment_5 = Environment_5;
              next_value_of_tscc_proc_1_input_2_Goal_6 = Else_40;
              next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = STATE_VARIABLE_TCInfo_10_58;
              tscc_proc_1_input_1_Environment_5 = next_value_of_tscc_proc_1_input_1_Environment_5;
              tscc_proc_1_input_2_Goal_6 = next_value_of_tscc_proc_1_input_2_Goal_6;
              tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word next_value_of_tscc_proc_2_input_1_Environment_6 = Environment_5;
              MR_Word next_value_of_tscc_proc_2_input_2_GoalExpr_7 = GoalExpr_8;
              MR_Word next_value_of_tscc_proc_2_input_3_GoalInfo_8 = GoalInfo_9;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_TCInfo_0_40 = STATE_VARIABLE_TCInfo_0_45;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Environment_6 = next_value_of_tscc_proc_2_input_1_Environment_6;
              tscc_proc_2_input_2_GoalExpr_7 = next_value_of_tscc_proc_2_input_2_GoalExpr_7;
              tscc_proc_2_input_3_GoalInfo_8 = next_value_of_tscc_proc_2_input_3_GoalInfo_8;
              tscc_proc_2_input_4_STATE_VARIABLE_TCInfo_0_40 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_TCInfo_0_40;
              goto top_of_proc_2;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_TCInfo_46 = STATE_VARIABLE_TCInfo_46;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Environment_6 = tscc_proc_2_input_1_Environment_6;
    MR_Word GoalExpr_7 = tscc_proc_2_input_2_GoalExpr_7;
    MR_Word GoalInfo_8 = tscc_proc_2_input_3_GoalInfo_8;
    MR_Word STATE_VARIABLE_TCInfo_0_40 = tscc_proc_2_input_4_STATE_VARIABLE_TCInfo_0_40;
    MR_Word STATE_VARIABLE_TCInfo_41;
    MR_Word Shorthand_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 1))));

    switch (MR_tag((MR_Word) Shorthand_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word GoalA_38 = ((MR_Word) ((MR_hl_field(0, Shorthand_10, 0))));
          MR_Word GoalB_39 = ((MR_Word) ((MR_hl_field(0, Shorthand_10, 1))));
          MR_Word STATE_VARIABLE_TCInfo_17_139;
          MR_Word next_value_of_tscc_proc_1_input_1_Environment_5;
          MR_Word next_value_of_tscc_proc_1_input_2_Goal_6;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;

          check_hlds__old_type_constraints__goal_to_constraint_4_p_0(Environment_6, GoalA_38, STATE_VARIABLE_TCInfo_0_40, &STATE_VARIABLE_TCInfo_17_139);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Environment_5 = Environment_6;
          next_value_of_tscc_proc_1_input_2_Goal_6 = GoalB_39;
          next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = STATE_VARIABLE_TCInfo_17_139;
          tscc_proc_1_input_1_Environment_5 = next_value_of_tscc_proc_1_input_1_Environment_5;
          tscc_proc_1_input_2_Goal_6 = next_value_of_tscc_proc_1_input_2_Goal_6;
          tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word GoalType_11 = ((MR_Unsigned) ((MR_hl_field(1, Shorthand_10, 0))) & (MR_Integer) 3);
          MR_Word Outer_12 = ((MR_Word) ((MR_hl_field(1, Shorthand_10, 1))));
          MR_Word Inner_13 = ((MR_Word) ((MR_hl_field(1, Shorthand_10, 2))));
          MR_Word Main_15 = ((MR_Word) ((MR_hl_field(1, Shorthand_10, 4))));
          MR_Word Alternatives_16 = ((MR_Word) ((MR_hl_field(1, Shorthand_10, 5))));
          MR_Word Context_18;
          MR_Word InnerInitVar_19;
          MR_Word InnerFinalVar_20;
          MR_Word OuterInitVar_21;
          MR_Word OuterFinalVar_22;
          MR_Word OuterInit_23;
          MR_Word OuterFinal_24;
          MR_Word InitStmConstraint_25;
          MR_Word InitIOConstraint_26;
          MR_Word FinalStmConstraint_27;
          MR_Word FinalIOConstraint_28;
          MR_Word Var_42;
          MR_Word STATE_VARIABLE_TCInfo_1_43;
          MR_Word Var_44;
          MR_Word STATE_VARIABLE_TCInfo_2_45;
          MR_Word STATE_VARIABLE_TCInfo_3_46;
          MR_Word STATE_VARIABLE_TCInfo_4_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word STATE_VARIABLE_TCInfo_6_84;
          MR_Word Var_108;
          MR_Word Var_109;
          MR_Box conv13_STATE_VARIABLE_TCInfo_41;

          Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
          InnerInitVar_19 = ((MR_Word) ((MR_hl_field(0, Inner_13, 0))));
          InnerFinalVar_20 = ((MR_Word) ((MR_hl_field(0, Inner_13, 1))));
          Var_42 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
          check_hlds__old_type_constraints__variable_assignment_constraint_5_p_0(Context_18, InnerInitVar_19, Var_42, STATE_VARIABLE_TCInfo_0_40, &STATE_VARIABLE_TCInfo_1_43);
          Var_44 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
          check_hlds__old_type_constraints__variable_assignment_constraint_5_p_0(Context_18, InnerFinalVar_20, Var_44, STATE_VARIABLE_TCInfo_1_43, &STATE_VARIABLE_TCInfo_2_45);
          OuterInitVar_21 = ((MR_Word) ((MR_hl_field(0, Outer_12, 0))));
          OuterFinalVar_22 = ((MR_Word) ((MR_hl_field(0, Outer_12, 1))));
          check_hlds__old_type_constraints__get_var_type_4_p_0(OuterInitVar_21, &OuterInit_23, STATE_VARIABLE_TCInfo_2_45, &STATE_VARIABLE_TCInfo_3_46);
          check_hlds__old_type_constraints__get_var_type_4_p_0(OuterFinalVar_22, &OuterFinal_24, STATE_VARIABLE_TCInfo_3_46, &STATE_VARIABLE_TCInfo_4_47);
          Var_50 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_49, 0) = ((MR_Box) (OuterInit_23));
            MR_hl_field(0, Var_49, 1) = ((MR_Box) (Var_50));
          }
          {
            Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
            MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            InitStmConstraint_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, InitStmConstraint_25, 0) = ((MR_Box) (Var_48));
            MR_hl_field(0, InitStmConstraint_25, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, InitStmConstraint_25, 2) = ((MR_Box) (Context_18));
            MR_hl_field(0, InitStmConstraint_25, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, InitStmConstraint_25, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_57 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          {
            Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_56, 0) = ((MR_Box) (OuterInit_23));
            MR_hl_field(0, Var_56, 1) = ((MR_Box) (Var_57));
          }
          {
            Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
            MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            InitIOConstraint_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, InitIOConstraint_26, 0) = ((MR_Box) (Var_55));
            MR_hl_field(0, InitIOConstraint_26, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, InitIOConstraint_26, 2) = ((MR_Box) (Context_18));
            MR_hl_field(0, InitIOConstraint_26, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, InitIOConstraint_26, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_64 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
          {
            Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_63, 0) = ((MR_Box) (OuterFinal_24));
            MR_hl_field(0, Var_63, 1) = ((MR_Box) (Var_64));
          }
          {
            Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
            MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            FinalStmConstraint_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FinalStmConstraint_27, 0) = ((MR_Box) (Var_62));
            MR_hl_field(0, FinalStmConstraint_27, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, FinalStmConstraint_27, 2) = ((MR_Box) (Context_18));
            MR_hl_field(0, FinalStmConstraint_27, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, FinalStmConstraint_27, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_71 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          {
            Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_70, 0) = ((MR_Box) (OuterFinal_24));
            MR_hl_field(0, Var_70, 1) = ((MR_Box) (Var_71));
          }
          {
            Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
            MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            FinalIOConstraint_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FinalIOConstraint_28, 0) = ((MR_Box) (Var_69));
            MR_hl_field(0, FinalIOConstraint_28, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, FinalIOConstraint_28, 2) = ((MR_Box) (Context_18));
            MR_hl_field(0, FinalIOConstraint_28, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, FinalIOConstraint_28, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          switch (GoalType_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                MR_Word Var_98;
                MR_Word Var_99;
                MR_Word STATE_VARIABLE_TCInfo_9_100;
                MR_Word Var_103;
                MR_Word Var_104;

                {
                  Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_98, 0) = ((MR_Box) (InitStmConstraint_25));
                  MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_99, 0) = ((MR_Box) (OuterInit_23));
                  MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                check_hlds__old_type_constraints__add_type_constraint_4_p_0(Var_98, Var_99, STATE_VARIABLE_TCInfo_4_47, &STATE_VARIABLE_TCInfo_9_100);
                {
                  Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_103, 0) = ((MR_Box) (FinalStmConstraint_27));
                  MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_104, 0) = ((MR_Box) (OuterFinal_24));
                  MR_hl_field(1, Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                check_hlds__old_type_constraints__add_type_constraint_4_p_0(Var_103, Var_104, STATE_VARIABLE_TCInfo_9_100, &STATE_VARIABLE_TCInfo_6_84);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_88;
                MR_Word Var_89;
                MR_Word STATE_VARIABLE_TCInfo_7_90;
                MR_Word Var_93;
                MR_Word Var_94;

                {
                  Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_88, 0) = ((MR_Box) (InitIOConstraint_26));
                  MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_89, 0) = ((MR_Box) (OuterInit_23));
                  MR_hl_field(1, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                check_hlds__old_type_constraints__add_type_constraint_4_p_0(Var_88, Var_89, STATE_VARIABLE_TCInfo_4_47, &STATE_VARIABLE_TCInfo_7_90);
                {
                  Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_93, 0) = ((MR_Box) (FinalIOConstraint_28));
                  MR_hl_field(1, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_94, 0) = ((MR_Box) (OuterFinal_24));
                  MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                check_hlds__old_type_constraints__add_type_constraint_4_p_0(Var_93, Var_94, STATE_VARIABLE_TCInfo_7_90, &STATE_VARIABLE_TCInfo_6_84);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_76;
                MR_Word Var_77;
                MR_Word STATE_VARIABLE_TCInfo_5_78;
                MR_Word Var_79;
                MR_Word Var_82;
                MR_Word Var_83;
                MR_Word Var_85;

                {
                  Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_79, 0) = ((MR_Box) (InitIOConstraint_26));
                  MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_76, 0) = ((MR_Box) (InitStmConstraint_25));
                  MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_79));
                }
                {
                  Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_77, 0) = ((MR_Box) (OuterInit_23));
                  MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                check_hlds__old_type_constraints__add_type_constraint_4_p_0(Var_76, Var_77, STATE_VARIABLE_TCInfo_4_47, &STATE_VARIABLE_TCInfo_5_78);
                {
                  Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_85, 0) = ((MR_Box) (FinalIOConstraint_28));
                  MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_82, 0) = ((MR_Box) (FinalStmConstraint_27));
                  MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_85));
                }
                {
                  Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_83, 0) = ((MR_Box) (OuterFinal_24));
                  MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                check_hlds__old_type_constraints__add_type_constraint_4_p_0(Var_82, Var_83, STATE_VARIABLE_TCInfo_5_78, &STATE_VARIABLE_TCInfo_6_84);
              }
              break;
          }
          {
            Var_108 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_108, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[3]));
            MR_hl_field(0, Var_108, 1) = ((MR_Box) (check_hlds__old_type_constraints__shorthand_goal_to_constraint_5_p_0_8));
            MR_hl_field(0, Var_108, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_108, 3) = ((MR_Box) (Environment_6));
          }
          {
            Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_109, 0) = ((MR_Box) (Main_15));
            MR_hl_field(1, Var_109, 1) = ((MR_Box) (Alternatives_16));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0), Var_108, Var_109, ((MR_Box) (STATE_VARIABLE_TCInfo_6_84)), &conv13_STATE_VARIABLE_TCInfo_41);
          STATE_VARIABLE_TCInfo_41 = ((MR_Word) (conv13_STATE_VARIABLE_TCInfo_41));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MaybeIO_29 = ((MR_Word) ((MR_hl_field(2, Shorthand_10, 0))));
          MR_Word SubGoal_31 = ((MR_Word) ((MR_hl_field(2, Shorthand_10, 2))));
          MR_Word STATE_VARIABLE_TCInfo_15_135;
          MR_Word Context_141;
          MR_Word next_value_of_tscc_proc_1_input_1_Environment_5;
          MR_Word next_value_of_tscc_proc_1_input_2_Goal_6;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;

          Context_141 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
          if ((MaybeIO_29 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_TCInfo_15_135 = STATE_VARIABLE_TCInfo_0_40;
          else
          {
            MR_Word IOVarA_32;
            MR_Word IOVarB_33;
            MR_Word InitA_34;
            MR_Word InitB_35;
            MR_Word ConstraintA_36;
            MR_Word ConstraintB_37;
            MR_Word Var_111 = ((MR_Word) ((MR_hl_field(1, MaybeIO_29, 0))));
            MR_Word STATE_VARIABLE_TCInfo_12_112;
            MR_Word STATE_VARIABLE_TCInfo_13_113;
            MR_Word Var_114;
            MR_Word Var_115;
            MR_Word Var_116;
            MR_Word Var_121;
            MR_Word Var_122;
            MR_Word Var_123;
            MR_Word Var_128;
            MR_Word Var_129;
            MR_Word STATE_VARIABLE_TCInfo_14_130;
            MR_Word Var_133;
            MR_Word Var_134;

            IOVarA_32 = ((MR_Word) ((MR_hl_field(0, Var_111, 0))));
            IOVarB_33 = ((MR_Word) ((MR_hl_field(0, Var_111, 1))));
            check_hlds__old_type_constraints__get_var_type_4_p_0(IOVarA_32, &InitA_34, STATE_VARIABLE_TCInfo_0_40, &STATE_VARIABLE_TCInfo_12_112);
            check_hlds__old_type_constraints__get_var_type_4_p_0(IOVarB_33, &InitB_35, STATE_VARIABLE_TCInfo_12_112, &STATE_VARIABLE_TCInfo_13_113);
            Var_116 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
            {
              Var_115 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_115, 0) = ((MR_Box) (InitA_34));
              MR_hl_field(0, Var_115, 1) = ((MR_Box) (Var_116));
            }
            {
              Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_114, 0) = ((MR_Box) (Var_115));
              MR_hl_field(1, Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ConstraintA_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ConstraintA_36, 0) = ((MR_Box) (Var_114));
              MR_hl_field(0, ConstraintA_36, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(0, ConstraintA_36, 2) = ((MR_Box) (Context_141));
              MR_hl_field(0, ConstraintA_36, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, ConstraintA_36, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_123 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
            {
              Var_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_122, 0) = ((MR_Box) (InitB_35));
              MR_hl_field(0, Var_122, 1) = ((MR_Box) (Var_123));
            }
            {
              Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_121, 0) = ((MR_Box) (Var_122));
              MR_hl_field(1, Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ConstraintB_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ConstraintB_37, 0) = ((MR_Box) (Var_121));
              MR_hl_field(0, ConstraintB_37, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(0, ConstraintB_37, 2) = ((MR_Box) (Context_141));
              MR_hl_field(0, ConstraintB_37, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, ConstraintB_37, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_128, 0) = ((MR_Box) (ConstraintA_36));
              MR_hl_field(1, Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_129, 0) = ((MR_Box) (InitA_34));
              MR_hl_field(1, Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            check_hlds__old_type_constraints__add_type_constraint_4_p_0(Var_128, Var_129, STATE_VARIABLE_TCInfo_13_113, &STATE_VARIABLE_TCInfo_14_130);
            {
              Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_133, 0) = ((MR_Box) (ConstraintB_37));
              MR_hl_field(1, Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_134, 0) = ((MR_Box) (InitB_35));
              MR_hl_field(1, Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            check_hlds__old_type_constraints__add_type_constraint_4_p_0(Var_133, Var_134, STATE_VARIABLE_TCInfo_14_130, &STATE_VARIABLE_TCInfo_15_135);
          }
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Environment_5 = Environment_6;
          next_value_of_tscc_proc_1_input_2_Goal_6 = SubGoal_31;
          next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = STATE_VARIABLE_TCInfo_15_135;
          tscc_proc_1_input_1_Environment_5 = next_value_of_tscc_proc_1_input_1_Environment_5;
          tscc_proc_1_input_2_Goal_6 = next_value_of_tscc_proc_1_input_2_Goal_6;
          tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;
          goto top_of_proc_1;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_TCInfo_46 = STATE_VARIABLE_TCInfo_41;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_TCInfo_46 = tscc_output_1_STATE_VARIABLE_TCInfo_46;
  return;
}

static void MR_CALL 
check_hlds__old_type_constraints__shorthand_goal_to_constraint_5_p_0(
  MR_Word tscc_proc_2_input_1_Environment_6,
  MR_Word tscc_proc_2_input_2_GoalExpr_7,
  MR_Word tscc_proc_2_input_3_GoalInfo_8,
  MR_Word tscc_proc_2_input_4_STATE_VARIABLE_TCInfo_0_40,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_TCInfo_46)
{
  MR_Word tscc_proc_1_input_1_Environment_5;
  MR_Word tscc_proc_1_input_2_Goal_6;
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;
  MR_Word tscc_output_1_STATE_VARIABLE_TCInfo_46;

  // The code for TSCC PROC 2: pred check_hlds.old_type_constraints.shorthand_goal_to_constraint/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred check_hlds.old_type_constraints.goal_to_constraint/4-0
  ;
  // proc 2 in TSCC: pred check_hlds.old_type_constraints.shorthand_goal_to_constraint/5-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Environment_5 = tscc_proc_1_input_1_Environment_5;
    MR_Word Goal_6 = tscc_proc_1_input_2_Goal_6;
    MR_Word STATE_VARIABLE_TCInfo_0_45 = tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;
    MR_Word STATE_VARIABLE_TCInfo_46;
    MR_bool succeeded;
    MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Goal_6, 0))));
    MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(0, Goal_6, 1))));

    switch (MR_tag((MR_Word) GoalExpr_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_35 = (MR_Word) ((MR_Word) (GoalExpr_8));
          MR_Word next_value_of_tscc_proc_1_input_1_Environment_5 = Environment_5;
          MR_Word next_value_of_tscc_proc_1_input_2_Goal_6 = SubGoal_35;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = STATE_VARIABLE_TCInfo_0_45;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Environment_5 = next_value_of_tscc_proc_1_input_1_Environment_5;
          tscc_proc_1_input_2_Goal_6 = next_value_of_tscc_proc_1_input_2_Goal_6;
          tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        check_hlds__old_type_constraints__unify_goal_to_constraint_5_p_0(Environment_5, GoalExpr_8, GoalInfo_9, STATE_VARIABLE_TCInfo_0_45, &STATE_VARIABLE_TCInfo_46);
        break;
      case (MR_Integer) 2:
        check_hlds__old_type_constraints__plain_call_goal_to_constraint_5_p_0(Environment_5, GoalExpr_8, GoalInfo_9, STATE_VARIABLE_TCInfo_0_45, &STATE_VARIABLE_TCInfo_46);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_8, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__old_type_constraints__generic_call_goal_to_constraint_5_p_0(Environment_5, GoalExpr_8, GoalInfo_9, STATE_VARIABLE_TCInfo_0_45, &STATE_VARIABLE_TCInfo_46);
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredId_86 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));
              MR_Word ForeignArgs_88 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 4))));
              MR_Word Context_92;
              MR_Word ArgVars_93;
              MR_Word ArgTypes0_94;
              MR_Word Preds_95;
              MR_Word Var_103;
              MR_Word PredInfo_96;
              MR_Box conv2_PredInfo_96;

              Context_92 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
              ArgVars_93 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[41]), ForeignArgs_88);
              ArgTypes0_94 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[42]), ForeignArgs_88);
              Var_103 = ((MR_Word) ((MR_hl_field(0, Environment_5, 3))));
              hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(Var_103, &Preds_95);
              succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds_95, ((MR_Box) (PredId_86)), &conv2_PredInfo_96);
              if (succeeded)
              {
                PredInfo_96 = ((MR_Word) (conv2_PredInfo_96));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word PredTVarSet_97;
                MR_Word NewTVarSet_98;
                MR_Word TVarRenaming_99;
                MR_Word ArgTypes_100;
                MR_Word Var_104;
                MR_Word STATE_VARIABLE_TCInfo_1_105;
                MR_Word Var_106;
                MR_Word Var_117;
                MR_Word Var_118;
                MR_Word Var_119;
                MR_Word Var_120;
                MR_Word Var_122;
                MR_Box conv4_STATE_VARIABLE_TCInfo_46;

                hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_96, &PredTVarSet_97);
                Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_45, 4))));
                parse_tree__prog_data__tvarset_merge_renaming_4_p_0(Var_104, PredTVarSet_97, &NewTVarSet_98, &TVarRenaming_99);
                Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_45, 0))));
                Var_118 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_45, 1))));
                Var_119 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_45, 2))));
                Var_120 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_45, 3))));
                Var_122 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_45, 5))));
                {
                  STATE_VARIABLE_TCInfo_1_105 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_TCInfo_1_105, 0) = ((MR_Box) (Var_117));
                  MR_hl_field(0, STATE_VARIABLE_TCInfo_1_105, 1) = ((MR_Box) (Var_118));
                  MR_hl_field(0, STATE_VARIABLE_TCInfo_1_105, 2) = ((MR_Box) (Var_119));
                  MR_hl_field(0, STATE_VARIABLE_TCInfo_1_105, 3) = ((MR_Box) (Var_120));
                  MR_hl_field(0, STATE_VARIABLE_TCInfo_1_105, 4) = ((MR_Box) (NewTVarSet_98));
                  MR_hl_field(0, STATE_VARIABLE_TCInfo_1_105, 5) = ((MR_Box) (Var_122));
                }
                parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(TVarRenaming_99, ArgTypes0_94, &ArgTypes_100);
                {
                  Var_106 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_106, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_11[1]));
                  MR_hl_field(0, Var_106, 1) = ((MR_Box) (check_hlds__old_type_constraints__goal_to_constraint_4_p_0_3));
                  MR_hl_field(0, Var_106, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, Var_106, 3) = ((MR_Box) (Context_92));
                }
                mercury__list__foldl_corresponding_5_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0), Var_106, ArgVars_93, ArgTypes_100, ((MR_Box) (STATE_VARIABLE_TCInfo_1_105)), &conv4_STATE_VARIABLE_TCInfo_46);
                STATE_VARIABLE_TCInfo_46 = ((MR_Word) (conv4_STATE_VARIABLE_TCInfo_46));
              }
              else
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.old_type_constraints.foreign_proc_goal_to_constraint\'/5", (MR_String) "cannot find pred_info for foreign_proc");
                  return;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));
              MR_Word Var_51;
              MR_Box conv6_STATE_VARIABLE_TCInfo_46;

              {
                Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_51, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[3]));
                MR_hl_field(0, Var_51, 1) = ((MR_Box) (check_hlds__old_type_constraints__goal_to_constraint_4_p_0_4));
                MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_51, 3) = ((MR_Box) (Environment_5));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0), Var_51, Goals_34, ((MR_Box) (STATE_VARIABLE_TCInfo_0_45)), &conv6_STATE_VARIABLE_TCInfo_46);
              STATE_VARIABLE_TCInfo_46 = ((MR_Word) (conv6_STATE_VARIABLE_TCInfo_46));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_53;
              MR_Word Goals_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 1))));
              MR_Box conv8_STATE_VARIABLE_TCInfo_46;

              {
                Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_53, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[3]));
                MR_hl_field(0, Var_53, 1) = ((MR_Box) (check_hlds__old_type_constraints__goal_to_constraint_4_p_0_5));
                MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_53, 3) = ((MR_Box) (Environment_5));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0), Var_53, Goals_64, ((MR_Box) (STATE_VARIABLE_TCInfo_0_45)), &conv8_STATE_VARIABLE_TCInfo_46);
              STATE_VARIABLE_TCInfo_46 = ((MR_Word) (conv8_STATE_VARIABLE_TCInfo_46));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 3))));
              MR_Word Var_61;
              MR_Word Goals_66;
              MR_Box conv11_STATE_VARIABLE_TCInfo_46;

              mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[43]), Cases_43, &Goals_66);
              {
                Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_61, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[3]));
                MR_hl_field(0, Var_61, 1) = ((MR_Box) (check_hlds__old_type_constraints__goal_to_constraint_4_p_0_7));
                MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_61, 3) = ((MR_Box) (Environment_5));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0), Var_61, Goals_66, ((MR_Box) (STATE_VARIABLE_TCInfo_0_45)), &conv11_STATE_VARIABLE_TCInfo_46);
              STATE_VARIABLE_TCInfo_46 = ((MR_Word) (conv11_STATE_VARIABLE_TCInfo_46));
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_65 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));
              MR_Word next_value_of_tscc_proc_1_input_1_Environment_5 = Environment_5;
              MR_Word next_value_of_tscc_proc_1_input_2_Goal_6 = SubGoal_65;
              MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = STATE_VARIABLE_TCInfo_0_45;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Environment_5 = next_value_of_tscc_proc_1_input_1_Environment_5;
              tscc_proc_1_input_2_Goal_6 = next_value_of_tscc_proc_1_input_2_Goal_6;
              tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));
              MR_Word Then_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 3))));
              MR_Word Else_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 4))));
              MR_Word STATE_VARIABLE_TCInfo_9_57;
              MR_Word STATE_VARIABLE_TCInfo_10_58;
              MR_Word next_value_of_tscc_proc_1_input_1_Environment_5;
              MR_Word next_value_of_tscc_proc_1_input_2_Goal_6;
              MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;

              check_hlds__old_type_constraints__goal_to_constraint_4_p_0(Environment_5, Cond_38, STATE_VARIABLE_TCInfo_0_45, &STATE_VARIABLE_TCInfo_9_57);
              check_hlds__old_type_constraints__goal_to_constraint_4_p_0(Environment_5, Then_39, STATE_VARIABLE_TCInfo_9_57, &STATE_VARIABLE_TCInfo_10_58);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Environment_5 = Environment_5;
              next_value_of_tscc_proc_1_input_2_Goal_6 = Else_40;
              next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = STATE_VARIABLE_TCInfo_10_58;
              tscc_proc_1_input_1_Environment_5 = next_value_of_tscc_proc_1_input_1_Environment_5;
              tscc_proc_1_input_2_Goal_6 = next_value_of_tscc_proc_1_input_2_Goal_6;
              tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word next_value_of_tscc_proc_2_input_1_Environment_6 = Environment_5;
              MR_Word next_value_of_tscc_proc_2_input_2_GoalExpr_7 = GoalExpr_8;
              MR_Word next_value_of_tscc_proc_2_input_3_GoalInfo_8 = GoalInfo_9;
              MR_Word next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_TCInfo_0_40 = STATE_VARIABLE_TCInfo_0_45;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Environment_6 = next_value_of_tscc_proc_2_input_1_Environment_6;
              tscc_proc_2_input_2_GoalExpr_7 = next_value_of_tscc_proc_2_input_2_GoalExpr_7;
              tscc_proc_2_input_3_GoalInfo_8 = next_value_of_tscc_proc_2_input_3_GoalInfo_8;
              tscc_proc_2_input_4_STATE_VARIABLE_TCInfo_0_40 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_TCInfo_0_40;
              goto top_of_proc_2;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_TCInfo_46 = STATE_VARIABLE_TCInfo_46;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Environment_6 = tscc_proc_2_input_1_Environment_6;
    MR_Word GoalExpr_7 = tscc_proc_2_input_2_GoalExpr_7;
    MR_Word GoalInfo_8 = tscc_proc_2_input_3_GoalInfo_8;
    MR_Word STATE_VARIABLE_TCInfo_0_40 = tscc_proc_2_input_4_STATE_VARIABLE_TCInfo_0_40;
    MR_Word STATE_VARIABLE_TCInfo_41;
    MR_Word Shorthand_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 1))));

    switch (MR_tag((MR_Word) Shorthand_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word GoalA_38 = ((MR_Word) ((MR_hl_field(0, Shorthand_10, 0))));
          MR_Word GoalB_39 = ((MR_Word) ((MR_hl_field(0, Shorthand_10, 1))));
          MR_Word STATE_VARIABLE_TCInfo_17_139;
          MR_Word next_value_of_tscc_proc_1_input_1_Environment_5;
          MR_Word next_value_of_tscc_proc_1_input_2_Goal_6;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;

          check_hlds__old_type_constraints__goal_to_constraint_4_p_0(Environment_6, GoalA_38, STATE_VARIABLE_TCInfo_0_40, &STATE_VARIABLE_TCInfo_17_139);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Environment_5 = Environment_6;
          next_value_of_tscc_proc_1_input_2_Goal_6 = GoalB_39;
          next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = STATE_VARIABLE_TCInfo_17_139;
          tscc_proc_1_input_1_Environment_5 = next_value_of_tscc_proc_1_input_1_Environment_5;
          tscc_proc_1_input_2_Goal_6 = next_value_of_tscc_proc_1_input_2_Goal_6;
          tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word GoalType_11 = ((MR_Unsigned) ((MR_hl_field(1, Shorthand_10, 0))) & (MR_Integer) 3);
          MR_Word Outer_12 = ((MR_Word) ((MR_hl_field(1, Shorthand_10, 1))));
          MR_Word Inner_13 = ((MR_Word) ((MR_hl_field(1, Shorthand_10, 2))));
          MR_Word Main_15 = ((MR_Word) ((MR_hl_field(1, Shorthand_10, 4))));
          MR_Word Alternatives_16 = ((MR_Word) ((MR_hl_field(1, Shorthand_10, 5))));
          MR_Word Context_18;
          MR_Word InnerInitVar_19;
          MR_Word InnerFinalVar_20;
          MR_Word OuterInitVar_21;
          MR_Word OuterFinalVar_22;
          MR_Word OuterInit_23;
          MR_Word OuterFinal_24;
          MR_Word InitStmConstraint_25;
          MR_Word InitIOConstraint_26;
          MR_Word FinalStmConstraint_27;
          MR_Word FinalIOConstraint_28;
          MR_Word Var_42;
          MR_Word STATE_VARIABLE_TCInfo_1_43;
          MR_Word Var_44;
          MR_Word STATE_VARIABLE_TCInfo_2_45;
          MR_Word STATE_VARIABLE_TCInfo_3_46;
          MR_Word STATE_VARIABLE_TCInfo_4_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word STATE_VARIABLE_TCInfo_6_84;
          MR_Word Var_108;
          MR_Word Var_109;
          MR_Box conv13_STATE_VARIABLE_TCInfo_41;

          Context_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
          InnerInitVar_19 = ((MR_Word) ((MR_hl_field(0, Inner_13, 0))));
          InnerFinalVar_20 = ((MR_Word) ((MR_hl_field(0, Inner_13, 1))));
          Var_42 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
          check_hlds__old_type_constraints__variable_assignment_constraint_5_p_0(Context_18, InnerInitVar_19, Var_42, STATE_VARIABLE_TCInfo_0_40, &STATE_VARIABLE_TCInfo_1_43);
          Var_44 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
          check_hlds__old_type_constraints__variable_assignment_constraint_5_p_0(Context_18, InnerFinalVar_20, Var_44, STATE_VARIABLE_TCInfo_1_43, &STATE_VARIABLE_TCInfo_2_45);
          OuterInitVar_21 = ((MR_Word) ((MR_hl_field(0, Outer_12, 0))));
          OuterFinalVar_22 = ((MR_Word) ((MR_hl_field(0, Outer_12, 1))));
          check_hlds__old_type_constraints__get_var_type_4_p_0(OuterInitVar_21, &OuterInit_23, STATE_VARIABLE_TCInfo_2_45, &STATE_VARIABLE_TCInfo_3_46);
          check_hlds__old_type_constraints__get_var_type_4_p_0(OuterFinalVar_22, &OuterFinal_24, STATE_VARIABLE_TCInfo_3_46, &STATE_VARIABLE_TCInfo_4_47);
          Var_50 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_49, 0) = ((MR_Box) (OuterInit_23));
            MR_hl_field(0, Var_49, 1) = ((MR_Box) (Var_50));
          }
          {
            Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
            MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            InitStmConstraint_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, InitStmConstraint_25, 0) = ((MR_Box) (Var_48));
            MR_hl_field(0, InitStmConstraint_25, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, InitStmConstraint_25, 2) = ((MR_Box) (Context_18));
            MR_hl_field(0, InitStmConstraint_25, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, InitStmConstraint_25, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_57 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          {
            Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_56, 0) = ((MR_Box) (OuterInit_23));
            MR_hl_field(0, Var_56, 1) = ((MR_Box) (Var_57));
          }
          {
            Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
            MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            InitIOConstraint_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, InitIOConstraint_26, 0) = ((MR_Box) (Var_55));
            MR_hl_field(0, InitIOConstraint_26, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, InitIOConstraint_26, 2) = ((MR_Box) (Context_18));
            MR_hl_field(0, InitIOConstraint_26, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, InitIOConstraint_26, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_64 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
          {
            Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_63, 0) = ((MR_Box) (OuterFinal_24));
            MR_hl_field(0, Var_63, 1) = ((MR_Box) (Var_64));
          }
          {
            Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
            MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            FinalStmConstraint_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FinalStmConstraint_27, 0) = ((MR_Box) (Var_62));
            MR_hl_field(0, FinalStmConstraint_27, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, FinalStmConstraint_27, 2) = ((MR_Box) (Context_18));
            MR_hl_field(0, FinalStmConstraint_27, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, FinalStmConstraint_27, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_71 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          {
            Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_70, 0) = ((MR_Box) (OuterFinal_24));
            MR_hl_field(0, Var_70, 1) = ((MR_Box) (Var_71));
          }
          {
            Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
            MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            FinalIOConstraint_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FinalIOConstraint_28, 0) = ((MR_Box) (Var_69));
            MR_hl_field(0, FinalIOConstraint_28, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, FinalIOConstraint_28, 2) = ((MR_Box) (Context_18));
            MR_hl_field(0, FinalIOConstraint_28, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, FinalIOConstraint_28, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          switch (GoalType_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                MR_Word Var_98;
                MR_Word Var_99;
                MR_Word STATE_VARIABLE_TCInfo_9_100;
                MR_Word Var_103;
                MR_Word Var_104;

                {
                  Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_98, 0) = ((MR_Box) (InitStmConstraint_25));
                  MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_99, 0) = ((MR_Box) (OuterInit_23));
                  MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                check_hlds__old_type_constraints__add_type_constraint_4_p_0(Var_98, Var_99, STATE_VARIABLE_TCInfo_4_47, &STATE_VARIABLE_TCInfo_9_100);
                {
                  Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_103, 0) = ((MR_Box) (FinalStmConstraint_27));
                  MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_104, 0) = ((MR_Box) (OuterFinal_24));
                  MR_hl_field(1, Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                check_hlds__old_type_constraints__add_type_constraint_4_p_0(Var_103, Var_104, STATE_VARIABLE_TCInfo_9_100, &STATE_VARIABLE_TCInfo_6_84);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_88;
                MR_Word Var_89;
                MR_Word STATE_VARIABLE_TCInfo_7_90;
                MR_Word Var_93;
                MR_Word Var_94;

                {
                  Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_88, 0) = ((MR_Box) (InitIOConstraint_26));
                  MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_89, 0) = ((MR_Box) (OuterInit_23));
                  MR_hl_field(1, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                check_hlds__old_type_constraints__add_type_constraint_4_p_0(Var_88, Var_89, STATE_VARIABLE_TCInfo_4_47, &STATE_VARIABLE_TCInfo_7_90);
                {
                  Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_93, 0) = ((MR_Box) (FinalIOConstraint_28));
                  MR_hl_field(1, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_94, 0) = ((MR_Box) (OuterFinal_24));
                  MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                check_hlds__old_type_constraints__add_type_constraint_4_p_0(Var_93, Var_94, STATE_VARIABLE_TCInfo_7_90, &STATE_VARIABLE_TCInfo_6_84);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_76;
                MR_Word Var_77;
                MR_Word STATE_VARIABLE_TCInfo_5_78;
                MR_Word Var_79;
                MR_Word Var_82;
                MR_Word Var_83;
                MR_Word Var_85;

                {
                  Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_79, 0) = ((MR_Box) (InitIOConstraint_26));
                  MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_76, 0) = ((MR_Box) (InitStmConstraint_25));
                  MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_79));
                }
                {
                  Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_77, 0) = ((MR_Box) (OuterInit_23));
                  MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                check_hlds__old_type_constraints__add_type_constraint_4_p_0(Var_76, Var_77, STATE_VARIABLE_TCInfo_4_47, &STATE_VARIABLE_TCInfo_5_78);
                {
                  Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_85, 0) = ((MR_Box) (FinalIOConstraint_28));
                  MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_82, 0) = ((MR_Box) (FinalStmConstraint_27));
                  MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_85));
                }
                {
                  Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_83, 0) = ((MR_Box) (OuterFinal_24));
                  MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                check_hlds__old_type_constraints__add_type_constraint_4_p_0(Var_82, Var_83, STATE_VARIABLE_TCInfo_5_78, &STATE_VARIABLE_TCInfo_6_84);
              }
              break;
          }
          {
            Var_108 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_108, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[3]));
            MR_hl_field(0, Var_108, 1) = ((MR_Box) (check_hlds__old_type_constraints__shorthand_goal_to_constraint_5_p_0_8));
            MR_hl_field(0, Var_108, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_108, 3) = ((MR_Box) (Environment_6));
          }
          {
            Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_109, 0) = ((MR_Box) (Main_15));
            MR_hl_field(1, Var_109, 1) = ((MR_Box) (Alternatives_16));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0), Var_108, Var_109, ((MR_Box) (STATE_VARIABLE_TCInfo_6_84)), &conv13_STATE_VARIABLE_TCInfo_41);
          STATE_VARIABLE_TCInfo_41 = ((MR_Word) (conv13_STATE_VARIABLE_TCInfo_41));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word MaybeIO_29 = ((MR_Word) ((MR_hl_field(2, Shorthand_10, 0))));
          MR_Word SubGoal_31 = ((MR_Word) ((MR_hl_field(2, Shorthand_10, 2))));
          MR_Word STATE_VARIABLE_TCInfo_15_135;
          MR_Word Context_141;
          MR_Word next_value_of_tscc_proc_1_input_1_Environment_5;
          MR_Word next_value_of_tscc_proc_1_input_2_Goal_6;
          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;

          Context_141 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
          if ((MaybeIO_29 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_TCInfo_15_135 = STATE_VARIABLE_TCInfo_0_40;
          else
          {
            MR_Word IOVarA_32;
            MR_Word IOVarB_33;
            MR_Word InitA_34;
            MR_Word InitB_35;
            MR_Word ConstraintA_36;
            MR_Word ConstraintB_37;
            MR_Word Var_111 = ((MR_Word) ((MR_hl_field(1, MaybeIO_29, 0))));
            MR_Word STATE_VARIABLE_TCInfo_12_112;
            MR_Word STATE_VARIABLE_TCInfo_13_113;
            MR_Word Var_114;
            MR_Word Var_115;
            MR_Word Var_116;
            MR_Word Var_121;
            MR_Word Var_122;
            MR_Word Var_123;
            MR_Word Var_128;
            MR_Word Var_129;
            MR_Word STATE_VARIABLE_TCInfo_14_130;
            MR_Word Var_133;
            MR_Word Var_134;

            IOVarA_32 = ((MR_Word) ((MR_hl_field(0, Var_111, 0))));
            IOVarB_33 = ((MR_Word) ((MR_hl_field(0, Var_111, 1))));
            check_hlds__old_type_constraints__get_var_type_4_p_0(IOVarA_32, &InitA_34, STATE_VARIABLE_TCInfo_0_40, &STATE_VARIABLE_TCInfo_12_112);
            check_hlds__old_type_constraints__get_var_type_4_p_0(IOVarB_33, &InitB_35, STATE_VARIABLE_TCInfo_12_112, &STATE_VARIABLE_TCInfo_13_113);
            Var_116 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
            {
              Var_115 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_115, 0) = ((MR_Box) (InitA_34));
              MR_hl_field(0, Var_115, 1) = ((MR_Box) (Var_116));
            }
            {
              Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_114, 0) = ((MR_Box) (Var_115));
              MR_hl_field(1, Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ConstraintA_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ConstraintA_36, 0) = ((MR_Box) (Var_114));
              MR_hl_field(0, ConstraintA_36, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(0, ConstraintA_36, 2) = ((MR_Box) (Context_141));
              MR_hl_field(0, ConstraintA_36, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, ConstraintA_36, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_123 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
            {
              Var_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_122, 0) = ((MR_Box) (InitB_35));
              MR_hl_field(0, Var_122, 1) = ((MR_Box) (Var_123));
            }
            {
              Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_121, 0) = ((MR_Box) (Var_122));
              MR_hl_field(1, Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ConstraintB_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ConstraintB_37, 0) = ((MR_Box) (Var_121));
              MR_hl_field(0, ConstraintB_37, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              MR_hl_field(0, ConstraintB_37, 2) = ((MR_Box) (Context_141));
              MR_hl_field(0, ConstraintB_37, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, ConstraintB_37, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_128, 0) = ((MR_Box) (ConstraintA_36));
              MR_hl_field(1, Var_128, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_129, 0) = ((MR_Box) (InitA_34));
              MR_hl_field(1, Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            check_hlds__old_type_constraints__add_type_constraint_4_p_0(Var_128, Var_129, STATE_VARIABLE_TCInfo_13_113, &STATE_VARIABLE_TCInfo_14_130);
            {
              Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_133, 0) = ((MR_Box) (ConstraintB_37));
              MR_hl_field(1, Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_134, 0) = ((MR_Box) (InitB_35));
              MR_hl_field(1, Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            check_hlds__old_type_constraints__add_type_constraint_4_p_0(Var_133, Var_134, STATE_VARIABLE_TCInfo_14_130, &STATE_VARIABLE_TCInfo_15_135);
          }
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Environment_5 = Environment_6;
          next_value_of_tscc_proc_1_input_2_Goal_6 = SubGoal_31;
          next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = STATE_VARIABLE_TCInfo_15_135;
          tscc_proc_1_input_1_Environment_5 = next_value_of_tscc_proc_1_input_1_Environment_5;
          tscc_proc_1_input_2_Goal_6 = next_value_of_tscc_proc_1_input_2_Goal_6;
          tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_TCInfo_0_45;
          goto top_of_proc_1;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_TCInfo_46 = STATE_VARIABLE_TCInfo_41;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_TCInfo_46 = tscc_output_1_STATE_VARIABLE_TCInfo_46;
  return;
}

static MR_Box MR_CALL 
check_hlds__old_type_constraints__unify_goal_to_constraint_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv12_HeadVar__2_2;

  conv12_HeadVar__2_2 = check_hlds__old_type_constraints__tvar_to_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv12_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__old_type_constraints__unify_goal_to_constraint_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_TVar_6;
  MR_Word conv9_HeadVar__4_4;

  check_hlds__old_type_constraints__get_var_type_4_p_0(((MR_Word) (wrapper_arg_1)), &conv10_TVar_6, ((MR_Word) (wrapper_arg_3)), &conv9_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv10_TVar_6));
  *wrapper_arg_4 = ((MR_Box) (conv9_HeadVar__4_4));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__unify_goal_to_constraint_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv7_Constraint_14;
  MR_Word conv6_STATE_VARIABLE_TCInfo_36;

  succeeded = check_hlds__old_type_constraints__ho_pred_unif_constraint_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv7_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_TCInfo_36);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv7_Constraint_14));
    *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_TCInfo_36));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__unify_goal_to_constraint_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_Constraints_12;
  MR_Word conv3_STATE_VARIABLE_TCInfo_33;

  check_hlds__old_type_constraints__functor_unif_constraint_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv4_Constraints_12, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_TCInfo_33);
  *wrapper_arg_2 = ((MR_Box) (conv4_Constraints_12));
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_TCInfo_33));
}

static void MR_CALL 
check_hlds__old_type_constraints__unify_goal_to_constraint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TVar_6;
  MR_Word conv0_HeadVar__4_4;

  check_hlds__old_type_constraints__get_var_type_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_TVar_6, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_TVar_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
check_hlds__old_type_constraints__unify_goal_to_constraint_5_p_0(
  MR_Word Environment_6,
  MR_Word GoalExpr_7,
  MR_Word GoalInfo_8,
  MR_Word STATE_VARIABLE_TCInfo_0_57,
  MR_Word * STATE_VARIABLE_TCInfo_58)
{
  MR_bool succeeded;
  MR_Word Context_10;
  MR_Word L_11;
  MR_Word RHS_12;
  MR_Word LTVar_16;
  MR_Word Constraints_19;
  MR_Word RelevantTVars_20;
  MR_Word STATE_VARIABLE_TCInfo_1_59;
  MR_Word STATE_VARIABLE_TCInfo_2_60;

  Context_10 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
  L_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr_7, 0))));
  RHS_12 = ((MR_Word) ((MR_hl_field(1, GoalExpr_7, 1))));
  check_hlds__old_type_constraints__get_var_type_4_p_0(L_11, &LTVar_16, STATE_VARIABLE_TCInfo_0_57, &STATE_VARIABLE_TCInfo_1_59);
  switch (MR_tag((MR_Word) RHS_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word R_17 = ((MR_Word) ((MR_hl_field(0, RHS_12, 0))));
        MR_Word RTVar_18;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_70;

        check_hlds__old_type_constraints__get_var_type_4_p_0(R_17, &RTVar_18, STATE_VARIABLE_TCInfo_1_59, &STATE_VARIABLE_TCInfo_2_60);
        Var_64 = check_hlds__old_type_constraints__tvar_to_type_1_f_0(RTVar_18);
        {
          Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_63, 0) = ((MR_Box) (LTVar_16));
          MR_hl_field(0, Var_63, 1) = ((MR_Box) (Var_64));
        }
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
          MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_61, 0) = ((MR_Box) (Var_62));
          MR_hl_field(0, Var_61, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, Var_61, 2) = ((MR_Box) (Context_10));
          MR_hl_field(0, Var_61, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_61, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Constraints_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Constraints_19, 0) = ((MR_Box) (Var_61));
          MR_hl_field(1, Constraints_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_70, 0) = ((MR_Box) (RTVar_18));
          MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          RelevantTVars_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RelevantTVars_20, 0) = ((MR_Box) (LTVar_16));
          MR_hl_field(1, RelevantTVars_20, 1) = ((MR_Box) (Var_70));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ConsId_21 = ((MR_Word) ((MR_hl_field(1, RHS_12, 0))));
        MR_Word Args_23 = ((MR_Word) ((MR_hl_field(1, RHS_12, 2))));
        MR_Word Builtin_24;

        succeeded = check_hlds__old_type_constraints__builtin_atomic_type_2_p_0(ConsId_21, &Builtin_24);
        if (succeeded)
        {
          MR_Word SimpleConstraint_25;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Word Var_74;

          {
            Var_72 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_72, 0) = ((MR_Box) (Builtin_24));
          }
          {
            SimpleConstraint_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SimpleConstraint_25, 0) = ((MR_Box) (LTVar_16));
            MR_hl_field(0, SimpleConstraint_25, 1) = ((MR_Box) (Var_72));
          }
          {
            Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_74, 0) = ((MR_Box) (SimpleConstraint_25));
            MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_73 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_73, 0) = ((MR_Box) (Var_74));
            MR_hl_field(0, Var_73, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(0, Var_73, 2) = ((MR_Box) (Context_10));
            MR_hl_field(0, Var_73, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Var_73, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Constraints_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Constraints_19, 0) = ((MR_Box) (Var_73));
            MR_hl_field(1, Constraints_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            RelevantTVars_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, RelevantTVars_20, 0) = ((MR_Box) (LTVar_16));
            MR_hl_field(1, RelevantTVars_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_TCInfo_2_60 = STATE_VARIABLE_TCInfo_1_59;
        }
        else
        {
          MR_Word Name_26;
          MR_Integer Arity_27;
          MR_Word TypeInfo_125_125;
          MR_Word Var_81;
          MR_Integer Var_157;

          succeeded = ((MR_tag((MR_Word) ConsId_21)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_81 = (MR_Word) (MR_body((MR_Word) (ConsId_21), (MR_Integer) 1));
            Name_26 = ((MR_Word) ((MR_hl_field(0, Var_81, 0))));
            Arity_27 = ((MR_Integer) ((MR_hl_field(0, Var_81, 1))));
            TypeInfo_125_125 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]);
            Var_157 = mercury__list__length_1_f_0(TypeInfo_125_125, Args_23);
            succeeded = (Arity_27 == Var_157);
          }
          if (succeeded)
          {
            MR_Word ArgTypeVars_29;
            MR_Word FuncEnv_32;
            MR_Word PredEnv_33;
            MR_Word TypeConstraints_36;
            MR_Word PredIds_37;
            MR_Word PredConstraints_41;
            MR_Word STATE_VARIABLE_TCInfo_3_83;
            MR_Word STATE_VARIABLE_TCInfo_4_85;
            MR_Word STATE_VARIABLE_TCInfo_5_88;
            MR_Box conv2_STATE_VARIABLE_TCInfo_3_83;
            MR_Word ConsDefns_35;
            MR_Word DuCtor_34;

            mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[38]), Args_23, &ArgTypeVars_29, ((MR_Box) (STATE_VARIABLE_TCInfo_1_59)), &conv2_STATE_VARIABLE_TCInfo_3_83);
            STATE_VARIABLE_TCInfo_3_83 = ((MR_Word) (conv2_STATE_VARIABLE_TCInfo_3_83));
            FuncEnv_32 = ((MR_Word) ((MR_hl_field(0, Environment_6, 2))));
            PredEnv_33 = ((MR_Word) ((MR_hl_field(0, Environment_6, 3))));
            DuCtor_34 = (MR_Word) (MR_body((MR_Word) (ConsId_21), (MR_Integer) 1));
            succeeded = hlds__hlds_cons__search_cons_table_3_p_0(FuncEnv_32, DuCtor_34, &ConsDefns_35);
            if (succeeded)
            {
              MR_Word Var_84;
              MR_Box conv5_STATE_VARIABLE_TCInfo_4_85;

              {
                Var_84 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_84, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_4[2]));
                MR_hl_field(0, Var_84, 1) = ((MR_Box) (check_hlds__old_type_constraints__unify_goal_to_constraint_5_p_0_2));
                MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_84, 3) = ((MR_Box) (LTVar_16));
                MR_hl_field(0, Var_84, 4) = ((MR_Box) (ArgTypeVars_29));
                MR_hl_field(0, Var_84, 5) = ((MR_Box) (GoalInfo_8));
              }
              mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_cons__hlds__hlds_cons__type_ctor_info_hlds_cons_defn_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0), Var_84, ConsDefns_35, &TypeConstraints_36, ((MR_Box) (STATE_VARIABLE_TCInfo_3_83)), &conv5_STATE_VARIABLE_TCInfo_4_85);
              STATE_VARIABLE_TCInfo_4_85 = ((MR_Word) (conv5_STATE_VARIABLE_TCInfo_4_85));
            }
            else
            {
              TypeConstraints_36 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_TCInfo_4_85 = STATE_VARIABLE_TCInfo_3_83;
            }
            hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredEnv_33, (MR_Integer) 1, Name_26, &PredIds_37);
            if ((PredIds_37 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              PredConstraints_41 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_TCInfo_5_88 = STATE_VARIABLE_TCInfo_4_85;
            }
            else
            {
              MR_Word Preds_40;
              MR_Word Var_87;
              MR_Box conv8_STATE_VARIABLE_TCInfo_5_88;

              hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredEnv_33, &Preds_40);
              {
                Var_87 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_87, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_12[2]));
                MR_hl_field(0, Var_87, 1) = ((MR_Box) (check_hlds__old_type_constraints__unify_goal_to_constraint_5_p_0_3));
                MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_87, 3) = ((MR_Box) (Preds_40));
                MR_hl_field(0, Var_87, 4) = ((MR_Box) (GoalInfo_8));
                MR_hl_field(0, Var_87, 5) = ((MR_Box) (LTVar_16));
                MR_hl_field(0, Var_87, 6) = ((MR_Box) (ArgTypeVars_29));
              }
              mercury__list__filter_map_foldl_5_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0), Var_87, PredIds_37, &PredConstraints_41, ((MR_Box) (STATE_VARIABLE_TCInfo_4_85)), &conv8_STATE_VARIABLE_TCInfo_5_88);
              STATE_VARIABLE_TCInfo_5_88 = ((MR_Word) (conv8_STATE_VARIABLE_TCInfo_5_88));
            }
            Constraints_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), TypeConstraints_36, PredConstraints_41);
            if ((Constraints_19 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Pieces_42;
              MR_Word ErrMsg_43;
              MR_Word Var_91;
              MR_Word Var_92;
              MR_Word Var_93;

              {
                Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_93, 0) = ((MR_Box) (Name_26));
                MR_hl_field(0, Var_93, 1) = ((MR_Box) (Arity_27));
              }
              {
                Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                MR_hl_field(3, Var_92, 1) = ((MR_Box) (Var_93));
              }
              {
                Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
                MR_hl_field(1, Var_91, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[26])));
              }
              {
                Pieces_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_42, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[24])));
                MR_hl_field(1, Pieces_42, 1) = ((MR_Box) (Var_91));
              }
              {
                ErrMsg_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ErrMsg_43, 0) = ((MR_Box) (Context_10));
                MR_hl_field(0, ErrMsg_43, 1) = ((MR_Box) (Pieces_42));
              }
              check_hlds__old_type_constraints__add_message_to_spec_3_p_0(ErrMsg_43, STATE_VARIABLE_TCInfo_5_88, &STATE_VARIABLE_TCInfo_2_60);
            }
            else
              STATE_VARIABLE_TCInfo_2_60 = STATE_VARIABLE_TCInfo_5_88;
            {
              RelevantTVars_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, RelevantTVars_20, 0) = ((MR_Box) (LTVar_16));
              MR_hl_field(1, RelevantTVars_20, 1) = ((MR_Box) (ArgTypeVars_29));
            }
          }
          else
          {
            MR_Word ErrMsg_124;

            {
              ErrMsg_124 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ErrMsg_124, 0) = ((MR_Box) (Context_10));
              MR_hl_field(0, ErrMsg_124, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[30])));
            }
            check_hlds__old_type_constraints__add_message_to_spec_3_p_0(ErrMsg_124, STATE_VARIABLE_TCInfo_1_59, &STATE_VARIABLE_TCInfo_2_60);
            RelevantTVars_20 = (MR_Word) ((MR_Unsigned) 0U);
            Constraints_19 = (MR_Word) ((MR_Unsigned) 0U);
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Purity_46 = ((((MR_Unsigned) ((MR_hl_field(2, RHS_12, 0))) >> 2)) & (MR_Integer) 3);
        MR_Word PredOrFunc_48 = ((MR_Unsigned) ((MR_hl_field(2, RHS_12, 0))) & (MR_Integer) 1);
        MR_Word ArgVarsModes_50 = ((MR_Word) ((MR_hl_field(2, RHS_12, 2))));
        MR_Word LambdaGoal_52 = ((MR_Word) ((MR_hl_field(2, RHS_12, 4))));
        MR_Word ArgVars_53;
        MR_Word ArgTVars_54;
        MR_Word ArgTypes_55;
        MR_Word LambdaType_56;
        MR_Word STATE_VARIABLE_TCInfo_8_111;
        MR_Word Var_113;
        MR_Word Var_114;
        MR_Word Var_115;
        MR_Box conv11_STATE_VARIABLE_TCInfo_8_111;

        mercury__assoc_list__keys_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes_50, &ArgVars_53);
        mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[39]), ArgVars_53, &ArgTVars_54, ((MR_Box) (STATE_VARIABLE_TCInfo_1_59)), &conv11_STATE_VARIABLE_TCInfo_8_111);
        STATE_VARIABLE_TCInfo_8_111 = ((MR_Word) (conv11_STATE_VARIABLE_TCInfo_8_111));
        ArgTypes_55 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[40]), ArgTVars_54);
        parse_tree__prog_type_construct__construct_higher_order_type_4_p_0(Purity_46, PredOrFunc_48, ArgTypes_55, &LambdaType_56);
        {
          Var_115 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_115, 0) = ((MR_Box) (LTVar_16));
          MR_hl_field(0, Var_115, 1) = ((MR_Box) (LambdaType_56));
        }
        {
          Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_114, 0) = ((MR_Box) (Var_115));
          MR_hl_field(1, Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_113 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_113, 0) = ((MR_Box) (Var_114));
          MR_hl_field(0, Var_113, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, Var_113, 2) = ((MR_Box) (Context_10));
          MR_hl_field(0, Var_113, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_113, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Constraints_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Constraints_19, 0) = ((MR_Box) (Var_113));
          MR_hl_field(1, Constraints_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          RelevantTVars_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RelevantTVars_20, 0) = ((MR_Box) (LTVar_16));
          MR_hl_field(1, RelevantTVars_20, 1) = ((MR_Box) (ArgTVars_54));
        }
        check_hlds__old_type_constraints__goal_to_constraint_4_p_0(Environment_6, LambdaGoal_52, STATE_VARIABLE_TCInfo_8_111, &STATE_VARIABLE_TCInfo_2_60);
      }
      break;
  }
  check_hlds__old_type_constraints__add_type_constraint_4_p_0(Constraints_19, RelevantTVars_20, STATE_VARIABLE_TCInfo_2_60, STATE_VARIABLE_TCInfo_58);
}

static MR_Box MR_CALL 
check_hlds__old_type_constraints__generic_call_goal_to_constraint_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__2_2;

  conv3_HeadVar__2_2 = check_hlds__old_type_constraints__tvar_to_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__old_type_constraints__generic_call_goal_to_constraint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TVar_6;
  MR_Word conv0_HeadVar__4_4;

  check_hlds__old_type_constraints__get_var_type_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_TVar_6, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_TVar_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
check_hlds__old_type_constraints__generic_call_goal_to_constraint_5_p_0(
  MR_Word Environment_6,
  MR_Word GoalExpr_7,
  MR_Word GoalInfo_8,
  MR_Word STATE_VARIABLE_TCInfo_0_45,
  MR_Word * STATE_VARIABLE_TCInfo_46)
{
  MR_bool succeeded;
  MR_Word Details_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 1))));
  MR_Word Vars_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, 2))));
  MR_Word Context_15;
  MR_Word ArgTVars_16;
  MR_Word ArgTypes_17;
  MR_Word STATE_VARIABLE_TCInfo_1_48;
  MR_Box conv2_STATE_VARIABLE_TCInfo_1_48;

  Context_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
  mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[36]), Vars_11, &ArgTVars_16, ((MR_Box) (STATE_VARIABLE_TCInfo_0_45)), &conv2_STATE_VARIABLE_TCInfo_1_48);
  STATE_VARIABLE_TCInfo_1_48 = ((MR_Word) (conv2_STATE_VARIABLE_TCInfo_1_48));
  ArgTypes_17 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[37]), ArgTVars_16);
  switch (MR_tag((MR_Word) Details_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word CallVar_18 = ((MR_Word) ((MR_hl_field(0, Details_10, 0))));
        MR_Word Purity_19 = ((((MR_Unsigned) ((MR_hl_field(0, Details_10, 1))) >> 1)) & (MR_Integer) 3);
        MR_Word PredOrFunc_20 = ((MR_Unsigned) ((MR_hl_field(0, Details_10, 1))) & (MR_Integer) 1);
        MR_Word HOType_23;

        {
          HOType_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, HOType_23, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, HOType_23, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
          MR_hl_field(3, HOType_23, 2) = ((MR_Box) (ArgTypes_17));
          MR_hl_field(3, HOType_23, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, HOType_23, 4) = (MR_Box) ((MR_Unsigned) (Purity_19));
        }
        check_hlds__old_type_constraints__variable_assignment_constraint_5_p_0(Context_15, CallVar_18, HOType_23, STATE_VARIABLE_TCInfo_1_48, STATE_VARIABLE_TCInfo_46);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer MethodNum_25;
        MR_Word ClassId_26 = ((MR_Word) ((MR_hl_field(1, Details_10, 2))));
        MR_Word Name_28;
        MR_Integer Arity_29;
        MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, Details_10, 1))));
        MR_Word ClassDefn_30;
        MR_Word Var_53;
        MR_Box conv4_ClassDefn_30;

        MethodNum_25 = (MR_Integer) (Var_52);
        Name_28 = ((MR_Word) ((MR_hl_field(0, ClassId_26, 0))));
        Arity_29 = ((MR_Integer) ((MR_hl_field(0, ClassId_26, 1))));
        Var_53 = ((MR_Word) ((MR_hl_field(0, Environment_6, 1))));
        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), Var_53, ((MR_Box) (ClassId_26)), &conv4_ClassDefn_30);
        if (succeeded)
        {
          ClassDefn_30 = ((MR_Word) (conv4_ClassDefn_30));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Method_31;
          MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, ClassDefn_30, 8))));
          MR_Box conv5_Method_31;

          succeeded = mercury__list__index0_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0), Var_54, MethodNum_25, &conv5_Method_31);
          if (succeeded)
          {
            Method_31 = ((MR_Word) (conv5_Method_31));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word PredId_34;
            MR_Word Preds_37;
            MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Method_31, 2))));
            MR_Word Var_56;
            MR_Integer Var_57;

            PredId_34 = ((MR_Word) ((MR_hl_field(0, Var_55, 0))));
            Var_56 = ((MR_Word) ((MR_hl_field(0, Environment_6, 3))));
            hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(Var_56, &Preds_37);
            Var_57 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), Vars_11);
            succeeded = check_hlds__old_type_constraints__pred_has_arity_3_p_0(Preds_37, Var_57, PredId_34);
            if (succeeded)
            {
              MR_Word Constraint_38;
              MR_Word PredTVars_39;
              MR_Word TVars_40;
              MR_Word STATE_VARIABLE_TCInfo_3_58;
              MR_Word Var_59;

              check_hlds__old_type_constraints__pred_call_constraint_8_p_0(Preds_37, GoalInfo_8, ArgTVars_16, PredId_34, &Constraint_38, &PredTVars_39, STATE_VARIABLE_TCInfo_1_48, &STATE_VARIABLE_TCInfo_3_58);
              mercury__list__append_3_p_1((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), ArgTVars_16, PredTVars_39, &TVars_40);
              {
                Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_59, 0) = ((MR_Box) (Constraint_38));
                MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              check_hlds__old_type_constraints__add_type_constraint_4_p_0(Var_59, TVars_40, STATE_VARIABLE_TCInfo_3_58, STATE_VARIABLE_TCInfo_46);
            }
            else
            {
              MR_Word Pieces_41;
              MR_Word ErrMsg_42;
              MR_Word Var_64;
              MR_Word Var_67;
              MR_Word Var_68;
              MR_Word Var_69;
              MR_Word Var_72;
              MR_Word Var_73;
              MR_Word Var_74;

              {
                Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, Var_68, 1) = ((MR_Box) (MethodNum_25));
              }
              {
                Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_74, 0) = ((MR_Box) (Name_28));
                MR_hl_field(0, Var_74, 1) = ((MR_Box) (Arity_29));
              }
              {
                Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                MR_hl_field(3, Var_73, 1) = ((MR_Box) (Var_74));
              }
              {
                Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
                MR_hl_field(1, Var_72, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[36])));
              }
              {
                Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_69, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[34])));
                MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_72));
              }
              {
                Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
                MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_69));
              }
              {
                Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[33])));
                MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
              }
              {
                Pieces_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_41, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[32])));
                MR_hl_field(1, Pieces_41, 1) = ((MR_Box) (Var_64));
              }
              {
                ErrMsg_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ErrMsg_42, 0) = ((MR_Box) (Context_15));
                MR_hl_field(0, ErrMsg_42, 1) = ((MR_Box) (Pieces_41));
              }
              check_hlds__old_type_constraints__add_message_to_spec_3_p_0(ErrMsg_42, STATE_VARIABLE_TCInfo_1_48, STATE_VARIABLE_TCInfo_46);
            }
          }
          else
          {
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_86;
            MR_Word Pieces_129;
            MR_Word ErrMsg_130;

            {
              Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_86, 0) = ((MR_Box) (Name_28));
              MR_hl_field(0, Var_86, 1) = ((MR_Box) (Arity_29));
            }
            {
              Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(3, Var_85, 1) = ((MR_Box) (Var_86));
            }
            {
              Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
              MR_hl_field(1, Var_84, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[39])));
            }
            {
              Pieces_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_129, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[37])));
              MR_hl_field(1, Pieces_129, 1) = ((MR_Box) (Var_84));
            }
            {
              ErrMsg_130 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ErrMsg_130, 0) = ((MR_Box) (Context_15));
              MR_hl_field(0, ErrMsg_130, 1) = ((MR_Box) (Pieces_129));
            }
            check_hlds__old_type_constraints__add_message_to_spec_3_p_0(ErrMsg_130, STATE_VARIABLE_TCInfo_1_48, STATE_VARIABLE_TCInfo_46);
          }
        }
        else
        {
          MR_Word Var_96;
          MR_Word Var_97;
          MR_Word Var_98;
          MR_Word Pieces_131;
          MR_Word ErrMsg_132;

          {
            Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_98, 0) = ((MR_Box) (Name_28));
            MR_hl_field(0, Var_98, 1) = ((MR_Box) (Arity_29));
          }
          {
            Var_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_97, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(3, Var_97, 1) = ((MR_Box) (Var_98));
          }
          {
            Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_97));
            MR_hl_field(1, Var_96, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[41])));
          }
          {
            Pieces_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_131, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[37])));
            MR_hl_field(1, Pieces_131, 1) = ((MR_Box) (Var_96));
          }
          {
            ErrMsg_132 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ErrMsg_132, 0) = ((MR_Box) (Context_15));
            MR_hl_field(0, ErrMsg_132, 1) = ((MR_Box) (Pieces_131));
          }
          check_hlds__old_type_constraints__add_message_to_spec_3_p_0(ErrMsg_132, STATE_VARIABLE_TCInfo_1_48, STATE_VARIABLE_TCInfo_46);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Name_139 = ((MR_String) ((MR_hl_field(2, Details_10, 0))));
        MR_Word Var_106 = ((MR_Word) ((MR_hl_field(0, Environment_6, 0))));
        MR_Word _ArgTypes_43;

        succeeded = parse_tree__prog_event__event_arg_types_3_p_0(Var_106, Name_139, &_ArgTypes_43);
        if (succeeded)
        {
          MR_Word ErrMsg_134;

          {
            ErrMsg_134 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ErrMsg_134, 0) = ((MR_Box) (Context_15));
            MR_hl_field(0, ErrMsg_134, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[45])));
          }
          check_hlds__old_type_constraints__add_message_to_spec_3_p_0(ErrMsg_134, STATE_VARIABLE_TCInfo_1_48, STATE_VARIABLE_TCInfo_46);
        }
        else
        {
          MR_Word Var_118;
          MR_Word Var_119;
          MR_Word Pieces_135;
          MR_Word ErrMsg_136;

          {
            Var_119 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_119, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_119, 1) = ((MR_Box) (Name_139));
          }
          {
            Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_118, 0) = ((MR_Box) (Var_119));
            MR_hl_field(1, Var_118, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[36])));
          }
          {
            Pieces_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_135, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[46])));
            MR_hl_field(1, Pieces_135, 1) = ((MR_Box) (Var_118));
          }
          {
            ErrMsg_136 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ErrMsg_136, 0) = ((MR_Box) (Context_15));
            MR_hl_field(0, ErrMsg_136, 1) = ((MR_Box) (Pieces_135));
          }
          check_hlds__old_type_constraints__add_message_to_spec_3_p_0(ErrMsg_136, STATE_VARIABLE_TCInfo_1_48, STATE_VARIABLE_TCInfo_46);
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word CastType_44 = ((MR_Unsigned) ((MR_hl_field(3, Details_10, 0))) & (MR_Integer) 7);

        switch (CastType_44) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            {
            }
            break;
          case (MR_Integer) 3:
            {
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140check_hlds.old_type_constraints.generic_call_goal_to_constraint\'/5", (MR_String) "subtype_coerce");
              return;
            }
            break;
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
        *STATE_VARIABLE_TCInfo_46 = STATE_VARIABLE_TCInfo_1_48;
      }
      break;
  }
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__pred_has_arity_3_p_0(
  MR_Word Preds_4,
  MR_Integer Arity_5,
  MR_Word PredId_6)
{
  MR_bool succeeded;
  MR_Word Pred_7;
  MR_Word PredArgTypes_8;
  MR_Integer Var_12;
  MR_Box conv0_Pred_7;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds_4, ((MR_Box) (PredId_6)), &conv0_Pred_7);
  Pred_7 = ((MR_Word) (conv0_Pred_7));
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(Pred_7, &PredArgTypes_8);
  Var_12 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), PredArgTypes_8);
  succeeded = (Arity_5 == Var_12);
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__variable_assignment_constraint_5_p_0(
  MR_Word Context_6,
  MR_Word Var_7,
  MR_Word Type_8,
  MR_Word STATE_VARIABLE_TCInfo_0_13,
  MR_Word * STATE_VARIABLE_TCInfo_14)
{
  MR_Word TVars_10;
  MR_Word TVar_11;
  MR_Word Constraint_12;
  MR_Word STATE_VARIABLE_TCInfo_1_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_22;
  MR_Word Var_23;

  parse_tree__prog_type_scan__type_vars_in_type_2_p_0(Type_8, &TVars_10);
  check_hlds__old_type_constraints__get_var_type_4_p_0(Var_7, &TVar_11, STATE_VARIABLE_TCInfo_0_13, &STATE_VARIABLE_TCInfo_1_15);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (TVar_11));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (Type_8));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (Var_17));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Constraint_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Constraint_12, 0) = ((MR_Box) (Var_16));
    MR_hl_field(0, Constraint_12, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, Constraint_12, 2) = ((MR_Box) (Context_6));
    MR_hl_field(0, Constraint_12, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Constraint_12, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Constraint_12));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (TVar_11));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (TVars_10));
  }
  check_hlds__old_type_constraints__add_type_constraint_4_p_0(Var_22, Var_23, STATE_VARIABLE_TCInfo_1_15, STATE_VARIABLE_TCInfo_14);
}

static MR_Box MR_CALL 
check_hlds__old_type_constraints__pred_call_constraint_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  conv1_HeadVar__3_3 = check_hlds__old_type_constraints__create_stconstr_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
check_hlds__old_type_constraints__pred_call_constraint_8_p_0(
  MR_Word PredTable_9,
  MR_Word Info_10,
  MR_Word ArgTVars_11,
  MR_Word PredId_12,
  MR_Word * Constraint_13,
  MR_Word * TVars_14,
  MR_Word STATE_VARIABLE_TCInfo_0_27,
  MR_Word * STATE_VARIABLE_TCInfo_28)
{
  MR_bool succeeded;
  MR_Word Context_16;
  MR_Word Constraints_23;
  MR_Word GoalId_26;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word PredInfo_17;
  MR_Box conv0_PredInfo_17;

  Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(Info_10);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_9, ((MR_Box) (PredId_12)), &conv0_PredInfo_17);
  if (succeeded)
  {
    PredInfo_17 = ((MR_Word) (conv0_PredInfo_17));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word PredArgTypes0_18;
    MR_Word PredTVarSet_19;
    MR_Word NewTVarSet_20;
    MR_Word TVarRenaming_21;
    MR_Word PredArgTypes_22;
    MR_Word Var_29;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_57;

    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_17, &PredArgTypes0_18);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_17, &PredTVarSet_19);
    Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_27, 4))));
    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(Var_29, PredTVarSet_19, &NewTVarSet_20, &TVarRenaming_21);
    Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_27, 0))));
    Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_27, 1))));
    Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_27, 2))));
    Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_27, 3))));
    Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_27, 5))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_TCInfo_28 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_52));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_53));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_54));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_55));
      MR_hl_field(0, base, 4) = ((MR_Box) (NewTVarSet_20));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_57));
    }
    parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(TVarRenaming_21, PredArgTypes0_18, &PredArgTypes_22);
    Constraints_23 = mercury__list__map_corresponding_3_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[35]), ArgTVars_11, PredArgTypes_22);
    parse_tree__prog_type_scan__type_vars_in_types_2_p_0(PredArgTypes_22, TVars_14);
  }
  else
  {
    MR_Word Pieces_24;
    MR_Word ErrMsg_25;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Integer Var_36;
    MR_Word Spec_63;
    MR_Word Var_67;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;

    Var_36 = hlds__hlds_pred__pred_id_to_int_1_f_0(PredId_12);
    {
      Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_35, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[26])));
    }
    {
      Pieces_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_24, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[31])));
      MR_hl_field(1, Pieces_24, 1) = ((MR_Box) (Var_34));
    }
    {
      ErrMsg_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ErrMsg_25, 0) = ((MR_Box) (Context_16));
      MR_hl_field(0, ErrMsg_25, 1) = ((MR_Box) (Pieces_24));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (ErrMsg_25));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_63 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_63, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.old_type_constraints.add_message_to_spec\'/3"));
      MR_hl_field(2, Spec_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_63, 2) = ((MR_Box) ((MR_Unsigned) 52U));
      MR_hl_field(2, Spec_63, 3) = ((MR_Box) (Var_67));
    }
    Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_27, 0))));
    Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_27, 1))));
    Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_27, 2))));
    Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_27, 3))));
    Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_27, 4))));
    Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_27, 5))));
    {
      Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_69, 0) = ((MR_Box) (Spec_63));
      MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_70));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_TCInfo_28 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_71));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_72));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_73));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_74));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_75));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_69));
    }
    *TVars_14 = (MR_Word) ((MR_Unsigned) 0U);
    Constraints_23 = (MR_Word) ((MR_Unsigned) 0U);
  }
  GoalId_26 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(Info_10);
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (GoalId_26));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (PredId_12));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Constraint_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Constraints_23));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, base, 2) = ((MR_Box) (Context_16));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_46));
  }
}

static void MR_CALL 
check_hlds__old_type_constraints__plain_call_goal_to_constraint_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Constraint_13;
  MR_Word conv4_TVars_14;
  MR_Word conv3_STATE_VARIABLE_TCInfo_28;

  check_hlds__old_type_constraints__pred_call_constraint_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv5_Constraint_13, &conv4_TVars_14, ((MR_Word) (wrapper_arg_4)), &conv3_STATE_VARIABLE_TCInfo_28);
  *wrapper_arg_2 = ((MR_Box) (conv5_Constraint_13));
  *wrapper_arg_3 = ((MR_Box) (conv4_TVars_14));
  *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_TCInfo_28));
}

static void MR_CALL 
check_hlds__old_type_constraints__plain_call_goal_to_constraint_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TVar_6;
  MR_Word conv0_HeadVar__4_4;

  check_hlds__old_type_constraints__get_var_type_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_TVar_6, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_TVar_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__plain_call_goal_to_constraint_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__old_type_constraints__pred_has_arity_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__plain_call_goal_to_constraint_5_p_0(
  MR_Word Environment_6,
  MR_Word GoalExpr_7,
  MR_Word GoalInfo_8,
  MR_Word STATE_VARIABLE_TCInfo_0_27,
  MR_Word * STATE_VARIABLE_TCInfo_28)
{
  MR_bool succeeded;
  MR_Word PredEnv_13 = ((MR_Word) ((MR_hl_field(0, Environment_6, 3))));
  MR_Word Args_16 = ((MR_Word) ((MR_hl_field(2, GoalExpr_7, 2))));
  MR_Word Name_19 = ((MR_Word) ((MR_hl_field(2, GoalExpr_7, 5))));
  MR_Word PredIds0_20;
  MR_Word Preds_21;
  MR_Word PredIds_22;
  MR_Word ArgTVars_23;
  MR_Word Constraints_24;
  MR_Word PredTVars_25;
  MR_Word TVars_26;
  MR_Word Var_30;
  MR_Integer Var_31;
  MR_Word STATE_VARIABLE_TCInfo_1_33;
  MR_Word Var_34;
  MR_Word STATE_VARIABLE_TCInfo_2_35;
  MR_Word Var_36;
  MR_Box conv2_STATE_VARIABLE_TCInfo_1_33;
  MR_Box conv6_STATE_VARIABLE_TCInfo_2_35;

  hlds__pred_table__predicate_table_lookup_pred_sym_4_p_0(PredEnv_13, (MR_Integer) 1, Name_19, &PredIds0_20);
  hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(PredEnv_13, &Preds_21);
  Var_31 = mercury__list__length_1_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), Args_16);
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[9]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (check_hlds__old_type_constraints__plain_call_goal_to_constraint_5_p_0_1));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (Preds_21));
    MR_hl_field(0, Var_30, 4) = ((MR_Box) (Var_31));
  }
  mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_30, PredIds0_20, &PredIds_22);
  mercury__list__map_foldl_5_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[34]), Args_16, &ArgTVars_23, ((MR_Box) (STATE_VARIABLE_TCInfo_0_27)), &conv2_STATE_VARIABLE_TCInfo_1_33);
  STATE_VARIABLE_TCInfo_1_33 = ((MR_Word) (conv2_STATE_VARIABLE_TCInfo_1_33));
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_12[1]));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (check_hlds__old_type_constraints__plain_call_goal_to_constraint_5_p_0_3));
    MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_34, 3) = ((MR_Box) (Preds_21));
    MR_hl_field(0, Var_34, 4) = ((MR_Box) (GoalInfo_8));
    MR_hl_field(0, Var_34, 5) = ((MR_Box) (ArgTVars_23));
  }
  mercury__list__map2_foldl_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[8]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0), Var_34, PredIds_22, &Constraints_24, &PredTVars_25, ((MR_Box) (STATE_VARIABLE_TCInfo_1_33)), &conv6_STATE_VARIABLE_TCInfo_2_35);
  STATE_VARIABLE_TCInfo_2_35 = ((MR_Word) (conv6_STATE_VARIABLE_TCInfo_2_35));
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (ArgTVars_23));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (PredTVars_25));
  }
  mercury__list__condense_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), Var_36, &TVars_26);
  check_hlds__old_type_constraints__add_type_constraint_4_p_0(Constraints_24, TVars_26, STATE_VARIABLE_TCInfo_2_35, STATE_VARIABLE_TCInfo_28);
}

static void MR_CALL 
check_hlds__old_type_constraints__add_message_to_spec_3_p_0(
  MR_Word ErrMsg_4,
  MR_Word STATE_VARIABLE_TCInfo_0_7,
  MR_Word * STATE_VARIABLE_TCInfo_8)
{
  MR_Word Spec_6;
  MR_Word Var_12;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;

  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (ErrMsg_4));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_6, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.old_type_constraints.add_message_to_spec\'/3"));
    MR_hl_field(2, Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_6, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_6, 3) = ((MR_Box) (Var_12));
  }
  Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_7, 0))));
  Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_7, 1))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_7, 2))));
  Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_7, 3))));
  Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_7, 4))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_7, 5))));
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (Spec_6));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_16));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TCInfo_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_15));
  }
}

static MR_Word MR_CALL 
check_hlds__old_type_constraints__tvar_to_type_1_f_0(
  MR_Word TVar_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (TVar_3));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__2_2;
}

static void MR_CALL 
check_hlds__old_type_constraints__get_var_type_4_p_0(
  MR_Word Var_5,
  MR_Word * TVar_6,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word CC_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
  MR_Word CM_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
  MR_Word VC_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
  MR_Word Errs_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
  MR_Word STATE_VARIABLE_VarMap_0_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
  MR_Word STATE_VARIABLE_TVarSet_0_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
  MR_Word STATE_VARIABLE_VarMap_16;
  MR_Word STATE_VARIABLE_TVarSet_17;
  MR_Word TVar0_13;
  MR_Box conv0_TVar0_13;

  succeeded = mercury__bimap__search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), STATE_VARIABLE_VarMap_0_14, ((MR_Box) (Var_5)), &conv0_TVar0_13);
  if (succeeded)
  {
    TVar0_13 = ((MR_Word) (conv0_TVar0_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *TVar_6 = TVar0_13;
    STATE_VARIABLE_TVarSet_17 = STATE_VARIABLE_TVarSet_0_15;
    STATE_VARIABLE_VarMap_16 = STATE_VARIABLE_VarMap_0_14;
  }
  else
  {
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVar_6, STATE_VARIABLE_TVarSet_0_15, &STATE_VARIABLE_TVarSet_17);
    mercury__bimap__det_insert_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), ((MR_Box) (Var_5)), ((MR_Box) (*TVar_6)), STATE_VARIABLE_VarMap_0_14, &STATE_VARIABLE_VarMap_16);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_VarMap_16));
    MR_hl_field(0, base, 1) = ((MR_Box) (CC_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (CM_9));
    MR_hl_field(0, base, 3) = ((MR_Box) (VC_10));
    MR_hl_field(0, base, 4) = ((MR_Box) (STATE_VARIABLE_TVarSet_17));
    MR_hl_field(0, base, 5) = ((MR_Box) (Errs_12));
  }
}

static void MR_CALL 
check_hlds__old_type_constraints__add_type_constraint_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_VarConstraints_10;

  check_hlds__old_type_constraints__map_var_to_constraint_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_VarConstraints_10);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_VarConstraints_10));
}

static void MR_CALL 
check_hlds__old_type_constraints__add_type_constraint_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_VarConstraints_10;

  check_hlds__old_type_constraints__map_var_to_constraint_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_VarConstraints_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_VarConstraints_10));
}

static void MR_CALL 
check_hlds__old_type_constraints__add_type_constraint_4_p_0(
  MR_Word Constraints_5,
  MR_Word TVars_6,
  MR_Word STATE_VARIABLE_TConstrInfo_0_20,
  MR_Word * STATE_VARIABLE_TConstrInfo_21)
{
  MR_Word VarMap_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TConstrInfo_0_20, 0))));
  MR_Word TVarSet_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TConstrInfo_0_20, 4))));
  MR_Word Errors_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TConstrInfo_0_20, 5))));
  MR_Word STATE_VARIABLE_ConstraintCounter_1_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TConstrInfo_0_20, 1))));
  MR_Word STATE_VARIABLE_ConstraintMap_1_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TConstrInfo_0_20, 2))));
  MR_Word STATE_VARIABLE_VarConstraints_1_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TConstrInfo_0_20, 3))));
  MR_Word STATE_VARIABLE_ConstraintCounter_2_28;
  MR_Word STATE_VARIABLE_ConstraintMap_2_29;
  MR_Word STATE_VARIABLE_VarConstraints_2_31;

  if ((Constraints_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    STATE_VARIABLE_ConstraintCounter_2_28 = STATE_VARIABLE_ConstraintCounter_1_22;
    STATE_VARIABLE_ConstraintMap_2_29 = STATE_VARIABLE_ConstraintMap_1_23;
    STATE_VARIABLE_VarConstraints_2_31 = STATE_VARIABLE_VarConstraints_1_24;
  }
  else
  {
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(1, Constraints_5, 1))));
    MR_Word Var_50 = ((MR_Word) ((MR_hl_field(1, Constraints_5, 0))));

    if ((Var_49 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Constraint_15 = (MR_Word) ((MR_Word) (Var_50));
      MR_Integer Id_19;
      MR_Word Var_30;
      MR_Box conv1_STATE_VARIABLE_VarConstraints_2_31;

      mercury__counter__allocate_3_p_0(&Id_19, STATE_VARIABLE_ConstraintCounter_1_22, &STATE_VARIABLE_ConstraintCounter_2_28);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0), Id_19, ((MR_Box) (Constraint_15)), STATE_VARIABLE_ConstraintMap_1_23, &STATE_VARIABLE_ConstraintMap_2_29);
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_30, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[6]));
        MR_hl_field(0, Var_30, 1) = ((MR_Box) (check_hlds__old_type_constraints__add_type_constraint_4_p_0_1));
        MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_30, 3) = ((MR_Box) (Id_19));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[3]), Var_30, TVars_6, ((MR_Box) (STATE_VARIABLE_VarConstraints_1_24)), &conv1_STATE_VARIABLE_VarConstraints_2_31);
      STATE_VARIABLE_VarConstraints_2_31 = ((MR_Word) (conv1_STATE_VARIABLE_VarConstraints_2_31));
    }
    else
    {
      MR_Word Constraint_42;
      MR_Integer Id_43;
      MR_Word Var_44;
      MR_Box conv3_STATE_VARIABLE_VarConstraints_2_31;

      {
        Constraint_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Constraint_42, 0) = ((MR_Box) (Constraints_5));
        MR_hl_field(1, Constraint_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__counter__allocate_3_p_0(&Id_43, STATE_VARIABLE_ConstraintCounter_1_22, &STATE_VARIABLE_ConstraintCounter_2_28);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0), Id_43, ((MR_Box) (Constraint_42)), STATE_VARIABLE_ConstraintMap_1_23, &STATE_VARIABLE_ConstraintMap_2_29);
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_44, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[6]));
        MR_hl_field(0, Var_44, 1) = ((MR_Box) (check_hlds__old_type_constraints__add_type_constraint_4_p_0_2));
        MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_44, 3) = ((MR_Box) (Id_43));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[3]), Var_44, TVars_6, ((MR_Box) (STATE_VARIABLE_VarConstraints_1_24)), &conv3_STATE_VARIABLE_VarConstraints_2_31);
      STATE_VARIABLE_VarConstraints_2_31 = ((MR_Word) (conv3_STATE_VARIABLE_VarConstraints_2_31));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TConstrInfo_21 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (VarMap_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (STATE_VARIABLE_ConstraintCounter_2_28));
    MR_hl_field(0, base, 2) = ((MR_Box) (STATE_VARIABLE_ConstraintMap_2_29));
    MR_hl_field(0, base, 3) = ((MR_Box) (STATE_VARIABLE_VarConstraints_2_31));
    MR_hl_field(0, base, 4) = ((MR_Box) (TVarSet_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Errors_13));
  }
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__builtin_atomic_type_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 1:
      {
        MR_String String_8;
        MR_Word Var_11 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
        MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, Var_11, 0))));
        MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(0, Var_11, 1))));
        MR_Char Var_10;

        succeeded = (Var_13 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 0);
          if (succeeded)
          {
            String_8 = ((MR_String) ((MR_hl_field(0, Var_12, 0))));
            *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 8U);
            succeeded = mercury__string__char_to_string_2_p_1(&Var_10, String_8);
          }
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 5:
          {
            MR_Word IntConst_3 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
            MR_Word Var_5;

            Var_5 = parse_tree__prog_data__type_of_int_const_1_f_0(IntConst_3);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__2_2 = base;
              MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Var_5));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 6:
          {
            *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 8:
          {
            *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 4U);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word IDCKind_14 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 7);

            *HeadVar__2_2 = ((&check_hlds__old_type_constraints_vector_common_13[0 + IDCKind_14]))->check_hlds__old_type_constraints__vector_common_type_13_0__vct_13_f_0;
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__find_variable_type_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv4_HeadVar__3_3;

  parse_tree__parse_tree_out_type__type_to_debug_string_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__3_3));
}

static void MR_CALL 
check_hlds__old_type_constraints__find_variable_type_9_p_0(
  MR_Word Context_10,
  MR_Word ProgVarSet_11,
  MR_Word TVarSet_12,
  MR_Word VarMap_13,
  MR_Word DomainMap_14,
  MR_Word ReplacementMap_15,
  MR_Word Var_16,
  MR_Word * Type_17,
  MR_Word * MaybeMsg_18)
{
  MR_bool succeeded;
  MR_Word TVar_19;
  MR_Word DefaultType_21;
  MR_Box conv0_TVar_19;
  MR_Word ReplacementType_20;
  MR_Box conv1_ReplacementType_20;
  MR_Word Domain_22;
  MR_Box conv2_Domain_22;

  mercury__bimap__lookup_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), VarMap_13, ((MR_Box) (Var_16)), &conv0_TVar_19);
  TVar_19 = ((MR_Word) (conv0_TVar_19));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), ReplacementMap_15, ((MR_Box) (Var_16)), &conv1_ReplacementType_20);
  if (succeeded)
  {
    ReplacementType_20 = ((MR_Word) (conv1_ReplacementType_20));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    {
      DefaultType_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DefaultType_21, 0) = ((MR_Box) (ReplacementType_20));
      MR_hl_field(0, DefaultType_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  else
    {
      DefaultType_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DefaultType_21, 0) = ((MR_Box) (TVar_19));
      MR_hl_field(0, DefaultType_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), DomainMap_14, ((MR_Box) (TVar_19)), &conv2_Domain_22);
  if (succeeded)
  {
    Domain_22 = ((MR_Word) (conv2_Domain_22));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    switch (MR_tag((MR_Word) Domain_22)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Type_17 = DefaultType_21;
          *MaybeMsg_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Types_23 = ((MR_Word) ((MR_hl_field(1, Domain_22, 0))));
          MR_Word Type0_24;
          MR_Box conv3_Type0_24;

          succeeded = mercury__set__is_singleton_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_23, &conv3_Type0_24);
          if (succeeded)
          {
            Type0_24 = ((MR_Word) (conv3_Type0_24));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            *Type_17 = Type0_24;
            *MaybeMsg_18 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_23);
            if (succeeded)
            {
              *Type_17 = DefaultType_21;
              *MaybeMsg_18 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              MR_String VarName_25;
              MR_Word TypeStrings_26;
              MR_String TypesString_27;
              MR_Word Pieces_28;
              MR_Word Msg_29;
              MR_Word Var_30;
              MR_Word Var_31;
              MR_Word Var_35;
              MR_Word Var_38;
              MR_Word Var_40;
              MR_Word Var_43;
              MR_Word Var_45;
              MR_Word Var_46;
              MR_Word Var_47;
              MR_Word Var_50;
              MR_Word Var_51;

              *Type_17 = DefaultType_21;
              VarName_25 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_11, Var_16);
              {
                Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_30, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[8]));
                MR_hl_field(0, Var_30, 1) = ((MR_Box) (check_hlds__old_type_constraints__find_variable_type_9_p_0_1));
                MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_30, 3) = ((MR_Box) (TVarSet_12));
              }
              Var_31 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_23);
              mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_30, Var_31, &TypeStrings_26);
              TypesString_27 = mercury__string__join_list_2_f_0((MR_String) " or ", TypeStrings_26);
              {
                Var_46 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_46, 0) = ((MR_Box) (VarName_25));
              }
              {
                Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(3, Var_51, 1) = ((MR_Box) (TypesString_27));
              }
              {
                Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
                MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_1[23])));
              }
              {
                Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[22])));
                MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
              }
              {
                Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
                MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
              }
              {
                Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_45));
              }
              {
                Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[21])));
                MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_43));
              }
              {
                Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_40));
              }
              {
                Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[20])));
                MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
              }
              {
                Pieces_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_28, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__old_type_constraints_scalar_common_1[19])));
                MR_hl_field(1, Pieces_28, 1) = ((MR_Box) (Var_35));
              }
              {
                Msg_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Msg_29, 0) = ((MR_Box) (Context_10));
                MR_hl_field(0, Msg_29, 1) = ((MR_Box) (Pieces_28));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeMsg_18 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Msg_29));
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *Type_17 = ((MR_Word) ((MR_hl_field(2, Domain_22, 0))));
          *MaybeMsg_18 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
  else
  {
    *Type_17 = DefaultType_21;
    *MaybeMsg_18 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__has_one_disjunct_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__old_type_constraints__still_active_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__has_one_disjunct_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * C_2)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    *C_2 = (MR_Word) ((MR_Word) (HeadVar__1_1));
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if ((Var_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TypeInfo_18_18;
      MR_Word Var_7;
      MR_Word Var_15;

      mercury__list__filter_3_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[33]), Var_17, &Var_7);
      succeeded = (Var_7 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *C_2 = ((MR_Word) ((MR_hl_field(1, Var_7, 0))));
        Var_15 = ((MR_Word) ((MR_hl_field(1, Var_7, 1))));
        TypeInfo_18_18 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_15)));
      }
    }
    else
    {
      *C_2 = ((MR_Word) ((MR_hl_field(1, Var_16, 0))));
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__set_goal_pred_id_3_p_0(
  MR_Word PredId_4,
  MR_Word Goal0_5,
  MR_Word * MaybeGoal_6)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_7 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 0))));
  MR_Word GoalInfo_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 1))));
  MR_Integer Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word CallSymName_14;

  succeeded = ((MR_tag((MR_Word) GoalExpr0_7)) == (MR_Integer) 2);
  if (succeeded)
  {
    Var_10 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_7, 1))));
    Var_11 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_7, 2))));
    Var_12 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_7, 3))) & (MR_Integer) 1);
    Var_13 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_7, 4))));
    CallSymName_14 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_7, 5))));
    {
      MR_Word GoalExpr_22;
      MR_Word Goal_23;

      {
        GoalExpr_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, GoalExpr_22, 0) = ((MR_Box) (PredId_4));
        MR_hl_field(2, GoalExpr_22, 1) = ((MR_Box) (Var_10));
        MR_hl_field(2, GoalExpr_22, 2) = ((MR_Box) (Var_11));
        MR_hl_field(2, GoalExpr_22, 3) = (MR_Box) ((MR_Unsigned) (Var_12));
        MR_hl_field(2, GoalExpr_22, 4) = ((MR_Box) (Var_13));
        MR_hl_field(2, GoalExpr_22, 5) = ((MR_Box) (CallSymName_14));
      }
      {
        Goal_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Goal_23, 0) = ((MR_Box) (GoalExpr_22));
        MR_hl_field(0, Goal_23, 1) = ((MR_Box) (GoalInfo_8));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeGoal_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Goal_23));
      }
    }
  }
  else
    *MaybeGoal_6 = (MR_Word) (MR_mkword(1, &check_hlds__old_type_constraints_scalar_common_3[0]));
}

static void MR_CALL 
check_hlds__old_type_constraints__apply_pred_data_to_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MaybeGoal_6;

  check_hlds__old_type_constraints__set_goal_pred_id_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_MaybeGoal_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_MaybeGoal_6));
}

static void MR_CALL 
check_hlds__old_type_constraints__apply_pred_data_to_goal_4_p_0(
  MR_Word ForwardGoalPathMap_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Goal_0_12,
  MR_Word * STATE_VARIABLE_Goal_13)
{
  MR_Word GoalId_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Word PredId_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Word GoalPath_9;
  MR_Word Result_10;
  MR_Word Var_14;
  MR_Box conv0_GoalPath_9;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0), (MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0), ForwardGoalPathMap_5, ((MR_Box) (GoalId_6)), &conv0_GoalPath_9);
  GoalPath_9 = ((MR_Word) (conv0_GoalPath_9));
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[7]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (check_hlds__old_type_constraints__apply_pred_data_to_goal_4_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (PredId_7));
  }
  hlds__goal_transform__maybe_transform_goal_at_goal_path_4_p_0(Var_14, GoalPath_9, STATE_VARIABLE_Goal_0_12, &Result_10);
  switch (MR_tag((MR_Word) Result_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.old_type_constraints.apply_pred_data_to_goal\'/4", (MR_String) "not ok");
        return;
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Goal_13 = ((MR_Word) ((MR_hl_field(1, Result_10, 0))));
      break;
  }
}

static void MR_CALL 
check_hlds__old_type_constraints__update_goal_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_Goal_13;

  check_hlds__old_type_constraints__apply_pred_data_to_goal_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Goal_13);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_Goal_13));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__update_goal_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__2_51;

  succeeded = check_hlds__old_type_constraints__IntroducedFrom__pred__update_goal__422__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__2_51);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_51));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__update_goal_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__3_44;

  check_hlds__old_type_constraints__IntroducedFrom__pred__update_goal__420__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__3_44);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__3_44));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__update_goal_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__2_2;

  succeeded = check_hlds__old_type_constraints__pred_constraint_info_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__update_goal_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv3_Msg_6;

  succeeded = check_hlds__old_type_constraints__diagnose_ambig_pred_error_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_Msg_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv3_Msg_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__update_goal_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv2_Cs_5;

  succeeded = check_hlds__old_type_constraints__has_multiple_disjuncts_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_Cs_5);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv2_Cs_5));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__update_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  succeeded = check_hlds__old_type_constraints__pred_constraint_info_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__update_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_C_2;

  succeeded = check_hlds__old_type_constraints__has_one_disjunct_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_C_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_C_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__update_goal_6_p_0(
  MR_Word PredEnv_7,
  MR_Word ConstraintMap_8,
  MR_Word ForwardGoalPathMap_9,
  MR_Word STATE_VARIABLE_Goal_0_19,
  MR_Word * STATE_VARIABLE_Goal_20,
  MR_Word * Errors_11)
{
  MR_bool succeeded;
  MR_Word Disjunctions_12;
  MR_Word Conjunctions_13;
  MR_Word DefinitePredData_14;
  MR_Word AmbigDisjuncts_15;
  MR_Word AmbigPredDatas_16;
  MR_Word AmbigPredData_17;
  MR_Word PredData_18;
  MR_Word Var_24;
  MR_Word Var_28;
  MR_Box conv8_STATE_VARIABLE_Goal_20;

  Disjunctions_12 = mercury__map__values_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0), ConstraintMap_8);
  mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[28]), Disjunctions_12, &Conjunctions_13);
  mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[29]), Conjunctions_13, &DefinitePredData_14);
  mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[5]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[30]), Disjunctions_12, &AmbigDisjuncts_15);
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_7[5]));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (check_hlds__old_type_constraints__update_goal_6_p_0_4));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) (PredEnv_7));
  }
  mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[5]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), Var_24, AmbigDisjuncts_15, Errors_11);
  mercury__list__map_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[5]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[6]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_8[5]), AmbigDisjuncts_15, &AmbigPredDatas_16);
  mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[6]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[32]), AmbigPredDatas_16, &AmbigPredData_17);
  PredData_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[2]), DefinitePredData_14, AmbigPredData_17);
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[5]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (check_hlds__old_type_constraints__update_goal_6_p_0_8));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (ForwardGoalPathMap_9));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[2]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_28, PredData_18, ((MR_Box) (STATE_VARIABLE_Goal_0_19)), &conv8_STATE_VARIABLE_Goal_20);
  *STATE_VARIABLE_Goal_20 = ((MR_Word) (conv8_STATE_VARIABLE_Goal_20));
}

static void MR_CALL 
check_hlds__old_type_constraints__typecheck_one_predicate_if_needed_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_Environment_0_22,
  MR_Word * STATE_VARIABLE_Environment_23,
  MR_Word STATE_VARIABLE_HLDS_0_24,
  MR_Word * STATE_VARIABLE_HLDS_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_bool succeeded;
  MR_Word Preds0_12;
  MR_Word PredInfo_13;
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Environment_0_22, 3))));
  MR_Box conv0_PredInfo_13;

  hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(Var_28, &Preds0_12);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), Preds0_12, ((MR_Box) (PredId_8)), &conv0_PredInfo_13);
  PredInfo_13 = ((MR_Word) (conv0_PredInfo_13));
  {
    MR_Word Origin_41;
    MR_Word SpecialPredId_42;
    MR_Word TypeCtor_43;
    MR_Word TypeTable_44;
    MR_Word TypeDefn_45;
    MR_Word Body_46;
    MR_Word Var_47;
    MR_Word TypeCtorInfo_13_49;
    MR_Word Var_48;

    succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_13);
    if (succeeded)
    {
      hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_13, &Origin_41);
      succeeded = ((MR_tag((MR_Word) Origin_41)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_47 = ((MR_Word) ((MR_hl_field(1, Origin_41, 0))));
        succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 0);
        if (succeeded)
        {
          SpecialPredId_42 = ((MR_Unsigned) ((MR_hl_field(0, Var_47, 0))) & (MR_Integer) 3);
          TypeCtor_43 = ((MR_Word) ((MR_hl_field(0, Var_47, 1))));
          Var_48 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
          TypeCtorInfo_13_49 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
          succeeded = mercury__list__member_2_p_0(TypeCtorInfo_13_49, ((MR_Box) (TypeCtor_43)), Var_48);
          succeeded = !(succeeded);
          if (succeeded)
          {
            hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_HLDS_0_24, &TypeTable_44);
            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(TypeTable_44, TypeCtor_43, &TypeDefn_45);
            hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_45, &Body_46);
            succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(STATE_VARIABLE_HLDS_0_24, SpecialPredId_42, Body_46);
          }
        }
      }
      succeeded = !(succeeded);
    }
  }
  if (!(succeeded))
    succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo_13);
  if (succeeded)
  {
    MR_Word ClausesInfo0_14;
    MR_Word ClausesRep0_15;
    MR_Word IsEmpty_17;
    MR_Word _ItemNumbers_16;

    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_13, &ClausesInfo0_14);
    hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo0_14, &ClausesRep0_15, &_ItemNumbers_16);
    IsEmpty_17 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(ClausesRep0_15);
    switch (IsEmpty_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Environment_23 = STATE_VARIABLE_Environment_0_22;
          *STATE_VARIABLE_HLDS_25 = STATE_VARIABLE_HLDS_0_24;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PredInfo1_18;
          MR_Word Preds_19;
          MR_Word PredEnv0_20;
          MR_Word PredEnv_21;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_37;

          hlds__hlds_pred__pred_info_mark_as_external_2_p_0(PredInfo_13, &PredInfo1_18);
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_8)), ((MR_Box) (PredInfo1_18)), Preds0_12, &Preds_19);
          PredEnv0_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Environment_0_22, 3))));
          hlds__pred_table__predicate_table_set_pred_id_table_3_p_0(Preds_19, PredEnv0_20, &PredEnv_21);
          hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredEnv_21, STATE_VARIABLE_HLDS_0_24, STATE_VARIABLE_HLDS_25);
          Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Environment_0_22, 0))));
          Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Environment_0_22, 1))));
          Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Environment_0_22, 2))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Environment_23 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_35));
            MR_hl_field(0, base, 1) = ((MR_Box) (Var_36));
            MR_hl_field(0, base, 2) = ((MR_Box) (Var_37));
            MR_hl_field(0, base, 3) = ((MR_Box) (PredEnv_21));
          }
        }
        break;
    }
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
  }
  else
    check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0(PredId_8, STATE_VARIABLE_Environment_0_22, STATE_VARIABLE_Environment_23, STATE_VARIABLE_HLDS_0_24, STATE_VARIABLE_HLDS_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
}

static void MR_CALL 
check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv15_STATE_VARIABLE_VarTypes_10;

  check_hlds__old_type_constraints__add_unused_prog_var_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv15_STATE_VARIABLE_VarTypes_10);
  *wrapper_arg_3 = ((MR_Box) (conv15_STATE_VARIABLE_VarTypes_10));
}

static void MR_CALL 
check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_STATE_VARIABLE_TCInfo_8;

  check_hlds__old_type_constraints__add_message_to_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_TCInfo_8);
  *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_TCInfo_8));
}

static void MR_CALL 
check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_Clause_7;

  check_hlds__old_type_constraints__set_clause_body_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_Clause_7);
  *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_Clause_7));
}

static void MR_CALL 
check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_STATE_VARIABLE_Goal_20;
  MR_Word conv10_Errors_11;

  check_hlds__old_type_constraints__update_goal_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv11_STATE_VARIABLE_Goal_20, &conv10_Errors_11);
  *wrapper_arg_2 = ((MR_Box) (conv11_STATE_VARIABLE_Goal_20));
  *wrapper_arg_3 = ((MR_Box) (conv10_Errors_11));
}

static void MR_CALL 
check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_ReplacementMap_35;
  MR_Word conv6_STATE_VARIABLE_DomainMap_37;

  check_hlds__old_type_constraints__unify_equal_tvars_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv7_STATE_VARIABLE_ReplacementMap_35, ((MR_Word) (wrapper_arg_5)), &conv6_STATE_VARIABLE_DomainMap_37);
  *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_ReplacementMap_35));
  *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_DomainMap_37));
}

static void MR_CALL 
check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_TCInfo_46;

  check_hlds__old_type_constraints__goal_to_constraint_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_TCInfo_46);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_TCInfo_46));
}

static void MR_CALL 
check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_BodyGoal_4;

  check_hlds__old_type_constraints__get_clause_body_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_BodyGoal_4);
  *wrapper_arg_2 = ((MR_Box) (conv3_BodyGoal_4));
}

static void MR_CALL 
check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_TCInfo_14;

  check_hlds__old_type_constraints__variable_assignment_constraint_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_TCInfo_14);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_TCInfo_14));
}

static void MR_CALL 
check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_Environment_0_45,
  MR_Word * STATE_VARIABLE_Environment_46,
  MR_Word STATE_VARIABLE_HLDS_0_47,
  MR_Word * STATE_VARIABLE_HLDS_48,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50)
{
  MR_bool succeeded;
  MR_Word TVarSet_20;
  MR_Word Context_21;
  MR_Word VarTable0_22;
  MR_Word ProgVarSet_23;
  MR_Word HeadVars_30;
  MR_Word HeadTypes_31;
  MR_Word HeadTVars_32;
  MR_Word ContainingGoalMap_33;
  MR_Word ForwardGoalPathMap_34;
  MR_Word ClausesRep0_35;
  MR_Word ItemNumbers_36;
  MR_Word DomainMap0_37;
  MR_Word ReplacementMap_38;
  MR_Word DomainMap_39;
  MR_Word PredErrors_40;
  MR_Word VarTypeErrors_41;
  MR_Word NewErrors_42;
  MR_Word ClausesRep_43;
  MR_Word VarTable_44;
  MR_Word STATE_VARIABLE_PredEnv_1_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Environment_0_45, 3))));
  MR_Word STATE_VARIABLE_Preds_1_52;
  MR_Word STATE_VARIABLE_PredInfo_1_53;
  MR_Word STATE_VARIABLE_ClausesInfo_1_54;
  MR_Word STATE_VARIABLE_TCInfo_1_68;
  MR_Word STATE_VARIABLE_ClausesInfo_2_77;
  MR_Word STATE_VARIABLE_Clauses_1_78;
  MR_Word STATE_VARIABLE_Goals_1_80;
  MR_Word Var_81;
  MR_Word STATE_VARIABLE_TCInfo_2_82;
  MR_Word STATE_VARIABLE_TCInfo_3_86;
  MR_Word Var_87;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_94;
  MR_Word STATE_VARIABLE_Goals_2_95;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word STATE_VARIABLE_VarTypes_1_99;
  MR_Word STATE_VARIABLE_Clauses_2_101;
  MR_Word Var_102;
  MR_Word STATE_VARIABLE_TCInfo_4_104;
  MR_Word STATE_VARIABLE_ClausesInfo_3_105;
  MR_Word Var_106;
  MR_Word STATE_VARIABLE_VarTypes_2_107;
  MR_Word STATE_VARIABLE_ClausesInfo_4_108;
  MR_Word STATE_VARIABLE_PredInfo_2_109;
  MR_Word Var_110;
  MR_Word STATE_VARIABLE_PredInfo_3_111;
  MR_Word STATE_VARIABLE_Preds_2_112;
  MR_Word STATE_VARIABLE_PredEnv_2_113;
  MR_Word Var_117;
  MR_Word Var_129;
  MR_Box conv0_STATE_VARIABLE_PredInfo_1_53;
  MR_Word _VarTypes_24;
  MR_Box conv5_STATE_VARIABLE_TCInfo_2_82;
  MR_Box conv9_ReplacementMap_38;
  MR_Box conv8_DomainMap_39;
  MR_Box conv14_STATE_VARIABLE_TCInfo_4_104;
  MR_Box conv16_STATE_VARIABLE_VarTypes_2_107;
  MR_Word Var_144;
  MR_Word Var_145;
  MR_Word Var_146;

  hlds__pred_table__predicate_table_get_pred_id_table_2_p_0(STATE_VARIABLE_PredEnv_1_51, &STATE_VARIABLE_Preds_1_52);
  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_Preds_1_52, ((MR_Box) (PredId_8)), &conv0_STATE_VARIABLE_PredInfo_1_53);
  STATE_VARIABLE_PredInfo_1_53 = ((MR_Word) (conv0_STATE_VARIABLE_PredInfo_1_53));
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_1_53, &TVarSet_20);
  hlds__hlds_pred__pred_info_get_context_2_p_0(STATE_VARIABLE_PredInfo_1_53, &Context_21);
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_1_53, &STATE_VARIABLE_ClausesInfo_1_54);
  hlds__hlds_clauses__clauses_info_get_var_table_2_p_0(STATE_VARIABLE_ClausesInfo_1_54, &VarTable0_22);
  hlds__var_table_hlds__split_var_table_3_p_0(VarTable0_22, &ProgVarSet_23, &_VarTypes_24);
  hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(STATE_VARIABLE_ClausesInfo_1_54, &HeadVars_30);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(STATE_VARIABLE_PredInfo_1_53, &HeadTypes_31);
  parse_tree__prog_type_scan__type_vars_in_types_2_p_0(HeadTypes_31, &HeadTVars_32);
  succeeded = mercury__list__same_length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), HeadTypes_31, HeadVars_30);
  if (succeeded)
  {
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Box conv2_STATE_VARIABLE_TCInfo_1_68;

    {
      Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_66, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_11[1]));
      MR_hl_field(0, Var_66, 1) = ((MR_Box) (check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_1));
      MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_66, 3) = ((MR_Box) (Context_21));
    }
    Var_69 = mercury__bimap__init_0_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]));
    Var_70 = mercury__counter__init_1_f_0((MR_Integer) 0);
    Var_72 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0));
    Var_73 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[3]));
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_67, 0) = ((MR_Box) (Var_69));
      MR_hl_field(0, Var_67, 1) = ((MR_Box) (Var_70));
      MR_hl_field(0, Var_67, 2) = ((MR_Box) (Var_72));
      MR_hl_field(0, Var_67, 3) = ((MR_Box) (Var_73));
      MR_hl_field(0, Var_67, 4) = ((MR_Box) (TVarSet_20));
      MR_hl_field(0, Var_67, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__foldl_corresponding_5_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0), Var_66, HeadVars_30, HeadTypes_31, ((MR_Box) (Var_67)), &conv2_STATE_VARIABLE_TCInfo_1_68);
    STATE_VARIABLE_TCInfo_1_68 = ((MR_Word) (conv2_STATE_VARIABLE_TCInfo_1_68));
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.old_type_constraints.typecheck_one_predicate\'/7", (MR_String) "head variable types vs vars mismatch");
      return;
    }
  hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0(STATE_VARIABLE_HLDS_0_47, &ContainingGoalMap_33, STATE_VARIABLE_ClausesInfo_1_54, &STATE_VARIABLE_ClausesInfo_2_77);
  ForwardGoalPathMap_34 = mdbcomp__goal_path__create_forward_goal_path_map_1_f_0(ContainingGoalMap_33);
  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(STATE_VARIABLE_ClausesInfo_2_77, &ClausesRep0_35, &ItemNumbers_36);
  hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_35, &STATE_VARIABLE_Clauses_1_78);
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[25]), STATE_VARIABLE_Clauses_1_78, &STATE_VARIABLE_Goals_1_80);
  {
    Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_81, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[3]));
    MR_hl_field(0, Var_81, 1) = ((MR_Box) (check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_3));
    MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_81, 3) = ((MR_Box) (STATE_VARIABLE_Environment_0_45));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0), Var_81, STATE_VARIABLE_Goals_1_80, ((MR_Box) (STATE_VARIABLE_TCInfo_1_68)), &conv5_STATE_VARIABLE_TCInfo_2_82);
  STATE_VARIABLE_TCInfo_2_82 = ((MR_Word) (conv5_STATE_VARIABLE_TCInfo_2_82));
  check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0(Context_21, ProgVarSet_23, &DomainMap0_37, STATE_VARIABLE_TCInfo_2_82, &STATE_VARIABLE_TCInfo_3_86);
  Var_90 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]));
  {
    Var_87 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_87, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_12[0]));
    MR_hl_field(0, Var_87, 1) = ((MR_Box) (check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_4));
    MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_87, 3) = ((MR_Box) (STATE_VARIABLE_TCInfo_3_86));
    MR_hl_field(0, Var_87, 4) = ((MR_Box) (Var_90));
  }
  Var_89 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]));
  mercury__list__foldl2_corresponding_7_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[0]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[1]), Var_87, HeadTVars_32, HeadTVars_32, ((MR_Box) (Var_89)), &conv9_ReplacementMap_38, ((MR_Box) (DomainMap0_37)), &conv8_DomainMap_39);
  ReplacementMap_38 = ((MR_Word) (conv9_ReplacementMap_38));
  DomainMap_39 = ((MR_Word) (conv8_DomainMap_39));
  Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_3_86, 2))));
  {
    Var_94 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_94, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_10[1]));
    MR_hl_field(0, Var_94, 1) = ((MR_Box) (check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_5));
    MR_hl_field(0, Var_94, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_94, 3) = ((MR_Box) (STATE_VARIABLE_PredEnv_1_51));
    MR_hl_field(0, Var_94, 4) = ((MR_Box) (Var_96));
    MR_hl_field(0, Var_94, 5) = ((MR_Box) (ForwardGoalPathMap_34));
  }
  mercury__list__map2_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[4]), Var_94, STATE_VARIABLE_Goals_1_80, &STATE_VARIABLE_Goals_2_95, &PredErrors_40);
  Var_129 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_3_86, 0))));
  Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_3_86, 4))));
  check_hlds__old_type_constraints__create_vartypes_map_8_p_0(Context_21, ProgVarSet_23, Var_97, Var_129, DomainMap_39, ReplacementMap_38, &STATE_VARIABLE_VarTypes_1_99, &VarTypeErrors_41);
  mercury__list__map_corresponding_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[26]), STATE_VARIABLE_Goals_2_95, STATE_VARIABLE_Clauses_1_78, &STATE_VARIABLE_Clauses_2_101);
  {
    Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_102, 0) = ((MR_Box) (VarTypeErrors_41));
    MR_hl_field(1, Var_102, 1) = ((MR_Box) (PredErrors_40));
  }
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), Var_102, &NewErrors_42);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[27]), NewErrors_42, ((MR_Box) (STATE_VARIABLE_TCInfo_3_86)), &conv14_STATE_VARIABLE_TCInfo_4_104);
  STATE_VARIABLE_TCInfo_4_104 = ((MR_Word) (conv14_STATE_VARIABLE_TCInfo_4_104));
  hlds__hlds_clauses__set_clause_list_2_p_0(STATE_VARIABLE_Clauses_2_101, &ClausesRep_43);
  hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(ClausesRep_43, ItemNumbers_36, STATE_VARIABLE_ClausesInfo_2_77, &STATE_VARIABLE_ClausesInfo_3_105);
  {
    Var_106 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_106, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[4]));
    MR_hl_field(0, Var_106, 1) = ((MR_Box) (check_hlds__old_type_constraints__typecheck_one_predicate_7_p_0_8));
    MR_hl_field(0, Var_106, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_106, 3) = ((MR_Box) (STATE_VARIABLE_TCInfo_4_104));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&parse_tree__vartypes__parse_tree__vartypes__type_ctor_info_vartypes_0), Var_106, HeadVars_30, ((MR_Box) (STATE_VARIABLE_VarTypes_1_99)), &conv16_STATE_VARIABLE_VarTypes_2_107);
  STATE_VARIABLE_VarTypes_2_107 = ((MR_Word) (conv16_STATE_VARIABLE_VarTypes_2_107));
  hlds__var_table_hlds__make_var_table_4_p_0(STATE_VARIABLE_HLDS_0_47, ProgVarSet_23, STATE_VARIABLE_VarTypes_2_107, &VarTable_44);
  hlds__hlds_clauses__clauses_info_set_var_table_3_p_0(VarTable_44, STATE_VARIABLE_ClausesInfo_3_105, &STATE_VARIABLE_ClausesInfo_4_108);
  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(STATE_VARIABLE_ClausesInfo_4_108, STATE_VARIABLE_PredInfo_1_53, &STATE_VARIABLE_PredInfo_2_109);
  Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_4_104, 4))));
  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(Var_110, STATE_VARIABLE_PredInfo_2_109, &STATE_VARIABLE_PredInfo_3_111);
  mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_8)), ((MR_Box) (STATE_VARIABLE_PredInfo_3_111)), STATE_VARIABLE_Preds_1_52, &STATE_VARIABLE_Preds_2_112);
  hlds__pred_table__predicate_table_set_pred_id_table_3_p_0(STATE_VARIABLE_Preds_2_112, STATE_VARIABLE_PredEnv_1_51, &STATE_VARIABLE_PredEnv_2_113);
  hlds__hlds_module__module_info_set_predicate_table_3_p_0(STATE_VARIABLE_PredEnv_2_113, STATE_VARIABLE_HLDS_0_47, STATE_VARIABLE_HLDS_48);
  Var_144 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Environment_0_45, 0))));
  Var_145 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Environment_0_45, 1))));
  Var_146 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Environment_0_45, 2))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Environment_46 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_144));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_145));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_146));
    MR_hl_field(0, base, 3) = ((MR_Box) (STATE_VARIABLE_PredEnv_2_113));
  }
  Var_117 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_4_104, 5))));
  *STATE_VARIABLE_Specs_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_117, STATE_VARIABLE_Specs_0_49);
}

static void MR_CALL 
check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__4_85;

  check_hlds__old_type_constraints__IntroducedFrom__pred__find_type_constraint_solutions__1208__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_HeadVar__4_85);
  *wrapper_arg_3 = ((MR_Box) (conv8_HeadVar__4_85));
}

static void MR_CALL 
check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_Domain_6;

  check_hlds__old_type_constraints__type_domain_union_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_Domain_6);
  *wrapper_arg_3 = ((MR_Box) (conv7_Domain_6));
}

static void MR_CALL 
check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__4_76;

  check_hlds__old_type_constraints__IntroducedFrom__pred__find_type_constraint_solutions__1197__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_HeadVar__4_76);
  *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__4_76));
}

static void MR_CALL 
check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_Domain_6;

  check_hlds__old_type_constraints__type_domain_union_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_Domain_6);
  *wrapper_arg_3 = ((MR_Box) (conv4_Domain_6));
}

static void MR_CALL 
check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_TCInfo_8;

  check_hlds__old_type_constraints__add_message_to_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_TCInfo_8);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_TCInfo_8));
}

static void MR_CALL 
check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Msg_10;

  check_hlds__old_type_constraints__diagnose_unsatisfiability_error_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_Msg_10);
  *wrapper_arg_2 = ((MR_Box) (conv1_Msg_10));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_TVar_3;

  succeeded = check_hlds__old_type_constraints__has_empty_domain_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_TVar_3);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_TVar_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0(
  MR_Word Context_6,
  MR_Word ProgVarSet_7,
  MR_Word * DomainMap_8,
  MR_Word STATE_VARIABLE_TCInfo_0_29,
  MR_Word * STATE_VARIABLE_TCInfo_30)
{
  MR_bool succeeded;
  MR_Word ConstraintMap0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_29, 2))));
  MR_Word VarConstraints_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_29, 3))));
  MR_Word TVarSet_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_0_29, 4))));
  MR_Word LabeledSolution_16;
  MR_Word Solutions_17;
  MR_Word ConstraintMap_18;
  MR_Word Success_19;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word STATE_VARIABLE_TCInfo_1_42;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;

  Var_31 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0));
  Var_32 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0));
  check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0(TVarSet_14, VarConstraints_13, ConstraintMap0_12, Var_31, Var_32, &LabeledSolution_16);
  Solutions_17 = ((MR_Word) ((MR_hl_field(0, LabeledSolution_16, 0))));
  ConstraintMap_18 = ((MR_Word) ((MR_hl_field(0, LabeledSolution_16, 1))));
  Success_19 = ((MR_Unsigned) ((MR_hl_field(0, LabeledSolution_16, 2))) & (MR_Integer) 1);
  if ((Solutions_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.old_type_constraints.find_type_constraint_solutions\'/5", (MR_String) "cannot find any possible solutions for the type constraints");
      return;
    }
  else
  {
    MR_Word FirstSolution_20 = ((MR_Word) ((MR_hl_field(1, Solutions_17, 0))));
    MR_Word LaterSolutions_21 = ((MR_Word) ((MR_hl_field(1, Solutions_17, 1))));

    switch (Success_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SolutionAssocList_24;
          MR_Word ErrorTVars_25;
          MR_Word ErrorMessages_26;
          MR_Word Var_40;
          MR_Word Var_44;
          MR_Box conv3_STATE_VARIABLE_TCInfo_1_42;
          MR_Box conv6_DomainMap_8;

          mercury__map__to_assoc_list_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), FirstSolution_20, &SolutionAssocList_24);
          mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[4]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[21]), SolutionAssocList_24, &ErrorTVars_25);
          {
            Var_40 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_40, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_11[0]));
            MR_hl_field(0, Var_40, 1) = ((MR_Box) (check_hlds__old_type_constraints__find_type_constraint_solutions_5_p_0_2));
            MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_40, 3) = ((MR_Box) (STATE_VARIABLE_TCInfo_0_29));
            MR_hl_field(0, Var_40, 4) = ((MR_Box) (Context_6));
            MR_hl_field(0, Var_40, 5) = ((MR_Box) (ProgVarSet_7));
          }
          mercury__list__map_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), Var_40, ErrorTVars_25, &ErrorMessages_26);
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[22]), ErrorMessages_26, ((MR_Box) (STATE_VARIABLE_TCInfo_0_29)), &conv3_STATE_VARIABLE_TCInfo_1_42);
          STATE_VARIABLE_TCInfo_1_42 = ((MR_Word) (conv3_STATE_VARIABLE_TCInfo_1_42));
          Var_44 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0));
          mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_8[3]), Solutions_17, ((MR_Box) (Var_44)), &conv6_DomainMap_8);
          *DomainMap_8 = ((MR_Word) (conv6_DomainMap_8));
        }
        break;
      case (MR_Integer) 1:
        {
          if ((LaterSolutions_21 == (MR_Word) ((MR_Unsigned) 0U)))
            *DomainMap_8 = FirstSolution_20;
          else
          {
            MR_Word Var_47;
            MR_Box conv9_DomainMap_8;

            Var_47 = mercury__map__init_0_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0));
            mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_8[4]), Solutions_17, ((MR_Box) (Var_47)), &conv9_DomainMap_8);
            *DomainMap_8 = ((MR_Word) (conv9_DomainMap_8));
          }
          STATE_VARIABLE_TCInfo_1_42 = STATE_VARIABLE_TCInfo_0_29;
        }
        break;
    }
  }
  Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_1_42, 0))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_1_42, 1))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_1_42, 3))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_1_42, 4))));
  Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TCInfo_1_42, 5))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TCInfo_30 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_56));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_57));
    MR_hl_field(0, base, 2) = ((MR_Box) (ConstraintMap_18));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_59));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_60));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_61));
  }
}

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_HeadVar__4_88;

  check_hlds__old_type_constraints__IntroducedFrom__pred__solve_constraint_labeling__1273__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_HeadVar__4_88);
  *wrapper_arg_3 = ((MR_Box) (conv10_HeadVar__4_88));
}

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_Result_6;

  check_hlds__old_type_constraints__merge_type_constraints_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_Result_6);
  *wrapper_arg_3 = ((MR_Box) (conv9_Result_6));
}

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__2_2;

  check_hlds__old_type_constraints__type_constraint_solution_get_constraint_map_2_p_0(((MR_Word) (wrapper_arg_1)), &conv8_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_2));
}

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_HeadVar__2_2;

  check_hlds__old_type_constraints__type_constraint_solution_get_domains_2_p_0(((MR_Word) (wrapper_arg_1)), &conv7_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
}

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__2_2;

  check_hlds__old_type_constraints__type_constraint_solution_get_constraint_map_2_p_0(((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
}

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__2_2;

  check_hlds__old_type_constraints__type_constraint_solution_get_domains_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__old_type_constraints__solution_is_invalid_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_Solution_12;

  check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), &conv4_Solution_12);
  *wrapper_arg_2 = ((MR_Box) (conv4_Solution_12));
}

static MR_Box MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__4_65;

  conv3_HeadVar__4_65 = check_hlds__old_type_constraints__IntroducedFrom__func__solve_constraint_labeling__1246__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__4_65));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = check_hlds__old_type_constraints__to_singleton_type_domain_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Result_8;

  check_hlds__old_type_constraints__domain_size_compare_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Result_8);
  *wrapper_arg_3 = ((MR_Box) (conv1_Result_8));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__old_type_constraints__has_ambiguous_domain_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Domain_6;

  check_hlds__old_type_constraints__type_domain_intersect_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Domain_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_Domain_6));
}

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0(
  MR_Word TVarSet_7,
  MR_Word VarConstraints_8,
  MR_Word ConstraintMap0_9,
  MR_Word DomainMap0_10,
  MR_Word Guesses_11,
  MR_Word * Solution_12)
{
  MR_bool succeeded;
  MR_Word GuessMap_16;
  MR_Word ConstraintMap1_17;
  MR_Word DomainMap1_18;
  MR_Word DomainMaps_19;
  MR_Word ConstraintMap_20;
  MR_Word Success_21;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_97;

  mercury__map__union_4_p_1((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[11]), Guesses_11, DomainMap0_10, &GuessMap_16);
  check_hlds__old_type_constraints__solve_constraint_6_p_0(TVarSet_7, VarConstraints_8, ConstraintMap0_9, &ConstraintMap1_17, GuessMap_16, &DomainMap1_18);
  Var_97 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
  {
    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_97));
  }
  Var_96 = mercury__map__values_1_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), DomainMap1_18);
  succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (Var_95)), Var_96);
  if (succeeded)
  {
    {
      DomainMaps_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, DomainMaps_19, 0) = ((MR_Box) (DomainMap1_18));
      MR_hl_field(1, DomainMaps_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ConstraintMap_20 = ConstraintMap1_17;
    Success_21 = (MR_Integer) 0;
  }
  else
  {
    MR_Word Var_22;
    MR_Word Domains_23;
    MR_Word TypeCtorInfo_25_115;
    MR_Word DomainMap1_101;
    MR_Word AmbigDomains0_102;
    MR_Word Domain0_103;
    MR_Word Domain1_105;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), DomainMap1_18, &DomainMap1_101);
    mercury__list__filter_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[4]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[12]), DomainMap1_101, &AmbigDomains0_102);
    mercury__list__sort_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[4]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[13]), AmbigDomains0_102, &Var_108);
    succeeded = (Var_108 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_109 = ((MR_Word) ((MR_hl_field(1, Var_108, 0))));
      Var_22 = ((MR_Word) ((MR_hl_field(0, Var_109, 0))));
      Domain0_103 = ((MR_Word) ((MR_hl_field(0, Var_109, 1))));
      succeeded = ((MR_tag((MR_Word) Domain0_103)) == (MR_Integer) 1);
      if (succeeded)
      {
        Domain1_105 = ((MR_Word) ((MR_hl_field(1, Domain0_103, 0))));
        TypeCtorInfo_25_115 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
        Var_111 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[14]);
        Var_110 = mercury__set__map_2_f_0(TypeCtorInfo_25_115, (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), Var_111, Domain1_105);
        Domains_23 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), Var_110);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word NewGuesses_24;
      MR_Word Solutions_25;
      MR_Word FailSolutions_26;
      MR_Word SuccessSolutions_27;
      MR_Word RelevantConstraintMaps_29;
      MR_Word Var_40;
      MR_Word Var_41;

      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_40, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_9[0]));
        MR_hl_field(0, Var_40, 1) = ((MR_Box) (check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_5));
        MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_40, 3) = ((MR_Box) (Guesses_11));
        MR_hl_field(0, Var_40, 4) = ((MR_Box) (Var_22));
      }
      NewGuesses_24 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[1]), Var_40, Domains_23);
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_41, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_10[0]));
        MR_hl_field(0, Var_41, 1) = ((MR_Box) (check_hlds__old_type_constraints__solve_constraint_labeling_6_p_0_6));
        MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_41, 3) = ((MR_Box) (TVarSet_7));
        MR_hl_field(0, Var_41, 4) = ((MR_Box) (VarConstraints_8));
        MR_hl_field(0, Var_41, 5) = ((MR_Box) (ConstraintMap1_17));
        MR_hl_field(0, Var_41, 6) = ((MR_Box) (DomainMap1_18));
      }
      mercury__list__map_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[1]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_solution_0), Var_41, NewGuesses_24, &Solutions_25);
      mercury__list__filter_4_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_solution_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[15]), Solutions_25, &FailSolutions_26, &SuccessSolutions_27);
      if ((SuccessSolutions_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word DomainMaps0_28;

        mercury__list__map_3_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_solution_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[9]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[16]), FailSolutions_26, &DomainMaps0_28);
        mercury__list__condense_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[1]), DomainMaps0_28, &DomainMaps_19);
        mercury__list__map_3_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_solution_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[5]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[17]), FailSolutions_26, &RelevantConstraintMaps_29);
        Success_21 = (MR_Integer) 0;
      }
      else
      {
        MR_Word DomainMaps0_50;

        mercury__list__map_3_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_solution_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[9]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[18]), SuccessSolutions_27, &DomainMaps0_50);
        mercury__list__condense_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[1]), DomainMaps0_50, &DomainMaps_19);
        mercury__list__map_3_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_solution_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[5]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[19]), SuccessSolutions_27, &RelevantConstraintMaps_29);
        Success_21 = (MR_Integer) 1;
      }
      if ((RelevantConstraintMaps_29 == (MR_Word) ((MR_Unsigned) 0U)))
        ConstraintMap_20 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0));
      else
      {
        MR_Word RelevantHead_32 = ((MR_Word) ((MR_hl_field(1, RelevantConstraintMaps_29, 0))));
        MR_Word RelevantTail_33 = ((MR_Word) ((MR_hl_field(1, RelevantConstraintMaps_29, 1))));
        MR_Box conv11_ConstraintMap_20;

        mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[5]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[5]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_8[2]), RelevantTail_33, ((MR_Box) (RelevantHead_32)), &conv11_ConstraintMap_20);
        ConstraintMap_20 = ((MR_Word) (conv11_ConstraintMap_20));
      }
    }
    else
    {
      {
        DomainMaps_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, DomainMaps_19, 0) = ((MR_Box) (DomainMap1_18));
        MR_hl_field(1, DomainMaps_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ConstraintMap_20 = ConstraintMap1_17;
      Success_21 = (MR_Integer) 1;
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Solution_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (DomainMaps_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (ConstraintMap_20));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Success_21));
  }
}

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ConstraintMap_24;
  MR_Word conv0_STATE_VARIABLE_DomainMap_26;

  check_hlds__old_type_constraints__propagate_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ConstraintMap_24, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_DomainMap_26);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ConstraintMap_24));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_DomainMap_26));
}

static void MR_CALL 
check_hlds__old_type_constraints__solve_constraint_6_p_0(
  MR_Word TVarSet_7,
  MR_Word VarConstraints_8,
  MR_Word STATE_VARIABLE_ConstraintMap_0_14,
  MR_Word * STATE_VARIABLE_ConstraintMap_15,
  MR_Word STATE_VARIABLE_DomainMap_0_16,
  MR_Word * STATE_VARIABLE_DomainMap_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ConstraintIds_13;
    MR_Word Var_18;
    MR_Word STATE_VARIABLE_ConstraintMap_1_19;
    MR_Word STATE_VARIABLE_DomainMap_1_20;
    MR_Box conv3_STATE_VARIABLE_ConstraintMap_1_19;
    MR_Box conv2_STATE_VARIABLE_DomainMap_1_20;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;

    // setup for model_det tailcalls optimized into a loop
    ;
    ConstraintIds_13 = mercury__map__keys_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0), STATE_VARIABLE_ConstraintMap_0_14);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_18, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_4[1]));
      MR_hl_field(0, Var_18, 1) = ((MR_Box) (check_hlds__old_type_constraints__solve_constraint_6_p_0_1));
      MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_18, 3) = ((MR_Box) (TVarSet_7));
      MR_hl_field(0, Var_18, 4) = ((MR_Box) (VarConstraints_8));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[5]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[1]), Var_18, ConstraintIds_13, ((MR_Box) (STATE_VARIABLE_ConstraintMap_0_14)), &conv3_STATE_VARIABLE_ConstraintMap_1_19, ((MR_Box) (STATE_VARIABLE_DomainMap_0_16)), &conv2_STATE_VARIABLE_DomainMap_1_20);
    STATE_VARIABLE_ConstraintMap_1_19 = ((MR_Word) (conv3_STATE_VARIABLE_ConstraintMap_1_19));
    STATE_VARIABLE_DomainMap_1_20 = ((MR_Word) (conv2_STATE_VARIABLE_DomainMap_1_20));
    Var_34 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_34));
    }
    Var_33 = mercury__map__values_1_f_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), STATE_VARIABLE_DomainMap_1_20);
    succeeded = mercury__list__member_2_p_0((MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0), ((MR_Box) (Var_32)), Var_33);
    if (succeeded)
    {
      *STATE_VARIABLE_DomainMap_17 = STATE_VARIABLE_DomainMap_1_20;
      *STATE_VARIABLE_ConstraintMap_15 = STATE_VARIABLE_ConstraintMap_1_19;
    }
    else
    {
      MR_Word TypeInfo_31_31;

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[5]), ((MR_Box) (STATE_VARIABLE_ConstraintMap_1_19)), ((MR_Box) (STATE_VARIABLE_ConstraintMap_0_14)));
      if (succeeded)
      {
        TypeInfo_31_31 = (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (STATE_VARIABLE_DomainMap_1_20)), ((MR_Box) (STATE_VARIABLE_DomainMap_0_16)));
      }
      if (succeeded)
      {
        *STATE_VARIABLE_DomainMap_17 = STATE_VARIABLE_DomainMap_1_20;
        *STATE_VARIABLE_ConstraintMap_15 = STATE_VARIABLE_ConstraintMap_1_19;
      }
      else
      {
        MR_Word next_value_of_STATE_VARIABLE_ConstraintMap_0_14 = STATE_VARIABLE_ConstraintMap_1_19;
        MR_Word next_value_of_STATE_VARIABLE_DomainMap_0_16 = STATE_VARIABLE_DomainMap_1_20;

        // direct tailcall eliminated
        ;
        STATE_VARIABLE_ConstraintMap_0_14 = next_value_of_STATE_VARIABLE_ConstraintMap_0_14;
        STATE_VARIABLE_DomainMap_0_16 = next_value_of_STATE_VARIABLE_DomainMap_0_16;
        continue;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints__create_vartypes_map_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_30;

  succeeded = check_hlds__old_type_constraints__IntroducedFrom__pred__create_vartypes_map__491__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_30);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_30));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints__create_vartypes_map_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Type_17;
  MR_Word conv0_MaybeMsg_18;

  check_hlds__old_type_constraints__find_variable_type_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), &conv1_Type_17, &conv0_MaybeMsg_18);
  *wrapper_arg_2 = ((MR_Box) (conv1_Type_17));
  *wrapper_arg_3 = ((MR_Box) (conv0_MaybeMsg_18));
}

static void MR_CALL 
check_hlds__old_type_constraints__create_vartypes_map_8_p_0(
  MR_Word Context_9,
  MR_Word ProgVarSet_10,
  MR_Word TVarSet_11,
  MR_Word VarMap_12,
  MR_Word DomainMap_13,
  MR_Word ReplacementMap_14,
  MR_Word * VarTypes_15,
  MR_Word * Errors_16)
{
  MR_bool succeeded;
  MR_Word ProgVars_17;
  MR_Word Types_18;
  MR_Word MaybeErrors_19;
  MR_Word Var_20;

  mercury__bimap__ordinates_2_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[2]), VarMap_12, &ProgVars_17);
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&check_hlds__old_type_constraints_scalar_common_5[0]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (check_hlds__old_type_constraints__create_vartypes_map_8_p_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 6));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (Context_9));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) (ProgVarSet_10));
    MR_hl_field(0, Var_20, 5) = ((MR_Box) (TVarSet_11));
    MR_hl_field(0, Var_20, 6) = ((MR_Box) (VarMap_12));
    MR_hl_field(0, Var_20, 7) = ((MR_Box) (DomainMap_13));
    MR_hl_field(0, Var_20, 8) = ((MR_Box) (ReplacementMap_14));
  }
  mercury__list__map2_4_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[7]), Var_20, ProgVars_17, &Types_18, &MaybeErrors_19);
  mercury__list__filter_map_3_p_0((MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[7]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[10]), MaybeErrors_19, Errors_16);
  parse_tree__vartypes__vartypes_from_corresponding_lists_3_p_0(ProgVars_17, Types_18, VarTypes_15);
}

static void MR_CALL 
check_hlds__old_type_constraints__old_typecheck_constraints_3_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_Environment_23;
  MR_Word conv1_STATE_VARIABLE_HLDS_25;
  MR_Word conv0_STATE_VARIABLE_Specs_27;

  check_hlds__old_type_constraints__typecheck_one_predicate_if_needed_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Environment_23, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_HLDS_25, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_27);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Environment_23));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_HLDS_25));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_27));
}

void MR_CALL 
check_hlds__old_type_constraints__old_typecheck_constraints_3_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15,
  MR_Word * Specs_5)
{
  MR_Word EventEnv_7;
  MR_Word ClassEnv_8;
  MR_Word FuncEnv_9;
  MR_Word PredEnv_10;
  MR_Word Environment0_11;
  MR_Word PredIds_12;
  MR_Word Var_16;
  MR_Box conv5_Var_13;
  MR_Box conv4_STATE_VARIABLE_HLDS_15;
  MR_Box conv3_Specs_5;

  hlds__hlds_module__module_info_get_event_set_2_p_0(STATE_VARIABLE_HLDS_0_14, &Var_16);
  EventEnv_7 = ((MR_Word) ((MR_hl_field(0, Var_16, 1))));
  hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_HLDS_0_14, &ClassEnv_8);
  hlds__hlds_module__module_info_get_cons_table_2_p_0(STATE_VARIABLE_HLDS_0_14, &FuncEnv_9);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_HLDS_0_14, &PredEnv_10);
  {
    Environment0_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Environment0_11, 0) = ((MR_Box) (EventEnv_7));
    MR_hl_field(0, Environment0_11, 1) = ((MR_Box) (ClassEnv_8));
    MR_hl_field(0, Environment0_11, 2) = ((MR_Box) (FuncEnv_9));
    MR_hl_field(0, Environment0_11, 3) = ((MR_Box) (PredEnv_10));
  }
  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_HLDS_0_14, &PredIds_12);
  mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_tconstr_environment_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_1[0]), (MR_Word) (&check_hlds__old_type_constraints_scalar_common_2[9]), PredIds_12, ((MR_Box) (Environment0_11)), &conv5_Var_13, ((MR_Box) (STATE_VARIABLE_HLDS_0_14)), &conv4_STATE_VARIABLE_HLDS_15, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_Specs_5);
  *STATE_VARIABLE_HLDS_15 = ((MR_Word) (conv4_STATE_VARIABLE_HLDS_15));
  *Specs_5 = ((MR_Word) (conv3_Specs_5));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____class_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__old_type_constraints____Unify____class_env_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____class_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__old_type_constraints____Compare____class_env_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____conj_type_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__old_type_constraints____Unify____conj_type_constraint_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____conj_type_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__old_type_constraints____Compare____conj_type_constraint_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____error_specs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__old_type_constraints____Unify____error_specs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____error_specs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__old_type_constraints____Compare____error_specs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____event_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__old_type_constraints____Unify____event_env_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____event_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__old_type_constraints____Compare____event_env_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____func_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__old_type_constraints____Unify____func_env_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____func_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__old_type_constraints____Compare____func_env_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____pred_env_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__old_type_constraints____Unify____pred_env_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____pred_env_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__old_type_constraints____Compare____pred_env_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____prog_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__old_type_constraints____Unify____prog_var_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____prog_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__old_type_constraints____Compare____prog_var_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____simple_prog_var_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__old_type_constraints____Unify____simple_prog_var_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____simple_prog_var_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__old_type_constraints____Compare____simple_prog_var_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____simple_type_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__old_type_constraints____Unify____simple_type_constraint_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____simple_type_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__old_type_constraints____Compare____simple_type_constraint_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____tconstr_activity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__old_type_constraints____Unify____tconstr_activity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____tconstr_activity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__old_type_constraints____Compare____tconstr_activity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____tconstr_environment_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__old_type_constraints____Unify____tconstr_environment_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____tconstr_environment_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__old_type_constraints____Compare____tconstr_environment_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__old_type_constraints____Unify____type_constraint_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__old_type_constraints____Compare____type_constraint_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_counter_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__old_type_constraints____Unify____type_constraint_counter_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_counter_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__old_type_constraints____Compare____type_constraint_counter_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__old_type_constraints____Unify____type_constraint_id_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__old_type_constraints____Compare____type_constraint_id_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__old_type_constraints____Unify____type_constraint_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__old_type_constraints____Compare____type_constraint_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__old_type_constraints____Unify____type_constraint_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__old_type_constraints____Compare____type_constraint_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_set_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__old_type_constraints____Unify____type_constraint_set_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_set_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__old_type_constraints____Compare____type_constraint_set_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_constraint_solution_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__old_type_constraints____Unify____type_constraint_solution_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_constraint_solution_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__old_type_constraints____Compare____type_constraint_solution_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_domain_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__old_type_constraints____Unify____type_domain_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_domain_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__old_type_constraints____Compare____type_domain_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____type_domain_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__old_type_constraints____Unify____type_domain_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____type_domain_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__old_type_constraints____Compare____type_domain_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__old_type_constraints____Unify____var_constraint_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__old_type_constraints____Unify____var_constraint_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__old_type_constraints____Compare____var_constraint_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__old_type_constraints____Compare____var_constraint_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__old_type_constraints__init(void)
{
}

void mercury__check_hlds__old_type_constraints__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_class_env_0);
  MR_register_type_ctor_info(&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_conj_type_constraint_0);
  MR_register_type_ctor_info(&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_error_specs_0);
  MR_register_type_ctor_info(&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_event_env_0);
  MR_register_type_ctor_info(&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_func_env_0);
  MR_register_type_ctor_info(&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_pred_env_0);
  MR_register_type_ctor_info(&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_prog_var_map_0);
  MR_register_type_ctor_info(&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_simple_prog_var_map_0);
  MR_register_type_ctor_info(&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_simple_type_constraint_0);
  MR_register_type_ctor_info(&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_tconstr_activity_0);
  MR_register_type_ctor_info(&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_tconstr_environment_0);
  MR_register_type_ctor_info(&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_0);
  MR_register_type_ctor_info(&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_counter_0);
  MR_register_type_ctor_info(&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_id_0);
  MR_register_type_ctor_info(&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_info_0);
  MR_register_type_ctor_info(&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_map_0);
  MR_register_type_ctor_info(&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_set_0);
  MR_register_type_ctor_info(&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_constraint_solution_0);
  MR_register_type_ctor_info(&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_0);
  MR_register_type_ctor_info(&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_type_domain_map_0);
  MR_register_type_ctor_info(&check_hlds__old_type_constraints__check_hlds__old_type_constraints__type_ctor_info_var_constraint_map_0);
}

void mercury__check_hlds__old_type_constraints__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__old_type_constraints__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.old_type_constraints.
